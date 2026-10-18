// VA 0x140c90d00, PDB extent 763 bytes
// country_core::resources::walls::decorator_storage::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140c91733) overlaps instruction at (ram,0x000140c91732)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140c91053) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 763 */

longlong * pdb_140c90d00(longlong *param_1,byte *param_2,ulonglong param_3)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  undefined7 uVar10;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *extraout_RAX;
  undefined8 uVar9;
  byte *arg0;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar11;
  longlong **pplVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong unaff_R12;
  longlong *unaff_R13;
  longlong unaff_R15;
  bool bVar16;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulonglong auStack_a0 [2];
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  longlong *plStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char cStack_58;
  byte bStack_57;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  pbVar11 = (byte *)&uStack_68;
  uStack_30 = 0xfffffffffffffffe;
  arg0 = (byte *)&UNK_143076904;
  iVar2 = *(int *)(&UNK_143076904 + (ulonglong)*param_2 * 4);
  plVar5 = (longlong *)(&UNK_143076904 + iVar2);
  bVar16 = plVar5 == (longlong *)0x0;
  cVar4 = (char)plVar5;
  uVar10 = (undefined7)((ulonglong)plVar5 >> 8);
  plVar13 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    cVar4 = '\x12';
    break;
  case 1:
    bStack_57 = param_2[1];
    cVar4 = '\0';
    break;
  case 2:
    uStack_50 = (undefined1)*(undefined8 *)(param_2 + 0x10);
    uStack_4f = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 8);
    cVar4 = (char)(0xa0804 >> ((byte)(*(int *)(param_2 + 8) << 3) & 0x1f));
    break;
  case 3:
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uStack_90 = (undefined1)*(undefined8 *)(param_2 + 8);
    uStack_8f = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 8) >> 8);
    uStack_88 = (undefined1)uVar9;
    uStack_87 = (undefined7)((ulonglong)uVar9 >> 8);
    plStack_80 = *(longlong **)(param_2 + 0x18);
    bStack_57 = (byte)auStack_a0[1]._1_7_;
    uStack_56 = (undefined2)((uint7)auStack_a0[1]._1_7_ >> 8);
    uStack_54 = (undefined4)((uint7)auStack_a0[1]._1_7_ >> 0x18);
    uStack_50 = uStack_90;
    uStack_4f = uStack_8f;
    uStack_48 = (undefined4)uVar9;
    uStack_44 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar4 = '\f';
    uStack_40 = plStack_80;
    break;
  case 4:
    pdb_141bc80b0(&cStack_58,param_2 + 8);
    cVar4 = cStack_58;
    if (cStack_58 != '\x16') break;
code_r0x000140c90dc4:
    pbVar11 = (byte *)CONCAT71(uStack_4f,uStack_50);
    goto code_r0x000140c90f30;
  case 5:
    uStack_a8 = *(undefined8 *)(param_2 + 0x18);
    lStack_b8 = *(longlong *)(param_2 + 8);
    uStack_b0 = *(undefined4 *)(param_2 + 0x10);
    uStack_ac = *(undefined4 *)(param_2 + 0x14);
    pdb_141ba70a0(&cStack_58,&lStack_b8);
    cVar4 = cStack_58;
    if (cStack_58 == '\x16') goto code_r0x000140c90dc4;
    break;
  case 6:
                    /* WARNING: Could not emulate address calculation at 0x000140c91023 */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (longlong *)
             (*(code *)(&UNK_14307691c +
                       *(int *)(&UNK_14307691c + ((ulonglong)plVar5 & 0xffffffffffffff28) * 4)))
                       (lStack_b8);
    return plVar5;
  case 7:
    lVar7 = 2;
    if (UNK_143076904 != '\x12') {
      lVar7 = pdb_142deedc0(&UNK_143076904,(longlong)&uStack_c8 + 7,&UNK_143396738);
      param_1[1] = lVar7;
      lVar7 = 3;
    }
    goto code_r0x000140c9106f;
  case 8:
    if (UNK_143076904 == '\x13') {
      arg0 = _UNK_14307690c;
    }
    lVar7 = pdb_141b57340(arg0);
    lVar7 = lVar7 * 3;
    goto code_r0x000140c91043;
  case 9:
    cVar4 = in((short)param_2);
    pcVar1 = (char *)(CONCAT71(uVar10,cVar4) + -0x73);
    *pcVar1 = *pcVar1 + '\x04';
    lVar7 = CONCAT71(uVar10,cVar4 + '@');
code_r0x000140c91043:
    param_1[1] = (longlong)param_2;
