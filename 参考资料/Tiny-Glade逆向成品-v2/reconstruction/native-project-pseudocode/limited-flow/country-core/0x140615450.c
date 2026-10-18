// VA 0x140615450, PDB extent 449 bytes
// country_core::resources::session::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140615ada) overlaps instruction at (ram,0x000140615ad6)
    */
/* WARNING: Removing unreachable block (ram,0x000140615aaf) */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 449 */

code * pdb_140615450(code *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  code cVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  byte bVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined2 uVar14;
  uint *unaff_RBX;
  ulonglong uVar15;
  undefined8 *unaff_RBP;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  ulonglong auStack_a8 [3];
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcVar21;
  undefined *puStack_50;
  code *pcStack_48;
  ulonglong *puStack_40;
  ulonglong uStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  uVar8 = *(ulonglong *)(param_2 + 10);
  if (*(ulonglong *)(param_2 + 8) <= uVar8) {
LAB_1406154a2:
    uStack_38 = 5;
LAB_1406154ab:
    uVar9 = pdb_142d84ef0(param_2,&uStack_38);
    *(undefined8 *)(param_1 + 8) = uVar9;
    *param_1 = (code)0x1;
    return param_1;
  }
  uVar18 = *(ulonglong *)(param_2 + 6);
  uVar17 = 0x100002600;
LAB_14061547c:
  uVar8 = uVar8 + 1;
  bVar10 = *(byte *)((uVar18 - 1) + uVar8);
  uVar19 = (ulonglong)bVar10;
  if (uVar19 < 0x23) {
    if ((0x100002600U >> (uVar19 & 0x3f) & 1) != 0) goto code_r0x00014061548e;
    if (uVar19 != 0x22) goto LAB_1406154f5;
    pcVar21 = (code *)0x1406154d7;
    pdb_14040cf30(&uStack_38);
    puVar11 = (undefined8 *)&UNK_142f885e4;
    uVar8 = (ulonglong)*(int *)(&UNK_142f885e4 + (uStack_38 & 0xff) * 4);
    UNRECOVERED_JUMPTABLE_00 = (code *)(&UNK_142f885e4 + uVar8);
    uVar14 = SUB82(param_2,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uStack_38 & 0xff) {
    case 0:
      param_1[1] = (code)0x0;
      goto code_r0x0001406155da;
    case 1:
      param_1[1] = (code)0x1;
      goto code_r0x0001406155da;
    case 2:
      param_1[1] = (code)0x2;
      goto code_r0x0001406155da;
    case 3:
      *(code **)(param_1 + 8) = pcStack_30;
      *param_1 = (code)0x1;
      return param_1;
    case 4:
    case 5:
    case 6:
      goto code_r0x000140615527;
    case 7:
      uVar17 = 0x1300;
      UNRECOVERED_JUMPTABLE_00 = (code *)((ulonglong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff);
      goto code_r0x00014061553a;
    case 8:
      if (0xb < uVar18) goto LAB_14061596b;
      goto code_r0x0001406158d1;
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
      piVar2 = (int *)((longlong)&UNWIND_INFO_143be8728 + uVar8 + 4);
      *piVar2 = *piVar2 + 0x42f885e4;
      auVar20[0] = -((char)*param_2 == UNK_142f87e00);
      auVar20[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f87e01);
      auVar20[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f87e02);
      auVar20[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f87e03);
      auVar20[4] = -((char)param_2[1] == UNK_142f87e04);
      auVar20[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f87e05);
      auVar20[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f87e06);
      auVar20[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f87e07);
      auVar20[8] = -((char)param_2[2] == UNK_142f87e08);
      auVar20[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f87e09);
      auVar20[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f87e0a);
      auVar20[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f87e0b);
      auVar20[0xc] = -((char)param_2[3] == UNK_142f87e0c);
      auVar20[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f87e0d);
      auVar20[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f87e0e);
      auVar20[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f87e0f);
      if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
        (&UNK_142f885e5)[uVar8] = 3;
        *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
      goto LAB_14061596b;
    case 0xb:
      out(*(undefined4 *)param_1,uVar14);
      if (*(longlong *)((longlong)param_2 + 5) != 0x6e696769726f5f74 ||
          *(undefined **)param_2 != &UNK_142f885e4) goto LAB_14061596b;
      (&UNK_142f885e5)[uVar8] = 4;
      goto code_r0x000140615937;
    case 0x10:
      if (((uint)uVar18 | 0x42f885e4) == 0) goto code_r0x000140615974;
      plVar12 = (longlong *)(ulonglong)(*param_2 ^ 0x67616d69);
      uVar7 = (uint)(byte)param_2[1];
      goto code_r0x000140615902;
    case 0x13:
      cVar6 = (char)UNRECOVERED_JUMPTABLE_00 + -0x78;
      UNRECOVERED_JUMPTABLE_00 =
           (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8),cVar6);
      *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + cVar6);
      return UNRECOVERED_JUMPTABLE_00;
    case 0x14:
      puVar11 = (undefined8 *)&stack0xffffffffffffffa0;
      cVar6 = '\x1e';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *unaff_RBP;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      *(int *)UNRECOVERED_JUMPTABLE_00 = *(int *)UNRECOVERED_JUMPTABLE_00 + 1;
      pcVar3 = (char *)((longlong)param_2 * 2 + -0x4f);
      *pcVar3 = *pcVar3 + (char)((ulonglong)param_2 >> 8);
      uVar7 = (int)UNRECOVERED_JUMPTABLE_00 + 0xc6014888;
      UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)uVar7;
      *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + (char)uVar7);
      return UNRECOVERED_JUMPTABLE_00;
    default:
      return UNRECOVERED_JUMPTABLE_00;
    case 0x16:
      (&UNK_142f885e5)[uVar8] = 0xe4;
      *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      return UNRECOVERED_JUMPTABLE_00;
    case 0x19:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_00 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    case 0x1a:
      if (param_2[2] == 0x74657366 && *(undefined **)param_2 == &UNK_142f885e4) {
        (&UNK_142f885e5)[uVar8] = 4;
        *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
      break;
    case 0x1b:
      out(*(undefined4 *)param_1,uVar14);
      if (uVar8 < 0xfffffffebd077a1c) {
        *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      }
      else {
        if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
          out(*(undefined4 *)(param_1 + 4),uVar14);
          out(param_1[8],uVar14);
          if (*(longlong *)((longlong)param_2 + 6) == 0x65686361635f6e6f &&
              *(undefined **)param_2 == &UNK_142f885e4) {
            puVar11 = (undefined8 *)0x2;
            goto code_r0x000140615a8e;
          }
          break;
        }
        UNRECOVERED_JUMPTABLE_00 = (code *)0xc6014888;
        cRam00000000c6014888 = cRam00000000c6014888 + -0x78;
      }
      return UNRECOVERED_JUMPTABLE_00;
    case 0x1c:
      (&UNK_142f88571)[uVar8] = (&UNK_142f88571)[uVar8] + -0x1c;
      goto code_r0x0001406159a8;
    case 0x1d:
      goto code_r0x0001406159ec;
    case 0x1f:
      piVar2 = (int *)((longlong)&UNWIND_INFO_143be8728 + uVar8 + 4);
      *piVar2 = *piVar2 + 0x42f885e4;
      if ((char)param_2[1] == 'h' && *param_2 == 0x63746970) {
        (&UNK_142f885e5)[uVar8] = 1;
        *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
      break;
    case 0x26:
code_r0x000140615a8e:
      (&UNK_142f885e5)[uVar8] = (char)puVar11;
      *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      return UNRECOVERED_JUMPTABLE_00;
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2d:
      uVar8 = (ulonglong)*(uint *)(&UNK_142f885e4 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4);
      goto code_r0x000140615bd1;
    case 0x2a:
      return UNRECOVERED_JUMPTABLE_00;
    case 0x2b:
      in(uVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2c:
      goto code_r0x000140615bd4;
    }
  }
  else {
LAB_1406154f5:
    if (bVar10 != 0x7b) {
      uStack_38 = 10;
      goto LAB_1406154ab;
    }
    puVar1 = param_2 + 0xe;
    *(char *)puVar1 = (char)*puVar1 + -1;
    if ((char)*puVar1 == '\0') {
      uStack_38 = 0x18;
      goto LAB_1406154ab;
    }
    *(ulonglong *)(param_2 + 10) = uVar8;
    pcVar21 = (code *)0x140615519;
    pdb_140408790(&uStack_38);
    puVar11 = (undefined8 *)(uStack_38 & 0xff);
    UNRECOVERED_JUMPTABLE_00 = pcStack_30;
    unaff_RBX = param_2;
    unaff_RBP = puVar11;
code_r0x000140615527:
    uVar7 = 0x42f885f4;
    uVar8 = (ulonglong)*(int *)(&UNK_142f885f4 + (longlong)puVar11 * 4);
    plVar12 = (longlong *)(&UNK_142f885f4 + uVar8);
    bVar10 = (byte)plVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(puVar11) {
    case (undefined8 *)0x0:
    case (undefined8 *)0x1:
    case (undefined8 *)0x2:
code_r0x00014061553a:
      UNRECOVERED_JUMPTABLE_00 = (code *)pdb_140409730(UNRECOVERED_JUMPTABLE_00);
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
code_r0x000140615544:
        *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE_00;
        *param_1 = (code)0x1;
        *(char *)(unaff_RBX + 0xe) = (char)unaff_RBX[0xe] + '\x01';
        return param_1;
      }
      *(char *)(unaff_RBX + 0xe) = (char)unaff_RBX[0xe] + '\x01';
      param_1[1] = SUB81(unaff_RBP,0);
      uVar8 = *(ulonglong *)(unaff_RBX + 10);
      if (*(ulonglong *)(unaff_RBX + 8) <= uVar8) goto code_r0x00014061559a;
      goto code_r0x000140615574;
    case (undefined8 *)0x3:
      goto code_r0x000140615544;
    case (undefined8 *)0x4:
code_r0x0001406158d1:
                    /* WARNING: Could not recover jumptable at 0x0001406158df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_00 =
           (code *)(*(code *)(&UNK_142f88604 + *(int *)(&UNK_142f88604 + uVar18 * 4)))();
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0x5:
    case (undefined8 *)0x6:
    case (undefined8 *)0x8:
    case (undefined8 *)0x9:
    case (undefined8 *)0xa:
    case (undefined8 *)0xb:
    case (undefined8 *)0xd:
    case (undefined8 *)0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined8 *)0x7:
      UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)((int)UNRECOVERED_JUMPTABLE_00 + 0x75c80949);
code_r0x000140615937:
      *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0xc:
code_r0x000140615902:
      if (uVar7 == 0x65 && (int)plVar12 == 0) {
        UNRECOVERED_JUMPTABLE_00[1] = (code)0x2;
        *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
LAB_14061596b:
      UNRECOVERED_JUMPTABLE_00[1] = (code)0x5;
      *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0xf:
      if (0xfffffffebd077a0b < uVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (_UNK_142f885f4 == plVar12) {
        UNRECOVERED_JUMPTABLE_00[1] = (code)0x1;
        *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
      goto LAB_14061596b;
    case (undefined8 *)0x10:
code_r0x000140615974:
      UNRECOVERED_JUMPTABLE_00[1] = (code)0x0;
      *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0x11:
    case (undefined8 *)0x13:
    case (undefined8 *)0x14:
    case (undefined8 *)0x1a:
    case (undefined8 *)0x1c:
    case (undefined8 *)0x1d:
    case (undefined8 *)0x1e:
    case (undefined8 *)0x1f:
    case (undefined8 *)0x20:
    case (undefined8 *)0x21:
      UNRECOVERED_JUMPTABLE_00[-0x7f] = (code)((byte)UNRECOVERED_JUMPTABLE_00[-0x7f] | bVar10);
      UNRECOVERED_JUMPTABLE_00[9] = (code)((char)UNRECOVERED_JUMPTABLE_00[9] + bVar10);
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0x12:
      out(*param_1,0x85f4);
      if (_UNK_142f885f4 == plVar12) {
        UNRECOVERED_JUMPTABLE_00[1] = (code)0x2;
code_r0x0001406159ec:
        *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
        return UNRECOVERED_JUMPTABLE_00;
      }
      break;
    case (undefined8 *)0x15:
      UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)((int)UNRECOVERED_JUMPTABLE_00 - 3);
      if (uVar18 < 0x13) {
        puVar11 = (undefined8 *)&UNK_142f88634;
code_r0x0001406159a8:
                    /* WARNING: Could not recover jumptable at 0x0001406159af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_00 =
             (code *)(*(code *)((longlong)*(int *)((longlong)puVar11 + uVar18 * 4) +
                               (longlong)puVar11))();
        return UNRECOVERED_JUMPTABLE_00;
      }
      break;
    case (undefined8 *)0x16:
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined8 *)0x18:
                    /* WARNING: Could not recover jumptable at 0x0001406159b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_00 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0x19:
      lVar13 = CONCAT71((int7)((ulonglong)plVar12 >> 8),bVar10 | (&UNK_142f885ac)[uVar8]);
      puVar16 = (undefined8 *)(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x5f);
      uVar15 = (ulonglong)*(uint *)(lVar13 + 99);
      *(undefined8 *)(uVar15 - 8) = 0x42334c65;
      iVar4 = *(int *)(lVar13 + 9);
      puVar11 = (undefined8 *)(uVar15 - 0x10);
      *(undefined8 **)(uVar15 - 0x10) = puVar16;
      cVar6 = '\x12';
      do {
        puVar16 = puVar16 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar16;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      *(ulonglong *)(uVar15 - 0xa8) = uVar15 - 0x10;
      *UNRECOVERED_JUMPTABLE_00 =
           (code)((char)*UNRECOVERED_JUMPTABLE_00 + (char)UNRECOVERED_JUMPTABLE_00);
      pcVar3 = (char *)((ulonglong)(uint)((int)lVar13 + iVar4) + 0x1488801);
      *pcVar3 = *pcVar3 + -0x7b;
      *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined8 *)0x22:
      UNRECOVERED_JUMPTABLE_00[-0x7d] = (code)((byte)UNRECOVERED_JUMPTABLE_00[-0x7d] | bVar10);
      break;
    default:
    case (undefined8 *)0x28:
      uVar8 = (ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE_00 + 0x18);
code_r0x0001406abac0:
      puStack_50 = &UNK_140f3c37e;
      uVar9 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_00 = (code *)HeapFree(uVar9,0,uVar8);
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0x26:
      UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
      UNRECOVERED_JUMPTABLE_00 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    case (undefined8 *)0x27:
      if (*plVar12 != -0x7fffffffffffffff) {
        unaff_RBP[-2] = *plVar12;
        unaff_RBP[-3] = uVar18;
        pdb_1404dfd20(uVar18 + 0x18);
        if ((SBORROW8(0,unaff_RBP[-2])) || (unaff_RBP[-2] == 0)) {
          return (code *)unaff_RBP[-3];
        }
        uVar8 = *(ulonglong *)((code *)unaff_RBP[-3] + 8);
        goto code_r0x0001406abac0;
      }
      if (6 < (ulonglong)*(byte *)(uVar18 + 8)) {
        uStack_28 = 0x100002600;
        uStack_38 = 0xfffffffffffffffe;
        lVar13 = *(longlong *)(uVar18 + 0x10);
        if (lVar13 == 0) {
          puStack_68 = (undefined *)0x0;
        }
        else {
          uStack_90 = *(undefined8 *)(uVar18 + 0x18);
          puStack_68 = *(undefined **)(uVar18 + 0x20);
          auStack_a8[1] = 0;
          uStack_80 = 0;
          auStack_a8[2] = lVar13;
          lStack_78 = lVar13;
          uStack_70 = uStack_90;
        }
        auStack_a8[0] = (ulonglong)(lVar13 != 0);
        uStack_88 = auStack_a8[0];
        pcStack_30 = (code *)unaff_RBX;
        pdb_14057f6c0(&stack0xffffffffffffffa0,auStack_a8);
        if (pcVar21 != (code *)0x0) {
          do {
            pcStack_48 = pcVar21 + (longlong)puStack_50 * 0x20;
            puStack_40 = auStack_a8;
            if (*(ulonglong *)(pcVar21 + (longlong)puStack_50 * 0x18 + 0x168) != 0) {
              pub_1406abac0(*(byte **)(pcVar21 + (longlong)puStack_50 * 0x18 + 0x170),
                            *(ulonglong *)(pcVar21 + (longlong)puStack_50 * 0x18 + 0x168),1);
            }
            pdb_140498160(&pcStack_48);
            pdb_14057f6c0(&stack0xffffffffffffffa0,auStack_a8);
          } while (pcVar21 != (code *)0x0);
        }
        return pcVar21;
      }
      puVar11 = (undefined8 *)&UNK_142f88680;
      uVar8 = (ulonglong)*(int *)(&UNK_142f88680 + (ulonglong)*(byte *)(uVar18 + 8) * 4);
code_r0x000140615bd1:
      UNRECOVERED_JUMPTABLE_00 = (code *)(uVar8 + (longlong)puVar11);
code_r0x000140615bd4:
                    /* WARNING: Could not recover jumptable at 0x000140615bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_00 = (code *)(*UNRECOVERED_JUMPTABLE_00)();
      return UNRECOVERED_JUMPTABLE_00;
    }
  }
  UNRECOVERED_JUMPTABLE_00[1] = (code)0x6;
  *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
  return UNRECOVERED_JUMPTABLE_00;
code_r0x00014061548e:
  *(ulonglong *)(param_2 + 10) = uVar8;
  if (uVar8 == *(ulonglong *)(param_2 + 8)) goto LAB_1406154a2;
  goto LAB_14061547c;
code_r0x000140615574:
  uVar8 = uVar8 + 1;
  bVar10 = *(byte *)(*(longlong *)(unaff_RBX + 6) + -1 + uVar8);
  if ((0x20 < (ulonglong)bVar10) || ((uVar17 >> ((ulonglong)bVar10 & 0x3f) & 1) == 0)) {
    if (bVar10 == 0x7d) {
      *(ulonglong *)(unaff_RBX + 10) = uVar8;
code_r0x0001406155da:
      cVar5 = (code)0x0;
      goto code_r0x0001406155dc;
    }
    uStack_38 = 10;
    goto code_r0x0001406155a3;
  }
  *(ulonglong *)(unaff_RBX + 10) = uVar8;
  if (uVar8 == *(ulonglong *)(unaff_RBX + 8)) {
code_r0x00014061559a:
    uStack_38 = 3;
code_r0x0001406155a3:
    uVar9 = pdb_142d855a0(unaff_RBX,&uStack_38);
    *(undefined8 *)(param_1 + 8) = uVar9;
    cVar5 = (code)0x1;
code_r0x0001406155dc:
    *param_1 = cVar5;
    return param_1;
  }
  goto code_r0x000140615574;
}

