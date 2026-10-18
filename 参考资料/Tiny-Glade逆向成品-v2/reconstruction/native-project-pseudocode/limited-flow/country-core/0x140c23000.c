// VA 0x140c23000, PDB extent 672 bytes
// country_core::asset_libraries::meshwatch::impl$0::watch_path::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/meshwatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::meshwatch::impl$0::watch_path::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/meshwatch.rs
   Extent: 672 */

void pdb_140c23000(longlong param_1,ulonglong *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong *puVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  undefined1 uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  uint uStack_44;
  undefined *puStack_40;
  
  puStack_40 = (undefined *)0xfffffffffffffffe;
  if (*param_2 >> 1 == 0x4000000000000001) {
    uStack_58 = param_2[1];
    pbStack_50 = (byte *)param_2[2];
    lVar8 = *(longlong *)(param_1 + 0x20);
    LOCK();
    bVar10 = *(char *)(lVar8 + 0x10) == '\0';
    if (bVar10) {
      *(char *)(lVar8 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar10) {
      pdb_142dc6be0(lVar8 + 0x10U);
    }
    puVar4 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uStack_44 = 0;
      cVar5 = *(char *)(lVar8 + 0x11);
    }
    else {
      uStack_44 = pdb_142dc79e0();
      uStack_44 = uStack_44 ^ 1;
      cVar5 = *(char *)(lVar8 + 0x11);
    }
    if (cVar5 != '\0') {
      uVar7 = (ulonglong)pbStack_70 >> 8;
      pbStack_70 = (byte *)CONCAT71((int7)uVar7,(char)uStack_44);
      uStack_78 = lVar8 + 0x10U;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14306aff0,0x2b,&uStack_78,&UNK_14306afd0,&UNK_14306ab90);
    }
    uVar7 = *(ulonglong *)(param_1 + 0x10);
    if ((longlong)uVar7 < 0) {
      uVar9 = 0;
LAB_140c23094:
      pdb_142dc7e2a(uVar9,uVar7);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar7 == 0) {
      uStack_78 = 0;
      pbStack_70 = (byte *)0x1;
      uStack_68 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      pdb_14007ee60();
      uVar9 = 1;
      pbStack_70 = pub_1406abab0(uVar7,1);
      if (pbStack_70 == (byte *)0x0) goto LAB_140c23094;
      uStack_78 = uVar7;
      pub_142e32760(pbStack_70,uVar2,uVar7);
      uStack_68 = uVar7;
    }
    uStack_60 = *(undefined1 *)(param_1 + 0x18);
    pdb_1417b5a40(lVar8 + 0x18,&uStack_78);
    pcVar1 = (char *)(lVar8 + 0x10);
    if ((((char)uStack_44 == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
      *(undefined1 *)(lVar8 + 0x11) = 1;
    }
    LOCK();
    cVar5 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      pdb_142dc6ca0(pcVar1);
    }
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_50,uStack_58,1);
    }
    return;
  }
  uVar7 = *param_2;
  uVar6 = 6;
  if ((longlong)uVar7 < 0) {
    uVar6 = uVar7 ^ 0x8000000000000000;
  }
  lVar8 = 8;
  if (5 < uVar6) {
    if (uVar6 != 6) {
      if (uVar6 == 7) {
        return;
      }
      uVar7 = param_2[5];
      uVar6 = (longlong)uVar7 >> 0x3f & uVar7 + 0x8000000000000001;
      if (uVar6 == 1) {
        pbStack_50 = &UNK_140987869;
        pdb_1404b38e0(param_2 + 6);
      }
      else if ((uVar6 == 0) && (uVar7 != 0)) {
        pbStack_50 = &UNK_140987840;
        pub_1406abac0((byte *)param_2[6],uVar7,1);
      }
      uVar7 = param_2[1];
      if (SBORROW8(0,uVar7)) {
        return;
      }
      goto code_r0x0001409877d2;
    }
    lVar8 = 0x20;
    if (uVar7 != 0) {
      pbStack_50 = &UNK_14098785b;
      pub_1406abac0((byte *)param_2[1],uVar7,1);
    }
  }
  uVar7 = *(ulonglong *)((longlong)param_2 + lVar8);
code_r0x0001409877d2:
  if (uVar7 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)((longlong)param_2 + lVar8 + 8);
  puStack_40 = &UNK_140f3c37e;
  uVar9 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar9,0,uVar2);
  return;
}

