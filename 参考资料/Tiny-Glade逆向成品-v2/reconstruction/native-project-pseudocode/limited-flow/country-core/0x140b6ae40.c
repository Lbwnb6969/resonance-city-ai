// VA 0x140b6ae40, PDB extent 657 bytes
// country_core::resources::history::replay_cmd_buffer::ReplayBuffer::make_animations_instant
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/replay_cmd_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140b6b0f1) overlaps instruction at (ram,0x000140b6b0f0)
    */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   country_core::resources::history::replay_cmd_buffer::ReplayBuffer::make_animations_instant
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/replay_cmd_buffer.rs
   Extent: 657 */

void pdb_140b6ae40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  undefined *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined *puVar15;
  ulonglong uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  code *UNRECOVERED_JUMPTABLE;
  byte *pbVar20;
  byte **ppbVar21;
  byte *unaff_RBP;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  bool bVar28;
  longlong lStack_98;
  longlong lStack_88;
  byte *pbStack_68;
  byte *pbStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppbVar21 = &puStack_58;
  pbVar18 = (byte *)param_1[3];
  if (pbVar18 == (byte *)0x0) {
    lVar24 = 0;
    pbVar19 = (byte *)0x0;
    lVar7 = 0;
  }
  else {
    pbVar19 = (byte *)*param_1;
    pbVar20 = (byte *)0x0;
    if (pbVar19 <= (byte *)param_1[2]) {
      pbVar20 = pbVar19;
    }
    lVar24 = (longlong)param_1[2] - (longlong)pbVar20;
    param_4 = pbVar19 + -lVar24;
    lVar7 = (longlong)pbVar18 - (longlong)param_4;
    if (pbVar18 < param_4 || lVar7 == 0) {
      pbVar18 = pbVar18 + lVar24;
      lVar7 = 0;
      pbVar19 = pbVar18;
    }
  }
  puStack_58 = (undefined *)param_1[1];
  puVar8 = puStack_58 + lVar7 * 0x40;
  pbStack_68 = (byte *)0xaaaaaaaaaaaaaaab;
  puStack_50 = puStack_58 + (longlong)pbVar19 * 0x40;
  puVar1 = puStack_58 + lVar24 * 0x40;
  do {
    do {
      puStack_48 = puVar1;
      puVar1 = puStack_58;
      puVar15 = puStack_50;
      if ((puStack_48 == puStack_50) &&
         (bVar28 = puStack_58 == puVar8, puStack_58 = puStack_50, puVar15 = puVar8,
         puVar8 = puStack_50, puStack_48 = puVar1, bVar28)) {
        return;
      }
      pbVar20 = *(byte **)(puStack_48 + 8);
      pbVar19 = *(byte **)(puStack_48 + 0x10);
      puVar1 = puStack_48 + 0x40;
      pbVar26 = pbVar20 + (longlong)pbVar19 * 0x30;
      puStack_50 = puVar15;
    } while (pbVar19 == (byte *)0x0);
    do {
      uVar14 = uRam0000000000000000;
      iVar5 = *(int *)(&UNK_14305ae4c + (ulonglong)*pbVar20 * 4);
      puVar9 = (ulonglong *)(&UNK_14305ae4c + iVar5);
      bVar13 = (byte)pbVar19;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*pbVar20) {
      case 0:
      case 1:
      case 2:
        pbVar20[0x1c] = 0;
        pbVar20[0x1d] = 0;
        pbVar20[0x1e] = 0;
        pbVar20[0x1f] = 0;
        break;
      case 3:
      case 0xb:
        pbVar20[0x14] = 0;
        pbVar20[0x15] = 0;
        pbVar20[0x16] = 0;
        pbVar20[0x17] = 0;
        break;
      case 4:
        uVar14 = *(ulonglong *)(pbVar20 + 0x20);
        if (uVar14 == 0) {
          lVar7 = 0;
          pbVar19 = (byte *)0x0;
code_r0x000140b6afa9:
          param_4 = (byte *)0x0;
        }
        else {
          pbVar19 = *(byte **)(pbVar20 + 8);
          pbVar18 = (byte *)0x0;
          if (pbVar19 <= *(byte **)(pbVar20 + 0x18)) {
            pbVar18 = pbVar19;
          }
          lVar7 = (longlong)*(byte **)(pbVar20 + 0x18) - (longlong)pbVar18;
          param_4 = (byte *)(uVar14 - ((longlong)pbVar19 - lVar7));
          if (uVar14 < (ulonglong)((longlong)pbVar19 - lVar7) || param_4 == (byte *)0x0) {
            pbVar19 = (byte *)(uVar14 + lVar7);
            goto code_r0x000140b6afa9;
          }
        }
        pbVar27 = *(byte **)(pbVar20 + 0x10);
        pbVar18 = pbVar27 + (longlong)param_4 * 0x18;
        unaff_RBP = pbVar27 + (longlong)pbVar19 * 0x18;
        pbVar2 = pbVar27 + lVar7 * 0x18;
        while ((pbVar10 = pbVar2, pbVar2 = pbVar18, pbVar25 = unaff_RBP, pbVar10 != unaff_RBP ||
               (bVar28 = pbVar27 != pbVar18, pbVar10 = pbVar27, pbVar2 = unaff_RBP,
               pbVar25 = pbVar18, pbVar27 = unaff_RBP, bVar28))) {
          pbVar18 = pbVar2;
          pbVar2 = pbVar10 + 0x18;
          lVar7 = *(longlong *)(pbVar10 + 0x10);
          pbVar19 = (byte *)0x0;
          unaff_RBP = pbVar25;
          if (lVar7 != 0) {
            puVar6 = *(undefined4 **)(pbVar10 + 8);
            param_4 = (byte *)(lVar7 * 0x18);
            pbVar19 = param_4 + -0x18;
            uVar17 = (uint)((ulonglong)pbVar19 / 0x18);
            uVar22 = ~uVar17;
            puStack_48 = (undefined *)(ulonglong)uVar22;
            puVar11 = puVar6;
            if ((uVar22 & 7) != 0) {
              lVar24 = -(ulonglong)(uVar17 + 1 & 7);
              do {
                *puVar11 = 0;
                puVar11 = puVar11 + 6;
                lVar24 = lVar24 + 1;
              } while (lVar24 != 0);
            }
            if ((byte *)0xa7 < pbVar19) {
              do {
                *puVar11 = 0;
                puVar11[6] = 0;
                puVar11[0xc] = 0;
                puVar11[0x12] = 0;
                puVar11[0x18] = 0;
                puVar11[0x1e] = 0;
                puVar11[0x24] = 0;
                puVar11[0x2a] = 0;
                puVar11 = puVar11 + 0x30;
              } while (puVar11 != puVar6 + lVar7 * 6);
            }
          }
        }
        break;
      default:
        pbVar20[8] = 0;
        pbVar20[9] = 0;
        pbVar20[10] = 0;
        pbVar20[0xb] = 0;
        break;
      case 0xc:
      case 0xd:
      case 0xe:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        puStack_48 = puVar1;
        (*UNRECOVERED_JUMPTABLE)();
        return;
      case 0xf:
        *(uint *)puVar9 = (uint)*puVar9 - 1;
        if ((uint)*puVar9 != 0) {
          return;
        }
        pbStack_60 = (byte *)0xaaaaaaaaaaaaaaab;
        uVar14 = *(ulonglong *)(pbVar19 + 0x10);
        plVar3 = *(longlong **)(uVar14 + 0x18);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        puStack_48 = puVar1;
        if (*plVar3 == 0) {
          pdb_140c79ee0(uVar14 + 0x18);
        }
        if (uVar14 != 0xffffffffffffffff) {
          LOCK();
          plVar3 = (longlong *)(uVar14 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            lVar7 = 0x30;
            ppbVar21 = &puStack_58;
            pbStack_68 = pbStack_60;
            goto code_r0x0001406abac0;
          }
        }
        return;
      case 0x10:
        if ((uint)pbVar18 < 0xb) {
          puStack_48 = &UNK_14305ae7c;
          pbVar18 = (byte *)(longlong)*(int *)(&UNK_14305ae7c + (longlong)pbVar18 * 4);
          goto code_r0x000140b6b0fc;
        }
        plVar3 = (longlong *)*puVar9;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 != 0) {
          return;
        }
        pbStack_60 = (byte *)0xaaaaaaaaaaaaaaab;
        uVar14 = *puVar9;
        puStack_48 = puVar1;
        if (*(longlong *)(uVar14 + 0x10) != 0) {
          pub_1406abac0(*(byte **)(uVar14 + 0x18),*(longlong *)(uVar14 + 0x10) << 3,4);
        }
        if (uVar14 != 0xffffffffffffffff) {
          LOCK();
          plVar3 = (longlong *)(uVar14 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            lVar7 = 0x30;
            ppbVar21 = &puStack_58;
            pbStack_68 = pbStack_60;
            goto code_r0x0001406abac0;
          }
        }
        return;
      case 0x11:
        *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
        pbVar18 = &UNK_14305adcf + iVar5;
        bVar4 = *pbVar18;
        *pbVar18 = *pbVar18 + bVar13;
        *(uint *)puVar9 =
             (uint)*puVar9 << 9 |
             (uint)(ushort)(CONCAT14(CARRY1(bVar4,bVar13),(uint)*puVar9) >> 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x12:
        if (puVar9 != (ulonglong *)0x0) {
          return;
        }
        pbStack_60 = (byte *)0xaaaaaaaaaaaaaaab;
        uVar23 = *(ulonglong *)(uRam0000000000000000 + 0x10);
        uVar16 = 2;
        if ((longlong)uVar23 < 0) {
          uVar16 = uVar23 ^ 0x8000000000000000;
        }
        if (uVar16 == 0) {
          uVar23 = *(ulonglong *)(uRam0000000000000000 + 0x18);
          lVar7 = 0x20;
joined_r0x000140c7a768:
          puStack_48 = puVar1;
          if (uVar23 != 0) {
            pub_1406abac0(*(byte **)(uRam0000000000000000 + lVar7),uVar23 * 0xc,4);
          }
        }
        else {
          puStack_48 = puVar1;
          if (uVar16 != 1) {
            lVar7 = 0x18;
            goto joined_r0x000140c7a768;
          }
        }
        if (uRam0000000000000000 != 0xffffffffffffffff) {
          LOCK();
          plVar3 = (longlong *)(uRam0000000000000000 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            lVar7 = 0x38;
            ppbVar21 = &puStack_58;
            pbStack_68 = pbStack_60;
            goto code_r0x0001406abac0;
          }
        }
        return;
      case 0x13:
        pbStack_68 = (byte *)0xaaaaaaaaaaaaaaab;
        uVar14 = *(ulonglong *)(&UNK_14305ae64 + iVar5);
        if (uVar14 == 0) {
          lVar7 = 0;
          uVar23 = 0;
          lStack_98 = 0;
        }
        else {
          uVar23 = *puVar9;
          uVar16 = 0;
          if (uVar23 <= *(ulonglong *)(&UNK_14305ae5c + iVar5)) {
            uVar16 = uVar23;
          }
          lVar7 = *(ulonglong *)(&UNK_14305ae5c + iVar5) - uVar16;
          lStack_98 = uVar14 - (uVar23 - lVar7);
          if (uVar14 < uVar23 - lVar7 || lStack_98 == 0) {
            uVar23 = uVar14 + lVar7;
            lStack_98 = 0;
          }
        }
        uVar14 = *(ulonglong *)(&UNK_14305ae54 + iVar5);
        lStack_88 = 0;
        lVar24 = uVar14 + lVar7 * 0x18;
        pbStack_60 = unaff_RBP;
        puStack_48 = puVar1;
        while (uVar23 - lVar7 != lStack_88) {
          lStack_88 = lStack_88 + 1;
          pdb_14049bb00(lVar24);
          lVar24 = lVar24 + 0x18;
        }
        lStack_88 = 0;
        uVar23 = uVar14;
        while (lStack_98 != lStack_88) {
          lStack_88 = lStack_88 + 1;
          pdb_14049bb00(uVar23);
          uVar23 = uVar23 + 0x18;
        }
        if (*puVar9 == 0) {
          return;
        }
        lVar7 = *puVar9 * 0x18;
        ppbVar21 = &puStack_58;
        unaff_RBP = pbStack_60;
code_r0x0001406abac0:
        *(byte **)((longlong)ppbVar21 + -8) = unaff_RBP;
        *(byte **)((longlong)ppbVar21 + -0x10) = pbStack_68;
        *(undefined **)((longlong)ppbVar21 + -0x40) = &UNK_140f3c37e;
        uVar12 = GetProcessHeap(uVar14,lVar7);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar12,0,uVar14);
        return;
      case 0x14:
        ppbVar21 = &pbStack_60;
        uVar14 = *(ulonglong *)(pbVar19 + 0x10);
        if (uVar14 != 0xffffffffffffffff) {
          LOCK();
          plVar3 = (longlong *)(uVar14 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            lVar7 = 0x50;
            pbStack_60 = pbVar20;
            puStack_48 = puVar1;
            goto code_r0x0001406abac0;
          }
        }
        return;
      case 0x15:
        unaff_RBP[(longlong)pbVar19 * 4 + 5] = unaff_RBP[(longlong)pbVar19 * 4 + 5] + bVar13;
        param_4 = (byte *)(ulonglong)(byte)((char)param_4 + pbVar19[99]);
code_r0x000140b6b0fc:
        UNRECOVERED_JUMPTABLE = (code *)(pbVar18 + (longlong)puStack_48);
        puVar8 = puStack_48;
        puStack_48 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140b6b0ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pbVar19,UNRECOVERED_JUMPTABLE,puVar8,param_4);
        return;
      case 0x16:
        uVar14 = *(ulonglong *)(pbVar19 + 0x10);
        if (uVar14 != 0xffffffffffffffff) {
          LOCK();
          plVar3 = (longlong *)(uVar14 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            lVar7 = 0x30;
            puStack_48 = puVar1;
            goto code_r0x0001406abac0;
          }
        }
        return;
      }
      pbVar20 = pbVar20 + 0x30;
    } while (pbVar20 != pbVar26);
  } while( true );
}

