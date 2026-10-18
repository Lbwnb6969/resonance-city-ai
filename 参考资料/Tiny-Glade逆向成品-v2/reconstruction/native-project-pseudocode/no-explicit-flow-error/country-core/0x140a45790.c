// VA 0x140a45790, PDB extent 5 bytes
// country_core::game_profile::impl$1::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::game_profile::impl$1::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
   Extent: 5 */

ulonglong * pdb_140a45790(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar3;
  undefined1 auVar2 [16];
  uint uVar4;
  int iStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  int *piStack_18;
  code *pcStack_10;
  
  uStack_28 = 0;
  uStack_20 = 0;
  iStack_2c = pdb_140ead350(&uStack_28,0x10);
  if (iStack_2c == 0) {
    auVar2._8_8_ = uStack_20;
    auVar2._0_8_ = uStack_28;
    auVar2 = auVar2 & _DAT_143230e90 | _DAT_143230ea0;
    uVar1 = auVar2._0_8_;
    uVar3 = auVar2._8_4_;
    uVar4 = auVar2._12_4_;
    param_1[1] = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                 (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                 (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 |
                 uVar1 << 0x38;
    *param_1 = (ulonglong)(uVar4 >> 0x18) | ((ulonglong)uVar4 & 0xff0000) >> 8 |
               ((ulonglong)uVar4 & 0xff00) << 8 | ((ulonglong)uVar4 & 0xff) << 0x18 |
               ((ulonglong)uVar3 & 0xff000000) << 8 | ((ulonglong)uVar3 & 0xff0000) << 0x18 |
               ((ulonglong)uVar3 & 0xff00) << 0x28 | auVar2._8_8_ << 0x38;
    return param_1;
  }
  piStack_18 = &iStack_2c;
  pcStack_10 = pdb_140ead250;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143230db8,&piStack_18,&UNK_143230e40);
}

