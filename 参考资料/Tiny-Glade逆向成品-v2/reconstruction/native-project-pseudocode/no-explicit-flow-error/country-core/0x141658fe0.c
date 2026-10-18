// VA 0x141658fe0, PDB extent 639 bytes
// serde_json::de::impl$7::deserialize_seq<serde_json::read::StrRead,serde_core::de::impls::impl$19::deserialize::VecVisitor<country_core::asset_libraries::color_library::ColorFromJson> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_seq<serde_json::read::StrRead,serde_core::de::impls::impl$19::deserialize::VecVisitor<country_core::asset_libraries::color_library::ColorFromJson>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 639 */

longlong * pdb_141658fe0(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 auStack_88 [3];
  longlong lStack_70;
  byte *pbStack_68;
  longlong lStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < *(ulonglong *)(param_2 + 0x20)) {
    while( true ) {
      uVar3 = uVar3 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0))
      break;
      *(ulonglong *)(param_2 + 0x28) = uVar3;
      if (uVar3 == *(ulonglong *)(param_2 + 0x20)) goto LAB_14165904a;
    }
    if (bVar2 != 0x5b) {
      pbVar6 = (byte *)pdb_142de8b10(param_2,&uStack_49,&UNK_143323700);
      goto LAB_141659190;
    }
    pcVar1 = (char *)(param_2 + 0x48);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      auStack_88[0] = 0x18;
      goto LAB_141659052;
    }
    *(ulonglong *)(param_2 + 0x28) = uVar3;
    pdb_141ad5cf0(&lStack_70,param_2,0x100002601);
    *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
    pbVar5 = (byte *)pdb_140404e50(param_2);
    if (SBORROW8(0,lStack_70)) {
      pbVar6 = pbStack_68;
      if (pbVar5 != (byte *)0x0) {
        pbStack_58 = pbVar5;
        if (*(longlong *)pbVar5 == 1) {
          pdb_1404b38e0(pbVar5 + 8);
        }
        else if ((*(longlong *)pbVar5 == 0) && (*(ulonglong *)(pbVar5 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pbVar5 + 8),*(ulonglong *)(pbVar5 + 0x10),1);
        }
        pub_1406abac0(pbStack_58,0x28,8);
      }
    }
    else {
      if (pbVar5 == (byte *)0x0) {
        *param_1 = lStack_70;
        param_1[1] = (longlong)pbStack_68;
        param_1[2] = lStack_60;
        return param_1;
      }
      if (lStack_60 != 0) {
        pbVar6 = pbStack_68 + 8;
        lVar4 = lStack_60;
        do {
          if (*(ulonglong *)(pbVar6 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar6,*(ulonglong *)(pbVar6 + -8),1);
          }
          pbVar6 = pbVar6 + 0x28;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      pbVar6 = pbVar5;
      if (lStack_70 != 0) {
        pub_1406abac0(pbStack_68,lStack_70 * 0x28,8);
      }
    }
LAB_141659190:
    lVar4 = pdb_142d86ed0(pbVar6,param_2);
  }
  else {
LAB_14165904a:
    auStack_88[0] = 5;
LAB_141659052:
    lVar4 = pdb_142d84ef0(param_2,auStack_88);
  }
  param_1[1] = lVar4;
  *param_1 = -0x8000000000000000;
  return param_1;
}

