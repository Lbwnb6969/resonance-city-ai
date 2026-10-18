// VA 0x14191d9c0, PDB extent 1496 bytes
// country_core::systems::save::save_game::write_json_sections<std::io::cursor::Cursor<alloc::vec::Vec<u8,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::write_json_sections<std::io::cursor::Cursor<alloc::vec::Vec<u8,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 1496 */

undefined8 pdb_14191d9c0(byte *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  code *arg0;
  byte *pbVar11;
  undefined8 **ppuStack_b8;
  code *pcStack_b0;
  ulonglong uStack_a8;
  undefined8 **ppuStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  undefined8 *puStack_88;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  undefined1 uStack_51;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbVar1 = param_1 + param_2 * 0x28;
  puStack_88 = param_3;
  do {
    if (param_1 == pbVar1) {
      return 0;
    }
    uStack_a8 = (ulonglong)*param_1;
    uVar5 = (uint)*param_1 * 8;
    pcStack_b0 = *(code **)(&UNK_143358e48 + uVar5);
    ppuStack_b8 = *(undefined8 ***)(&UNK_143358eb0 + uVar5);
    ppuStack_80 = &ppuStack_b8;
    pcStack_78 = pdb_1402ed400;
    pdb_140f60760(&ppuStack_a0,&UNK_143358b28,&ppuStack_80);
    puVar3 = puStack_88;
    uVar2 = uStack_90;
    ppuStack_50 = ppuStack_a0;
    pbVar9 = (byte *)param_3[3];
    pbVar6 = pbVar9 + uStack_90;
    pbVar8 = pbVar6;
    if (CARRY8((ulonglong)pbVar9,uStack_90)) {
      pbVar8 = (byte *)0xffffffffffffffff;
    }
    pbVar7 = (byte *)param_3[2];
    if (((byte *)*param_3 < pbVar8) &&
       ((ulonglong)((longlong)*param_3 - (longlong)pbVar7) <
        (ulonglong)((longlong)pbVar8 - (longlong)pbVar7))) {
      pbStack_60 = pbStack_98;
      pdb_142d7f1b0(puStack_88,pbVar7,(longlong)pbVar8 - (longlong)pbVar7,1,1);
      pbVar7 = (byte *)puVar3[2];
      pbVar8 = pbStack_60;
      if (pbVar9 <= pbVar7) goto LAB_14191db20;
LAB_14191dabf:
      puVar3 = puStack_88;
      lVar10 = puStack_88[1];
      pbStack_60 = pbVar6;
      pub_142e32780(pbVar7 + lVar10,0);
      puVar3[2] = pbVar9;
      pbVar6 = pbStack_60;
      pbVar7 = pbVar9;
    }
    else {
      pbVar8 = pbStack_98;
      if (pbVar7 < pbVar9) goto LAB_14191dabf;
LAB_14191db20:
      lVar10 = puStack_88[1];
    }
    pub_142e32760(pbVar9 + lVar10,pbVar8,uVar2);
    param_3 = puStack_88;
    if (pbVar7 < pbVar6) {
      puStack_88[2] = pbVar6;
      pbVar7 = pbVar6;
    }
    puStack_88[3] = pbVar6;
    if ((undefined8 ***)ppuStack_50 != (undefined8 ***)0x0) {
      pub_1406abac0(pbVar8,(ulonglong)ppuStack_50,1);
    }
    ppuStack_80 = (undefined8 **)0x0;
    pcStack_78 = (code *)0x1;
    uStack_70 = 0;
    uStack_90 = 0x60000020;
    ppuStack_a0 = &ppuStack_80;
    pbStack_98 = &UNK_143358cb0;
    cVar4 = pdb_140de0ce0(param_1 + 8,&ppuStack_a0);
    uVar2 = uStack_70;
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143358ce0,0x37,&uStack_51,&UNK_143358da0,&UNK_143358d88);
    }
    ppuStack_50 = ppuStack_80;
    pbVar8 = pbVar6 + uStack_70;
    pbVar9 = pbVar8;
    if (CARRY8((ulonglong)pbVar6,uStack_70)) {
      pbVar9 = (byte *)0xffffffffffffffff;
    }
    pbStack_60 = param_1;
    if (((byte *)*param_3 < pbVar9) &&
       ((ulonglong)((longlong)*param_3 - (longlong)pbVar7) <
        (ulonglong)((longlong)pbVar9 - (longlong)pbVar7))) {
      pbStack_68 = (byte *)pcStack_78;
      pdb_142d7f1b0(param_3,pbVar7,(longlong)pbVar9 - (longlong)pbVar7,1,1);
      pbVar7 = (byte *)param_3[2];
      arg0 = (code *)pbStack_68;
      if (pbVar6 <= pbVar7) goto LAB_14191dc40;
LAB_14191dbf3:
      lVar10 = param_3[1];
      pub_142e32780(pbVar7 + lVar10,0);
      param_3[2] = pbVar6;
      pbVar7 = pbVar6;
    }
    else {
      arg0 = pcStack_78;
      if (pbVar7 < pbVar6) goto LAB_14191dbf3;
LAB_14191dc40:
      lVar10 = param_3[1];
    }
    pub_142e32760(pbVar6 + lVar10,arg0,uVar2);
    if (pbVar7 < pbVar8) {
      param_3[2] = pbVar8;
      pbVar7 = pbVar8;
    }
    param_3[3] = pbVar8;
    if (ppuStack_50 != (undefined8 **)0x0) {
      pub_1406abac0((byte *)arg0,(ulonglong)ppuStack_50,1);
    }
    pdb_1418ef250(&ppuStack_80,&UNK_143358b2f,1,*(undefined8 *)(&UNK_143358f18 + uStack_a8 * 8));
    pcStack_b0 = pdb_140001020;
    ppuStack_b8 = &ppuStack_80;
    pdb_140f60760(&ppuStack_a0,&UNK_143358b30,&ppuStack_b8);
    uVar2 = uStack_90;
    ppuStack_50 = ppuStack_a0;
    pbStack_68 = pbStack_98;
    pbVar11 = pbVar8 + uStack_90;
    pbVar9 = pbVar11;
    if (CARRY8((ulonglong)pbVar8,uStack_90)) {
      pbVar9 = (byte *)0xffffffffffffffff;
    }
    if (((byte *)*param_3 < pbVar9) &&
       ((ulonglong)((longlong)*param_3 - (longlong)pbVar7) <
        (ulonglong)((longlong)pbVar9 - (longlong)pbVar7))) {
      pdb_142d7f1b0(param_3,pbVar7,(longlong)pbVar9 - (longlong)pbVar7,1,1);
      pbVar7 = (byte *)param_3[2];
      if (pbVar8 <= pbVar7) goto LAB_14191dd50;
LAB_14191dd0b:
      lVar10 = param_3[1];
      pub_142e32780(pbVar7 + lVar10,0);
      param_3[2] = pbVar8;
      pbVar7 = pbVar8;
    }
    else {
      if (pbVar7 < pbVar8) goto LAB_14191dd0b;
LAB_14191dd50:
      lVar10 = param_3[1];
    }
    pbVar9 = pbStack_68;
    pub_142e32760(pbVar8 + lVar10,pbStack_68,uVar2);
    if (pbVar7 < pbVar11) {
      param_3[2] = pbVar11;
    }
    param_3[3] = pbVar11;
    if ((undefined8 ***)ppuStack_50 != (undefined8 ***)0x0) {
      pub_1406abac0(pbVar9,(ulonglong)ppuStack_50,1);
    }
    pdb_1403b1b30(&ppuStack_a0,param_4,uStack_a8,pbVar6,pbVar11);
    if (ppuStack_80 != (undefined8 **)0x0) {
      pub_1406abac0((byte *)pcStack_78,(ulonglong)ppuStack_80,1);
    }
    param_1 = pbStack_60 + 0x28;
  } while( true );
}

