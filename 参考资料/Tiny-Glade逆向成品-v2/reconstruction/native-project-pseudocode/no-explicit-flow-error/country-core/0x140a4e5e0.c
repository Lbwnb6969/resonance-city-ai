// VA 0x140a4e5e0, PDB extent 723 bytes
// country_core::systems::backend::configwatch::configwatch
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/configwatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::backend::configwatch::configwatch
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/configwatch.rs
   Extent: 723 */

void pdb_140a4e5e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  char cVar8;
  bool bVar9;
  char *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  char ***pppcStack_70;
  char **ppcStack_68;
  code *pcStack_60;
  char *pcStack_58;
  byte bStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(*param_3 + 0x30);
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar9 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar9) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar9) {
    pdb_142dc6be0(pcVar1);
  }
  puVar7 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bStack_50 = 0;
    cVar8 = *(char *)(lVar2 + 0x11);
  }
  else {
    bStack_50 = pdb_142dc79e0();
    bStack_50 = bStack_50 ^ 1;
    cVar8 = *(char *)(lVar2 + 0x11);
  }
  if (cVar8 != '\0') {
    uVar6 = (ulonglong)puStack_c0 >> 8;
    puStack_c0 = (undefined *)CONCAT71((int7)uVar6,bStack_50);
    pcStack_c8 = pcVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303d060,0x2b,&pcStack_c8,&UNK_14303d040,&UNK_14303ce68);
  }
  pcStack_58 = pcVar1;
  if (!SBORROW8(0,*(longlong *)(lVar2 + 0x18))) {
    if (2 < *_DAT_143ca8e90) {
      ppcStack_68 = &pcStack_58;
      pcStack_60 = pdb_140bdafb0;
      pcStack_c8 = (char *)0x0;
      puStack_c0 = &UNK_14303cea2;
      uStack_b8 = 0x2b;
      uStack_b0 = 0;
      puStack_a8 = &UNK_14303ce30;
      uStack_a0 = 0x36;
      uStack_98 = 3;
      puStack_90 = &UNK_14303cea2;
      uStack_88 = 0x2b;
      uStack_80 = 0x1600000001;
      puStack_78 = &UNK_14303ce80;
      pppcStack_70 = &ppcStack_68;
      pdb_140f332f0(&uStack_41,&pcStack_c8);
    }
    uVar3 = *param_1;
    uVar4 = *param_5;
    uVar5 = *param_2;
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    pdb_1417cf790(uVar3,uVar4,uVar5,*param_4);
    pcVar1 = pcStack_58;
    uVar6 = *(ulonglong *)(pcStack_58 + 8);
    if ((!SBORROW8(0,uVar6)) && (uVar6 != 0)) {
      pub_1406abac0(*(byte **)(pcStack_58 + 0x10),uVar6,1);
    }
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = -0x80;
  }
  pcVar1 = pcStack_58;
  if (((bStack_50 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = pdb_142dc79e0(), cVar8 == '\0')) {
    pcVar1[1] = '\x01';
  }
  LOCK();
  cVar8 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar8 == '\x02') {
    pdb_142dc6ca0(pcVar1);
  }
  return;
}

