// VA 0x1402e62a0, PDB extent 294 bytes
// ron::de::impl$2::deserialize_byte_buf<serde_core::de::ignored_any::IgnoredAny>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_byte_buf<serde_core::de::ignored_any::IgnoredAny>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 294 */

void pdb_1402e62a0(char *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  char cStack_60;
  undefined4 uStack_5f;
  undefined3 uStack_5b;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  cVar1 = pdb_140dccd90(param_2 + 0x10,0x5b);
  if (cVar1 == '\0') {
    pdb_140dcd5f0(&cStack_60,param_2 + 0x10);
    if (cStack_60 == '2') {
      if (SBORROW8(0,uStack_58)) {
        *param_1 = '2';
      }
      else {
        *param_1 = '2';
        if (uStack_58 != 0) {
          pub_1406abac0(pbStack_50,uStack_58,1);
        }
      }
    }
    else {
      *(uint *)(param_1 + 4) = CONCAT31(uStack_5b,uStack_5f._3_1_);
      *(undefined4 *)(param_1 + 1) = uStack_5f;
      *(undefined **)(param_1 + 0x20) = puStack_40;
      *(undefined8 *)(param_1 + 0x28) = uStack_38;
      *(undefined8 *)(param_1 + 0x30) = uStack_30;
      *(undefined8 *)(param_1 + 0x38) = uStack_28;
      *(undefined8 *)(param_1 + 0x40) = uStack_20;
      *param_1 = cStack_60;
      *(ulonglong *)(param_1 + 8) = uStack_58;
      *(byte **)(param_1 + 0x10) = pbStack_50;
      *(undefined8 *)(param_1 + 0x18) = uStack_48;
    }
  }
  else {
    pdb_1402cba20(&cStack_60,param_2);
    if (cStack_60 == '2') {
      *param_1 = '2';
      if (uStack_58 != 0) {
        puStack_40 = &UNK_140f3c37e;
        uVar2 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar2,0,pbStack_50);
        return;
      }
    }
    else {
      *(uint *)(param_1 + 4) = CONCAT31(uStack_5b,uStack_5f._3_1_);
      *(undefined4 *)(param_1 + 1) = uStack_5f;
      *(undefined **)(param_1 + 0x20) = puStack_40;
      *(undefined8 *)(param_1 + 0x28) = uStack_38;
      *(undefined8 *)(param_1 + 0x30) = uStack_30;
      *(undefined8 *)(param_1 + 0x38) = uStack_28;
      *(undefined8 *)(param_1 + 0x40) = uStack_20;
      *(ulonglong *)(param_1 + 8) = uStack_58;
      *(byte **)(param_1 + 0x10) = pbStack_50;
      *(undefined8 *)(param_1 + 0x18) = uStack_48;
      *param_1 = cStack_60;
    }
  }
  return;
}

