// VA 0x1408e4fd0, PDB extent 519 bytes
// system_decorator::deferred_decorator_history::decorator_record_history
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/deferred_decorator_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::deferred_decorator_history::decorator_record_history
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/deferred_decorator_history.rs
   Extent: 519 */

void pdb_1408e4fd0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  undefined4 *puStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar5 = (undefined4 *)param_2[2];
  *puVar5 = uVar3;
  lVar6 = *param_2;
  cVar2 = *(char *)(lVar6 + 0x48);
  *(undefined1 *)(lVar6 + 0x48) = 0;
  *puVar5 = uVar3;
  if (cVar2 == '\x01') {
    lStack_88 = *(longlong *)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    plVar13 = *(longlong **)(lVar6 + 8) + lStack_88 * 4;
    uStack_80 = 0;
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar7 = *param_1;
    puVar8 = (undefined4 *)param_1[2];
    uStack_4c = uVar3;
    puStack_58 = puVar5;
    lStack_90 = lVar6;
    lStack_60 = lVar6;
    plVar10 = *(longlong **)(lVar6 + 8);
    plStack_98 = plVar13;
    while (plVar10 != plVar13) {
      plVar1 = plVar10 + 4;
      lVar6 = *plVar10;
      plStack_a0 = plVar1;
      if (lVar6 == 6) break;
      lStack_68 = plVar10[3];
      uStack_78 = (undefined4)plVar10[1];
      uStack_74 = *(undefined4 *)((longlong)plVar10 + 0xc);
      uStack_70 = (undefined4)plVar10[2];
      uStack_6c = *(undefined4 *)((longlong)plVar10 + 0x14);
      *puVar8 = uVar4;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(0x30,8);
      if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar11[0] = 1;
      pbVar11[1] = 0;
      pbVar11[2] = 0;
      pbVar11[3] = 0;
      pbVar11[4] = 0;
      pbVar11[5] = 0;
      pbVar11[6] = 0;
      pbVar11[7] = 0;
      pbVar11[8] = 1;
      pbVar11[9] = 0;
      pbVar11[10] = 0;
      pbVar11[0xb] = 0;
      pbVar11[0xc] = 0;
      pbVar11[0xd] = 0;
      pbVar11[0xe] = 0;
      pbVar11[0xf] = 0;
      *(longlong *)(pbVar11 + 0x10) = lVar6;
      *(undefined4 *)(pbVar11 + 0x18) = uStack_78;
      *(undefined4 *)(pbVar11 + 0x1c) = uStack_74;
      *(undefined4 *)(pbVar11 + 0x20) = uStack_70;
      *(undefined4 *)(pbVar11 + 0x24) = uStack_6c;
      *(longlong *)(pbVar11 + 0x28) = lStack_68;
      uStack_b8 = 10;
      pbStack_b0 = pbVar11;
      pdb_140ae5180(uVar7,&uStack_b8,&UNK_14301b9a8);
      plVar10 = plVar1;
    }
    *puStack_58 = uStack_4c;
    *(undefined8 *)(lStack_60 + 0x10) = 0;
    if (*(longlong *)(lStack_60 + 0x30) == 0) {
      return;
    }
    uVar9 = *(ulonglong *)(lStack_60 + 0x20);
    lVar6 = lStack_60;
  }
  else {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    if (*(longlong *)(lVar6 + 0x30) == 0) {
      return;
    }
    uVar9 = *(ulonglong *)(lVar6 + 0x20);
  }
  if (uVar9 == 0) {
    uVar12 = 0;
  }
  else {
    pub_142e32780(*(undefined8 *)(lVar6 + 0x18),0xff,uVar9 + 0x11);
    uVar12 = (uVar9 + 1 & 0xfffffffffffffff8) - (uVar9 + 1 >> 3);
    if (uVar9 < 8) {
      uVar12 = uVar9;
    }
  }
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(ulonglong *)(lVar6 + 0x28) = uVar12;
  return;
}

