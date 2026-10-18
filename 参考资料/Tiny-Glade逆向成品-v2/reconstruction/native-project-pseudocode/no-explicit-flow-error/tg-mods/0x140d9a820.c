// VA 0x140d9a820, PDB extent 590 bytes
// tg_mods::discovery::partless_mod_folders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::discovery::partless_mod_folders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 590 */

undefined8 * pdb_140d9a820(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 uStack_528;
  undefined8 uStack_2d0;
  longlong lStack_2c8;
  ulonglong uStack_2c0;
  ulonglong uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  byte *pbStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puVar4 = &UNK_1431e5963;
  pdb_140f4c4e0(&iStack_540,&UNK_1431e5963,0x13);
  uVar1 = CONCAT44(uStack_53c,iStack_540);
  if (SBORROW8(0,uVar1)) {
    uVar3 = pdb_140dc7520(-uVar1);
    pdb_140f3e9e0(&uStack_60,uVar3,puVar4,&UNK_1431e5976,4);
  }
  else {
    uStack_48 = uStack_528;
    uStack_58 = uStack_538;
    uStack_54 = uStack_534;
    uStack_50 = uStack_530;
    uStack_4c = uStack_52c;
    uStack_60 = uVar1;
  }
  pbStack_40 = (byte *)CONCAT44(uStack_54,uStack_58);
  pdb_140f4f710(&iStack_540,pbStack_40,CONCAT44(uStack_4c,uStack_50));
  if (iStack_540 == 2) {
    lStack_2c8 = CONCAT44(uStack_534,uStack_538);
    uStack_2d0 = 2;
  }
  else {
    pub_142e32760(&uStack_2d0,&iStack_540,0x270);
  }
  if (uStack_60 != 0) {
    pub_1406abac0(pbStack_40,uStack_60,1);
  }
  if ((int)uStack_2d0 == 2) {
    pdb_1404b38e0(&lStack_2c8);
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    pub_142e32760(&iStack_540,&uStack_2d0,0x270);
    pdb_141da4070(&uStack_2d0,&iStack_540);
    lVar2 = lStack_2c8;
    if (1 < uStack_2c0) {
      if (uStack_2c0 < 0x15) {
        lVar5 = uStack_2c0 * 0x20 + lStack_2c8;
        lVar6 = lStack_2c8 + 0x20;
        do {
          pdb_141dab830(lVar2,lVar6);
          lVar6 = lVar6 + 0x20;
        } while (lVar6 != lVar5);
      }
      else {
        pdb_1419203e0(lStack_2c8,uStack_2c0,&uStack_31);
      }
    }
    param_1[2] = uStack_2c0;
    *param_1 = uStack_2d0;
    param_1[1] = lStack_2c8;
  }
  return param_1;
}

