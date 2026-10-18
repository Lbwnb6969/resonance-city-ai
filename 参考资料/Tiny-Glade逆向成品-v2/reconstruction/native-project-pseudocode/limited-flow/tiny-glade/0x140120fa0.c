// VA 0x140120fa0, PDB extent 540 bytes
// tiny_glade::tgsr_capture::TgsrCaptureState::stop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::tgsr_capture::TgsrCaptureState::stop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 540 */

void pdb_140120fa0(ulonglong *param_1,ulonglong *param_2)

{
  char cVar1;
  ulonglong *puVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  byte *pbStack_a8;
  undefined *puStack_40;
  ulonglong *puStack_38;
  ulonglong *puStack_30;
  undefined4 uStack_28;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar4 = *param_1;
  uStack_28 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  puStack_38 = param_2;
  if (2 < uVar4) goto LAB_140121083;
  uStack_21 = 0;
  pdb_1405584b0(&uStack_c8,param_1,param_2);
  if (uStack_c8 != 0x8000000000000003) {
    uVar6 = 1;
    if ((longlong)uStack_c8 < 0) {
      uVar6 = uStack_c8 ^ 0x8000000000000000;
    }
    if (uVar6 == 1) {
      if (uStack_c8 != 0) {
        pub_1406abac0(pbStack_c0,uStack_c8 * 0x28,8);
      }
      if (lStack_b0 != 0) {
        pbStack_c0 = (byte *)(lStack_b0 * 0xcc);
        uVar6 = 4;
        pbStack_b8 = pbStack_a8;
        goto LAB_140121066;
      }
    }
    else if ((uVar6 == 0) && (pbStack_c0 != (byte *)0x0)) {
      uVar6 = 1;
LAB_140121066:
      pub_1406abac0(pbStack_b8,(ulonglong)pbStack_c0,uVar6);
    }
  }
  if (*(char *)((longlong)param_1 + 0xc1) == '\x01') {
    *_DAT_143ca4260 = 0;
  }
  uStack_28 = 0;
LAB_140121083:
  cVar1 = *(char *)((longlong)param_1 + 0xef);
  *(undefined1 *)((longlong)param_1 + 0xef) = 2;
  if (cVar1 != '\x02') {
    *_DAT_143ca4258 = cVar1;
  }
  puStack_30 = param_1;
  if ((uint)uVar4 < 3) {
    pdb_1404c5ef0(param_1);
  }
  puVar2 = puStack_38;
  *puStack_30 = 3;
  if ((char)uStack_28 == '\0') {
    return;
  }
  uVar4 = *puStack_38;
  uVar6 = 1;
  if ((longlong)uVar4 < 0) {
    uVar6 = uVar4 ^ 0x8000000000000000;
  }
  if (uVar6 == 1) {
    if (uVar4 != 0) {
      pub_1406abac0((byte *)puStack_38[1],uVar4 * 0x28,8);
    }
    uVar4 = puVar2[3];
    if (uVar4 == 0) {
      return;
    }
    uVar6 = puVar2[4];
    uVar4 = uVar4 * 0xcc;
    uVar7 = 4;
  }
  else {
    if (uVar6 != 0) {
      return;
    }
    uVar4 = puStack_38[1];
    if (uVar4 == 0) {
      return;
    }
    uVar6 = puStack_38[2];
    uVar7 = 1;
  }
  uVar5 = uVar6;
  if (0x10 < uVar7) {
    uVar5 = *(ulonglong *)(uVar6 - 8);
  }
  puStack_40 = &UNK_140f3c37e;
  uVar3 = GetProcessHeap(uVar6,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar3,0,uVar5);
  return;
}

