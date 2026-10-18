// VA 0x142d8fbf0, PDB extent 636 bytes
// country_core::systems::steam::workshop_publish::reencode_thumbnail_to_fit::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::workshop_publish::reencode_thumbnail_to_fit::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 636 */

undefined8 pdb_142d8fbf0(undefined8 param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *arg0;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  undefined8 uStack_68;
  code *pcStack_60;
  ulonglong *puStack_58;
  code *pcStack_50;
  byte *pbStack_48;
  ulonglong *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pcStack_60 = pdb_140117670;
  pcStack_50 = pdb_140d9e9b0;
  uStack_68 = param_1;
  puStack_58 = param_2;
  puStack_40 = param_2;
  uVar2 = pdb_142d8fe70(&UNK_1430571c8,&uStack_68);
  puVar6 = puStack_40;
  uVar4 = *puStack_40;
  lVar3 = 4;
  if (0x8000000000000003 < uVar4) {
    lVar3 = uVar4 + 0x7ffffffffffffffc;
  }
  switch(lVar3) {
  case 0:
    pdb_1404b6770(puStack_40 + 1);
    break;
  case 1:
    pdb_1404b6770(puStack_40 + 1);
    break;
  case 2:
    uVar4 = puStack_40[1];
    if ((-1 < (longlong)uVar4) && (uVar4 != 0)) {
      pub_1406abac0((byte *)puStack_40[2],uVar4,1);
    }
    pbStack_48 = (byte *)puVar6[4];
    if (pbStack_48 == (byte *)0x0) {
      return uVar2;
    }
    puStack_40 = (ulonglong *)puVar6[5];
    if ((code *)*puStack_40 != (code *)0x0) {
      (*(code *)*puStack_40)(pbStack_48);
    }
    uVar4 = puStack_40[1];
    if (uVar4 == 0) {
      return uVar2;
    }
    uVar5 = puStack_40[2];
    arg0 = pbStack_48;
    goto code_r0x000142d8fdd2;
  case 3:
    break;
  case 4:
    uVar5 = 2;
    if ((longlong)uVar4 < 0) {
      uVar5 = uVar4 ^ 0x8000000000000000;
    }
    if (uVar5 == 1) {
      uVar4 = puStack_40[1];
      puVar1 = puStack_40 + 1;
joined_r0x000142d8fdb1:
      if (uVar4 != 0) {
        pub_1406abac0((byte *)puVar1[1],uVar4,1);
      }
    }
    else {
      puVar1 = puStack_40;
      if (uVar5 == 2) goto joined_r0x000142d8fdb1;
    }
    uVar4 = puVar6[4];
    lVar3 = 1;
    if (0x8000000000000003 < uVar4) {
      lVar3 = uVar4 + 0x7ffffffffffffffc;
    }
    if (lVar3 == 0) {
      return uVar2;
    }
    if (lVar3 == 1) {
      uVar5 = 2;
      if ((longlong)uVar4 < 0) {
        uVar5 = uVar4 ^ 0x8000000000000000;
      }
      if (uVar5 != 2) {
        if (uVar5 != 1) {
          return uVar2;
        }
        goto code_r0x000142d8fd1d;
      }
      puVar6 = puVar6 + 4;
      uVar4 = *puVar6;
    }
    else {
code_r0x000142d8fd1d:
      puVar6 = puVar6 + 5;
      uVar4 = *puVar6;
    }
    if (uVar4 == 0) {
      return uVar2;
    }
    uVar5 = 1;
    arg0 = (byte *)puVar6[1];
code_r0x000142d8fdd2:
    pub_1406abac0(arg0,uVar4,uVar5);
    break;
  default:
    pdb_1404b38e0(puStack_40 + 1);
  }
  return uVar2;
}

