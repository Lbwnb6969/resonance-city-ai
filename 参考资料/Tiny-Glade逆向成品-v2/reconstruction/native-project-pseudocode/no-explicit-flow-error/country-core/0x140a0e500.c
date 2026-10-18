// VA 0x140a0e500, PDB extent 249 bytes
// country_core::resources::walls::gates::Gates::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/gates.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::gates::Gates::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/gates.rs
   Extent: 249 */

void pdb_140a0e500(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  
  lVar8 = param_1[3];
  if (lVar8 != 0) {
    pauVar2 = (undefined1 (*) [16])*param_1;
    auVar1 = *pauVar2;
    pauVar10 = pauVar2 + 1;
    uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    pauVar11 = pauVar2;
    do {
      if ((short)uVar9 == 0) {
        do {
          auVar1 = *pauVar10;
          pauVar11 = pauVar11 + -0x20;
          pauVar10 = pauVar10 + 1;
          uVar9 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar9 == 0);
      }
      iVar5 = 0;
      for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      lVar3 = *(longlong *)((longlong)pauVar11 + (-0x18 - (ulonglong)(uint)(iVar5 << 5)));
      if (lVar3 != 0) {
        pub_1406abac0(*(byte **)((longlong)pauVar11 + (-0x10 - (ulonglong)(uint)(iVar5 << 5))),
                      lVar3 << 3,8);
      }
      uVar9 = uVar9 - 1 & uVar9;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar4 = param_1[1];
    if (uVar4 == 0) {
      uVar7 = 0;
    }
    else {
      pub_142e32780(pauVar2,0xff,uVar4 + 0x11);
      uVar7 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
      if (uVar4 < 8) {
        uVar7 = uVar4;
      }
    }
    param_1[3] = 0;
    param_1[2] = uVar7;
  }
  return;
}

