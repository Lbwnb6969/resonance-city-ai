// VA 0x140379c30, PDB extent 740 bytes
// country_core::meta_commander::_::impl$0::deserialize::impl$2::visit_enum<ron::de::Enum>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014037a1af) overlaps instruction at (ram,0x00014037a1a8)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::meta_commander::_::impl$0::deserialize::impl$2::visit_enum<ron::de::Enum>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 740 */

char * pdb_140379c30(char *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  byte unaff_BL;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RBP;
  uint *unaff_RDI;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_83e8 [33608];
  undefined1 *puStack_a0;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar11 = auStack_78;
  auVar13._0_8_ = pdb_1402c14b0(&uStack_50);
  auVar13._8_8_ = extraout_XMM0_Qb;
  if ((char)uStack_50 != '2') {
    *(undefined4 *)(param_1 + 4) = uStack_4c;
    *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_4c,uStack_50._1_3_);
    *(undefined4 *)(param_1 + 0xc) = uStack_44;
    *(uint *)(param_1 + 9) = CONCAT13((undefined1)uStack_44,uStack_48._1_3_);
    *(undefined8 *)(param_1 + 0x28) = uStack_28;
    *(undefined8 *)(param_1 + 0x30) = uStack_20;
    *(undefined8 *)(param_1 + 0x38) = uStack_18;
    *(undefined8 *)(param_1 + 0x40) = uStack_10;
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *(undefined8 *)(param_1 + 0x20) = uStack_30;
    *param_1 = (char)uStack_50;
    param_1[8] = (byte)uStack_48;
    *(longlong **)(param_1 + 0x10) = plStack_40;
    return param_1;
  }
  pcVar8 = &UNK_142f466d8;
  uVar5 = (ulonglong)*(int *)(&UNK_142f466d8 + (ulonglong)(byte)uStack_48 * 4);
  pcVar6 = &UNK_142f466d8 + uVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)uStack_48) {
  case 0:
    pdb_1402c2d80(param_1,plStack_40,&UNK_142f460b0,2);
    return param_1;
  case 1:
    uVar7 = 0x8000000000000001;
    break;
  case 2:
    uVar7 = 0x8000000000000002;
    break;
  case 3:
    pdb_1402c8250(&uStack_50);
    if ((char)uStack_50 != '2') {
code_r0x000140379e47:
      *(undefined8 *)(param_1 + 0x40) = uStack_10;
      *(undefined8 *)(param_1 + 0x30) = uStack_20;
      *(undefined8 *)(param_1 + 0x38) = uStack_18;
      *(undefined8 *)(param_1 + 0x20) = uStack_30;
      *(undefined8 *)(param_1 + 0x28) = uStack_28;
      *(longlong **)(param_1 + 0x10) = plStack_40;
      *(undefined8 *)(param_1 + 0x18) = uStack_38;
      *(ulonglong *)param_1 = CONCAT44(uStack_4c,uStack_50);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_44,uStack_48);
      return param_1;
    }
    uVar7 = CONCAT44(uStack_44,uStack_48);
    uVar9 = 0x8000000000000003;
    goto code_r0x000140379e3a;
  case 4:
    uVar7 = 0x8000000000000004;
    break;
  case 5:
    pdb_1402c8250(&uStack_50);
    if ((char)uStack_50 != '2') goto code_r0x000140379e47;
    uVar7 = CONCAT44(uStack_44,uStack_48);
    uVar9 = 0x8000000000000005;
