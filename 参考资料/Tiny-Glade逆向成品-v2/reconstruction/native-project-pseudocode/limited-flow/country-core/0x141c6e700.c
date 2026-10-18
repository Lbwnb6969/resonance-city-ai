// VA 0x141c6e700, PDB extent 583 bytes
// country_core::resources::toolbar::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000141c6fd9d) overlaps instruction at (ram,0x000141c6fd9a)
    */
/* WARNING: Removing unreachable block (ram,0x000141c6f998) */
/* WARNING: Removing unreachable block (ram,0x000141c6f421) */
/* WARNING: Removing unreachable block (ram,0x000141c6faff) */
/* WARNING: Removing unreachable block (ram,0x000141c6fb03) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::toolbar::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
   Extent: 583 */

undefined1 (*) [16] pdb_141c6e700(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 (*pauVar5) [16];
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  undefined7 uVar17;
  ulonglong uVar15;
  int *piVar16;
  byte bVar18;
  int iVar20;
  undefined1 (*UNRECOVERED_JUMPTABLE_00) [16];
  undefined2 uVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  ulonglong unaff_RBX;
  undefined1 (**ppauVar24) [16];
  char **ppcVar25;
  char **ppcVar26;
  undefined1 (**ppauVar27) [16];
  undefined1 (**ppauVar28) [16];
  char **ppcVar29;
  char **ppcVar30;
  longlong unaff_RBP;
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  char *pcVar33;
  undefined1 (*UNRECOVERED_JUMPTABLE) [16];
  undefined1 (*pauVar34) [16];
  undefined *in_R10;
  longlong unaff_R14;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  undefined8 extraout_XMM0_Qb;
  char cVar62;
  ulonglong extraout_XMM0_Qb_00;
  byte bVar63;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  char cVar64;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  undefined1 in_XMM1 [16];
  char cVar87;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auStack_8de9 [36169];
  undefined1 (**ppauStack_a0) [16];
  undefined1 (*apauStack_68 [2]) [16];
  char *pcStack_58;
  undefined1 auStack_50 [24];
  ulonglong uStack_38;
  undefined1 (*pauStack_30) [16];
  uint uVar19;
  
  ppcVar25 = &pcStack_58;
  ppcVar26 = &pcStack_58;
  ppauVar27 = (undefined1 (**) [16])&pcStack_58;
  ppcVar29 = &pcStack_58;
  ppcVar30 = &pcStack_58;
  ppauVar24 = (undefined1 (**) [16])&pcStack_58;
  ppauVar28 = (undefined1 (**) [16])&pcStack_58;
  uVar13 = *(ulonglong *)param_2[2];
  if (uVar13 <= *(ulonglong *)(param_2[2] + 8)) {
LAB_141c6e752:
    uStack_38 = 5;
LAB_141c6e75b:
    apauStack_68[1] = (undefined1 (*) [16])0x141c6e76b;
    uVar12 = pdb_142d84ef0(param_2,&uStack_38);
    *(undefined8 *)(*param_1 + 8) = uVar12;
    (*param_1)[0] = 1;
    return param_1;
  }
  UNRECOVERED_JUMPTABLE = *(undefined1 (**) [16])(param_2[1] + 8);
  pcVar33 = (char *)0x100002600;
  uVar15 = *(ulonglong *)(param_2[2] + 8);
LAB_141c6e72c:
  uVar11 = uVar15 + 1;
  pauVar34 = (undefined1 (*) [16])(ulonglong)(byte)(*UNRECOVERED_JUMPTABLE)[uVar15];
  if (pauVar34 < (undefined1 (*) [16])0x23) {
    if ((0x100002600U >> ((ulonglong)pauVar34 & 0x3f) & 1) != 0) goto code_r0x000141c6e73e;
    pauVar22 = param_2;
    if (pauVar34 != (undefined1 (*) [16])0x22) goto LAB_141c6e7a5;
    goto code_r0x000141c6e77d;
  }
LAB_141c6e7a5:
  if ((*UNRECOVERED_JUMPTABLE)[uVar15] != 0x7b) {
    uStack_38 = 10;
    goto LAB_141c6e75b;
  }
  pcVar1 = param_2[4] + 8;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 == '\0') {
    uStack_38 = 0x18;
    goto LAB_141c6e75b;
  }
  *(ulonglong *)(param_2[2] + 8) = uVar11;
  apauStack_68[1] = (undefined1 (*) [16])0x141c6e7c9;
  auVar40._0_8_ = pdb_141653e00(&uStack_38);
  auVar40._8_8_ = extraout_XMM0_Qb_00;
  pauVar31 = (undefined1 (*) [16])(uStack_38 & 0xff);
  pauVar22 = (undefined1 (*) [16])&UNK_1433a39cc;
  uVar13 = (ulonglong)*(int *)(&UNK_1433a39cc + (longlong)pauVar31 * 4);
  bVar35 = 0xfffffffebcc5c633 < uVar13;
  bVar38 = SCARRY8(uVar13,0x1433a39cc);
  UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(&UNK_1433a39cc + uVar13);
  bVar37 = (longlong)UNRECOVERED_JUMPTABLE_00 < 0;
  bVar36 = UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0;
  cVar9 = (char)auVar40._0_8_;
  bVar18 = (byte)UNRECOVERED_JUMPTABLE_00;
  uVar19 = (uint)UNRECOVERED_JUMPTABLE_00;
  bVar7 = (byte)pauStack_30;
  uVar10 = (uint)pauStack_30;
  uVar17 = (undefined7)((ulonglong)pauStack_30 >> 8);
  cVar64 = in_XMM1[0];
  cVar49 = (char)((ulonglong)auVar40._0_8_ >> 8);
  cVar50 = (char)((ulonglong)auVar40._0_8_ >> 0x10);
  cVar51 = (char)((ulonglong)auVar40._0_8_ >> 0x18);
  cVar52 = (char)((ulonglong)auVar40._0_8_ >> 0x20);
  cVar53 = (char)((ulonglong)auVar40._0_8_ >> 0x28);
  cVar54 = (char)((ulonglong)auVar40._0_8_ >> 0x30);
  cVar55 = (char)extraout_XMM0_Qb_00;
  cVar57 = (char)(extraout_XMM0_Qb_00 >> 0x10);
  cVar59 = (char)(extraout_XMM0_Qb_00 >> 0x20);
  cVar61 = (char)(extraout_XMM0_Qb_00 >> 0x30);
  bVar63 = (byte)(extraout_XMM0_Qb_00 >> 0x38);
  cVar73 = in_XMM1[1];
  cVar74 = in_XMM1[2];
  cVar75 = in_XMM1[3];
  cVar76 = in_XMM1[4];
  cVar77 = in_XMM1[5];
  cVar78 = in_XMM1[6];
  cVar79 = in_XMM1[7];
  cVar80 = in_XMM1[8];
  cVar81 = in_XMM1[9];
  cVar82 = in_XMM1[10];
  cVar83 = in_XMM1[0xb];
  cVar84 = in_XMM1[0xc];
  cVar85 = in_XMM1[0xd];
  cVar86 = in_XMM1[0xe];
  cVar87 = in_XMM1[0xf];
  cVar56 = (char)((ulonglong)auVar40._0_8_ >> 0x38);
  cVar58 = (char)(extraout_XMM0_Qb_00 >> 8);
  cVar60 = (char)(extraout_XMM0_Qb_00 >> 0x18);
  cVar62 = (char)(extraout_XMM0_Qb_00 >> 0x28);
  cVar6 = (char)((ulonglong)pauStack_30 >> 8);
  pauVar14 = pauStack_30;
  ppauVar28 = (undefined1 (**) [16])&pcStack_58;
  pauVar32 = param_1;
  pauVar5 = pauVar22;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pauVar31) {
  default:
    apauStack_68[1] = (undefined1 (*) [16])0x141c6e7ef;
    pauStack_30 = (undefined1 (*) [16])pdb_141654940(pauStack_30);
    if (pauStack_30 != (undefined1 (*) [16])0x0) goto code_r0x000141c6e7f4;
    param_2[4][8] = param_2[4][8] + '\x01';
    (*param_1)[1] = (undefined1)uStack_38;
    uVar13 = *(ulonglong *)param_2[2];
    uVar15 = *(ulonglong *)(param_2[2] + 8);
    if (uVar13 <= uVar15) goto code_r0x000141c6e847;
    lVar23 = *(longlong *)(param_2[1] + 8);
    goto code_r0x000141c6e821;
  case (undefined1 (*) [16])0x16:
code_r0x000141c6e7f4:
    *(undefined1 (**) [16])(*param_1 + 8) = pauStack_30;
    (*param_1)[0] = 1;
    param_2[4][8] = param_2[4][8] + '\x01';
    return param_1;
  case (undefined1 (*) [16])0x17:
    *(uint *)(pauStack_30[-8] + 9) = *(int *)(pauStack_30[-8] + 9) + uVar19;
    *(int *)(pauStack_30[-4] + 7) = *(int *)(pauStack_30[-4] + 7) + -1;
    goto code_r0x000141c6ecc5;
  case (undefined1 (*) [16])0x18:
    pauVar14 = (undefined1 (*) [16])(ulonglong)(uVar10 + 0x173407a);
    goto code_r0x000141c6ed26;
  case (undefined1 (*) [16])0x19:
  case (undefined1 (*) [16])0x1a:
  case (undefined1 (*) [16])0x1c:
  case (undefined1 (*) [16])0x1d:
  case (undefined1 (*) [16])0x1e:
  case (undefined1 (*) [16])0x1f:
    out(*(undefined4 *)*param_1,0x39cc);
    param_1[1][3] = param_1[1][3] + cVar6 + CARRY1(bVar18,(byte)uRam0000000100002600);
    out((*param_1)[4],0x39cc);
    auVar40[0] = -(cVar9 == UNK_1433a2d70);
    auVar40[1] = -(cVar49 == UNK_1433a2d71);
    auVar40[2] = -(cVar50 == UNK_1433a2d72);
    auVar40[3] = -(cVar51 == UNK_1433a2d73);
    auVar40[4] = -(cVar52 == UNK_1433a2d74);
    auVar40[5] = -(cVar53 == UNK_1433a2d75);
    auVar40[6] = -(cVar54 == UNK_1433a2d76);
    auVar40[7] = -(cVar56 == UNK_1433a2d77);
    auVar40[8] = -(cVar55 == UNK_1433a2d78);
    auVar40[9] = -(cVar58 == UNK_1433a2d79);
    auVar40[10] = -(cVar57 == UNK_1433a2d7a);
    auVar40[0xb] = -(cVar60 == UNK_1433a2d7b);
    auVar40[0xc] = -(cVar59 == UNK_1433a2d7c);
    auVar40[0xd] = -(cVar62 == UNK_1433a2d7d);
    auVar40[0xe] = -(cVar61 == UNK_1433a2d7e);
    auVar40[0xf] = -(bVar63 == UNK_1433a2d7f);
    in_XMM1[0] = -(cVar64 == UNK_142f45ad0);
    in_XMM1[1] = -(cVar73 == UNK_142f45ad1);
    in_XMM1[2] = -(cVar74 == UNK_142f45ad2);
    in_XMM1[3] = -(cVar75 == UNK_142f45ad3);
    in_XMM1[4] = -(cVar76 == UNK_142f45ad4);
    in_XMM1[5] = -(cVar77 == UNK_142f45ad5);
    in_XMM1[6] = -(cVar78 == UNK_142f45ad6);
    in_XMM1[7] = -(cVar79 == UNK_142f45ad7);
    in_XMM1[8] = -(cVar80 == UNK_142f45ad8);
    in_XMM1[9] = -(cVar81 == UNK_142f45ad9);
    in_XMM1[10] = -(cVar82 == UNK_142f45ada);
    in_XMM1[0xb] = -(cVar83 == UNK_142f45adb);
    in_XMM1[0xc] = -(cVar84 == UNK_142f45adc);
    in_XMM1[0xd] = -(cVar85 == UNK_142f45add);
    in_XMM1[0xe] = -(cVar86 == UNK_142f45ade);
    in_XMM1[0xf] = -(cVar87 == UNK_142f45adf);
    break;
  case (undefined1 (*) [16])0x1b:
    pcVar4 = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar4)();
    return UNRECOVERED_JUMPTABLE;
  case (undefined1 (*) [16])0x20:
    if (!bVar36) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    goto code_r0x000141c6ed57;
  case (undefined1 (*) [16])0x21:
    break;
  case (undefined1 (*) [16])0x22:
    goto code_r0x000141c6ee3e;
  case (undefined1 (*) [16])0x23:
    ppauVar28 = (undefined1 (**) [16])&pcStack_58;
    if (0xd < uVar19) goto LAB_141c6f0fd;
    goto code_r0x000141c6ee06;
  case (undefined1 (*) [16])0x24:
    in_XMM1 = in_XMM1 & auVar40;
    ppauVar28 = (undefined1 (**) [16])&pcStack_58;
    if ((ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) | (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141c6f0fd;
    (*pauStack_30)[1] = 0x14;
    goto code_r0x000141c6f163;
  case (undefined1 (*) [16])0x25:
    pauVar14 = (undefined1 (*) [16])
               (ulonglong)
               CONCAT31((int3)cVar6,bVar7 + *(char *)(ulonglong)(uint)(int)(short)pauStack_30);
    *(char *)(uVar13 + 0x1a7ac9b13) =
         *(char *)(uVar13 + 0x1a7ac9b13) + (char)((ulonglong)param_2 >> 8);
    goto code_r0x000141c6eea2;
  case (undefined1 (*) [16])0x26:
    out((*param_1)[0],0x39cc);
    uVar10 = (uint)pauVar34 ^ uRam00000000433a39cf;
    goto code_r0x000141c6efa8;
  case (undefined1 (*) [16])0x27:
    out(1,bVar7);
    (*pauStack_30)[0] = (*pauStack_30)[0] + bVar7;
    uVar10 = CONCAT13(UNK_1433a39d2,CONCAT12(UNK_1433a39d1,CONCAT11(UNK_1433a39d0,UNK_1433a39cf))) ^
             0x6e696172 |
             CONCAT13(UNK_1433a39cf,CONCAT12(UNK_1433a39ce,CONCAT11(UNK_1433a39cd,UNK_1433a39cc))) ^
             0x72726554;
    goto code_r0x000141c6ef91;
  case (undefined1 (*) [16])0x28:
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),bVar18 | (&UNK_1433a3985)[uVar13]
                 );
    goto code_r0x000141c6f07c;
  case (undefined1 (*) [16])0x29:
    *(uint *)*UNRECOVERED_JUMPTABLE_00 = *(int *)*UNRECOVERED_JUMPTABLE_00 + uVar19;
    goto code_r0x000141c6eeb9;
  case (undefined1 (*) [16])0x2a:
    *(int *)*pauStack_30 = *(int *)*pauStack_30 + 1;
    uRam0000000100002600 = CONCAT31(uRam0000000100002600._1_3_,(byte)uRam0000000100002600 + bVar18);
    *(uint *)*pauStack_30 = *(int *)*pauStack_30 + uVar10;
    piVar16 = (int *)CONCAT62(0x1433a,CONCAT11(bVar7 + 0x39,0xcc));
    *piVar16 = *piVar16 + (int)piVar16;
    goto code_r0x000141c6f163;
  case (undefined1 (*) [16])0x2b:
    ppauVar28 = (undefined1 (**) [16])&pcStack_58;
    if (pauVar34 != (undefined1 (*) [16])0x79 || UNK_1433a39d4 != '\0') goto LAB_141c6f0fd;
    goto code_r0x000141c6f064;
  case (undefined1 (*) [16])0x2c:
    auVar66[0] = -(UNK_1433a39d6 == UNK_1433a2d80);
    auVar66[1] = -(UNK_1433a39d7 == UNK_1433a2d81);
    auVar66[2] = -(UNK_1433a39d8 == UNK_1433a2d82);
    auVar66[3] = -(UNK_1433a39d9 == UNK_1433a2d83);
    auVar66[4] = -(UNK_1433a39da == UNK_1433a2d84);
    auVar66[5] = -(UNK_1433a39db == UNK_1433a2d85);
    auVar66[6] = -(UNK_1433a39dc == UNK_1433a2d86);
    auVar66[7] = -(UNK_1433a39dd == UNK_1433a2d87);
    auVar66[8] = -(UNK_1433a39de == UNK_1433a2d88);
    auVar66[9] = -(UNK_1433a39df == UNK_1433a2d89);
    auVar66[10] = -(UNK_1433a39e0 == UNK_1433a2d8a);
    auVar66[0xb] = -(UNK_1433a39e1 == UNK_1433a2d8b);
    auVar66[0xc] = -(UNK_1433a39e2 == UNK_1433a2d8c);
    auVar66[0xd] = -(UNK_1433a39e3 == UNK_1433a2d8d);
    auVar66[0xe] = -(UNK_1433a39e4 == UNK_1433a2d8e);
    auVar66[0xf] = -(UNK_1433a39e5 == UNK_1433a2d8f);
    auVar41[0] = -(cVar9 == UNK_1433a2d90);
    auVar41[1] = -(cVar49 == UNK_1433a2d91);
    auVar41[2] = -(cVar50 == UNK_1433a2d92);
    auVar41[3] = -(cVar51 == UNK_1433a2d93);
    auVar41[4] = -(cVar52 == UNK_1433a2d94);
    auVar41[5] = -(cVar53 == UNK_1433a2d95);
    auVar41[6] = -(cVar54 == UNK_1433a2d96);
    auVar41[7] = -(cVar56 == UNK_1433a2d97);
    auVar41[8] = -(cVar55 == UNK_1433a2d98);
    auVar41[9] = -(cVar58 == UNK_1433a2d99);
    auVar41[10] = -(cVar57 == UNK_1433a2d9a);
    auVar41[0xb] = -(cVar60 == UNK_1433a2d9b);
    auVar41[0xc] = -(cVar59 == UNK_1433a2d9c);
    auVar41[0xd] = -(cVar62 == UNK_1433a2d9d);
    auVar41[0xe] = -(cVar61 == UNK_1433a2d9e);
    auVar41[0xf] = -(bVar63 == UNK_1433a2d9f);
    auVar41 = auVar41 & auVar66;
    if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x000141c6ede4;
    goto LAB_141c6eddb;
  case (undefined1 (*) [16])0x2d:
    pauVar14 = (undefined1 (*) [16])CONCAT71(uVar17,bVar7 + (*pauStack_30)[0]);
    pauVar14[-5][9] = pauVar14[-5][9] + bVar18;
    ppauVar24 = apauStack_68;
    apauStack_68[0] = (undefined1 (*) [16])0x6d6f746f;
    out(*(undefined4 *)*param_1,0x39cc);
    pauVar34 = *(undefined1 (**) [16])(&UNK_1433a39cc + in_FS_OFFSET);
    apauStack_68[1] = pauVar14;
    goto code_r0x000141c6ef46;
  case (undefined1 (*) [16])0x2e:
    goto code_r0x000141c6ee60;
  case (undefined1 (*) [16])0x2f:
    pauStack_30[-5][9] = pauStack_30[-5][9] + bVar18;
    apauStack_68[1] = pauStack_30;
    apauStack_68[0] = (undefined1 (*) [16])0x6d6f746f;
    out(*(undefined4 *)*param_1,0x39cc);
    ppauVar28 = apauStack_68;
    if (CONCAT17(UNK_1433a39d9,
                 CONCAT16(UNK_1433a39d8,
                          CONCAT15(UNK_1433a39d7,
                                   CONCAT14(UNK_1433a39d6,
                                            CONCAT13(UNK_1433a39d5,
                                                     CONCAT12(UNK_1433a39d4,
                                                              CONCAT11(UNK_1433a39d3,UNK_1433a39d2))
                                                    ))))) != 0x7375636f4665646f ||
        UNRECOVERED_JUMPTABLE_00 != *(undefined1 (**) [16])(&UNK_1433a39cc + in_FS_OFFSET))
    goto LAB_141c6f0fd;
    (*pauStack_30)[1] = 0xf;
    goto code_r0x000141c6f163;
  case (undefined1 (*) [16])0x30:
  case (undefined1 (*) [16])0x31:
  case (undefined1 (*) [16])0x32:
  case (undefined1 (*) [16])0x35:
  case (undefined1 (*) [16])0x36:
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         (CONCAT17(UNK_1433a39d3,
                   CONCAT16(UNK_1433a39d2,
                            CONCAT15(UNK_1433a39d1,
                                     CONCAT14(UNK_1433a39d0,
                                              CONCAT13(UNK_1433a39cf,
                                                       CONCAT12(UNK_1433a39ce,
                                                                CONCAT11(UNK_1433a39cd,UNK_1433a39cc
                                                                        ))))))) ^ 0x635f6d6f74737563
         );
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (CONCAT17(UNK_1433a39d8,
                   CONCAT16(UNK_1433a39d7,
                            CONCAT15(UNK_1433a39d6,
                                     CONCAT14(UNK_1433a39d5,
                                              CONCAT13(UNK_1433a39d4,
                                                       CONCAT12(UNK_1433a39d3,
                                                                CONCAT11(UNK_1433a39d2,UNK_1433a39d1
                                                                        ))))))) ^ 0x726f737275635f6d
         );
    goto code_r0x000141c6f237;
  case (undefined1 (*) [16])0x33:
    *(int *)*param_2 = *(int *)*param_2 + 0x433a39cc;
    goto code_r0x000141c6f163;
  case (undefined1 (*) [16])0x34:
    goto LAB_141c6f0fd;
  case (undefined1 (*) [16])0x37:
                    /* WARNING: Could not recover jumptable at 0x000141c6f18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*(code *)UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  case (undefined1 (*) [16])0x38:
    uVar10 = (int)&pcStack_58 + *(int *)(*param_1 + 0xf);
    if (uVar10 != 0) {
      _UNK_1433a39fb = _UNK_1433a39fb | (uint)param_2;
      puVar2 = (uint *)(*param_1 + 0xf);
      uVar19 = *puVar2;
      *puVar2 = *puVar2 + uVar10;
      if (*puVar2 != 0) {
        _UNK_1433a39fb = _UNK_1433a39fb + (uint)param_2 + (uint)CARRY4(uVar19,uVar10);
        *(uint *)(*param_1 + 0xf) = *(int *)(*param_1 + 0xf) + uVar10;
      }
    }
    if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                 (ushort)((byte)(extraout_XMM0_Qb_00 >> 7) & 1) << 8 |
                 (ushort)((byte)(extraout_XMM0_Qb_00 >> 0xf) & 1) << 9 |
                 (ushort)((byte)(extraout_XMM0_Qb_00 >> 0x17) & 1) << 10 |
                 (ushort)((byte)(extraout_XMM0_Qb_00 >> 0x1f) & 1) << 0xb |
                 (ushort)((byte)(extraout_XMM0_Qb_00 >> 0x27) & 1) << 0xc |
                 (ushort)((byte)(extraout_XMM0_Qb_00 >> 0x2f) & 1) << 0xd |
                 (ushort)((byte)(extraout_XMM0_Qb_00 >> 0x37) & 1) << 0xe |
                (ushort)(bVar63 >> 7) << 0xf) != 0xffff) goto LAB_141c6f2d6;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0xff03;
    (*pauStack_30)[1] = 3;
    goto code_r0x000141c6f20c;
  case (undefined1 (*) [16])0x39:
    ppauVar28 = (undefined1 (**) [16])(ulonglong)((int)&pcStack_58 + 0x20);
    goto code_r0x000141c6f104;
  case (undefined1 (*) [16])0x3a:
    goto code_r0x000141c6f23a;
  case (undefined1 (*) [16])0x3b:
    *(int *)*pauStack_30 = *(int *)*pauStack_30 + 1;
    cRam0000000286747349 = cRam0000000286747349 + '9';
    halt_baddata();
  case (undefined1 (*) [16])0x3c:
    if (bVar36) {
      halt_baddata();
    }
    goto code_r0x000141c6f281;
  case (undefined1 (*) [16])0x3d:
    if (!bVar35 && !bVar36) goto code_r0x000141c6f394;
    if (bVar35) {
      if ((POPCOUNT((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xff) & 1U) != 0)
      goto code_r0x000141c6f339;
      out((*param_1)[0],0x39cc);
      param_1 = (undefined1 (*) [16])(*param_1 + 1);
      if (!bVar36) goto joined_r0x000141c6f3a1;
      pauStack_30 = (undefined1 (*) [16])0x65656873;
    }
    else {
joined_r0x000141c6f3a1:
      if (!bVar35) goto code_r0x000141c6f3a3;
      piVar16 = (int *)(&UNK_1433a3a15 + (longlong)(*param_1 + uVar13));
      iVar20 = *piVar16;
      *piVar16 = *piVar16 << 0x18;
      if (-1 < iVar20 << 0x17) {
        UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(&UNK_1433a39cb + uVar13);
        if (UNRECOVERED_JUMPTABLE_00 != (undefined1 (*) [16])0x0 && *piVar16 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((char)UNRECOVERED_JUMPTABLE_00 == pauVar31[6][6]) {
          puVar2 = (uint *)((longlong)UNRECOVERED_JUMPTABLE_00 * 5 + -0x3e);
          *puVar2 = *puVar2 >> 1 | (uint)((*puVar2 & 1) != 0) << 0x1f;
          param_1 = pauStack_30;
          goto code_r0x000141c6f4f2;
        }
        (*pauStack_30)[unaff_GS_OFFSET + 1] = 1;
        goto code_r0x000141c6f4d5;
      }
    }
    if (!bVar38) goto code_r0x000141c6f4d5;
    *(uint *)(&UNK_1433a3995 + (longlong)(*pauStack_30 + uVar13)) = uVar19;
    goto code_r0x000141c6f470;
  case (undefined1 (*) [16])0x3e:
    pcVar4 = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar4)();
    return UNRECOVERED_JUMPTABLE;
  case (undefined1 (*) [16])0x3f:
    if (bVar35) goto code_r0x000141c6f432;
    out(*(undefined4 *)*param_1,0x39cc);
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         ((ulonglong)UNRECOVERED_JUMPTABLE_00 ^ *(ulonglong *)(&UNK_1433a39cc + in_FS_OFFSET));
    iVar20 = CONCAT13(UNK_1433a39d7,CONCAT12(UNK_1433a39d6,CONCAT11(UNK_1433a39d5,UNK_1433a39d4)));
    goto code_r0x000141c6f3d0;
  case (undefined1 (*) [16])0x40:
    if (bVar36) goto code_r0x000141c6f378;
    if (!bVar35) {
      pauStack_30[-8][9] = pauStack_30[-8][9] & bVar18;
      ppauStack_a0 = apauStack_68 + 1;
      ppauVar27 = apauStack_68 + 1;
      cVar6 = '\a';
      pauVar34 = pauVar31;
      do {
        pauVar34 = (undefined1 (*) [16])(pauVar34[-1] + 8);
        ppauVar27 = ppauVar27 + -1;
        *ppauVar27 = *(undefined1 (**) [16])*pauVar34;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      ppcVar29 = (char **)auStack_8de9;
      pauVar22 = UNRECOVERED_JUMPTABLE;
      apauStack_68[1] = pauVar31;
      if (UNRECOVERED_JUMPTABLE_00 < (undefined1 (*) [16])0x4) {
        pauVar34 = (undefined1 (*) [16])&UNK_1433a3ac8;
        ppauStack_a0 = apauStack_68 + 1;
        goto code_r0x000141c6f469;
      }
      goto LAB_141c6f4df;
    }
    bVar35 = false;
    ppcVar29 = &pcStack_58;
    if (bVar38) goto code_r0x000141c6f44f;
    goto code_r0x000141c6f3f0;
  case (undefined1 (*) [16])0x41:
code_r0x000141c6f3a3:
    if (bVar38) {
      out(*(undefined4 *)*param_1,0x39cc);
      goto code_r0x000141c6f3f2;
    }
    pauStack_30 = (undefined1 (*) [16])
                  (ulonglong)
                  (uVar10 ^ CONCAT13(UNK_1433a39cf,
                                     CONCAT12(UNK_1433a39ce,CONCAT11(UNK_1433a39cd,UNK_1433a39cc))))
    ;
    goto code_r0x000141c6f39a;
  case (undefined1 (*) [16])0x42:
    if (bVar38) goto code_r0x000141c6f3f5;
    if (!bVar35) {
      if (!bVar35) goto code_r0x000141c6f432;
      goto code_r0x000141c6f3e9;
    }
    if (bVar35 || bVar36) goto code_r0x000141c6f38a;
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         (ulonglong)
         (uVar19 ^ CONCAT13(UNK_1433a39d6,
                            CONCAT12(UNK_1433a39d5,CONCAT11(UNK_1433a39d4,UNK_1433a39d3))));
    goto code_r0x000141c6f3f5;
  case (undefined1 (*) [16])0x43:
    goto code_r0x000141c6f436;
  case (undefined1 (*) [16])0x44:
  case (undefined1 (*) [16])0x45:
  case (undefined1 (*) [16])0x46:
  case (undefined1 (*) [16])0x47:
  case (undefined1 (*) [16])0x48:
  case (undefined1 (*) [16])0x4b:
  case (undefined1 (*) [16])0x4d:
  case (undefined1 (*) [16])0x4e:
  case (undefined1 (*) [16])0x4f:
  case (undefined1 (*) [16])0x50:
  case (undefined1 (*) [16])0x51:
  case (undefined1 (*) [16])0x53:
  case (undefined1 (*) [16])0x55:
  case (undefined1 (*) [16])0x57:
  case (undefined1 (*) [16])0x59:
  case (undefined1 (*) [16])0x5b:
  case (undefined1 (*) [16])0x5c:
  case (undefined1 (*) [16])0x5e:
    out(*(undefined4 *)*param_1,0x39cc);
    auVar68[0] = -(cVar64 == UNK_1433a2e70);
    auVar68[1] = -(cVar73 == UNK_1433a2e71);
    auVar68[2] = -(cVar74 == UNK_1433a2e72);
    auVar68[3] = -(cVar75 == UNK_1433a2e73);
    auVar68[4] = -(cVar76 == UNK_1433a2e74);
    auVar68[5] = -(cVar77 == UNK_1433a2e75);
    auVar68[6] = -(cVar78 == UNK_1433a2e76);
    auVar68[7] = -(cVar79 == UNK_1433a2e77);
    auVar68[8] = -(cVar80 == UNK_1433a2e78);
    auVar68[9] = -(cVar81 == UNK_1433a2e79);
    auVar68[10] = -(cVar82 == UNK_1433a2e7a);
    auVar68[0xb] = -(cVar83 == UNK_1433a2e7b);
    auVar68[0xc] = -(cVar84 == UNK_1433a2e7c);
    auVar68[0xd] = -(cVar85 == UNK_1433a2e7d);
    auVar68[0xe] = -(cVar86 == UNK_1433a2e7e);
    auVar68[0xf] = -(cVar87 == UNK_1433a2e7f);
    auVar44[0] = -(cVar9 == UNK_1433a2e80);
    auVar44[1] = -(cVar49 == UNK_1433a2e81);
    auVar44[2] = -(cVar50 == UNK_1433a2e82);
    auVar44[3] = -(cVar51 == UNK_1433a2e83);
    auVar44[4] = -(cVar52 == UNK_1433a2e84);
    auVar44[5] = -(cVar53 == UNK_1433a2e85);
    auVar44[6] = -(cVar54 == UNK_1433a2e86);
    auVar44[7] = -(cVar56 == UNK_1433a2e87);
    auVar44[8] = -(cVar55 == UNK_1433a2e88);
    auVar44[9] = -(cVar58 == UNK_1433a2e89);
    auVar44[10] = -(cVar57 == UNK_1433a2e8a);
    auVar44[0xb] = -(cVar60 == UNK_1433a2e8b);
    auVar44[0xc] = -(cVar59 == UNK_1433a2e8c);
    auVar44[0xd] = -(cVar62 == UNK_1433a2e8d);
    auVar44[0xe] = -(cVar61 == UNK_1433a2e8e);
    auVar44[0xf] = -(bVar63 == UNK_1433a2e8f);
    auVar44 = auVar44 & auVar68;
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         (ulonglong)
         (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar44[0xf] >> 7) << 0xf);
code_r0x000141c6f64d:
    iVar20 = (int)UNRECOVERED_JUMPTABLE_00;
    UNRECOVERED_JUMPTABLE_00 = pauStack_30;
    if (iVar20 == 0xffff) {
      (*pauStack_30)[1] = 4;
      (*pauStack_30)[0] = 0;
      return pauStack_30;
    }
    goto LAB_141c6f752;
  case (undefined1 (*) [16])0x49:
    param_1 = pauStack_30;
    ppcVar30 = &pcStack_58;
    goto code_r0x000141c6f4f2;
  case (undefined1 (*) [16])0x4a:
    pcVar4 = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar4)();
    return UNRECOVERED_JUMPTABLE;
  case (undefined1 (*) [16])0x4c:
    if (bVar35) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000141c6f58f;
  case (undefined1 (*) [16])0x52:
    iVar20 = *(int *)(&UNK_1433a39d5 + uVar13);
    ppauVar27 = apauStack_68 + 1;
    cVar6 = '\x0e';
    do {
      pauVar31 = (undefined1 (*) [16])(pauVar31[-1] + 8);
      ppauVar27 = ppauVar27 + -1;
      *ppauVar27 = *(undefined1 (**) [16])*pauVar31;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    *(uint *)*pauStack_30 = *(int *)*pauStack_30 + uVar10;
    pcVar33 = (char *)((ulonglong)(uVar19 + iVar20) + 0x1488806);
    *pcVar33 = *pcVar33 + '9';
    goto code_r0x000141c6f5c8;
  case (undefined1 (*) [16])0x54:
    (*pauStack_30)[0] = (*pauStack_30)[0] + bVar7;
    pauVar22 = UNRECOVERED_JUMPTABLE;
    if (UNK_1433a39ce != 'p' || (short)UNRECOVERED_JUMPTABLE_00 != 0) goto LAB_141c6f4df;
    (*pauStack_30)[1] = 3;
    goto code_r0x000141c6f4d5;
  case (undefined1 (*) [16])0x56:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(UNRECOVERED_JUMPTABLE[-1] + 0xc);
    if ((undefined1 (*) [16])0x1a < UNRECOVERED_JUMPTABLE) goto LAB_141c6f752;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])&UNK_1433a3ad8;
    goto code_r0x000141c6f538;
  case (undefined1 (*) [16])0x58:
    return pauStack_30;
  case (undefined1 (*) [16])0x5a:
    UNRECOVERED_JUMPTABLE_00 = pauStack_30;
    if (!bVar36) goto LAB_141c6f752;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x0;
    goto code_r0x000141c6f625;
  case (undefined1 (*) [16])0x5d:
    cVar9 = (*param_2)[(ulonglong)pauStack_30 & 0xff];
    pauVar14 = (undefined1 (*) [16])CONCAT71(uVar17,cVar9);
    ppauVar27 = apauStack_68 + 1;
    cVar6 = '\x1e';
    do {
      pauVar31 = (undefined1 (*) [16])(pauVar31[-1] + 8);
      ppauVar27 = ppauVar27 + -1;
      *ppauVar27 = *(undefined1 (**) [16])*pauVar31;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    *(int *)*pauVar14 = *(int *)*pauVar14 + 1;
    uRam0000000100002600 = CONCAT31(uRam0000000100002600._1_3_,(byte)uRam0000000100002600 + bVar18);
    (*pauVar14)[0] = (*pauVar14)[0] + cVar9;
    goto code_r0x000141c6f5f9;
  case (undefined1 (*) [16])0x5f:
    goto code_r0x000141c6f8df;
  case (undefined1 (*) [16])0x60:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x61:
    goto code_r0x000141c6fb60;
  case (undefined1 (*) [16])0x62:
    goto code_r0x000141c6fb9b;
  case (undefined1 (*) [16])0x63:
    pauStack_30 = (undefined1 (*) [16])((ulonglong)pauStack_30 | 0x66);
    auVar45[0] = -(cVar9 == UNK_1433a2f20);
    auVar45[1] = -(cVar49 == UNK_1433a2f21);
    auVar45[2] = -(cVar50 == UNK_1433a2f22);
    auVar45[3] = -(cVar51 == UNK_1433a2f23);
    auVar45[4] = -(cVar52 == UNK_1433a2f24);
    auVar45[5] = -(cVar53 == UNK_1433a2f25);
    auVar45[6] = -(cVar54 == UNK_1433a2f26);
    auVar45[7] = -(cVar56 == UNK_1433a2f27);
    auVar45[8] = -(cVar55 == UNK_1433a2f28);
    auVar45[9] = -(cVar58 == UNK_1433a2f29);
    auVar45[10] = -(cVar57 == UNK_1433a2f2a);
    auVar45[0xb] = -(cVar60 == UNK_1433a2f2b);
    auVar45[0xc] = -(cVar59 == UNK_1433a2f2c);
    auVar45[0xd] = -(cVar62 == UNK_1433a2f2d);
    auVar45[0xe] = -(cVar61 == UNK_1433a2f2e);
    auVar45[0xf] = -(bVar63 == UNK_1433a2f2f);
    auVar45 = auVar45 & in_XMM1;
    if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141c6fe9b;
    uVar8 = 0x26;
    goto code_r0x000141c6fe9d;
  case (undefined1 (*) [16])0x64:
    puVar2 = (uint *)(pauStack_30[-8] + 9);
    *puVar2 = *puVar2 >> 0x10 | *puVar2 << 0x10;
    goto code_r0x000141c6f916;
  case (undefined1 (*) [16])0x65:
    (*pauStack_30)[0] = (*pauStack_30)[0] + bVar7;
    goto code_r0x000141c6f9a2;
  case (undefined1 (*) [16])0x66:
    goto code_r0x000141c6fc2f;
  case (undefined1 (*) [16])0x67:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined1 (*) [16])0x69:
    if (bVar35) goto code_r0x000141c6f880;
    auVar40[0] = -(cVar9 == UNK_1433a2f30);
    auVar40[1] = -(cVar49 == UNK_1433a2f31);
    auVar40[2] = -(cVar50 == UNK_1433a2f32);
    auVar40[3] = -(cVar51 == UNK_1433a2f33);
    auVar40[4] = -(cVar52 == UNK_1433a2f34);
    auVar40[5] = -(cVar53 == UNK_1433a2f35);
    auVar40[6] = -(cVar54 == UNK_1433a2f36);
    auVar40[7] = -(cVar56 == UNK_1433a2f37);
    auVar40[8] = -(cVar55 == UNK_1433a2f38);
    auVar40[9] = -(cVar58 == UNK_1433a2f39);
    auVar40[10] = -(cVar57 == UNK_1433a2f3a);
    auVar40[0xb] = -(cVar60 == UNK_1433a2f3b);
    auVar40[0xc] = -(cVar59 == UNK_1433a2f3c);
    auVar40[0xd] = -(cVar62 == UNK_1433a2f3d);
    auVar40[0xe] = -(cVar61 == UNK_1433a2f3e);
    auVar40[0xf] = -(bVar63 == UNK_1433a2f3f);
code_r0x000141c6f8df:
    if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141c6fe9b;
    uVar8 = 0x16;
    goto code_r0x000141c6fe9d;
  case (undefined1 (*) [16])0x6a:
    goto code_r0x000141c6f75b;
  case (undefined1 (*) [16])0x6b:
    pauVar14 = (undefined1 (*) [16])CONCAT71(uVar17,(*param_2)[(ulonglong)pauStack_30 & 0xff]);
    ppauVar27 = apauStack_68 + 1;
    cVar6 = '\x1e';
    do {
      pauVar31 = (undefined1 (*) [16])(pauVar31[-1] + 8);
      ppauVar27 = ppauVar27 + -1;
      *ppauVar27 = *(undefined1 (**) [16])*pauVar31;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    *(int *)*pauVar14 = *(int *)*pauVar14 + 1;
    uRam0000000100002600 = CONCAT31(uRam0000000100002600._1_3_,(byte)uRam0000000100002600 + bVar18);
    goto code_r0x000141c6f68c;
  case (undefined1 (*) [16])0x6c:
    if (UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0 &&
        UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
      uVar8 = 2;
      goto code_r0x000141c6fe9d;
    }
    uVar13 = CONCAT17(UNK_1433a39d3,
                      CONCAT16(UNK_1433a39d2,
                               CONCAT15(UNK_1433a39d1,
                                        CONCAT14(UNK_1433a39d0,
                                                 CONCAT13(UNK_1433a39cf,
                                                          CONCAT12(UNK_1433a39ce,
                                                                   CONCAT11(UNK_1433a39cd,
                                                                            UNK_1433a39cc))))))) ^
             0x7461775f6c6f6f74;
    goto code_r0x000141c6fab9;
  case (undefined1 (*) [16])0x6d:
    goto code_r0x000141c6fb0a;
  case (undefined1 (*) [16])0x6e:
  case (undefined1 (*) [16])0x6f:
  case (undefined1 (*) [16])0x72:
  case (undefined1 (*) [16])0x73:
  case (undefined1 (*) [16])0x74:
  case (undefined1 (*) [16])0x75:
  case (undefined1 (*) [16])0x77:
  case (undefined1 (*) [16])0x78:
  case (undefined1 (*) [16])0x79:
  case (undefined1 (*) [16])0x7a:
    pauStack_30 = (undefined1 (*) [16])((ulonglong)pauStack_30 | 0x48);
    if (CONCAT13(UNK_1433a39cf,CONCAT12(UNK_1433a39ce,CONCAT11(UNK_1433a39cd,UNK_1433a39cc))) !=
        uVar19) goto LAB_141c6fe9b;
    uVar8 = 0x1d;
    goto code_r0x000141c6fe9d;
  case (undefined1 (*) [16])0x70:
    uVar8 = 0x2d;
    goto code_r0x000141c6fe9d;
  case (undefined1 (*) [16])0x71:
    UNK_1433a39cc = UNK_1433a39cc & bVar7;
    (*pauStack_30)[0] = (*pauStack_30)[0] + bVar7;
    goto code_r0x000141c6fc7b;
  case (undefined1 (*) [16])0x76:
    goto code_r0x000141c6f64d;
  case (undefined1 (*) [16])0x7b:
    pcVar4 = (code *)swi(3);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar4)();
    return UNRECOVERED_JUMPTABLE;
  case (undefined1 (*) [16])0x7c:
    if (!bVar36) goto code_r0x000141c6fd58;
    uVar8 = 3;
    goto code_r0x000141c6fe9d;
  case (undefined1 (*) [16])0x7d:
    pauStack_30 = (undefined1 (*) [16])
                  (ulonglong)
                  (uVar10 ^ CONCAT13(UNK_1433a39d4,
                                     CONCAT12(UNK_1433a39d3,CONCAT11(UNK_1433a39d2,UNK_1433a39d1))))
    ;
    goto code_r0x000141c6fd7c;
  case (undefined1 (*) [16])0x7e:
    pauStack_30 = (undefined1 (*) [16])(ulonglong)(uVar10 + 0xfc80949);
    (*pauStack_30)[0] = (*pauStack_30)[0] + (char)(uVar10 + 0xfc80949);
    goto code_r0x000141c6fd7c;
  case (undefined1 (*) [16])0x7f:
  case (undefined1 (*) [16])0x80:
  case (undefined1 (*) [16])0x81:
  case (undefined1 (*) [16])0x82:
  case (undefined1 (*) [16])0x83:
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*param_1 + 1);
    out((*param_1)[0],0x39cc);
    if (bVar35 || bVar36) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!bVar35) {
      pauStack_30 = (undefined1 (*) [16])(ulonglong)(uVar10 | 0x1733133);
      goto code_r0x000141c6fe1e;
    }
    pauVar22 = (undefined1 (*) [16])(ulonglong)(uVar19 | 0x433a39cc);
    goto code_r0x000141c6fdc8;
  case (undefined1 (*) [16])0x84:
    UNRECOVERED_JUMPTABLE = param_1;
    if (!bVar35) {
      lVar23 = (longlong)*(int *)(param_1[4] + 9) * -0x7bf037f7;
      *(uint *)*UNRECOVERED_JUMPTABLE_00 =
           *(int *)*UNRECOVERED_JUMPTABLE_00 + uVar10 + (uint)((int)lVar23 != lVar23);
      (*pauStack_30)[0] = (*pauStack_30)[0] + bVar7;
      goto code_r0x000141c6fdc8;
    }
code_r0x000141c6fe1e:
    out(*(undefined4 *)*UNRECOVERED_JUMPTABLE,0x39cc);
    auVar72[0] = -(cVar64 == UNK_1433a2f60);
    auVar72[1] = -(cVar73 == UNK_1433a2f61);
    auVar72[2] = -(cVar74 == UNK_1433a2f62);
    auVar72[3] = -(cVar75 == UNK_1433a2f63);
    auVar72[4] = -(cVar76 == UNK_1433a2f64);
    auVar72[5] = -(cVar77 == UNK_1433a2f65);
    auVar72[6] = -(cVar78 == UNK_1433a2f66);
    auVar72[7] = -(cVar79 == UNK_1433a2f67);
    auVar72[8] = -(cVar80 == UNK_1433a2f68);
    auVar72[9] = -(cVar81 == UNK_1433a2f69);
    auVar72[10] = -(cVar82 == UNK_1433a2f6a);
    auVar72[0xb] = -(cVar83 == UNK_1433a2f6b);
    auVar72[0xc] = -(cVar84 == UNK_1433a2f6c);
    auVar72[0xd] = -(cVar85 == UNK_1433a2f6d);
    auVar72[0xe] = -(cVar86 == UNK_1433a2f6e);
    auVar72[0xf] = -(cVar87 == UNK_1433a2f6f);
    auVar48[0] = -(cVar9 == UNK_1433a2f70);
    auVar48[1] = -(cVar49 == UNK_1433a2f71);
    auVar48[2] = -(cVar50 == UNK_1433a2f72);
    auVar48[3] = -(cVar51 == UNK_1433a2f73);
    auVar48[4] = -(cVar52 == UNK_1433a2f74);
    auVar48[5] = -(cVar53 == UNK_1433a2f75);
    auVar48[6] = -(cVar54 == UNK_1433a2f76);
    auVar48[7] = -(cVar56 == UNK_1433a2f77);
    auVar48[8] = -(cVar55 == UNK_1433a2f78);
    auVar48[9] = -(cVar58 == UNK_1433a2f79);
    auVar48[10] = -(cVar57 == UNK_1433a2f7a);
    auVar48[0xb] = -(cVar60 == UNK_1433a2f7b);
    auVar48[0xc] = -(cVar59 == UNK_1433a2f7c);
    auVar48[0xd] = -(cVar62 == UNK_1433a2f7d);
    auVar48[0xe] = -(cVar61 == UNK_1433a2f7e);
    auVar48[0xf] = -(bVar63 == UNK_1433a2f7f);
    auVar48 = auVar48 & auVar72;
    if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141c6fe9b;
    uVar8 = 0x2e;
    goto code_r0x000141c6fe9d;
  }
  in_XMM1 = in_XMM1 & auVar40;
  UNRECOVERED_JUMPTABLE_00 =
       (undefined1 (*) [16])
       (ulonglong)
       (ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) | (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf);
  goto code_r0x000141c6eda1;
code_r0x000141c6e73e:
  *(ulonglong *)(param_2[2] + 8) = uVar11;
  uVar15 = uVar11;
  if (uVar11 == uVar13) goto LAB_141c6e752;
  goto LAB_141c6e72c;
code_r0x000141c6ec5a:
  do {
    apauStack_68[1] = (undefined1 (*) [16])0x141c6ec68;
    pdb_142d7f1b0(param_1,unaff_R14,0x100002600);
    unaff_R14 = *(longlong *)param_1[1];
    do {
      apauStack_68[1] = (undefined1 (*) [16])0x141c6ec3d;
      pub_142e32760(*(longlong *)(*param_1 + 8) + unaff_R14);
      unaff_R14 = unaff_R14 + 0x100002600;
      *(longlong *)param_1[1] = unaff_R14;
      unaff_R15 = unaff_R15 + -1;
      if (unaff_R15 == 0) {
        lVar23 = *(longlong *)param_1[1];
        if (*(longlong *)*param_1 != lVar23) goto LAB_141c6ec77;
        uStack_38 = 1;
        goto code_r0x000141c6eccc;
      }
    } while (0x1000025ff < (ulonglong)(*(longlong *)*param_1 - unaff_R14));
    uStack_38 = 1;
  } while( true );
code_r0x000141c6e798:
  goto code_r0x000141c6e77d;
code_r0x000141c6e79c:
  (*param_1)[1] = 0;
code_r0x000141c6e874:
  uVar8 = 0;
  goto code_r0x000141c6e876;
code_r0x000141c6fdc8:
  if (*(int *)(*pauVar22 + 8) == 0x7361766e && *(longlong *)*pauVar22 == 0x61635f7261656c63) {
    uVar8 = 0x22;
    goto code_r0x000141c6fe9d;
  }
  goto LAB_141c6fe9b;
code_r0x000141c6f880:
  pauStack_30 = pauVar14;
  *(int *)*param_1 = *(int *)*param_1 - (int)pauStack_30;
  (*pauStack_30)[0] = (*pauStack_30)[0] + (char)pauStack_30;
  if (*(longlong *)(*pauVar22 + 6) == 0x657a696d6f747375 &&
      *(longlong *)*pauVar22 == 0x7375635f6c6f6f74) {
    uVar8 = 0xd;
    goto code_r0x000141c6fe9d;
  }
  UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(*(ulonglong *)*pauVar22 ^ 0x65706f6c65766564);
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*(ulonglong *)(*pauVar22 + 6) ^ 0x756e656d5f726570);
code_r0x000141c6f8c3:
  if (UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0 &&
      UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
    uVar8 = 0x24;
    goto code_r0x000141c6fe9d;
  }
  goto LAB_141c6fe9b;
code_r0x000141c6fc75:
  pauStack_30 = pauVar14;
  if (bVar36) {
code_r0x000141c6fc7b:
    uVar8 = 0x13;
    goto code_r0x000141c6fe9d;
  }
  goto LAB_141c6fe9b;
code_r0x000141c6fb60:
  if (*(longlong *)(*pauVar22 + 3) == 0x7265736172655f6c &&
      *(longlong *)*pauVar22 == 0x6172655f6c6f6f74) {
    uVar8 = 0xf;
    pauStack_30 = pauVar14;
    goto code_r0x000141c6fe9d;
  }
  UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(*(ulonglong *)*pauVar22 ^ 0x7261675f6c6f6f74);
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])0x6e65647261675f6c;
code_r0x000141c6fb9b:
  pauStack_30 = pauVar14;
  if (UNRECOVERED_JUMPTABLE == *(undefined1 (**) [16])(*pauVar22 + 3) &&
      UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
    uVar8 = 0x10;
    goto code_r0x000141c6fe9d;
  }
  if (*(longlong *)(*pauVar22 + 3) == 0x7961645f666f5f65 &&
      *(longlong *)*pauVar22 == 0x5f666f5f656d6974) {
    uVar8 = 0x15;
    goto code_r0x000141c6fe9d;
  }
  if (*(longlong *)(*pauVar22 + 3) == 0x766572705f626174 &&
      *(longlong *)*pauVar22 == 0x705f6261745f6975) {
    uVar8 = 0x20;
    goto code_r0x000141c6fe9d;
  }
  if (*(longlong *)(*pauVar22 + 3) == 0x7478656e5f626174 &&
      *(longlong *)*pauVar22 == 0x6e5f6261745f6975) {
    uVar8 = 0x21;
    goto code_r0x000141c6fe9d;
  }
  goto LAB_141c6fe9b;
code_r0x000141c6ef46:
  pauStack_30 = pauVar14;
  if (*(int *)(*pauVar22 + 8) == 0x766f4665 && pauVar34 == UNRECOVERED_JUMPTABLE_00) {
    (*pauVar14)[1] = 0xe;
  }
  else {
    ppauVar28 = ppauVar24;
    if (*(int *)(*pauVar22 + 8) != 0x666f4465 ||
        UNRECOVERED_JUMPTABLE_00 != *(undefined1 (**) [16])*pauVar22) goto LAB_141c6f0fd;
    (*pauVar14)[1] = 0x10;
  }
  goto code_r0x000141c6f163;
code_r0x000141c6ed57:
  pauStack_30 = (undefined1 (*) [16])(ulonglong)((uint)pauVar14 | 0x1733ff4);
  auVar39[0] = -(auVar40[0] == UNK_1433a2d60);
  auVar39[1] = -(auVar40[1] == UNK_1433a2d61);
  auVar39[2] = -(auVar40[2] == UNK_1433a2d62);
  auVar39[3] = -(auVar40[3] == UNK_1433a2d63);
  auVar39[4] = -(auVar40[4] == UNK_1433a2d64);
  auVar39[5] = -(auVar40[5] == UNK_1433a2d65);
  auVar39[6] = -(auVar40[6] == UNK_1433a2d66);
  auVar39[7] = -(auVar40[7] == UNK_1433a2d67);
  auVar39[8] = -(auVar40[8] == UNK_1433a2d68);
  auVar39[9] = -(auVar40[9] == UNK_1433a2d69);
  auVar39[10] = -(auVar40[10] == UNK_1433a2d6a);
  auVar39[0xb] = -(auVar40[0xb] == UNK_1433a2d6b);
  auVar39[0xc] = -(auVar40[0xc] == UNK_1433a2d6c);
  auVar39[0xd] = -(auVar40[0xd] == UNK_1433a2d6d);
  auVar39[0xe] = -(auVar40[0xe] == UNK_1433a2d6e);
  auVar39[0xf] = -(auVar40[0xf] == UNK_1433a2d6f);
  auVar39 = auVar39 & in_XMM1;
  if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) == 0xffff) {
    (*pauStack_30)[1] = 3;
    (*pauStack_30)[0] = 0;
    return pauStack_30;
  }
  goto LAB_141c6eddb;
code_r0x000141c6f68c:
  (*pauVar14)[0] = (*pauVar14)[0] + (char)pauVar14;
  UNRECOVERED_JUMPTABLE_00[0x148880][9] =
       UNRECOVERED_JUMPTABLE_00[0x148880][9] + (char)((ulonglong)pauVar22 >> 8);
  (*pauVar14)[0] = 0;
  return pauVar14;
code_r0x000141c6f625:
  (*pauVar14)[1] = (char)UNRECOVERED_JUMPTABLE_00;
  (*pauVar14)[0] = 0;
  return pauVar14;
code_r0x000141c6f58f:
  out(*(undefined2 *)*param_1,(short)pauVar22);
  if (UNRECOVERED_JUMPTABLE == *(undefined1 (**) [16])(longlong)((int)pauVar22 + 3) &&
      UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
    (*pauVar14)[1] = 3;
    (*pauVar14)[0] = 0;
    return pauVar14;
  }
code_r0x000141c6f59f:
  UNRECOVERED_JUMPTABLE_00 = pauVar14;
  pauStack_30 = pauVar14;
  if (*(longlong *)(*pauVar22 + 3) == 0x7365696c66726574 &&
      *(longlong *)*pauVar22 == 0x6c66726574747562) {
code_r0x000141c6f5c3:
    (*pauStack_30)[1] = 6;
code_r0x000141c6f5c8:
    (*pauStack_30)[0] = 0;
    return pauStack_30;
  }
LAB_141c6f752:
  (*UNRECOVERED_JUMPTABLE_00)[1] = 0xc;
  pauVar14 = UNRECOVERED_JUMPTABLE_00;
code_r0x000141c6f757:
  (*pauVar14)[0] = 0;
  return pauVar14;
code_r0x000141c6ecc5:
  piVar16 = (int *)((ulonglong)pauVar14 & 0xffffffffffffff20);
  *piVar16 = *piVar16 + (int)piVar16;
  *(char *)piVar16 = (char)*piVar16 + (char)piVar16;
code_r0x000141c6eccc:
  apauStack_68[1] = (undefined1 (*) [16])0x141c6ece0;
  pdb_142d7f1b0(param_1);
  lVar23 = *(longlong *)param_1[1];
LAB_141c6ec77:
  *(undefined1 *)(*(longlong *)(*param_1 + 8) + lVar23) = 0x7d;
  *(longlong *)param_1[1] = lVar23 + 1;
  pauVar14 = (undefined1 (*) [16])0x0;
code_r0x000141c6ec93:
  return pauVar14;
code_r0x000141c6f378:
  if (bVar35) {
    if (bVar35) {
      (*pauVar14)[0] = (*pauVar14)[0] + (char)pauVar14;
code_r0x000141c6f3da:
      (*pauVar14)[0] = 0;
      return pauVar14;
    }
    if (bVar38) {
      iVar20 = (int)pauVar22;
      pauStack_30 = pauVar14;
code_r0x000141c6f3d0:
      if (iVar20 == 0x68747065 && UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
        (*pauStack_30)[1] = 1;
        pauVar14 = pauStack_30;
        goto code_r0x000141c6f3da;
      }
    }
    else {
      pauStack_30 = (undefined1 (*) [16])(ulonglong)((uint)pauVar14 ^ *(uint *)*pauVar22);
      UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x73775f736f705f72;
code_r0x000141c6f38a:
      bVar36 = *(undefined1 (**) [16])(*pauVar22 + 5) == UNRECOVERED_JUMPTABLE_00 &&
               UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0;
code_r0x000141c6f394:
      if (bVar36) {
        (*pauStack_30)[1] = 2;
        (*pauStack_30)[0] = 0;
        return pauStack_30;
      }
code_r0x000141c6f39a:
      if (UNRECOVERED_JUMPTABLE_00 == *(undefined1 (**) [16])(*pauVar22 + 5) &&
          *(longlong *)*pauVar22 == 0x705f7265746e6563) {
        (*pauStack_30)[1] = 3;
        (*pauStack_30)[0] = 0;
        return pauStack_30;
      }
    }
  }
  else {
code_r0x000141c6f3e9:
    pauStack_30 = (undefined1 (*) [16])0x65656873;
    bVar35 = false;
    ppcVar29 = &pcStack_58;
    if (bVar38) {
code_r0x000141c6f44f:
      pcVar4 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar4)();
      return UNRECOVERED_JUMPTABLE;
    }
code_r0x000141c6f3f0:
    if (bVar35) {
      if (!bVar37) {
        UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x433a3ac8;
code_r0x000141c6f469:
        UNRECOVERED_JUMPTABLE_00 =
             (undefined1 (*) [16])
             (*pauVar34 + *(int *)(*pauVar34 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4));
code_r0x000141c6f470:
                    /* WARNING: Could not recover jumptable at 0x000141c6f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE =
             (undefined1 (*) [16])(*(code *)UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
        return UNRECOVERED_JUMPTABLE;
      }
      pauVar5 = pauVar22;
      pauVar22 = UNRECOVERED_JUMPTABLE;
      if ((int)UNRECOVERED_JUMPTABLE_00 == 0) {
        (*pauStack_30)[1] = 2;
code_r0x000141c6f4d5:
        (*pauStack_30)[0] = 0;
        return pauStack_30;
      }
LAB_141c6f4df:
      UNRECOVERED_JUMPTABLE_00 = pauVar5;
      in_R10 = &UNK_1433a3368;
      param_1 = pauStack_30;
      ppcVar30 = ppcVar29;
code_r0x000141c6f4f2:
      *(undefined8 *)((longlong)ppcVar30 + -8) = 0x141c6f4fd;
      pauVar14 = (undefined1 (*) [16])pdb_142d8f140(UNRECOVERED_JUMPTABLE_00,pauVar22,in_R10);
code_r0x000141c6f4fd:
      *(undefined1 (**) [16])(*param_1 + 8) = pauVar14;
      (*param_1)[0] = 1;
      return param_1;
    }
code_r0x000141c6f3f2:
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])((ulonglong)UNRECOVERED_JUMPTABLE ^ *(ulonglong *)*pauVar22);
code_r0x000141c6f3f5:
    if (UNRECOVERED_JUMPTABLE_00 + 0x7ff0 == *(undefined1 (**) [16])(*pauVar22 + 7) &&
        UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0) {
code_r0x000141c6f436:
      (*pauStack_30)[1] = 5;
      (*pauStack_30)[0] = 0;
      return pauStack_30;
    }
    if (UNRECOVERED_JUMPTABLE_00 == *(undefined1 (**) [16])(*pauVar22 + 7) &&
        *(longlong *)*pauVar22 == 0x6f725f7065656873) {
      (*pauStack_30)[1] = 6;
      (*pauStack_30)[0] = 0;
      return pauStack_30;
    }
  }
LAB_141c6f41b:
  (*pauStack_30)[1] = 7;
  (*pauStack_30)[0] = 0;
  return pauStack_30;
code_r0x000141c6e77d:
  apauStack_68[1] = (undefined1 (*) [16])0x141c6e787;
  auVar40._0_8_ = pdb_141656fb0(&uStack_38);
  auVar40._8_8_ = extraout_XMM0_Qb;
  UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])&UNK_1433a3970;
  uVar13 = (ulonglong)*(int *)(&UNK_1433a3970 + (uStack_38 & 0xff) * 4);
  bVar35 = 0xfffffffebcc5c68f < uVar13;
  bVar38 = SCARRY8(uVar13,0x1433a3970);
  pauVar14 = (undefined1 (*) [16])(&UNK_1433a3970 + uVar13);
  bVar37 = (longlong)pauVar14 < 0;
  bVar36 = pauVar14 == (undefined1 (*) [16])0x0;
  cVar6 = (char)pauVar14;
  uVar10 = (uint)pauVar14;
  uVar21 = SUB82(pauVar22,0);
  cVar9 = (char)((ulonglong)auVar40._0_8_ >> 8);
  cVar49 = (char)((ulonglong)auVar40._0_8_ >> 0x10);
  cVar50 = (char)((ulonglong)auVar40._0_8_ >> 0x18);
  cVar51 = (char)((ulonglong)auVar40._0_8_ >> 0x20);
  cVar52 = (char)((ulonglong)auVar40._0_8_ >> 0x28);
  cVar53 = (char)((ulonglong)auVar40._0_8_ >> 0x30);
  cVar54 = (char)((ulonglong)auVar40._0_8_ >> 0x38);
  cVar56 = (char)((ulonglong)extraout_XMM0_Qb >> 8);
  cVar55 = (char)((ulonglong)extraout_XMM0_Qb >> 0x10);
  cVar58 = (char)((ulonglong)extraout_XMM0_Qb >> 0x18);
  cVar57 = (char)((ulonglong)extraout_XMM0_Qb >> 0x20);
  cVar60 = (char)((ulonglong)extraout_XMM0_Qb >> 0x28);
  cVar59 = (char)((ulonglong)extraout_XMM0_Qb >> 0x30);
  cVar62 = (char)((ulonglong)extraout_XMM0_Qb >> 0x38);
  ppauVar27 = (undefined1 (**) [16])&pcStack_58;
  ppcVar29 = &pcStack_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_38 & 0xff) {
  case 0:
    goto code_r0x000141c6e79c;
  case 1:
    (*param_1)[1] = 1;
    goto code_r0x000141c6e874;
  case 2:
    (*param_1)[1] = 2;
    goto code_r0x000141c6e874;
  case 3:
    (*param_1)[1] = 3;
    goto code_r0x000141c6e874;
  case 4:
    (*param_1)[1] = 4;
    goto code_r0x000141c6e874;
  case 5:
    (*param_1)[1] = 5;
    goto code_r0x000141c6e874;
  case 6:
    (*param_1)[1] = 6;
    goto code_r0x000141c6e874;
  case 7:
    (*param_1)[1] = 7;
    goto code_r0x000141c6e874;
  case 8:
    (*param_1)[1] = 8;
    goto code_r0x000141c6e874;
  case 9:
    (*param_1)[1] = 9;
    goto code_r0x000141c6e874;
  case 10:
    (*param_1)[1] = 10;
    goto code_r0x000141c6e874;
  case 0xb:
    (*param_1)[1] = 0xb;
    goto code_r0x000141c6e874;
  case 0xc:
    (*param_1)[1] = 0xc;
    goto code_r0x000141c6e874;
  case 0xd:
    (*param_1)[1] = 0xd;
    goto code_r0x000141c6e874;
  case 0xe:
    (*param_1)[1] = 0xe;
    goto code_r0x000141c6e874;
  case 0xf:
    (*param_1)[1] = 0xf;
    goto code_r0x000141c6e874;
  case 0x10:
    (*param_1)[1] = 0x10;
    goto code_r0x000141c6e874;
  case 0x11:
    (*param_1)[1] = 0x11;
    goto code_r0x000141c6e874;
  case 0x12:
    (*param_1)[1] = 0x12;
    goto code_r0x000141c6e874;
  case 0x13:
    (*param_1)[1] = 0x13;
    goto code_r0x000141c6e874;
  case 0x14:
    (*param_1)[1] = 0x14;
    goto code_r0x000141c6e874;
  case 0x15:
    (*param_1)[1] = 0x15;
    goto code_r0x000141c6e874;
  case 0x16:
    *(undefined1 (**) [16])(*param_1 + 8) = pauStack_30;
    (*param_1)[0] = 1;
    return param_1;
  default:
    (&UNK_1433a38fd)[uVar13] = (&UNK_1433a38fd)[uVar13] & 0x70;
    goto code_r0x000141c6e77d;
  case 0x2d:
    goto code_r0x000141c6e798;
  case 0x2e:
    goto code_r0x000141c6ec5a;
  case 0x2f:
    goto code_r0x000141c6ecc5;
  case 0x30:
  case 0x31:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
code_r0x000141c6ed26:
    auVar65[0] = -(in_XMM1[0] == DAT_142e505d0);
    auVar65[1] = -(in_XMM1[1] == UNK_142e505d1);
    auVar65[2] = -(in_XMM1[2] == UNK_142e505d2);
    auVar65[3] = -(in_XMM1[3] == UNK_142e505d3);
    auVar65[4] = -(in_XMM1[4] == UNK_142e505d4);
    auVar65[5] = -(in_XMM1[5] == UNK_142e505d5);
    auVar65[6] = -(in_XMM1[6] == UNK_142e505d6);
    auVar65[7] = -(in_XMM1[7] == UNK_142e505d7);
    auVar65[8] = -(in_XMM1[8] == UNK_142e505d8);
    auVar65[9] = -(in_XMM1[9] == UNK_142e505d9);
    auVar65[10] = -(in_XMM1[10] == UNK_142e505da);
    auVar65[0xb] = -(in_XMM1[0xb] == UNK_142e505db);
    auVar65[0xc] = -(in_XMM1[0xc] == UNK_142e505dc);
    auVar65[0xd] = -(in_XMM1[0xd] == UNK_142e505dd);
    auVar65[0xe] = -(in_XMM1[0xe] == UNK_142e505de);
    auVar65[0xf] = -(in_XMM1[0xf] == UNK_142e505df);
    auVar65 = auVar65 & auVar40;
    UNRECOVERED_JUMPTABLE_00 =
         (undefined1 (*) [16])
         (ulonglong)
         (ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar65[0xf] >> 7) << 0xf);
code_r0x000141c6ed36:
    pauStack_30 = pauVar14;
    if ((int)UNRECOVERED_JUMPTABLE_00 == 0xffff) {
      (*pauStack_30)[1] = 0;
      (*pauStack_30)[0] = 0;
      return pauStack_30;
    }
    goto LAB_141c6eddb;
  case 0x32:
    goto code_r0x000141c6ec93;
  case 0x37:
    uRam0000000100002600 = uRam0000000100002600 | 0x433a3970;
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
    (&UNK_1433a38fd)[uVar13] = (&UNK_1433a38fd)[uVar13] + 'p';
                    /* WARNING: Could not recover jumptable at 0x000141c6ed0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (*(code *)(&UNK_1433a3970 + *(int *)(&UNK_1433a3970 + (longlong)UNRECOVERED_JUMPTABLE * 4))
         )(&UNK_1433a3970,unaff_RBX & 0xffffffff,
           &UNK_1433a3970 + *(int *)(&UNK_1433a3970 + (longlong)UNRECOVERED_JUMPTABLE * 4));
    return UNRECOVERED_JUMPTABLE;
  case 0x38:
    goto code_r0x000141c6ed36;
  case 0x39:
    pauStack_30 = pauVar14;
code_r0x000141c6ede4:
    (*pauStack_30)[1] = 1;
    (*pauStack_30)[0] = 0;
    return pauStack_30;
  case 0x3a:
    goto code_r0x000141c6eda1;
  case 0x3b:
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x64726147;
code_r0x000141c6eea2:
    pauStack_30 = pauVar14;
    ppauVar28 = (undefined1 (**) [16])&pcStack_58;
    if (*(short *)(*pauVar22 + 4) == 0x6e65 && (int)UNRECOVERED_JUMPTABLE_00 == *(int *)*pauVar22) {
code_r0x000141c6eeb9:
      (*pauStack_30)[1] = 9;
      goto code_r0x000141c6f163;
    }
    break;
  case 0x3c:
    pauVar32 = (undefined1 (*) [16])(*param_1 + 4);
    out(*(undefined4 *)*param_1,uVar21);
code_r0x000141c6ee3e:
    uRam0000000100002600 = in((short)pauVar22);
    out(*(undefined4 *)*pauVar32,(short)pauVar22);
    pauStack_30 = pauVar14;
    if (*(longlong *)(*pauVar22 + 7) == 0x7265646c6f466564 &&
        *(undefined1 (**) [16])(*pauVar22 + in_FS_OFFSET) == UNRECOVERED_JUMPTABLE_00) {
      (*pauVar14)[1] = 0xc;
      goto code_r0x000141c6f163;
    }
    ppauVar28 = (undefined1 (**) [16])&pcStack_58;
    if (*(longlong *)(*pauVar22 + 7) == 0x6172656d61436564 &&
        UNRECOVERED_JUMPTABLE_00 == *(undefined1 (**) [16])*pauVar22) {
      (*pauVar14)[1] = 0xd;
      goto code_r0x000141c6f163;
    }
    break;
  case 0x3d:
    goto code_r0x000141c6ef46;
  case 0x3e:
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
    pauStack_30 = pauVar14;
    ppauVar28 = (undefined1 (**) [16])&pcStack_58;
    if (*(longlong *)*pauVar22 != 0x676e69646c697542) break;
    (&UNK_1433a3971)[uVar13] = 0;
    goto code_r0x000141c6f163;
  case 0x3f:
code_r0x000141c6f01d:
    (&UNK_1433a3971)[uVar13] = 2;
    pauStack_30 = pauVar14;
    goto code_r0x000141c6f163;
  case 0x40:
    pcVar33 = (char *)(CONCAT71((int7)((ulonglong)pauVar14 >> 8),cVar6 + (*pauVar14)[0]) + 0x33);
    *pcVar33 = *pcVar33 + 'p';
code_r0x000141c6ee60:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x41:
    uVar10 = uVar10 + _UNK_1433a3979;
    pauStack_30 = (undefined1 (*) [16])(ulonglong)uVar10;
    ppcVar25 = (char **)(unaff_RBP + 8);
code_r0x000141c6ef91:
    if (uVar10 == 0) {
      (*pauStack_30)[1] = 6;
      goto code_r0x000141c6f163;
    }
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)(*(uint *)*pauVar22 ^ 0x74696445);
    uVar10 = *(uint *)(*pauVar22 + 3) ^ 0x676e6974;
    ppcVar26 = ppcVar25;
code_r0x000141c6efa8:
    ppauVar28 = (undefined1 (**) [16])ppcVar26;
    if (uVar10 == 0 && (int)UNRECOVERED_JUMPTABLE_00 == 0) {
      (*pauStack_30)[1] = 7;
      goto code_r0x000141c6f163;
    }
    break;
  case 0x42:
    ppauVar27 = apauStack_68 + 1;
    apauStack_68[1] = (undefined1 (*) [16])0x48000001;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x6f636544;
    pauStack_30 = pauVar14;
    if (bVar35) goto code_r0x000141c6f064;
    if (!bVar36) {
      ppauVar28 = apauStack_68 + 1;
      if (*(short *)(*pauVar22 + 8) == 0x7372 && *(longlong *)*pauVar22 == 0x6f636544)
      goto code_r0x000141c6f01d;
      break;
    }
    uRam0000000100002600 = in(uVar21);
    pcVar33 = (char *)(ulonglong)(uint)(*(int *)(pauVar22[4] + 8) * -0x46b6f5cd);
code_r0x000141c6f07c:
    uVar3 = in((short)pauVar22);
    *(undefined4 *)pcVar33 = uVar3;
    pauVar14 = pauStack_30;
code_r0x000141c6f07a:
    if (*(longlong *)(*pauVar22 + 5) == 0x6e6f6974617a696d &&
        UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
      (*pauVar14)[1] = 3;
      pauStack_30 = pauVar14;
      goto code_r0x000141c6f163;
    }
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x646f6d6f746f6850;
    pauVar34 = (undefined1 (*) [16])(*(ulonglong *)*pauVar22 ^ 0x646f6d6f746f6850);
    ppcVar29 = (char **)ppauVar27;
code_r0x000141c6f0a1:
    pauStack_30 = pauVar14;
    if (*(longlong *)(*pauVar22 + 5) == 0x7374754c65646f6d && pauVar34 == (undefined1 (*) [16])0x0)
    {
      (*pauVar14)[1] = 0x13;
      goto code_r0x000141c6f163;
    }
    ppauVar28 = (undefined1 (**) [16])ppcVar29;
    if (*(longlong *)(*pauVar22 + 5) == 0x6b63614265646f6d &&
        UNRECOVERED_JUMPTABLE_00 == *(undefined1 (**) [16])*pauVar22) {
code_r0x000141c6f0ce:
      (*pauVar14)[1] = 0x15;
      pauStack_30 = pauVar14;
      goto code_r0x000141c6f163;
    }
    break;
  case 0x43:
    goto code_r0x000141c6ed57;
  case 0x44:
    *(int *)*pauVar14 = *(int *)*pauVar14 + 0x433a3970;
    pauStack_30 = pauVar14;
    goto code_r0x000141c6f163;
  case 0x45:
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
code_r0x000141c6ee06:
                    /* WARNING: Could not execute MULTIEQUAL */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (*(code *)(&UNK_1433a3a50 +
                   *(int *)(&UNK_1433a3a50 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                   (&UNK_1433a3a50 +
                    *(int *)(&UNK_1433a3a50 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4));
    return UNRECOVERED_JUMPTABLE;
  case 0x46:
    goto code_r0x000141c6f07a;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4c:
  case 0x4d:
    out((*param_1)[0],uVar21);
    if (!bVar35) {
      uVar3 = in(uVar21);
      *(undefined4 *)pcStack_58 = uVar3;
      if (bVar35) goto code_r0x000141c6f232;
      goto code_r0x000141c6f2a1;
    }
    pauStack_30 = pauVar14;
    pcVar33 = pcStack_58;
    if ((POPCOUNT((ulonglong)pauVar14 & 0xff) & 1U) == 0) {
code_r0x000141c6f20c:
      *pcVar33 = *pcVar33 + (char)UNRECOVERED_JUMPTABLE_00;
      (*pauStack_30)[0] = (*pauStack_30)[0] + (char)pauStack_30;
      UNRECOVERED_JUMPTABLE_00[0x148880][3] =
           UNRECOVERED_JUMPTABLE_00[0x148880][3] + (char)((ulonglong)pauVar22 >> 8);
      (*pauStack_30)[0] = 0;
      return pauStack_30;
    }
    if (*(longlong *)(*pauVar22 + 6) == 0x746c756d5f657a69 && *(int *)*pauVar22 == 0x433a3970) {
      UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x0;
      goto code_r0x000141c6f1df;
    }
    goto LAB_141c6f2d6;
  case 0x4a:
    goto code_r0x000141c6f104;
  case 0x4b:
    goto code_r0x000141c6f0a1;
  case 0x4e:
    piVar16 = (int *)(unaff_RBX + unaff_RBP * 8);
    *piVar16 = *piVar16 + 0x433a3970;
    (&UNK_1433a3971)[uVar13] = 4;
    pauStack_30 = pauVar14;
    goto code_r0x000141c6f163;
  case 0x4f:
    pauStack_30 = pauVar14;
    if ((*pauVar22)[8] == 'o' && *(longlong *)*pauVar22 == 0x676f6c5f656d6167) {
      (&UNK_1433a3971)[uVar13] = 4;
      (*pauVar14)[0] = 0;
      return pauVar14;
    }
    goto LAB_141c6f2d6;
  case 0x50:
    goto code_r0x000141c6f0ce;
  case 0x51:
code_r0x000141c6f1df:
    (&UNK_1433a3971)[uVar13] = (char)UNRECOVERED_JUMPTABLE_00;
    (*pauVar14)[0] = 0;
    return pauVar14;
  case 0x52:
    auVar40 = *pauVar22;
    in_XMM1 = ZEXT116((byte)pauVar22[1][0]);
    pauStack_30 = pauVar14;
    goto code_r0x000141c6f281;
  case 0x53:
    if (bVar35) {
      (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
      goto code_r0x000141c6f2a1;
    }
    out(*(undefined4 *)*param_1,uVar21);
code_r0x000141c6f232:
    pauStack_30 = pauVar14;
    if (!bVar35) {
      pauStack_30 = (undefined1 (*) [16])(ulonglong)(uVar10 ^ *(uint *)(*pauVar22 + 5));
code_r0x000141c6f237:
      bVar36 = UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0 &&
               UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0;
code_r0x000141c6f23a:
      if (bVar36) {
        (*pauStack_30)[1] = 5;
        (*pauStack_30)[0] = 0;
        return pauStack_30;
      }
      goto LAB_141c6f2d6;
    }
code_r0x000141c6f281:
    auVar42[0] = -(auVar40[0] == UNK_142f64c30);
    auVar42[1] = -(auVar40[1] == UNK_142f64c31);
    auVar42[2] = -(auVar40[2] == UNK_142f64c32);
    auVar42[3] = -(auVar40[3] == UNK_142f64c33);
    auVar42[4] = -(auVar40[4] == UNK_142f64c34);
    auVar42[5] = -(auVar40[5] == UNK_142f64c35);
    auVar42[6] = -(auVar40[6] == UNK_142f64c36);
    auVar42[7] = -(auVar40[7] == UNK_142f64c37);
    auVar42[8] = -(auVar40[8] == UNK_142f64c38);
    auVar42[9] = -(auVar40[9] == UNK_142f64c39);
    auVar42[10] = -(auVar40[10] == UNK_142f64c3a);
    auVar42[0xb] = -(auVar40[0xb] == UNK_142f64c3b);
    auVar42[0xc] = -(auVar40[0xc] == UNK_142f64c3c);
    auVar42[0xd] = -(auVar40[0xd] == UNK_142f64c3d);
    auVar42[0xe] = -(auVar40[0xe] == UNK_142f64c3e);
    auVar42[0xf] = -(auVar40[0xf] == UNK_142f64c3f);
    auVar67[0] = -(in_XMM1[0] == UNK_142f53950);
    auVar67[1] = -(in_XMM1[1] == UNK_142f53951);
    auVar67[2] = -(in_XMM1[2] == UNK_142f53952);
    auVar67[3] = -(in_XMM1[3] == UNK_142f53953);
    auVar67[4] = -(in_XMM1[4] == UNK_142f53954);
    auVar67[5] = -(in_XMM1[5] == UNK_142f53955);
    auVar67[6] = -(in_XMM1[6] == UNK_142f53956);
    auVar67[7] = -(in_XMM1[7] == UNK_142f53957);
    auVar67[8] = -(in_XMM1[8] == UNK_142f53958);
    auVar67[9] = -(in_XMM1[9] == UNK_142f53959);
    auVar67[10] = -(in_XMM1[10] == UNK_142f5395a);
    auVar67[0xb] = -(in_XMM1[0xb] == UNK_142f5395b);
    auVar67[0xc] = -(in_XMM1[0xc] == UNK_142f5395c);
    auVar67[0xd] = -(in_XMM1[0xd] == UNK_142f5395d);
    auVar67[0xe] = -(in_XMM1[0xe] == UNK_142f5395e);
    auVar67[0xf] = -(in_XMM1[0xf] == UNK_142f5395f);
    auVar67 = auVar67 & auVar42;
    pauVar14 = pauStack_30;
    if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000141c6f2a1:
      (*pauVar14)[1] = 2;
      (*pauVar14)[0] = 0;
      return pauVar14;
    }
LAB_141c6f2d6:
    (*pauStack_30)[1] = 7;
    (*pauStack_30)[0] = 0;
    return pauStack_30;
  case 0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x56:
    goto code_r0x000141c6f361;
  case 0x57:
                    /* WARNING: Could not recover jumptable at 0x000141c6f31f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*(code *)(UNRECOVERED_JUMPTABLE + 0x1433a397))();
    return UNRECOVERED_JUMPTABLE;
  case 0x58:
    goto code_r0x000141c6f346;
  case 0x59:
    out(*(undefined4 *)*param_1,uVar21);
    pauStack_30 = pauVar14;
    if (!bVar35 && !bVar36) goto code_r0x000141c6f38a;
    if (!bVar35) goto code_r0x000141c6f378;
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)(*(uint *)*pauVar22 ^ 0x433a3970);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])0x657a69735f776f64;
code_r0x000141c6f339:
    pauVar14 = pauStack_30;
    if (UNRECOVERED_JUMPTABLE == *(undefined1 (**) [16])(*pauVar22 + 3) &&
        UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
      (*pauStack_30)[1] = 0;
code_r0x000141c6f432:
      (*pauStack_30)[0] = 0;
      return pauStack_30;
    }
code_r0x000141c6f346:
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(*(ulonglong *)*pauVar22 ^ 0x69747465735f6975);
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])(*(ulonglong *)(*pauVar22 + 3) ^ 0x73676e6974746573);
code_r0x000141c6f361:
    pauStack_30 = pauVar14;
    if (UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0 &&
        UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
      (*pauStack_30)[1] = 4;
      (*pauStack_30)[0] = 0;
      return pauStack_30;
    }
    goto LAB_141c6f41b;
  case 0x5a:
    goto code_r0x000141c6f3da;
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x62:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6a:
  case 0x6c:
  case 0x6e:
  case 0x70:
  case 0x72:
  case 0x73:
    goto code_r0x000141c6f5dd;
  case 0x60:
    *(uint *)*pauVar14 = *(int *)*pauVar14 + uVar10;
    pauStack_30 = pauVar14;
    goto code_r0x000141c6f4d5;
  case 0x61:
    pauStack_30 = pauVar14;
    ppcVar29 = (char **)auStack_50;
    bVar35 = bVar38;
    goto code_r0x000141c6f3f0;
  case 99:
    (&UNK_1433a38fd)[uVar13] = (&UNK_1433a38fd)[uVar13] + 'p';
code_r0x000141c6f538:
                    /* WARNING: Could not recover jumptable at 0x000141c6f53f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])
         (*(code *)(*UNRECOVERED_JUMPTABLE_00 +
                   *(int *)(*UNRECOVERED_JUMPTABLE_00 + (longlong)UNRECOVERED_JUMPTABLE * 4)))();
    return UNRECOVERED_JUMPTABLE;
  case 0x69:
    uVar8 = in(uVar21);
    uRam0000000100002600 = CONCAT31(uRam0000000100002600._1_3_,uVar8);
    out(*(undefined4 *)*param_1,uVar21);
    if (!bVar35 && !bVar36) goto code_r0x000141c6f59f;
    if (*(longlong *)(*pauVar22 + 3) == 0x737265776f6c665f && *(int *)*pauVar22 == 0x433a3970) {
code_r0x000141c6f75b:
      (*pauVar14)[1] = 1;
      (*pauVar14)[0] = 0;
      return pauVar14;
    }
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(*(ulonglong *)*pauVar22 ^ 0x5f72656874616577);
    UNRECOVERED_JUMPTABLE =
         (undefined1 (*) [16])(*(ulonglong *)(*pauVar22 + 3) ^ 0x676f665f72656874);
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    goto code_r0x000141c6f58f;
  case 0x6b:
    goto code_r0x000141c6f469;
  case 0x6d:
    pcVar4 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])(*pcVar4)();
    return UNRECOVERED_JUMPTABLE;
  case 0x6f:
    _UNK_1433a3970 = _UNK_1433a3970 + uVar10 + (uint)bVar35;
    goto code_r0x000141c6f4fd;
  case 0x71:
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
    pauStack_30 = pauVar14;
    goto code_r0x000141c6f5c3;
  case 0x74:
    goto code_r0x000141c6f58f;
  case 0x75:
    out(*(undefined4 *)*param_1,uVar21);
    pauVar14 = (undefined1 (*) [16])(uVar13 + 0x150ae48d6);
code_r0x000141c6f5dd:
    auVar43[0] = -((char)auVar40._0_8_ == UNK_1433a2e00);
    auVar43[1] = -(cVar9 == UNK_1433a2e01);
    auVar43[2] = -(cVar49 == UNK_1433a2e02);
    auVar43[3] = -(cVar50 == UNK_1433a2e03);
    auVar43[4] = -(cVar51 == UNK_1433a2e04);
    auVar43[5] = -(cVar52 == UNK_1433a2e05);
    auVar43[6] = -(cVar53 == UNK_1433a2e06);
    auVar43[7] = -(cVar54 == UNK_1433a2e07);
    auVar43[8] = -((char)extraout_XMM0_Qb == UNK_1433a2e08);
    auVar43[9] = -(cVar56 == UNK_1433a2e09);
    auVar43[10] = -(cVar55 == UNK_1433a2e0a);
    auVar43[0xb] = -(cVar58 == UNK_1433a2e0b);
    auVar43[0xc] = -(cVar57 == UNK_1433a2e0c);
    auVar43[0xd] = -(cVar60 == UNK_1433a2e0d);
    auVar43[0xe] = -(cVar59 == UNK_1433a2e0e);
    auVar43[0xf] = -(cVar62 == UNK_1433a2e0f);
    auVar43 = auVar43 & in_XMM1;
    bVar35 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) == 0xffff;
code_r0x000141c6f5f3:
    UNRECOVERED_JUMPTABLE_00 = pauVar14;
    if (bVar35) {
code_r0x000141c6f5f9:
      (*pauVar14)[1] = 0xb;
      (*pauVar14)[0] = 0;
      return pauVar14;
    }
    goto LAB_141c6f752;
  case 0x76:
    goto code_r0x000141c6f880;
  case 0x77:
    goto code_r0x000141c6f757;
  case 0x78:
    out(*(undefined4 *)*param_1,uVar21);
    (&UNK_1433a3979)[uVar13] = (&UNK_1433a3979)[uVar13] + 'p';
code_r0x000141c6fb0a:
    return pauVar14;
  case 0x79:
code_r0x000141c6fb3c:
    if (*(longlong *)(*pauVar22 + 3) != 0x6b63696c635f7468 ||
        *(longlong *)*pauVar22 != 0x6c635f7468676972) goto code_r0x000141c6fb60;
    uVar8 = 7;
    pauStack_30 = pauVar14;
    goto code_r0x000141c6fe9d;
  case 0x7a:
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
    return pauVar14;
  case 0x7b:
    uRam0000000100002600 = in(uVar21);
    out((*param_1)[0],uVar21);
    if (!bVar36) {
      apauStack_68[1] = (undefined1 (*) [16])0x141c6f911;
      uVar10 = pub_142e32750();
      UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(ulonglong)uVar10;
      pauStack_30 = (undefined1 (*) [16])(*param_1 + 1);
code_r0x000141c6f916:
      if ((int)UNRECOVERED_JUMPTABLE_00 == 0) {
        uVar8 = 1;
        goto code_r0x000141c6fe9d;
      }
      goto LAB_141c6fe9b;
    }
    pauStack_30 = (undefined1 (*) [16])(ulonglong)(*(uint *)(*pauVar22 + 6) ^ 0x5f726570);
    goto code_r0x000141c6f8c3;
  case 0x7c:
    pcVar33 = &UNK_1433a3929 + uVar13;
    cVar6 = *pcVar33;
    *pcVar33 = *pcVar33 + 'p';
    pauStack_30 = pauVar14;
    if (*pcVar33 == '\0') goto code_r0x000141c6f9b8;
    out(*(undefined4 *)*param_1,uVar21);
    uVar8 = in(uVar21);
    uRam0000000100002600 = CONCAT31(uRam0000000100002600._1_3_,uVar8);
    if (SCARRY1(cVar6,'p')) goto code_r0x000141c6f9af;
    if ((*pauVar22)[8] == 'h' && *(int *)*pauVar22 == 0x433a3970) {
      uVar8 = 0xb;
      goto code_r0x000141c6fe9d;
    }
    if ((*pauVar22)[8] == 'e' && *(longlong *)*pauVar22 == 0x6572745f6c6f6f74) {
      uVar8 = 0x11;
    }
    else {
      if ((*pauVar22)[8] != 'e' || *(longlong *)*pauVar22 != 0x646f6d6f746f6870)
      goto code_r0x000141c6f9a2;
      uVar8 = 0x14;
    }
    goto code_r0x000141c6fe9d;
  case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7e:
    goto code_r0x000141c6fb60;
  case 0x7f:
    goto code_r0x000141c6f68c;
  case 0x80:
    auVar46[0] = -((char)auVar40._0_8_ == UNK_1433a2ee0);
    auVar46[1] = -(cVar9 == UNK_1433a2ee1);
    auVar46[2] = -(cVar49 == UNK_1433a2ee2);
    auVar46[3] = -(cVar50 == UNK_1433a2ee3);
    auVar46[4] = -(cVar51 == UNK_1433a2ee4);
    auVar46[5] = -(cVar52 == UNK_1433a2ee5);
    auVar46[6] = -(cVar53 == UNK_1433a2ee6);
    auVar46[7] = -(cVar54 == UNK_1433a2ee7);
    auVar46[8] = -((char)extraout_XMM0_Qb == UNK_1433a2ee8);
    auVar46[9] = -(cVar56 == UNK_1433a2ee9);
    auVar46[10] = -(cVar55 == UNK_1433a2eea);
    auVar46[0xb] = -(cVar58 == UNK_1433a2eeb);
    auVar46[0xc] = -(cVar57 == UNK_1433a2eec);
    auVar46[0xd] = -(cVar60 == UNK_1433a2eed);
    auVar46[0xe] = -(cVar59 == UNK_1433a2eee);
    auVar46[0xf] = -(cVar62 == UNK_1433a2eef);
    auVar69[0] = -(DAT_142e505d0 == 'p');
    auVar69[1] = -(UNK_142e505d1 == '9');
    auVar69[2] = -(UNK_142e505d2 == ':');
    auVar69[3] = -(UNK_142e505d3 == 'C');
    auVar69[4] = -(UNK_142e505d4 == '\0');
    auVar69[5] = -(UNK_142e505d5 == '\0');
    auVar69[6] = -(UNK_142e505d6 == '\0');
    auVar69[7] = -(UNK_142e505d7 == '\0');
    auVar69[8] = -(UNK_142e505d8 == '\0');
    auVar69[9] = -(UNK_142e505d9 == '\0');
    auVar69[10] = -(UNK_142e505da == '\0');
    auVar69[0xb] = -(UNK_142e505db == '\0');
    auVar69[0xc] = -(UNK_142e505dc == '\0');
    auVar69[0xd] = -(UNK_142e505dd == '\0');
    auVar69[0xe] = -(UNK_142e505de == '\0');
    auVar69[0xf] = -(UNK_142e505df == '\0');
    auVar69 = auVar69 & auVar46;
    pauStack_30 = pauVar14;
    if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141c6fe9b;
    uVar8 = 0x2b;
    goto code_r0x000141c6fe9d;
  case 0x81:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x82:
    goto code_r0x000141c6f625;
  case 0x83:
    pauStack_30 = pauVar14;
    if (!bVar36) goto LAB_141c6fe9b;
    uVar8 = 0x2f;
    goto code_r0x000141c6fe9d;
  case 0x84:
    if (bVar36) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*(undefined4 *)*param_1,uVar21);
    uVar8 = in(uVar21);
    uRam0000000100002600 = CONCAT31(uRam0000000100002600._1_3_,uVar8);
    if (bVar35) {
      uVar13 = (ulonglong)(*(uint *)*pauVar22 ^ 0x433a3970);
      pauStack_30 = pauVar14;
code_r0x000141c6fab9:
      if (*(short *)(*pauVar22 + 8) == 0x7265 && uVar13 == 0) {
        uVar8 = 0x12;
        goto code_r0x000141c6fe9d;
      }
      if (*(short *)(*pauVar22 + 8) == 0x6d72 && *(longlong *)*pauVar22 == 0x69666e6f635f6975) {
        uVar8 = 0x1b;
        goto code_r0x000141c6fe9d;
      }
      if (*(short *)(*pauVar22 + 8) == 0x746f && *(longlong *)*pauVar22 == 0x68736e6565726373) {
        uVar8 = 0x25;
        goto code_r0x000141c6fe9d;
      }
      goto LAB_141c6fe9b;
    }
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
    if (*(longlong *)(*pauVar22 + 3) != 0x6d6f6f7a5f617265 ||
        *(longlong *)*pauVar22 != 0x7a5f6172656d6163) goto code_r0x000141c6fb3c;
    uVar8 = 4;
    pauStack_30 = pauVar14;
    goto code_r0x000141c6fe9d;
  case 0x85:
  case 0x86:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
    pauStack_30 = (undefined1 (*) [16])((ulonglong)param_1 & 0xffffffff);
    goto LAB_141c6fe9b;
  case 0x87:
    goto code_r0x000141c6fc75;
  case 0x88:
    in_XMM1 = ZEXT216(*(ushort *)pauVar22[1]);
    auVar40[0] = -((*pauVar22)[0] == UNK_142e50600);
    auVar40[1] = -((*pauVar22)[1] == UNK_142e50601);
    auVar40[2] = -((*pauVar22)[2] == UNK_142e50602);
    auVar40[3] = -((*pauVar22)[3] == UNK_142e50603);
    auVar40[4] = -((*pauVar22)[4] == UNK_142e50604);
    auVar40[5] = -((*pauVar22)[5] == UNK_142e50605);
    auVar40[6] = -((*pauVar22)[6] == UNK_142e50606);
    auVar40[7] = -((*pauVar22)[7] == UNK_142e50607);
    auVar40[8] = -((*pauVar22)[8] == UNK_142e50608);
    auVar40[9] = -((*pauVar22)[9] == UNK_142e50609);
    auVar40[10] = -((*pauVar22)[10] == UNK_142e5060a);
    auVar40[0xb] = -((*pauVar22)[0xb] == UNK_142e5060b);
    auVar40[0xc] = -((*pauVar22)[0xc] == UNK_142e5060c);
    auVar40[0xd] = -((*pauVar22)[0xd] == UNK_142e5060d);
    auVar40[0xe] = -((*pauVar22)[0xe] == UNK_142e5060e);
    auVar40[0xf] = -((*pauVar22)[0xf] == UNK_142e5060f);
code_r0x000141c6fc2f:
    auVar70[0] = -(in_XMM1[0] == UNK_142e50610);
    auVar70[1] = -(in_XMM1[1] == UNK_142e50611);
    auVar70[2] = -(in_XMM1[2] == UNK_142e50612);
    auVar70[3] = -(in_XMM1[3] == UNK_142e50613);
    auVar70[4] = -(in_XMM1[4] == UNK_142e50614);
    auVar70[5] = -(in_XMM1[5] == UNK_142e50615);
    auVar70[6] = -(in_XMM1[6] == UNK_142e50616);
    auVar70[7] = -(in_XMM1[7] == UNK_142e50617);
    auVar70[8] = -(in_XMM1[8] == UNK_142e50618);
    auVar70[9] = -(in_XMM1[9] == UNK_142e50619);
    auVar70[10] = -(in_XMM1[10] == UNK_142e5061a);
    auVar70[0xb] = -(in_XMM1[0xb] == UNK_142e5061b);
    auVar70[0xc] = -(in_XMM1[0xc] == UNK_142e5061c);
    auVar70[0xd] = -(in_XMM1[0xd] == UNK_142e5061d);
    auVar70[0xe] = -(in_XMM1[0xe] == UNK_142e5061e);
    auVar70[0xf] = -(in_XMM1[0xf] == UNK_142e5061f);
    auVar70 = auVar70 & auVar40;
    if ((ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf) == 0xffff) {
      uVar8 = 8;
      pauStack_30 = pauVar14;
      goto code_r0x000141c6fe9d;
    }
    auVar47[0] = -((*pauVar22)[0] == DAT_142e50620);
    auVar47[1] = -((*pauVar22)[1] == UNK_142e50621);
    auVar47[2] = -((*pauVar22)[2] == UNK_142e50622);
    auVar47[3] = -((*pauVar22)[3] == UNK_142e50623);
    auVar47[4] = -((*pauVar22)[4] == UNK_142e50624);
    auVar47[5] = -((*pauVar22)[5] == UNK_142e50625);
    auVar47[6] = -((*pauVar22)[6] == UNK_142e50626);
    auVar47[7] = -((*pauVar22)[7] == UNK_142e50627);
    auVar47[8] = -((*pauVar22)[8] == UNK_142e50628);
    auVar47[9] = -((*pauVar22)[9] == UNK_142e50629);
    auVar47[10] = -((*pauVar22)[10] == UNK_142e5062a);
    auVar47[0xb] = -((*pauVar22)[0xb] == UNK_142e5062b);
    auVar47[0xc] = -((*pauVar22)[0xc] == UNK_142e5062c);
    auVar47[0xd] = -((*pauVar22)[0xd] == UNK_142e5062d);
    auVar47[0xe] = -((*pauVar22)[0xe] == UNK_142e5062e);
    auVar47[0xf] = -((*pauVar22)[0xf] == UNK_142e5062f);
    auVar71[0] = -((char)*(undefined2 *)pauVar22[1] == UNK_142e50630);
    auVar71[1] = -((char)((ushort)*(undefined2 *)pauVar22[1] >> 8) == UNK_142e50631);
    auVar71[2] = -(UNK_142e50632 == '\0');
    auVar71[3] = -(UNK_142e50633 == '\0');
    auVar71[4] = -(UNK_142e50634 == '\0');
    auVar71[5] = -(UNK_142e50635 == '\0');
    auVar71[6] = -(UNK_142e50636 == '\0');
    auVar71[7] = -(UNK_142e50637 == '\0');
    auVar71[8] = -(UNK_142e50638 == '\0');
    auVar71[9] = -(UNK_142e50639 == '\0');
    auVar71[10] = -(UNK_142e5063a == '\0');
    auVar71[0xb] = -(UNK_142e5063b == '\0');
    auVar71[0xc] = -(UNK_142e5063c == '\0');
    auVar71[0xd] = -(UNK_142e5063d == '\0');
    auVar71[0xe] = -(UNK_142e5063e == '\0');
    auVar71[0xf] = -(UNK_142e5063f == '\0');
    auVar71 = auVar71 & auVar47;
    bVar36 = (ushort)((ushort)(SUB161(auVar71 >> 7,0) & 1) |
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
                     (ushort)(byte)(auVar71[0xf] >> 7) << 0xf) == 0xffff;
    goto code_r0x000141c6fc75;
  case 0x8d:
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
    bVar35 = (*pauVar14)[0] == '\0';
    goto code_r0x000141c6f5f3;
  case 0x92:
    (&UNK_1433a3971)[uVar13] = 0x70;
    (*pauVar14)[0] = 0;
    return pauVar14;
  case 0x93:
    pauStack_30 = pauVar14;
    if (*(int *)(*pauVar22 + 3) != 0x6e776f64 || *(int *)(*pauVar22 + in_FS_OFFSET) != 0x433a3970)
    goto LAB_141c6fe9b;
    uVar8 = 0x1e;
    goto code_r0x000141c6fe9d;
  case 0x94:
    uRam0000000100002600 = in(uVar21);
    if (!bVar35) {
      pauStack_30 = (undefined1 (*) [16])0x753068aa;
      cRam00000000753068aa = cRam00000000753068aa + -0x56;
code_r0x000141c6fd58:
      if (*(longlong *)(*pauVar22 + 5) == 0x657461746f725f61 &&
          *(longlong *)*pauVar22 == 0x725f6172656d6163) {
        uVar8 = 5;
        goto code_r0x000141c6fe9d;
      }
code_r0x000141c6fd7c:
      if (*(longlong *)(*pauVar22 + 5) == 0x676e69646c697562 &&
          *(longlong *)*pauVar22 == 0x6975625f6c6f6f74) {
        uVar8 = 10;
        goto code_r0x000141c6fe9d;
      }
      goto LAB_141c6fe9b;
    }
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
    cRam000000014431227a = cRam000000014431227a + (char)((ulonglong)pauVar22 >> 8);
    (*pauVar14)[0] = (*pauVar14)[0] + cVar6;
    pauStack_30 = pauVar14;
    if (*(int *)(*pauVar22 + 8) != 0x6e696172 || *(longlong *)*pauVar22 != 0x7265745f6c6f6f74)
    goto code_r0x000141c6fdc8;
    uVar8 = 0xe;
    goto code_r0x000141c6fe9d;
  case 0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
    out(*(undefined4 *)*param_1,uVar21);
    out(*(undefined4 *)(*param_1 + 4),uVar21);
    uVar8 = in(uVar21);
    uRam0000000100002600 = CONCAT31(uRam0000000100002600._1_3_,uVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_141c6f0fd:
  in_R10 = &UNK_1433a3728;
  pauVar14 = pauStack_30;
code_r0x000141c6f104:
  *(undefined8 *)((longlong)ppauVar28 + -8) = 0x141c6f11b;
  uVar12 = pdb_142d8f140(pauVar22,UNRECOVERED_JUMPTABLE,in_R10,0x16);
  *(undefined8 *)(*pauVar14 + 8) = uVar12;
  (*pauVar14)[0] = 1;
  return pauVar14;
code_r0x000141c6f064:
  (*pauStack_30)[1] = 0xb;
code_r0x000141c6f163:
  (*pauStack_30)[0] = 0;
  return pauStack_30;
code_r0x000141c6eda1:
  pauStack_30 = pauVar14;
  if ((int)UNRECOVERED_JUMPTABLE_00 == 0xffff) {
    (*pauVar14)[1] = 2;
    (*pauVar14)[0] = 0;
    return pauVar14;
  }
LAB_141c6eddb:
  (*pauStack_30)[1] = 4;
  (*pauStack_30)[0] = 0;
  return pauStack_30;
  while (*(ulonglong *)(param_2[2] + 8) = uVar15, uVar15 != uVar13) {
code_r0x000141c6e821:
    uVar15 = uVar15 + 1;
    bVar7 = *(byte *)(lVar23 + -1 + uVar15);
    if ((0x20 < (ulonglong)bVar7) || ((0x100002600U >> ((ulonglong)bVar7 & 0x3f) & 1) == 0)) {
      if (bVar7 != 0x7d) {
        uStack_38 = 10;
        goto code_r0x000141c6e850;
      }
      *(ulonglong *)(param_2[2] + 8) = uVar15;
      (*param_1)[1] = (undefined1)uStack_38;
      goto code_r0x000141c6e874;
    }
  }
code_r0x000141c6e847:
  uStack_38 = 3;
code_r0x000141c6e850:
  apauStack_68[1] = (undefined1 (*) [16])0x141c6e85a;
  uVar12 = pdb_142d855a0(param_2,&uStack_38);
  *(undefined8 *)(*param_1 + 8) = uVar12;
  uVar8 = 1;
code_r0x000141c6e876:
  (*param_1)[0] = uVar8;
  return param_1;
code_r0x000141c6f9a2:
  UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])(*(ulonglong *)*pauVar22 ^ 0x65636e61635f6975);
code_r0x000141c6f9af:
  UNRECOVERED_JUMPTABLE = (undefined1 (*) [16])((ulonglong)(byte)(*pauVar22)[8] ^ 0x6c);
code_r0x000141c6f9b8:
  if (UNRECOVERED_JUMPTABLE == (undefined1 (*) [16])0x0 &&
      UNRECOVERED_JUMPTABLE_00 == (undefined1 (*) [16])0x0) {
    uVar8 = 0x1a;
    goto code_r0x000141c6fe9d;
  }
  if ((*pauVar22)[8] == 'u' && *(longlong *)*pauVar22 == 0x6e656d5f6e69616d) {
    uVar8 = 0x23;
    goto code_r0x000141c6fe9d;
  }
  if ((*pauVar22)[8] == 'n' && *(longlong *)*pauVar22 == 0x776170735f797669) {
    uVar8 = 0x2c;
    goto code_r0x000141c6fe9d;
  }
LAB_141c6fe9b:
  uVar8 = 0x30;
code_r0x000141c6fe9d:
  (*pauStack_30)[1] = uVar8;
  (*pauStack_30)[0] = 0;
  return pauStack_30;
}

