// VA 0x1418c0910, PDB extent 267 bytes
// country_core::resources::session::_::impl$0::serialize<serde_json::value::ser::RawValueEmitter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001418c21c8) overlaps instruction at (ram,0x0001418c21c5)
    */
/* WARNING: Removing unreachable block (ram,0x0001433568e9) */
/* WARNING: Removing unreachable block (ram,0x0001433568d3) */
/* WARNING: Removing unreachable block (ram,0x0001433568f8) */
/* WARNING: Removing unreachable block (ram,0x00014335690d) */
/* WARNING: Removing unreachable block (ram,0x0001433568fa) */
/* WARNING: Removing unreachable block (ram,0x0001433568fe) */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Removing unreachable block (ram,0x00014335690f) */
/* WARNING: Removing unreachable block (ram,0x000143356914) */
/* WARNING: Removing unreachable block (ram,0x000143356987) */
/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::serialize<serde_json::value::ser::RawValueEmitter>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 267 */

byte * pdb_1418c0910(byte *param_1,byte *param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uStackX_8;
  undefined1 auStackX_10 [24];
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  ppuVar4 = (undefined **)&uStack_38;
  UNRECOVERED_JUMPTABLE = (code *)&UNK_143356948;
  uVar2 = (ulonglong)*(int *)(&UNK_143356948 + (ulonglong)*param_2 * 4);
  bVar7 = 0xfffffffebcca96b7 < uVar2;
  pbVar3 = &UNK_143356948 + uVar2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uVar6 = 0;
    break;
  case 1:
    uVar6 = 1;
    break;
  case 2:
    uVar6 = 2;
    break;
  case 3:
    uVar6 = 3;
    break;
  case 4:
    uVar6 = 4;
    break;
  case 5:
    param_2 = param_2 + 8;
    UNRECOVERED_JUMPTABLE = (code *)(&UNK_14335695c + iRam00000006500b0e7c);
  case 7:
code_r0x0001418c0a3c:
                    /* WARNING: Could not recover jumptable at 0x0001418c0a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar3 = (byte *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_2);
    return pbVar3;
  case 6:
    puStack_40 = (undefined *)0x1418c0a81;
    puStack_40 = (undefined *)pdb_14054e5c0(pbVar3);
    goto joined_r0x0001418c0a68;
  case 8:
    puStack_40 = (undefined *)0x1418c0a65;
    puStack_40 = (undefined *)pdb_14054e5c0(pbVar3);
joined_r0x0001418c0a68:
    if (puStack_40 == (undefined *)0x0) {
      return (byte *)0x0;
    }
    uStack_20 = 0xfffffffffffffffe;
    uStack_30 = 0;
    uStack_28 = 0;
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(0x28,8);
    if (pbVar3 != (byte *)0x0) {
      *(undefined8 *)(pbVar3 + 0x20) = uStack_28;
      *(undefined8 *)(pbVar3 + 0x10) = uStack_38;
      *(undefined8 *)(pbVar3 + 0x18) = uStack_30;
      pbVar3[0] = 1;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      *(undefined **)(pbVar3 + 8) = puStack_40;
      return pbVar3;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  case 9:
    *(undefined1 *)(uVar2 + 0x2866ad251) = 0x48;
    goto code_r0x0001418c0a3c;
  case 10:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pbVar3 = (byte *)(*UNRECOVERED_JUMPTABLE)();
    return pbVar3;
  default:
    if (bVar7) {
      puStack_40 = &UNK_1418c15fd;
      pbVar3 = (byte *)pdb_140f66e50(pbVar3,&UNK_143356880,10,&UNK_14335688a);
      return pbVar3;
    }
    if (*(undefined **)param_2 == &UNK_143356948) {
      (&UNK_143356949)[uVar2] = 1;
      *pbVar3 = 0;
      return pbVar3;
    }
    goto LAB_1418c158b;
  case 0xd:
    if (bVar7) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pbVar3 = (byte *)(*UNRECOVERED_JUMPTABLE)();
      return pbVar3;
    }
    out(*(undefined4 *)param_1,(short)param_2);
    if (*(longlong *)(param_2 + 5) == 0x6e696769726f5f74 && *(longlong *)param_2 == 0x6f706d69) {
      (&UNK_143356949)[uVar2] = 4;
      goto code_r0x0001418c154b;
    }
    goto LAB_1418c158b;
  case 0x12:
    pbVar3 = (byte *)(ulonglong)param_2[4];
    if (((uint)param_3 ^ 0x65 | 0x43356948) == 0) {
      pbVar3[1] = 0;
      *pbVar3 = 0;
      return pbVar3;
    }
    if (param_2[4] == 0x65 && *(int *)param_2 == 0x67616d69) {
      pbVar3[1] = 2;
      *pbVar3 = 0;
      return pbVar3;
    }
LAB_1418c158b:
    pbVar3[1] = 5;
    *pbVar3 = 0;
    return pbVar3;
  case 0x15:
code_r0x0001418c154b:
    pbVar3 = (byte *)(ulonglong)((int)pbVar3 + 0x75c80949);
    *pbVar3 = 0;
    return pbVar3;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1c:
    puStack_40 = &UNK_1418c21cb;
    pbVar3 = (byte *)func_0x000190ff733b();
    goto code_r0x0001418c21cb;
  case 0x19:
    return pbVar3;
  case 0x1a:
    if (*(int *)(&UNK_143356958 + uVar2) == 0) {
      return pbVar3;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    puVar5 = auStackX_10;
    goto pub_1406abac0;
  case 0x1b:
    ppuVar4 = &puStack_40;
    puStack_40 = &UNK_143356948;
    if (!bVar7) {
      return pbVar3;
    }
code_r0x0001418c21cb:
    uVar6 = *(undefined8 *)(pbVar3 + 8);
    uStackX_8 = *(undefined8 *)((longlong)ppuVar4 + 0x40);
    puVar5 = (undefined1 *)((longlong)ppuVar4 + 0x48);
pub_1406abac0:
    *(undefined8 *)(puVar5 + -8) = uStackX_8;
    *(byte **)(puVar5 + -0x10) = param_1;
    *(undefined **)(puVar5 + -0x40) = &UNK_140f3c37e;
    uVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar3 = (byte *)HeapFree(uVar1,0,uVar6);
    return pbVar3;
  case 0x1d:
    param_2[0x40fe56a0] = param_2[0x40fe56a0] + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puStack_40 = (undefined *)0x1418c0a12;
  pdb_142db8640(param_1,&UNK_143356228,9,uVar6);
  return param_1;
}