code_r0x000140379e3a:
    *(undefined8 *)(param_1 + 8) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    goto code_r0x000140379f08;
  case 6:
    pdb_1402c78f0(param_1,plStack_40,&UNK_142f460e0,1);
    return param_1;
  case 7:
    uVar7 = 0x8000000000000007;
    break;
  case 8:
    uVar7 = 0x8000000000000008;
    break;
  case 9:
    pdb_1402c3b40(param_1,plStack_40,&UNK_142f46108,2);
    return param_1;
  case 10:
    pdb_1402c64e0(param_1,plStack_40,&UNK_142f46130,1);
    return param_1;
  case 0xb:
    uVar7 = 0x800000000000000b;
    break;
  case 0xc:
    uVar7 = 0x800000000000000c;
    break;
  case 0xd:
    pdb_1402c6ec0(param_1,plStack_40,&UNK_142f46140,1);
    return param_1;
  case 0xe:
    pdb_1402c1b10(param_1,plStack_40,&UNK_142f46158,2);
    return param_1;
  case 0xf:
    pdb_1402c5000(param_1,plStack_40,&UNK_142f46130,1);
    return param_1;
  case 0x10:
    pdb_1402c4620(param_1,plStack_40,&UNK_142f46130,1);
    return param_1;
  case 0x11:
    uVar7 = 0x8000000000000011;
    break;
  case 0x12:
    uVar7 = 0x8000000000000012;
    break;
  case 0x13:
    uVar7 = 0x8000000000000013;
    break;
  case 0x14:
    pdb_1402c59e0(param_1,plStack_40,&UNK_142f46180,1);
    return param_1;
  case 0x15:
    (&UNK_142f4665b)[uVar5] = (&UNK_142f4665b)[uVar5] | 0xc0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    goto code_r0x00014037a29e;
  case 0x17:
    return (char *)0x42f466d8;
  case 0x18:
    if ((int)param_4 == 0 && (int)pcVar6 == 0) {
      _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0xb32);
      return &UNK_142f466d8;
    }
    goto LAB_14037a2f2;
  case 0x19:
    if (*(longlong *)((longlong)plStack_40 + 7) == 0x676e696c69666f72 &&
        pcVar6 == (char *)*plStack_40) {
      _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0xe32);
      return &UNK_142f466d8;
    }
    puVar11 = auStack_78;
    if (*(longlong *)((longlong)plStack_40 + 7) == 0x65735579726f6d65 &&
        *plStack_40 == 0x654d74726f706552) {
      _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x1032);
      return &UNK_142f466d8;
    }
    goto LAB_14037a2f2;
  case 0x1a:
    if ((POPCOUNT((ulonglong)pcVar6 & 0xff) & 1U) == 0) {
      if (param_4 == 0 && pcVar6 == (char *)0x0) {
        _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x32);
        return &UNK_142f466d8;
      }
      if (*(longlong *)((longlong)plStack_40 + 3) == 0x70657473656d6954 &&
          *plStack_40 == 0x73656d6954786946) {
        _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x632);
        return &UNK_142f466d8;
      }
      if (*(longlong *)((longlong)plStack_40 + 3) == 0x74697551646e4165 &&
          *plStack_40 == 0x51646e4165766153) {
        _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x1232);
        return &UNK_142f466d8;
      }
      puVar11 = auStack_78;
      if (*(longlong *)((longlong)plStack_40 + 3) == 0x737365636f725074 &&
          *plStack_40 == 0x636f725074697551) {
        _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x1432);
        return &UNK_142f466d8;
      }
    }
    else {
      puVar11 = auStack_78;
      if ((char *)*plStack_40 == pcVar6) {
        _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0xc32);
        return &UNK_142f466d8;
      }
    }
    goto LAB_14037a2f2;
  case 0x1b:
    puVar11 = auStack_78;
    if (!CARRY1((byte)((ulonglong)pcVar6 >> 8),param_1[0xf])) {
      puVar11 = auStack_78;
    }
    goto code_r0x00014037a1b4;
  case 0x1d:
    UNK_142f466e1 = UNK_142f466e1 + -0x28;
    *unaff_RDI = *unaff_RDI >> 5 | *unaff_RDI << 0x1b;
    uVar4 = _UNK_142f466d8 * -0x389a0000;
    *(int *)plStack_40 = (int)*plStack_40 + (int)param_1;
    pcVar8 = (char *)CONCAT71(0x142f466,*(byte *)((ulonglong)uVar4 - 0x77) | 0xd8);
    puStack_a0 = &stack0xffffffffffffff80;
    puVar10 = (undefined8 *)&stack0xffffffffffffff80;
    cVar2 = '\x03';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    param_1[-0x3d] = param_1[-0x3d] ^ unaff_BL;
    iVar1 = (int)plStack_40[2];
    auVar15[0] = -((char)iVar1 == UNK_142f45a40);
    auVar15[1] = -((char)((uint)iVar1 >> 8) == UNK_142f45a41);
    auVar15[2] = -((char)((uint)iVar1 >> 0x10) == UNK_142f45a42);
    auVar15[3] = -((char)((uint)iVar1 >> 0x18) == UNK_142f45a43);
    auVar15[4] = -(UNK_142f45a44 == '\0');
    auVar15[5] = -(UNK_142f45a45 == '\0');
    auVar15[6] = -(UNK_142f45a46 == '\0');
    auVar15[7] = -(UNK_142f45a47 == '\0');
    auVar15[8] = -(UNK_142f45a48 == '\0');
    auVar15[9] = -(UNK_142f45a49 == '\0');
    auVar15[10] = -(UNK_142f45a4a == '\0');
    auVar15[0xb] = -(UNK_142f45a4b == '\0');
    auVar15[0xc] = -(UNK_142f45a4c == '\0');
    auVar15[0xd] = -(UNK_142f45a4d == '\0');
    auVar15[0xe] = -(UNK_142f45a4e == '\0');
    auVar15[0xf] = -(UNK_142f45a4f == '\0');
    auVar12[0] = -((char)*plStack_40 == UNK_142f45a50);
    auVar12[1] = -(*(char *)((longlong)plStack_40 + 1) == UNK_142f45a51);
    auVar12[2] = -(*(char *)((longlong)plStack_40 + 2) == UNK_142f45a52);
    auVar12[3] = -(*(char *)((longlong)plStack_40 + 3) == UNK_142f45a53);
    auVar12[4] = -(*(char *)((longlong)plStack_40 + 4) == UNK_142f45a54);
    auVar12[5] = -(*(char *)((longlong)plStack_40 + 5) == UNK_142f45a55);
    auVar12[6] = -(*(char *)((longlong)plStack_40 + 6) == UNK_142f45a56);
    auVar12[7] = -(*(char *)((longlong)plStack_40 + 7) == UNK_142f45a57);
    auVar12[8] = -((char)plStack_40[1] == UNK_142f45a58);
    auVar12[9] = -(*(char *)((longlong)plStack_40 + 9) == UNK_142f45a59);
    auVar12[10] = -(*(char *)((longlong)plStack_40 + 10) == UNK_142f45a5a);
    auVar12[0xb] = -(*(char *)((longlong)plStack_40 + 0xb) == UNK_142f45a5b);
    auVar12[0xc] = -(*(char *)((longlong)plStack_40 + 0xc) == UNK_142f45a5c);
    auVar12[0xd] = -(*(char *)((longlong)plStack_40 + 0xd) == UNK_142f45a5d);
    auVar12[0xe] = -(*(char *)((longlong)plStack_40 + 0xe) == UNK_142f45a5e);
    auVar12[0xf] = -(*(char *)((longlong)plStack_40 + 0xf) == UNK_142f45a5f);
    auVar13 = auVar12 & auVar15;
    puVar11 = auStack_83e8;
