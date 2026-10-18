// VA 0x14065ce90, PDB extent 196 bytes
// tiny_glade::run_game::WindowBackendWindow::inner_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::run_game::WindowBackendWindow::inner_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 196 */

ulonglong pdb_14065ce90(int *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (*param_1 != 1) {
    uVar2 = pdb_1406d18a0();
    return (ulonglong)uVar2 | param_2 << 0x20;
  }
  uStack_18 = 0;
  uStack_10 = 0;
  iVar1 = GetClientRect(*(undefined8 *)(*(longlong *)(param_1 + 2) + 0x18),&uStack_18);
  if (iVar1 != 0) {
    dVar6 = 0.0;
    if (0.0 <= (double)(uint)((int)uStack_10 - (int)uStack_18)) {
      dVar6 = (double)(uint)((int)uStack_10 - (int)uStack_18);
    }
    uVar4 = SUB84(_DAT_142e33020,0);
    uVar5 = (undefined4)((ulonglong)_DAT_142e33020 >> 0x20);
    dVar7 = _DAT_142e33020;
    if (dVar6 <= _DAT_142e33020) {
      dVar7 = dVar6;
    }
    dVar6 = 0.0;
    if (0.0 <= (double)(uint)(uStack_10._4_4_ - uStack_18._4_4_)) {
      dVar6 = (double)(uint)(uStack_10._4_4_ - uStack_18._4_4_);
    }
    if (dVar6 <= _DAT_142e33020) {
      uVar4 = SUB84(dVar6,0);
      uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    uVar3 = pdb_140a6ad00((longlong)dVar7 & 0xffffffffU |
                          (longlong)(double)CONCAT44(uVar5,uVar4) << 0x20);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f8e664,0xcb,&UNK_142f8e730);
}

