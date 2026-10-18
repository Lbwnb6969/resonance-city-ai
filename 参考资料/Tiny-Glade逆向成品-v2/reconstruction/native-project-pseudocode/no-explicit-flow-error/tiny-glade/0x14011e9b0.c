// VA 0x14011e9b0, PDB extent 398 bytes
// tiny_glade::tgsr_capture::arm_blocker
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::tgsr_capture::arm_blocker
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 398 */

undefined8 * pdb_14011e9b0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  uint uStack_54;
  undefined8 uStack_50;
  uint *puStack_48;
  code *pcStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  longlong lStack_28;
  code *pcStack_20;
  longlong lStack_18;
  code *pcStack_10;
  
  if (*(char *)(param_3 + 0xc5) == '\0') {
    if ((*(float *)(param_4 + 0xc) != _DAT_142e36f28) ||
       (NAN(*(float *)(param_4 + 0xc)) || NAN(_DAT_142e36f28))) {
      puStack_48 = (uint *)(param_4 + 0xc);
      pcStack_40 = pdb_140f70fc0;
      puVar6 = &UNK_142e46c18;
    }
    else {
      uVar1 = *(uint *)(param_4 + 8);
      if (uVar1 == *(uint *)(param_4 + 4)) {
        uStack_50 = CONCAT44(uVar1 >> 0x10,uVar1) & 0xffffffff0000ffff;
        uStack_54 = *(int *)(param_2 + 8) + 0x20;
        if (uStack_54 <= uVar1 >> 0x10 && uStack_54 <= (uVar1 & 0xffff)) {
          *param_1 = 0x8000000000000000;
          return param_1;
        }
        lStack_28 = (longlong)&uStack_50 + 4;
        puStack_48 = &uStack_54;
        pcStack_40 = pdb_140f71a50;
        puStack_38 = &uStack_50;
        pcStack_30 = pdb_140f71a50;
        pcStack_20 = pdb_140f71a50;
        puVar6 = &UNK_142e46bb8;
      }
      else {
        puStack_48 = (uint *)(param_4 + 8);
        lStack_28 = param_4 + 4;
        puStack_38 = (undefined8 *)(param_4 + 10);
        lStack_18 = param_4 + 6;
        pcStack_40 = pdb_140f71140;
        pcStack_30 = pdb_140f71140;
        pcStack_20 = pdb_140f71140;
        pcStack_10 = pdb_140f71140;
        puVar6 = &UNK_142e46be3;
      }
    }
    pdb_140f60760(param_1,puVar6,&puStack_48);
    return param_1;
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x19,1);
  uVar3 = _UNK_142e46c53;
  if (pbVar4 != (byte *)0x0) {
    *(ulonglong *)(pbVar4 + 9) = CONCAT17(UNK_142e46c52,_DAT_142e46c4b);
    *(undefined8 *)(pbVar4 + 0x11) = uVar3;
    uVar3 = CONCAT71(_DAT_142e46c4b,UNK_142e46c4a);
    *(undefined8 *)pbVar4 = _DAT_142e46c42;
    *(undefined8 *)(pbVar4 + 8) = uVar3;
    *param_1 = 0x19;
    param_1[1] = pbVar4;
    param_1[2] = 0x19;
    return param_1;
  }
  pdb_142dc7e2a(1,0x19);
  pcVar2 = (code *)swi(3);
  puVar5 = (undefined8 *)(*pcVar2)();
  return puVar5;
}

