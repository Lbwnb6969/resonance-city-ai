// VA 0x140a45980, PDB extent 497 bytes
// country_core::asset_libraries::configwatch::ConfigWatch::watch
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/configwatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::asset_libraries::configwatch::ConfigWatch::watch
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/configwatch.rs
   Extent: 497 */

void pdb_140a45980(int *param_1,ulonglong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  ulonglong *puStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  plVar3 = *(longlong **)(param_1 + 0xc);
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_21 = 1;
  plStack_38 = plVar3;
  puStack_30 = param_2;
  pdb_140f60be0(&uStack_70);
  if (*param_1 == 3) {
    if (CONCAT44(uStack_6c,uStack_70) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_64,uStack_68),CONCAT44(uStack_6c,uStack_70),1);
      plVar3 = plStack_38;
    }
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      uStack_22 = 1;
      pdb_140c7a980(&plStack_38);
    }
    if (*puStack_30 != 0) {
      pub_1406abac0((byte *)puStack_30[1],*puStack_30,1);
    }
  }
  else {
    uStack_98 = puStack_30[2];
    uStack_a8 = *puStack_30;
    uStack_a0 = puStack_30[1];
    uStack_48 = uStack_60;
    uStack_58 = uStack_70;
    uStack_54 = uStack_6c;
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
    uStack_21 = 0;
    plStack_40 = plVar3;
    pdb_140c29f90(&uStack_88,param_1,&uStack_a8,&uStack_58);
    if (CONCAT44(uStack_84,uStack_88) != -0x7ffffffffffffffc) {
      uStack_48 = uStack_78;
      uStack_58 = uStack_88;
      uStack_54 = uStack_84;
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14303c7d0,0x15,&uStack_58,&UNK_14303d020,&UNK_14303c7e8);
    }
  }
  return;
}