code_r0x00014037a1b4:
    if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
      pcVar8[0] = '2';
      pcVar8[1] = '\x0f';
      return pcVar8;
    }
    goto LAB_14037a2f2;
  case 0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1f:
    puVar11 = auStack_78;
    if (*(longlong *)((longlong)plStack_40 + 6) == 0x676e696c69666f72 && pcVar6 == (char *)0x0) {
      _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0xd32);
      return &UNK_142f466d8;
    }
    goto LAB_14037a2f2;
  case 0x20:
    if (0xfffffffebd0b9927 < uVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    auVar16[0] = -(in_XMM1_Ba == DAT_142f45aa0);
    auVar16[1] = -(in_XMM1_Bb == UNK_142f45aa1);
    auVar16[2] = -(in_XMM1_Bc == UNK_142f45aa2);
    auVar16[3] = -(in_XMM1_Bd == UNK_142f45aa3);
    auVar16[4] = -(in_XMM1_Be == UNK_142f45aa4);
    auVar16[5] = -(in_XMM1_Bf == UNK_142f45aa5);
    auVar16[6] = -(in_XMM1_Bg == UNK_142f45aa6);
    auVar16[7] = -(in_XMM1_Bh == UNK_142f45aa7);
    auVar16[8] = -(in_XMM1_Bi == UNK_142f45aa8);
    auVar16[9] = -(in_XMM1_Bj == UNK_142f45aa9);
    auVar16[10] = -(in_XMM1_Bk == UNK_142f45aaa);
    auVar16[0xb] = -(in_XMM1_Bl == UNK_142f45aab);
    auVar16[0xc] = -(in_XMM1_Bm == UNK_142f45aac);
    auVar16[0xd] = -(in_XMM1_Bn == UNK_142f45aad);
    auVar16[0xe] = -(in_XMM1_Bo == UNK_142f45aae);
    auVar16[0xf] = -(in_XMM1_Bp == UNK_142f45aaf);
    auVar16 = auVar16 & auVar13;
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
      _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x132);
      return &UNK_142f466d8;
    }
    in_XMM1_Ba = (char)plStack_40[2];
    in_XMM1_Bb = '\0';
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
    auVar13[0] = -((char)*plStack_40 == UNK_142f45ab0);
    auVar13[1] = -(*(char *)((longlong)plStack_40 + 1) == UNK_142f45ab1);
    auVar13[2] = -(*(char *)((longlong)plStack_40 + 2) == UNK_142f45ab2);
    auVar13[3] = -(*(char *)((longlong)plStack_40 + 3) == UNK_142f45ab3);
    auVar13[4] = -(*(char *)((longlong)plStack_40 + 4) == UNK_142f45ab4);
    auVar13[5] = -(*(char *)((longlong)plStack_40 + 5) == UNK_142f45ab5);
    auVar13[6] = -(*(char *)((longlong)plStack_40 + 6) == UNK_142f45ab6);
    auVar13[7] = -(*(char *)((longlong)plStack_40 + 7) == UNK_142f45ab7);
    auVar13[8] = -((char)plStack_40[1] == UNK_142f45ab8);
    auVar13[9] = -(*(char *)((longlong)plStack_40 + 9) == UNK_142f45ab9);
    auVar13[10] = -(*(char *)((longlong)plStack_40 + 10) == UNK_142f45aba);
    auVar13[0xb] = -(*(char *)((longlong)plStack_40 + 0xb) == UNK_142f45abb);
    auVar13[0xc] = -(*(char *)((longlong)plStack_40 + 0xc) == UNK_142f45abc);
    auVar13[0xd] = -(*(char *)((longlong)plStack_40 + 0xd) == UNK_142f45abd);
    auVar13[0xe] = -(*(char *)((longlong)plStack_40 + 0xe) == UNK_142f45abe);
    auVar13[0xf] = -(*(char *)((longlong)plStack_40 + 0xf) == UNK_142f45abf);
    goto code_r0x00014037a29e;
  case 0x21:
    pcVar3 = (code *)swi(3);
    pcVar6 = (char *)(*pcVar3)();
    return pcVar6;
  case 0x23:
    return pcVar6;
  case 0x28:
    if (pcVar6 == (char *)0x0) {
      _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x232);
      return &UNK_142f466d8;
    }
    puVar11 = auStack_78;
    if ((char)plStack_40[1] == 'e' && *plStack_40 == 0x6d69547465736552) {
      _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x432);
      return &UNK_142f466d8;
    }
