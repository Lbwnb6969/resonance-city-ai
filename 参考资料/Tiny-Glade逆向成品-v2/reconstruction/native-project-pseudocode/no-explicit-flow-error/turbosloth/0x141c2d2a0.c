// VA 0x141c2d2a0, PDB extent 719 bytes
// turbosloth::store::PackagePass::finish
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::PackagePass::finish
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 719 */

undefined8 pdb_141c2d2a0(ulonglong *param_1)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *arg0;
  ulonglong uVar6;
  ulonglong arg1;
  ulonglong uVar7;
  ulonglong uStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  ulonglong *puStack_60;
  ulonglong *puStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  ulonglong *puStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puStack_60 = param_1 + 0xb;
  puStack_58 = param_1 + 7;
  uStack_31 = 1;
  puStack_40 = param_1;
  cVar2 = pdb_142623e80(puStack_60);
  if (cVar2 != '\0') {
    pdb_140989e00(puStack_40);
    return 0;
  }
  uVar6 = puStack_40[1];
  uVar7 = puStack_40[2];
  uStack_88 = (undefined4)*puStack_60;
  uStack_84 = *(undefined4 *)((longlong)puStack_60 + 4);
  uStack_80 = (undefined4)puStack_60[1];
  uStack_7c = *(undefined4 *)((longlong)puStack_60 + 0xc);
  uStack_78 = (undefined4)puStack_60[2];
  uStack_74 = *(undefined4 *)((longlong)puStack_60 + 0x14);
  uStack_70 = (undefined4)puStack_60[3];
  uStack_6c = *(undefined4 *)((longlong)puStack_60 + 0x1c);
  uStack_68 = 1;
  pdb_142624040(&uStack_a0,&uStack_88);
  if (SBORROW8(0,uStack_a0)) {
    uVar3 = pdb_14256b2d0(0x15,pbStack_98);
    lVar5 = CONCAT44(uStack_7c,uStack_80);
    if (lVar5 == 0) goto LAB_141c2d3e7;
    lVar4 = lVar5 * 0x50 + 0x50;
    uVar6 = lVar5 + lVar4 + 0x11;
    if (uVar6 == 0) goto LAB_141c2d3e7;
    uVar7 = 0x10;
    arg0 = (byte *)(CONCAT44(uStack_84,uStack_88) - lVar4);
  }
  else {
    uStack_48 = uStack_a0;
    lVar5 = CONCAT44(uStack_7c,uStack_80);
    if (lVar5 != 0) {
      lVar4 = lVar5 * 0x50 + 0x50;
      arg1 = lVar5 + lVar4 + 0x11;
      if (arg1 != 0) {
        pub_1406abac0((byte *)(CONCAT44(uStack_84,uStack_88) - lVar4),arg1,0x10);
      }
    }
    pbStack_50 = pbStack_98;
    uVar3 = pdb_142571e80(uVar6,uVar7,pbStack_98,uStack_90);
    if (uStack_48 == 0) goto LAB_141c2d3e7;
    uVar7 = 1;
    arg0 = pbStack_50;
    uVar6 = uStack_48;
  }
  pub_1406abac0(arg0,uVar6,uVar7);
LAB_141c2d3e7:
  puVar1 = puStack_40;
  if (*puStack_40 != 0) {
    pub_1406abac0((byte *)puStack_40[1],*puStack_40,1);
  }
  uVar6 = puVar1[8];
  if (uVar6 != 0) {
    lVar5 = uVar6 * 0x50 + 0x50;
    uVar6 = uVar6 + lVar5 + 0x11;
    if (uVar6 != 0) {
      pub_1406abac0((byte *)(*puStack_58 - lVar5),uVar6,0x10);
    }
  }
  uVar6 = puVar1[0x10];
  if (uVar6 != 0) {
    lVar5 = uVar6 * 0x10 + 0x10;
    uVar6 = uVar6 + lVar5 + 0x11;
    if (uVar6 != 0) {
      pub_1406abac0((byte *)(puVar1[0xf] - lVar5),uVar6,0x10);
    }
  }
  return uVar3;
}

