// VA 0x140bbeed0, PDB extent 605 bytes
// country_core::resources::history::decorator_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014306333e) overlaps instruction at (ram,0x00014306333d)
    */
/* WARNING: Removing unreachable block (ram,0x000140bbf4db) */
/* WARNING: Removing unreachable block (ram,0x000140bbf241) */
/* WARNING: Removing unreachable block (ram,0x000140bbf501) */
/* WARNING: Removing unreachable block (ram,0x00014306331f) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 605 */

int * pdb_140bbeed0(int *param_1,undefined8 param_2,ulonglong param_3,uint *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  code *pcVar7;
  longlong *plVar8;
  char cVar9;
  undefined7 uVar11;
  int *piVar10;
  byte bVar12;
  ulonglong uVar14;
  undefined7 uVar16;
  char *pcVar15;
  uint uVar17;
  undefined *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  byte bVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined8 *unaff_RBP;
  char *unaff_RDI;
  ulonglong uVar24;
  undefined8 uVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong unaff_GS_OFFSET;
  bool bVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  char in_XMM1_Ba;
  char in_XMM1_Bb;
  char in_XMM1_Bc;
  char in_XMM1_Bd;
  char in_XMM1_Be;
  char in_XMM1_Bf;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char in_XMM1_Bi;
  char in_XMM1_Bj;
  char in_XMM1_Bk;
  char in_XMM1_Bl;
  char in_XMM1_Bm;
  char in_XMM1_Bn;
  char in_XMM1_Bo;
  char in_XMM1_Bp;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined2 uStack_124;
  byte abStack_121 [17];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_a8 [32];
  ulonglong uStack_88;
  char *pcStack_80;
  int iStack_75;
  byte abStack_70 [8];
  int *piStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  uint uVar13;
  
  pdb_141be8300(abStack_70);
  if (abStack_70[0] == 4) {
    *(int **)(param_1 + 2) = piStack_68;
    param_1[0] = 6;
    param_1[1] = 0;
    return param_1;
  }
  uStack_38 = uStack_50;
  uVar17 = auStack_60._12_4_;
  auStack_48 = auStack_60;
  puVar18 = &UNK_14306333c;
  uVar14 = (ulonglong)*(int *)(&UNK_14306333c + (ulonglong)(uint)abStack_70[0] * 4);
  bVar30 = 0xfffffffebcf9ccc3 < uVar14;
  pcStack_80 = &UNK_14306333c + uVar14;
  bVar31 = pcStack_80 != (char *)0x0;
  cVar9 = (char)piStack_68;
  iVar26 = (int)piStack_68;
  uVar11 = (undefined7)((ulonglong)piStack_68 >> 8);
  bVar12 = (byte)pcStack_80;
  uVar13 = (uint)pcStack_80;
  uVar16 = (undefined7)((ulonglong)pcStack_80 >> 8);
  bVar21 = (byte)auStack_a8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(abStack_70[0]) {
  case 5:
    if (!bVar31) {
      *(char *)((longlong)piStack_68 + 1) = '\x04';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    goto LAB_140bbf4c0;
  case 6:
    puVar23 = (undefined8 *)&stack0xffffffffffffff50;
    cVar9 = '\x06';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar23 = puVar23 + -1;
      *puVar23 = *unaff_RBP;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *piStack_68 = *piStack_68 + iVar26;
    *(char *)(uVar14 + 0x1444ebb4a) = *(char *)(uVar14 + 0x1444ebb4a) + '3';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  default:
    out(*param_1,0x333c);
    cVar9 = in(0x333c);
    *unaff_RDI = cVar9;
    out(param_1[1],0x333c);
    if (bVar30) {
      pcVar7 = (code *)swi(3);
      piVar10 = (int *)(*pcVar7)();
      return piVar10;
    }
    uVar22 = (ulonglong)
             (uint)(*(int *)((longlong)&iStack_75 + (longlong)pcStack_80 * 2) * 0x9490542);
    puVar23 = (undefined8 *)(uVar22 - 8);
    *(undefined8 **)(uVar22 - 8) = unaff_RBP;
    cVar9 = '\x10';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar23 = puVar23 + -1;
      *puVar23 = *unaff_RBP;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *(ulonglong *)(uVar22 - 0x90) = uVar22 - 8;
code_r0x000140bbf4c9:
    *(char *)((longlong)piStack_68 + 1) = '\x06';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 9:
    *unaff_RDI = *unaff_RDI + bVar12;
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    *(char *)((longlong)piStack_68 + 1) = '\a';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 10:
    puVar23 = (undefined8 *)&stack0xffffffffffffff50;
    cVar6 = '\x05';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar23 = puVar23 + -1;
      *puVar23 = *unaff_RBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    piStack_68 = (int *)CONCAT71(uVar11,cVar9 + (char)*piStack_68);
    *(char *)(uVar14 + 0x1444ebb4c) = *(char *)(uVar14 + 0x1444ebb4c) + '3';
code_r0x000140bbf25f:
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0xb:
    *unaff_RDI = *unaff_RDI + bVar12;
    *piStack_68 = *piStack_68 + iVar26;
    *(char *)(uVar14 + 0x1444ebb45) = *(char *)(uVar14 + 0x1444ebb45) + '3';
    goto code_r0x000140bbf2f3;
  case 0xd:
    return piStack_68;
  case 0xe:
    puVar23 = (undefined8 *)&stack0xffffffffffffff50;
    cVar6 = '\x16';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar23 = puVar23 + -1;
      *puVar23 = *unaff_RBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    *(char *)(uVar14 + 0x1444ebb4d) = *(char *)(uVar14 + 0x1444ebb4d) + '3';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    out(*param_1,0x333c);
    if (bVar30) {
      out(param_1[1],0x333c);
      piStack_68 = (int *)(ulonglong)(iVar26 + 0x74c80949);
      if (CONCAT17(UNK_143063348,
                   CONCAT16(UNK_143063347,
                            CONCAT15(UNK_143063346,
                                     CONCAT14(UNK_143063345,
                                              CONCAT13(UNK_143063344,
                                                       CONCAT12(UNK_143063343,
                                                                CONCAT11(UNK_143063342,UNK_143063341
                                                                        ))))))) ==
          0x64695f726f6c6f63 &&
          CONCAT17(UNK_143063343,
                   CONCAT16(UNK_143063342,
                            CONCAT15(UNK_143063341,
                                     CONCAT14(UNK_143063340,
                                              CONCAT13(UNK_14306333f,
                                                       CONCAT12(UNK_14306333e,
                                                                CONCAT11(UNK_14306333d,UNK_14306333c
                                                                        ))))))) ==
          0x6c6f635f646f6f77) {
        *(char *)((longlong)piStack_68 + 1) = '\r';
        *(char *)piStack_68 = '\0';
        return piStack_68;
      }
    }
    else if ((uVar13 | 0x4306333c) == 0) {
      *(char *)((longlong)piStack_68 + 1) = '\f';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    goto LAB_140bbf4c0;
  case 0x11:
    if ((longlong)pcStack_80 < 0) {
      piStack_68[0x318052] = piStack_68[0x318052] + uVar13;
      if (CONCAT17(UNK_14306334a,
                   CONCAT16(UNK_143063349,
                            CONCAT15(UNK_143063348,
                                     CONCAT14(UNK_143063347,
                                              CONCAT13(UNK_143063346,
                                                       CONCAT12(UNK_143063345,
                                                                CONCAT11(UNK_143063344,UNK_143063343
                                                                        ))))))) ==
          0x7374726f70707573 &&
          CONCAT17(UNK_143063343,
                   CONCAT16(UNK_143063342,
                            CONCAT15(UNK_143063341,
                                     CONCAT14(UNK_143063340,
                                              CONCAT13(UNK_14306333f,
                                                       CONCAT12(UNK_14306333e,
                                                                CONCAT11(UNK_14306333d,UNK_14306333c
                                                                        ))))))) ==
          0x735f737269617473) {
        *(char *)((longlong)piStack_68 + 1) = '\x10';
        goto code_r0x000140bbf25f;
      }
      goto LAB_140bbf4c0;
    }
    if (!bVar30) goto code_r0x000140bbf4c9;
    auStack_60[1] = UNK_14306333d;
    auStack_60[0] = UNK_14306333c;
    auStack_60[2] = UNK_14306333e;
    auStack_60[3] = UNK_14306333f;
    auStack_60[4] = UNK_143063340;
    auStack_60[5] = UNK_143063341;
    auStack_60[6] = UNK_143063342;
    auStack_60[7] = UNK_143063343;
    auStack_60[8] = UNK_143063344;
    auStack_60[9] = UNK_143063345;
    auStack_60[10] = UNK_143063346;
    auStack_60[0xb] = UNK_143063347;
    auStack_60[0xc] = UNK_143063348;
    auStack_60[0xd] = UNK_143063349;
    auStack_60[0xe] = UNK_14306334a;
    auStack_60[0xf] = UNK_14306334b;
    in_XMM1_Bc = '\0';
    in_XMM1_Bd = '\0';
    in_XMM1_Be = '\0';
    in_XMM1_Bf = '\0';
    in_XMM1_Bg = '\0';
    in_XMM1_Bh = '\0';
    in_XMM1_Bi = '\0';
    in_XMM1_Bj = '\0';
    in_XMM1_Bk = '\0';
    in_XMM1_Bl = '\0';
    in_XMM1_Bm = '\0';
    in_XMM1_Bn = '\0';
    in_XMM1_Bo = '\0';
    in_XMM1_Bp = '\0';
    in_XMM1_Ba = UNK_14306334c;
    in_XMM1_Bb = UNK_14306334d;
    goto code_r0x000140bbf2ca;
  case 0x12:
    return piStack_68;
  case 0x14:
    if (bVar31) {
      if (CONCAT13(UNK_14306333f,CONCAT12(UNK_14306333e,CONCAT11(UNK_14306333d,UNK_14306333c))) ==
          uVar13) goto code_r0x000140bbf4c9;
      goto LAB_140bbf4c0;
    }
code_r0x000140bbf2ca:
    auVar32[0] = -(auStack_60[0] == UNK_1430621c0);
    auVar32[1] = -(auStack_60[1] == UNK_1430621c1);
    auVar32[2] = -(auStack_60[2] == UNK_1430621c2);
    auVar32[3] = -(auStack_60[3] == UNK_1430621c3);
    auVar32[4] = -(auStack_60[4] == UNK_1430621c4);
    auVar32[5] = -(auStack_60[5] == UNK_1430621c5);
    auVar32[6] = -(auStack_60[6] == UNK_1430621c6);
    auVar32[7] = -(auStack_60[7] == UNK_1430621c7);
    auVar32[8] = -(auStack_60[8] == UNK_1430621c8);
    auVar32[9] = -(auStack_60[9] == UNK_1430621c9);
    auVar32[10] = -(auStack_60[10] == UNK_1430621ca);
    auVar32[0xb] = -(auStack_60[0xb] == UNK_1430621cb);
    auVar32[0xc] = -(auStack_60[0xc] == UNK_1430621cc);
    auVar32[0xd] = -(auStack_60[0xd] == UNK_1430621cd);
    auVar32[0xe] = -(auStack_60[0xe] == UNK_1430621ce);
    auVar32[0xf] = -(auStack_60[0xf] == UNK_1430621cf);
    auVar34[0] = -(in_XMM1_Ba == UNK_14304c950);
    auVar34[1] = -(in_XMM1_Bb == UNK_14304c951);
    auVar34[2] = -(in_XMM1_Bc == UNK_14304c952);
    auVar34[3] = -(in_XMM1_Bd == UNK_14304c953);
    auVar34[4] = -(in_XMM1_Be == UNK_14304c954);
    auVar34[5] = -(in_XMM1_Bf == UNK_14304c955);
    auVar34[6] = -(in_XMM1_Bg == UNK_14304c956);
    auVar34[7] = -(in_XMM1_Bh == UNK_14304c957);
    auVar34[8] = -(in_XMM1_Bi == UNK_14304c958);
    auVar34[9] = -(in_XMM1_Bj == UNK_14304c959);
    auVar34[10] = -(in_XMM1_Bk == UNK_14304c95a);
    auVar34[0xb] = -(in_XMM1_Bl == UNK_14304c95b);
    auVar34[0xc] = -(in_XMM1_Bm == UNK_14304c95c);
    auVar34[0xd] = -(in_XMM1_Bn == UNK_14304c95d);
    auVar34[0xe] = -(in_XMM1_Bo == UNK_14304c95e);
    auVar34[0xf] = -(in_XMM1_Bp == UNK_14304c95f);
    auVar34 = auVar34 & auVar32;
    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)piStack_68 + 1) = '\t';
code_r0x000140bbf2f3:
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
LAB_140bbf4c0:
    *(char *)((longlong)piStack_68 + 1) = '\x13';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0x15:
    *(byte *)((longlong)piStack_68 + 1) = bVar12;
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0x16:
    if ((int)param_3 ==
        CONCAT13(UNK_143063342,CONCAT12(UNK_143063341,CONCAT11(UNK_143063340,UNK_14306333f))) &&
        uVar13 == 0) {
      *(char *)((longlong)piStack_68 + 1) = '\x0f';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    break;
  case 0x17:
    *piStack_68 = *piStack_68 + iVar26;
    *(char *)(uVar14 + 0x1444ebb46) = *(char *)(uVar14 + 0x1444ebb46) + '3';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0x18:
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
code_r0x000140bbf63f:
    *(char *)((longlong)piStack_68 + 1) = '\x13';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0x19:
    if (((byte)(bVar21 + *(byte *)((longlong)param_1 + 0xf)) != '\0') &&
       (!CARRY1(bVar21,*(byte *)((longlong)param_1 + 0xf)))) {
      if (CONCAT17(UNK_14306334a,
                   CONCAT16(UNK_143063349,
                            CONCAT15(UNK_143063348,
                                     CONCAT14(UNK_143063347,
                                              CONCAT13(UNK_143063346,
                                                       CONCAT12(UNK_143063345,
                                                                CONCAT11(UNK_143063344,UNK_143063343
                                                                        ))))))) ==
          0x656c7974735f666f && pcStack_80 == (char *)0x0) {
        *(char *)((longlong)piStack_68 + 1) = '\x12';
        *(char *)piStack_68 = '\0';
        return piStack_68;
      }
      break;
    }
    goto code_r0x000140bbf5ad;
  case 0x1a:
  case 0x22:
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    if (param_3 ==
        CONCAT17(UNK_143063349,
                 CONCAT16(UNK_143063348,
                          CONCAT15(UNK_143063347,
                                   CONCAT14(UNK_143063346,
                                            CONCAT13(UNK_143063345,
                                                     CONCAT12(UNK_143063344,
                                                              CONCAT11(UNK_143063343,UNK_143063342))
                                                    ))))) && pcStack_80 == (char *)0x0) {
      *(char *)((longlong)piStack_68 + 1) = '\x11';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    break;
  case 0x1b:
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    *(char *)((longlong)piStack_68 + 1) = '\x01';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0x1c:
    piStack_68 = (int *)(ulonglong)((uint)CONCAT71(uVar11,cVar9 + 'A') ^ 0x7365);
    if ((int)param_3 == 0 && uVar13 == 0) {
      *(char *)((longlong)piStack_68 + 1) = '\f';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    if (CONCAT11(UNK_143063341,UNK_143063340) == 0x7372 &&
        CONCAT13(UNK_14306333f,CONCAT12(UNK_14306333e,CONCAT11(UNK_14306333d,UNK_14306333c))) ==
        0x69617473) {
      *(char *)((longlong)piStack_68 + 1) = '\x14';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    break;
  case 0x1d:
    out(*param_1,0x333c);
    out((char)param_1[1],0x333c);
    if (!bVar30 && bVar31) {
      *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    }
    else {
      if (CONCAT17(UNK_143063346,
                   CONCAT16(UNK_143063345,
                            CONCAT15(UNK_143063344,
                                     CONCAT14(UNK_143063343,
                                              CONCAT13(UNK_143063342,
                                                       CONCAT12(UNK_143063341,
                                                                CONCAT11(UNK_143063340,UNK_14306333f
                                                                        ))))))) ==
          0x6c6c61775f6e6564 &&
          uVar13 == CONCAT13(UNK_14306333f,
                             CONCAT12(UNK_14306333e,CONCAT11(UNK_14306333d,UNK_14306333c)))) {
        *(char *)((longlong)piStack_68 + 1) = '\x02';
        *(char *)piStack_68 = '\0';
        return piStack_68;
      }
      if (CONCAT17(UNK_143063346,
                   CONCAT16(UNK_143063345,
                            CONCAT15(UNK_143063344,
                                     CONCAT14(UNK_143063343,
                                              CONCAT13(UNK_143063342,
                                                       CONCAT12(UNK_143063341,
                                                                CONCAT11(UNK_143063340,UNK_14306333f
                                                                        ))))))) !=
          0x79745f646e616865 ||
          CONCAT17(UNK_143063343,
                   CONCAT16(UNK_143063342,
                            CONCAT15(UNK_143063341,
                                     CONCAT14(UNK_143063340,
                                              CONCAT13(UNK_14306333f,
                                                       CONCAT12(UNK_14306333e,
                                                                CONCAT11(UNK_14306333d,UNK_14306333c
                                                                        ))))))) !=
          0x646e616865657266) break;
    }
    *(char *)((longlong)piStack_68 + 1) = '\b';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0x1e:
    out(*param_1,0x333c);
    if (bVar30 || !bVar31) {
      cVar9 = in(0x333c);
      *unaff_RDI = cVar9;
      if (CONCAT13(UNK_143063347,CONCAT12(UNK_143063346,CONCAT11(UNK_143063345,UNK_143063344))) ==
          0x74686769 &&
          CONCAT17(UNK_143063343,
                   CONCAT16(UNK_143063342,
                            CONCAT15(UNK_143063341,
                                     CONCAT14(UNK_143063340,
                                              CONCAT13(UNK_14306333f,
                                                       CONCAT12(UNK_14306333e,
                                                                CONCAT11(UNK_14306333d,UNK_14306333c
                                                                        ))))))) == 0x646e6977) {
        *(char *)((longlong)piStack_68 + 1) = '\r';
        *(char *)piStack_68 = '\0';
        return piStack_68;
      }
      break;
    }
    if (!bVar30 && bVar31) {
code_r0x000140bbf87c:
      *(char *)((longlong)piStack_68 + 1) = '\0';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    cVar9 = in(0x333c);
    *unaff_RDI = cVar9;
    cVar9 = in(0x333c);
    unaff_RDI[1] = cVar9;
    if ((param_3 ^ CONCAT17(UNK_143063348,
                            CONCAT16(UNK_143063347,
                                     CONCAT15(UNK_143063346,
                                              CONCAT14(UNK_143063345,
                                                       CONCAT13(UNK_143063344,
                                                                CONCAT12(UNK_143063343,
                                                                         CONCAT11(UNK_143063342,
                                                                                  UNK_143063341)))))
                                    )) | 0x646e6977) == 0) goto code_r0x000140bbf87c;
    pcStack_80 = (char *)0x5f6e7265746e616c;
    goto code_r0x000140bbf830;
  case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
    if ((byte)(bVar21 + *(char *)((longlong)param_1 + 0xf)) != '\0') {
      piStack_68 = (int *)CONCAT62((int6)((ulonglong)piStack_68 >> 0x10),
                                   CONCAT11((char)((ulonglong)piStack_68 >> 8) +
                                            *(char *)((longlong)param_1 + 0xf),cVar9));
    }
    if ((ushort)((ushort)(SUB161(auStack_60 >> 7,0) & 1) |
                 (ushort)(SUB161(auStack_60 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auStack_60 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auStack_60 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auStack_60 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auStack_60 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auStack_60 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auStack_60 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auStack_60 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auStack_60 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auStack_60 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auStack_60 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(uVar17 >> 7) & 1) << 0xc |
                 (ushort)((byte)(uVar17 >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(uVar17 >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auStack_60[0xf] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)piStack_68 + 1) = '\x05';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    auVar35[0] = -(UNK_14306333f == UNK_143062210);
    auVar35[1] = -(UNK_143063340 == UNK_143062211);
    auVar35[2] = -(UNK_143063341 == UNK_143062212);
    auVar35[3] = -(UNK_143063342 == UNK_143062213);
    auVar35[4] = -(UNK_143063343 == UNK_143062214);
    auVar35[5] = -(UNK_143063344 == UNK_143062215);
    auVar35[6] = -(UNK_143063345 == UNK_143062216);
    auVar35[7] = -(UNK_143063346 == UNK_143062217);
    auVar35[8] = -(UNK_143063347 == UNK_143062218);
    auVar35[9] = -(UNK_143063348 == UNK_143062219);
    auVar35[10] = -(UNK_143063349 == UNK_14306221a);
    auVar35[0xb] = -(UNK_14306334a == UNK_14306221b);
    auVar35[0xc] = -(UNK_14306334b == UNK_14306221c);
    auVar35[0xd] = -(UNK_14306334c == UNK_14306221d);
    auVar35[0xe] = -(UNK_14306334d == UNK_14306221e);
    auVar35[0xf] = -(UNK_14306334e == UNK_14306221f);
    auVar33[0] = -(UNK_14306333c == UNK_143062220);
    auVar33[1] = -(UNK_14306333d == UNK_143062221);
    auVar33[2] = -(UNK_14306333e == UNK_143062222);
    auVar33[3] = -(UNK_14306333f == UNK_143062223);
    auVar33[4] = -(UNK_143063340 == UNK_143062224);
    auVar33[5] = -(UNK_143063341 == UNK_143062225);
    auVar33[6] = -(UNK_143063342 == UNK_143062226);
    auVar33[7] = -(UNK_143063343 == UNK_143062227);
    auVar33[8] = -(UNK_143063344 == UNK_143062228);
    auVar33[9] = -(UNK_143063345 == UNK_143062229);
    auVar33[10] = -(UNK_143063346 == UNK_14306222a);
    auVar33[0xb] = -(UNK_143063347 == UNK_14306222b);
    auVar33[0xc] = -(UNK_143063348 == UNK_14306222c);
    auVar33[0xd] = -(UNK_143063349 == UNK_14306222d);
    auVar33[0xe] = -(UNK_14306334a == UNK_14306222e);
    auVar33[0xf] = -(UNK_14306334b == UNK_14306222f);
    auStack_60 = auVar33 & auVar35;
code_r0x000140bbf5ad:
    if ((ushort)((ushort)(SUB161(auStack_60 >> 7,0) & 1) |
                 (ushort)(SUB161(auStack_60 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auStack_60 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auStack_60 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auStack_60 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auStack_60 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auStack_60 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auStack_60 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auStack_60 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auStack_60 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auStack_60 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auStack_60 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auStack_60 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auStack_60 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auStack_60 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auStack_60[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000140bbf5bd:
      *(char *)((longlong)piStack_68 + 1) = '\x06';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    break;
  case 0x21:
    piStack_68 = (int *)(ulonglong)(iVar26 + 0x24a2b9d);
    auVar36[0] = -(in_XMM1_Ba == UNK_14304c950);
    auVar36[1] = -(in_XMM1_Bb == UNK_14304c951);
    auVar36[2] = -(in_XMM1_Bc == UNK_14304c952);
    auVar36[3] = -(in_XMM1_Bd == UNK_14304c953);
    auVar36[4] = -(in_XMM1_Be == UNK_14304c954);
    auVar36[5] = -(in_XMM1_Bf == UNK_14304c955);
    auVar36[6] = -(in_XMM1_Bg == UNK_14304c956);
    auVar36[7] = -(in_XMM1_Bh == UNK_14304c957);
    auVar36[8] = -(in_XMM1_Bi == UNK_14304c958);
    auVar36[9] = -(in_XMM1_Bj == UNK_14304c959);
    auVar36[10] = -(in_XMM1_Bk == UNK_14304c95a);
    auVar36[0xb] = -(in_XMM1_Bl == UNK_14304c95b);
    auVar36[0xc] = -(in_XMM1_Bm == UNK_14304c95c);
    auVar36[0xd] = -(in_XMM1_Bn == UNK_14304c95d);
    auVar36[0xe] = -(in_XMM1_Bo == UNK_14304c95e);
    auVar36[0xf] = -(in_XMM1_Bp == UNK_14304c95f);
    auVar36 = auVar36 & auStack_60;
    if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x000140bbf63f;
    break;
  case 0x23:
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    goto code_r0x000140bbf5bd;
  case 0x24:
    pcVar7 = (code *)swi(3);
    piVar10 = (int *)(*pcVar7)();
    return piVar10;
  case 0x25:
    out((char)*param_1,0x333c);
code_r0x000140bbf830:
    if (CONCAT17(UNK_143063348,
                 CONCAT16(UNK_143063347,
                          CONCAT15(UNK_143063346,
                                   CONCAT14(UNK_143063345,
                                            CONCAT13(UNK_143063344,
                                                     CONCAT12(UNK_143063343,
                                                              CONCAT11(UNK_143063342,UNK_143063341))
                                                    ))))) == 0x746867696c5f6e72 &&
        pcStack_80 ==
        (char *)CONCAT17(UNK_143063343,
                         CONCAT16(UNK_143063342,
                                  CONCAT15(UNK_143063341,
                                           CONCAT14(UNK_143063340,
                                                    CONCAT13(UNK_14306333f,
                                                             CONCAT12(UNK_14306333e,
                                                                      CONCAT11(UNK_14306333d,
                                                                               UNK_14306333c))))))))
    {
      *(char *)((longlong)piStack_68 + 1) = '\v';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    break;
  case 0x26:
    if (UNK_143063344 == 'd' && pcStack_80 == *(char **)(&UNK_14306333c + unaff_GS_OFFSET)) {
      *(char *)((longlong)piStack_68 + 1) = '\x04';
      *(char *)piStack_68 = '\0';
      return piStack_68;
    }
    *(char *)((longlong)piStack_68 + 1) = '\x06';
    *(char *)piStack_68 = '\0';
    return piStack_68;
  case 0x27:
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    return piStack_68;
  case 0x28:
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    return piStack_68;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2f:
    goto code_r0x000140bc0046;
  case 0x2c:
    puVar1 = (uint *)((longlong)piStack_68 + -0x73);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Could not emulate address calculation at 0x000140f679a7 */
                    /* WARNING: Treating indirect jump as call */
    piVar10 = (int *)(**(code **)(*(longlong *)(&UNK_143063344 + uVar14) + 0x18))
                               (*(undefined8 *)pcStack_80,&UNK_14306333c,0xf,
                                *(code **)(*(longlong *)(&UNK_143063344 + uVar14) + 0x18));
    return piVar10;
  case 0x2d:
    pcVar7 = (code *)swi(3);
    piVar10 = (int *)(*pcVar7)();
    return piVar10;
  case 0x2e:
    piStack_68 = (int *)CONCAT71(uVar11,cVar9 + -0x7f);
    goto code_r0x000140bc0046;
  case 0x30:
    if (*pcStack_80 == '\x01') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143398d60,0x28,&UNK_143398d88);
    }
    plVar4 = *(longlong **)(&UNK_143063344 + uVar14);
    if ((&UNK_14306333d)[uVar14] != '\x01') {
      plVar5 = (longlong *)*plVar4;
      lVar29 = plVar5[2];
      if (*plVar5 == lVar29) {
        uStack_110 = 1;
        pdb_142d7f1b0(plVar5,lVar29,1,1);
        lVar29 = plVar5[2];
      }
      *(undefined1 *)(plVar5[1] + lVar29) = 0x2c;
      plVar5[2] = lVar29 + 1;
    }
    (&UNK_14306333d)[uVar14] = 2;
    pdb_14054e5c0(plVar4,&UNK_14306333c,&UNK_14306333c,4);
    uVar17 = *param_4;
    plVar5 = (longlong *)*plVar4;
    lVar29 = plVar5[2];
    if (*plVar5 == lVar29) {
      uStack_110 = 1;
      pdb_142d7f1b0(plVar5,lVar29,1,1);
      lVar29 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar29) = 0x3a;
    plVar5[2] = lVar29 + 1;
    lVar29 = 10;
    if (uVar17 < 10000) {
      uVar14 = (ulonglong)uVar17;
    }
    else {
      do {
        uVar13 = uVar17;
        uVar14 = (ulonglong)uVar13 / 10000;
        *(undefined2 *)((longlong)&uStack_108 + lVar29 + 4) =
             *(undefined2 *)(&UNK_143398c98 + (ulonglong)((uVar13 % 10000) / 100) * 2);
        *(undefined2 *)((longlong)&uStack_108 + lVar29 + 6) =
             *(undefined2 *)(&UNK_143398c98 + (ulonglong)((uVar13 % 10000) % 100) * 2);
        lVar29 = lVar29 + -4;
        uVar17 = uVar13 / 10000;
      } while (99999999 < uVar13);
      uVar17 = uVar13 / 10000;
    }
    uVar19 = uVar14;
    if (99 < uVar17) {
      uVar17 = (uint)((uVar14 & 0xffff) >> 2) / 0x19;
      uVar19 = (ulonglong)uVar17;
      *(undefined2 *)((longlong)&uStack_108 + lVar29 + 6) =
           *(undefined2 *)(&UNK_143398c98 + (ulonglong)((int)uVar14 + uVar17 * -100 & 0xffff) * 2);
      lVar29 = lVar29 + -2;
    }
    plVar4 = (longlong *)*plVar4;
    if ((uint)uVar19 < 10) {
      *(byte *)((longlong)&uStack_108 + lVar29 + 7) = (byte)uVar19 | 0x30;
      lVar29 = lVar29 + -1;
    }
    else {
      *(undefined2 *)((longlong)&uStack_108 + lVar29 + 6) =
           *(undefined2 *)(&UNK_143398c98 + uVar19 * 2);
      lVar29 = lVar29 + -2;
    }
    uVar14 = 10 - lVar29;
    lVar28 = plVar4[2];
    if ((ulonglong)(*plVar4 - lVar28) < uVar14) {
      uStack_110 = 1;
      pdb_142d7f1b0(plVar4,lVar28,uVar14,1);
      lVar28 = plVar4[2];
    }
    else if (lVar29 == 10) goto code_r0x000141b82484;
    pub_142e32760(plVar4[1] + lVar28,(longlong)&uStack_100 + lVar29,uVar14);
code_r0x000141b82484:
    plVar4[2] = lVar28 + uVar14;
    return (int *)0x0;
  case 0x31:
    if (-1 < (int)((uint)unaff_RDI & (uint)param_1)) {
      lVar29 = 0;
      if (1 < (ulonglong)(byte)(&UNK_14306335e)[uVar14]) {
        lVar29 = (ulonglong)(byte)(&UNK_14306335e)[uVar14] - 1;
      }
                    /* WARNING: Could not emulate address calculation at 0x000140bc0c4a */
                    /* WARNING: Treating indirect jump as call */
      piVar10 = (int *)(*(code *)(&UNK_1430633fc + *(int *)(&UNK_1430633fc + lVar29 * 4)))
                                 (&UNK_14306333c,&UNK_1430633fc,
                                  &UNK_1430633fc + *(int *)(&UNK_1430633fc + lVar29 * 4));
      return piVar10;
    }
    pcVar15 = (char *)CONCAT71(uVar16,bVar12 + (&UNK_1430632c5)[uVar14]);
    puVar1 = (uint *)((longlong)piStack_68 + -0x73);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    if (*pcVar15 != '\x01') {
      plVar4 = *(longlong **)(pcVar15 + 8);
      if (pcVar15[1] != '\x01') {
        plVar5 = (longlong *)*plVar4;
        lVar29 = plVar5[2];
        if (*plVar5 == lVar29) {
          uStack_e0 = 1;
          uStack_108 = (longlong *)&UNK_141b7eaa0;
          pdb_142d7f1b0(plVar5,lVar29,1,1);
          lVar29 = plVar5[2];
        }
        *(undefined1 *)(plVar5[1] + lVar29) = 0x2c;
        plVar5[2] = lVar29 + 1;
      }
      pcVar15[1] = '\x02';
      uStack_108 = (longlong *)&UNK_141b7e9e8;
      pdb_14054e5c0(plVar4,&UNK_14306333c,&UNK_14306333c,0xe);
      plVar5 = (longlong *)*plVar4;
      lVar29 = plVar5[2];
      if (*plVar5 == lVar29) {
        uStack_e0 = 1;
        uStack_108 = (longlong *)&UNK_141b7ea71;
        pdb_142d7f1b0(plVar5,lVar29,1,1);
        lVar29 = plVar5[2];
      }
      *(undefined1 *)(plVar5[1] + lVar29) = 0x3a;
      plVar5[2] = lVar29 + 1;
      if ((byte)*param_4 == 1) {
        puVar18 = &UNK_14335c7cc;
        uVar25 = 5;
      }
      else {
        puVar18 = &UNK_14335c7c9;
        uVar25 = 3;
      }
      uStack_108 = (longlong *)&UNK_141b7ea2c;
      pdb_14054e5c0(plVar4,lVar29 + 1,puVar18,uVar25);
      return (int *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    uStack_108 = (longlong *)&UNK_141b7ea54;
    pdb_142dc83b0(&UNK_143398d60,0x28,&UNK_143398d88);
  case 0x32:
    pcVar15 = (char *)CONCAT71(uVar16,bVar12 + (&UNK_1430632c5)[uVar14]);
    puVar1 = (uint *)((longlong)piStack_68 + -0x73);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    if (*pcVar15 == '\x01') {
                    /* WARNING: Subroutine does not return */
      uStack_108 = (longlong *)&UNK_141b85c01;
      pdb_142dc83b0(&UNK_143398d60,0x28,&UNK_143398d88);
    }
    plVar4 = *(longlong **)(pcVar15 + 8);
    if (pcVar15[1] != '\x01') {
      plVar5 = (longlong *)*plVar4;
      lVar29 = plVar5[2];
      if (*plVar5 == lVar29) {
        uStack_e0 = 1;
        uStack_108 = (longlong *)&UNK_141b85c4d;
        pdb_142d7f1b0(plVar5,lVar29,1,1);
        lVar29 = plVar5[2];
      }
      *(undefined1 *)(plVar5[1] + lVar29) = 0x2c;
      plVar5[2] = lVar29 + 1;
    }
    pcVar15[1] = '\x02';
    uStack_108 = (longlong *)&UNK_141b85b48;
    pdb_14054e5c0(plVar4,&UNK_14306333c,&UNK_14306333c,0x13);
    plVar5 = (longlong *)*plVar4;
    lVar29 = plVar5[2];
    if (*plVar5 == lVar29) {
      uStack_e0 = 1;
      uStack_108 = (longlong *)&UNK_141b85c1e;
      pdb_142d7f1b0(plVar5,lVar29,1,1);
      lVar29 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar29) = 0x3a;
    plVar20 = (longlong *)(lVar29 + 1);
    plVar5[2] = (longlong)plVar20;
    plVar8 = _UNK_143398de8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)*param_4) {
    case 0:
      puVar18 = &UNK_143388ed5;
      uVar25 = 5;
      break;
    case 1:
      puVar18 = &UNK_143388eda;
      uVar25 = 0xf;
      break;
    case 2:
      puVar18 = &UNK_143388ee9;
      uVar25 = 0xc;
      break;
    case 3:
      plVar4 = (longlong *)*plVar4;
      lVar29 = plVar4[2];
      if ((ulonglong)(*plVar4 - lVar29) < 4) {
        uStack_e0 = 1;
        uStack_108 = (longlong *)&UNK_141b85c79;
        pdb_142d7f1b0(plVar4,lVar29,4,1);
        lVar29 = plVar4[2];
      }
      *(undefined4 *)(plVar4[1] + lVar29) = 0x6c6c756e;
      plVar4[2] = lVar29 + 4;
      return (int *)0x0;
    case 4:
                    /* WARNING: Could not emulate address calculation at 0x000141b883ea */
                    /* WARNING: Treating indirect jump as call */
      piVar10 = (int *)(*(code *)(&UNK_143398df8 +
                                 *(int *)(&UNK_143398df8 +
                                         (longlong)
                                         (&UNK_143398de8 +
                                         *(int *)(&UNK_143398de8 + (ulonglong)(byte)*param_4 * 4)) *
                                         4)))();
      return piVar10;
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
      uStack_e0 = uStack_e8;
      uStack_e8 = uStack_f0;
      uStack_f0 = plStack_f8;
      plStack_f8 = (longlong *)uStack_100;
      lVar28 = *(longlong *)(lVar29 + 9);
      lVar29 = *(longlong *)(lVar29 + 0x11);
      puVar2 = (ulonglong *)*_UNK_143398de8;
      uVar14 = _UNK_143398de8[1];
      uVar24 = uVar14 + 1;
      uVar19 = 0xffffffffffffffff;
      if (uVar24 != 0) {
        uVar19 = uVar24;
      }
      uStack_108 = plVar5;
      if (*puVar2 < uVar19) {
        uVar27 = puVar2[2];
        if (uVar19 - uVar27 <= *puVar2 - uVar27) goto code_r0x000141b78d11;
        uStack_110 = 1;
        pdb_142d7f1b0(puVar2,uVar27,uVar19 - uVar27,1);
        uVar19 = puVar2[2];
        if (uVar19 < uVar14) goto code_r0x000141b78eb9;
code_r0x000141b78d21:
        *(undefined1 *)(puVar2[1] + uVar14) = 0x5b;
        if (uVar24 <= puVar2[2]) goto code_r0x000141b78d34;
code_r0x000141b78edb:
        puVar2[2] = uVar24;
        plVar8[1] = uVar24;
      }
      else {
code_r0x000141b78d11:
        uVar19 = puVar2[2];
        if (uVar14 <= uVar19) goto code_r0x000141b78d21;
code_r0x000141b78eb9:
        pub_142e32780(uVar19 + puVar2[1],0);
        puVar2[2] = uVar14;
        *(undefined1 *)(puVar2[1] + uVar14) = 0x5b;
        if (puVar2[2] < uVar24) goto code_r0x000141b78edb;
code_r0x000141b78d34:
        plVar8[1] = uVar24;
      }
      if (lVar29 != 0) {
        piVar10 = (int *)pdb_141b883c0(lVar28,&UNK_143398de8);
        if (piVar10 != (int *)0x0) {
          return piVar10;
        }
        lVar29 = lVar29 << 5;
        do {
          plVar4 = _UNK_143398de8;
          lVar29 = lVar29 + -0x20;
          lVar28 = lVar28 + 0x20;
          if (lVar29 == 0) {
            puVar2 = (ulonglong *)*_UNK_143398de8;
            uVar14 = _UNK_143398de8[1];
            uVar24 = uVar14 + 1;
            uVar19 = 0xffffffffffffffff;
            if (uVar24 != 0) {
              uVar19 = uVar24;
            }
            if (*puVar2 < uVar19) {
              uVar27 = puVar2[2];
              if (*puVar2 - uVar27 < uVar19 - uVar27) {
                uStack_110 = 1;
                pdb_142d7f1b0(puVar2,uVar27,uVar19 - uVar27,1);
                uVar19 = puVar2[2];
                goto joined_r0x000141b78e65;
              }
            }
            uVar19 = puVar2[2];
joined_r0x000141b78e65:
            if (uVar19 < uVar14) {
              pub_142e32780(uVar19 + puVar2[1],0);
              puVar2[2] = uVar14;
            }
            *(undefined1 *)(puVar2[1] + uVar14) = 0x5d;
            if (puVar2[2] < uVar24) {
              puVar2[2] = uVar24;
            }
            plVar4[1] = uVar24;
            return (int *)0x0;
          }
          puVar2 = (ulonglong *)*_UNK_143398de8;
          uVar14 = _UNK_143398de8[1];
          uVar24 = uVar14 + 1;
          uVar19 = uVar24;
          if (uVar24 == 0) {
            uVar19 = 0xffffffffffffffff;
          }
          if (*puVar2 < uVar19) {
            uVar27 = puVar2[2];
            if (uVar19 - uVar27 <= *puVar2 - uVar27) goto code_r0x000141b78dca;
            uStack_110 = 1;
            pdb_142d7f1b0(puVar2,uVar27,uVar19 - uVar27,1);
            uVar19 = puVar2[2];
          }
          else {
code_r0x000141b78dca:
            uVar19 = puVar2[2];
          }
          if (uVar19 < uVar14) {
            pub_142e32780(uVar19 + puVar2[1],0);
            puVar2[2] = uVar14;
          }
          *(undefined1 *)(puVar2[1] + uVar14) = 0x2c;
          if (puVar2[2] < uVar24) {
            puVar2[2] = uVar24;
          }
          plVar4[1] = uVar24;
          piVar10 = (int *)pdb_141b883c0(lVar28);
          if (piVar10 != (int *)0x0) {
            return piVar10;
          }
        } while( true );
      }
      puVar2 = (ulonglong *)*plVar8;
      uVar19 = 0xffffffffffffffff;
      if (uVar14 + 2 != 0) {
        uVar19 = uVar14 + 2;
      }
      if (*puVar2 < uVar19) {
        uVar27 = puVar2[2];
        if (*puVar2 - uVar27 < uVar19 - uVar27) {
          uStack_110 = 1;
          pdb_142d7f1b0(puVar2,uVar27,uVar19 - uVar27,1);
          uVar19 = puVar2[2];
          goto joined_r0x000141b78f21;
        }
      }
      uVar19 = puVar2[2];
joined_r0x000141b78f21:
      if (uVar19 < uVar24) {
        pub_142e32780(uVar19 + puVar2[1],0);
        puVar2[2] = uVar24;
      }
      *(undefined1 *)(puVar2[1] + 1 + uVar14) = 0x5d;
      uVar14 = uVar14 + 2;
      if (puVar2[2] < uVar14) {
        puVar2[2] = uVar14;
      }
      plVar8[1] = uVar14;
      return (int *)0x0;
    case 7:
      uStack_e0 = uStack_f0;
      uStack_e8 = plStack_f8;
      uStack_f0 = uStack_100;
      plStack_f8 = plVar5;
      if (_UNK_143398de8 == (longlong *)0x0) {
        lVar29 = 0x14;
        uVar19 = _UNK_143398df0;
        uVar14 = _UNK_143398df0;
        if (9999 < _UNK_143398df0) {
          do {
            uVar14 = uVar19 / 10000;
            iVar26 = (int)uVar19 + (int)uVar14 * -10000;
            uVar17 = (uint)(iVar26 * 0x147b) >> 0x13;
            *(undefined2 *)((longlong)&uStack_124 + lVar29) =
                 *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)uVar17 * 2);
            *(undefined2 *)(&stack0xfffffffffffffede + lVar29) =
                 *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)(iVar26 + uVar17 * -100 & 0xffff) * 2);
            lVar29 = lVar29 + -4;
            bVar30 = 99999999 < uVar19;
            uVar19 = uVar14;
          } while (bVar30);
        }
        if (99 < uVar14) {
          iVar26 = (int)uVar14;
          uVar17 = ((uint)(uVar14 >> 2) & 0xffff) * 0x147b >> 0x11;
          uVar14 = (ulonglong)uVar17;
          *(undefined2 *)(&stack0xfffffffffffffede + lVar29) =
               *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)(iVar26 + uVar17 * -100 & 0xffff) * 2);
          lVar29 = lVar29 + -2;
        }
        if (uVar14 < 10) {
          abStack_121[lVar29] = (byte)uVar14 | 0x30;
          lVar28 = lVar29 + -1;
          lVar29 = lVar29 + -0x15;
        }
        else {
          *(undefined2 *)(&stack0xfffffffffffffede + lVar29) =
               *(undefined2 *)(&UNK_14335cbe8 + uVar14 * 2);
          lVar28 = lVar29 + -2;
          lVar29 = lVar29 + -0x16;
        }
joined_r0x00014198f4a9:
        if (lVar29 != 0) {
          uVar24 = -lVar29;
          plVar20 = (longlong *)*plVar20;
          puVar2 = (ulonglong *)*plVar20;
          uVar14 = plVar20[1];
          uVar27 = uVar14 + uVar24;
          uVar19 = 0xffffffffffffffff;
          if (!CARRY8(uVar14,uVar24)) {
            uVar19 = uVar27;
          }
          if (*puVar2 < uVar19) {
            uVar3 = puVar2[2];
            if (*puVar2 - uVar3 < uVar19 - uVar3) {
              pdb_142d7f1b0(puVar2,uVar3,uVar19 - uVar3,1,1);
            }
          }
          if (puVar2[2] < uVar14) {
            pub_142e32780(puVar2[2] + puVar2[1],0);
            puVar2[2] = uVar14;
          }
          pub_142e32760(uVar14 + puVar2[1],abStack_121 + lVar28 + 1,uVar24);
          if (puVar2[2] < uVar27) {
            puVar2[2] = uVar27;
          }
          plVar20[1] = uVar27;
        }
        return (int *)0x0;
      }
      if ((int)_UNK_143398de8 == 1) {
        uVar14 = -_UNK_143398df0;
        if ((longlong)-_UNK_143398df0 < 0) {
          uVar14 = _UNK_143398df0;
        }
        lVar28 = 0x14;
        uVar19 = uVar14;
        if (9999 < uVar14) {
          do {
            uVar19 = uVar14 / 10000;
            iVar26 = (int)uVar14 + (int)uVar19 * -10000;
            uVar17 = (uint)(iVar26 * 0x147b) >> 0x13;
            *(undefined2 *)((longlong)&uStack_124 + lVar28) =
                 *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)uVar17 * 2);
            *(undefined2 *)(&stack0xfffffffffffffede + lVar28) =
                 *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)(iVar26 + uVar17 * -100 & 0xffff) * 2);
            lVar28 = lVar28 + -4;
            bVar30 = 99999999 < uVar14;
            uVar14 = uVar19;
          } while (bVar30);
        }
        if (99 < uVar19) {
          iVar26 = (int)uVar19;
          uVar17 = ((uint)(uVar19 >> 2) & 0xffff) * 0x147b >> 0x11;
          uVar19 = (ulonglong)uVar17;
          *(undefined2 *)(&stack0xfffffffffffffede + lVar28) =
               *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)(iVar26 + uVar17 * -100 & 0xffff) * 2);
          lVar28 = lVar28 + -2;
        }
        if (uVar19 < 10) {
          abStack_121[lVar28] = (byte)uVar19 | 0x30;
          lVar28 = lVar28 + -1;
        }
        else {
          *(undefined2 *)(&stack0xfffffffffffffede + lVar28) =
               *(undefined2 *)(&UNK_14335cbe8 + uVar19 * 2);
          lVar28 = lVar28 + -2;
        }
        if ((longlong)_UNK_143398df0 < 0) {
          abStack_121[lVar28] = 0x2d;
          lVar28 = lVar28 + -1;
        }
        lVar29 = lVar28 + -0x14;
        goto joined_r0x00014198f4a9;
      }
      uVar14 = _UNK_143398df0;
      if (0x7fefffffffffffff < (_UNK_143398df0 & 0x7fffffffffffffff)) {
        uVar14 = 0;
      }
      lVar29 = pdb_140de4130(uVar14,abStack_121 + 1);
      uVar14 = lVar29 - (longlong)(abStack_121 + 1);
      if (uVar14 == 0) {
        return (int *)0x0;
      }
      plVar20 = (longlong *)*plVar20;
      puVar2 = (ulonglong *)*plVar20;
      uVar19 = plVar20[1];
      uVar27 = uVar19 + uVar14;
      uVar24 = 0xffffffffffffffff;
      if (!CARRY8(uVar19,uVar14)) {
        uVar24 = uVar27;
      }
      if (*puVar2 < uVar24) {
        uVar3 = puVar2[2];
        if (*puVar2 - uVar3 < uVar24 - uVar3) {
          pdb_142d7f1b0(puVar2,uVar3,uVar24 - uVar3,1,1);
          uVar24 = puVar2[2];
          goto joined_r0x00014198f3ff;
        }
      }
      uVar24 = puVar2[2];
joined_r0x00014198f3ff:
      if (uVar24 < uVar19) {
        pub_142e32780(uVar24 + puVar2[1],0);
        puVar2[2] = uVar19;
      }
      pub_142e32760(uVar19 + puVar2[1],abStack_121 + 1,uVar14);
      if (puVar2[2] < uVar27) {
        puVar2[2] = uVar27;
      }
      plVar20[1] = uVar27;
      return (int *)0x0;
    case 8:
      *(char *)((longlong)plVar4 + 4) =
           *(char *)((longlong)plVar4 + 4) + (char)((ulonglong)plVar20 >> 8) +
           (0xfffffffebcc67217U <
           (ulonglong)(longlong)*(int *)(&UNK_143398de8 + (ulonglong)(byte)*param_4 * 4));
      plVar4[2] = (longlong)plVar5;
      *(longlong **)(param_4 + 2) = plVar5;
      return (int *)0x0;
    case 9:
      return (int *)(&UNK_143398de8 + *(int *)(&UNK_143398de8 + (ulonglong)(byte)*param_4 * 4));
    }
    uStack_108 = (longlong *)&UNK_141b85bd9;
    pdb_14054e5c0(plVar4,plVar20,puVar18,uVar25);
    return (int *)0x0;
  case 0x33:
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
    pcVar7 = (code *)swi(3);
    piVar10 = (int *)(*pcVar7)(CONCAT71(uVar16,bVar12 + (char)((ulonglong)pcStack_80 >> 8)));
    return piVar10;
  case 0x34:
    *(byte *)((longlong)piStack_68 + -0x73) = *(byte *)((longlong)piStack_68 + -0x73) ^ bVar12;
    uStack_88 = (ulonglong)(iVar26 + 0x24a2506);
    puVar18 = &UNK_1430631d8;
  case 0x38:
    piVar10 = (int *)pdb_140f66090(pcStack_80,puVar18,5);
    return piVar10;
  case 0x35:
    *(byte *)((longlong)piStack_68 + -0x73) = *(byte *)((longlong)piStack_68 + -0x73) ^ bVar12;
    uStack_88 = 1;
    piVar10 = (int *)pdb_140f66e50((ulonglong)piStack_68 & 0xffffffffffffff40,&UNK_143063200,0xd,
                                   &UNK_14306320d);
    return piVar10;
  case 0x36:
    pcStack_80 = (char *)CONCAT71(uVar16,bVar12 + *(char *)(((ulonglong)piStack_68 &
                                                            0xffffffffffffff4a) - 0x77));
    puVar18 = &UNK_143063190;
    goto code_r0x000140bc0cf7;
  case 0x37:
    *(char *)piStack_68 = (char)*piStack_68 + cVar9;
code_r0x000140bc0cf7:
    piVar10 = (int *)pdb_140f66090(pcStack_80,puVar18);
    return piVar10;
  case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
    return piStack_68;
  case 0x3b:
    pcVar7 = (code *)swi(3);
    piVar10 = (int *)(*pcVar7)();
    return piVar10;
  case 0x3c:
    *(char *)((longlong)unaff_RBP + -0x4a3fc903) = '\0';
    if (*(char *)((longlong)unaff_RBP + -0x4a3fc903) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out((char)*param_1,0x333c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((longlong)piStack_68 + 1) = '\x15';
  *(char *)piStack_68 = '\0';
  return piStack_68;
code_r0x000140bc0046:
                    /* WARNING: Could not recover jumptable at 0x000140bc0054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar10 = (int *)(*(code *)(&UNK_1430633e0 + *(int *)(&UNK_1430633e0 + (longlong)piStack_68 * 4)))
                             ();
  return piVar10;
}

