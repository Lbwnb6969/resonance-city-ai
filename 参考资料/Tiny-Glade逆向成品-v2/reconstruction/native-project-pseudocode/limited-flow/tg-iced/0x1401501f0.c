// VA 0x1401501f0, PDB extent 738 bytes
// tg_iced::gui_runner_sdl::run_gui_with_options::closure$0<tg_gpu_selector::gpu_selection::Controls>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001401539c9) overlaps instruction at (ram,0x0001401539c8)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   tg_iced::gui_runner_sdl::run_gui_with_options::closure$0<tg_gpu_selector::gpu_selection::Controls>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-iced/src/gui_runner_sdl.rs
   Extent: 738 */

ulonglong * pdb_1401501f0(code *UNRECOVERED_JUMPTABLE,byte *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  code *pcVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  byte bVar24;
  char cVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  undefined7 uVar34;
  code *pcVar29;
  char *pcVar30;
  byte *pbVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  byte bVar35;
  int iVar36;
  longlong lVar37;
  byte *pbVar38;
  byte *pbVar39;
  undefined4 uVar40;
  ulonglong uVar41;
  byte *pbVar42;
  byte *unaff_RBX;
  byte *pbVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  undefined1 **ppuVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  undefined1 *puVar54;
  undefined1 *puVar55;
  undefined1 *puVar56;
  undefined1 *puVar57;
  undefined1 *puVar58;
  undefined1 **ppuVar59;
  undefined1 *puVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  undefined1 *puVar63;
  undefined1 *puVar64;
  undefined1 *puVar65;
  undefined1 **ppuVar66;
  undefined1 *puVar67;
  undefined1 *puVar68;
  undefined1 *puVar69;
  undefined1 *puVar70;
  undefined1 *puVar71;
  undefined1 *puVar72;
  undefined1 *puVar73;
  undefined1 *puVar74;
  undefined1 *puVar75;
  undefined1 *puVar76;
  undefined1 *puVar77;
  undefined1 *puVar78;
  undefined1 *puVar79;
  undefined1 *puVar80;
  undefined1 *puVar81;
  undefined1 *puVar82;
  undefined1 *puVar83;
  undefined1 *puVar84;
  undefined1 *puVar85;
  undefined1 *puVar86;
  undefined1 *puVar87;
  uint unaff_ESI;
  code *pcVar88;
  char *unaff_RDI;
  ulonglong uVar89;
  char *pcVar90;
  ulonglong uVar91;
  undefined8 unaff_R12;
  char *unaff_R13;
  code *pcVar92;
  ulonglong *unaff_R15;
  bool bVar93;
  char in_AF;
  bool bVar94;
  undefined4 uVar95;
  undefined8 in_XMM0_Qa;
  int iVar96;
  undefined8 in_XMM0_Qb;
  undefined8 in_XMM1_Qa;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qb;
  char in_stack_00000258;
  longlong in_stack_00000320;
  longlong in_stack_00000328;
  longlong in_stack_00000330;
  uint in_stack_00000370;
  undefined4 in_stack_00000374;
  longlong in_stack_00000378;
  longlong in_stack_00000380;
  longlong in_stack_00000398;
  char in_stack_000003d8;
  char in_stack_000003e0;
  undefined4 in_stack_00000490;
  byte *in_stack_000004c8;
  undefined8 *in_stack_000004d0;
  undefined4 in_stack_000004d8;
  char *in_stack_000004e0;
  byte *in_stack_000004e8;
  byte *in_stack_000004f0;
  ulonglong in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  byte *in_stack_00000568;
  undefined8 *in_stack_00000570;
  byte *in_stack_00000578;
  byte *in_stack_00000580;
  longlong in_stack_00000588;
  undefined1 *in_stack_00000590;
  undefined1 *in_stack_00000598;
  ulonglong in_stack_000005a0;
  ulonglong in_stack_000005a8;
  undefined4 in_stack_000005b0;
  undefined4 in_stack_000005b4;
  ulonglong in_stack_000005b8;
  ulonglong in_stack_000005c0;
  ulonglong in_stack_000005c8;
  ulonglong in_stack_000005d0;
  ulonglong in_stack_000005d8;
  ulonglong in_stack_000005e0;
  ulonglong in_stack_000005e8;
  ulonglong in_stack_000005f0;
  byte *in_stack_000005f8;
  undefined8 *in_stack_00000600;
  undefined2 *in_stack_00000608;
  undefined8 in_stack_00000618;
  uint in_stack_00000620;
  longlong *in_stack_00000628;
  longlong *in_stack_00000638;
  byte *pbVar97;
  int in_stack_00000658;
  int in_stack_0000065c;
  undefined8 in_stack_00000660;
  int in_stack_00000668;
  int in_stack_0000066c;
  char in_stack_00000670;
  uint in_stack_00000678;
  undefined4 in_stack_0000067c;
  longlong *in_stack_00000680;
  byte *in_stack_00000688;
  byte in_stack_000006ae;
  byte in_stack_000006bc;
  undefined1 auStack_86 [6];
  undefined1 *puStack_80;
  undefined1 auStack_78 [32];
  undefined4 uVar98;
  undefined8 in_stack_ffffffffffffffa8;
  ulonglong uVar99;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined1 *puStack_38;
  undefined *puStack_30;
  undefined1 *puStack_28;
  undefined8 uStack_20;
  
  uVar95 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar40 = (undefined4)in_XMM1_Qa;
  puVar65 = &stack0xffffffffffffffe8;
  ppuVar66 = (undefined1 **)&stack0xffffffffffffffe8;
  puVar73 = &stack0xffffffffffffffe8;
  puVar76 = &stack0xffffffffffffffe8;
  puVar79 = &stack0xffffffffffffffe8;
  puVar81 = &stack0xffffffffffffffe8;
  puVar84 = &stack0xffffffffffffffe8;
  puVar85 = &stack0xffffffffffffffe8;
  puVar74 = &stack0xffffffffffffffe8;
  puVar78 = &stack0xffffffffffffffe8;
  puVar82 = &stack0xffffffffffffffe8;
  puVar86 = &stack0xffffffffffffffe8;
  puVar77 = &stack0xffffffffffffffe8;
  puVar80 = &stack0xffffffffffffffe8;
  puVar87 = &stack0xffffffffffffffe8;
  puVar62 = auStack_78;
  puVar60 = auStack_78;
  puVar63 = auStack_78;
  puVar61 = auStack_78;
  puVar57 = auStack_78;
  puVar58 = auStack_78;
  puVar56 = auStack_78;
  puVar64 = auStack_78;
  puVar53 = auStack_78;
  puVar50 = auStack_78;
  puVar45 = auStack_78;
  puVar48 = auStack_78;
  puVar44 = auStack_78;
  puVar54 = auStack_78;
  puVar55 = auStack_78;
  uStack_20 = 0xfffffffffffffffe;
  uVar27 = (ulonglong)*(int *)(&UNK_142e4b428 + (ulonglong)*param_2 * 4);
  bVar93 = 0xfffffffebd1b4bd7 < uVar27;
  puVar28 = (ulonglong *)(&UNK_142e4b428 + uVar27);
  bVar94 = puVar28 == (ulonglong *)0x0;
  bVar24 = (byte)puVar28;
  uVar26 = (uint)puVar28;
  uVar34 = (undefined7)((ulonglong)puVar28 >> 8);
  bVar35 = (byte)UNRECOVERED_JUMPTABLE;
  uVar98 = (undefined4)in_stack_ffffffffffffffa8;
  ppuVar49 = (undefined1 **)auStack_78;
  puVar47 = auStack_78;
  puVar20 = auStack_78;
  puVar51 = auStack_78;
  puVar52 = auStack_78;
  puVar46 = auStack_78;
  ppuVar59 = (undefined1 **)auStack_78;
  puVar21 = auStack_78;
  puVar22 = auStack_78;
  puVar83 = &stack0xffffffffffffffe8;
  puVar75 = &stack0xffffffffffffffe8;
  puVar67 = &stack0xffffffffffffffe8;
  puVar68 = &stack0xffffffffffffffe8;
  puVar69 = &stack0xffffffffffffffe8;
  puVar70 = &stack0xffffffffffffffe8;
  puVar71 = &stack0xffffffffffffffe8;
  puVar72 = &stack0xffffffffffffffe8;
  puVar23 = &stack0xffffffffffffffe8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  default:
    goto code_r0x000140150417;
  case 1:
    goto code_r0x000140150411;
  case 2:
    uVar26 = *(uint *)(param_2 + 0xc);
    if (0xe < uVar26) {
      return (ulonglong *)(ulonglong)uVar26;
    }
    if ((0x138aU >> (uVar26 & 0x1f) & 1) != 0) {
      puVar28 = *(ulonglong **)(UNRECOVERED_JUMPTABLE + 8);
      *(undefined1 *)puVar28 = 1;
      return puVar28;
    }
    if ((0x60U >> (uVar26 & 0x1f) & 1) != 0) {
      **(undefined1 **)(UNRECOVERED_JUMPTABLE + 8) = 1;
      puVar28 = *(ulonglong **)(UNRECOVERED_JUMPTABLE + 0x10);
      uVar27 = *(ulonglong *)(param_2 + 0x10);
      *puVar28 = CONCAT44(-(uint)(0 < (int)(uVar27 >> 0x20)),-(uint)(0 < (int)uVar27)) & uVar27;
      return puVar28;
    }
    if (uVar26 != 0xe) {
      return (ulonglong *)(ulonglong)uVar26;
    }
code_r0x000140150411:
    puVar28 = *(ulonglong **)UNRECOVERED_JUMPTABLE;
    *(undefined1 *)puVar28 = 0;
    return puVar28;
  case 5:
  case 10:
    if (*(longlong *)(param_2 + 0x10) == 0) {
      return (ulonglong *)0x0;
    }
    uVar32 = *(undefined8 *)(param_2 + 0x18);
    uVar33 = GetProcessHeap(uVar32,*(longlong *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)HeapFree(uVar33,0,uVar32);
    return puVar28;
  case 6:
    puVar2 = *(undefined4 **)(UNRECOVERED_JUMPTABLE + 0x18);
    *puVar2 = 1;
    uVar27 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 0x20);
    uVar32 = *(undefined8 *)(param_2 + 0x10);
    iVar36 = (int)uVar32;
    puVar2[1] = iVar36;
    iVar96 = (int)((ulonglong)uVar32 >> 0x20);
    puVar2[2] = iVar96;
    uStack_50 = CONCAT44((float)iVar96,(float)iVar36);
    uVar99 = CONCAT71((int7)(CONCAT44(4,uVar98) >> 8),3);
    lVar37 = *(longlong *)(uVar27 + 0xa0);
    if (lVar37 == *(longlong *)(uVar27 + 0x90)) {
      puStack_80 = (undefined1 *)0x1401502e8;
      pdb_142d7f080(uVar27 + 0x90);
    }
    goto code_r0x00014015039a;
  case 7:
    puStack_80 = (undefined1 *)0x14015035c;
    puVar28 = (ulonglong *)pdb_1406ccf40(param_2[2]);
    if ((short)puVar28 == 6) {
      return puVar28;
    }
    uVar27 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 0x20);
    uStack_50._0_4_ = CONCAT22((short)param_2,(short)puVar28);
    uVar99 = CONCAT71((int7)(CONCAT44(5,uVar98) >> 8),3);
    lVar37 = *(longlong *)(uVar27 + 0xa0);
    if (lVar37 == *(longlong *)(uVar27 + 0x90)) {
      puStack_80 = (undefined1 *)0x140150399;
      pdb_142d7f080(uVar27 + 0x90);
    }
    goto code_r0x00014015039a;
  case 8:
    puStack_80 = (undefined1 *)0x14015024b;
    puVar28 = (ulonglong *)pdb_1406ccf40(param_2[2]);
    if ((short)puVar28 == 6) {
      return puVar28;
    }
    uVar27 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 0x20);
    uStack_50._0_4_ = CONCAT22((short)param_2,(short)puVar28);
    uVar99 = CONCAT71((int7)(CONCAT44(6,uVar98) >> 8),3);
    lVar37 = *(longlong *)(uVar27 + 0xa0);
    if (lVar37 == *(longlong *)(uVar27 + 0x90)) {
      puStack_80 = (undefined1 *)0x14015028c;
      pdb_142d7f080(uVar27 + 0x90);
    }
    goto code_r0x00014015039a;
  case 9:
    uVar27 = *(ulonglong *)(UNRECOVERED_JUMPTABLE + 0x20);
    uStack_50 = *(ulonglong *)(param_2 + 0x18);
    uVar99 = CONCAT71((uint7)((ulonglong)in_stack_ffffffffffffffa8 >> 8) & 0xffffff,3);
    lVar37 = *(longlong *)(uVar27 + 0xa0);
    if (lVar37 == *(longlong *)(uVar27 + 0x90)) {
      puStack_80 = (undefined1 *)0x14015034b;
      pdb_142d7f080(uVar27 + 0x90);
    }
