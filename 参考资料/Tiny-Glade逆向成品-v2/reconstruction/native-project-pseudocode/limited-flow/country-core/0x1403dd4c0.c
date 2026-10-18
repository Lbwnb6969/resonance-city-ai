// VA 0x1403dd4c0, PDB extent 414 bytes
// country_core::resources::toolbar::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001403dd9a8) overlaps instruction at (ram,0x0001403dd9a5)
    */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::toolbar::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
   Extent: 414 */

byte * pdb_1403dd4c0(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 unaff_RSI;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStackX_18;
  undefined1 auStackX_20 [8];
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  ppuVar3 = (undefined **)&uStack_28;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar5 = &UNK_142f5058c;
    uVar6 = 8;
    break;
  case 1:
    puVar5 = &UNK_142f50516;
    uVar6 = 4;
    break;
  case 2:
    puVar5 = &UNK_142f50594;
    uVar6 = 10;
    break;
  case 3:
    puVar5 = &UNK_142f5059e;
    goto code_r0x0001403dd638;
  case 4:
    puVar5 = &UNK_142f505ab;
    uVar6 = 6;
    break;
  case 5:
    puVar5 = &UNK_142f5056d;
    uVar6 = 4;
    break;
  case 6:
    puVar5 = &UNK_142f5050f;
    uVar6 = 7;
    break;
  case 7:
    puVar5 = &UNK_142f505b1;
    uVar6 = 7;
    break;
  case 8:
    puVar5 = &UNK_142f5053e;
    uVar6 = 5;
    break;
  case 9:
    puVar5 = &UNK_142f50543;
    uVar6 = 6;
    break;
  case 10:
    puVar5 = &UNK_142f505b8;
    uVar6 = 9;
    break;
  case 0xb:
    puVar5 = &UNK_142f505c1;
    uVar6 = 9;
    break;
  case 0xc:
    puVar5 = &UNK_142f505ca;
    uVar6 = 0xf;
    break;
  case 0xd:
    puVar5 = &UNK_142f505d9;
    uVar6 = 0xf;
    break;
  case 0xe:
    puVar5 = &UNK_142f505e8;
    uVar6 = 0xc;
    break;
  case 0xf:
    puVar5 = &UNK_142f505f4;
    uVar6 = 0xe;
    break;
  case 0x10:
    puVar5 = &UNK_142f50602;
    uVar6 = 0xc;
    break;
  case 0x11:
    puVar5 = &UNK_142f5060e;
    uVar6 = 0x10;
    break;
  case 0x12:
    puVar5 = &UNK_142f5061e;
    uVar6 = 0x10;
    break;
  case 0x13:
    puVar5 = &UNK_142f5062e;
    goto code_r0x0001403dd638;
  case 0x14:
    puVar5 = &UNK_142f5063b;
    uVar6 = 0x11;
    break;
  case 0x15:
    puVar5 = &UNK_142f5064c;
code_r0x0001403dd638:
    uVar6 = 0xd;
    break;
  default:
    puStack_30 = &UNK_1403dd9ab;
    param_2 = (byte *)func_0x00018fb12b1b(&UNK_142f50858 +
                                          *(int *)(&UNK_142f50858 + (ulonglong)*param_1 * 4),
                                          param_2 + 8);
    goto code_r0x0001403dd9ab;
  case 0x19:
    return param_2;
  case 0x1a:
    if (*(int *)(param_2 + 0x10) == 0) {
      return param_2;
    }
    puVar4 = auStackX_20;
    uVar6 = _UNK_142f50870;
    goto pub_1406abac0;
  case 0x1b:
    ppuVar3 = &puStack_30;
    puStack_30 = &UNK_142f50858 + *(int *)(&UNK_142f50858 + (ulonglong)*param_1 * 4);
    if ((ulonglong)(longlong)*(int *)(&UNK_142f50858 + (ulonglong)*param_1 * 4) < 0xfffffffebd0af7a8
       ) {
      return param_2;
    }
code_r0x0001403dd9ab:
    uStackX_18 = *(undefined8 *)((longlong)ppuVar3 + 0x40);
    puVar4 = (undefined1 *)((longlong)ppuVar3 + 0x48);
    uVar6 = *(undefined8 *)(param_2 + 8);
pub_1406abac0:
    *(undefined8 *)(puVar4 + -8) = uStackX_18;
    *(undefined8 *)(puVar4 + -0x10) = unaff_RSI;
    *(undefined **)(puVar4 + -0x40) = &UNK_140f3c37e;
    uVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar2 = (byte *)HeapFree(uVar1,0,uVar6);
    return pbVar2;
  }
  puStack_30 = (undefined *)0x1403dd646;
  puStack_30 = (undefined *)pdb_14054e5c0(param_2,param_2 + 8,puVar5,uVar6);
  if (puStack_30 == (undefined *)0x0) {
    return (byte *)0x0;
  }
  uStack_10 = 0xfffffffffffffffe;
  uStack_20 = 0;
  uStack_18 = 0;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x28,8);
  if (pbVar2 != (byte *)0x0) {
    *(undefined8 *)(pbVar2 + 0x20) = uStack_18;
    *(undefined8 *)(pbVar2 + 0x10) = uStack_28;
    *(undefined8 *)(pbVar2 + 0x18) = uStack_20;
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    *(undefined **)(pbVar2 + 8) = puStack_30;
    return pbVar2;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x28);
}

