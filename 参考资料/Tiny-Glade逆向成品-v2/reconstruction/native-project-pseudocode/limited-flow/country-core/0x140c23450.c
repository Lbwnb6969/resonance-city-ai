// VA 0x140c23450, PDB extent 592 bytes
// country_core::startup::load_prefabs::impl$1::watch_prefab::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_prefabs::impl$1::watch_prefab::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 592 */

void pdb_140c23450(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulonglong *puVar8;
  char cVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong lStack_68;
  undefined1 uStack_60;
  longlong lStack_58;
  ulonglong *puStack_50;
  uint uStack_44;
  undefined *puStack_40;
  
  puStack_40 = (undefined *)0xfffffffffffffffe;
  puStack_50 = param_2;
  if (*param_2 >> 1 == 0x4000000000000001) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar12 = lVar3 + 0x10;
    LOCK();
    bVar14 = *(char *)(lVar3 + 0x10) == '\0';
    if (bVar14) {
      *(char *)(lVar3 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar14) {
      pdb_142dc6be0(lVar12);
    }
    puVar8 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uStack_44 = 0;
      cVar9 = *(char *)(lVar3 + 0x11);
    }
    else {
      uStack_44 = pdb_142dc79e0();
      uStack_44 = uStack_44 ^ 1;
      cVar9 = *(char *)(lVar3 + 0x11);
    }
    if (cVar9 != '\0') {
      uStack_60 = (undefined1)uStack_44;
      lStack_68 = lVar12;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14306aff0,0x2b,&lStack_68,&UNK_14306b060,&UNK_14306abf0);
    }
    lVar4 = *(longlong *)(param_1 + 8);
    uVar11 = *(ulonglong *)(param_1 + 0x10);
    uVar13 = uVar11 + 1 >> 1;
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      uVar13 = uVar11;
    }
    lStack_58 = lVar12;
    if (*(ulonglong *)(lVar3 + 0x28) < uVar13) {
      pdb_142d93660(lVar3 + 0x18,uVar13,lVar3 + 0x38,1);
    }
    if (uVar11 != 0) {
      uVar13 = 0;
      do {
        plVar5 = *(longlong **)(lVar4 + uVar13 * 0x10);
        uVar6 = *(undefined8 *)(lVar4 + 8 + uVar13 * 0x10);
        LOCK();
        lVar12 = *plVar5;
        *plVar5 = *plVar5 + 1;
        UNLOCK();
        if (*plVar5 == 0 || SCARRY8(lVar12,1) != *plVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        pdb_1417b6840(lVar3 + 0x18,plVar5,uVar6);
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar11);
    }
    pcVar2 = (char *)(lVar3 + 0x10);
    if ((((char)uStack_44 == '\0') && ((*puVar8 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
      *(undefined1 *)(lVar3 + 0x11) = 1;
    }
    LOCK();
    cVar9 = *pcVar2;
    *pcVar2 = '\0';
    UNLOCK();
    if (cVar9 == '\x02') {
      pdb_142dc6ca0(pcVar2);
    }
  }
  puVar8 = puStack_50;
  uVar11 = *puStack_50;
  uVar13 = 6;
  if ((longlong)uVar11 < 0) {
    uVar13 = uVar11 ^ 0x8000000000000000;
  }
  lVar12 = 8;
  if (5 < uVar13) {
    if (uVar13 != 6) {
      if (uVar13 == 7) {
        return;
      }
      uVar11 = puStack_50[5];
      uVar13 = (longlong)uVar11 >> 0x3f & uVar11 + 0x8000000000000001;
      if (uVar13 == 1) {
        puVar1 = puStack_50 + 6;
        puStack_50 = (ulonglong *)&UNK_140987869;
        pdb_1404b38e0(puVar1);
      }
      else if ((uVar13 == 0) && (uVar11 != 0)) {
        puVar1 = puStack_50 + 6;
        puStack_50 = (ulonglong *)&UNK_140987840;
        pub_1406abac0((byte *)*puVar1,uVar11,1);
      }
      uVar11 = puVar8[1];
      if (SBORROW8(0,uVar11)) {
        return;
      }
      goto code_r0x0001409877d2;
    }
    lVar12 = 0x20;
    if (uVar11 != 0) {
      puVar1 = puStack_50 + 1;
      puStack_50 = (ulonglong *)&UNK_14098785b;
      pub_1406abac0((byte *)*puVar1,uVar11,1);
    }
  }
  uVar11 = *(ulonglong *)((longlong)puVar8 + lVar12);
code_r0x0001409877d2:
  if (uVar11 == 0) {
    return;
  }
  uVar6 = *(undefined8 *)((longlong)puVar8 + lVar12 + 8);
  puStack_40 = &UNK_140f3c37e;
  uVar10 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar10,0,uVar6);
  return;
}

