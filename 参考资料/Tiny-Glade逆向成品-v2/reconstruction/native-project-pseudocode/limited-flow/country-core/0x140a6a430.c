// VA 0x140a6a430, PDB extent 724 bytes
// country_core::resources::walls::window_cuts::maintain_deferred_window_cut_buffer_disposal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::window_cuts::maintain_deferred_window_cut_buffer_disposal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
   Extent: 724 */

void pdb_140a6a430(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined *puStack_60;
  char cStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  longlong lStack_38;
  uint uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  LOCK();
  bVar16 = DAT_143ca4338 == '\0';
  if (bVar16) {
    DAT_143ca4338 = '\x01';
  }
  UNLOCK();
  if (!bVar16) {
    pdb_142dc6be0(&DAT_143ca4338);
  }
  puVar7 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    lVar11 = _DAT_143ca4348;
    uVar6 = uStack_2c;
    uStack_2c = 0;
  }
  else {
    uVar9 = pdb_142dc79e0();
    lVar11 = _DAT_143ca4348;
    uVar6 = uStack_2c;
    uStack_2c = uVar9 ^ 1;
  }
  cStack_58 = (char)uStack_2c;
  _DAT_143ca4348 = lVar11;
  if (DAT_143ca4339 != '\0') {
    puStack_60 = &DAT_143ca4338;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143040d68,0x2b,&puStack_60,&UNK_143040d98,&UNK_143040b98);
  }
  DAT_143ca4339 = 0;
  if (_DAT_143ca4350 != 0) {
    lVar10 = _DAT_143ca4350 * 0x10;
    uVar14 = lVar10 - 0x10;
    lVar12 = lVar11;
    if ((~(uint)uVar14 & 0x70) != 0) {
      lVar15 = -(ulonglong)(((uint)(uVar14 >> 4) & 0xfffffff) + 1 & 7);
      do {
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + -1;
        lVar12 = lVar12 + 0x10;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0);
    }
    if (0x6f < uVar14) {
      do {
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + -1;
        *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + -1;
        *(int *)(lVar12 + 0x28) = *(int *)(lVar12 + 0x28) + -1;
        *(int *)(lVar12 + 0x38) = *(int *)(lVar12 + 0x38) + -1;
        *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + -1;
        *(int *)(lVar12 + 0x58) = *(int *)(lVar12 + 0x58) + -1;
        *(int *)(lVar12 + 0x68) = *(int *)(lVar12 + 0x68) + -1;
        *(int *)(lVar12 + 0x78) = *(int *)(lVar12 + 0x78) + -1;
        lVar12 = lVar12 + 0x80;
      } while (lVar12 != lVar11 + lVar10);
    }
    if (_DAT_143ca4350 != 0) {
      uVar14 = 0;
      lVar11 = _DAT_143ca4348;
LAB_140a6a520:
      if (-1 < *(int *)(lVar11 + 8)) goto code_r0x000140a6a526;
      lStack_38 = _DAT_143ca4348;
      uStack_40 = _DAT_143ca4350;
      uVar13 = uVar14 + 1;
      uStack_50 = uVar14;
      uStack_48 = uVar13;
      pdb_140989660();
      while (uVar13 < uStack_40) {
        while (puVar1 = (undefined4 *)(lStack_38 + uVar13 * 0x10),
              -1 < *(int *)(lStack_38 + 8 + uVar13 * 0x10)) {
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          puVar2 = (undefined4 *)(lStack_38 + uVar14 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          uVar14 = uVar14 + 1;
          uVar13 = uVar13 + 1;
          if (uStack_40 <= uVar13) goto LAB_140a6a5c4;
        }
        uVar13 = uVar13 + 1;
        uStack_50 = uVar14;
        uStack_48 = uVar13;
        pdb_140989660();
      }
LAB_140a6a5c4:
      _DAT_143ca4350 = uVar14;
      if ((char)uStack_2c != '\0') goto LAB_140a6a545;
      goto LAB_140a6a536;
    }
  }
LAB_140a6a532:
  uStack_2c = uVar6;
  if (cStack_58 == '\0') {
LAB_140a6a536:
    if (((*puVar7 & 0x7fffffffffffffff) != 0) && (cVar8 = pdb_142dc79e0(), cVar8 == '\0')) {
      DAT_143ca4339 = 1;
    }
  }
LAB_140a6a545:
  cVar8 = DAT_143ca4338;
  LOCK();
  DAT_143ca4338 = 0;
  UNLOCK();
  if (cVar8 != '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle(&DAT_143ca4338);
  return;
code_r0x000140a6a526:
  uVar14 = uVar14 + 1;
  lVar11 = lVar11 + 0x10;
  if (_DAT_143ca4350 == uVar14) goto LAB_140a6a532;
  goto LAB_140a6a520;
}

