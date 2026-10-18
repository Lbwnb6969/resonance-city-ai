// VA 0x140001690, PDB extent 331 bytes
// tiny_glade::dpi_scaling::platform::logical_monitor_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/dpi_scaling.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::dpi_scaling::platform::logical_monitor_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/dpi_scaling.rs
   Extent: 331 */

ulonglong pdb_140001690(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_c0;
  char acStack_b8 [8];
  undefined8 uStack_b0;
  
  uVar1 = *param_1;
  uVar4 = pdb_140744770(uVar1);
  dVar9 = _DAT_142e33008;
  if ((uVar4 & 1) != 0) {
    dVar9 = (double)(param_2 & 0xffffffff) / _DAT_142e33000;
  }
  pdb_140747860(acStack_b8,uVar1);
  if (acStack_b8[0] == '\0') {
    dVar2 = (double)(int)uStack_b0;
    dVar8 = (double)(int)((ulonglong)uStack_b0 >> 0x20);
  }
  else {
    uStack_c0 = uStack_b0;
    pdb_1404b38e0(&uStack_c0);
    dVar2 = 0.0;
    dVar8 = 0.0;
  }
  if (0x7feffffffffffffe < ((ulonglong)dVar9 & 0x7ff0000000000000) - 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142e337e8,0x35,&UNK_142e33880);
  }
  dVar6 = (double)pub_142e32af0(dVar2 / dVar9);
  dVar3 = _DAT_142e33030;
  dVar2 = _DAT_142e33028;
  dVar7 = dVar6;
  if (dVar6 <= _DAT_142e33028) {
    dVar7 = _DAT_142e33028;
  }
  if (_DAT_142e33030 <= dVar7) {
    dVar7 = _DAT_142e33030;
  }
  uVar4 = (ulonglong)(uint)(int)dVar7;
  if (NAN(dVar6)) {
    uVar4 = 0;
  }
  dVar8 = (double)pub_142e32af0(dVar8 / dVar9);
  dVar9 = dVar8;
  if (dVar8 <= dVar2) {
    dVar9 = dVar2;
  }
  if (dVar3 <= dVar9) {
    dVar9 = dVar3;
  }
  uVar5 = (ulonglong)(uint)(int)dVar9;
  if (NAN(dVar8)) {
    uVar5 = 0;
  }
  return uVar4 | uVar5 << 0x20;
}

