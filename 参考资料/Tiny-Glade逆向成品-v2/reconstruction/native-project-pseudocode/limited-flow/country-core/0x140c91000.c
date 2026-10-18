// VA 0x140c91000, PDB extent 185 bytes
// country_core::resources::walls::decorator_storage::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140c9174b) overlaps instruction at (ram,0x000140c91747)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001409a46cb) */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::_::impl$0::deserialize::impl$2::visit_enum<serde::private::de::content::EnumRefDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 185 */

uint * pdb_140c91000(uint *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint **ppuVar3;
  uint *puVar4;
  uint *extraout_RAX;
  uint *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar7;
  undefined *puVar8;
  undefined8 unaff_RBX;
  uint **ppuVar9;
  ulonglong *puVar10;
  char cVar11;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong unaff_R12;
  uint uVar14;
  uint *unaff_R13;
  longlong unaff_R15;
  ulonglong unaff_retaddr;
  ulonglong auStack_98 [2];
  uint *puStack_88;
  uint *puStack_80;
  uint *puStack_78;
  uint *puStack_70;
  uint *puStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  uint *puStack_48;
  uint *in_stack_ffffffffffffffc0;
  longlong lStack_38;
  ulonglong *puStack_30;
  undefined8 uStack_28;
  ulonglong in_stack_ffffffffffffffe0;
  uint *in_stack_ffffffffffffffe8;
  uint *puStack_10;
  
  ppuVar9 = &puStack_48;
  pdb_141b4c820(&stack0xffffffffffffffe0);
  puVar8 = &UNK_14307691c;
  puVar4 = (uint *)(&UNK_14307691c +
                   *(int *)(&UNK_14307691c + (in_stack_ffffffffffffffe0 & 0xff) * 4));
  cVar11 = (char)puVar4;
  puVar5 = in_stack_ffffffffffffffe8;
  ppuVar3 = &puStack_48;
  puStack_48 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(in_stack_ffffffffffffffe0 & 0xff) {
  case 0:
    if (in_stack_ffffffffffffffe8 == (uint *)0x0) {
      puVar8 = (undefined *)pdb_142db90e0(&stack0xffffffffffffffe0,&UNK_143396a68,&UNK_1433966f8);
      lVar7 = 1;
    }
    else {
      if ((byte)*in_stack_ffffffffffffffe8 == 0x13) {
        in_stack_ffffffffffffffe8 = *(uint **)(in_stack_ffffffffffffffe8 + 2);
      }
      lVar7 = pdb_141b57340(in_stack_ffffffffffffffe8);
    }
    lVar7 = lVar7 * 3;
    *(undefined **)(param_1 + 2) = puVar8;
    goto code_r0x000140c9106f;
  case 1:
    lVar7 = 1;
    break;
  case 2:
    lVar7 = 2;
    break;
  case 3:
    *(uint **)(param_1 + 2) = in_stack_ffffffffffffffe8;
    goto code_r0x000140c91059;
  case 4:
    uVar14 = (uint)puVar4;
    goto code_r0x000140c91256;
  case 5:
    *(char *)((longlong)param_1 + 0x66) =
         *(char *)((longlong)param_1 + 0x66) + (char)((ulonglong)puVar4 >> 8);
  case 7:
    if (UNK_14307692b != '#') {
      return (uint *)0x1;
    }
    uStack_28 = &UNK_14307691c;
    pdb_1404b38e0();
    lVar7 = pdb_140f5ad90();
    while (uVar14 = (uint)lVar7, lVar7 == 0) {
      if (unaff_retaddr == 0) {
        return (uint *)0x0;
      }
      bVar1 = (byte)param_1[0x1a];
      uVar12 = (ulonglong)bVar1;
      uVar13 = 0x40 - uVar12;
      if (unaff_retaddr < uVar13) {
        pub_142e32760((char *)((longlong)param_1 + uVar12 + 0x28),puStack_10,unaff_retaddr);
        cVar11 = bVar1 + (char)unaff_retaddr;
      }
      else {
        puVar5 = puStack_10;
        if (bVar1 != 0) {
          pub_142e32760((char *)(uVar12 + (longlong)(param_1 + 10)));
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
          pdb_141c17860(param_1,param_1 + 10,1);
          unaff_retaddr = unaff_retaddr - uVar13;
          puVar5 = (uint *)((longlong)puStack_10 + uVar13);
        }
        if (unaff_retaddr >> 6 != 0) {
          *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (unaff_retaddr >> 6);
          pdb_141c17860(param_1);
        }
        uVar14 = (uint)unaff_retaddr & 0x3f;
        cVar11 = (char)uVar14;
        pub_142e32760(param_1 + 10,(char *)((longlong)puVar5 + (unaff_retaddr & 0x7fffffffffffffc0))
                      ,uVar14);
      }
      *(char *)(param_1 + 0x1a) = cVar11;
      unaff_retaddr = 0;
      lVar7 = pdb_140f5ad90();
    }
code_r0x000140c91256:
                    /* WARNING: Could not recover jumptable at 0x000140c91262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (uint *)(*(code *)(*(int *)(unaff_R15 + (ulonglong)(uVar14 & 3) * 4) + unaff_R15))();
    return puVar5;
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    puVar5 = (uint *)(&UNK_1430768a7 +
                     *(int *)(&UNK_14307691c + (in_stack_ffffffffffffffe0 & 0xff) * 4));
    *puVar5 = *puVar5 >> 4 | *puVar5 << 0x1c;
    do {
      pdb_140c28230();
      puVar4 = puStack_10;
      puVar5 = param_1;
      if ((char)unaff_RSI == '\x03') {
        UNRECOVERED_JUMPTABLE =
             (code *)(*(int *)(unaff_R12 + (ulonglong)((uint)puStack_10 & 3) * 4) + unaff_R12);
                    /* WARNING: Could not recover jumptable at 0x000140c91481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar5 = (uint *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return puVar5;
      }
code_r0x000140c91490:
      if (puVar4 == (uint *)0x0) {
        return unaff_R13;
      }
      param_1 = (uint *)((longlong)puVar5 - (longlong)puVar4);
      if (puVar5 < puVar4) {
        pdb_142dc8420(puVar4,puVar5,puVar5,&UNK_1430766f8);
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        puVar5 = (uint *)(*UNRECOVERED_JUMPTABLE)();
        return puVar5;
      }
code_r0x000140c91440:
    } while (param_1 != (uint *)0x0);
    return (uint *)0x0;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    cVar11 = (char)in_stack_ffffffffffffffe8;
    if (0x29 < (uint)in_stack_ffffffffffffffe8) {
      cVar11 = (char)unaff_RBP;
    }
    if (cVar11 != '#') {
      return puVar4;
    }
    pdb_1404b38e0();
    goto code_r0x000140c91440;
  case 0xb:
    *(char *)puVar4 = (char)*puVar4;
    *(char *)puVar4 = (char)*puVar4 + cVar11;
    puVar5 = param_1;
    goto code_r0x000140c91490;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    if ((ulonglong)*in_stack_ffffffffffffffe8 == 0x8000000000000001) {
      bVar1 = *(byte *)(param_3 + 8);
      if (6 < (ulonglong)bVar1) {
code_r0x000140c916c0:
        uStack_28 = (undefined *)0xfffffffffffffffe;
        puVar5 = *(uint **)(param_3 + 0x10);
        if (puVar5 == (uint *)0x0) {
          uStack_58 = 0;
        }
        else {
          puStack_80 = *(uint **)(param_3 + 0x18);
          uStack_58 = *(undefined8 *)(param_3 + 0x20);
          auStack_98[1] = 0;
          puStack_70 = (uint *)0x0;
          puStack_88 = puVar5;
          puStack_68 = puVar5;
          puStack_60 = puStack_80;
        }
        auStack_98[0] = (ulonglong)(puVar5 != (uint *)0x0);
        puStack_78 = (uint *)auStack_98[0];
        pdb_14192c4b0(&stack0xffffffffffffffb0,auStack_98);
        do {
          lStack_38 = (longlong)in_stack_ffffffffffffffc0 * 0x20 + 0x140c91012;
          uVar12 = *(ulonglong *)((longlong)in_stack_ffffffffffffffc0 * 0x18 + 0x140c9117a);
          puStack_30 = auStack_98;
          if (uVar12 != 0) {
            pub_1406abac0(*(byte **)((longlong)in_stack_ffffffffffffffc0 * 0x18 + 0x140c91182),
                          uVar12,1);
          }
          pdb_140966d70(&lStack_38);
          pdb_14192c4b0(&stack0xffffffffffffffb0,auStack_98);
        } while( true );
      }
      switch(bVar1) {
      default:
        return (uint *)(&UNK_14307694c + *(int *)(&UNK_14307694c + (ulonglong)bVar1 * 4));
      case 3:
        lVar7 = *(longlong *)(param_3 + 0x10);
        if (lVar7 == 0) {
          return (uint *)(&UNK_14307694c + *(int *)(&UNK_14307694c + (ulonglong)bVar1 * 4));
        }
        puVar5 = *(uint **)(param_3 + 0x18);
        uVar12 = 1;
        lStack_38 = unaff_RSI;
        goto code_r0x0001406abac0;
      case 4:
        uVar6 = *(undefined8 *)(param_3 + 0x18);
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        unaff_RBP[-2] = uVar6;
        unaff_RBP[-3] = param_3;
        pdb_14098ae50(uVar6,uVar2);
        break;
      case 5:
        goto code_r0x000140c916c0;
      }
      goto code_r0x000140c91690;
    }
    unaff_RBP[-2] = (ulonglong)*in_stack_ffffffffffffffe8;
    unaff_RBP[-3] = param_3;
  case 0x10:
    pdb_1409a45e0(param_3 + 0x18);
    lVar7 = unaff_RBP[-2];
    if ((SBORROW8(0,lVar7)) || (lVar7 == 0)) {
      return (uint *)unaff_RBP[-3];
    }
    puVar5 = *(uint **)((uint *)unaff_RBP[-3] + 2);
    uVar12 = 1;
    lStack_38 = unaff_RSI;
code_r0x0001406abac0:
    *(longlong *)((longlong)register0x00000020 + -8) = lStack_38;
    *(uint **)((longlong)register0x00000020 + -0x10) = puStack_48;
    puVar4 = puVar5;
    if (0x10 < uVar12) {
      puVar4 = *(uint **)(puVar5 + -2);
    }
    *(undefined **)((longlong)register0x00000020 + -0x40) = &UNK_140f3c37e;
    uVar6 = GetProcessHeap(puVar5,lVar7);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (uint *)HeapFree(uVar6,0,puVar4);
    return puVar5;
  case 0x11:
code_r0x000140c91690:
    lVar7 = *(longlong *)((uint *)unaff_RBP[-3] + 4);
    if (lVar7 == 0) {
      return (uint *)unaff_RBP[-3];
    }
    lVar7 = lVar7 << 5;
    uVar12 = 8;
    puVar5 = (uint *)unaff_RBP[-2];
    register0x00000020 = (BADSPACEBASE *)0x90ffcfdf;
    lStack_38 = lRam0000000090ffcfd7;
    goto code_r0x0001406abac0;
  default:
    goto code_r0x000140c91742;
  case 0x1f:
  case 0x21:
    *(char *)puVar4 = (char)*puVar4 + cVar11;
    goto code_r0x000140c91742;
  case 0x24:
code_r0x000140c917b5:
    ppuVar9 = ppuVar3;
    *(undefined **)((longlong)ppuVar9 + -8) = &UNK_140c917bb;
    puVar4 = (uint *)func_0x00015912a303();
    unaff_RBP[-4] = puVar5;
    unaff_RBP[-1] = 0;
    goto code_r0x000140c917c7;
  case 0x26:
    *(char *)puVar4 = (char)*puVar4 + cVar11;
code_r0x000140c917c7:
    unaff_RBP[-2] = puVar4;
    while (unaff_RBP[-4] != unaff_RBP[-1]) {
      unaff_RBP[-1] = unaff_RBP[-1] + 1;
      *(undefined **)((longlong)ppuVar9 + -8) = &UNK_140c917ea;
      pdb_14098ca70(puVar4);
      puVar4 = puVar4 + 8;
    }
    puVar5 = (uint *)unaff_RBP[-3];
    if (*(longlong *)(puVar5 + 2) == 0) {
code_r0x000140c9178e:
      return puVar5;
    }
    lVar7 = *(longlong *)(puVar5 + 2) << 5;
    uVar12 = 8;
    puVar5 = (uint *)unaff_RBP[-2];
    puVar10 = (ulonglong *)ppuVar9;
code_r0x000140c9184f:
    puStack_48 = *(uint **)((longlong)puVar10 + 0x58);
    lStack_38 = *(longlong *)((longlong)puVar10 + 0x60);
    register0x00000020 = (BADSPACEBASE *)((longlong)puVar10 + 0x68);
    goto code_r0x0001406abac0;
  case 0x27:
    puVar10 = auStack_98;
    unaff_RBP = &uStack_58;
    uStack_58 = 0xfffffffffffffffe;
    bVar1 = (byte)*in_stack_ffffffffffffffe8;
    if (0x14 < (ulonglong)bVar1) {
      puStack_78 = in_stack_ffffffffffffffe8 + 2;
      puStack_60 = (uint *)0xfffffffffffffffe;
      puStack_68 = *(uint **)(in_stack_ffffffffffffffe8 + 4);
      puStack_80 = *(uint **)(in_stack_ffffffffffffffe8 + 6);
      puStack_70 = (uint *)0x0;
      uStack_58 = unaff_RBX;
      puStack_48 = in_stack_ffffffffffffffc0;
      while (puStack_70 != puStack_80) {
        puStack_88 = puStack_68 + (longlong)puStack_70 * 0x10;
        puStack_70 = (uint *)((longlong)puStack_70 + 1);
        pdb_14098ca70();
        pdb_14098ca70(puStack_88 + 8);
      }
      if (*(longlong *)puStack_78 == 0) {
        return puStack_78;
      }
      lVar7 = *(longlong *)puStack_78 << 6;
      uVar12 = 8;
      register0x00000020 = (BADSPACEBASE *)&puStack_30;
      puVar5 = puStack_68;
      goto code_r0x0001406abac0;
    }
    puVar5 = (uint *)(&UNK_143076968 + *(int *)(&UNK_143076968 + (ulonglong)bVar1 * 4));
    switch(bVar1) {
    default:
      goto code_r0x000140c9178e;
    case 0xc:
    case 0xe:
      lVar7 = *(longlong *)(in_stack_ffffffffffffffe8 + 2);
      if (lVar7 == 0) {
        return puVar5;
      }
      puVar5 = *(uint **)(in_stack_ffffffffffffffe8 + 4);
      uVar12 = 1;
      goto code_r0x000140c9184f;
    case 0x11:
      puStack_60 = *(uint **)(in_stack_ffffffffffffffe8 + 2);
      pdb_140c91760();
      break;
    case 0x13:
      puStack_60 = *(uint **)(in_stack_ffffffffffffffe8 + 2);
      pdb_140c91760();
      break;
    case 0x14:
      puVar5 = *(uint **)(in_stack_ffffffffffffffe8 + 6);
      ppuVar3 = (uint **)auStack_98;
      puStack_70 = in_stack_ffffffffffffffe8;
      goto code_r0x000140c917b5;
    }
    lVar7 = 0x20;
    uVar12 = 8;
    puVar5 = puStack_60;
    puVar10 = auStack_98;
    goto code_r0x000140c9184f;
  }
  if ((in_stack_ffffffffffffffe8 != (uint *)0x0) && ((byte)*in_stack_ffffffffffffffe8 != 0x12)) {
    lVar7 = pdb_142deedc0(in_stack_ffffffffffffffe8,(longlong)&uStack_28 + 7,&UNK_143396738);
    *(longlong *)(param_1 + 2) = lVar7;
code_r0x000140c91059:
    lVar7 = 3;
  }
code_r0x000140c9106f:
  *(longlong *)param_1 = lVar7;
  return param_1;
code_r0x000140c91742:
  func_0x00014911a28f();
  pub_1406abac0((byte *)in_stack_ffffffffffffffe8,unaff_RBP[-2],1);
  return extraout_RAX;
}

