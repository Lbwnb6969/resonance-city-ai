// VA 0x140c29a30, PDB extent 1362 bytes
// hotwatch::GenericHotwatch::watch<notify::windows::ReadDirectoryChangesWatcher,ref$<std::path::PathBuf>,country_core::startup::mod_hot_reload::refresh_mod_hot_reload_watches::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   hotwatch::GenericHotwatch::watch<notify::windows::ReadDirectoryChangesWatcher,ref$<std::path::PathBuf>,country_core::startup::mod_hot_reload::refresh_mod_hot_reload_watches::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1362 */

ulonglong * pdb_140c29a30(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong *param_4)

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
  ulonglong auStack_f0 [2];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong lStack_d0;
  ulonglong auStack_c8 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  ulonglong *puStack_58;
  uint uStack_4c;
  byte *pbStack_48;
  ulonglong *puStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_32 = 1;
  puStack_40 = param_4;
  pdb_140f4ee90(&uStack_a8,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  arg1 = uStack_a8;
  pbVar8 = (byte *)CONCAT44(uStack_9c,uStack_a0);
  if (SBORROW8(0,uStack_a8)) {
    *param_1 = 0x8000000000000003;
    param_1[1] = (ulonglong)pbVar8;
  }
  else {
    uStack_e0 = uStack_98;
    uStack_dc = uStack_94;
    uStack_d8 = uStack_90;
    uStack_d4 = uStack_8c;
    auStack_f0[0] = uStack_a8;
    uStack_31 = 1;
    pdb_1411661c0(&uStack_a8,param_2,auStack_f0,0);
    if (uStack_a8 == 0x8000000000000003) {
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
        uVar5 = (uint)uStack_a0 >> 8;
        uStack_a0 = CONCAT31((int3)uVar5,(char)uStack_4c);
        uStack_a8 = lVar1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14306b200,0x17,&uStack_a8,&UNK_14306afb0,&UNK_14306b280);
      }
      uStack_b8 = CONCAT44(uStack_dc,uStack_e0);
      uStack_b0 = CONCAT44(uStack_d4,uStack_d8);
      uStack_68 = puStack_40[8];
      uStack_a8._0_4_ = (undefined4)*puStack_40;
      uStack_a8._4_4_ = *(undefined4 *)((longlong)puStack_40 + 4);
      uStack_a0 = (undefined4)puStack_40[1];
      uStack_9c = *(undefined4 *)((longlong)puStack_40 + 0xc);
      uStack_98 = (undefined4)puStack_40[2];
      uStack_94 = *(undefined4 *)((longlong)puStack_40 + 0x14);
      uStack_90 = (undefined4)puStack_40[3];
      uStack_8c = *(undefined4 *)((longlong)puStack_40 + 0x1c);
      uStack_88 = (undefined4)puStack_40[4];
      uStack_84 = *(undefined4 *)((longlong)puStack_40 + 0x24);
      uStack_80 = (undefined4)puStack_40[5];
      uStack_7c = *(undefined4 *)((longlong)puStack_40 + 0x2c);
      uStack_78 = (undefined4)puStack_40[6];
      uStack_74 = *(undefined4 *)((longlong)puStack_40 + 0x34);
      uStack_70 = (undefined4)puStack_40[7];
      uStack_6c = *(undefined4 *)((longlong)puStack_40 + 0x3c);
      lStack_d0 = lVar1;
      auStack_c8[0] = auStack_f0[0];
      pdb_14007ee60();
      pbStack_48 = pub_1406abab0(0x48,8);
      if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x48);
      }
      *(ulonglong *)(pbStack_48 + 0x40) = uStack_68;
      *(undefined4 *)(pbStack_48 + 0x30) = uStack_78;
      *(undefined4 *)(pbStack_48 + 0x34) = uStack_74;
      *(undefined4 *)(pbStack_48 + 0x38) = uStack_70;
      *(undefined4 *)(pbStack_48 + 0x3c) = uStack_6c;
      *(undefined4 *)(pbStack_48 + 0x20) = uStack_88;
      *(undefined4 *)(pbStack_48 + 0x24) = uStack_84;
      *(undefined4 *)(pbStack_48 + 0x28) = uStack_80;
      *(undefined4 *)(pbStack_48 + 0x2c) = uStack_7c;
      *(undefined4 *)(pbStack_48 + 0x10) = uStack_98;
      *(undefined4 *)(pbStack_48 + 0x14) = uStack_94;
      *(undefined4 *)(pbStack_48 + 0x18) = uStack_90;
      *(undefined4 *)(pbStack_48 + 0x1c) = uStack_8c;
      *(undefined4 *)pbStack_48 = (undefined4)uStack_a8;
      *(undefined4 *)(pbStack_48 + 4) = uStack_a8._4_4_;
      *(undefined4 *)(pbStack_48 + 8) = uStack_a0;
      *(undefined4 *)(pbStack_48 + 0xc) = uStack_9c;
      puVar9 = auStack_c8;
      pbVar8 = (byte *)pdb_1417b6ad0(lVar3 + 0x18,puVar9,pbStack_48,&UNK_14306b2e8);
      if (pbVar8 != (byte *)0x0) {
        puStack_58 = puVar9;
        pbStack_48 = pbVar8;
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(pbVar8);
        }
        if (puStack_58[1] != 0) {
          pub_1406abac0(pbStack_48,puStack_58[1],puStack_58[2]);
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
    pdb_141c5deb0(&uStack_a8,auStack_c8);
    param_1[2] = CONCAT44(uStack_94,uStack_98);
    *param_1 = uStack_a8;
    param_1[1] = CONCAT44(uStack_9c,uStack_a0);
    if (arg1 != 0) {
      pub_1406abac0(pbVar8,arg1,1);
    }
  }
  puVar6 = puStack_40;
  if (*puStack_40 != 0) {
    pub_1406abac0((byte *)puStack_40[1],*puStack_40,1);
  }
  plVar4 = (longlong *)puVar6[8];
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    pdb_140c7a680(puStack_40 + 8);
  }
  if (puStack_40[4] != 0) {
    pub_1406abac0((byte *)puStack_40[5],puStack_40[4],1);
  }
  return param_1;
}

