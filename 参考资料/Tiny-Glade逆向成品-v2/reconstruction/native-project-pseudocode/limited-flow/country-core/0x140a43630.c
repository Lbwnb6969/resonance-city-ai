// VA 0x140a43630, PDB extent 756 bytes
// country_core::systems::backend::flush_screen_log::flush_error_log_to_screen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/flush_screen_log.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::flush_screen_log::flush_error_log_to_screen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/flush_screen_log.rs
   Extent: 756 */

void pdb_140a43630(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  char cVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  bool bVar12;
  undefined *puStack_90;
  ulonglong *puStack_88;
  undefined *puStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  ulonglong *puStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  LOCK();
  bVar12 = DAT_143ca4300 == '\0';
  if (bVar12) {
    DAT_143ca4300 = '\x01';
  }
  UNLOCK();
  if (!bVar12) {
    pdb_142dc6be0(&DAT_143ca4300);
  }
  puVar7 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_4c = 0;
    puVar11 = _DAT_143ca4310;
    lStack_78 = _DAT_143ca4318;
  }
  else {
    uStack_4c = pdb_142dc79e0();
    uStack_4c = uStack_4c ^ 1;
    puVar11 = _DAT_143ca4310;
    lStack_78 = _DAT_143ca4318;
  }
  _DAT_143ca4310 = puVar11;
  if (DAT_143ca4301 != '\0') {
    puStack_90 = &DAT_143ca4300;
    uVar10 = (ulonglong)puStack_88 >> 8;
    puStack_88 = (ulonglong *)CONCAT71((int7)uVar10,(char)uStack_4c);
    _DAT_143ca4318 = lStack_78;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303be58,0x2b,&puStack_90,&UNK_14303bea8,&UNK_14303bd20);
  }
  _DAT_143ca4318 = 0;
  puVar9 = puVar11 + lStack_78 * 4;
  puStack_80 = &DAT_143ca4308;
  uStack_70 = 0;
  DAT_143ca4301 = 0;
  puStack_88 = puVar9;
  if (lStack_78 == 0) {
LAB_140a43758:
    if ((longlong)puVar9 - (longlong)puVar11 != 0) {
      uVar10 = (ulonglong)((longlong)puVar9 - (longlong)puVar11) >> 5;
      puVar11 = puVar11 + 1;
      do {
        if (puVar11[-1] != 0) {
          pub_1406abac0((byte *)*puVar11,puVar11[-1],1);
        }
        puVar11 = puVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  else {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar2 = *param_1;
    puVar3 = (undefined4 *)param_1[2];
    puVar5 = puVar11;
    do {
      puVar11 = puVar5 + 4;
      uVar10 = *puVar5;
      if (SBORROW8(0,uVar10)) goto LAB_140a43758;
      pbStack_60 = (byte *)puVar5[1];
      uVar4 = puVar5[2];
      uVar6 = puVar5[3];
      *puVar3 = uVar1;
      puStack_68 = puVar11;
      uStack_58 = uVar10;
      pdb_140a00630(uVar2,pbStack_60,uVar4,
                    *(undefined4 *)(&UNK_14303c438 + (ulonglong)(byte)uVar6 * 4));
      if (uStack_58 != 0) {
        pub_1406abac0(pbStack_60,uStack_58,1);
      }
      puVar5 = puStack_68;
    } while (puVar11 != puVar9);
  }
  if ((((char)uStack_4c == '\0') && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = pdb_142dc79e0(), cVar8 == '\0')) {
    DAT_143ca4301 = 1;
  }
  cVar8 = DAT_143ca4300;
  LOCK();
  DAT_143ca4300 = 0;
  UNLOCK();
  if (cVar8 != '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle(&DAT_143ca4300);
  return;
}

