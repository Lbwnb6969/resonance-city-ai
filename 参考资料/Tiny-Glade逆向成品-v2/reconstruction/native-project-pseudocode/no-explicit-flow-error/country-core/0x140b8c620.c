// VA 0x140b8c620, PDB extent 494 bytes
// country_core::systems::wall::shapes::circle::ui_create_circle::circle_signifier
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_create_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::ui_create_circle::circle_signifier
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_create_circle.rs
   Extent: 494 */

void pdb_140b8c620(ulonglong *param_1,undefined4 *param_2,byte param_3)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte *pbStack_68;
  code *pcStack_60;
  byte abStack_49 [9];
  
  abStack_49[1] = 0xfe;
  abStack_49[2] = 0xff;
  abStack_49[3] = 0xff;
  abStack_49[4] = 0xff;
  abStack_49[5] = 0xff;
  abStack_49[6] = 0xff;
  abStack_49[7] = 0xff;
  abStack_49[8] = 0xff;
  uStack_70 = pdb_140b8ecf0;
  pbStack_68 = abStack_49;
  pcStack_60 = pdb_1400aa270;
  uStack_78 = (byte *)param_2;
  abStack_49[0] = param_3;
  pdb_140f60760(&uStack_98,&UNK_14305dd98,&uStack_78);
  uStack_78._0_4_ = *param_2;
  uStack_78._4_4_ = param_2[1];
  uStack_70._0_4_ = param_2[2];
  uStack_70._4_4_ = param_2[3];
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x28,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  pbVar2[0] = 1;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  pbVar2[8] = 1;
  pbVar2[9] = 0;
  pbVar2[10] = 0;
  pbVar2[0xb] = 0;
  pbVar2[0xc] = 0;
  pbVar2[0xd] = 0;
  pbVar2[0xe] = 0;
  pbVar2[0xf] = 0;
  *(undefined4 *)(pbVar2 + 0x10) = (undefined4)uStack_78;
  *(undefined4 *)(pbVar2 + 0x14) = uStack_78._4_4_;
  *(undefined4 *)(pbVar2 + 0x18) = (undefined4)uStack_70;
  *(undefined4 *)(pbVar2 + 0x1c) = uStack_70._4_4_;
  pbVar2[0x20] = param_3;
  uStack_70 = (code *)&UNK_14305ddb0;
  uStack_78 = pbVar2;
  if ((longlong)uStack_88 < 0) {
    uVar4 = 0;
LAB_140b8c6e2:
    pbStack_80 = pbVar2;
    pdb_142dc7e2a(uVar4,uStack_88);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uStack_88 == 0) {
    pbVar3 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar4 = 1;
    pbVar3 = pub_1406abab0(uStack_88,1);
    if (pbVar3 == (byte *)0x0) goto LAB_140b8c6e2;
    pub_142e32760(pbVar3,pbStack_90,uStack_88);
  }
  *param_1 = uStack_88;
  param_1[1] = (ulonglong)pbVar3;
  param_1[2] = uStack_88;
  param_1[3] = (ulonglong)pbVar2;
  param_1[4] = (ulonglong)&UNK_14305ddb0;
  if (uStack_98 != 0) {
    pub_1406abac0(pbStack_90,uStack_98,1);
  }
  return;
}

