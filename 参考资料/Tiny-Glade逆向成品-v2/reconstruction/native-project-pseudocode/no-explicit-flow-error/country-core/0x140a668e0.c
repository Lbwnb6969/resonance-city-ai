// VA 0x140a668e0, PDB extent 1389 bytes
// country_core::systems::steam::workshop_subscriptions::lookup_mod_on_workshop::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_subscriptions::lookup_mod_on_workshop::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
   Extent: 1389 */

void pdb_140a668e0(ulonglong *param_1,undefined8 *param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  ulonglong **ppuStack_1e0;
  undefined8 uStack_178;
  undefined8 *puStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong *puStack_a8;
  ulonglong *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  char *pcStack_78;
  ulonglong *puStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong **ppuStack_48;
  code *pcStack_40;
  ulonglong *puStack_38;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puStack_38 = param_1;
  if (*(char *)(param_2 + 3) == '\x02') {
    puStack_70 = (ulonglong *)CONCAT71(puStack_70._1_7_,*(undefined1 *)param_2);
    if (1 < *_DAT_143ca8e90) {
      uStack_50 = pdb_141351190;
      ppuStack_48 = &puStack_70;
      pcStack_40 = pdb_140cb3520;
      uStack_238 = (undefined1 *)0x0;
      uStack_230 = &UNK_1430407ce;
      uStack_228 = (ulonglong **)0x34;
      uStack_220 = (ulonglong *)0x0;
      uStack_218 = &UNK_14304078e;
      uStack_210 = 0x3f;
      uStack_208 = 2;
      puStack_200 = &UNK_1430407ce;
      uStack_1f8 = 0x34;
      uStack_1f0 = 0x15b00000001;
      puStack_1e8 = &UNK_143040824;
      ppuStack_1e0 = (ulonglong **)&uStack_58;
      uStack_58 = param_1;
      pdb_140f332f0(&uStack_2a,&uStack_238);
    }
    puStack_98 = (ulonglong *)0x8000000000000003;
  }
  else {
    uStack_58 = (ulonglong *)*param_2;
    uStack_50 = (code *)param_2[1];
    ppuStack_48 = (ulonglong **)param_2[2];
    pcStack_40 = (code *)param_2[3];
    if (*(int *)((longlong)param_2 + 0x14) == 0) {
      if (2 < *_DAT_143ca8e90) {
        uStack_68 = pdb_141351190;
        uStack_238 = (undefined1 *)0x0;
        uStack_230 = &UNK_1430407ce;
        uStack_228 = (ulonglong **)0x34;
        uStack_220 = (ulonglong *)0x0;
        uStack_218 = &UNK_14304078e;
        uStack_210 = 0x3f;
        uStack_208 = 3;
        puStack_200 = &UNK_1430407ce;
        uStack_1f8 = 0x34;
        uStack_1f0 = 0x13b00000001;
        puStack_1e8 = &UNK_143040802;
        ppuStack_1e0 = &puStack_70;
        puStack_70 = param_1;
        pdb_140f332f0(&uStack_2a,&uStack_238);
      }
      puStack_98 = (ulonglong *)0x8000000000000002;
    }
    else {
      uStack_238 = (undefined1 *)0x8000000000000001;
      uStack_178 = 0x8000000000000001;
      puStack_b8 = &uStack_58;
      uStack_b0 = 0;
      uStack_ac = (int)param_2[2];
      puStack_a8 = param_1;
      pdb_1415f3240(&puStack_70,&uStack_238);
      uStack_238 = &uStack_2a;
      if (1 < uStack_60) {
        if (uStack_60 < 0x15) {
          pdb_14151af60(uStack_68,uStack_60,1,&uStack_238);
        }
        else {
          pdb_140c759b0(uStack_68,uStack_60,&uStack_238);
        }
      }
      puStack_98 = puStack_70;
      uStack_90 = (undefined4)uStack_68;
      uStack_8c = uStack_68._4_4_;
      uStack_88 = uStack_60;
    }
    pdb_141ab7e60(&uStack_58);
  }
  uVar5 = puStack_38[3];
  pcVar1 = (char *)(uVar5 + 0x10);
  LOCK();
  bVar10 = *(char *)(uVar5 + 0x10) == '\0';
  if (bVar10) {
    *(char *)(uVar5 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    uStack_29 = 1;
    pdb_142dbd1a0(pcVar1);
  }
  uStack_29 = 1;
  pdb_140e9a150(pcVar1);
  uStack_2b = 1;
  pcStack_78 = pcVar1;
  pdb_140f60be0(&uStack_58,puStack_38);
  uStack_210 = uStack_88;
  uStack_218._0_4_ = uStack_90;
  uStack_218._4_4_ = uStack_8c;
  uStack_220 = puStack_98;
  uStack_238._0_4_ = SUB84(uStack_58,0);
  uStack_238._4_4_ = uStack_58._4_4_;
  uStack_230._0_4_ = SUB84(uStack_50,0);
  uStack_230._4_4_ = uStack_50._4_4_;
  uStack_228 = ppuStack_48;
  lVar6 = *(longlong *)(uVar5 + 0x28);
  if (lVar6 == *(longlong *)(uVar5 + 0x18)) {
    pdb_142d7e7c0(uVar5 + 0x18);
  }
  pcVar1 = pcStack_78;
  lVar7 = *(longlong *)(uVar5 + 0x20);
  lVar9 = lVar6 * 0x30;
  puVar3 = (undefined4 *)(lVar7 + 0x20 + lVar9);
  *puVar3 = (undefined4)uStack_218;
  puVar3[1] = uStack_218._4_4_;
  puVar3[2] = (undefined4)uStack_210;
  puVar3[3] = uStack_210._4_4_;
  puVar3 = (undefined4 *)(lVar7 + 0x10 + lVar9);
  *puVar3 = (undefined4)uStack_228;
  puVar3[1] = uStack_228._4_4_;
  puVar3[2] = (undefined4)uStack_220;
  puVar3[3] = uStack_220._4_4_;
  puVar3 = (undefined4 *)(lVar7 + lVar9);
  *puVar3 = (undefined4)uStack_238;
  puVar3[1] = uStack_238._4_4_;
  puVar3[2] = (undefined4)uStack_230;
  puVar3[3] = uStack_230._4_4_;
  *(longlong *)(uVar5 + 0x28) = lVar6 + 1;
  uStack_29 = 0;
  pdb_140e9a350();
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar4 != '\x01') {
    uStack_29 = 0;
    pdb_142dbcef0(pcVar1,0);
  }
  puVar2 = puStack_38 + 3;
  if (*puStack_38 != 0) {
    pub_1406abac0((byte *)puStack_38[1],*puStack_38,1);
  }
  plVar8 = (longlong *)*puVar2;
  LOCK();
  *plVar8 = *plVar8 + -1;
  UNLOCK();
  if (*plVar8 == 0) {
    pdb_140c7a8f0(puVar2);
  }
  return;
}

