// VA 0x140c441a0, PDB extent 142 bytes
// country_core::resources::walls::decorator_storage::impl$3::next
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator_storage::impl$3::next
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 142 */

void pdb_140c441a0(undefined4 *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  ushort uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  
  if (param_2[4] != 0) {
    uVar7 = (uint)*(ushort *)(param_2 + 3);
    lVar6 = *param_2;
    if (*(ushort *)(param_2 + 3) == 0) {
      pauVar8 = (undefined1 (*) [16])param_2[1];
      do {
        auVar1 = *pauVar8;
        lVar6 = lVar6 + -0x680;
        pauVar8 = pauVar8 + 1;
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
      param_2[1] = (longlong)pauVar8;
      *param_2 = lVar6;
    }
    uVar5 = (ushort)uVar7;
    uVar4 = 0;
    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    *(ushort *)(param_2 + 3) = uVar5 - 1 & uVar5;
    param_2[4] = param_2[4] + -1;
    uVar2 = *(undefined4 *)(lVar6 + -0x68 + (ulonglong)uVar4 * -0x68);
    lVar3 = param_2[5];
    *param_1 = uVar2;
    *(ulonglong *)(param_1 + 2) = lVar6 + (ulonglong)uVar4 * -0x68 + -0x60;
    *(longlong *)(param_1 + 4) = lVar3;
    param_1[6] = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}

