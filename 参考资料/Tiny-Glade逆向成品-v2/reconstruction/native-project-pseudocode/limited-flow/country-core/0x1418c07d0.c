// VA 0x1418c07d0, PDB extent 311 bytes
// country_core::resources::session::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001418c21b4) overlaps instruction at (ram,0x0001418c21b3)
    */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 311 */

byte * pdb_1418c07d0(byte *param_1,uint *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  ulonglong uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined6 uVar10;
  undefined8 *puVar11;
  undefined8 *unaff_RBP;
  undefined8 uVar12;
  char *pcStack_48;
  char *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar9 = *param_2;
  pdb_14007ee60();
  pbVar4 = (byte *)&UNK_143356934;
  uVar7 = (ulonglong)*(int *)(&UNK_143356934 + (ulonglong)(byte)uVar9 * 4);
  puVar8 = &UNK_143356934 + uVar7;
  cVar6 = (char)puVar8;
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)pcStack_38;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)uVar9) {
  case 0:
    uVar12 = 6;
    pbVar4 = pub_1406abab0(6,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[4] = 0x65;
      pbVar4[5] = 0x72;
      pbVar4[0] = 0x53;
      pbVar4[1] = 0x75;
      pbVar4[2] = 0x6d;
      pbVar4[3] = 0x6d;
code_r0x0001418c08c0:
      *param_1 = 3;
      *(undefined8 *)(param_1 + 8) = uVar12;
      *(byte **)(param_1 + 0x10) = pbVar4;
      *(undefined8 *)(param_1 + 0x18) = uVar12;
      return param_1;
    }
    break;
  case 1:
    uVar12 = 5;
    pbVar4 = pub_1406abab0(5,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[4] = 0x6e;
      pbVar4[0] = 0x4f;
      pbVar4[1] = 0x6c;
      pbVar4[2] = 100;
      pbVar4[3] = 0x65;
      goto code_r0x0001418c08c0;
    }
    goto code_r0x0001418c08f7;
  case 2:
    uVar12 = 7;
    pbVar4 = pub_1406abab0(7,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[3] = 0x77;
      pbVar4[4] = 0x65;
      pbVar4[5] = 0x72;
      pbVar4[6] = 0x79;
      pbVar4[0] = 0x46;
      pbVar4[1] = 0x6c;
      pbVar4[2] = 0x6f;
      pbVar4[3] = 0x77;
      goto code_r0x0001418c08c0;
    }
    goto code_r0x0001418c08e8;
  case 3:
    uVar12 = 6;
    pbVar4 = pub_1406abab0(6,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[4] = 0x6d;
      pbVar4[5] = 0x6e;
      pbVar4[0] = 0x41;
      pbVar4[1] = 0x75;
      pbVar4[2] = 0x74;
      pbVar4[3] = 0x75;
      goto code_r0x0001418c08c0;
    }
    break;
  case 4:
    uVar12 = 6;
    pbVar4 = pub_1406abab0(6,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[4] = 0x65;
      pbVar4[5] = 0x72;
      pbVar4[0] = 0x57;
      pbVar4[1] = 0x69;
      pbVar4[2] = 0x6e;
      pbVar4[3] = 0x74;
      goto code_r0x0001418c08c0;
    }
    break;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    *pcStack_38 = *pcStack_38 + cVar2;
    pcStack_38[-0x77] = pcStack_38[-0x77] + cVar6;
    pcVar1 = (code *)swi(1);
    pbVar4 = (byte *)(*pcVar1)();
    return pbVar4;
  case 7:
    pdb_142db8640(param_1);
    return param_1;
  case 8:
    *pcStack_38 = *pcStack_38 + cVar2;
    pcStack_38[-0x77] = pcStack_38[-0x77] + cVar6;
    pcVar1 = (code *)swi(1);
    pbVar4 = (byte *)(*pcVar1)();
    return pbVar4;
  case 9:
    *pcStack_38 = *pcStack_38 + cVar2;
    pcStack_38[-0x77] = pcStack_38[-0x77] + cVar6;
    pcVar1 = (code *)swi(1);
    pbVar4 = (byte *)(*pcVar1)();
    return pbVar4;
  case 10:
    return (byte *)&UNK_143356934;
  case 0xb:
    goto code_r0x0001418c0aa7;
  case 0xc:
                    /* WARNING: Could not emulate address calculation at 0x0001418c0a35 */
                    /* WARNING: Treating indirect jump as call */
    pbVar4 = (byte *)(*(code *)(&UNK_14335695c + *(int *)(&UNK_14335695c + (longlong)puVar8 * 4)))
                               (&UNK_14335695c + *(int *)(&UNK_14335695c + (longlong)puVar8 * 4),
                                CONCAT62(uVar10,CONCAT11(9,(char)param_2)) + 8);
    return pbVar4;
  case 0xd:
    pbVar4 = (byte *)pdb_14054e5c0(0x43356249);
    if (pbVar4 == (byte *)0x0) {
      return (byte *)0x0;
    }
code_r0x0001418c0aa7:
    uStack_20 = 0xfffffffffffffffe;
    puStack_30 = (undefined *)0x0;
    uStack_28 = 0;
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(0x28,8);
    if (pbVar5 != (byte *)0x0) {
      *(undefined8 *)(pbVar5 + 0x20) = uStack_28;
      *(char **)(pbVar5 + 0x10) = pcStack_38;
      *(undefined **)(pbVar5 + 0x18) = puStack_30;
      pbVar5[0] = 1;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      *(byte **)(pbVar5 + 8) = pbVar4;
      return pbVar5;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  case 0xe:
    pcVar1 = (code *)swi(3);
    pbVar4 = (byte *)(*pcVar1)();
    return pbVar4;
  case 0xf:
    *(uint *)(param_1 + 8) = (uint)puVar8;
    UNK_143356934 = 1;
    return pbVar4;
  default:
    puVar11 = (undefined8 *)&stack0xffffffffffffffc0;
    cVar2 = '\x10';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    pbVar4 = (byte *)&UNK_1433569bc;
    UNK_1433569bc = UNK_1433569bc + -0x44;
code_r0x0001418c1552:
    pbVar4[1] = 4;
    *pbVar4 = 0;
    return pbVar4;
  case 0x12:
    pbVar4 = &UNK_1433569b7;
    uVar9 = (uint)CONCAT62(uVar10,CONCAT11(0x52,(char)param_2)) | (uint)puVar8;
    goto code_r0x0001418c1527;
  case 0x17:
    *(uint *)(&UNK_143356935 + uVar7) = *(uint *)(&UNK_143356935 + uVar7) | 0xe0ff41c8;
    if ((byte)param_2[1] == 0x65 && *param_2 == 0x64616c67) {
      UNK_143356935 = 0;
      UNK_143356934 = 0;
      return pbVar4;
    }
    uVar9 = (byte)param_2[1] ^ 0x65 | *param_2 ^ 0x67616d69;
code_r0x0001418c1527:
    if (uVar9 == 0) {
      pbVar4[1] = 2;
      *pbVar4 = 0;
      return pbVar4;
    }
LAB_1418c158b:
    pbVar4[1] = 5;
    *pbVar4 = 0;
    return pbVar4;
  case 0x1a:
    out(*(undefined4 *)param_1,(short)param_2);
    if (0xfffffffebcca96cb < uVar7) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (byte *)(*pcVar1)();
      return pbVar4;
    }
    out(*(undefined4 *)(param_1 + 4),(short)param_2);
    if (*(longlong *)((longlong)param_2 + 5) == 0x6e696769726f5f74 &&
        puVar8 == *(undefined **)param_2) goto code_r0x0001418c1552;
    goto LAB_1418c158b;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x21:
    func_0x000159d4aefc();
    pdb_1409a45e0();
    param_2 = (uint *)unaff_RBP[-2];
    goto code_r0x0001418c21bd;
  case 0x1e:
    UNK_1433568bf = UNK_1433568bf + cVar6;
    return pbVar4;
  case 0x1f:
    UNK_143356934 = UNK_143356934 + '4';
    UNK_1433568c1 = UNK_1433568c1 + cVar6;
                    /* WARNING: Could not emulate address calculation at 0x0001418c217d */
                    /* WARNING: Treating indirect jump as call */
    pbVar4 = (byte *)(*(code *)(puVar8 + *(int *)(uVar7 + 0x2522b0e10)))();
    return pbVar4;
  case 0x20:
    param_1[(longlong)puVar8] = param_1[(longlong)puVar8] + 0x97;
    (*pcRam00000001338af47c)();
code_r0x0001418c21bd:
    if ((!SBORROW8(0,(longlong)param_2)) && (param_2 != (uint *)0x0)) {
      uVar12 = *(undefined8 *)((byte *)unaff_RBP[-3] + 8);
      puStack_30 = &UNK_140f3c37e;
      uVar3 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar4 = (byte *)HeapFree(uVar3,0,uVar12);
      return pbVar4;
    }
    return (byte *)unaff_RBP[-3];
  case 0x22:
    *param_1 = *param_1 + 1;
    *(byte *)((longlong)param_2 + -0x61) = *(byte *)((longlong)param_2 + -0x61) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pdb_142dc7e2a(1,6);
code_r0x0001418c08e8:
  pdb_142dc7e2a(1,7);
code_r0x0001418c08f7:
  pdb_142dc7e2a(1,5);
  pcVar1 = (code *)swi(3);
  pbVar4 = (byte *)(*pcVar1)();
  return pbVar4;
}

