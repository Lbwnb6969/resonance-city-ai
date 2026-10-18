// VA 0x140373e30, PDB extent 352 bytes
// tiny_glade::gui::settings::LastAppliedVideoSettings::needs_apply
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::settings::LastAppliedVideoSettings::needs_apply
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 352 */

byte pdb_140373e30(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  if (SBORROW8(0,*param_1)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f45020);
  }
  bVar5 = (*(char *)((longlong)param_1 + 0xaa) != *(char *)(param_2 + 0xaa)) * '\x02';
  bVar6 = bVar5 + 8;
  if (*(char *)((longlong)param_1 + 0xab) == *(char *)(param_2 + 0xab)) {
    bVar6 = bVar5;
  }
  lVar3 = param_1[7];
  lVar4 = *(longlong *)(param_2 + 0x38);
  if ((lVar3 == -0x7fffffffffffffff) || (lVar4 == -0x7fffffffffffffff)) {
    if (lVar3 != -0x7fffffffffffffff || lVar4 != -0x7fffffffffffffff) goto LAB_140373f67;
LAB_140373eef:
    cVar1 = *(char *)(param_2 + 0x7c);
    cVar2 = *(char *)((longlong)param_1 + 0x7c);
  }
  else {
    if ((lVar3 == -0x8000000000000000) || (lVar4 == -0x8000000000000000)) {
      if (lVar3 == -0x8000000000000000 && lVar4 == -0x8000000000000000) goto LAB_140373f53;
    }
    else if ((param_1[9] == *(longlong *)(param_2 + 0x48)) &&
            (iVar7 = pub_142e32750(param_1[8],*(undefined8 *)(param_2 + 0x40)), iVar7 == 0)) {
LAB_140373f53:
      if ((param_1[10] == *(longlong *)(param_2 + 0x50)) &&
         (param_1[0xb] == *(longlong *)(param_2 + 0x58))) goto LAB_140373eef;
    }
LAB_140373f67:
    bVar6 = bVar6 | 4;
    cVar1 = *(char *)(param_2 + 0x7c);
    cVar2 = *(char *)((longlong)param_1 + 0x7c);
  }
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      return bVar6;
    }
  }
  else if ((((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x7d) == *(char *)(param_2 + 0x7d)))
           && (*(char *)((longlong)param_1 + 0x7e) == *(char *)(param_2 + 0x7e))) &&
          ((int)param_1[0xd] == *(int *)(param_2 + 0x68))) {
    if ((int)param_1[0xd] == 0) {
      return bVar6;
    }
    if ((((short)param_1[0xf] == *(short *)(param_2 + 0x78)) &&
        (*(int *)((longlong)param_1 + 0x74) == *(int *)(param_2 + 0x74))) &&
       (*(longlong *)((longlong)param_1 + 0x6c) == *(longlong *)(param_2 + 0x6c))) {
      return bVar6;
    }
  }
  return bVar6 | 1;
}

