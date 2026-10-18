// VA 0x1429645e0, PDB extent 585 bytes
// system_critters::sheep::ui_pet_sheep::ui_pet_sheep::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/ui_pet_sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::ui_pet_sheep::ui_pet_sheep::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/ui_pet_sheep.rs
   Extent: 585 */

undefined8 *
pdb_1429645e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 auStack_168 [2];
  longlong *plStack_158;
  longlong *plStack_150;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_48;
  undefined4 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(8,8);
  if (pbStack_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_c8 = pub_1406abab0(0xb,1);
  if (pbStack_c8 != (byte *)0x0) {
    pbStack_c8[0] = 0x73;
    pbStack_c8[1] = 0x68;
    pbStack_c8[2] = 0x65;
    pbStack_c8[3] = 0x65;
    pbStack_c8[4] = 0x70;
    pbStack_c8[5] = 0x5f;
    pbStack_c8[6] = 0x68;
    pbStack_c8[7] = 0x65;
    pbStack_c8[7] = 0x65;
    pbStack_c8[8] = 0x61;
    pbStack_c8[9] = 0x72;
    pbStack_c8[10] = 0x74;
    uStack_d0 = 0xb;
    uStack_c0 = 0xb;
    uStack_d8 = 0x8000000000000000;
    pdb_1409bb100(auStack_168,&uStack_d8);
    pdb_1409bb0b0(&uStack_d8,auStack_168,_DAT_142e3787c);
    pdb_1409bb050(auStack_168,&uStack_d8,_DAT_142e3783c);
    pdb_1409bb020(&uStack_d8,auStack_168,5);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_48 = *param_2;
    pdb_1409bd9a0(auStack_168,&uStack_d8,&uStack_48);
    pdb_1409bafc0(&uStack_d8,auStack_168,0);
    pdb_1409bba50(auStack_168,&uStack_d8,param_3,param_4,param_5);
    if (plStack_158 == (longlong *)0x0) {
      plStack_158 = plStack_150;
    }
    lVar1 = plStack_158[2];
    if ((ulonglong)(*plStack_158 - lVar1) < 0x18) {
      pdb_142d7f1b0(plStack_158,lVar1,0x18,1,1);
    }
    lVar2 = plStack_158[1];
    *(code **)(lVar2 + lVar1) = pdb_142969c60;
    *(undefined8 *)(lVar2 + 8 + lVar1) = auStack_168[0];
    *(undefined1 *)(lVar2 + 0x10 + lVar1) = 0;
    plStack_158[2] = lVar1 + 0x18;
    *(undefined8 *)pbStack_38 = auStack_168[0];
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0xb);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

