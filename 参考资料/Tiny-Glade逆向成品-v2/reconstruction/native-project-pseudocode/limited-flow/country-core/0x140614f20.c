// VA 0x140614f20, PDB extent 147 bytes
// country_core::resources::session::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014061596b) overlaps instruction at (ram,0x000140615968)
    */
/* WARNING: Removing unreachable block (ram,0x00014061598f) */
/* WARNING: Removing unreachable block (ram,0x000140615a5c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 147 */

code * pdb_140614f20(undefined8 param_1,code *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  byte *arg0;
  char unaff_00084f00;
  undefined1 *unaff_0008ae00;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code cVar11;
  char cVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  byte bVar18;
  byte *in_RCX;
  code *pcVar19;
  undefined7 uVar21;
  int *piVar20;
  byte bVar23;
  code *pcVar22;
  code *unaff_RBX;
  code *pcVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *unaff_RBP;
  code *unaff_RSI;
  longlong lVar30;
  int *unaff_RDI;
  code *pcVar31;
  undefined *puVar32;
  ulonglong uVar33;
  uint uVar34;
  byte unaff_R14B;
  bool bVar35;
  undefined4 in_XMM0_Dc;
  uint in_XMM0_Dd;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  code *pcStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  ulonglong in_stack_fffffffffffffff8;
  
  uVar34 = (uint)param_4;
  puVar27 = &stack0xffffffffffffffd8;
  puVar28 = &stack0xffffffffffffffd8;
  puVar29 = &stack0xffffffffffffffd8;
  pcVar22 = param_2 + 8;
  pcVar31 = (code *)&UNK_142f885a0;
  pcVar19 = (code *)(&UNK_142f885a0 + *(int *)(&UNK_142f885a0 + (ulonglong)*in_RCX * 4));
  bVar35 = pcVar19 == (code *)0x0;
  bVar23 = (byte)((ulonglong)pcVar22 >> 8);
  cVar12 = (char)param_2;
  uVar15 = (uint)param_2;
  bVar18 = (byte)pcVar19;
  uVar21 = (undefined7)((ulonglong)pcVar19 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*in_RCX) {
  case 0:
    puVar32 = &UNK_142f882d8;
    break;
  case 1:
    lVar16 = pdb_14054e5c0(param_2,pcVar22,&UNK_142f882de,5);
    goto joined_r0x000140614fa5;
  case 2:
    lVar16 = pdb_14054e5c0(param_2,pcVar22,&UNK_142f882e3,7);
    goto joined_r0x000140614fa5;
  case 3:
    puVar32 = &UNK_142f882ea;
    break;
  case 4:
    puVar32 = &UNK_142f882f0;
    break;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00014061505a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar31 = (code *)(*(code *)(&UNK_142f885b4 +
                                *(int *)(&UNK_142f885b4 +
                                        ((ulonglong)param_2 & 0xffffffffffffff20) * 4)))();
    return pcVar31;
  case 6:
code_r0x00014061512f:
    goto code_r0x000140615147;
  case 7:
    goto code_r0x000140615123;
  case 8:
code_r0x000140615129:
    if (bVar35) {
      *(code **)(pcVar19 + 0x28) = param_2;
      goto code_r0x00014061512f;
    }
    goto code_r0x000140615113;
  case 9:
    goto code_r0x00014061511d;
  case 10:
    unaff_RSI[1] = (code)0x1;
code_r0x000140615147:
    cVar11 = (code)0x0;
code_r0x000140615149:
    *unaff_RSI = cVar11;
    return unaff_RSI;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    param_2[-0x73] = (code)((char)param_2[-0x73] - bVar18);
    pdb_140408470();
    unaff_RBP = (undefined8 *)(in_stack_fffffffffffffff8 & 0xff);
    pcVar19 = pcVar22;
    goto code_r0x00014061508e;
  case 0x10:
    *unaff_RDI = *unaff_RDI + -1;
    pcVar19 = unaff_RBX;
code_r0x00014061508e:
    pcVar22 = (code *)&UNK_142f885cc;
    uVar33 = (ulonglong)*(int *)(&UNK_142f885cc + ((ulonglong)unaff_RBP & 0xff) * 4);
    unaff_RBX = (code *)(&UNK_142f885cc + uVar33);
    bVar35 = unaff_RBX == (code *)0x0;
    iVar14 = (int)UNRECOVERED_JUMPTABLE;
    uVar21 = (undefined7)((ulonglong)unaff_RBX >> 8);
    pcVar24 = pcVar19;
    puVar25 = &stack0xffffffffffffffd8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulonglong)unaff_RBP & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      UNRECOVERED_JUMPTABLE = (code *)pdb_140409730(UNRECOVERED_JUMPTABLE);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        pcVar19[0x38] = (code)((char)pcVar19[0x38] + '\x01');
        unaff_RSI[1] = SUB81(unaff_RBP,0);
        param_2 = *(code **)(pcVar19 + 0x28);
        if (param_2 < *(code **)(pcVar19 + 0x20)) {
          do {
            param_2 = param_2 + 1;
            cVar11 = param_2[*(longlong *)(pcVar19 + 0x18) + -1];
            if ((0x20 < (ulonglong)(byte)cVar11) ||
               (((ulonglong)unaff_RDI >> ((ulonglong)(byte)cVar11 & 0x3f) & 1) == 0)) {
              bVar35 = cVar11 == (code)0x7d;
              goto code_r0x000140615129;
            }
            *(code **)(pcVar19 + 0x28) = param_2;
          } while (param_2 != *(code **)(pcVar19 + 0x20));
        }
code_r0x000140615113:
        param_2 = (code *)pdb_142d855a0(pcVar19,&stack0xfffffffffffffff8);
code_r0x00014061511d:
        *(code **)(unaff_RSI + 8) = param_2;
        param_2 = (code *)0x1;
        goto code_r0x000140615123;
      }
    case 5:
      *(code **)(unaff_RSI + 8) = UNRECOVERED_JUMPTABLE;
      *unaff_RSI = (code)0x1;
      pcVar19[0x38] = (code)((char)pcVar19[0x38] + '\x01');
      return unaff_RSI;
    case 6:
      if ((POPCOUNT((ulonglong)unaff_RBX & 0xff) & 1U) == 0) {
        return UNRECOVERED_JUMPTABLE;
      }
      *unaff_RDI = *unaff_RDI + -1;
      param_2 = (code *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff20);
      pcVar19 = (code *)&UNK_142f885e4;