code_r0x000140c9106f:
    *param_1 = lVar7;
    return param_1;
  case 10:
    while( true ) {
      uVar8 = pdb_140f5ad90();
      uVar3 = auStack_a0[0];
joined_r0x000140c912c3:
      auStack_a0[0] = uVar3;
      if (uVar8 != 0) break;
      if (uVar3 == 0) {
        return (longlong *)0x0;
      }
      lVar7 = CONCAT44(uStack_ac,uStack_b0);
      uVar8 = (ulonglong)*(byte *)(param_1 + 0xd);
      uVar15 = 0x40 - uVar8;
      if (uVar3 < uVar15) {
        pub_142e32760((char *)((longlong)param_1 + uVar8 + 0x28),lVar7,uVar3);
        unaff_R13 = (longlong *)(uVar8 + uVar3);
      }
      else {
        if (*(byte *)(param_1 + 0xd) != 0) {
          lStack_b8 = lVar7 + uVar15;
          plStack_c0 = param_1 + 5;
          pub_142e32760((char *)(uVar8 + (longlong)plStack_c0));
          param_1[4] = param_1[4] + 1;
          pdb_141c17860(param_1,plStack_c0,1);
          lVar7 = lStack_b8;
          uVar3 = uVar3 - uVar15;
        }
        if (uVar3 >> 6 != 0) {
          param_1[4] = param_1[4] + (uVar3 >> 6);
          pdb_141c17860(param_1);
        }
        unaff_R13 = (longlong *)(ulonglong)((uint)uVar3 & 0x3f);
        pub_142e32760(param_1 + 5,lVar7 + (uVar3 & 0x7fffffffffffffc0),unaff_R13);
      }
code_r0x000140c9139f:
      *(char *)(param_1 + 0xd) = (char)unaff_R13;
      auStack_a0[0] = 0;
    }
    plVar5 = (longlong *)(uVar8 & 0xffffffff);
  case 0xb:
                    /* WARNING: Could not recover jumptable at 0x000140c91262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (longlong *)
             (*(code *)(*(int *)(unaff_R15 + (ulonglong)((uint)plVar5 & 3) * 4) + unaff_R15))();
    return plVar5;
  case 0xc:
    goto code_r0x000140c9139f;
  case 0xd:
    if (cVar4 != '#') {
      return (longlong *)0x1;
    }
    uStack_c8 = param_2;
    pdb_1404b38e0();
    uVar8 = pdb_140f5ad90();
    uVar3 = auStack_a0[0];
    goto joined_r0x000140c912c3;
  case 0xe:
    while( true ) {
      pdb_140c28230();
      bVar16 = (char)uStack_a8 == '\x03';
      plStack_c0 = (longlong *)(ulonglong)bVar16;
      plVar5 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
      plVar13 = param_1;
code_r0x000140c91473:
      if (bVar16) {
        UNRECOVERED_JUMPTABLE =
             (code *)(*(int *)(unaff_R12 + (ulonglong)((uint)plVar5 & 3) * 4) + unaff_R12);
                    /* WARNING: Could not recover jumptable at 0x000140c91481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar5 = (longlong *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
        return plVar5;
      }
      if (plVar5 == (longlong *)0x0) {
        return unaff_R13;
      }
      param_1 = (longlong *)((longlong)plVar13 - (longlong)plVar5);
      if (plVar13 < plVar5) break;
      if (param_1 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
    }
    pdb_142dc8420(plVar5,plVar13,plVar13,&UNK_1430766f8);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    plVar5 = (longlong *)(*UNRECOVERED_JUMPTABLE)();
    return plVar5;
  case 0xf:
    (&UNK_14307688d)[iVar2] = (&UNK_14307688d)[iVar2] + -4;
    uVar8 = (ulonglong)plVar5 & 0x30;
    plVar5 = (longlong *)((ulonglong)plVar5 & 0xffffffffffffff30);
    bVar16 = uVar8 == 0;
    goto code_r0x000140c91473;
  case 0x10:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    plVar5 = (longlong *)(*UNRECOVERED_JUMPTABLE)();
    return plVar5;
  case 0x11:
    goto code_r0x000140c91473;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x18:
    *(char *)plVar5 = (char)*plVar5 + cVar4;
    (&UNK_143076887)[iVar2] = (&UNK_143076887)[iVar2] + '\x04';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    plVar5 = (longlong *)(*UNRECOVERED_JUMPTABLE)();
    return plVar5;
  case 0x16:
    param_3 = 1;
    pplVar12 = (longlong **)auStack_a0;
    uStack_e8 = uStack_a8;
    goto code_r0x0001406abac0;
  case 0x17:
    pplVar12 = (longlong **)auStack_e0;
    goto code_r0x0001406abac0;
  default:
    goto code_r0x000140c9172a;
  case 0x25:
  case 0x27:
    goto code_r0x000140c9172a;
  case 0x2a:
    *(char *)(param_1 + (longlong)(pbVar11 + 9)) = (char)param_1[(longlong)(pbVar11 + 9)] << 4;
    arg0 = (byte *)(ulonglong)_UNK_143076914;
    param_3 = 1;
    goto code_r0x000140c9184f;
  case 0x2c:
    *(char *)plVar5 = (char)*plVar5 + cVar4;
    uStack_78 = (byte *)CONCAT44(_UNK_143076918,_UNK_143076914);
    plStack_80 = (longlong *)&UNK_143076904;
    uStack_88 = (undefined1)_UNK_14307691c;
    uStack_87 = (undefined7)((ulonglong)_UNK_14307691c >> 8);
    puStack_70 = (undefined8 *)0x0;
    pbVar11 = uStack_78;
    while ((undefined8 *)CONCAT71(uStack_87,uStack_88) != puStack_70) {
      puStack_70 = (undefined8 *)((longlong)puStack_70 + 1);
      pdb_14098ca70(pbVar11);
      pbVar11 = pbVar11 + 0x20;
    }
    if (plStack_80[1] == 0) {
      return plStack_80;
    }
    param_2 = (byte *)(plStack_80[1] << 5);
    param_3 = 8;
    arg0 = uStack_78;
code_r0x000140c9184f:
    param_1 = (longlong *)CONCAT71(uStack_8f,uStack_90);
    uStack_e8 = CONCAT71(uStack_87,uStack_88);
    pplVar12 = &plStack_80;
code_r0x0001406abac0:
    *(undefined8 *)((longlong)pplVar12 + -8) = uStack_e8;
    *(longlong **)((longlong)pplVar12 + -0x10) = param_1;
    pbVar11 = arg0;
    if (0x10 < param_3) {
      pbVar11 = *(byte **)(arg0 + -8);
    }
    *(undefined **)((longlong)pplVar12 + -0x40) = &UNK_140f3c37e;
    uVar9 = GetProcessHeap(arg0,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (longlong *)HeapFree(uVar9,0,pbVar11);
    return plVar5;
  case 0x2d:
    *(char *)plVar5 = (char)*plVar5 + cVar4;
    goto code_r0x000140c9174d;
  }
  uStack_78._5_3_ = (undefined3)((uint)uStack_54 >> 8);
  puStack_70 = (undefined8 *)CONCAT71(uStack_4f,uStack_50);
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  uStack_78 = (byte *)CONCAT71(CONCAT34(uStack_78._5_3_,
                                        CONCAT13((undefined1)uStack_54,CONCAT21(uStack_56,bStack_57)
                                                )),cVar4);
  uStack_c8 = &UNK_143076540;
  plStack_c0 = (longlong *)0x3;
  pdb_141b4d6f0(&cStack_58,&uStack_78,&UNK_14307651e,0x20);
  lVar7 = CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(bStack_57,cStack_58)));
  pbVar11 = (byte *)CONCAT71(uStack_4f,uStack_50);
  if (lVar7 == 3) {
    pbStack_38 = pbVar11;
    if (*(longlong *)pbVar11 == 1) {
      pdb_1404b38e0(pbVar11 + 8);
    }
    else if ((*(longlong *)pbVar11 == 0) && (*(ulonglong *)(pbVar11 + 0x10) != 0)) {
      pub_1406abac0(*(byte **)(pbVar11 + 8),*(ulonglong *)(pbVar11 + 0x10),1);
    }
    pbVar11 = (byte *)0x28;
    pub_1406abac0(pbStack_38,0x28,8);
    puVar14 = &uStack_78;
    if ((char)uStack_78 == '\x13') {
      puVar14 = puStack_70;
    }
    lVar7 = pdb_141b57340(puVar14);
    lVar7 = lVar7 + 3;
    if (lVar7 == 4) {
      pbStack_38 = pbVar11;
      if (*(longlong *)pbVar11 == 1) {
        pdb_1404b38e0(pbVar11 + 8);
      }
      else if ((*(longlong *)pbVar11 == 0) && (*(ulonglong *)(pbVar11 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(pbVar11 + 8),*(ulonglong *)(pbVar11 + 0x10),1);
      }
      pub_1406abac0(pbStack_38,0x28,8);
      pbVar11 = (byte *)pdb_142d86fc0(&UNK_1430764d0,0x4e);
      pdb_140c91760(&uStack_78);
code_r0x000140c90f30:
      lVar6 = 3;
      goto code_r0x000140c90f35;
    }
  }
  pdb_140c91760(&uStack_78);
  lVar6 = 0;
  if (lVar7 - 1U < 2) {
    lVar6 = lVar7;
  }
code_r0x000140c90f35:
  param_1[1] = (longlong)pbVar11;
  *param_1 = lVar6;
  return param_1;
code_r0x000140c9172a:
  pbVar11 = param_2 + 0x40;
  plVar5 = (longlong *)0x0;
  if ((*(ulonglong *)(param_2 + 0x30) & 0x7fffffffffffffff) != 0) {
    arg0 = *(byte **)(*(longlong *)(param_2 + 0x28) + 8);
    param_3 = 1;
code_r0x000140c9174d:
    pub_1406abac0(arg0,*(ulonglong *)(pbVar11 + -0x10),param_3);
    plVar5 = extraout_RAX;
  }
  return plVar5;
}

