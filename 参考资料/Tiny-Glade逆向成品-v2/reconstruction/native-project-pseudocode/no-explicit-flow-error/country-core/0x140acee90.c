// VA 0x140acee90, PDB extent 1079 bytes
// country_core::systems::mod_editor::EditingMod::copy_in
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::EditingMod::copy_in
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 1079 */

void pdb_140acee90(longlong param_1,byte **param_2,byte ***param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte **ppbVar5;
  byte **ppbVar6;
  byte ***pppbVar7;
  byte ***arg0;
  undefined8 uVar8;
  byte **ppbStack_d8;
  byte **ppbStack_d0;
  byte **ppbStack_c8;
  byte ***pppbStack_c0;
  byte **ppbStack_b8;
  byte ***pppbStack_b0;
  byte ***pppbStack_a8;
  code *pcStack_a0;
  byte ***pppbStack_98;
  byte ***pppbStack_88;
  byte **ppbStack_80;
  byte ***pppbStack_78;
  byte ***pppbStack_70;
  byte ***pppbStack_68;
  byte **ppbStack_60;
  byte ***pppbStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar8 = param_5;
  ppbStack_d8 = param_2;
  ppbStack_d0 = (byte **)param_3;
  lVar3 = pdb_140f3eaf0(param_4,param_5);
  if (lVar3 != 0) {
    pppbStack_68 = (byte ***)CONCAT71(pppbStack_68._1_7_,1);
    pppbStack_88 = (byte ***)pdb_140f46c40(&pppbStack_68,lVar3,uVar8);
    if (pppbStack_88 != (byte ***)0x0) goto LAB_140acef6d;
  }
  while (pppbStack_88 = param_3, uVar4 = pdb_140f4f180(param_2,param_3,param_4,param_5),
        (uVar4 & 1) == 0) {
    lVar3 = pdb_140f3ecf0(param_2,param_3);
    if (lVar3 == 0) {
      ppbVar5 = (byte **)0x1;
      pppbVar7 = (byte ***)0x0;
      arg0 = (byte ***)0x0;
LAB_140acf028:
      pppbStack_c0 = pppbVar7;
      ppbStack_b8 = ppbVar5;
      pppbStack_b0 = arg0;
      pppbStack_70 = pppbVar7;
      lVar3 = pdb_140f3ecf0(param_4,param_5);
      if (lVar3 == 0) {
        ppbVar6 = (byte **)0x1;
        pppbStack_88 = (byte ***)0x0;
        pppbStack_78 = (byte ***)0x0;
      }
      else {
        pppbStack_70 = pppbVar7;
        pdb_140f5fd10(&pppbStack_68,lVar3,param_5);
        pppbStack_78 = pppbStack_58;
        pppbStack_88 = pppbStack_68;
        ppbVar6 = ppbStack_60;
        if (SBORROW8(0,(longlong)pppbStack_68)) {
          if ((longlong)pppbStack_58 < 0) {
            uVar8 = 0;
LAB_140acf079:
            pppbStack_70 = pppbVar7;
            pdb_142dc7e2a(uVar8,pppbStack_78);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (pppbStack_58 == (byte ***)0x0) {
            ppbVar6 = (byte **)0x1;
            pppbStack_78 = (byte ***)0x0;
            pppbStack_88 = (byte ***)0x0;
          }
          else {
            ppbStack_c8 = ppbStack_60;
            pdb_14007ee60(-(longlong)pppbStack_68);
            uVar8 = 1;
            ppbVar6 = (byte **)pub_1406abab0((ulonglong)pppbStack_78,1);
            if (ppbVar6 == (byte **)0x0) goto LAB_140acf079;
            pub_142e32760(ppbVar6,ppbStack_c8,pppbStack_78);
            pppbStack_88 = pppbStack_78;
          }
        }
      }
      ppbStack_80 = ppbVar6;
      if ((arg0 == pppbStack_78) && (iVar2 = pub_142e32750(ppbVar5,ppbVar6,arg0), iVar2 == 0)) {
        pppbStack_a8 = (byte ***)&pppbStack_88;
        pcStack_a0 = pdb_140001020;
        pdb_140f60760(&pppbStack_68,&UNK_14304ddb6,&pppbStack_a8);
        pppbStack_a8 = pppbStack_68;
        pppbStack_98 = pppbStack_58;
        pdb_140acec60(param_1,&pppbStack_a8);
      }
      else {
        pppbStack_68 = (byte ***)&pppbStack_c0;
        ppbStack_60 = (byte **)pdb_140001020;
        pppbStack_58 = (byte ***)&pppbStack_88;
        pcStack_50 = pdb_140001020;
        pdb_140f60760(&pppbStack_a8,&UNK_14304dda7,&pppbStack_68);
        pppbStack_68 = pppbStack_a8;
        pppbStack_58 = pppbStack_98;
        pdb_140acec60(param_1,&pppbStack_68);
      }
      *(undefined4 *)(param_1 + 0x148) = 1000000000;
      if (pppbStack_88 != (byte ***)0x0) {
        pub_1406abac0((byte *)ppbStack_80,(ulonglong)pppbStack_88,1);
      }
      if (pppbStack_c0 == (byte ***)0x0) {
        return;
      }
      pub_1406abac0((byte *)ppbStack_b8,(ulonglong)pppbStack_c0,1);
      return;
    }
    pdb_140f5fd10(&pppbStack_68,lVar3,param_3);
    arg0 = pppbStack_58;
    param_2 = ppbStack_60;
    ppbVar5 = ppbStack_60;
    pppbVar7 = pppbStack_68;
    if (!SBORROW8(0,(longlong)pppbStack_68)) goto LAB_140acf028;
    if (-1 < (longlong)pppbStack_58) {
      if (pppbStack_58 == (byte ***)0x0) {
        ppbVar5 = (byte **)0x1;
        arg0 = (byte ***)0x0;
        pppbVar7 = (byte ***)0x0;
      }
      else {
        pdb_14007ee60();
        param_3 = (byte ***)0x1;
        ppbVar5 = (byte **)pub_1406abab0((ulonglong)arg0,1);
        if (ppbVar5 == (byte **)0x0) goto LAB_140acef46;
        pub_142e32760(ppbVar5,param_2,arg0);
        pppbVar7 = arg0;
      }
      goto LAB_140acf028;
    }
    param_3 = (byte ***)0x0;
LAB_140acef46:
    pdb_142dc7e2a(param_3,arg0);
  }
LAB_140acef6d:
  pppbStack_68 = &ppbStack_d8;
  ppbStack_60 = (byte **)pdb_140117670;
  pppbStack_58 = (byte ***)&pppbStack_88;
  pcStack_50 = pdb_140f59780;
  pdb_140f60760(&pppbStack_a8,&UNK_14304ddbf,&pppbStack_68);
  pppbStack_58 = pppbStack_98;
  pdb_140acec60(param_1,&pppbStack_68);
  pdb_1404b38e0(&pppbStack_88);
  return;
}

