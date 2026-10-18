// VA 0x140576d80, PDB extent 269 bytes
// sentry_types::utils::ts_rfc3339::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   sentry_types::utils::ts_rfc3339::impl$0::visit_str<serde_json::error::Error>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 269 */

uint * pdb_140576d80(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pdb_140e04a50(&iStack_40,1,param_2,param_3);
  if ((char)uStack_18 == '\x05') {
    iStack_78 = iStack_40;
    uStack_74 = uStack_3c;
    uStack_70 = uStack_38;
    uStack_6e = uStack_36;
    uStack_6d = uStack_35;
    uStack_6c = uStack_34;
    lVar1 = pdb_140e033e0(&iStack_78);
    if (-1 < lVar1) {
      pdb_140f3fca0(&iStack_78,&UNK_142f6bf28,lVar1,uStack_3c);
      if (iStack_78 != 1) {
        uVar2 = pdb_142d86fc0(&UNK_142f6bf30,0x11);
        *(undefined8 *)(param_1 + 2) = uVar2;
      }
      else {
        *(ulonglong *)(param_1 + 1) =
             CONCAT17(uStack_6d,CONCAT16(uStack_6e,CONCAT24(uStack_70,uStack_74)));
      }
      *param_1 = (uint)(iStack_78 != 1);
      return param_1;
    }
    uVar2 = pdb_142d86580();
  }
  else {
    uStack_58 = uStack_20;
    uStack_54 = uStack_1c;
    uStack_50 = uStack_18;
    uStack_4c = uStack_14;
    uStack_68 = uStack_30;
    uStack_64 = uStack_2c;
    uStack_60 = uStack_28;
    uStack_5c = uStack_24;
    iStack_78 = iStack_40;
    uStack_74 = uStack_3c;
    uStack_6c = uStack_34;
    uStack_70 = uStack_38;
    uStack_6e = uStack_36;
    uStack_6d = uStack_35;
    uVar2 = pdb_142d865d0(&iStack_78);
  }
  *(undefined8 *)(param_1 + 2) = uVar2;
  *param_1 = 1;
  return param_1;
}