code_r0x00014015039a:
    puVar28 = *(ulonglong **)(uVar27 + 0x98);
    puVar28[lVar37 * 7 + 6] = (ulonglong)puStack_28;
    puVar28[lVar37 * 7 + 4] = (ulonglong)puStack_38;
    (puVar28 + lVar37 * 7 + 4)[1] = (ulonglong)puStack_30;
    puVar28[lVar37 * 7 + 2] = uStack_48;
    (puVar28 + lVar37 * 7 + 2)[1] = uStack_40;
    puVar28[lVar37 * 7] = uVar99;
    (puVar28 + lVar37 * 7)[1] = uStack_50;
    *(longlong *)(uVar27 + 0xa0) = lVar37 + 1;
code_r0x000140150417:
    return puVar28;
  case 0xb:
    break;
  case 0xc:
    do {
      while( true ) {
        puStack_80 = (undefined1 *)0x140150a4b;
        param_2 = unaff_RBX;
        pdb_1406d0de0();
        if (in_stack_00000258 != '\v') break;
        if ((in_stack_0000066c != 0 && in_stack_00000668 != 0) &&
           (in_stack_00000658 != in_stack_0000066c || in_stack_0000065c != in_stack_00000668)) {
          puStack_80 = (undefined1 *)0x140150811;
          pdb_1406eab50();
          param_2 = &stack0x00000280;
          puStack_80 = (undefined1 *)0x14015087f;
          pdb_1406d4750(&stack0x00000540,param_2,in_stack_00000668,in_stack_0000066c);
          in_stack_000006bc = 1;
          in_stack_00000658 = in_stack_0000066c;
          in_stack_0000065c = in_stack_00000668;
        }
        if (in_stack_000006bc != 0) {
          puStack_80 = (undefined1 *)0x1401508a6;
          uVar32 = pdb_140f3c9d0();
          in_stack_00000580 = (byte *)CONCAT44((int)((ulonglong)in_stack_00000580 >> 0x20),4);
          uVar40 = SUB84(param_2,0);
          in_stack_00000578 = (byte *)CONCAT71((int7)((ulonglong)in_stack_00000578 >> 8),4);
          if (in_stack_00000380 == CONCAT44(in_stack_00000374,in_stack_00000370)) {
            puStack_80 = (undefined1 *)0x1401508ec;
            pdb_142d7f080(&stack0x00000370);
          }
          lVar37 = in_stack_00000380 * 0x38;
          param_2 = (byte *)0x0;
          *(undefined8 *)(in_stack_00000378 + 0x30 + lVar37) = 0;
          puVar28 = (ulonglong *)(in_stack_00000378 + 0x20 + lVar37);
          *puVar28 = (ulonglong)in_stack_00000598;
          puVar28[1] = in_stack_000005a0;
          puVar2 = (undefined4 *)(in_stack_00000378 + 0x10 + lVar37);
          *puVar2 = (int)uVar32;
          puVar2[1] = (int)((ulonglong)uVar32 >> 0x20);
          puVar2[2] = uVar40;
          puVar2[3] = (int)((ulonglong)in_stack_00000590 >> 0x20);
          *(undefined8 *)(in_stack_00000378 + lVar37) = in_stack_00000578;
          ((undefined8 *)(in_stack_00000378 + lVar37))[1] = in_stack_00000580;
          in_stack_00000380 = in_stack_00000380 + 1;
        }
        if ((in_stack_0000066c != 0 && in_stack_00000668 != 0) &&
           (in_stack_00000398 != 0 || in_stack_00000380 != 0)) {
          if ((int)((ulonglong)in_stack_00000618 >> 0x20) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001401509a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar28 = (ulonglong *)
                      (*(code *)(&UNK_142e4b454 +
                                *(int *)(&UNK_142e4b454 +
                                        CONCAT44(in_stack_0000067c,in_stack_00000678) * 4)))
                                (&UNK_142e4b454 +
                                 *(int *)(&UNK_142e4b454 +
                                         CONCAT44(in_stack_0000067c,in_stack_00000678) * 4));
            return puVar28;
          }
          goto LAB_140150a67;
        }
LAB_140151157:
        if (in_stack_000003d8 != in_stack_00000670) {
          puStack_80 = (undefined1 *)0x140151181;
          pdb_1406d0e60();
          in_stack_00000670 = in_stack_000003d8;
          if (SBORROW8(0,(longlong)in_stack_00000578)) {
            puStack_80 = (undefined1 *)0x1401511ae;
            pdb_1406d0ec0();
            bVar93 = in_stack_00000688 != (byte *)0x0;
            param_2 = in_stack_00000578;
            in_stack_00000688 = in_stack_00000580;
            if (bVar93) {
              puStack_80 = (undefined1 *)0x1401511d7;
              pdb_1406d1b70();
              param_2 = in_stack_00000578;
            }
          }
          else {
            param_2 = in_stack_00000578;
            if (in_stack_00000578 != (byte *)0x0) {
              puStack_80 = (undefined1 *)0x1401511f8;
              pub_1406abac0(in_stack_00000580,(ulonglong)in_stack_00000578,1);
              param_2 = in_stack_00000578;
            }
          }
        }
        if ((in_stack_000006ae & 1) == 0) {
          puVar28 = (ulonglong *)0x2;
          puVar70 = &stack0xffffffffffffffe8;
          goto code_r0x000140151202;
        }
        in_stack_00000578 = &stack0x000006ae;
        in_stack_00000580 = &stack0x000006bc;
        in_stack_00000590 = &stack0x0000061c;
        in_stack_00000598 = &stack0x000002e0;
        puStack_80 = (undefined1 *)0x140150a0f;
        uVar32 = pdb_1406d07b0(&stack0x000003e0,in_stack_00000660,5);
        if (in_stack_000003e0 != '\v') {
          puStack_80 = (undefined1 *)0x140150a28;
          pdb_1401501f0(uVar32,&stack0x000003e0);
        }
        puStack_80 = (undefined1 *)0x140150a35;
        pdb_1406d0830(in_stack_00000660);
      }
      puStack_80 = (undefined1 *)0x140150a64;
      pdb_1401501f0();
    } while( true );
  case 0xd:
    return puVar28;
  case 0xe:
    break;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    break;
  case 0x11:
    return puVar28;
  case 0x12:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
  case 0x1c:
    break;
  case 0x13:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    break;
  case 0x14:
    return puVar28;
  case 0x15:
    return puVar28;
  case 0x16:
    goto LAB_140150a67;
  case 0x17:
    return (ulonglong *)
           CONCAT62((int6)((ulonglong)puVar28 >> 0x10),
                    CONCAT11(((longlong)puVar28 < 0) << 7 | bVar94 << 6 | in_AF << 4 |
                             ((POPCOUNT((ulonglong)puVar28 & 0xff) & 1U) == 0) << 2 | 2U | bVar93,
                             bVar24));
  case 0x18:
    return puVar28;
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
    return puVar28;
  case 0x1b:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
