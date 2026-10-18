// VA 0x140a4ff40, PDB extent 509 bytes
// country_core::asset_libraries::vao_library::AssetVAOLibrary::remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/vao_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::vao_library::AssetVAOLibrary::remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/vao_library.rs
   Extent: 509 */

void pdb_140a4ff40(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auStack_e0 [8];
  undefined1 (*pauStack_d8) [16];
  longlong lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined1 (*pauStack_60) [16];
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_70 = param_2;
  uVar5 = pdb_1400af0a0(param_1 + 0x50,&uStack_70);
  pdb_140ca8d50(auStack_e0,param_1 + 0x30,uVar5,&uStack_70);
  if (pauStack_d8 != (undefined1 (*) [16])0x0) {
    lVar7 = CONCAT44(uStack_bc,uStack_c0);
    lStack_68 = lStack_d0;
    if (lStack_d0 == 0) {
      uStack_50 = 0;
    }
    else {
      uStack_58 = lStack_d0 * 0x11 + 0x21;
      pauStack_60 = pauStack_d8 + (-1 - lStack_d0);
      uStack_50 = 0x10;
    }
    if (lVar7 != 0) {
      auVar1 = *pauStack_d8;
      uVar4 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar8 = pauStack_d8 + 1;
      pauVar6 = pauStack_d8;
      do {
        if ((short)uVar4 == 0) {
          do {
            auVar1 = *pauVar8;
            pauVar6 = pauVar6 + -0x10;
            pauVar8 = pauVar8 + 1;
            uVar4 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar4 == 0);
        }
        iVar2 = 0;
        for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          iVar2 = iVar2 + 1;
        }
        uStack_78 = *(undefined8 *)((longlong)pauVar6 + (-8 - (ulonglong)(uint)(iVar2 << 4)));
        uVar5 = pdb_1400af0a0(param_1 + 0x20,&uStack_78);
        pdb_140ca8a50(auStack_e0,param_1,uVar5,&uStack_78);
        if (!SBORROW8(0,(longlong)pauStack_d8)) {
          uStack_98 = uStack_c8;
          uStack_94 = uStack_c4;
          uStack_90 = uStack_c0;
          uStack_8c = uStack_bc;
          uStack_88 = uStack_b8;
          if (!SBORROW8(0,(longlong)pauStack_d8)) {
            pdb_140989a40(auStack_a8);
          }
        }
        uVar4 = uVar4 - 1 & uVar4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if ((lStack_68 != 0) && (uStack_58 != 0)) {
      pub_1406abac0((byte *)pauStack_60,uStack_58,uStack_50);
    }
  }
  return;
}

