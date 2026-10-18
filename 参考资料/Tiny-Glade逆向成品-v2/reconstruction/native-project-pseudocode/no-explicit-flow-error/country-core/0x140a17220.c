// VA 0x140a17220, PDB extent 427 bytes
// country_core::game_key_bindings::InputBinding::format_to_string
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::game_key_bindings::InputBinding::format_to_string
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 427 */

ulonglong * pdb_140a17220(ulonglong *param_1,int *param_2,char param_3,char param_4)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  int *arg0;
  undefined8 uVar4;
  undefined1 uVar5;
  ulonglong *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  int *piStack_70;
  longlong *plStack_68;
  code *pcStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*param_2 == 0xc3) {
    pdb_140a17400(&uStack_50,(short)param_2[1],*(undefined2 *)((longlong)param_2 + 6));
    if (param_4 == '\0') {
      param_1[2] = uStack_40;
      *param_1 = uStack_50;
      param_1[1] = (ulonglong)pbStack_48;
    }
    else {
      pcStack_80 = pdb_140001020;
      puStack_88 = &uStack_50;
      pdb_140f60760(&plStack_68,&UNK_143036c93,&puStack_88);
      param_1[2] = uStack_58;
      *param_1 = (ulonglong)plStack_68;
      param_1[1] = (ulonglong)pcStack_60;
      if (uStack_50 != 0) {
        pub_1406abac0(pbStack_48,uStack_50,1);
      }
    }
  }
  else {
    puVar1 = (undefined *)pdb_140a173d0(param_2);
    puVar3 = &UNK_143036c89;
    if (puVar1 != (undefined *)0x0) {
      puVar3 = puVar1;
    }
    arg0 = (int *)0x3;
    if (puVar1 != (undefined *)0x0) {
      arg0 = param_2;
    }
    puStack_78 = puVar3;
    piStack_70 = arg0;
    if (param_3 == '\0') {
      uVar5 = arg0 == (int *)0x0;
      if (-1 < (longlong)arg0) goto LAB_140a17335;
      uVar4 = 0;
      do {
        uVar5 = 1;
        pdb_142dc7e2a(uVar4,arg0);
LAB_140a17335:
        if ((bool)uVar5) {
          pbVar2 = (byte *)0x1;
          goto LAB_140a1736d;
        }
        pdb_14007ee60();
        uVar4 = 1;
        pbVar2 = pub_1406abab0((ulonglong)arg0,1);
      } while (pbVar2 == (byte *)0x0);
      pub_142e32760(pbVar2,puVar3,arg0);
LAB_140a1736d:
      *param_1 = (ulonglong)arg0;
      param_1[1] = (ulonglong)pbVar2;
      param_1[2] = (ulonglong)arg0;
    }
    else {
      plStack_68 = (longlong *)&puStack_78;
      pcStack_60 = pdb_1402ed400;
      pdb_140f60760(param_1,&UNK_143036c8c,&plStack_68);
    }
  }
  return param_1;
}

