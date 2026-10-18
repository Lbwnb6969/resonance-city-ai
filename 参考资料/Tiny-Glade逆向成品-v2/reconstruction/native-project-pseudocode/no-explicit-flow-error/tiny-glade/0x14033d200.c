// VA 0x14033d200, PDB extent 1159 bytes
// tiny_glade::gui::wall_selection_tags::impl$1::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/wall_selection_tags.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::wall_selection_tags::impl$1::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/wall_selection_tags.rs
   Extent: 1159 */

undefined8 pdb_14033d200(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte *pbVar6;
  byte bVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  bool bVar13;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = *(uint *)(param_2 + 0x30);
  puVar9 = &UNK_142f3e653;
  bVar13 = *(char *)(param_2 + 0x34) != '\0';
  if (bVar13) {
    puVar9 = &UNK_142f3e660;
  }
  uVar11 = 0xd;
  if (bVar13) {
    uVar11 = 0x13;
  }
  pdb_14043b7d0(param_2);
  pdb_140a1aa60(&uStack_68);
  pdb_140cb8ed0(&uStack_90,&uStack_68,*(undefined4 *)(param_2 + 0x30));
  pdb_140cb9350(&uStack_68,puVar9,uVar11);
  lVar10 = lStack_80;
  uStack_78 = CONCAT44(uStack_64,uStack_68);
  uStack_70 = CONCAT44(uStack_5c,uStack_60);
  if (lStack_80 == CONCAT44(uStack_8c,uStack_90)) {
    pdb_142d7e6e0(&uStack_90);
  }
  lVar5 = CONCAT44(uStack_84,uStack_88);
  lVar8 = lVar10 * 0x20;
  *(undefined8 *)(lVar5 + lVar8) = uStack_78;
  *(undefined8 *)(lVar5 + 8 + lVar8) = uStack_70;
  *(longlong *)(lVar5 + 0x10 + lVar8) = lStack_58;
  *(undefined1 *)(lVar5 + 0x18 + lVar8) = 0;
  lStack_58 = lVar10 + 1;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  uStack_60 = uStack_88;
  uStack_5c = uStack_84;
  uStack_78 = *(undefined8 *)(param_3 + 0x10);
  pdb_140cb9100(param_2,&uStack_68,uStack_78,&UNK_142f3e678);
  bVar4 = (byte)(uVar1 >> 0x10);
  bVar3 = (byte)(uVar1 >> 8);
  bVar7 = (byte)(uVar1 >> 0x18);
  pbVar6 = (byte *)CONCAT44(uStack_5c,uStack_60);
  if (lStack_58 != 0) {
    pbVar12 = pbVar6 + 8;
    lVar10 = lStack_58;
    do {
      uVar2 = *(ulonglong *)(pbVar12 + -8);
      if ((-1 < (longlong)uVar2) && (uVar2 != 0)) {
        pub_1406abac0(*(byte **)pbVar12,uVar2,1);
      }
      pbVar12 = pbVar12 + 0x20;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (CONCAT44(uStack_64,uStack_68) != 0) {
    pub_1406abac0(pbVar6,CONCAT44(uStack_64,uStack_68) << 5,8);
  }
  pdb_14043b7d0(param_2 + 0x18);
  pdb_140a1aa60(&uStack_68);
  pdb_140cb8ed0(&uStack_90,&uStack_68,
                uVar1 & 0xff | (uint)(byte)(((byte)~bVar3 >> 3) + bVar3) << 8 |
                (uint)(byte)(((byte)~bVar4 >> 3) + bVar4) << 0x10 |
                (uint)(byte)(((byte)~bVar7 >> 3) + bVar7) << 0x18);
  pdb_140cb9350(&uStack_68,puVar9,uVar11);
  lVar10 = lStack_58;
  uStack_70 = CONCAT44(uStack_64,uStack_68);
  uVar11 = CONCAT44(uStack_5c,uStack_60);
  if (lStack_80 == CONCAT44(uStack_8c,uStack_90)) {
    pdb_142d7e6e0(&uStack_90);
  }
  lVar5 = CONCAT44(uStack_84,uStack_88);
  lVar8 = lStack_80 * 0x20;
  *(undefined8 *)(lVar5 + lVar8) = uStack_70;
  *(undefined8 *)(lVar5 + 8 + lVar8) = uVar11;
  *(longlong *)(lVar5 + 0x10 + lVar8) = lVar10;
  *(undefined1 *)(lVar5 + 0x18 + lVar8) = 0;
  lStack_58 = lStack_80 + 1;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  uStack_60 = uStack_88;
  uStack_5c = uStack_84;
  pdb_140cb9100(param_2 + 0x18,&uStack_68,uStack_78,&UNK_142f3e678);
  pbVar6 = (byte *)CONCAT44(uStack_5c,uStack_60);
  if (lStack_58 != 0) {
    pbVar12 = pbVar6 + 8;
    lVar10 = lStack_58;
    do {
      uVar2 = *(ulonglong *)(pbVar12 + -8);
      if ((-1 < (longlong)uVar2) && (uVar2 != 0)) {
        pub_1406abac0(*(byte **)pbVar12,uVar2,1);
      }
      pbVar12 = pbVar12 + 0x20;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (CONCAT44(uStack_64,uStack_68) != 0) {
    pub_1406abac0(pbVar6,CONCAT44(uStack_64,uStack_68) << 5,8);
  }
  pdb_14072c0f0(param_1);
  return param_1;
}

