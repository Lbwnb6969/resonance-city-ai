// VA 0x140001530, PDB extent 348 bytes
// tiny_glade::dpi_scaling::platform::logical_monitor_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/dpi_scaling.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::dpi_scaling::platform::logical_monitor_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/dpi_scaling.rs
   Extent: 348 */

ulonglong pdb_140001530(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_b0;
  char acStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar1 = *param_1;
  uVar2 = pdb_140744770(uVar1);
  dVar4 = _DAT_142e33008;
  if ((uVar2 & 1) != 0) {
    dVar4 = (double)(param_2 & 0xffffffff) / _DAT_142e33000;
  }
  pdb_140747860(acStack_a8,uVar1);
  if (acStack_a8[0] == '\0') {
    auVar7._0_4_ = (int)uStack_98 - (int)uStack_a0;
    auVar7._4_4_ = 0;
    auVar7._8_4_ = (int)((ulonglong)uStack_98 >> 0x20) - (int)((ulonglong)uStack_a0 >> 0x20);
    auVar7._12_4_ = 0;
    dVar6 = SUB168(auVar7 | _DAT_142e33010,0) - (double)DAT_142e33010;
    dVar8 = SUB168(auVar7 | _DAT_142e33010,8) - DAT_142e33010._8_8_;
  }
  else {
    uStack_b0 = uStack_a0;
    pdb_1404b38e0(&uStack_b0);
    dVar6 = 0.0;
    dVar8 = 0.0;
  }
  if (0x7feffffffffffffe < ((ulonglong)dVar4 & 0x7ff0000000000000) - 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142e337e8,0x35,&UNK_142e33868);
  }
  dVar3 = (double)pub_142e32af0(dVar6 / dVar4);
  dVar6 = _DAT_142e33020;
  uVar9 = 0;
  uVar10 = 0;
  dVar5 = 0.0;
  if (0.0 <= dVar3) {
    dVar5 = dVar3;
  }
  uVar11 = SUB84(_DAT_142e33020,0);
  uVar2 = (ulonglong)_DAT_142e33020 >> 0x20;
  dVar3 = _DAT_142e33020;
  if (dVar5 <= _DAT_142e33020) {
    dVar3 = dVar5;
  }
  dVar4 = (double)pub_142e32af0(dVar8 / dVar4);
  if (0.0 <= dVar4) {
    uVar9 = SUB84(dVar4,0);
    uVar10 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  uVar12 = (int)uVar2;
  if ((double)CONCAT44(uVar10,uVar9) <= dVar6) {
    uVar11 = uVar9;
    uVar12 = uVar10;
  }
  return (longlong)dVar3 & 0xffffffffU | (longlong)(double)CONCAT44(uVar12,uVar11) << 0x20;
}

