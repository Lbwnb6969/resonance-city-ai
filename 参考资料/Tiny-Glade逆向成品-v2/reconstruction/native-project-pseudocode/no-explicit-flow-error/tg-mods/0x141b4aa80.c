// VA 0x141b4aa80, PDB extent 188 bytes
// tg_mods::identity::ModId::owner_hash8
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::ModId::owner_hash8
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 188 */

undefined8 * pdb_141b4aa80(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uStack_80;
  uint uStack_74;
  undefined8 uStack_70;
  char cStack_68;
  undefined1 auStack_30 [32];
  
  uStack_80 = param_2;
  pdb_140faf160(auStack_30,&uStack_80,8);
  pdb_140faf0a0(&uStack_74,auStack_30);
  uVar4 = (ulonglong)uStack_74;
  if (uVar4 < 9) goto LAB_141b4aae6;
  if (cStack_68 < -0x40) {
    do {
      pdb_142dc8070(&uStack_70);
LAB_141b4aae6:
    } while ((int)uVar4 != 8);
  }
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(8,1);
  if (pbVar2 != (byte *)0x0) {
    *(undefined8 *)pbVar2 = uStack_70;
    *param_1 = 8;
    param_1[1] = pbVar2;
    param_1[2] = 8;
    return param_1;
  }
  pdb_142dc7e2a(1,8);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}