LAB_140150a67:
                    /* WARNING: Could not recover jumptable at 0x000140150a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)
              (*(code *)(&UNK_142e4b454 +
                        *(int *)(&UNK_142e4b454 + CONCAT44(in_stack_0000067c,in_stack_00000678) * 4)
                        ))(&UNK_142e4b454 +
                           *(int *)(&UNK_142e4b454 +
                                   CONCAT44(in_stack_0000067c,in_stack_00000678) * 4));
    return puVar28;
  case 0x1d:
    return puVar28;
  case 0x1e:
    break;
  case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
    break;
  case 0x21:
    goto code_r0x0001401510e0;
  case 0x22:
    (&UNK_142e4b461)[uVar27] = (&UNK_142e4b461)[uVar27] + bVar35;
    uVar27 = (ulonglong)((int)CONCAT71(uVar34,bVar24 + 0xb8) + 1);
    goto code_r0x000140150f83;
  case 0x23:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar47 = auStack_78;
    puVar69 = &stack0xffffffffffffffe8;
    goto code_r0x000140150fbe;
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
    goto code_r0x000140150fa6;
  case 0x26:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    (&UNK_142e4b3b5)[uVar27] = (&UNK_142e4b3b5)[uVar27] + bVar35;
    goto code_r0x0001401510e0;
  case 0x27:
    return (ulonglong *)(ulonglong)(uint)(int)(short)puVar28;
  case 0x28:
    return puVar28;
  case 0x29:
    goto code_r0x00014015103d;
  case 0x2a:
    goto code_r0x000140150fbe;
  case 0x2b:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
code_r0x00014015103d:
    goto code_r0x0001401510e0;
  case 0x2c:
    goto code_r0x000140150f9a;
  case 0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2e:
    goto code_r0x0001401510e0;
  case 0x2f:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)unaff_ESI;
    puVar22 = auStack_78;
    puVar67 = &stack0xffffffffffffffe8;
    goto code_r0x000140150f9a;
  case 0x30:
    goto code_r0x000140150fd6;
  case 0x31:
    pbVar38 = &UNK_142e4b3b1 + uVar27;
    *pbVar38 = *pbVar38 >> 5 | *pbVar38 << 3;
    ppuVar66 = &puStack_80;
    puVar45 = auStack_86;
    puStack_80 = &stack0xffffffffffffffe8;
    goto code_r0x000140150f8a;
  case 0x32:
    goto code_r0x000140150ff1;
  case 0x33:
    goto code_r0x0001401510e0;
  case 0x34:
    return (ulonglong *)((ulonglong)unaff_RDI & 0xffffffff);
  case 0x35:
code_r0x0001401510e0:
    in_stack_00000578 = (byte *)0x0;
    in_stack_00000580 = (byte *)0x8;
    param_2 = &stack0x00000058;
    puStack_80 = (undefined1 *)0x140151147;
    cVar25 = pdb_1402b0120(&stack0x00000540,param_2,&stack0x00000280,&stack0x00000408);
    if (cVar25 == '\x04') {
      in_stack_000006bc = 0;
      goto LAB_140151157;
    }
                    /* WARNING: Subroutine does not return */
    puStack_80 = (undefined1 *)0x140151495;
    pdb_142dc8170(&UNK_142e4ab98,0x2b,&stack0x00000638,&UNK_142e4abc8);
  case 0x36:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
    puStack_28 = &stack0x00000645;
    puStack_30 = &UNK_142e4b1a0;
    puStack_38 = &stack0x000005f8;
    puStack_80 = (undefined1 *)0x1401522f1;
    pdb_140529230();
    uVar9 = unaff_R15[0xe];
    uVar10 = unaff_R15[0xf];
    uVar11 = unaff_R15[0xc];
    uVar12 = unaff_R15[0xd];
    uVar13 = unaff_R15[10];
    uVar14 = unaff_R15[0xb];
    uVar15 = unaff_R15[8];
    uVar41 = unaff_R15[9];
    pcVar30 = (char *)*unaff_R15;
    pbVar38 = (byte *)unaff_R15[1];
    pbVar39 = (byte *)unaff_R15[2];
    uVar17 = unaff_R15[3];
    uVar27 = unaff_R15[4];
    uVar99 = unaff_R15[5];
    uVar89 = unaff_R15[6];
    uVar16 = unaff_R15[7];
    pbVar31 = in_stack_000004e8;
    for (pbVar97 = (byte *)0x0; in_stack_000004f0 != pbVar97; pbVar97 = pbVar97 + 1) {
      puStack_80 = (undefined1 *)0x1401523a3;
      pdb_1404b4350(pbVar31);
      pbVar31 = pbVar31 + 0x38;
    }
    if (in_stack_000004e0 != (char *)0x0) {
      puStack_80 = (undefined1 *)0x1401523d2;
      pub_1406abac0(in_stack_000004e8,(longlong)in_stack_000004e0 * 0x38,8);
    }
    if (pcVar30 != (char *)0x8000000000000021) {
      pcVar90 = pcVar30 + 0x7fffffffffffffe2;
      if (pcVar30 < (char *)0x800000000000001e) {
        pcVar90 = (char *)0x1;
      }
      if (pcVar90 == (char *)0x0) {
        pbVar31 = (byte *)0x8;
        pbVar97 = (byte *)0x0;
        uVar91 = 0;
      }
      else {
        pbVar31 = pbVar39;
        pbVar97 = pbVar38;
        uVar91 = uVar17;
        if (pcVar90 == (char *)0x1) {
          unaff_R15[0xb] = uVar9;
          unaff_R15[0xc] = uVar10;
          unaff_R15[9] = uVar11;
          unaff_R15[10] = uVar12;
          *(int *)(unaff_R15 + 7) = (int)uVar13;
          *(int *)((longlong)unaff_R15 + 0x3c) = (int)(uVar13 >> 0x20);
          *(int *)(unaff_R15 + 8) = (int)uVar14;
          *(int *)((longlong)unaff_R15 + 0x44) = (int)(uVar14 >> 0x20);
          unaff_R15[5] = uVar15;
          unaff_R15[6] = uVar41;
          unaff_R15[3] = uVar89;
          unaff_R15[4] = uVar16;
          unaff_R15[1] = uVar27;
          unaff_R15[2] = uVar99;
          puStack_80 = (undefined1 *)0x14015249e;
          pdb_14007ee60();
          puStack_80 = (undefined1 *)0x1401524ad;
          pbVar31 = pub_1406abab0(0x80,8);
          if (pbVar31 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            puStack_80 = (undefined1 *)0x140152bbb;
            pdb_142dc7e11(8,0x80);
          }
          *(undefined8 *)(pbVar31 + 0x70) = in_stack_00000550;
          *(undefined8 *)(pbVar31 + 0x78) = in_stack_00000558;
          *(undefined8 *)(pbVar31 + 0x60) = in_stack_00000540;
          *(undefined8 *)(pbVar31 + 0x68) = in_stack_00000548;
          *(undefined8 *)(pbVar31 + 0x50) = in_stack_00000530;
          *(undefined8 *)(pbVar31 + 0x58) = in_stack_00000538;
          *(undefined8 *)(pbVar31 + 0x40) = in_stack_00000520;
          *(undefined8 *)(pbVar31 + 0x48) = in_stack_00000528;
          *(undefined8 *)(pbVar31 + 0x30) = in_stack_00000510;
          *(undefined8 *)(pbVar31 + 0x38) = in_stack_00000518;
          *(undefined8 *)(pbVar31 + 0x20) = in_stack_00000500;
          *(undefined8 *)(pbVar31 + 0x28) = in_stack_00000508;
          *(int *)(pbVar31 + 0x10) = (int)pbVar39;
          *(int *)(pbVar31 + 0x14) = (int)((ulonglong)pbVar39 >> 0x20);
          *(int *)(pbVar31 + 0x18) = (int)uVar17;
          *(int *)(pbVar31 + 0x1c) = (int)(uVar17 >> 0x20);
          *(char **)pbVar31 = pcVar30;
          *(byte **)(pbVar31 + 8) = pbVar38;
          pbVar97 = (byte *)0x1;
          uVar91 = 1;
          in_stack_000004e0 = pcVar30;
          in_stack_000004e8 = pbVar38;
          in_stack_000004f0 = pbVar39;
          in_stack_000004f8 = uVar17;
        }
      }
      uVar91 = uVar91 * 0x80;
      pbVar38 = pbVar31 + uVar91;
      pbVar39 = pbVar31;
      pbVar43 = pbVar31;
      while (pbVar42 = pbVar39, pbVar39 != pbVar38) {
        uVar91 = uVar91 - 0x80;
        pbVar43 = pbVar43 + 0x80;
        pbVar42 = pbVar39 + 0x80;
        pcVar30 = *(char **)pbVar39;
        if (pcVar30 == unaff_R13) break;
        unaff_R15[0xc] = *(ulonglong *)(pbVar39 + 0x78);
        uVar27 = *(ulonglong *)(pbVar39 + 0x70);
        unaff_R15[10] = *(ulonglong *)(pbVar39 + 0x68);
        unaff_R15[0xb] = uVar27;
        uVar27 = *(ulonglong *)(pbVar39 + 0x60);
        unaff_R15[8] = *(ulonglong *)(pbVar39 + 0x58);
        unaff_R15[9] = uVar27;
        uVar27 = *(ulonglong *)(pbVar39 + 0x50);
        unaff_R15[6] = *(ulonglong *)(pbVar39 + 0x48);
        unaff_R15[7] = uVar27;
        uVar9 = *(ulonglong *)(pbVar39 + 8);
        uVar10 = *(ulonglong *)(pbVar39 + 0x10);
        uVar5 = *(undefined4 *)(pbVar39 + 0x18);
        uVar6 = *(undefined4 *)(pbVar39 + 0x1c);
        uVar7 = *(undefined4 *)(pbVar39 + 0x20);
        uVar8 = *(undefined4 *)(pbVar39 + 0x24);
        uVar27 = *(ulonglong *)(pbVar39 + 0x28);
        uVar99 = *(ulonglong *)(pbVar39 + 0x30);
        uVar40 = *(undefined4 *)(pbVar39 + 0x3c);
        uVar95 = *(undefined4 *)(pbVar39 + 0x40);
        uVar98 = *(undefined4 *)(pbVar39 + 0x44);
        *(undefined4 *)(unaff_R15 + 4) = *(undefined4 *)(pbVar39 + 0x38);
        *(undefined4 *)((longlong)unaff_R15 + 0x24) = uVar40;
        *(undefined4 *)(unaff_R15 + 5) = uVar95;
        *(undefined4 *)((longlong)unaff_R15 + 0x2c) = uVar98;
        unaff_R15[2] = uVar27;
        unaff_R15[3] = uVar99;
        *(undefined4 *)unaff_R15 = uVar5;
        *(undefined4 *)((longlong)unaff_R15 + 4) = uVar6;
        *(undefined4 *)(unaff_R15 + 1) = uVar7;
        *(undefined4 *)((longlong)unaff_R15 + 0xc) = uVar8;
        unaff_R15[-2] = uVar9;
        unaff_R15[-1] = uVar10;
        if (pcVar30 < (char *)0x8000000000000016) {
          pcVar90 = pcVar30;
          if (pcVar30 <= unaff_RDI) {
            pcVar90 = unaff_RDI;
          }
          if (((ulonglong)pcVar90 & 0x7fffffffffffffff) == 1) {
            *in_stack_00000608 = 0;
            puStack_80 = (undefined1 *)0x1401529b9;
            pdb_14014fab0(&stack0x000004e0);
            for (uVar27 = 0; uVar91 >> 7 != uVar27; uVar27 = uVar27 + 1) {
              puStack_80 = (undefined1 *)0x140152a09;
              pdb_14049aed0(pbVar43);
              pbVar43 = pbVar43 + 0x80;
            }
            if (pbVar97 != (byte *)0x0) {
              puStack_80 = (undefined1 *)0x140152a31;
              pub_1406abac0(pbVar31,(longlong)pbVar97 << 7,8);
            }
            if (0x14 < in_stack_00000620) {
              LOCK();
              *in_stack_00000628 = *in_stack_00000628 + -1;
              UNLOCK();
              if (*in_stack_00000628 == 0) {
                puStack_80 = (undefined1 *)0x140152a53;
                pdb_1406cd7d0(&stack0x00000628);
              }
            }
            puStack_80 = (undefined1 *)0x140152a60;
            pdb_1404dc890(&stack0x00000230);
            puStack_80 = (undefined1 *)0x140152a74;
            pdb_1404c94d0(&stack0x000001d0);
            puStack_80 = (undefined1 *)0x140152a85;
            pdb_1404ddd40(&puStack_38);
            if ((code *)*in_stack_000004d0 != (code *)0x0) {
              puStack_80 = (undefined1 *)0x140152ab3;
              (*(code *)*in_stack_000004d0)(in_stack_000004c8);
            }
            if (in_stack_000004d0[1] != 0) {
              puStack_80 = (undefined1 *)0x140152ad4;
              pub_1406abac0(in_stack_000004c8,in_stack_000004d0[1],in_stack_000004d0[2]);
            }
            if (in_stack_000005f8 != (byte *)0x0) {
              if ((code *)*in_stack_00000600 != (code *)0x0) {
                puStack_80 = (undefined1 *)0x140152b06;
                (*(code *)*in_stack_00000600)(in_stack_000005f8);
              }
              if (in_stack_00000600[1] != 0) {
                puStack_80 = (undefined1 *)0x140152b27;
                pub_1406abac0(in_stack_000005f8,in_stack_00000600[1],in_stack_00000600[2]);
              }
            }
            LOCK();
            *in_stack_00000638 = *in_stack_00000638 + -1;
            UNLOCK();
            puVar79 = &stack0xffffffffffffffe8;
            if (*in_stack_00000638 == 0) {
              puStack_80 = (undefined1 *)0x140152b47;
              pdb_1406cd740(&stack0x00000638);
              puVar79 = &stack0xffffffffffffffe8;
            }
            goto LAB_140152b48;
          }
        }
        puStack_80 = (undefined1 *)0x140152623;
        pdb_14014fab0();
        pbVar39 = pbVar42;
        in_stack_000004e0 = pcVar30;
      }
      pbVar39 = pbVar42;
      for (uVar27 = 0; (ulonglong)((longlong)pbVar38 - (longlong)pbVar42) >> 7 != uVar27;
          uVar27 = uVar27 + 1) {
        puStack_80 = (undefined1 *)0x140152696;
        pdb_14049aed0(pbVar39);
        pbVar39 = pbVar39 + 0x80;
      }
      if (pbVar97 != (byte *)0x0) {
        puStack_80 = (undefined1 *)0x1401526be;
        pub_1406abac0(pbVar31,(longlong)pbVar97 << 7,8);
      }
    }
    puStack_80 = (undefined1 *)0x1401526d3;
    pdb_1406beb60();
    if (in_stack_000004e0 != (char *)0x800000000000000a) {
      if (in_stack_00000330 == in_stack_00000320) {
        puStack_80 = (undefined1 *)0x14015271f;
        pdb_142d7e6e0(&stack0x00000320);
      }
      puVar2 = (undefined4 *)(in_stack_00000328 + 0x10 + in_stack_00000330 * 0x20);
      *puVar2 = (int)in_stack_000004f0;
      puVar2[1] = (int)((ulonglong)in_stack_000004f0 >> 0x20);
      puVar2[2] = (int)in_stack_000004f8;
      puVar2[3] = (int)(in_stack_000004f8 >> 0x20);
      puVar3 = (undefined8 *)(in_stack_00000328 + in_stack_00000330 * 0x20);
      *puVar3 = in_stack_000004e0;
      puVar3[1] = in_stack_000004e8;
    }
    puStack_80 = (undefined1 *)0x140152768;
    cVar25 = pdb_1406beb80(&stack0x00000230);
    puVar72 = &stack0xffffffffffffffe8;
    if (cVar25 != '\x02') {
code_r0x000140152874:
      puVar47 = *(undefined1 **)(puVar79 + 0x620);
      puVar47[1] = cVar25;
      *puVar47 = 0;
      if (0x14 < *(uint *)(puVar79 + 0x638)) {
        plVar4 = *(longlong **)(puVar79 + 0x640);
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          *(undefined8 *)(puVar55 + -8) = 0x1401528a3;
          pdb_1406cd7d0(puVar79 + 0x640);
        }
      }
      *(undefined8 *)(puVar55 + -8) = 0x1401528b0;
      pdb_1404dc890(puVar79 + 0x248);
      puVar79[0x673] = 0;
      *(undefined8 *)(puVar55 + -8) = 0x1401528c4;
      pdb_1404c94d0(puVar79 + 0x1e8);
      puVar79[0x674] = 0;
      *(undefined8 *)(puVar55 + -8) = 0x1401528d5;
      pdb_1404ddd40(puVar79 + -0x20);
      *(undefined8 *)(puVar79 + 0x668) = *(undefined8 *)(puVar79 + 0x4e0);
      *(undefined8 **)(puVar79 + 0x660) = *(undefined8 **)(puVar79 + 0x4e8);
      pcVar88 = (code *)**(undefined8 **)(puVar79 + 0x4e8);
      if (pcVar88 != (code *)0x0) {
        uVar32 = *(undefined8 *)(puVar79 + 0x668);
        *(undefined8 *)(puVar55 + -8) = 0x140152903;
        (*pcVar88)(uVar32);
      }
      pbVar38 = *(byte **)(puVar79 + 0x668);
      uVar27 = *(ulonglong *)(*(longlong *)(puVar79 + 0x660) + 8);
      if (uVar27 != 0) {
        uVar99 = *(ulonglong *)(*(longlong *)(puVar79 + 0x660) + 0x10);
        *(undefined8 *)(puVar55 + -8) = 0x140152924;
        pub_1406abac0(pbVar38,uVar27,uVar99);
      }
      *(longlong *)(puVar79 + 0x668) = *(longlong *)(puVar79 + 0x610);
      if (*(longlong *)(puVar79 + 0x610) != 0) {
        *(undefined8 **)(puVar79 + 0x660) = *(undefined8 **)(puVar79 + 0x618);
        pcVar88 = (code *)**(undefined8 **)(puVar79 + 0x618);
        if (pcVar88 != (code *)0x0) {
          uVar32 = *(undefined8 *)(puVar79 + 0x668);
          *(undefined8 *)(puVar55 + -8) = 0x140152956;
          (*pcVar88)(uVar32);
        }
        uVar27 = *(ulonglong *)(*(longlong *)(puVar79 + 0x660) + 8);
        if (uVar27 != 0) {
          uVar99 = *(ulonglong *)(*(longlong *)(puVar79 + 0x660) + 0x10);
          pbVar38 = *(byte **)(puVar79 + 0x668);
          *(undefined8 *)(puVar55 + -8) = 0x140152977;
          pub_1406abac0(pbVar38,uVar27,uVar99);
        }
      }
      plVar4 = *(longlong **)(puVar79 + 0x650);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        puVar79[0x671] = 0;
        *(undefined8 *)(puVar55 + -8) = 0x14015299b;
        pdb_1406cd740(puVar79 + 0x650);
      }
