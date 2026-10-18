// VA 0x140a3bca0, PDB extent 696 bytes
// country_core::systems::save::session_lock::try_lock
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/session_lock.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::save::session_lock::try_lock
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/session_lock.rs
   Extent: 696 */

void pdb_140a3bca0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [12];
  undefined4 auStack_84 [2];
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined5 uStack_70;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  undefined1 uStack_68;
  undefined4 uStack_67;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_40;
  byte *pbStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar3 = param_2;
  uVar1 = pdb_140dc74c0();
  pdb_140f3e9e0(&uStack_c0,uVar1,uVar3,&UNK_14303ba30,0xd);
  auStack_84[0] = CONCAT31(auStack_84[0]._1_3_,1);
  pbStack_38 = pbStack_b8;
  lVar2 = pdb_140f46c40(auStack_84,pbStack_b8,uStack_b0);
  if (lVar2 == 0) {
    auStack_84[0] = 0;
    uStack_7c = 0;
    uStack_74 = 7;
    uStack_70 = 0;
    uStack_6a = 0;
    uStack_67 = 0;
    uStack_6b = 1;
    uStack_68 = 1;
    pcStack_98 = pdb_140eaccb0;
    uStack_a0 = param_2;
    pdb_140f60760(&uStack_60,&UNK_14303ba3d,&uStack_a0);
    pbStack_30 = (byte *)uStack_60;
    pbStack_40 = pbStack_58;
    pdb_140f3e9e0(&uStack_60,pbStack_38,uStack_b0,pbStack_58,uStack_50);
    if (pbStack_30 != (byte *)0x0) {
      pub_1406abac0(pbStack_40,(ulonglong)pbStack_30,1);
    }
    pbStack_30 = pbStack_58;
    lVar2 = pdb_140f4a2a0(auStack_84,pbStack_58,uStack_50);
    uVar4 = uStack_60;
    if (uStack_60 != 0) {
      pub_1406abac0(pbStack_30,uStack_60,1);
      uVar4 = uStack_60;
    }
    if (lVar2 != 1) {
      pbStack_30 = pbStack_58;
      lVar2 = pdb_140f3f0e0(auStack_90);
      if (lVar2 == 1) {
        if (uVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = pdb_142deaf00(uVar4);
          param_1[1] = uVar3;
          uVar3 = 2;
        }
        *param_1 = uVar3;
        CloseHandle(pbStack_30);
      }
      else {
        *param_1 = 1;
        param_1[1] = pbStack_30;
      }
      goto LAB_140a3bdf7;
    }
    uVar3 = pdb_142deaf00(pbStack_58);
  }
  else {
    uVar3 = pdb_142deaf00(lVar2);
  }
  param_1[1] = uVar3;
  *param_1 = 2;
LAB_140a3bdf7:
  if (uStack_c0 != 0) {
    pub_1406abac0(pbStack_38,uStack_c0,1);
  }
  return;
}

