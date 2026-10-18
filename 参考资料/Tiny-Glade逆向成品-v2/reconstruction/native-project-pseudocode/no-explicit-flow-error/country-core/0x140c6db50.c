// VA 0x140c6db50, PDB extent 758 bytes
// country_core::systems::save::shadow_file::ShadowFile::mark_dirty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/shadow_file.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::shadow_file::ShadowFile::mark_dirty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/shadow_file.rs
   Extent: 758 */

void pdb_140c6db50(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  ulonglong ***pppuVar10;
  ulonglong uVar11;
  ulonglong ***pppuVar12;
  ulonglong uVar13;
  code *pcVar14;
  bool bVar15;
  undefined1 uStack_b9;
  ulonglong ****ppppuStack_b8;
  code *pcStack_b0;
  undefined8 ****ppppuStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulonglong *puStack_90;
  ulonglong *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulonglong ****ppppuStack_60;
  ulonglong ***pppuStack_58;
  ulonglong ***pppuStack_50;
  undefined8 ****ppppuStack_48;
  ulonglong ***pppuStack_40;
  undefined8 ****ppppuStack_38;
  code *pcStack_30;
  ulonglong ***pppuStack_28;
  
  if (param_3 <= param_2) {
    return;
  }
  pppuVar12 = (ulonglong ***)(param_2 >> 0xc);
  pppuVar10 = (ulonglong ***)(((param_3 >> 0xc) + 1) - (ulonglong)((param_3 & 0xfff) == 0));
  pppuStack_58 = pppuVar12;
  pppuStack_50 = pppuVar10;
  if (4 < *_DAT_143ca8e90) {
    ppppuStack_48 = &pppuStack_58;
    pppuStack_40 = (ulonglong ***)pdb_140f72a40;
    ppppuStack_38 = &pppuStack_50;
    pcStack_30 = pdb_140f72a40;
    ppppuStack_b8 = (undefined8 ****)0x0;
    pcStack_b0 = (code *)&UNK_14307265f;
    ppppuStack_a8 = (undefined8 ****)0x28;
    pcStack_a0 = (code *)0x0;
    puStack_98 = &UNK_14307262b;
    puStack_90 = (ulonglong *)0x33;
    puStack_88 = (ulonglong *)0x5;
    puStack_80 = &UNK_14307265f;
    uStack_78 = 0x28;
    uStack_70 = 0xee00000001;
    puStack_68 = &UNK_143072750;
    ppppuStack_60 = (ulonglong ****)&ppppuStack_48;
    pdb_140f332f0(&uStack_b9,&ppppuStack_b8);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x68);
  pppuStack_28 = (ulonglong ***)(uVar4 >> 3);
  if (pppuStack_28 < pppuVar10) {
    pdb_140c71cb0((ulonglong *)(param_1 + 0x60),pppuVar10,0);
    uVar4 = *(ulonglong *)(param_1 + 0x68);
    pppuStack_28 = (ulonglong ***)(uVar4 >> 3);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  ppppuStack_48 = (undefined8 ****)pppuVar12;
  pppuStack_40 = pppuVar10;
  if (((pppuStack_28 < pppuVar12) || (pppuVar10 < pppuVar12)) || (pppuStack_28 < pppuVar10)) {
    ppppuStack_b8 = (ulonglong ****)&ppppuStack_48;
    pcStack_b0 = pdb_140bc04b0;
    ppppuStack_a8 = &pppuStack_28;
    pcStack_a0 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143072491,&ppppuStack_b8,&UNK_143072508);
  }
  uVar5 = (ulonglong)((uint)uVar4 & 7) + (ulonglong)((uint)uVar1 & 7) * 8 + (longlong)pppuVar12;
  uVar4 = (ulonglong)((uint)uVar5 & 7) + (ulonglong)((uint)(uVar5 >> 3) & 7) * 8;
  uVar13 = (longlong)pppuVar10 + (uVar4 - (longlong)pppuVar12) + 0x3f >> 6;
  uVar11 = (longlong)pppuVar10 - (longlong)pppuVar12;
  uVar6 = uVar4;
  if (uVar11 == 0) {
LAB_140c6dd37:
    cVar9 = (char)uVar6;
  }
  else {
    if (0x40 - uVar4 < uVar11) {
      bVar8 = (char)uVar11 - (char)(0x40 - uVar4) & 0x3f;
      uVar6 = 0x40;
      if (bVar8 != 0) {
        uVar6 = (ulonglong)bVar8;
      }
      goto LAB_140c6dd37;
    }
    cVar9 = (char)uVar11 + (char)uVar4;
  }
  if (uVar13 == 0) {
    pcVar14 = pdb_140c89480;
  }
  else {
    if (uVar4 == 0) {
      bVar15 = cVar9 == '@';
      pcVar7 = pdb_140c89570;
      pcVar14 = pdb_140c89430;
    }
    else {
      if (cVar9 == '@') {
        pcVar14 = pdb_140c893e0;
        goto LAB_140c6dd8f;
      }
      bVar15 = uVar13 == 1;
      pcVar7 = pdb_140c89530;
      pcVar14 = pdb_140c894a0;
    }
    if (bVar15) {
      pcVar14 = pcVar7;
    }
  }
LAB_140c6dd8f:
  (*pcVar14)(&ppppuStack_b8,(uVar1 & 0xfffffffffffffff8) + (uVar5 >> 6) * 8,uVar13,uVar4,cVar9);
  puVar3 = puStack_88;
  puVar2 = puStack_90;
  if (ppppuStack_b8 != (undefined8 ****)0x0) {
    if (ppppuStack_a8 != (undefined8 ****)0x0) {
      *ppppuStack_a8 = (undefined8 ***)((ulonglong)*ppppuStack_a8 | (ulonglong)pcStack_a0);
    }
    if (pcStack_b0 != (code *)0x0) {
      pub_142e32780(ppppuStack_b8,0xff,(longlong)pcStack_b0 << 3);
    }
    pcStack_b0 = (code *)puVar2;
    ppppuStack_a8 = (undefined8 ****)puVar3;
    if (puVar2 == (ulonglong *)0x0) {
      return;
    }
  }
  *(ulonglong *)pcStack_b0 = *(ulonglong *)pcStack_b0 | (ulonglong)ppppuStack_a8;
  return;
}

