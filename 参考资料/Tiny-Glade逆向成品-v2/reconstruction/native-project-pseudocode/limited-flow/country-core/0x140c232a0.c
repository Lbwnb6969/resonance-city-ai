// VA 0x140c232a0, PDB extent 424 bytes
// country_core::startup::load_prefabs::impl$1::watch_atlas::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_prefabs::impl$1::watch_atlas::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 424 */

void pdb_140c232a0(longlong *param_1,ulonglong *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  longlong lStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  ulonglong *puStack_40;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puStack_40 = param_2;
  if (*param_2 >> 1 == 0x4000000000000001) {
    lVar3 = *param_1;
    lVar9 = lVar3 + 0x10;
    LOCK();
    bVar10 = *(char *)(lVar3 + 0x10) == '\0';
    if (bVar10) {
      *(char *)(lVar3 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar10) {
      pdb_142dc6be0(lVar9);
    }
    puVar4 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uStack_34 = 0;
      cVar5 = *(char *)(lVar3 + 0x11);
    }
    else {
      uStack_34 = pdb_142dc79e0();
      uStack_34 = uStack_34 ^ 1;
      cVar5 = *(char *)(lVar3 + 0x11);
    }
    if (cVar5 != '\0') {
      uVar8 = (ulonglong)puStack_50 >> 8;
      puStack_50 = (undefined *)CONCAT71((int7)uVar8,(char)uStack_34);
      lStack_58 = lVar9;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14306aff0,0x2b,&lStack_58,&UNK_14306b040,&UNK_14306abd8);
    }
    lStack_48 = lVar9;
    pdb_1417b2a00(lVar3 + 0x18,(char)param_1[1]);
    pcVar1 = (char *)(lVar3 + 0x10);
    if ((((char)uStack_34 == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
      *(undefined1 *)(lVar3 + 0x11) = 1;
    }
    LOCK();
    cVar5 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      pdb_142dc6ca0(pcVar1);
    }
  }
  puVar4 = puStack_40;
  uVar8 = *puStack_40;
  uVar6 = 6;
  if ((longlong)uVar8 < 0) {
    uVar6 = uVar8 ^ 0x8000000000000000;
  }
  lVar9 = 8;
  if (5 < uVar6) {
    if (uVar6 != 6) {
      if (uVar6 == 7) {
        return;
      }
      uVar8 = puStack_40[5];
      uVar6 = (longlong)uVar8 >> 0x3f & uVar8 + 0x8000000000000001;
      if (uVar6 == 1) {
        puStack_50 = &UNK_140987869;
        pdb_1404b38e0(puStack_40 + 6);
      }
      else if ((uVar6 == 0) && (uVar8 != 0)) {
        puStack_50 = &UNK_140987840;
        pub_1406abac0((byte *)puStack_40[6],uVar8,1);
      }
      uVar8 = puVar4[1];
      if (SBORROW8(0,uVar8)) {
        return;
      }
      goto code_r0x0001409877d2;
    }
    lVar9 = 0x20;
    if (uVar8 != 0) {
      puStack_50 = &UNK_14098785b;
      pub_1406abac0((byte *)puStack_40[1],uVar8,1);
    }
  }
  uVar8 = *(ulonglong *)((longlong)puVar4 + lVar9);
code_r0x0001409877d2:
  if (uVar8 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)((longlong)puVar4 + lVar9 + 8);
  puStack_40 = (ulonglong *)&UNK_140f3c37e;
  uVar7 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar7,0,uVar2);
  return;
}

