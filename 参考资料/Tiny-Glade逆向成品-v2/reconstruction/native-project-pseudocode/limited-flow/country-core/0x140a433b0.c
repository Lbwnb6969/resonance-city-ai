// VA 0x140a433b0, PDB extent 632 bytes
// country_core::systems::backend::flush_screen_log::log_warning_to_screen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/flush_screen_log.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::flush_screen_log::log_warning_to_screen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/flush_screen_log.rs
   Extent: 632 */

void pdb_140a433b0(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined *puStack_58;
  undefined1 uStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  LOCK();
  bVar7 = DAT_143ca4300 == '\0';
  if (bVar7) {
    DAT_143ca4300 = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    pdb_142dc6be0(&DAT_143ca4300);
  }
  puVar3 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_34 = 0;
  }
  else {
    uStack_34 = pdb_142dc79e0();
    uStack_34 = uStack_34 ^ 1;
  }
  if (DAT_143ca4301 != '\0') {
    puStack_58 = &DAT_143ca4300;
    uStack_50 = (undefined1)uStack_34;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303be58,0x2b,&puStack_58,&UNK_14303bea8,&UNK_14303bd08);
  }
  if ((longlong)param_2 < 0) {
    uVar6 = 0;
LAB_140a4340d:
    pdb_142dc7e2a(uVar6,param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uStack_48 = param_2;
  if (param_2 == 0) {
    pbStack_40 = (byte *)0x1;
    if (_DAT_143ca4318 != _DAT_143ca4308) goto LAB_140a4348d;
  }
  else {
    pdb_14007ee60();
    uVar6 = 1;
    pbStack_40 = pub_1406abab0(param_2,1);
    if (pbStack_40 == (byte *)0x0) goto LAB_140a4340d;
    pub_142e32760(pbStack_40,param_1,param_2);
    if (_DAT_143ca4318 != _DAT_143ca4308) goto LAB_140a4348d;
  }
  lVar2 = _DAT_143ca4318;
  pdb_142d7e6e0(&DAT_143ca4308);
  _DAT_143ca4318 = lVar2;
LAB_140a4348d:
  lVar2 = _DAT_143ca4310;
  lVar5 = _DAT_143ca4318 * 0x20;
  *(ulonglong *)(_DAT_143ca4310 + lVar5) = uStack_48;
  *(byte **)(lVar2 + 8 + lVar5) = pbStack_40;
  *(ulonglong *)(lVar2 + 0x10 + lVar5) = uStack_48;
  *(undefined1 *)(lVar2 + 0x18 + lVar5) = 1;
  _DAT_143ca4318 = _DAT_143ca4318 + 1;
  if ((((char)uStack_34 == '\0') && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = pdb_142dc79e0(), cVar4 == '\0')) {
    DAT_143ca4301 = '\x01';
  }
  cVar4 = DAT_143ca4300;
  LOCK();
  DAT_143ca4300 = 0;
  UNLOCK();
  if (cVar4 != '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle(&DAT_143ca4300);
  return;
}

