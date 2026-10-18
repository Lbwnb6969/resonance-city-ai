// VA 0x140359d10, PDB extent 564 bytes
// tiny_glade::game_loop::gather_pending_video_setting_changes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/game_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::game_loop::gather_pending_video_setting_changes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/game_loop.rs
   Extent: 564 */

void pdb_140359d10(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined *puStack_58;
  byte bStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar1 = (ulonglong *)*param_1;
  lVar9 = param_1[1];
  uVar2 = *puVar1;
  uVar6 = 0;
  uVar8 = uVar2 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar8 = uVar6;
  }
  uVar7 = uVar2 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar7 = uVar6;
  }
  lVar10 = uVar8 * 0x10 + *(longlong *)(lVar9 + 8);
  uVar2 = *(ulonglong *)(lVar9 + 0x10) - uVar8;
  if (*(ulonglong *)(lVar9 + 0x10) < uVar8) {
    lVar10 = 8;
    uVar2 = uVar6;
  }
  lVar12 = uVar7 * 0x10 + *(longlong *)(lVar9 + 0x28);
  uVar8 = *(ulonglong *)(lVar9 + 0x30) - uVar7;
  if (*(ulonglong *)(lVar9 + 0x30) < uVar7) {
    lVar12 = 8;
    uVar8 = uVar6;
  }
  *puVar1 = (*(longlong *)(lVar9 + 0x40) - uVar8) - uVar2;
  puVar3 = _DAT_143ca8f38;
  lVar11 = uVar8 * 0x10 + lVar12;
  lVar9 = lVar10;
  if (lVar10 != 0) goto LAB_140359dd1;
LAB_140359e00:
  lVar9 = lVar12;
  if ((lVar9 == 0) || (lVar9 == lVar11)) {
    return;
  }
  lVar12 = lVar9 + 0x10;
  lVar5 = 0;
  do {
    *puVar1 = *puVar1 + 1;
    LOCK();
    bVar13 = DAT_143cb2b98 == '\0';
    if (bVar13) {
      DAT_143cb2b98 = '\x01';
    }
    UNLOCK();
    if (bVar13) {
      if ((*puVar3 & 0x7fffffffffffffff) != 0) goto LAB_140359ea5;
LAB_140359e38:
      bStack_50 = 0;
    }
    else {
      pdb_142dc6be0();
      if ((*puVar3 & 0x7fffffffffffffff) == 0) goto LAB_140359e38;
LAB_140359ea5:
      bStack_50 = pdb_142dc79e0();
      bStack_50 = bStack_50 ^ 1;
    }
    if (DAT_143cb2b99 != '\0') {
      puStack_58 = &DAT_143cb2b98;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f42df8,0x2b,&puStack_58,&UNK_142f42dd8,&UNK_142f42650);
    }
    DAT_143cb2b9a = DAT_143cb2b9a | *(byte *)(lVar9 + 8);
    if (((bStack_50 == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = pdb_142dc79e0(), cVar4 == '\0')) {
      DAT_143cb2b99 = '\x01';
    }
    cVar4 = DAT_143cb2b98;
    LOCK();
    DAT_143cb2b98 = '\0';
    UNLOCK();
    if (cVar4 == '\x02') {
      pdb_142dc6ca0();
    }
    lVar9 = lVar5;
    if (lVar5 == 0) goto LAB_140359e00;
LAB_140359dd1:
    if (lVar9 == uVar2 * 0x10 + lVar10) goto LAB_140359e00;
    lVar5 = lVar9 + 0x10;
  } while( true );
}

