// VA 0x142b61070, PDB extent 445 bytes
// zune_jpeg::headers::parse_app14<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: zune_jpeg::headers::parse_app14<ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 445 */

undefined1 * pdb_142b61070(undefined1 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  bool bVar9;
  byte bStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(ulonglong *)(param_2 + 29000);
  uVar4 = uVar1 + 2;
  uVar2 = *(ulonglong *)(param_2 + 0x7140);
  if (uVar4 <= uVar2 && uVar1 < 0xfffffffffffffffe) {
    lVar3 = *(longlong *)(param_2 + 0x7138);
    uVar5 = *(ushort *)(lVar3 + uVar1);
    *(ulonglong *)(param_2 + 29000) = uVar4;
    uVar5 = uVar5 << 8 | uVar5 >> 8;
    if (1 < uVar5) {
      uVar6 = (ulonglong)uVar5 - 2;
      uVar8 = 0xffffffffffffffff;
      if (!CARRY8(uVar4,uVar6)) {
        uVar8 = uVar4 + uVar6;
      }
      if (uVar8 <= uVar2) {
        if (uVar5 < 0xe) {
          *param_1 = 1;
          *(undefined **)(param_1 + 8) = &UNK_14367f88f;
          *(undefined8 *)(param_1 + 0x10) = 0x27;
          return param_1;
        }
        if ((uVar2 < uVar1 + 7 || 0xfffffffffffffffa < uVar4) ||
           (*(char *)(lVar3 + 4 + uVar4) != 'e' || *(int *)(lVar3 + uVar4) != 0x626f6441)) {
          if ((*(char *)(param_2 + 0x711a) != '\0' || *(char *)(param_2 + 0x711b) != '\0') ||
             (*(char *)(param_2 + 0x7119) != '\0')) {
            *param_1 = 1;
            *(undefined **)(param_1 + 8) = &UNK_14367f858;
            *(undefined8 *)(param_1 + 0x10) = 0x1b;
            return param_1;
          }
        }
        else {
          bVar9 = uVar1 + 0xd < uVar2;
          pbVar7 = &UNK_14367f418;
          if (bVar9) {
            pbVar7 = (byte *)(lVar3 + 0xd + uVar1);
          }
          uVar4 = uVar1 + 0xd + (ulonglong)bVar9;
          bStack_59 = *pbVar7;
          *(ulonglong *)(param_2 + 29000) = uVar4;
          if (2 < bStack_59) {
            uStack_58 = SUB87(&bStack_59,0);
            uStack_51 = (undefined1)((ulonglong)&bStack_59 >> 0x38);
            uStack_50 = 0x140f6e8f0;
            uStack_49 = 0;
            pdb_140f60760(auStack_38,&UNK_14367f873,&uStack_58);
            uStack_51 = auStack_38[0];
            uStack_50 = auStack_38._1_7_;
            uStack_49 = (undefined1)uStack_30;
            *param_1 = 0;
            *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_51,uStack_58);
            *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_49,uStack_50);
            *(undefined8 *)(param_1 + 0x10) = uStack_30;
            *(undefined8 *)(param_1 + 0x18) = uStack_28;
            return param_1;
          }
          *(char *)(param_2 + 0x71ca) = (char)(0x50206 >> ((bStack_59 & 3) << 3));
          uVar6 = (ulonglong)uVar5 - 0xe;
        }
        *(ulonglong *)(param_2 + 29000) = uVar4 + uVar6;
        *param_1 = 0xd;
        return param_1;
      }
    }
  }
  *param_1 = 10;
  return param_1;
}

