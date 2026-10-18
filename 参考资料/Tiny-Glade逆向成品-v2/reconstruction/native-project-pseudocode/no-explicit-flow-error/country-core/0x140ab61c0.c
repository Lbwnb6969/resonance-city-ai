// VA 0x140ab61c0, PDB extent 581 bytes
// country_core::systems::ui_camera_mode_gizmos::ui_camera_mode_gizmos::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_camera_mode_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_camera_mode_gizmos::ui_camera_mode_gizmos::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_camera_mode_gizmos.rs
   Extent: 581 */

undefined8 *
pdb_140ab61c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 auStack_120 [5];
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  ulonglong uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined2 uStack_74;
  undefined1 uStack_72;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_68 = pub_1406abab0(8,8);
  if (pbStack_68 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uVar3 = *param_2;
  fVar1 = *(float *)(param_2 + 1);
  fVar2 = *(float *)((longlong)param_2 + 0xc);
  uStack_7c = 0x3f80000000000000;
  uStack_84 = 0;
  uStack_f8 = 0x8000000000000001;
  uStack_c8 = _DAT_142e4e650;
  uStack_c0 = _UNK_142e4e658;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 2;
  uStack_98 = 1;
  uStack_90 = 0x100;
  uStack_8c = (ulonglong)_DAT_142e36f28;
  uStack_74 = 0;
  uStack_72 = 0;
  pdb_1409bba50(auStack_120,&uStack_f8,param_3,param_4,param_5);
  pdb_14007ee60();
  pbStack_e0 = pub_1406abab0(0xb,1);
  if (pbStack_e0 != (byte *)0x0) {
    pbStack_e0[0] = 99;
    pbStack_e0[1] = 0x75;
    pbStack_e0[2] = 0x72;
    pbStack_e0[3] = 0x73;
    pbStack_e0[4] = 0x6f;
    pbStack_e0[5] = 0x72;
    pbStack_e0[6] = 0x5f;
    pbStack_e0[7] = 0x67;
    pbStack_e0[7] = 0x67;
    pbStack_e0[8] = 0x72;
    pbStack_e0[9] = 0x61;
    pbStack_e0[10] = 0x62;
    uStack_e8 = 0xb;
    uStack_d8 = 0xb;
    fStack_f0 = fVar2 * (fVar1 / _DAT_142e4bfe4) * _DAT_142e382c8;
    if (fStack_f0 <= _DAT_142f95154) {
      fStack_f0 = _DAT_142f95154;
    }
    uStack_d0 = 0;
    uStack_f8 = uVar3;
    fStack_ec = fStack_f0;
    pdb_1416174b0(auStack_120,&uStack_f8,&UNK_14304a5f8);
    *(undefined8 *)pbStack_68 = auStack_120[0];
    *param_1 = 1;
    param_1[1] = pbStack_68;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0xb);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

