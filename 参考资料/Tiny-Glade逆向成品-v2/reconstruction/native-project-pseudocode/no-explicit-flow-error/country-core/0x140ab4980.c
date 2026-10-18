// VA 0x140ab4980, PDB extent 479 bytes
// country_core::startup::swap_replacement_mods::swap_replacement_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::swap_replacement_mods::swap_replacement_mods
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 479 */

void pdb_140ab4980(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte *arg0;
  longlong lVar1;
  byte *pbVar2;
  char acStack_140 [2];
  undefined8 uStack_13e;
  undefined8 uStack_136;
  ulonglong uStack_128;
  byte *pbStack_120;
  undefined8 uStack_110;
  byte *pbStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*param_1 != 0) {
    pdb_1409195f0(acStack_140,*param_1,*param_2,*param_3);
    uStack_69 = acStack_140[0] == '\0';
    if ((bool)uStack_69) {
      uStack_68 = uStack_13e;
      uStack_60 = uStack_136;
    }
    uStack_58 = uStack_110;
    uStack_50 = pbStack_108;
    lStack_48 = lStack_100;
    if (uStack_128 != 0) {
      pub_1406abac0(pbStack_120,uStack_128,1);
    }
    if ((uStack_f8 & 0x7fffffffffffffff) != 0) {
      pub_1406abac0(pbStack_f0,uStack_f8,1);
    }
    if ((uStack_b8 & 0x7fffffffffffffff) != 0) {
      pub_1406abac0(pbStack_b0,uStack_b8,1);
    }
    lVar1 = lStack_48;
    arg0 = uStack_50;
    lStack_78 = lStack_48;
    uStack_88 = (undefined4)uStack_58;
    uStack_84 = uStack_58._4_4_;
    uStack_80 = (undefined4)uStack_50;
    uStack_7c = uStack_50._4_4_;
    pdb_140ab3b00(param_4,&uStack_69,uStack_50,lStack_48);
    if (lVar1 != 0) {
      pbVar2 = arg0 + 8;
      do {
        if (*(ulonglong *)(pbVar2 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar2,*(ulonglong *)(pbVar2 + -8),1);
        }
        pbVar2 = pbVar2 + 0x18;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    if (CONCAT44(uStack_84,uStack_88) != 0) {
      pub_1406abac0(arg0,CONCAT44(uStack_84,uStack_88) * 0x18,8);
    }
  }
  return;
}