LAB_140152b48:
      return *(ulonglong **)(puVar79 + 0x620);
    }
    do {
      do {
        uVar40 = 5000000;
        *(undefined8 *)(puVar54 + -8) = 0x14015277d;
        pdb_140f502d0(0);
        *(undefined1 **)(puVar72 + 0x4f8) = puVar72 + 0x65f;
        *(undefined1 **)(puVar72 + 0x500) = puVar72 + 0x650;
        *(undefined1 **)(puVar72 + 0x508) = puVar72 + 0x390;
        *(undefined1 **)(puVar72 + 0x510) = puVar72 + 0x4f0;
        *(undefined1 **)(puVar72 + 0x518) = puVar72 + 0x4b0;
        *(undefined1 **)(puVar72 + 0x520) = puVar72 + 0x4b8;
        *(undefined1 **)(puVar72 + 0x528) = puVar72 + 0x1e8;
        *(undefined1 **)(puVar72 + 0x530) = puVar72 + 0x65e;
        *(undefined1 **)(puVar72 + 0x538) = puVar72 + -0x20;
        *(undefined8 *)(puVar72 + 0x540) = unaff_R12;
        *(undefined1 **)(puVar72 + 0x548) = puVar72 + 0x638;
        *(undefined1 **)(puVar72 + 0x550) = puVar72 + 0x65d;
        *(undefined1 **)(puVar72 + 0x558) = puVar72 + 0x248;
        *(undefined1 **)(puVar72 + 0x560) = puVar72 + 0x65c;
        *(undefined1 **)(puVar72 + 0x568) = puVar72 + 0x498;
        *(undefined1 **)(puVar72 + 0x570) = puVar72 + 0x60c;
        *(undefined8 *)(puVar54 + -8) = 0x140152869;
        uVar27 = pdb_14010ad50();
        if ((uVar27 & 1) != 0) {
          cVar25 = '\0';
          puVar55 = puVar54;
          puVar79 = puVar72;
          goto code_r0x000140152874;
        }
        puVar20 = puVar54;
        if (puVar72[0x65f] != '\0') {
          *(undefined8 *)(puVar54 + -8) = 0x140152062;
          uVar32 = pdb_140f3c9d0();
          *(undefined8 *)(puVar72 + 0x528) = 0;
          *(undefined4 *)(puVar72 + 0x500) = 4;
          *(undefined8 *)(puVar72 + 0x508) = uVar32;
          *(undefined4 *)(puVar72 + 0x510) = uVar40;
          puVar72[0x4f8] = 4;
          unaff_RBX = *(byte **)(puVar72 + 0x330);
          if (unaff_RBX == *(byte **)(puVar72 + 800)) {
            *(undefined8 *)(puVar54 + -8) = 0x1401520a8;
            pdb_142d7f080(puVar72 + 800);
          }
          puVar28 = *(ulonglong **)(puVar72 + 0x328);
          UNRECOVERED_JUMPTABLE = (code *)((longlong)unaff_RBX * 0x38);
          (puVar28 + 6)[(longlong)unaff_RBX * 7] = *(ulonglong *)(puVar72 + 0x528);
          in_XMM0_Qa = *(undefined8 *)(puVar72 + 0x4f8);
          in_XMM0_Qb = *(undefined8 *)(puVar72 + 0x500);
          uVar40 = *(undefined4 *)(puVar72 + 0x508);
          uVar95 = *(undefined4 *)(puVar72 + 0x50c);
          in_XMM1_Dc = *(undefined4 *)(puVar72 + 0x510);
          in_XMM1_Dd = *(undefined4 *)(puVar72 + 0x514);
          param_3 = *(undefined8 *)(puVar72 + 0x518);
          in_XMM2_Qb = *(undefined8 *)(puVar72 + 0x520);
          ppuVar49 = (undefined1 **)puVar54;
          puVar71 = puVar72;
code_r0x0001401520d5:
          *(undefined8 *)((longlong)(puVar28 + 4) + (longlong)UNRECOVERED_JUMPTABLE) = param_3;
          *(undefined8 *)((code *)((longlong)(puVar28 + 4) + (longlong)UNRECOVERED_JUMPTABLE) + 8) =
               in_XMM2_Qb;
          pcVar88 = (code *)((longlong)(puVar28 + 2) + (longlong)UNRECOVERED_JUMPTABLE);
          *(undefined4 *)pcVar88 = uVar40;
          *(undefined4 *)(pcVar88 + 4) = uVar95;
          *(undefined4 *)(pcVar88 + 8) = in_XMM1_Dc;
          *(undefined4 *)(pcVar88 + 0xc) = in_XMM1_Dd;
          *(undefined8 *)((longlong)puVar28 + (longlong)UNRECOVERED_JUMPTABLE) = in_XMM0_Qa;
          *(undefined8 *)((code *)((longlong)puVar28 + (longlong)UNRECOVERED_JUMPTABLE) + 8) =
               in_XMM0_Qb;
          *(byte **)(puVar71 + 0x330) = unaff_RBX + 1;
          puVar20 = (undefined1 *)ppuVar49;
          puVar72 = puVar71;
        }
LAB_1401520ed:
        puVar54 = puVar20;
        puVar73 = puVar72;
      } while (puVar72[0x65e] != '\0');
code_r0x0001401520fa:
      puVar50 = puVar54;
      puVar72 = puVar73;
      puVar74 = puVar73;
    } while (*(longlong *)(puVar73 + 0x348) == 0 && *(longlong *)(puVar73 + 0x330) == 0);
    goto code_r0x00014015210e;
  case 0x38:
    UNRECOVERED_JUMPTABLE = (code *)((ulonglong)puVar28 & 0xffffffff);
    puVar28 = (ulonglong *)((ulonglong)&stack0xffffffffffffffe8 & 0xffffffff);
    puVar71 = (undefined1 *)(ulonglong)(uVar26 + 0x100f0000);
    cRam00000001512420d7 = (cRam00000001512420d7 - (char)puVar28) - (0xeff0ffff < uVar26);
    ppuVar49 = &puStack_80;
    *(byte *)puVar28 = (byte)*puVar28 | (byte)((ulonglong)puVar28 >> 8);
    puStack_80 = auStack_78;
    goto code_r0x0001401520d5;
  case 0x39:
    (&UNK_142e4b3ab)[uVar27] = (&UNK_142e4b3ab)[uVar27] + bVar35;
    puVar75 = (undefined1 *)0x498;
    iRam00000000000004ec = iRam00000000000004ec + unaff_ESI;
    puVar52 = auStack_78;
    goto code_r0x000140152138;
  case 0x3a:
    puVar52 = auStack_78;
    puVar75 = &stack0xffffffffffffffe8;
    goto code_r0x000140152138;
  case 0x3b:
    (&UNK_142e4b3b3)[uVar27] = (&UNK_142e4b3b3)[uVar27] + bVar35;
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar54 = auStack_78;
    goto code_r0x0001401520fa;
  case 0x3c:
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)((ulonglong)param_2 >> 8));
    UNRECOVERED_JUMPTABLE[0x41085] = UNRECOVERED_JUMPTABLE[0x41085];
    goto code_r0x00014015215e;
  case 0x3d:
    puVar1 = (uint *)(&UNK_142e4b3b5 + uVar27);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    puVar77 = &stack0xffffffffffffffe8;
    goto code_r0x00014015215e;
  case 0x3e:
    goto code_r0x000140152138;
  case 0x3f:
    pbVar38 = &UNK_142e4b3b5 + uVar27;
    bVar24 = *pbVar38;
    *pbVar38 = *pbVar38 + bVar35;
    puVar28 = (ulonglong *)(ulonglong)(uVar26 + 0x2cf936f + (uint)CARRY1(bVar24,bVar35));
    goto code_r0x000140152181;
  case 0x40:
    goto code_r0x00014015210e;
  case 0x41:
    (&UNK_142e4b3b3)[uVar27] = (&UNK_142e4b3b3)[uVar27] + bVar35;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x42:
    goto LAB_1401520ed;
  case 0x43:
    uVar26 = uVar26 + (int)*puVar28;
    *unaff_RDI = *unaff_RDI + bVar35;
    *(char *)(ulonglong)uVar26 = *(char *)(ulonglong)uVar26 + (char)uVar26;
    puVar50 = auStack_78;
    puVar74 = &stack0xffffffffffffffe8;
