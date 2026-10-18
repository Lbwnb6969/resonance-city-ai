// VA 0x142b29bd0, PDB extent 574 bytes
// system_onboarding::hint_binding::HintMouseInput::compact_text
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_binding::HintMouseInput::compact_text
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
   Extent: 574 */

longlong * pdb_142b29bd0(longlong *param_1,short *param_2)

{
  undefined8 uVar1;
  ulonglong *arg0;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong *puStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  ulonglong *puStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  byte *pbStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*param_2 == 0) {
    pdb_140a17400(&puStack_58,param_2[1],param_2[2]);
  }
  else if (*param_2 == 1) {
    pdb_140a17400(&puStack_58,param_2[1],param_2[2]);
    uVar1 = 0x13;
    uStack_a0 = pdb_140dc6290(&UNK_14366b530);
    pcStack_88 = pdb_140001020;
    puStack_80 = &uStack_a0;
    pcStack_78 = pdb_1402ed400;
    uStack_98 = uVar1;
    puStack_90 = (ulonglong *)&puStack_58;
    pdb_140f60760(&puStack_70,&UNK_14366b543,&puStack_90);
    if (puStack_58 != (ulonglong *)0x0) {
      pub_1406abac0(pbStack_50,(ulonglong)puStack_58,1);
    }
    pbStack_50 = (byte *)pcStack_68;
    puStack_48 = puStack_60;
    puStack_58 = puStack_70;
  }
  else {
    arg0 = (ulonglong *)0x15;
    uVar1 = pdb_140dc6290(&UNK_14366b54b);
    uVar3 = arg0 == (ulonglong *)0x0;
    if (-1 < (longlong)arg0) goto LAB_142b29cd9;
    uVar2 = 0;
    do {
      uVar3 = 1;
      uVar1 = pdb_142dc7e2a(uVar2,arg0);
LAB_142b29cd9:
      puStack_58 = arg0;
      puStack_48 = arg0;
      if ((bool)uVar3) {
        pbStack_50 = (byte *)0x1;
        goto LAB_142b29d1f;
      }
      pdb_14007ee60();
      uVar2 = 1;
      pbStack_50 = pub_1406abab0((ulonglong)arg0,1);
    } while (pbStack_50 == (byte *)0x0);
    pub_142e32760(pbStack_50,uVar1,arg0);
  }
LAB_142b29d1f:
  puStack_70 = (ulonglong *)&puStack_58;
  pcStack_68 = pdb_140001020;
  pdb_140f60760(&puStack_90,&UNK_14366b560,&puStack_70);
  param_1[2] = (longlong)puStack_80;
  *param_1 = (longlong)puStack_90;
  param_1[1] = (longlong)pcStack_88;
  if (puStack_58 != (ulonglong *)0x0) {
    pub_1406abac0(pbStack_50,(ulonglong)puStack_58,1);
  }
  return param_1;
}

