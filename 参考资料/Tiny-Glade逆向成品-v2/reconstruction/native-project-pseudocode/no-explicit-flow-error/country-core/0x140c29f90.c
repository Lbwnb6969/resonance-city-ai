// VA 0x140c29f90, PDB extent 1298 bytes
// hotwatch::GenericHotwatch::watch<notify::windows::ReadDirectoryChangesWatcher,alloc::string::String,country_core::asset_libraries::configwatch::impl$0::watch::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   hotwatch::GenericHotwatch::watch<notify::windows::ReadDirectoryChangesWatcher,alloc::string::String,country_core::asset_libraries::configwatch::impl$0::watch::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1298 */

ulonglong * pdb_140c29f90(ulonglong *param_1,longlong param_2,ulonglong *param_3,ulonglong *param_4)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong arg1;
  char cVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  bool bVar10;
  ulonglong auStack_d0 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong lStack_b0;
  ulonglong auStack_a8 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong *puStack_88;
  byte *pbStack_80;
  ulonglong *puStack_78;
  ulonglong *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_44;
  byte *pbStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pbStack_80 = (byte *)param_3[1];
  uStack_32 = 1;
  puStack_88 = param_3;
  puStack_78 = param_4;
  pdb_140f4ee90(&uStack_68,pbStack_80,param_3[2]);
  arg1 = uStack_68;
  pbVar8 = (byte *)CONCAT44(uStack_5c,uStack_60);
  if (SBORROW8(0,uStack_68)) {
    *param_1 = 0x8000000000000003;
    param_1[1] = (ulonglong)pbVar8;
  }
  else {
    uStack_c0 = uStack_58;
    uStack_bc = uStack_54;
    uStack_b8 = uStack_50;
    uStack_b4 = uStack_4c;
    auStack_d0[0] = uStack_68;
    uStack_31 = 1;
    pdb_1411661c0(&uStack_68,param_2,auStack_d0,0);
    if (uStack_68 == 0x8000000000000003) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      lVar1 = lVar3 + 0x10;
      LOCK();
      bVar10 = *(char *)(lVar3 + 0x10) == '\0';
      if (bVar10) {
        *(char *)(lVar3 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar10) {
        uStack_31 = 1;
        pdb_142dc6be0(lVar1);
      }
      puVar6 = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        uStack_44 = 0;
        cVar7 = *(char *)(lVar3 + 0x11);
      }
      else {
        uStack_31 = 1;
        uStack_44 = pdb_142dc79e0();
        uStack_44 = uStack_44 ^ 1;
        cVar7 = *(char *)(lVar3 + 0x11);
      }
      if (cVar7 != '\0') {
        uVar5 = (uint)uStack_60 >> 8;
        uStack_60 = CONCAT31((int3)uVar5,(char)uStack_44);
        uStack_68 = lVar1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14306b200,0x17,&uStack_68,&UNK_14306afb0,&UNK_14306b280);
      }
      uStack_98 = CONCAT44(uStack_bc,uStack_c0);
      uStack_90 = CONCAT44(uStack_b4,uStack_b8);
      uStack_68 = *puStack_78;
      uStack_60 = (undefined4)puStack_78[1];
      uStack_5c = *(undefined4 *)((longlong)puStack_78 + 0xc);
      uStack_58 = (undefined4)puStack_78[2];
      uStack_54 = *(undefined4 *)((longlong)puStack_78 + 0x14);
      uStack_50 = (undefined4)puStack_78[3];
      uStack_4c = *(undefined4 *)((longlong)puStack_78 + 0x1c);
      lStack_b0 = lVar1;
      auStack_a8[0] = auStack_d0[0];
      pdb_14007ee60();
      pbStack_40 = pub_1406abab0(0x20,8);
      if (pbStack_40 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      *(undefined4 *)(pbStack_40 + 0x10) = uStack_58;
      *(undefined4 *)(pbStack_40 + 0x14) = uStack_54;
      *(undefined4 *)(pbStack_40 + 0x18) = uStack_50;
      *(undefined4 *)(pbStack_40 + 0x1c) = uStack_4c;
      *(undefined4 *)pbStack_40 = (undefined4)uStack_68;
      *(undefined4 *)(pbStack_40 + 4) = uStack_68._4_4_;
      *(undefined4 *)(pbStack_40 + 8) = uStack_60;
      *(undefined4 *)(pbStack_40 + 0xc) = uStack_5c;
      puVar9 = auStack_a8;
      pbVar8 = (byte *)pdb_1417b6ad0(lVar3 + 0x18,puVar9,pbStack_40,&UNK_14306b310);
      if (pbVar8 != (byte *)0x0) {
        puStack_70 = puVar9;
        pbStack_40 = pbVar8;
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(pbVar8);
        }
        if (puStack_70[1] != 0) {
          pub_1406abac0(pbStack_40,puStack_70[1],puStack_70[2]);
        }
      }
      *param_1 = 0x8000000000000004;
      pcVar2 = (char *)(lVar3 + 0x10);
      if (((char)uStack_44 == '\0') && ((*puVar6 & 0x7fffffffffffffff) != 0)) {
        uStack_31 = 0;
        cVar7 = pdb_142dc79e0();
        if (cVar7 == '\0') {
          *(undefined1 *)(lVar3 + 0x11) = 1;
        }
      }
      LOCK();
      cVar7 = *pcVar2;
      *pcVar2 = '\0';
      UNLOCK();
      if (cVar7 == '\x02') {
        uStack_31 = 0;
        pdb_142dc6ca0(pcVar2);
      }
      goto LAB_140c2a1d5;
    }
    uStack_98 = CONCAT44(uStack_54,uStack_58);
    auStack_a8[0] = uStack_68;
    uStack_31 = 1;
    pdb_141c5deb0(&uStack_68,auStack_a8);
    param_1[2] = CONCAT44(uStack_54,uStack_58);
    *param_1 = uStack_68;
    param_1[1] = CONCAT44(uStack_5c,uStack_60);
    if (arg1 != 0) {
      pub_1406abac0(pbVar8,arg1,1);
    }
  }
  puVar6 = puStack_78;
  if (*puStack_78 != 0) {
    pub_1406abac0((byte *)puStack_78[1],*puStack_78,1);
  }
  plVar4 = (longlong *)puVar6[3];
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    pdb_140c7a980(puVar6 + 3);
  }
LAB_140c2a1d5:
  if (*puStack_88 != 0) {
    pub_1406abac0(pbStack_80,*puStack_88,1);
  }
  return param_1;
}

