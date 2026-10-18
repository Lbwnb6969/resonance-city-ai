// VA 0x1400f8f50, PDB extent 3188 bytes
// country_core::systems::mode_manager::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142e421c6) overlaps instruction at (ram,0x000142e421c4)
    */
/* WARNING: Removing unreachable block (ram,0x000142e4221b) */
/* WARNING: Removing unreachable block (ram,0x000142e4221f) */
/* WARNING: Removing unreachable block (ram,0x000142e42296) */
/* WARNING: Removing unreachable block (ram,0x0001400f9bab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 3188 */

byte * pdb_1400f8f50(byte *param_1,ulonglong *param_2,undefined *param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined7 uVar12;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined *puVar13;
  ulonglong unaff_RBX;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  byte bVar19;
  undefined8 *unaff_RBP;
  undefined8 *puVar20;
  uint uVar21;
  ulonglong *unaff_RDI;
  ulonglong uVar22;
  int iVar23;
  ulonglong unaff_R14;
  bool bVar24;
  bool bVar25;
  undefined4 in_XMM1_Da;
  undefined1 auStack_2ce5 [11237];
  undefined *puStack_100;
  ulonglong auStack_d8 [3];
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  longlong lStack_80;
  undefined *puStack_78;
  ulonglong *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined4 *puVar11;
  
  puVar14 = (undefined8 *)auStack_88;
  puVar17 = auStack_88;
  puVar18 = auStack_88;
  puVar13 = &UNK_142e421c0;
  uVar6 = (ulonglong)*(int *)(&UNK_142e421c0 + (ulonglong)*param_1 * 4);
  pbVar7 = (byte *)(&UNK_142e421c0 + uVar6);
  cVar4 = (char)pbVar7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9960;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x7b;
    plVar2[2] = lVar9 + 1;
    puStack_90 = (undefined *)0x1400f8fb0;
    lVar9 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e41b20,7);
    if (lVar9 == 0) {
      plVar2 = (longlong *)*param_2;
      lVar9 = plVar2[2];
      if (*plVar2 == lVar9) {
        uStack_68 = 1;
        puStack_90 = (undefined *)0x1400f9ad1;
        pdb_142d7f1b0(plVar2,lVar9,1,1);
        lVar9 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar9) = 0x3a;
      plVar2[2] = lVar9 + 1;
                    /* WARNING: Could not recover jumptable at 0x0001400f8fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar7 = (byte *)(*(code *)(&UNK_142e42224 +
                                 *(int *)(&UNK_142e42224 + (ulonglong)*(uint *)(param_1 + 8) * 4)))
                                 ();
      return pbVar7;
    }
    goto code_r0x0001400f94b6;
  case 1:
    bVar19 = param_1[1];
    unaff_RDI = param_2 + 1;
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9986;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x7b;
    plVar2[2] = lVar9 + 1;
    puStack_90 = (undefined *)0x1400f92db;
    lVar9 = pdb_14054e5c0(param_2,unaff_RDI,&UNK_142e41b27,4);
    if (lVar9 != 0) goto code_r0x0001400f94b6;
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9af7;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x3a;
    plVar2[2] = lVar9 + 1;
    if (bVar19 == 0) {
      param_3 = &UNK_142e41ba2;
      param_4 = 8;
    }
    else if (bVar19 == 1) {
      param_3 = &UNK_142e41baa;
      param_4 = 6;
    }
    else {
      param_3 = &UNK_142e41bb0;
      param_4 = 9;
    }
    goto code_r0x0001400f9691;
  case 2:
    puVar13 = &UNK_142e41b2b;
    goto code_r0x0001400f917c;
  case 3:
    uVar6 = *(ulonglong *)(param_1 + 8);
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9934;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x7b;
    plVar2[2] = lVar9 + 1;
    puStack_90 = (undefined *)0x1400f91d9;
    lVar9 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e41b2f,0xb);
    if (lVar9 != 0) goto code_r0x0001400f94b6;
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9a85;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x3a;
    plVar2[2] = lVar9 + 1;
    lVar9 = 0x14;
    uVar22 = uVar6;
    if (9999 < uVar6) {
      do {
        uVar6 = uVar22 / 10000;
        iVar23 = (int)uVar22 + (int)uVar6 * -10000;
        uVar21 = (uint)(iVar23 * 0x147b) >> 0x13;
        *(undefined2 *)(auStack_40 + lVar9 + -0x1c) =
             *(undefined2 *)(&UNK_142e41ff0 + (ulonglong)uVar21 * 2);
        *(undefined2 *)(auStack_40 + lVar9 + -0x1a) =
             *(undefined2 *)(&UNK_142e41ff0 + (ulonglong)(iVar23 + uVar21 * -100 & 0xffff) * 2);
        lVar9 = lVar9 + -4;
        bVar25 = 99999999 < uVar22;
        uVar22 = uVar6;
      } while (bVar25);
    }
    if (99 < uVar6) {
      iVar23 = (int)uVar6;
      uVar21 = ((uint)(uVar6 >> 2) & 0xffff) * 0x147b >> 0x11;
      uVar6 = (ulonglong)uVar21;
      *(undefined2 *)(auStack_40 + lVar9 + -0x1a) =
           *(undefined2 *)(&UNK_142e41ff0 + (ulonglong)(iVar23 + uVar21 * -100 & 0xffff) * 2);
      lVar9 = lVar9 + -2;
    }
    unaff_RDI = (ulonglong *)*param_2;
    if (uVar6 < 10) {
      auStack_40[lVar9 + -0x19] = (byte)uVar6 | 0x30;
      lVar9 = lVar9 + -1;
    }
    else {
      *(undefined2 *)(auStack_40 + lVar9 + -0x1a) = *(undefined2 *)(&UNK_142e41ff0 + uVar6 * 2);
      lVar9 = lVar9 + -2;
    }
    unaff_RBX = 0x14 - lVar9;
    unaff_R14 = unaff_RDI[2];
    if (*unaff_RDI - unaff_R14 < unaff_RBX) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9aab;
      pdb_142d7f1b0(unaff_RDI,unaff_R14,unaff_RBX,1);
      unaff_R14 = unaff_RDI[2];
code_r0x0001400f956d:
      puVar13 = &stack0xffffffffffffffa8 + lVar9;
      goto code_r0x0001400f95cf;
    }
    if (lVar9 != 0x14) goto code_r0x0001400f956d;
    goto code_r0x0001400f95de;
  case 4:
    bVar19 = param_1[1];
    puVar20 = (undefined8 *)(ulonglong)bVar19;
    unaff_RDI = param_2 + 1;
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9908;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x7b;
    plVar2[2] = lVar9 + 1;
    param_3 = &UNK_142e41b3a;
    puStack_90 = (undefined *)0x1400f9102;
    lVar9 = pdb_14054e5c0(param_2,unaff_RDI,&UNK_142e41b3a,6);
    if (lVar9 != 0) goto code_r0x0001400f94b6;
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      param_3 = (undefined *)0x1;
      puStack_90 = (undefined *)0x1400f9a5f;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x3a;
    lVar9 = lVar9 + 1;
    plVar2[2] = lVar9;
    param_1 = &UNK_142e42208;
    uVar6 = (ulonglong)*(int *)(&UNK_142e42208 + (longlong)puVar20 * 4);
    bVar24 = 0xfffffffebd1bddf7 < uVar6;
    pbVar7 = &UNK_142e42208 + uVar6;
    bVar25 = pbVar7 == (byte *)0x0;
    cVar4 = (char)pbVar7;
    uVar12 = (undefined7)((ulonglong)pbVar7 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar19) {
    case 0:
      param_3 = &UNK_142e41beb;
      param_4 = 3;
      break;
    case 1:
      goto code_r0x0001400f964e;
    case 2:
      goto code_r0x0001400f960c;
    case 3:
      goto code_r0x0001400f9615;
    case 4:
      param_3 = &UNK_142e41b6e;
      param_4 = 5;
      break;
    case 5:
      param_3 = &UNK_142e41b77;
      param_4 = 6;
      break;
    case 6:
      goto code_r0x0001400f9684;
    case 7:
      return pbVar7;
    case 8:
      goto code_r0x0001400f96c6;
    case 9:
      uVar21 = ((int)pbVar7 - _UNK_142e42208) - (uint)bVar24;
      *(char *)(ulonglong)uVar21 = *(char *)(ulonglong)uVar21 + (char)uVar21;
      goto code_r0x0001400f964e;
    case 10:
      param_2 = (ulonglong *)CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 | (byte)param_3)
      ;
      if (-0x11 < cVar4) {
        pcVar3 = (code *)swi(1);
        pbVar7 = (byte *)(*pcVar3)();
        return pbVar7;
      }
      uVar6 = (ulonglong)((int)lVar9 + 1);
      goto code_r0x0001400f96b5;
    case 0xb:
      goto code_r0x0001400f9608;
    case 0xc:
      cVar4 = cVar4 + UNK_142e421c0;
      piVar8 = (int *)CONCAT71(uVar12,cVar4);
      *piVar8 = *piVar8 + (int)piVar8;
      *(char *)piVar8 = (char)*piVar8 + cVar4;
      goto code_r0x0001400f9718;
    case 0xd:
      goto code_r0x0001400f97ef;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x14:
      UNK_142e42193 = (UNK_142e42193 + -8) - bVar24;
      (&UNK_142e42191)[uVar6] = (&UNK_142e42191)[uVar6] & 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
      goto code_r0x0001400f9c37;
    case 0x13:
      *(undefined4 *)(puVar20 + -2) = 0x42e42208;
code_r0x0001400f9c7b:
      puVar20[-3] = param_3;
      puStack_90 = &UNK_1400f9c84;
      pdb_1404be800(param_1,lVar9);
      lVar9 = *(longlong *)((byte *)puVar20[-3] + 0x10);
      if (lVar9 == 0) {
        return (byte *)puVar20[-3];
      }
      puVar13 = (undefined *)(lVar9 << 5);
      param_3 = (undefined *)0x8;
      param_1 = (byte *)puVar20[-2];
      puVar15 = (undefined8 *)auStack_40;
      goto code_r0x0001406abac0;
    default:
      pbVar7 = (byte *)((ulonglong)pbVar7 ^ 0x6f);
    case 0x1c:
    case 0x21:
    case 0x26:
    case 0x34:
    case 0x39:
code_r0x000142e4220a:
      bVar25 = (uint)unaff_RDI == (uint)bVar19;
code_r0x000142e4220c:
      if (bVar25) {
code_r0x000142e4223a:
        uVar5 = SUB84(pbVar7,0);
code_r0x000142e4223c:
        out(0x75,uVar5);
        *(undefined8 *)(puVar17 + -8) = 0x7a;
        *(undefined8 *)(puVar17 + -0x10) = 0x7a;
        puVar18 = puVar17 + -0x10;
      }
      else {
code_r0x000142e4220f:
        puVar18 = auStack_88;
      }
code_r0x000142e42246:
      *(undefined8 *)(puVar18 + -8) = 0x7a;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x16:
    case 0x1b:
    case 0x23:
    case 0x30:
    case 0x31:
      goto code_r0x000142e4220f;
    case 0x17:
    case 0x2a:
    case 0x2b:
    case 0x2f:
      if (!bVar25) goto code_r0x000142e4220f;
      goto code_r0x000142e4223a;
    case 0x18:
    case 0x19:
    case 0x29:
    case 0x36:
    case 0x37:
      goto code_r0x000142e4220c;
    case 0x1a:
    case 0x24:
    case 0x25:
    case 0x35:
      goto code_r0x000142e42246;
    case 0x1e:
    case 0x1f:
    case 0x2c:
    case 0x2e:
    case 0x33:
      out((int)*param_2,(short)lVar9);
      goto code_r0x000142e4220a;
    case 0x20:
    case 0x22:
    case 0x27:
    case 0x32:
      goto code_r0x000142e4220c;
    case 0x3a:
      cVar4 = (cVar4 + -0x1f) - bVar24;
      puVar11 = (undefined4 *)CONCAT71(uVar12,cVar4);
      pbVar7 = (byte *)((longlong)puVar11 * 2);
      bVar19 = *pbVar7;
      *pbVar7 = *pbVar7 + 8;
      *(char *)((longlong)plVar2 + 0x22) =
           *(char *)((longlong)plVar2 + 0x22) + ((cVar4 - (char)*puVar11) - (0xf7 < bVar19));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x0001400f9691;
  case 5:
    puVar13 = &UNK_142e41b40;
    uVar10 = 7;
    break;
  case 6:
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f99b5;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x7b;
    plVar2[2] = lVar9 + 1;
    puStack_90 = (undefined *)0x1400f93a3;
    lVar9 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e41b47,9);
    if (lVar9 != 0) goto code_r0x0001400f94b6;
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9b20;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x3a;
    plVar2[2] = lVar9 + 1;
    puStack_90 = (undefined *)0x1400f93da;
    pbVar7 = (byte *)pdb_1403595b0(param_1 + 8,param_2);
    if (pbVar7 != (byte *)0x0) {
      return pbVar7;
    }
    goto code_r0x0001400f96a5;
  case 7:
    puVar13 = &UNK_142e41b50;
    uVar10 = 5;
    break;
  case 8:
    puVar13 = &UNK_142e41b55;
    uVar10 = 0xb;
    break;
  case 9:
    puVar13 = &UNK_142e41b60;
    uVar10 = 6;
    break;
  case 10:
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f99e4;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x7b;
    plVar2[2] = lVar9 + 1;
    puStack_90 = (undefined *)0x1400f9420;
    lVar9 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e41b66,8);
    if (lVar9 != 0) goto code_r0x0001400f94b6;
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9b49;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x3a;
    plVar2[2] = lVar9 + 1;
    unaff_RDI = (ulonglong *)*param_2;
    uVar6 = unaff_RDI[2];
    if (*unaff_RDI == uVar6) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9b6f;
      pdb_142d7f1b0(unaff_RDI,uVar6,1,1);
      uVar6 = unaff_RDI[2];
    }
    *(undefined1 *)(unaff_RDI[1] + uVar6) = 0x7b;
    uVar6 = uVar6 + 1;
    unaff_RDI[2] = uVar6;
    if (*unaff_RDI == uVar6) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9b95;
      pdb_142d7f1b0(unaff_RDI,uVar6,1,1);
      uVar6 = unaff_RDI[2];
    }
    goto code_r0x0001400f9470;
  case 0xb:
    puVar13 = &UNK_142e41b6e;
    uVar10 = 5;
    break;
  case 0xc:
    puVar13 = &UNK_142e41b73;
code_r0x0001400f917c:
    uVar10 = 4;
    break;
  case 0xd:
    puVar13 = &UNK_142e41b77;
    uVar10 = 6;
    break;
  case 0xe:
    bVar19 = param_1[1];
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f98df;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x7b;
    plVar2[2] = lVar9 + 1;
    puStack_90 = (undefined *)0x1400f904a;
    lVar9 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e41b7d,10);
    if (lVar9 != 0) goto code_r0x0001400f94b6;
    plVar2 = (longlong *)*param_2;
    lVar9 = plVar2[2];
    if (*plVar2 == lVar9) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9a0d;
      pdb_142d7f1b0(plVar2,lVar9,1,1);
      lVar9 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar9) = 0x3a;
    plVar2[2] = lVar9 + 1;
    unaff_RDI = (ulonglong *)*param_2;
    if (bVar19 < 100) {
      unaff_RBX = 2;
      if (bVar19 < 10) goto code_r0x0001400f94d9;
      unaff_RBX = 1;
    }
    else {
      bVar19 = (byte)((uint)bVar19 + ((uint)bVar19 + (uint)bVar19 * 4) * 8 >> 0xc);
      unaff_RBX = 0;
code_r0x0001400f94d9:
      (&stack0xffffffffffffffa8)[unaff_RBX] = bVar19 | 0x30;
    }
    puVar13 = auStack_88 + unaff_RBX;
    goto code_r0x0001400f95b4;
  case 0xf:
    puVar13 = &UNK_142e41b87;
    uVar10 = 6;
    break;
  case 0x10:
    puVar13 = &UNK_142e41b8d;
    uVar10 = 9;
    break;
  case 0x11:
    puVar13 = &UNK_142e41b96;
    uVar10 = 0xc;
    break;
  case 0x12:
    *pbVar7 = *pbVar7 + cVar4;
    (&UNK_142e42149)[uVar6] = (&UNK_142e42149)[uVar6] + (char)param_1;
    pcVar3 = (code *)swi(1);
    pbVar7 = (byte *)(*pcVar3)();
    return pbVar7;
  case 0x13:
code_r0x0001400f9608:
    *pbVar7 = *pbVar7 + (char)pbVar7;
code_r0x0001400f960c:
    param_3 = &UNK_142e41b2b;
    goto code_r0x0001400f968b;
  case 0x14:
    pbVar7 = (byte *)(ulonglong)(uint)((int)pbVar7 - (int)param_2);
    goto code_r0x0001400f95c3;
  case 0x15:
    *pbVar7 = *pbVar7 + cVar4;
    goto code_r0x0001400f95cf;
  case 0x16:
code_r0x0001400f95b4:
    puVar13 = puVar13 + 0x30;
    unaff_RBX = unaff_RBX ^ 3;
    pbVar7 = (byte *)*unaff_RDI;
    unaff_R14 = unaff_RDI[2];
    goto code_r0x0001400f95c3;
  case 0x17:
    *(char *)((longlong)unaff_RBP + 0x76eb02d4) =
         (*(char *)((longlong)unaff_RBP + 0x76eb02d4) - cVar4) - (0xfffffffebd1bde3f < uVar6);
code_r0x0001400f9615:
    param_3 = &UNK_142e41bee;
    param_4 = 8;
    goto code_r0x0001400f9691;
  case 0x18:
    puStack_90 = (undefined *)0x1400f9774;
    lVar9 = pdb_14054e5c0(param_2,in_XMM1_Da,&UNK_142e41bca,0xb);
    if (lVar9 != 0) {
      puStack_90 = (undefined *)0x1400f9ba6;
      pbVar7 = (byte *)pdb_142db8fb0(lVar9);
      return pbVar7;
    }
    puStack_90 = (undefined *)0x1400f9792;
    pdb_140172c20(*param_2,&UNK_142e418fa,1);
    puStack_90 = (undefined *)0x1400f97a7;
    pdb_140172c20(*param_2,&UNK_142e418f9,1);
  case 0x1f:
    puStack_90 = (undefined *)0x1400f97d1;
    pbVar7 = (byte *)pdb_14054abf0(&stack0xffffffffffffffa8,&UNK_142e41bd5,0xc,unaff_RBX + 0xc);
    if (pbVar7 != (byte *)0x0) {
      return pbVar7;
    }
    bVar25 = false;
    unaff_RDI = param_2;
code_r0x0001400f97ef:
    if (!bVar25) {
      puStack_90 = (undefined *)0x1400f9806;
      pdb_140172c20(*unaff_RDI,&UNK_142e418f8,1);
    }
    uVar6 = *unaff_RDI;
code_r0x0001400f9874:
    puStack_90 = (undefined *)0x1400f9886;
    pdb_140172c20(uVar6,&UNK_142e418f8,1);
    param_2 = (ulonglong *)*param_2;
    uVar6 = param_2[2];
    if (*param_2 == uVar6) goto code_r0x0001400f9896;
    goto code_r0x0001400f96b5;
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
code_r0x0001400f9684:
    param_3 = &UNK_142e41b73;
code_r0x0001400f968b:
    param_4 = 4;
    goto code_r0x0001400f9691;
  case 0x1b:
    goto code_r0x0001400f9691;
  case 0x1c:
    bVar19 = param_1[-0x48];
    piVar8 = (int *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),cVar4 + bVar19);
    *piVar8 = *piVar8 + (int)piVar8;
    *(byte *)piVar8 = (char)*piVar8 + cVar4 + bVar19;
    puStack_90 = (undefined *)0x1400f967b;
    pdb_140172c20();
    puStack_90 = (undefined *)0x1400f970f;
    lVar9 = pdb_14054e5c0(param_2);
    if (lVar9 != 0) goto code_r0x0001400f94b6;
code_r0x0001400f9718:
    puStack_90 = (undefined *)0x1400f9734;
    pdb_140172c20(*param_2,&UNK_142e418fa,1);
    puStack_90 = (undefined *)0x1400f973f;
    pbVar7 = (byte *)pdb_140106140(unaff_R14 + 0x10,param_2);
    if (pbVar7 != (byte *)0x0) {
      return pbVar7;
    }
    uVar6 = *param_2;
    goto code_r0x0001400f9874;
  case 0x1d:
    param_2 = (ulonglong *)(ulonglong)(uint)unaff_RDI[2];
code_r0x0001400f95c3:
    if ((longlong)pbVar7 - unaff_R14 < unaff_RBX) {
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f9a36;
      pdb_142d7f1b0(unaff_RDI,unaff_R14,unaff_RBX,1);
      unaff_R14 = unaff_RDI[2];
    }
code_r0x0001400f95cf:
    puStack_90 = (undefined *)0x1400f95de;
    pub_142e32760(unaff_RDI[1] + unaff_R14,puVar13,unaff_RBX);
code_r0x0001400f95de:
    unaff_RDI[2] = unaff_R14 + unaff_RBX;
    param_2 = (ulonglong *)*param_2;
    uVar6 = param_2[2];
    if (*param_2 == uVar6) goto code_r0x0001400f9896;
    goto code_r0x0001400f96b5;
  case 0x1e:
code_r0x0001400f9691:
    puStack_90 = (undefined *)0x1400f969c;
    lVar9 = pdb_14054e5c0(param_2,unaff_RDI,param_3,param_4);
    if (lVar9 != 0) goto code_r0x0001400f94b6;
code_r0x0001400f96a5:
    param_2 = (ulonglong *)*param_2;
    uVar6 = param_2[2];
    if (*param_2 == uVar6) {
code_r0x0001400f9896:
      uStack_68 = 1;
      puStack_90 = (undefined *)0x1400f98b3;
      pdb_142d7f1b0(param_2,uVar6,1,1);
      uVar6 = param_2[2];
    }
code_r0x0001400f96b5:
    *(undefined1 *)(param_2[1] + uVar6) = 0x7d;
    param_2[2] = uVar6 + 1;
    goto code_r0x0001400f96c4;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x26:
    *pbVar7 = *pbVar7 + cVar4;
    (&UNK_142e42143)[uVar6] = (&UNK_142e42143)[uVar6] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x23:
    uVar6 = (ulonglong)(uint)unaff_RDI[2];
code_r0x0001400f9470:
    *(undefined1 *)(unaff_RDI[1] + uVar6) = 0x7d;
    unaff_RDI[2] = uVar6 + 1;
    param_2 = (ulonglong *)*param_2;
    uVar6 = param_2[2];
    if (*param_2 == uVar6) goto code_r0x0001400f9896;
    goto code_r0x0001400f96b5;
  case 0x24:
    *pbVar7 = *pbVar7 + cVar4;
    pbVar7 = &UNK_142e421f9 + uVar6;
    *pbVar7 = *pbVar7 | 0xc1;
    puVar20 = unaff_RBP;
    if (*pbVar7 != 0) {
code_r0x0001400f9c37:
      puVar20[-2] = param_1;
      puVar20[-3] = param_3;
      puStack_90 = &UNK_1400f9c48;
      pdb_1404dfd20(param_3 + 0x18);
      puVar13 = (undefined *)puVar20[-2];
      pbVar7 = (byte *)puVar20[-3];
      if ((SBORROW8(0,(longlong)puVar13)) || (puVar13 == (undefined *)0x0)) {
code_r0x0001400f9caa:
        return pbVar7;
      }
      param_1 = *(byte **)(pbVar7 + 8);
      param_3 = (undefined *)0x1;
      puVar15 = (undefined8 *)auStack_40;
      goto code_r0x0001406abac0;
    }
    bVar19 = param_3[8];
    if (6 < (ulonglong)bVar19) {
code_r0x0001400f9cb0:
      uStack_68 = 0xfffffffffffffffe;
      lVar9 = *(longlong *)(param_3 + 0x10);
      if (lVar9 == 0) {
        uStack_98 = 0;
      }
      else {
        uStack_c0 = *(undefined8 *)(param_3 + 0x18);
        uStack_98 = *(undefined8 *)(param_3 + 0x20);
        auStack_d8[1] = 0;
        uStack_b0 = 0;
        auStack_d8[2] = lVar9;
        lStack_a8 = lVar9;
        uStack_a0 = uStack_c0;
      }
      auStack_d8[0] = (ulonglong)(lVar9 != 0);
      puStack_100 = &UNK_1404dfd92;
      uStack_b8 = auStack_d8[0];
      pdb_14057f6c0(&puStack_90,auStack_d8);
      if (puStack_90 != (undefined *)0x0) {
        do {
          puStack_78 = puStack_90 + lStack_80 * 0x20;
          puStack_70 = auStack_d8;
          if (*(ulonglong *)(puStack_90 + lStack_80 * 0x18 + 0x168) != 0) {
            puStack_100 = &UNK_1404dfded;
            pub_1406abac0(*(byte **)(puStack_90 + lStack_80 * 0x18 + 0x170),
                          *(ulonglong *)(puStack_90 + lStack_80 * 0x18 + 0x168),1);
          }
          puStack_100 = &UNK_1404dfdf6;
          pdb_140498160(&puStack_78);
          puStack_100 = &UNK_1404dfe02;
          pdb_14057f6c0(&puStack_90,auStack_d8);
        } while (puStack_90 != (undefined *)0x0);
      }
      return (byte *)0x0;
    }
    pbVar7 = &UNK_142e42240 + *(int *)(&UNK_142e42240 + (ulonglong)bVar19 * 4);
    switch(bVar19) {
    default:
      goto code_r0x0001400f9caa;
    case 3:
      puVar13 = *(undefined **)(param_3 + 0x10);
      if (puVar13 == (undefined *)0x0) {
        return pbVar7;
      }
      param_1 = *(byte **)(param_3 + 0x18);
      param_3 = (undefined *)0x1;
      puVar14 = (undefined8 *)auStack_40;
      break;
    case 4:
      param_1 = *(byte **)(param_3 + 0x18);
      lVar9 = *(longlong *)(param_3 + 0x20);
      unaff_RBP[-2] = param_1;
      goto code_r0x0001400f9c7b;
    case 5:
      goto code_r0x0001400f9cb0;
    }
  case 0x25:
    uStack_48 = *puVar14;
    puVar15 = puVar14 + 1;
code_r0x0001406abac0:
    *(undefined8 *)((longlong)puVar15 + -8) = uStack_48;
    *(ulonglong **)((longlong)puVar15 + -0x10) = param_2;
    pbVar7 = param_1;
    if ((undefined *)0x10 < param_3) {
      pbVar7 = *(byte **)(param_1 + -8);
    }
    *(undefined **)((longlong)puVar15 + -0x40) = &UNK_140f3c37e;
    uVar10 = GetProcessHeap(param_1,puVar13);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar7 = (byte *)HeapFree(uVar10,0,pbVar7);
    return pbVar7;
  default:
    goto code_r0x000142e421c2;
  case 0x28:
  case 0x2d:
  case 0x35:
  case 0x42:
  case 0x43:
    goto code_r0x000142e421c7;
  case 0x29:
  case 0x3c:
  case 0x3d:
  case 0x41:
    if (!SCARRY8(uVar6,0x142e421c0)) {
      halt_baddata();
    }
    uVar21 = (int)unaff_RDI + (int)unaff_RBP * -2;
    if (SBORROW4((int)unaff_RDI,(int)unaff_RBP)) {
      out((char)*param_2,(short)((ulonglong)pbVar7 & 0xffffffff));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = 0x42e421c0;
    ppuVar16 = &puStack_90;
    cVar4 = '\x1c';
    do {
      unaff_RBP = unaff_RBP + -1;
      ppuVar16 = ppuVar16 + -1;
      *ppuVar16 = (undefined *)*unaff_RBP;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    puVar17 = auStack_2ce5;
    if (uVar21 == 0) {
      cRam0000000042e421c0 = cRam0000000042e421c0 + -0x40;
code_r0x000142e4225e:
      cRam0000000042e421c0 = cRam0000000042e421c0 + -0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(ulonglong)uVar21 == 0x42e421c0) goto code_r0x000142e4225e;
    pcVar1 = (char *)((longlong)&uStack_98 + unaff_RBX + 5);
    *pcVar1 = *pcVar1 + (char)(((ulonglong)pbVar7 & 0xffffffff) >> 8);
    goto code_r0x000142e4223c;
  case 0x2a:
  case 0x2b:
  case 0x3b:
  case 0x48:
  case 0x49:
    goto code_r0x000142e421c4;
  case 0x2c:
  case 0x36:
  case 0x37:
  case 0x47:
    halt_baddata();
  case 0x2e:
  case 0x33:
  case 0x38:
  case 0x46:
  case 0x4b:
    goto code_r0x000142e421c2;
  case 0x30:
  case 0x31:
  case 0x3e:
  case 0x40:
  case 0x45:
    uVar5 = in(0x21c0);
    *(undefined4 *)unaff_RDI = uVar5;
    goto code_r0x000142e421c2;
  case 0x32:
  case 0x34:
  case 0x39:
  case 0x44:
    goto code_r0x000142e421c4;
  case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puStack_90 = (undefined *)0x1400f94ad;
  lVar9 = pdb_14054e5c0(param_2,param_2 + 1,puVar13,uVar10);
  if (lVar9 != 0) {
code_r0x0001400f94b6:
    uStack_38 = 1;
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0x28,8);
    if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    pbVar7[0x20] = 0;
    pbVar7[0x21] = 0;
    pbVar7[0x22] = 0;
    pbVar7[0x23] = 0;
    pbVar7[0x24] = 0;
    pbVar7[0x25] = 0;
    pbVar7[0x26] = 0;
    pbVar7[0x27] = 0;
    *(undefined8 **)(pbVar7 + 0x10) = unaff_RBP;
    pbVar7[0x18] = 0;
    pbVar7[0x19] = 0;
    pbVar7[0x1a] = 0;
    pbVar7[0x1b] = 0;
    pbVar7[0x1c] = 0;
    pbVar7[0x1d] = 0;
    pbVar7[0x1e] = 0;
    pbVar7[0x1f] = 0;
    *(undefined8 *)pbVar7 = uStack_38;
    *(longlong *)(pbVar7 + 8) = lVar9;
    return pbVar7;
  }
code_r0x0001400f96c4:
  pbVar7 = (byte *)0x0;
code_r0x0001400f96c6:
  return pbVar7;
code_r0x0001400f964e:
  param_3 = &UNK_142e41b27;
  goto code_r0x0001400f968b;
code_r0x000142e421c2:
code_r0x000142e421c4:
code_r0x000142e421c7:
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

