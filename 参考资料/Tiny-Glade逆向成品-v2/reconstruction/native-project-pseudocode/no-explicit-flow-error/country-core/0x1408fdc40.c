// VA 0x1408fdc40, PDB extent 244 bytes
// country_core::resources::walls::decorator::impl$14::clone
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$14::clone
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 244 */

undefined8 * pdb_1408fdc40(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  ulonglong *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar2 = *param_2;
  if (uVar2 < 0xfffffffffffffff0 && (char)(((uint)uVar2 & 8) >> 3) == '\0') {
    LOCK();
    uVar1 = *param_2;
    if (uVar2 == uVar1) {
      *param_2 = uVar2 + 0x10;
    }
    UNLOCK();
    if (uVar2 == uVar1) goto LAB_1408fdc8e;
  }
  pdb_142dbb5f0(param_2,0,param_3,1000000000);
LAB_1408fdc8e:
  pdb_140e9a150(param_2);
  pdb_140e9a150((ulonglong)param_2 | 1);
  puStack_30 = param_2;
  pdb_1415e5230(&uStack_48,param_2 + 1);
  puVar3 = puStack_30;
  param_1[3] = uStack_38;
  *(undefined4 *)(param_1 + 1) = uStack_48;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_44;
  *(undefined4 *)(param_1 + 2) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_3c;
  *param_1 = 0;
  pdb_140e9a350(puStack_30);
  pdb_140e9a350((ulonglong)param_2 | 1);
  LOCK();
  uVar2 = *puVar3;
  *puVar3 = *puVar3 - 0x10;
  UNLOCK();
  if ((uVar2 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar3);
  }
  return param_1;
}

