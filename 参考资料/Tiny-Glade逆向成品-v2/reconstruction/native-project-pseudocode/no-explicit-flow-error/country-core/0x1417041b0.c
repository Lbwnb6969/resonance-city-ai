// VA 0x1417041b0, PDB extent 501 bytes
// country_core::startup::init_color_library::init_color_library
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/init_color_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::init_color_library::init_color_library
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/init_color_library.rs
   Extent: 501 */

void pdb_1417041b0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong *plVar12;
  undefined8 uStack_4e0;
  byte *pbStack_4d8;
  undefined *puStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_290 [592];
  
  pdb_1417ce830(auStack_290);
  uVar1 = *param_2;
  plVar2 = (longlong *)*param_1;
  lVar3 = *plVar2;
  pub_142e32760(&uStack_4e0,auStack_290,0x250);
  pdb_14152f510(uVar1,lVar3 + 0x10,&uStack_4e0,1);
  plVar12 = *(longlong **)(param_5 + 8);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = *(longlong **)(param_5 + 0x10);
  }
  lVar3 = plVar12[2];
  if ((ulonglong)(*plVar12 - lVar3) < 600) {
    pdb_142d7f1b0(plVar12,lVar3,600,1,1);
  }
  lVar4 = plVar12[1];
  *(code **)(lVar4 + lVar3) = pdb_141609ee0;
  pub_142e32760(lVar4 + lVar3 + 8,auStack_290,0x250);
  plVar12[2] = lVar3 + 600;
  lVar3 = *param_3;
  lVar4 = *plVar2;
  puVar9 = (undefined8 *)pdb_140bf45b0(uVar1,&UNK_14331c8e0);
  if (puVar9 != (undefined8 *)0x0) {
    lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9);
    if (lVar10 != 0) {
      pbStack_4d8 = (byte *)0x8000000000000000;
      puStack_4d0 = &UNK_143327050;
      uStack_4c8 = 0x2c;
      uStack_4e0 = 0;
      pdb_141588750(lVar4 + 0x10,lVar3 + 8,1,&uStack_4e0,lVar10);
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      uVar1 = *param_4;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(0x12,1);
      uVar8 = _UNK_143327088;
      uVar7 = _UNK_143327084;
      uVar6 = _UNK_143327080;
      if (pbVar11 != (byte *)0x0) {
        *(undefined4 *)pbVar11 = _DAT_14332707c;
        *(undefined4 *)(pbVar11 + 4) = uVar6;
        *(undefined4 *)(pbVar11 + 8) = uVar7;
        *(undefined4 *)(pbVar11 + 0xc) = uVar8;
        pbVar11[0x10] = 0x6f;
        pbVar11[0x11] = 0x6e;
        uStack_4e0 = 0x12;
        puStack_4d0 = (undefined *)0x12;
        pbStack_4d8 = pbVar11;
        pdb_140a45980(uVar1,&uStack_4e0);
        return;
      }
      pdb_142dc7e2a(1,0x12);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143327038);
}

