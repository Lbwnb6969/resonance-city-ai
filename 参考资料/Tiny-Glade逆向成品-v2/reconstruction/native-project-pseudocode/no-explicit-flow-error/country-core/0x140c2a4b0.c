// VA 0x140c2a4b0, PDB extent 1297 bytes
// hotwatch::GenericHotwatch::watch<notify::windows::ReadDirectoryChangesWatcher,ref$<std::path::PathBuf>,country_core::asset_libraries::meshwatch::impl$0::watch_path::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   hotwatch::GenericHotwatch::watch<notify::windows::ReadDirectoryChangesWatcher,ref$<std::path::PathBuf>,country_core::asset_libraries::meshwatch::impl$0::watch_path::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1297 */

ulonglong * pdb_140c2a4b0(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong *param_4)

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
  ulonglong *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  uint uStack_4c;
  byte *pbStack_48;
  ulonglong *puStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_32 = 1;
  puStack_40 = param_4;
  pdb_140f4ee90(&uStack_78,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  arg1 = uStack_78;
  pbVar8 = (byte *)CONCAT44(uStack_6c,uStack_70);
  if (SBORROW8(0,uStack_78)) {
    *param_1 = 0x8000000000000003;
    param_1[1] = (ulonglong)pbVar8;
  }
  else {
    uStack_c0 = uStack_68;
    uStack_bc = uStack_64;
    uStack_b8 = uStack_60;
    uStack_b4 = uStack_5c;
    auStack_d0[0] = uStack_78;
    uStack_31 = 1;
    pdb_1411661c0(&uStack_78,param_2,auStack_d0,0);
    if (uStack_78 == 0x8000000000000003) {
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
        uStack_4c = 0;
        cVar7 = *(char *)(lVar3 + 0x11);
      }
      else {
        uStack_31 = 1;
        uStack_4c = pdb_142dc79e0();
        uStack_4c = uStack_4c ^ 1;
        cVar7 = *(char *)(lVar3 + 0x11);
      }
      if (cVar7 != '\0') {
        uVar5 = (uint)uStack_70 >> 8;
        uStack_70 = CONCAT31((int3)uVar5,(char)uStack_4c);
        uStack_78 = lVar1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14306b200,0x17,&uStack_78,&UNK_14306afb0,&UNK_14306b280);
      }
      uStack_98 = CONCAT44(uStack_bc,uStack_c0);
      uStack_90 = CONCAT44(uStack_b4,uStack_b8);
      uStack_58 = puStack_40[4];
      uStack_78._0_4_ = (undefined4)*puStack_40;
      uStack_78._4_4_ = *(undefined4 *)((longlong)puStack_40 + 4);
      uStack_70 = (undefined4)puStack_40[1];
      uStack_6c = *(undefined4 *)((longlong)puStack_40 + 0xc);
      uStack_68 = (undefined4)puStack_40[2];
      uStack_64 = *(undefined4 *)((longlong)puStack_40 + 0x14);
      uStack_60 = (undefined4)puStack_40[3];
      uStack_5c = *(undefined4 *)((longlong)puStack_40 + 0x1c);
      lStack_b0 = lVar1;
      auStack_a8[0] = auStack_d0[0];
      pdb_14007ee60();
      pbStack_48 = pub_1406abab0(0x28,8);
      if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      *(ulonglong *)(pbStack_48 + 0x20) = uStack_58;
      *(undefined4 *)(pbStack_48 + 0x10) = uStack_68;
      *(undefined4 *)(pbStack_48 + 0x14) = uStack_64;
      *(undefined4 *)(pbStack_48 + 0x18) = uStack_60;
      *(undefined4 *)(pbStack_48 + 0x1c) = uStack_5c;
      *(undefined4 *)pbStack_48 = (undefined4)uStack_78;
      *(undefined4 *)(pbStack_48 + 4) = uStack_78._4_4_;
      *(undefined4 *)(pbStack_48 + 8) = uStack_70;
      *(undefined4 *)(pbStack_48 + 0xc) = uStack_6c;
      puVar9 = auStack_a8;
      pbVar8 = (byte *)pdb_1417b6ad0(lVar3 + 0x18,puVar9,pbStack_48,&UNK_14306b338);
      if (pbVar8 != (byte *)0x0) {
        puStack_80 = puVar9;
        pbStack_48 = pbVar8;
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(pbVar8);
        }
        if (puStack_80[1] != 0) {
          pub_1406abac0(pbStack_48,puStack_80[1],puStack_80[2]);
        }
      }
      *param_1 = 0x8000000000000004;
      pcVar2 = (char *)(lVar3 + 0x10);
      if (((char)uStack_4c == '\0') && ((*puVar6 & 0x7fffffffffffffff) != 0)) {
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
      if (cVar7 != '\x02') {
        return param_1;
      }
      uStack_31 = 0;
      pdb_142dc6ca0(pcVar2);
      return param_1;
    }
    uStack_31 = 1;
    pdb_141c5deb0(&uStack_78,auStack_a8);
    param_1[2] = CONCAT44(uStack_64,uStack_68);
    *param_1 = uStack_78;
    param_1[1] = CONCAT44(uStack_6c,uStack_70);
    if (arg1 != 0) {
      pub_1406abac0(pbVar8,arg1,1);
    }
  }
  plVar4 = (longlong *)puStack_40[4];
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    pdb_140c7a120(puStack_40 + 4);
  }
  if (*puStack_40 != 0) {
    pub_1406abac0((byte *)puStack_40[1],*puStack_40,1);
  }
  return param_1;
}