code_r0x00014015210e:
    bVar94 = *(longlong *)(puVar74 + 0x498) == 1;
    puVar51 = puVar50;
    puVar23 = puVar74;
code_r0x000140152126:
    puVar75 = puVar23;
    puVar52 = puVar51;
    if (!bVar94) {
      puVar28 = (ulonglong *)0x1;
      puVar78 = puVar75;
code_r0x000140152181:
      *(int *)(puVar78 + 0x410) = (int)puVar28;
      param_2 = &UNK_142e4b504;
      uVar27 = (ulonglong)*(int *)(&UNK_142e4b504 + *(longlong *)(puVar78 + 0x638) * 4);
code_r0x000140152199:
                    /* WARNING: Could not recover jumptable at 0x0001401521a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ulonglong *)(*(code *)(param_2 + uVar27))(param_2 + uVar27);
      return puVar28;
    }
    goto code_r0x000140152138;
  case 0x44:
    return (ulonglong *)((ulonglong)unaff_RBX & 0xffffffff);
  case 0x45:
    puVar28 = (ulonglong *)CONCAT71(uVar34,bVar24 + 8);
    ppuVar49 = (undefined1 **)auStack_78;
    puVar71 = &stack0xffffffffffffffe8;
    goto code_r0x0001401520d5;
  case 0x46:
    goto code_r0x000140152126;
  case 0x47:
    goto code_r0x0001401520d5;
  case 0x48:
    pbVar38 = (byte *)(uVar27 + 0xc7f5c41b);
    bVar93 = CARRY1(*pbVar38,(byte)param_2);
    *pbVar38 = *pbVar38 + (byte)param_2;
  case 0x4b:
    cVar25 = bVar24 + 4 + bVar93;
    pcVar30 = (char *)CONCAT71(uVar34,cVar25);
    *pcVar30 = *pcVar30 + cVar25;
    puVar76 = &stack0xffffffffffffffe8;
    goto code_r0x00014015214e;
  case 0x49:
    uVar40 = in_stack_00000490;
    if (UNRECOVERED_JUMPTABLE == (code *)0x1 || !bVar94) {
      *(uint *)puVar28 = (int)*puVar28 + uVar26;
      *(byte *)puVar28 = (byte)*puVar28 + bVar24;
      puVar78 = &stack0xffffffffffffffe8;
      goto code_r0x000140152181;
    }
    goto code_r0x000140152140;
  case 0x4a:
    uVar27 = (ulonglong)*(uint *)(param_2 + (longlong)puVar28 * 4);
    goto code_r0x000140152199;
  case 0x4c:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar77 = &stack0xffffffffffffffe8;
    goto code_r0x00014015215e;
  case 0x4d:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    goto code_r0x000140153a00;
  case 0x4e:
    uVar26 = uVar26 + 0x40000;
    *(char *)(ulonglong)uVar26 = *(char *)(ulonglong)uVar26 + (char)uVar26;
    goto code_r0x00014015391d;
  case 0x4f:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    goto LAB_140153969;
  case 0x50:
    ppuVar59 = &puStack_80;
    *(byte *)puVar28 = (byte)*puVar28 | (byte)((ulonglong)puVar28 >> 8);
    puVar83 = &stack0xffffffffffffffe8;
    puStack_80 = auStack_78;
    goto code_r0x00014015398e;
  case 0x51:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    goto code_r0x00014015395c;
  case 0x52:
    uVar27 = (ulonglong)in_stack_00000370;
    puVar84 = &stack0xffffffffffffffe8;
    goto code_r0x0001401539c1;
  case 0x53:
    cVar25 = (bVar24 - 4) - bVar93;
    pcVar30 = (char *)CONCAT71(uVar34,cVar25);
    *pcVar30 = *pcVar30 + cVar25;
    puVar62 = auStack_78;
    puVar85 = &stack0xffffffffffffffe8;
    goto code_r0x0001401539ce;
  case 0x54:
    *(uint *)((longlong)puVar28 + (longlong)UNRECOVERED_JUMPTABLE) =
         *(int *)((longlong)puVar28 + (longlong)UNRECOVERED_JUMPTABLE) + uVar26 + (uint)bVar93;
    ppuVar59 = (undefined1 **)auStack_78;
    puVar83 = &stack0xffffffffffffffe8;
    goto code_r0x00014015398e;
  case 0x55:
    puVar64 = auStack_78;
    puVar87 = &stack0xffffffffffffffe8;
    uVar40 = in_stack_000004d8;
    goto code_r0x000140153a00;
  case 0x56:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar58 = auStack_78;
    puVar82 = &stack0xffffffffffffffe8;
    goto LAB_140153969;
  case 0x57:
    *(byte *)((longlong)puVar28 * 2) = *(byte *)((longlong)puVar28 * 2) & bVar24;
    goto code_r0x0001401539e8;
  case 0x58:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
    puVar28 = (ulonglong *)(ulonglong)(uVar26 + (int)*puVar28);
    pcVar30 = (char *)((longlong)puVar28 + 0x6b);
    *pcVar30 = *pcVar30 + bVar35;
    return puVar28;
  case 0x5a:
    puVar62 = auStack_78;
    puVar85 = &stack0xffffffffffffffe8;
    goto code_r0x0001401539ce;
  case 0x5b:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar56 = auStack_78;
    puVar80 = &stack0xffffffffffffffe8;
    goto code_r0x00014015391d;
  case 0x5c:
    goto code_r0x00014015398e;
  case 0x5d:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar56 = auStack_78;
    puVar80 = &stack0xffffffffffffffe8;
code_r0x00014015391d:
    do {
      uVar40 = SUB84(param_2,0);
      *(undefined8 *)(puVar56 + -8) = 0x140153922;
      uVar32 = pdb_140f3c9d0();
      *(undefined8 *)(puVar80 + 0x570) = 0;
      *(undefined4 *)(puVar80 + 0x548) = 4;
      *(undefined8 *)(puVar80 + 0x550) = uVar32;
      *(undefined4 *)(puVar80 + 0x558) = uVar40;
      puVar80[0x540] = 4;
      unaff_RBX = *(byte **)(puVar80 + 0x370);
      puVar58 = puVar56;
      puVar57 = puVar56;
      puVar81 = puVar80;
      puVar82 = puVar80;
      if (unaff_RBX == *(byte **)(puVar80 + 0x360)) {
code_r0x00014015395c:
        *(undefined8 *)(puVar57 + -8) = 0x140153968;
        pdb_142d7f080(puVar81 + 0x360);
        puVar58 = puVar57;
        puVar82 = puVar81;
      }
LAB_140153969:
      puVar28 = *(ulonglong **)(puVar82 + 0x368);
      UNRECOVERED_JUMPTABLE = (code *)((longlong)unaff_RBX * 0x38);
      (puVar28 + 6)[(longlong)unaff_RBX * 7] = *(ulonglong *)(puVar82 + 0x570);
      in_XMM0_Qa = *(undefined8 *)(puVar82 + 0x540);
      in_XMM0_Qb = *(undefined8 *)(puVar82 + 0x548);
      uVar40 = *(undefined4 *)(puVar82 + 0x550);
      uVar95 = *(undefined4 *)(puVar82 + 0x554);
      in_XMM1_Dc = *(undefined4 *)(puVar82 + 0x558);
      in_XMM1_Dd = *(undefined4 *)(puVar82 + 0x55c);
      ppuVar59 = (undefined1 **)puVar58;
      puVar83 = puVar82;
code_r0x00014015398e:
      uVar32 = *(undefined8 *)(puVar83 + 0x568);
      *(undefined8 *)((longlong)(puVar28 + 4) + (longlong)UNRECOVERED_JUMPTABLE) =
           *(undefined8 *)(puVar83 + 0x560);
      *(undefined8 *)((code *)((longlong)(puVar28 + 4) + (longlong)UNRECOVERED_JUMPTABLE) + 8) =
           uVar32;
      pcVar88 = (code *)((longlong)(puVar28 + 2) + (longlong)UNRECOVERED_JUMPTABLE);
      *(undefined4 *)pcVar88 = uVar40;
      *(undefined4 *)(pcVar88 + 4) = uVar95;
      *(undefined4 *)(pcVar88 + 8) = in_XMM1_Dc;
      *(undefined4 *)(pcVar88 + 0xc) = in_XMM1_Dd;
      *(undefined8 *)((longlong)puVar28 + (longlong)UNRECOVERED_JUMPTABLE) = in_XMM0_Qa;
      *(undefined8 *)((code *)((longlong)puVar28 + (longlong)UNRECOVERED_JUMPTABLE) + 8) =
           in_XMM0_Qb;
      *(byte **)(puVar83 + 0x370) = unaff_RBX + 1;
      puVar60 = (undefined1 *)ppuVar59;
      puVar84 = puVar83;
LAB_1401539ad:
      do {
        if (puVar84[0x65e] == '\0') {
          uVar27 = *(ulonglong *)(puVar84 + 0x388);
          puVar61 = puVar60;
code_r0x0001401539c1:
          bVar93 = uVar27 == 0 && *(longlong *)(puVar84 + 0x370) == 0;
          puVar60 = puVar61;
code_r0x0001401539c8:
          puVar62 = puVar60;
          puVar85 = puVar84;
          if (!bVar93) goto code_r0x0001401539ce;
        }
        param_2 = (byte *)0x4c4b40;
        *(undefined8 *)(puVar60 + -8) = 0x140153faf;
        pdb_140f502d0(0);
        *(undefined1 **)(puVar84 + 0x540) = puVar84 + 0x65f;
        *(undefined1 **)(puVar84 + 0x548) = puVar84 + 0x650;
        *(undefined1 **)(puVar84 + 0x550) = puVar84 + 0x3d0;
        *(undefined1 **)(puVar84 + 0x558) = puVar84 + 0x538;
        *(undefined1 **)(puVar84 + 0x560) = puVar84 + 0x4f8;
        *(undefined1 **)(puVar84 + 0x568) = puVar84 + 0x500;
        *(undefined1 **)(puVar84 + 0x570) = puVar84 + 0x270;
        *(undefined1 **)(puVar84 + 0x578) = puVar84 + 0x65e;
        *(undefined1 **)(puVar84 + 0x580) = puVar84 + 0x70;
        *(undefined1 **)(puVar84 + 0x588) = puVar84 + 0x448;
        *(undefined1 **)(puVar84 + 0x590) = puVar84 + 0x638;
        *(undefined1 **)(puVar84 + 0x598) = puVar84 + 0x65d;
        *(undefined1 **)(puVar84 + 0x5a0) = puVar84 + 0x2d0;
        *(undefined1 **)(puVar84 + 0x5a8) = puVar84 + 0x65c;
        *(undefined1 **)(puVar84 + 0x5b0) = puVar84 + 0x4e0;
        *(undefined1 **)(puVar84 + 0x5b8) = puVar84 + 0x60c;
        *(undefined8 *)(puVar60 + -8) = 0x14015409e;
        uVar27 = pdb_14010a8d0();
        if ((uVar27 & 1) != 0) {
          puVar3 = *(undefined8 **)(puVar84 + 0x620);
          *puVar3 = 2;
          puVar3[1] = param_2;
          if (0x14 < *(uint *)(puVar84 + 0x638)) {
            plVar4 = *(longlong **)(puVar84 + 0x640);
            LOCK();
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
              *(undefined8 *)(puVar60 + -8) = 0x1401540dc;
              pdb_1406cd7d0(puVar84 + 0x640);
            }
          }
          *(undefined8 *)(puVar60 + -8) = 0x1401540e9;
          pdb_14049a690(puVar84 + 0x2d0);
          puVar84[0x673] = 0;
          *(undefined8 *)(puVar60 + -8) = 0x1401540fd;
          pdb_1404c94d0(puVar84 + 0x270);
          puVar84[0x674] = 0;
          *(undefined8 *)(puVar60 + -8) = 0x14015410e;
          pdb_1404ddd40(puVar84 + 0x70);
          *(undefined8 *)(puVar84 + 0x668) = *(undefined8 *)(puVar84 + 0x528);
          *(undefined8 **)(puVar84 + 0x660) = *(undefined8 **)(puVar84 + 0x530);
          pcVar88 = (code *)**(undefined8 **)(puVar84 + 0x530);
          if (pcVar88 != (code *)0x0) {
            uVar32 = *(undefined8 *)(puVar84 + 0x668);
            *(undefined8 *)(puVar60 + -8) = 0x14015413c;
            (*pcVar88)(uVar32);
          }
          pbVar38 = *(byte **)(puVar84 + 0x668);
          uVar27 = *(ulonglong *)(*(longlong *)(puVar84 + 0x660) + 8);
          if (uVar27 != 0) {
            uVar99 = *(ulonglong *)(*(longlong *)(puVar84 + 0x660) + 0x10);
            *(undefined8 *)(puVar60 + -8) = 0x14015415d;
            pub_1406abac0(pbVar38,uVar27,uVar99);
          }
          *(longlong *)(puVar84 + 0x668) = *(longlong *)(puVar84 + 0x610);
          if (*(longlong *)(puVar84 + 0x610) != 0) {
            *(undefined8 **)(puVar84 + 0x660) = *(undefined8 **)(puVar84 + 0x618);
            pcVar88 = (code *)**(undefined8 **)(puVar84 + 0x618);
            if (pcVar88 != (code *)0x0) {
              uVar32 = *(undefined8 *)(puVar84 + 0x668);
              *(undefined8 *)(puVar60 + -8) = 0x14015418f;
              (*pcVar88)(uVar32);
            }
            uVar27 = *(ulonglong *)(*(longlong *)(puVar84 + 0x660) + 8);
            if (uVar27 != 0) {
              uVar99 = *(ulonglong *)(*(longlong *)(puVar84 + 0x660) + 0x10);
              pbVar38 = *(byte **)(puVar84 + 0x668);
              *(undefined8 *)(puVar60 + -8) = 0x1401541b0;
              pub_1406abac0(pbVar38,uVar27,uVar99);
            }
          }
          plVar4 = *(longlong **)(puVar84 + 0x650);
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            puVar84[0x672] = 0;
            *(undefined8 *)(puVar60 + -8) = 0x1401541d4;
            pdb_1406cd740(puVar84 + 0x650);
          }
          return *(ulonglong **)(puVar84 + 0x620);
        }
        puVar56 = puVar60;
        puVar80 = puVar84;
      } while (puVar84[0x65f] == '\0');
    } while( true );
  case 0x5e:
    if (!SCARRY8(uVar27,0x142e4b428)) {
      *(byte *)puVar28 = (byte)*puVar28 + bVar24;
      puVar84 = &stack0xffffffffffffffe8;
      goto LAB_1401539ad;
    }
    puVar84 = (undefined1 *)0x65e;
    *unaff_RDI = *unaff_RDI + bVar35;
    bVar93 = uVar26 == 0x74b80000 && iRam00000000000009ce == 0;
    puVar60 = auStack_78;
    goto code_r0x0001401539c8;
  case 0x5f:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar63 = auStack_78;
    puVar86 = &stack0xffffffffffffffe8;
    goto code_r0x0001401539e8;
  case 0x60:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar64 = auStack_78;
    puVar87 = &stack0xffffffffffffffe8;
    goto code_r0x000140153a00;
  case 0x61:
    *(byte *)puVar28 = (byte)*puVar28 + bVar24;
    puVar60 = auStack_78;
    puVar84 = &stack0xffffffffffffffe8;
    goto LAB_1401539ad;
  case 0x62:
    if (!SCARRY8(uVar27,0x142e4b428)) {
      *(byte *)puVar28 = (byte)*puVar28 + bVar24;
      bVar93 = (byte)*puVar28 == 0;
      puVar60 = auStack_78;
      goto code_r0x0001401539c8;
    }
code_r0x0001401539ce:
    puVar63 = puVar62;
    puVar86 = puVar85;
    if (*(longlong *)(puVar85 + 0x4e0) != 1) {
      *(undefined4 *)(puVar85 + 0x460) = 1;
                    /* WARNING: Could not recover jumptable at 0x000140153a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar28 = (ulonglong *)
                (*(code *)(&UNK_142e4b55c +
                          *(int *)(&UNK_142e4b55c + *(longlong *)(puVar85 + 0x638) * 4)))
                          (&UNK_142e4b55c +
                           *(int *)(&UNK_142e4b55c + *(longlong *)(puVar85 + 0x638) * 4));
      return puVar28;
    }
code_r0x0001401539e8:
    puVar64 = puVar63;
    puVar87 = puVar86;
    uVar40 = *(undefined4 *)(puVar86 + 0x4f0);
code_r0x000140153a00:
    *(undefined8 *)(puVar64 + -8) = 0x140153a05;
    uVar95 = pdb_1406d3d50();
    *(undefined4 *)(puVar87 + 0x464) = uVar95;
    *(undefined4 *)(puVar87 + 0x468) = uVar40;
    *(undefined4 *)(puVar87 + 0x460) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140153a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar28 = (ulonglong *)
              (*(code *)(&UNK_142e4b55c +
                        *(int *)(&UNK_142e4b55c + *(longlong *)(puVar87 + 0x638) * 4)))
                        (&UNK_142e4b55c +
                         *(int *)(&UNK_142e4b55c + *(longlong *)(puVar87 + 0x638) * 4));
    return puVar28;
  }
  puStack_38 = &stack0x0000069f;
  puStack_30 = &UNK_142e4b160;
  param_2 = &stack0x000002e0;
  puStack_80 = (undefined1 *)0x140150bcd;
  puStack_28 = puStack_38;
  pdb_1405285f0();
  uVar27 = unaff_R15[0xe];
  uVar99 = unaff_R15[0xf];
  uVar9 = unaff_R15[0xc];
  uVar10 = unaff_R15[0xd];
  uVar11 = unaff_R15[10];
  uVar12 = unaff_R15[0xb];
  uVar13 = unaff_R15[8];
  uVar14 = unaff_R15[9];
  uVar15 = *unaff_R15;
  uVar41 = unaff_R15[1];
  pcVar88 = (code *)unaff_R15[2];
  uVar89 = unaff_R15[3];
  uVar16 = unaff_R15[4];
  uVar17 = unaff_R15[5];
  uVar91 = unaff_R15[6];
  uVar18 = unaff_R15[7];
  pbVar38 = in_stack_00000580;
  for (lVar37 = 0; in_stack_00000588 != lVar37; lVar37 = lVar37 + 1) {
    puStack_80 = (undefined1 *)0x140150c83;
    pdb_1404b4350(pbVar38);
    pbVar38 = pbVar38 + 0x38;
  }
  if (in_stack_00000578 != (byte *)0x0) {
    param_2 = (byte *)((longlong)in_stack_00000578 * 0x38);
    puStack_80 = (undefined1 *)0x140150cb2;
    pub_1406abac0(in_stack_00000580,(ulonglong)param_2,8);
  }
  bVar93 = uVar15 == 0x8000000000000021;
  unaff_RDI = (char *)(ulonglong)bVar93;
  puVar47 = auStack_78;
  puVar69 = &stack0xffffffffffffffe8;
  if (!bVar93) {
    lVar37 = uVar15 + 0x7fffffffffffffe2;
    if (uVar15 < 0x800000000000001e) {
      lVar37 = 1;
    }
    if (lVar37 == 0) {
      pcVar88 = (code *)0x8;
      uVar41 = 0;
      uVar89 = 0;
    }
    else if (lVar37 == 1) {
      unaff_R15[0xb] = uVar27;
      unaff_R15[0xc] = uVar99;
      unaff_R15[9] = uVar9;
      unaff_R15[10] = uVar10;
      *(int *)(unaff_R15 + 7) = (int)uVar11;
      *(int *)((longlong)unaff_R15 + 0x3c) = (int)(uVar11 >> 0x20);
      *(int *)(unaff_R15 + 8) = (int)uVar12;
      *(int *)((longlong)unaff_R15 + 0x44) = (int)(uVar12 >> 0x20);
      unaff_R15[5] = uVar13;
      unaff_R15[6] = uVar14;
      unaff_R15[3] = uVar91;
      unaff_R15[4] = uVar18;
      unaff_R15[1] = uVar16;
      unaff_R15[2] = uVar17;
      puStack_80 = (undefined1 *)0x140150d80;
      pdb_14007ee60();
      puStack_80 = (undefined1 *)0x140150d8f;
      pcVar29 = (code *)pub_1406abab0(0x80,8);
      if (pcVar29 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_80 = (undefined1 *)0x140151541;
        pdb_142dc7e11(8,0x80);
      }
      *(ulonglong *)(pcVar29 + 0x70) = in_stack_000005e8;
      *(ulonglong *)(pcVar29 + 0x78) = in_stack_000005f0;
      *(ulonglong *)(pcVar29 + 0x60) = in_stack_000005d8;
      *(ulonglong *)(pcVar29 + 0x68) = in_stack_000005e0;
      *(ulonglong *)(pcVar29 + 0x50) = in_stack_000005c8;
      *(ulonglong *)(pcVar29 + 0x58) = in_stack_000005d0;
      *(ulonglong *)(pcVar29 + 0x40) = in_stack_000005b8;
      *(ulonglong *)(pcVar29 + 0x48) = in_stack_000005c0;
      *(ulonglong *)(pcVar29 + 0x30) = in_stack_000005a8;
      *(ulonglong *)(pcVar29 + 0x38) = CONCAT44(in_stack_000005b4,in_stack_000005b0);
      *(undefined1 **)(pcVar29 + 0x20) = in_stack_00000598;
      *(ulonglong *)(pcVar29 + 0x28) = in_stack_000005a0;
      *(code **)(pcVar29 + 0x10) = pcVar88;
      *(ulonglong *)(pcVar29 + 0x18) = uVar89;
      *(ulonglong *)pcVar29 = uVar15;
      *(ulonglong *)(pcVar29 + 8) = uVar41;
      uVar41 = 1;
      uVar89 = 1;
      pcVar88 = pcVar29;
    }
    uVar89 = uVar89 * 0x80;
    pcVar29 = pcVar88 + uVar89;
    pcVar19 = pcVar88;
    pcVar92 = pcVar88;
    while (UNRECOVERED_JUMPTABLE = pcVar19, pcVar19 != pcVar29) {
      uVar89 = uVar89 - 0x80;
      pcVar92 = pcVar92 + 0x80;
      UNRECOVERED_JUMPTABLE = pcVar19 + 0x80;
      uVar27 = *(ulonglong *)pcVar19;
      if (uVar27 == 0x800000000000001e) break;
      unaff_R15[0xc] = *(ulonglong *)(pcVar19 + 0x78);
      uVar99 = *(ulonglong *)(pcVar19 + 0x70);
      unaff_R15[10] = *(ulonglong *)(pcVar19 + 0x68);
      unaff_R15[0xb] = uVar99;
      uVar99 = *(ulonglong *)(pcVar19 + 0x60);
      unaff_R15[8] = *(ulonglong *)(pcVar19 + 0x58);
      unaff_R15[9] = uVar99;
      uVar99 = *(ulonglong *)(pcVar19 + 0x50);
      unaff_R15[6] = *(ulonglong *)(pcVar19 + 0x48);
      unaff_R15[7] = uVar99;
      uVar99 = *(ulonglong *)(pcVar19 + 8);
      uVar9 = *(ulonglong *)(pcVar19 + 0x10);
      uVar10 = *(ulonglong *)(pcVar19 + 0x18);
      uVar11 = *(ulonglong *)(pcVar19 + 0x20);
      uVar12 = *(ulonglong *)(pcVar19 + 0x28);
      uVar13 = *(ulonglong *)(pcVar19 + 0x30);
      uVar40 = *(undefined4 *)(pcVar19 + 0x3c);
      uVar95 = *(undefined4 *)(pcVar19 + 0x40);
      uVar98 = *(undefined4 *)(pcVar19 + 0x44);
      *(undefined4 *)(unaff_R15 + 4) = *(undefined4 *)(pcVar19 + 0x38);
      *(undefined4 *)((longlong)unaff_R15 + 0x24) = uVar40;
      *(undefined4 *)(unaff_R15 + 5) = uVar95;
      *(undefined4 *)((longlong)unaff_R15 + 0x2c) = uVar98;
      unaff_R15[2] = uVar12;
      unaff_R15[3] = uVar13;
      *unaff_R15 = uVar10;
      unaff_R15[1] = uVar11;
      unaff_R15[-2] = uVar99;
      unaff_R15[-1] = uVar9;
      if (uVar27 < 0x8000000000000016) {
        if (uVar27 < 0x8000000000000001) {
          uVar27 = 0;
        }
        if ((uVar27 & 0x7fffffffffffffff) == 1) {
          *in_stack_00000628 = 2;
          puStack_80 = (undefined1 *)0x1401512f4;
          pdb_14014fab0(&stack0x00000578);
          for (uVar27 = 0; uVar89 >> 7 != uVar27; uVar27 = uVar27 + 1) {
            puStack_80 = (undefined1 *)0x140151359;
            pdb_14049aed0(pcVar92);
            pcVar92 = pcVar92 + 0x80;
          }
          if (uVar41 != 0) {
            puStack_80 = (undefined1 *)0x140151381;
            pub_1406abac0((byte *)pcVar88,uVar41 << 7,8);
          }
          if (0x14 < in_stack_00000678) {
            LOCK();
            *in_stack_00000680 = *in_stack_00000680 + -1;
            UNLOCK();
            if (*in_stack_00000680 == 0) {
              puStack_80 = (undefined1 *)0x1401513a3;
              pdb_1406cd7d0(&stack0x00000680);
            }
          }
          puStack_80 = (undefined1 *)0x1401513b0;
          pdb_14049a690(&stack0x000002e0);
          puStack_80 = (undefined1 *)0x1401513c4;
          pdb_1404c94d0(&stack0x00000280);
          puStack_80 = (undefined1 *)0x1401513d5;
          pdb_1404ddd40(&stack0x00000058);
          if ((code *)*in_stack_00000570 != (code *)0x0) {
            puStack_80 = (undefined1 *)0x140151403;
            (*(code *)*in_stack_00000570)(in_stack_00000568);
          }
          if (in_stack_00000570[1] != 0) {
            puStack_80 = (undefined1 *)0x140151424;
            pub_1406abac0(in_stack_00000568,in_stack_00000570[1],in_stack_00000570[2]);
          }
          puVar70 = &stack0xffffffffffffffe8;
          if (in_stack_00000688 != (byte *)0x0) {
            puStack_80 = (undefined1 *)0x140151441;
            pdb_1406d1b70(&stack0x00000688);
            puVar70 = &stack0xffffffffffffffe8;
          }
          goto LAB_140151442;
        }
      }
      puStack_80 = (undefined1 *)0x140150f17;
      pdb_14014fab0();
      pcVar19 = UNRECOVERED_JUMPTABLE;
    }
    unaff_RDI = (char *)(ulonglong)bVar93;
    while (*(longlong *)(puVar65 + 0x6b8) != *(longlong *)(puVar65 + 0x6c8)) {
      uVar27 = *(longlong *)(puVar65 + 0x6c8) + 1;
      puVar45 = puVar44;
      ppuVar66 = (undefined1 **)puVar65;
code_r0x000140150f83:
      *(ulonglong *)((longlong)ppuVar66 + 0x6c8) = uVar27;
code_r0x000140150f8a:
      *(undefined8 *)(puVar45 + -8) = 0x140150f96;
      pdb_14049aed0(UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 0x80;
      puVar22 = puVar45;
      puVar67 = (undefined1 *)ppuVar66;
code_r0x000140150f9a:
      puVar44 = puVar22;
      puVar65 = puVar67;
    }
    param_2 = *(byte **)(puVar65 + 0x660);
    bVar94 = param_2 == (byte *)0x0;
    puVar46 = puVar44;
    puVar68 = puVar65;
code_r0x000140150fa6:
    puVar47 = puVar46;
    puVar69 = puVar68;
    if (!bVar94) {
      pbVar38 = *(byte **)(puVar68 + 0x650);
      param_2 = (byte *)((longlong)param_2 << 7);
      *(undefined8 *)(puVar46 + -8) = 0x140150fbe;
      pub_1406abac0(pbVar38,(ulonglong)param_2,8);
    }
  }
code_r0x000140150fbe:
  puVar69[0x6d6] = (char)unaff_RDI;
  *(undefined8 *)(puVar47 + -8) = 0x140150fd1;
  puVar28 = (ulonglong *)pdb_1406ca6d0(puVar69 + 0x2f8);
  bVar94 = puVar28 == (ulonglong *)0x3;
  puVar21 = puVar47;
  puVar70 = puVar69;
code_r0x000140150fd6:
  puVar48 = puVar21;
  if (!bVar94) {
code_r0x000140151202:
    puVar3 = *(undefined8 **)(puVar70 + 0x640);
    *puVar3 = puVar28;
    puVar3[1] = param_2;
    if (0x14 < *(uint *)(puVar70 + 0x690)) {
      plVar4 = *(longlong **)(puVar70 + 0x698);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        *(undefined8 *)(puVar48 + -8) = 0x140151232;
        pdb_1406cd7d0(puVar70 + 0x698);
      }
    }
    *(undefined8 *)(puVar48 + -8) = 0x14015123f;
    pdb_14049a690(puVar70 + 0x2f8);
    puVar70[0x6d2] = 0;
    *(undefined8 *)(puVar48 + -8) = 0x140151253;
    pdb_1404c94d0(puVar70 + 0x298);
    puVar70[0x6d3] = 0;
    *(undefined8 *)(puVar48 + -8) = 0x140151264;
    pdb_1404ddd40(puVar70 + 0x70);
    *(undefined8 *)(puVar70 + 0x6c8) = *(undefined8 *)(puVar70 + 0x580);
    *(undefined8 **)(puVar70 + 0x6b8) = *(undefined8 **)(puVar70 + 0x588);
    pcVar88 = (code *)**(undefined8 **)(puVar70 + 0x588);
    if (pcVar88 != (code *)0x0) {
      uVar32 = *(undefined8 *)(puVar70 + 0x6c8);
      *(undefined8 *)(puVar48 + -8) = 0x140151292;
      (*pcVar88)(uVar32);
    }
    pbVar38 = *(byte **)(puVar70 + 0x6c8);
    uVar27 = *(ulonglong *)(*(longlong *)(puVar70 + 0x6b8) + 8);
    if (uVar27 != 0) {
      uVar99 = *(ulonglong *)(*(longlong *)(puVar70 + 0x6b8) + 0x10);
      *(undefined8 *)(puVar48 + -8) = 0x1401512b3;
      pub_1406abac0(pbVar38,uVar27,uVar99);
    }
    if (*(longlong *)(puVar70 + 0x6a0) != 0) {
      puVar70[0x6d5] = 0;
      *(undefined8 *)(puVar48 + -8) = 0x1401512d4;
      pdb_1406d1b70(puVar70 + 0x6a0);
    }
LAB_140151442:
    return *(ulonglong **)(puVar70 + 0x640);
  }
  UNRECOVERED_JUMPTABLE =
       (code *)(&UNK_142e4b4ac + *(int *)(&UNK_142e4b4ac + *(longlong *)(puVar70 + 0x690) * 4));
code_r0x000140150ff1:
                    /* WARNING: Could not recover jumptable at 0x000140150ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar28 = (ulonglong *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return puVar28;
code_r0x000140152138:
  puVar53 = puVar52;
  puVar76 = puVar75;
  uVar40 = *(undefined4 *)(puVar75 + 0x4a8);
code_r0x000140152140:
  *(undefined8 *)(puVar53 + -8) = 0x140152145;
  uVar95 = pdb_1406d3d50();
  *(undefined4 *)(puVar76 + 0x414) = uVar95;
code_r0x00014015214e:
  *(undefined4 *)(puVar76 + 0x418) = uVar40;
  *(undefined4 *)(puVar76 + 0x410) = 0;
  puVar77 = puVar76;
code_r0x00014015215e:
                    /* WARNING: Could not recover jumptable at 0x00014015217a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar28 = (ulonglong *)
            (*(code *)(&UNK_142e4b504 +
                      *(int *)(&UNK_142e4b504 + *(longlong *)(puVar77 + 0x638) * 4)))
                      (&UNK_142e4b504 +
                       *(int *)(&UNK_142e4b504 + *(longlong *)(puVar77 + 0x638) * 4));
  return puVar28;
}

