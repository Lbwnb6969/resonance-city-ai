// VA 0x142572440, PDB extent 122 bytes
// turbosloth::util::FileStamp::from_metadata
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::util::FileStamp::from_metadata
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
   Extent: 122 */

ulonglong * pdb_142572440(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  char acStack_28 [8];
  ulonglong uStack_20;
  uint uStack_18;
  
  uVar1 = *(ulonglong *)(param_2 + 0x38);
  uStack_30 = *(undefined8 *)(param_2 + 0x30);
  pcVar4 = acStack_28;
  puVar5 = &uStack_30;
  pdb_140f3fcf0(pcVar4,puVar5,0xd53e8000,0x19db1de);
  auVar3._8_8_ = puVar5;
  auVar3._0_8_ = pcVar4;
  if (acStack_28[0] == '\0') {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_20;
    auVar3 = auVar2 * ZEXT816(1000000000) + ZEXT416(uStack_18);
  }
  param_1[4] = uVar1;
  *param_1 = (ulonglong)(acStack_28[0] == '\0');
  param_1[1] = 0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar3;
  return param_1;
}

