// VA 0x140b28ae0, PDB extent 650 bytes
// country_core::systems::steam::workshop_publish::validate_for_publish
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::workshop_publish::validate_for_publish
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 650 */

ulonglong *
pdb_140b28ae0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_90 = param_5;
  uStack_98 = param_4;
  pdb_141b49c20(&uStack_88);
  uVar2 = uStack_78;
  if (SBORROW8(0,uStack_88)) {
    uStack_58 = &uStack_98;
    uStack_50 = pdb_1402ed400;
    uVar2 = pdb_142d8fe70(&UNK_143056e57,&uStack_58);
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  uStack_38 = uStack_88;
  pbStack_60 = pbStack_80;
  pdb_140d9aa70(&uStack_88,param_2,param_3);
  cVar1 = pdb_140d93150(&uStack_88);
  if (cVar1 == '\0') {
    if (SBORROW8(0,uStack_88)) {
      pdb_140d99980(&uStack_58,param_2,param_3);
      if (SBORROW8(0,(longlong)uStack_58)) {
        uStack_58 = &uStack_98;
        uStack_50 = pdb_1402ed400;
        uVar2 = pdb_142d8fe70(&UNK_143056d57,&uStack_58);
        param_1[1] = uVar2;
        *param_1 = 0x8000000000000000;
        goto joined_r0x000140b28c5c;
      }
      if (uStack_58 != (undefined8 *)0x0) {
        pub_1406abac0((byte *)uStack_50,(ulonglong)uStack_58,1);
      }
    }
    param_1[7] = uStack_68;
    param_1[5] = uStack_78;
    param_1[6] = uStack_70;
    param_1[3] = uStack_88;
    param_1[4] = (ulonglong)pbStack_80;
    *param_1 = uStack_38;
    param_1[1] = (ulonglong)pbStack_60;
    param_1[2] = uVar2;
  }
  else {
    uStack_58 = &uStack_98;
    uStack_50 = pdb_1402ed400;
    puStack_48 = &UNK_143056e00;
    pcStack_40 = pdb_1402ed400;
    pdb_140f60760(&uStack_b0,&UNK_143056e10,&uStack_58);
    uStack_58 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
    uStack_50 = (code *)CONCAT44(uStack_a4,uStack_a8);
    puStack_48 = (undefined *)uStack_a0;
    uVar2 = pdb_142de92b0(&uStack_58);
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
    if ((!SBORROW8(0,uStack_88)) && (uStack_88 != 0)) {
      pub_1406abac0(pbStack_80,uStack_88,1);
    }
joined_r0x000140b28c5c:
    if (uStack_38 != 0) {
      pub_1406abac0(pbStack_60,uStack_38,1);
    }
  }
  return param_1;
}

