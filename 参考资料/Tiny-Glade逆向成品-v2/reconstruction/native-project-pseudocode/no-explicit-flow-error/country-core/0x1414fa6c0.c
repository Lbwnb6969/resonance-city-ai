// VA 0x1414fa6c0, PDB extent 688 bytes
// country_core::resources::walls::decorator_storage::Decorators::clear<country_core::resources::walls::decorator_storage::DecoratorToStorageMap>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::Decorators::clear<country_core::resources::walls::decorator_storage::DecoratorToStorageMap>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 688 */

void pdb_1414fa6c0(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  bool bVar12;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 *puStack_98;
  ushort uStack_90;
  longlong *plStack_88;
  longlong lStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  undefined1 (*pauStack_68) [16];
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x68);
    if (uVar2 == 0) {
      uVar8 = 0;
    }
    else {
      pub_142e32780(*(undefined8 *)(param_1 + 0x60),0xff,uVar2 + 0x11);
      uVar8 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
      if (uVar2 < 8) {
        uVar8 = uVar2;
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(ulonglong *)(param_1 + 0x70) = uVar8;
  }
  pauVar9 = *(undefined1 (**) [16])(param_1 + 0x30);
  lVar10 = *(longlong *)(param_1 + 0x38);
  auVar1 = *pauVar9;
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  uVar8 = uVar2 + 1 >> 1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar8 = uVar2;
  }
  if (*(ulonglong *)(param_1 + 0x10) < uVar8) {
    pdb_142d96320(param_1,uVar8,param_1 + 0x20,1);
  }
  uStack_90 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  plStack_88 = &lStack_80;
  pauStack_a8 = pauVar9;
  pauStack_a0 = pauVar9 + 1;
  puStack_98 = *pauVar9 + lVar10 + 1;
  lStack_80 = param_1;
  pdb_140ca8170(&pauStack_a8,uVar2,&plStack_88);
  uVar5 = _UNK_143310fd8;
  pauVar11 = *(undefined1 (**) [16])(param_1 + 0x30);
  uStack_70 = *(ulonglong *)(param_1 + 0x38);
  auVar1 = *pauVar11;
  pauVar9 = pauVar11 + 1;
  lVar10 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = _DAT_143310fd0;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = _UNK_143310fc8;
  *(undefined8 *)(param_1 + 0x30) = _DAT_143310fc0;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  lStack_78 = param_1;
  pauStack_68 = pauVar11;
  while (pauVar6 = pauStack_68, uVar2 = uStack_70, bVar12 = lVar10 != 0, lVar10 = lVar10 + -1,
        bVar12) {
    if ((short)uVar7 == 0) {
      do {
        auVar1 = *pauVar9;
        pauVar11 = pauVar11 + -0x68;
        pauVar9 = pauVar9 + 1;
        uVar7 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar7 == 0);
    }
    uVar3 = 0;
    for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    if (*(longlong *)((longlong)pauVar11 + (ulonglong)uVar3 * -0x68 + -0x60) == 8) break;
    uVar7 = uVar7 - 1 & uVar7;
    pdb_140c445a0(param_2,*(undefined4 *)((longlong)pauVar11 + (ulonglong)uVar3 * -0x68 + -0x68),
                  &UNK_143317e88);
  }
  if (uStack_70 == 0) {
    uVar8 = 0;
  }
  else {
    pub_142e32780(pauStack_68,0xff,uStack_70 + 0x11);
    uVar8 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
    if (uVar2 < 8) {
      uVar8 = uVar2;
    }
  }
  *(undefined1 (**) [16])(lStack_78 + 0x30) = pauVar6;
  *(ulonglong *)(lStack_78 + 0x38) = uVar2;
  *(ulonglong *)(lStack_78 + 0x40) = uVar8;
  *(undefined8 *)(lStack_78 + 0x48) = 0;
  return;
}