code_r0x0001406154e3:
                    /* WARNING: Could not recover jumptable at 0x0001406154ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar31 = (code *)(*(pcVar19 + *(int *)(pcVar19 + (longlong)param_2 * 4)))();
      return pcVar31;
    case 7:
      unaff_RSI = (code *)(ulonglong)
                          (((int)unaff_RSI - iVar14) -
                          (uint)((byte)pcVar19 < (byte)((ulonglong)unaff_RBX >> 8)));
      iVar14 = CONCAT13(UNK_142f885cf,CONCAT12(UNK_142f885ce,_UNK_142f885cc)) + (int)pcVar31;
      _UNK_142f885cc = (undefined2)iVar14;
      UNK_142f885ce = (char)((uint)iVar14 >> 0x10);
      UNK_142f885cf = (undefined1)((uint)iVar14 >> 0x18);
      goto code_r0x0001406155da;
    case 8:
      puVar25 = (undefined8 *)&stack0xffffffffffffffd0;
      goto code_r0x0001406155a3;
    case 9:
      UNRECOVERED_JUMPTABLE[0x4127eb01] =
           (code)((byte)UNRECOVERED_JUMPTABLE[0x4127eb01] | unaff_R14B);
code_r0x0001406155b5:
      puVar25 = &stack0xffffffffffffffd8;
      if (uVar34 != 0x7d) goto code_r0x0001406155a3;
      *(code **)(unaff_RBX + 0x28) = UNRECOVERED_JUMPTABLE;
code_r0x0001406155da:
      cVar11 = (code)0x0;
code_r0x0001406155dc:
      *unaff_RSI = cVar11;
      return unaff_RSI;
    case 10:
    case 0xb:
    case 0xc:
      unaff_RBX = (code *)&UNK_142f885cc;
      pdb_140408790();
      unaff_RBP = (undefined8 *)(in_stack_fffffffffffffff8 & 0xff);
      goto code_r0x00014061551e;
    case 0xd:
      unaff_RBX = pcVar19;
code_r0x00014061551e:
      pcVar22 = (code *)&UNK_142f885f4;
      uVar33 = (ulonglong)*(int *)(&UNK_142f885f4 + ((ulonglong)unaff_RBP & 0xff) * 4);
      pcVar19 = (code *)(&UNK_142f885f4 + uVar33);
      bVar18 = (byte)pcVar19;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((ulonglong)unaff_RBP & 0xff) {
      case 0:
      case 1:
      case 2:
        UNRECOVERED_JUMPTABLE = (code *)pdb_140409730(UNRECOVERED_JUMPTABLE);
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto code_r0x000140615544;
        unaff_RBX[0x38] = (code)((char)unaff_RBX[0x38] + '\x01');
        unaff_RSI[1] = SUB81(unaff_RBP,0);
        param_2 = *(code **)(unaff_RBX + 0x28);
        puVar25 = &stack0xffffffffffffffd8;
        if (param_2 < *(code **)(unaff_RBX + 0x20)) {
          pcVar31 = *(code **)(unaff_RBX + 0x18);
          pcVar22 = (code *)-(longlong)*(code **)(unaff_RBX + 0x20);
          do {
            param_2 = param_2 + 1;
            param_4 = (ulonglong)(byte)(pcVar31 + -1)[(longlong)param_2];
            uVar34 = (uint)(byte)(pcVar31 + -1)[(longlong)param_2];
            UNRECOVERED_JUMPTABLE = param_2;
            if (0x20 < param_4) goto code_r0x0001406155b5;
code_r0x000140615580:
            uVar34 = (uint)param_4;
            UNRECOVERED_JUMPTABLE = param_2;
            if (((ulonglong)unaff_RDI >> (param_4 & 0x3f) & 1) == 0) goto code_r0x0001406155b5;
code_r0x000140615586:
            *(code **)(unaff_RBX + 0x28) = param_2;
            puVar25 = &stack0xffffffffffffffd8;
          } while (pcVar22 + (longlong)param_2 != (code *)0x0);
        }
code_r0x0001406155a3:
        *(undefined8 *)((longlong)puVar25 + -8) = 0x1406155ad;
        uVar17 = pdb_142d855a0(unaff_RBX,(undefined1 *)((longlong)puVar25 + 0x20));
        *(undefined8 *)(unaff_RSI + 8) = uVar17;
        cVar11 = (code)0x1;
        goto code_r0x0001406155dc;
      case 3:
code_r0x000140615544:
        *(code **)(unaff_RSI + 8) = UNRECOVERED_JUMPTABLE;
        *unaff_RSI = (code)0x1;
        unaff_RBX[0x38] = (code)((char)unaff_RBX[0x38] + '\x01');
        return unaff_RSI;
      case 4:
        unaff_RBX = (code *)0x42f88604;
        pcVar31 = (code *)(longlong)*(int *)((longlong)pcVar31 * 4 + 0x42f88604);
code_r0x0001406158dc:
                    /* WARNING: Could not recover jumptable at 0x0001406158df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar31 = (code *)(*(pcVar31 + (longlong)unaff_RBX))
                                    (unaff_RBX,pcVar22,pcVar31 + (longlong)unaff_RBX);
        return pcVar31;
      case 5:
      case 6:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
        UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(iVar14 + 0x75c80949);
code_r0x000140615937:
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      case 0xc:
code_r0x000140615902:
        bVar35 = (int)pcVar22 == 0x65 && (int)pcVar19 == 0;
        param_2 = UNRECOVERED_JUMPTABLE;
code_r0x000140615907:
        UNRECOVERED_JUMPTABLE = param_2;
        if (bVar35) {
          UNRECOVERED_JUMPTABLE[1] = (code)0x2;
          *UNRECOVERED_JUMPTABLE = (code)0x0;
          return UNRECOVERED_JUMPTABLE;
        }
        goto LAB_14061596b;
      case 0xf:
        if (0xfffffffebd077a0b < uVar33) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (_UNK_142f885f4 == pcVar19) {
code_r0x00014061594a:
          UNRECOVERED_JUMPTABLE[1] = (code)0x1;
          *UNRECOVERED_JUMPTABLE = (code)0x0;
          return UNRECOVERED_JUMPTABLE;
        }
LAB_14061596b:
        UNRECOVERED_JUMPTABLE[1] = (code)0x5;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      case 0x10:
code_r0x000140615974:
        UNRECOVERED_JUMPTABLE[1] = (code)0x0;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      default:
        UNRECOVERED_JUMPTABLE[-0x7f] = (code)((byte)UNRECOVERED_JUMPTABLE[-0x7f] | bVar18);
        UNRECOVERED_JUMPTABLE[9] = (code)((char)UNRECOVERED_JUMPTABLE[9] + bVar18);
        return UNRECOVERED_JUMPTABLE;
      case 0x12:
        out(*unaff_RSI,0x85f4);
code_r0x0001406159d4:
        if (*(longlong *)pcVar22 == 0x6e6f697469736f70) {
          UNRECOVERED_JUMPTABLE[1] = (code)0x2;
          *UNRECOVERED_JUMPTABLE = (code)0x0;
          return UNRECOVERED_JUMPTABLE;
        }
        break;
      case 0x15:
        UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(iVar14 - 3);
        if (pcVar31 < (code *)0x13) {
          pcVar19 = (code *)&UNK_142f88634;
code_r0x0001406159a8:
                    /* WARNING: Could not emulate address calculation at 0x0001406159a8 */
                    /* WARNING: Treating indirect jump as call */
          pcVar31 = (code *)(*(pcVar19 + *(int *)(pcVar19 + (longlong)pcVar31 * 4)))
                                      (pcVar19,pcVar22,
                                       pcVar19 + *(int *)(pcVar19 + (longlong)pcVar31 * 4));
          return pcVar31;
        }
        break;
      case 0x16:
        return UNRECOVERED_JUMPTABLE;
      case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x18:
                    /* WARNING: Could not recover jumptable at 0x0001406159b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar31 = (code *)(*UNRECOVERED_JUMPTABLE)();
        return pcVar31;
      case 0x19:
        pcVar19 = (code *)CONCAT71((int7)((ulonglong)pcVar19 >> 8),bVar18 | (&UNK_142f885ac)[uVar33]
                                  );
        unaff_RBP = (undefined8 *)(ulonglong)*(uint *)(UNRECOVERED_JUMPTABLE + 0x5f);
code_r0x000140615a02:
        uVar26 = (ulonglong)*(uint *)(pcVar19 + 99);
        *(undefined8 *)(uVar26 - 8) = 0x42334c65;
        uVar33 = (ulonglong)(uint)((int)pcVar19 + *(int *)(pcVar19 + 9));
        unaff_00084f00 = '\x13';
        puVar27 = (undefined8 *)(uVar26 - 0x10);
        unaff_0008ae00 = (undefined1 *)(uVar26 - 0x10);
        puVar25 = (undefined8 *)(uVar26 - 0x10);
        *(undefined8 **)(uVar26 - 0x10) = unaff_RBP;
        cVar12 = '\x12';
        do {
          unaff_RBP = unaff_RBP + -1;
          puVar25 = puVar25 + -1;
          *puVar25 = *unaff_RBP;
          cVar12 = cVar12 + -1;
        } while ('\0' < cVar12);
code_r0x000140615a0d:
        *(undefined1 **)((longlong)puVar27 + (ulonglong)(byte)(unaff_00084f00 - 1) * -8 + -8) =
             unaff_0008ae00;
        *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
        *(char *)(uVar33 + 0x1488801) =
             *(char *)(uVar33 + 0x1488801) + (char)((ulonglong)pcVar22 >> 8);
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x22:
        UNRECOVERED_JUMPTABLE[-0x7d] = (code)((byte)UNRECOVERED_JUMPTABLE[-0x7d] | bVar18);
        bVar35 = false;
code_r0x000140615aad:
        if (bVar35) {
          UNRECOVERED_JUMPTABLE[1] = (code)0x0;
          *UNRECOVERED_JUMPTABLE = (code)0x0;
          return UNRECOVERED_JUMPTABLE;
        }
        break;
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x29:
      case 0x28:
code_r0x000140615be3:
        lVar16 = *(longlong *)(pcVar31 + 0x18);
        uVar33 = 1;
        unaff_RBP = *(undefined8 **)((longlong)puVar28 + 0x40);
        puVar29 = (undefined8 *)((longlong)puVar28 + 0x48);
code_r0x0001406abac0:
        *(undefined8 **)((longlong)puVar29 + -8) = unaff_RBP;
        *(code **)((longlong)puVar29 + -0x10) = unaff_RSI;
        lVar30 = lVar16;
        if (0x10 < uVar33) {
          lVar30 = *(longlong *)(lVar16 + -8);
        }
        *(undefined **)((longlong)puVar29 + -0x40) = &UNK_140f3c37e;
        uVar17 = GetProcessHeap(lVar16,pcVar22);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar31 = (code *)HeapFree(uVar17,0,lVar30);
        return pcVar31;
      case 0x26:
        pcVar31 = (code *)swi(3);
        pcVar31 = (code *)(*pcVar31)();
        return pcVar31;
      case 0x27:
pdb_140615b90:
        uStack_38 = 0xfffffffffffffffe;
        if (*(code **)pcVar19 != (code *)0x8000000000000001) {
          pcStack_48 = pcVar19;
          pcStack_40 = *(code **)pcVar19;
          pdb_1404dfd20(pcVar19 + 0x18);
          if (SBORROW8(0,(longlong)pcStack_40)) {
            return pcStack_48;
          }
          if (pcStack_40 == (code *)0x0) {
            return pcStack_48;
          }
          lVar16 = *(longlong *)(pcStack_48 + 8);
          uVar33 = 1;
          pcVar22 = pcStack_40;
          goto code_r0x0001406abac0;
        }
        UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(byte)pcVar19[8];
        pcVar24 = unaff_RBX;
        puVar25 = (undefined8 *)auStack_70;
        unaff_RBP = (undefined8 *)&stack0xffffffffffffffd0;
        pcVar31 = pcVar19;
code_r0x000140615bbc:
        puVar28 = puVar25;
        if ((code *)0x6 < UNRECOVERED_JUMPTABLE) {
code_r0x000140615c70:
          *(undefined8 *)((longlong)puVar28 + 0x40) = *(undefined8 *)((longlong)puVar28 + 0x40);
          *(code **)((longlong)puVar28 + 0x38) = unaff_RSI;
          *(int **)((longlong)puVar28 + 0x30) = unaff_RDI;
          *(code **)((longlong)puVar28 + 0x28) = pcVar24;
          *(undefined8 *)((longlong)puVar28 + 0x20) = 0xfffffffffffffffe;
          lVar16 = *(longlong *)(pcVar31 + 0x10);
          if (lVar16 == 0) {
            uVar17 = 0;
          }
          else {
            uVar2 = *(undefined8 *)(pcVar31 + 0x18);
            uVar17 = *(undefined8 *)(pcVar31 + 0x20);
            *(undefined8 *)((longlong)puVar28 + -0x48) = 0;
            *(longlong *)((longlong)puVar28 + -0x40) = lVar16;
            *(undefined8 *)((longlong)puVar28 + -0x38) = uVar2;
            *(undefined8 *)((longlong)puVar28 + -0x28) = 0;
            *(longlong *)((longlong)puVar28 + -0x20) = lVar16;
            *(undefined8 *)((longlong)puVar28 + -0x18) = uVar2;
          }
          uVar33 = (ulonglong)(lVar16 != 0);
          *(ulonglong *)((longlong)puVar28 + -0x50) = uVar33;
          *(ulonglong *)((longlong)puVar28 + -0x30) = uVar33;
          *(undefined8 *)((longlong)puVar28 + -0x10) = uVar17;
          puVar1 = (undefined1 *)((longlong)puVar28 + -0x50);
          *(undefined **)((longlong)puVar28 + -0x78) = &UNK_1404dfd92;
          pdb_14057f6c0((undefined1 *)((longlong)puVar28 + -8),puVar1);
          lVar16 = *(longlong *)((longlong)puVar28 + -8);
          if (lVar16 != 0) {
            do {
              lVar30 = *(longlong *)((longlong)puVar28 + 8);
              *(undefined1 **)((longlong)puVar28 + 0x18) = puVar1;
              *(longlong *)((longlong)puVar28 + 0x10) = lVar30 * 0x20 + lVar16;
              uVar33 = *(ulonglong *)(lVar16 + 0x168 + lVar30 * 0x18);
              if (uVar33 != 0) {
                arg0 = *(byte **)(lVar16 + lVar30 * 0x18 + 0x170);
                *(undefined **)((longlong)puVar28 + -0x78) = &UNK_1404dfded;
                pub_1406abac0(arg0,uVar33,1);
              }
              *(undefined **)((longlong)puVar28 + -0x78) = &UNK_1404dfdf6;
              pdb_140498160((longlong *)((longlong)puVar28 + 0x10));
              *(undefined **)((longlong)puVar28 + -0x78) = &UNK_1404dfe02;
              pdb_14057f6c0((undefined1 *)((longlong)puVar28 + -8),puVar1);
              lVar16 = *(longlong *)((longlong)puVar28 + -8);
            } while (lVar16 != 0);
          }
          return (code *)0x0;
        }
        switch(UNRECOVERED_JUMPTABLE) {
        default:
          return (code *)(&UNK_142f88680 +
                         *(int *)(&UNK_142f88680 + (longlong)UNRECOVERED_JUMPTABLE * 4));
        case (code *)0x3:
          pcVar22 = *(code **)(pcVar31 + 0x10);
          if (pcVar22 == (code *)0x0) {
            return (code *)(&UNK_142f88680 +
                           *(int *)(&UNK_142f88680 + (longlong)UNRECOVERED_JUMPTABLE * 4));
          }
          break;
        case (code *)0x4:
          uVar17 = *(undefined8 *)(pcVar31 + 0x18);
          uVar2 = *(undefined8 *)(pcVar31 + 0x20);
          unaff_RBP[-2] = uVar17;
          unaff_RBP[-3] = pcVar31;
          *(undefined **)((longlong)puVar28 + -8) = &UNK_140615c44;
          pdb_1404be800(uVar17,uVar2);
          lVar16 = *(longlong *)((code *)unaff_RBP[-3] + 0x10);
          if (lVar16 == 0) {
            return (code *)unaff_RBP[-3];
          }
          pcVar22 = (code *)(lVar16 << 5);
          uVar33 = 8;
          lVar16 = unaff_RBP[-2];
          unaff_RBP = *(undefined8 **)((longlong)puVar28 + 0x40);
          puVar29 = (undefined8 *)((longlong)puVar28 + 0x48);
          goto code_r0x0001406abac0;
        case (code *)0x5:
          goto code_r0x000140615c70;
        }
        goto code_r0x000140615be3;
      }
      break;
    case 0xe:
      *(uint *)(UNRECOVERED_JUMPTABLE + -0x3b7cb7f8) =
           *(int *)(UNRECOVERED_JUMPTABLE + -0x3b7cb7f8) + (uint)unaff_RBX;
      unaff_RSI[-0x3d] = (code)((byte)unaff_RSI[-0x3d] & (byte)pcVar19);
      pcVar31 = (code *)swi(3);
      pcVar31 = (code *)(*pcVar31)();
      return pcVar31;
    case 0xf:
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x18:
      cVar12 = (char)UNRECOVERED_JUMPTABLE + -0x78;
      UNRECOVERED_JUMPTABLE = (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),cVar12)
      ;
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + cVar12);
      goto code_r0x000140615937;
    case 0x11:
      bVar35 = ((uint)unaff_RBX | 0x42f885cc) == 0;
      param_2 = UNRECOVERED_JUMPTABLE;
      goto code_r0x000140615907;
    case 0x16:
code_r0x0001406158da:
      goto code_r0x0001406158dc;
    case 0x19:
      out(*(undefined4 *)unaff_RSI,0x85cc);
      bVar35 = CONCAT26(_UNK_142f885d7,
                        CONCAT24(_UNK_142f885d5,
                                 CONCAT13(UNK_142f885d4,CONCAT21(_UNK_142f885d2,UNK_142f885d1)))) ==
               0x6e696769726f5f74 &&
               unaff_RBX ==
               (code *)CONCAT26(_UNK_142f885d2,
                                CONCAT15(UNK_142f885d1,
                                         CONCAT14(UNK_142f885d0,
                                                  CONCAT13(UNK_142f885cf,
                                                           CONCAT12(UNK_142f885ce,_UNK_142f885cc))))
                               );
code_r0x000140615930:
      if (bVar35) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x4;
        goto code_r0x000140615937;
      }
      goto LAB_14061596b;
    case 0x1a:
      goto code_r0x00014061594a;
    default:
      bVar35 = UNK_142f885d4 == 'e' &&
               unaff_RBX ==
               (code *)CONCAT26(_UNK_142f885d2,
                                CONCAT15(UNK_142f885d1,
                                         CONCAT14(UNK_142f885d0,
                                                  CONCAT13(UNK_142f885cf,
                                                           CONCAT12(UNK_142f885ce,_UNK_142f885cc))))
                               );
      goto code_r0x000140615aad;
    case 0x1c:
      if (UNK_142f885ce == 'w' && (short)unaff_RBX == 0x6179) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x0;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case 0x1f:
code_r0x00014061596c:
      uVar15 = (int)UNRECOVERED_JUMPTABLE + 0xc6014888;
      pcVar31 = (code *)(ulonglong)uVar15;
      *pcVar31 = (code)((char)*pcVar31 + (char)uVar15);
      return pcVar31;
    case 0x20:
code_r0x000140615a2d:
      if (bVar35) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x1;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case 0x21:
      if (uVar33 < 0xfffffffebd077a34) {
        return UNRECOVERED_JUMPTABLE;
      }
      if (bVar35) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      break;
    case 0x22:
      pcVar31 = (code *)swi(3);
      pcVar31 = (code *)(*pcVar31)();
      return pcVar31;
    case 0x23:
      goto code_r0x0001406159d4;
    case 0x25:
      if (CONCAT26(_UNK_142f885d5,
                   CONCAT15(UNK_142f885d4,
                            CONCAT23(_UNK_142f885d2,
                                     CONCAT12(UNK_142f885d1,CONCAT11(UNK_142f885d0,UNK_142f885cf))))
                  ) != 0x65686361635f6863 || unaff_RBX != (code *)0x0) break;
      uVar33 = CONCAT71(uVar21,1);
      UNRECOVERED_JUMPTABLE[1] = (code)0x1;
      goto code_r0x000140615a0d;
    case 0x2c:
      *(undefined8 *)((ulonglong)*(uint *)(&UNK_142f8862f + uVar33) - 8) = 0xffffffffc8814965;
      UNRECOVERED_JUMPTABLE = (code *)((ulonglong)UNRECOVERED_JUMPTABLE | 6);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE);
      if (pcVar31 ==
          (code *)CONCAT17(UNK_142f885d9,
                           CONCAT25(_UNK_142f885d7,
                                    CONCAT23(_UNK_142f885d5,CONCAT12(UNK_142f885d4,_UNK_142f885d2)))
                          ) && unaff_RBX == (code *)0x0) {
        UNRECOVERED_JUMPTABLE[1] = (code)0x2;
        *UNRECOVERED_JUMPTABLE = (code)0x0;
        return UNRECOVERED_JUMPTABLE;
      }
      break;
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x30:
      puVar25 = (undefined8 *)&stack0xffffffffffffffd0;
      cVar12 = '\x04';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar25 = puVar25 + -1;
        *puVar25 = *unaff_RBP;
        cVar12 = cVar12 + -1;
      } while ('\0' < cVar12);
      *unaff_RBX = (code)((char)*unaff_RBX + '\x01');
      piVar20 = (int *)CONCAT71(uVar21,(byte)unaff_RBX +
                                       *(byte *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      *piVar20 = *piVar20 + (int)unaff_RDI +
                 (uint)CARRY1((byte)unaff_RBX,
                              *(byte *)((ulonglong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      return (code *)((ulonglong)unaff_RDI & 0xffffffff);
    case 0x31:
      pcVar31 = (code *)swi(3);
      pcVar31 = (code *)(*pcVar31)();
      return pcVar31;
    case 0x32:
      goto code_r0x000140615bbc;
    }
LAB_140615b07:
    UNRECOVERED_JUMPTABLE[1] = (code)0x6;
    *UNRECOVERED_JUMPTABLE = (code)0x0;
    return UNRECOVERED_JUMPTABLE;
  case 0x11:
    *param_2 = (code)((char)*param_2 + cVar12);
    param_2[-0x73] = (code)((char)param_2[-0x73] + bVar18);
    uVar17 = pdb_142d84ef0(pcVar22,(ulonglong)param_2 & 0xffffffffffffff20);
    *(undefined8 *)(unaff_RSI + 8) = uVar17;
    *unaff_RSI = (code)0x1;
    return unaff_RSI;
  case 0x12:
    param_2 = (code *)(ulonglong)(uVar15 + 1);
    unaff_RBX = pcVar19;
    goto code_r0x000140615586;
  case 0x13:
    *(byte *)((longlong)unaff_RDI + 0x35) = *(byte *)((longlong)unaff_RDI + 0x35) & bVar23;
    unaff_RBX = pcVar19;
    goto code_r0x000140615580;
  case 0x14:
    return param_2;
  case 0x15:
  case 0x16:
  case 0x17:
    goto code_r0x0001406154e3;
  case 0x18:
    goto code_r0x0001406155da;
  case 0x19:
    unaff_RSI[-0x3d] = (code)((byte)unaff_RSI[-0x3d] & (byte)unaff_RBX);
    uVar17 = pdb_142d86e40(pcVar22,&UNK_142f885a0,&UNK_142f88318,10);
    *(undefined8 *)(param_2 + 8) = uVar17;
    *param_2 = (code)0x1;
    return param_2;
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
    goto code_r0x000140615907;
  case 0x1c:
    unaff_RBX = (code *)CONCAT71(uVar21,bVar18 + (char)unaff_RSI[99]);
    goto code_r0x0001406158da;
  case 0x21:
    return param_2;
  case 0x24:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uVar15 ^ 0x65);
    if (((uint)pcVar19 | 0x42f885a0) == 0) goto code_r0x000140615974;
    pcVar19 = (code *)(ulonglong)(*(uint *)pcVar22 ^ 0x67616d69);
    pcVar22 = (code *)(ulonglong)(byte)param_2[0xc];
    goto code_r0x000140615902;
  case 0x25:
    if ((bVar18 | (&UNK_142f88558)[*(int *)(&UNK_142f885a0 + (ulonglong)*in_RCX * 4)]) == 0) {
      *param_2 = (code)0x0;
      return param_2;
    }
    out(*(undefined4 *)unaff_RSI,(short)pcVar22);
    uVar15 = uVar15 | (uint)CONCAT71(uVar21,bVar18 | (&UNK_142f88558)
                                                     [*(int *)(&UNK_142f885a0 +
                                                              (ulonglong)*in_RCX * 4)]);
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)uVar15;
    bVar35 = uVar15 == 0;
    goto code_r0x000140615930;
  default:
    halt_baddata();
  case 0x27:
    pcVar31 = (code *)swi(3);
    pcVar31 = (code *)(*pcVar31)();
    return pcVar31;
  case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
    UNRECOVERED_JUMPTABLE = param_2;
    goto code_r0x000140615a02;
  case 0x2c:
    bVar35 = param_2[0xc] == (code)0x68 && (uint)pcVar19 == 0;
    UNRECOVERED_JUMPTABLE = param_2;
    goto code_r0x000140615a2d;
  case 0x2d:
    uVar33 = (ulonglong)param_2 & 0xffffffffffffff97;
    uVar13 = CONCAT11((char)(uVar33 >> 8) + (char)unaff_RSI[0xf],(char)uVar33);
    UNRECOVERED_JUMPTABLE =
         (code *)CONCAT71((int7)(CONCAT62((int6)(uVar33 >> 0x10),uVar13) >> 8),
                          unaff_RBX[(ulonglong)uVar13 & 0xff]);
    puVar25 = (undefined8 *)&stack0xffffffffffffffd0;
    cVar12 = '\x1e';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar25 = puVar25 + -1;
      *puVar25 = *unaff_RBP;
      cVar12 = cVar12 + -1;
    } while ('\0' < cVar12);
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + 1;
    (param_2 + -0x47)[(longlong)pcVar22] =
         (code)((char)(param_2 + -0x47)[(longlong)pcVar22] + bVar23);
    goto code_r0x00014061596c;
  case 0x2e:
    goto code_r0x0001406159a8;
  case 0x30:
    *param_2 = (code)((char)*param_2 + cVar12);
    return param_2;
  case 0x37:
    param_2[-0x7f] = (code)((byte)param_2[-0x7f] | bVar18);
    return param_2;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3e:
    pcVar31 = (code *)swi(3);
    pcVar31 = (code *)(*pcVar31)();
    return pcVar31;
  case 0x3b:
    UNRECOVERED_JUMPTABLE =
         (code *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                          CONCAT11((char)((ulonglong)param_2 >> 8) + (char)unaff_RSI[0xf],cVar12));
    auVar3._8_4_ = in_XMM0_Dc;
    auVar3._0_8_ = param_1;
    auVar3._12_4_ = in_XMM0_Dd;
    auVar4._8_4_ = in_XMM0_Dc;
    auVar4._0_8_ = param_1;
    auVar4._12_4_ = in_XMM0_Dd;
    auVar5._8_4_ = in_XMM0_Dc;
    auVar5._0_8_ = param_1;
    auVar5._12_4_ = in_XMM0_Dd;
    auVar6._8_4_ = in_XMM0_Dc;
    auVar6._0_8_ = param_1;
    auVar6._12_4_ = in_XMM0_Dd;
    auVar7._8_4_ = in_XMM0_Dc;
    auVar7._0_8_ = param_1;
    auVar7._12_4_ = in_XMM0_Dd;
    auVar8._8_4_ = in_XMM0_Dc;
    auVar8._0_8_ = param_1;
    auVar8._12_4_ = in_XMM0_Dd;
    auVar9._8_4_ = in_XMM0_Dc;
    auVar9._0_8_ = param_1;
    auVar9._12_4_ = in_XMM0_Dd;
    auVar10._8_4_ = in_XMM0_Dc;
    auVar10._0_8_ = param_1;
    auVar10._12_4_ = in_XMM0_Dd;
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                 (ushort)((byte)(CONCAT44(in_XMM0_Dd,in_XMM0_Dc) >> 7) & 1) << 8 |
                 (ushort)((byte)(CONCAT44(in_XMM0_Dd,in_XMM0_Dc) >> 0xf) & 1) << 9 |
                 (ushort)((byte)(CONCAT44(in_XMM0_Dd,in_XMM0_Dc) >> 0x17) & 1) << 10 |
                 (ushort)((byte)(CONCAT44(in_XMM0_Dd,in_XMM0_Dc) >> 0x1f) & 1) << 0xb |
                 (ushort)((byte)(in_XMM0_Dd >> 7) & 1) << 0xc |
                 (ushort)((byte)(in_XMM0_Dd >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(in_XMM0_Dd >> 0x17) & 1) << 0xe |
                (ushort)(byte)(in_XMM0_Dd >> 0x1f) << 0xf) == 0xffff) {
      UNRECOVERED_JUMPTABLE[1] = (code)0x3;
      *UNRECOVERED_JUMPTABLE = (code)0x0;
      return UNRECOVERED_JUMPTABLE;
    }
    goto LAB_140615b07;
  case 0x3c:
    pcVar31 = (code *)swi(3);
    pcVar31 = (code *)(*pcVar31)();
    return pcVar31;
  case 0x3d:
    goto pdb_140615b90;
  }
  lVar16 = pdb_14054e5c0(param_2,pcVar22,puVar32,6);
joined_r0x000140614fa5:
  if (lVar16 == 0) {
    return (code *)0x0;
  }
  uStack_10 = 0xfffffffffffffffe;
  uStack_38 = 1;
  uStack_20 = 0;
  uStack_18 = 0;
  puStack_60 = &UNK_142db8fda;
  pdb_14007ee60();
  puStack_60 = &UNK_142db8fe9;
  pcVar31 = (code *)pub_1406abab0(0x28,8);
  if (pcVar31 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    puStack_60 = &UNK_142db901a;
    pdb_142dc7e11(8,0x28);
  }
  *(undefined8 *)(pcVar31 + 0x20) = uStack_18;
  *(undefined8 *)(pcVar31 + 0x10) = uStack_28;
  *(undefined8 *)(pcVar31 + 0x18) = uStack_20;
  *(undefined8 *)pcVar31 = uStack_38;
  *(longlong *)(pcVar31 + 8) = lVar16;
  return pcVar31;
code_r0x000140615123:
  cVar11 = SUB81(param_2,0);
  goto code_r0x000140615149;
}

