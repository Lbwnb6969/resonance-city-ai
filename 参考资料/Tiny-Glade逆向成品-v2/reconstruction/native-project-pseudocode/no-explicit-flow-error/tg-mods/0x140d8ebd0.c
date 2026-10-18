// VA 0x140d8ebd0, PDB extent 530 bytes
// tg_mods::overlay::numbered_layer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::numbered_layer
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 530 */

uint pdb_140d8ebd0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char acStack_20 [8];
  char *pcStack_18;
  ulonglong uStack_10;
  
  lVar3 = pdb_140f3ee10();
  if ((lVar3 == 0) || (pdb_140f69110(acStack_20,lVar3,param_2), acStack_20[0] != '\0')) {
    return 0;
  }
  if (uStack_10 == 0) {
    uVar1 = 1;
  }
  else {
    if (uStack_10 == 1) {
      cVar5 = *pcStack_18;
      uVar1 = 0x101;
      if ((cVar5 == '+') || (cVar5 == '-')) goto LAB_140d8edba;
    }
    else {
      cVar5 = *pcStack_18;
    }
    uVar4 = (ulonglong)(cVar5 == '+');
    uVar6 = uStack_10 - uVar4;
    pbVar7 = (byte *)(pcStack_18 + uVar4);
    if (uVar6 < 9) {
      if ((uStack_10 == uVar4) ||
         ((uVar1 = 0x101, *pbVar7 - 0x30 < 10 &&
          ((uVar6 == 1 ||
           ((pbVar7[1] - 0x30 < 10 &&
            ((uVar6 == 2 ||
             ((pbVar7[2] - 0x30 < 10 &&
              ((uVar6 == 3 ||
               ((pbVar7[3] - 0x30 < 10 &&
                ((uVar6 == 4 ||
                 ((pbVar7[4] - 0x30 < 10 &&
                  ((uVar6 == 5 ||
                   ((pbVar7[5] - 0x30 < 10 &&
                    ((uVar6 == 6 ||
                     ((pbVar7[6] - 0x30 < 10 && ((uVar6 == 7 || (pbVar7[7] - 0x30 < 10))))))))))))))
                )))))))))))))))) {
LAB_140d8edb3:
        uVar1 = 0;
      }
    }
    else {
      uVar6 = 0;
      lVar3 = 0;
      do {
        if (lVar3 == uStack_10 - uVar4) goto LAB_140d8edb3;
        uVar1 = (uint)(uVar6 * 10);
        if ((int)(uVar6 * 10 >> 0x20) != 0) {
          uVar1 = 0x101;
          goto LAB_140d8edba;
        }
        uVar2 = pbVar7[lVar3] - 0x30;
        if (9 < uVar2) {
          uVar1 = 0x101;
          goto LAB_140d8edba;
        }
        lVar3 = lVar3 + 1;
        uVar6 = (ulonglong)(uVar2 + uVar1);
      } while (!CARRY4(uVar2,uVar1));
      uVar1 = 0x201;
    }
  }
LAB_140d8edba:
  return ~uVar1 & 1;
}

