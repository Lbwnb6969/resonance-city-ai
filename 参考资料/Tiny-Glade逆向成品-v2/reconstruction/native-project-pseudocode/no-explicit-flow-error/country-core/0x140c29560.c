// VA 0x140c29560, PDB extent 1221 bytes
// hotwatch::GenericHotwatch::watch<notify::windows::ReadDirectoryChangesWatcher,ref$<std::path::PathBuf>,country_core::startup::load_prefabs::impl$1::watch_atlas::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   hotwatch::GenericHotwatch::watch<notify::windows::ReadDirectoryChangesWatcher,ref$<std::path::PathBuf>,country_core::startup::load_prefabs::impl$1::watch_atlas::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1221 */

ulonglong *
pdb_140c29560(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4,byte param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  ulonglong *puVar7;
  char cVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  bool bVar11;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong uStack_b0;
  longlong *plStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *plStack_88;
  byte bStack_80;
  ulonglong uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_54;
  byte *pbStack_50;
  ulonglong *puStack_48;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  puVar10 = &uStack_78;
  uStack_38 = 0xfffffffffffffffe;
  bStack_80 = param_5;
  uStack_3a = 1;
  plStack_88 = param_4;
  pdb_140f4ee90(puVar10,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  uVar1 = uStack_78;
  pbVar9 = (byte *)CONCAT44(uStack_6c,uStack_70);
  if (SBORROW8(0,uStack_78)) {
    *param_1 = 0x8000000000000003;
    param_1[1] = (ulonglong)pbVar9;
  }
  else {
    uStack_c0 = uStack_68;
    uStack_bc = uStack_64;
    uStack_b8 = uStack_60;
    uStack_b4 = uStack_5c;
    uStack_d0 = uStack_78;
    uStack_39 = 1;
    uStack_c8 = pbVar9;
    pdb_1411661c0(puVar10,param_2,&uStack_d0,0);
    if (uStack_78 == 0x8000000000000003) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      uVar1 = lVar3 + 0x10;
      LOCK();
      bVar11 = *(char *)(lVar3 + 0x10) == '\0';
      if (bVar11) {
        *(char *)(lVar3 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar11) {
        uStack_39 = 1;
        pdb_142dc6be0(uVar1);
      }
      puVar7 = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        uStack_54 = 0;
        cVar8 = *(char *)(lVar3 + 0x11);
        plVar4 = plStack_88;
        bVar5 = bStack_80;
      }
      else {
        uStack_39 = 1;
        uStack_54 = pdb_142dc79e0();
        uStack_54 = uStack_54 ^ 1;
        cVar8 = *(char *)(lVar3 + 0x11);
        plVar4 = plStack_88;
        bVar5 = bStack_80;
      }
      plStack_88 = plVar4;
      bStack_80 = bVar5;
      if (cVar8 != '\0') {
        uVar6 = (uint)uStack_70 >> 8;
        uStack_70 = CONCAT31((int3)uVar6,(char)uStack_54);
        uStack_78 = uVar1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14306b200,0x17,puVar10,&UNK_14306afb0,&UNK_14306b280);
      }
      uStack_c8._4_4_ = (undefined4)((ulonglong)uStack_c8 >> 0x20);
      uStack_70 = (undefined4)uStack_c8;
      uStack_6c = uStack_c8._4_4_;
      uVar6 = (uint)uStack_a0 >> 8;
      uStack_a0 = CONCAT31((int3)uVar6,bVar5);
      uStack_b0 = uVar1;
      plStack_a8 = plVar4;
      uStack_78 = uStack_d0;
      uStack_68 = uStack_c0;
      uStack_64 = uStack_bc;
      uStack_60 = uStack_b8;
      uStack_5c = uStack_b4;
      pdb_14007ee60();
      pbStack_50 = pub_1406abab0(0x10,8);
      if (pbStack_50 == (byte *)0x0) {
        puStack_48 = (ulonglong *)plVar4;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x10);
      }
      *(longlong **)pbStack_50 = plVar4;
      pbStack_50[8] = bVar5;
      pbVar9 = (byte *)pdb_1417b6ad0(lVar3 + 0x18,puVar10,pbStack_50,&UNK_14306b2c0);
      if (pbVar9 != (byte *)0x0) {
        pbStack_50 = pbVar9;
        puStack_48 = puVar10;
        if ((code *)*puVar10 != (code *)0x0) {
          (*(code *)*puVar10)(pbVar9);
        }
        if (puStack_48[1] != 0) {
          pub_1406abac0(pbStack_50,puStack_48[1],puStack_48[2]);
        }
      }
      *param_1 = 0x8000000000000004;
      pcVar2 = (char *)(lVar3 + 0x10);
      if (((char)uStack_54 == '\0') && ((*puVar7 & 0x7fffffffffffffff) != 0)) {
        uStack_39 = 0;
        cVar8 = pdb_142dc79e0();
        if (cVar8 == '\0') {
          *(undefined1 *)(lVar3 + 0x11) = 1;
        }
      }
      LOCK();
      cVar8 = *pcVar2;
      *pcVar2 = '\0';
      UNLOCK();
      if (cVar8 != '\x02') {
        return param_1;
      }
      uStack_39 = 0;
      pdb_142dc6ca0(pcVar2);
      return param_1;
    }
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    uStack_39 = 1;
    pdb_141c5deb0(puVar10,&plStack_a8);
    param_1[2] = CONCAT44(uStack_64,uStack_68);
    *param_1 = uStack_78;
    param_1[1] = CONCAT44(uStack_6c,uStack_70);
    if (uVar1 != 0) {
      pub_1406abac0(pbVar9,uVar1,1);
    }
  }
  LOCK();
  *plStack_88 = *plStack_88 + -1;
  UNLOCK();
  if (*plStack_88 == 0) {
    pdb_140c7a3a0(&plStack_88);
  }
  return param_1;
}

