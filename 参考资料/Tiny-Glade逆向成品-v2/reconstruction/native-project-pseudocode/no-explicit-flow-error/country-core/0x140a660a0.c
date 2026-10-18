// VA 0x140a660a0, PDB extent 325 bytes
// country_core::systems::steam::startup_steam::startup_steam
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/startup_steam.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::steam::startup_steam::startup_steam
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/startup_steam.rs
   Extent: 325 */

void pdb_140a660a0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 auStack_1d0 [2];
  undefined8 uStack_1c0;
  undefined8 uStack_c0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong lStack_40;
  longlong lStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  param_1 = (undefined8 *)*param_1;
  uVar3 = param_2;
  uStack_28 = pub_142e320b0();
  plStack_30 = (longlong *)*param_1;
  LOCK();
  lVar4 = *plStack_30;
  *plStack_30 = *plStack_30 + 1;
  UNLOCK();
  if (*plStack_30 != 0 && SCARRY8(lVar4,1) == *plStack_30 < 0) {
    lVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    pub_142e32140(uStack_28);
    plVar2 = (longlong *)pdb_140f3bda0();
    if ((char)plVar2[2] == '\x01') {
      lStack_40 = *plVar2;
      lVar4 = plVar2[1];
    }
    else {
      lStack_40 = pdb_140f4fd10();
      *plVar2 = lStack_40;
      plVar2[1] = lVar4;
      *(undefined1 *)(plVar2 + 2) = 1;
    }
    *plVar2 = lStack_40 + 1;
    auStack_1d0[0] = 0;
    uStack_1c0 = 0;
    uStack_c0 = 0;
    uStack_60 = _DAT_1430403e0;
    uStack_58 = _UNK_1430403e8;
    uStack_50 = _DAT_1430403f0;
    uStack_4c = _UNK_1430403f4;
    uStack_48 = _UNK_1430403f8;
    uStack_44 = _UNK_1430403fc;
    lStack_38 = lVar4;
    pdb_1416188a0(param_2,auStack_1d0,&UNK_143040740);
    LOCK();
    *plStack_30 = *plStack_30 + -1;
    UNLOCK();
    if (*plStack_30 == 0) {
      pdb_140cb1c10(&plStack_30);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

