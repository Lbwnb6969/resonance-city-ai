// VA 0x140c22cb0, PDB extent 843 bytes
// country_core::asset_libraries::configwatch::impl$0::watch::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/configwatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::configwatch::impl$0::watch::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/configwatch.rs
   Extent: 843 */

void pdb_140c22cb0(longlong param_1,ulonglong *param_2)

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
  undefined8 *puStack_e0;
  code *pcStack_d8;
  longlong lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  uint uStack_38;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*param_2 == 0x8000000000000003) {
    uStack_68 = param_2[1];
    pbStack_60 = (byte *)param_2[2];
    if (2 < *_DAT_143ca8e90) {
      pdb_140f60be0(&uStack_58,param_1);
      pcStack_d8 = pdb_140094770;
      lStack_d0 = 0;
      puStack_c8 = &UNK_14306ab14;
      uStack_c0 = 0x2a;
      uStack_b8 = 0;
      puStack_b0 = &UNK_14306aadd;
      uStack_a8 = 0x36;
      uStack_a0 = 3;
      puStack_98 = &UNK_14306ab14;
      uStack_90 = 0x2a;
      uStack_88 = 0x2000000001;
      puStack_80 = &UNK_14306aac0;
      ppuStack_78 = &puStack_e0;
      puStack_e0 = &uStack_58;
      pdb_140f332f0(&uStack_31,&lStack_d0);
      if (uStack_58 != 0) {
        pub_1406abac0(uStack_50,uStack_58,1);
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
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
      uStack_38 = 0;
      cVar5 = *(char *)(lVar3 + 0x11);
    }
    else {
      uStack_38 = pdb_142dc79e0();
      uStack_38 = uStack_38 ^ 1;
      cVar5 = *(char *)(lVar3 + 0x11);
    }
    if (cVar5 == '\0') {
      lStack_70 = lVar9;
      pdb_140f60be0(&lStack_d0,param_1);
      uStack_48 = uStack_c0;
      uStack_58 = lStack_d0;
      uStack_50 = puStack_c8;
      uVar8 = *(ulonglong *)(lVar3 + 0x18);
      if ((!SBORROW8(0,uVar8)) && (uVar8 != 0)) {
        pub_1406abac0(*(byte **)(lVar3 + 0x20),uVar8,1);
      }
      *(undefined8 *)(lVar3 + 0x28) = uStack_48;
      *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_58;
      *(undefined4 *)(lVar3 + 0x1c) = uStack_58._4_4_;
      *(undefined4 *)(lVar3 + 0x20) = (undefined4)uStack_50;
      *(undefined4 *)(lVar3 + 0x24) = uStack_50._4_4_;
      pcVar1 = (char *)(lVar3 + 0x10);
      if ((((char)uStack_38 == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
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
      if (uStack_68 != 0) {
        pub_1406abac0(pbStack_60,uStack_68,1);
      }
      return;
    }
    uVar8 = (ulonglong)puStack_c8 >> 8;
    puStack_c8 = (undefined *)CONCAT71((int7)uVar8,(char)uStack_38);
    lStack_d0 = lVar9;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306aff0,0x2b,&lStack_d0,&UNK_14306b020,&UNK_14306ab40);
  }
  uVar8 = *param_2;
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
      uVar8 = param_2[5];
      uVar6 = (longlong)uVar8 >> 0x3f & uVar8 + 0x8000000000000001;
      if (uVar6 == 1) {
        uStack_50 = &UNK_140987869;
        pdb_1404b38e0(param_2 + 6);
      }
      else if ((uVar6 == 0) && (uVar8 != 0)) {
        uStack_50 = &UNK_140987840;
        pub_1406abac0((byte *)param_2[6],uVar8,1);
      }
      uVar8 = param_2[1];
      if (SBORROW8(0,uVar8)) {
        return;
      }
      goto code_r0x0001409877d2;
    }
    lVar9 = 0x20;
    if (uVar8 != 0) {
      uStack_50 = &UNK_14098785b;
      pub_1406abac0((byte *)param_2[1],uVar8,1);
    }
  }
  uVar8 = *(ulonglong *)((longlong)param_2 + lVar9);
code_r0x0001409877d2:
  if (uVar8 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)((longlong)param_2 + lVar9 + 8);
  puStack_40 = &UNK_140f3c37e;
  uVar7 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar7,0,uVar2);
  return;
}