LAB_14037a2f2:
    *(undefined8 *)(puVar11 + 0x20) = 0x15;
    *(undefined8 *)(puVar11 + -8) = 0x14037a30a;
    pdb_142db7e70();
    return pcVar8;
  }
  *(undefined8 *)(param_1 + 8) = uVar7;
code_r0x000140379f08:
  *param_1 = '2';
  return param_1;
code_r0x00014037a29e:
  auVar17[0] = -(in_XMM1_Ba == UNK_142e47910);
  auVar17[1] = -(in_XMM1_Bb == UNK_142e47911);
  auVar17[2] = -(in_XMM1_Bc == UNK_142e47912);
  auVar17[3] = -(in_XMM1_Bd == UNK_142e47913);
  auVar17[4] = -(in_XMM1_Be == UNK_142e47914);
  auVar17[5] = -(in_XMM1_Bf == UNK_142e47915);
  auVar17[6] = -(in_XMM1_Bg == UNK_142e47916);
  auVar17[7] = -(in_XMM1_Bh == UNK_142e47917);
  auVar17[8] = -(in_XMM1_Bi == UNK_142e47918);
  auVar17[9] = -(in_XMM1_Bj == UNK_142e47919);
  auVar17[10] = -(in_XMM1_Bk == UNK_142e4791a);
  auVar17[0xb] = -(in_XMM1_Bl == UNK_142e4791b);
  auVar17[0xc] = -(in_XMM1_Bm == UNK_142e4791c);
  auVar17[0xd] = -(in_XMM1_Bn == UNK_142e4791d);
  auVar17[0xe] = -(in_XMM1_Bo == UNK_142e4791e);
  auVar17[0xf] = -(in_XMM1_Bp == UNK_142e4791f);
  auVar17 = auVar17 & auVar13;
  if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
    _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x832);
    return &UNK_142f466d8;
  }
  auVar14[0] = -((char)*plStack_40 == UNK_142f45ac0);
  auVar14[1] = -(*(char *)((longlong)plStack_40 + 1) == UNK_142f45ac1);
  auVar14[2] = -(*(char *)((longlong)plStack_40 + 2) == UNK_142f45ac2);
  auVar14[3] = -(*(char *)((longlong)plStack_40 + 3) == UNK_142f45ac3);
  auVar14[4] = -(*(char *)((longlong)plStack_40 + 4) == UNK_142f45ac4);
  auVar14[5] = -(*(char *)((longlong)plStack_40 + 5) == UNK_142f45ac5);
  auVar14[6] = -(*(char *)((longlong)plStack_40 + 6) == UNK_142f45ac6);
  auVar14[7] = -(*(char *)((longlong)plStack_40 + 7) == UNK_142f45ac7);
  auVar14[8] = -((char)plStack_40[1] == UNK_142f45ac8);
  auVar14[9] = -(*(char *)((longlong)plStack_40 + 9) == UNK_142f45ac9);
  auVar14[10] = -(*(char *)((longlong)plStack_40 + 10) == UNK_142f45aca);
  auVar14[0xb] = -(*(char *)((longlong)plStack_40 + 0xb) == UNK_142f45acb);
  auVar14[0xc] = -(*(char *)((longlong)plStack_40 + 0xc) == UNK_142f45acc);
  auVar14[0xd] = -(*(char *)((longlong)plStack_40 + 0xd) == UNK_142f45acd);
  auVar14[0xe] = -(*(char *)((longlong)plStack_40 + 0xe) == UNK_142f45ace);
  auVar14[0xf] = -(*(char *)((longlong)plStack_40 + 0xf) == UNK_142f45acf);
  auVar18[0] = -((char)plStack_40[2] == UNK_142e47910);
  auVar18[1] = -(UNK_142e47911 == '\0');
  auVar18[2] = -(UNK_142e47912 == '\0');
  auVar18[3] = -(UNK_142e47913 == '\0');
  auVar18[4] = -(UNK_142e47914 == '\0');
  auVar18[5] = -(UNK_142e47915 == '\0');
  auVar18[6] = -(UNK_142e47916 == '\0');
  auVar18[7] = -(UNK_142e47917 == '\0');
  auVar18[8] = -(UNK_142e47918 == '\0');
  auVar18[9] = -(UNK_142e47919 == '\0');
  auVar18[10] = -(UNK_142e4791a == '\0');
  auVar18[0xb] = -(UNK_142e4791b == '\0');
  auVar18[0xc] = -(UNK_142e4791c == '\0');
  auVar18[0xd] = -(UNK_142e4791d == '\0');
  auVar18[0xe] = -(UNK_142e4791e == '\0');
  auVar18[0xf] = -(UNK_142e4791f == '\0');
  auVar18 = auVar18 & auVar14;
  puVar11 = auStack_78;
  if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
    _UNK_142f466d8 = CONCAT22(_UNK_142f466da,0x1332);
    return &UNK_142f466d8;
  }
  goto LAB_14037a2f2;
}

