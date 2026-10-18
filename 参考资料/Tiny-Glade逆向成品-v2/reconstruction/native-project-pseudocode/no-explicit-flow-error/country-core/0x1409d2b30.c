// VA 0x1409d2b30, PDB extent 565 bytes
// country_core::render::nani::gpu_world::GpuWorld::remove_instance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::gpu_world::GpuWorld::remove_instance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 565 */

longlong pdb_1409d2b30(undefined8 param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  ulonglong *puStack_48;
  code *pcStack_40;
  ulonglong uStack_38;
  longlong *plStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar12 = (ulonglong)*(byte *)(param_2 + 8);
  plStack_30 = (longlong *)pdb_1409d2d80();
  uStack_38 = param_2;
  lVar8 = pdb_141642ad0(uVar12);
  if (lVar8 == 1) {
    if (*(longlong *)(uVar12 + 0x80) == 0) {
      pdb_142dc8110(&UNK_14302d57f,0x12,&UNK_14302d598);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar11 = *(longlong *)(uVar12 + 0x80) - 1;
    *(ulonglong *)(uVar12 + 0x80) = uVar11;
    uVar9 = *(ulonglong *)(uVar12 + 0x58);
    if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar11,uVar9,&UNK_143382a68);
    }
    if (uVar9 <= param_2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_2,uVar9,&UNK_143382a80);
    }
    puVar1 = (undefined4 *)(*(longlong *)(uVar12 + 0x50) + uVar11 * 0x10);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(*(longlong *)(uVar12 + 0x50) + param_2 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    uVar9 = *(ulonglong *)(uVar12 + 0x60);
    do {
      uVar11 = param_2;
      if (uVar9 <= param_2) {
        uVar11 = uVar9;
      }
      LOCK();
      uVar10 = *(ulonglong *)(uVar12 + 0x60);
      bVar13 = uVar9 == uVar10;
      if (bVar13) {
        *(ulonglong *)(uVar12 + 0x60) = uVar11;
        uVar10 = uVar9;
      }
      UNLOCK();
      uVar9 = uVar10;
    } while (!bVar13);
    uVar9 = *(ulonglong *)(uVar12 + 0x68);
    do {
      uVar11 = param_2;
      if (param_2 < uVar9) {
        uVar11 = uVar9;
      }
      LOCK();
      uVar10 = *(ulonglong *)(uVar12 + 0x68);
      bVar13 = uVar9 == uVar10;
      if (bVar13) {
        *(ulonglong *)(uVar12 + 0x68) = uVar11;
        uVar10 = uVar9;
      }
      UNLOCK();
      uVar9 = uVar10;
    } while (!bVar13);
    (**(code **)(*(longlong *)(uVar12 + 0x78) + 0x60))(*(undefined8 *)(uVar12 + 0x70));
  }
  else if (4 < *_DAT_143ca8e90) {
    puStack_48 = &uStack_38;
    pcStack_40 = pdb_141641130;
    uStack_a8 = 0;
    puStack_a0 = &UNK_14302d52e;
    uStack_98 = 0x25;
    uStack_90 = 0;
    puStack_88 = &UNK_14302d120;
    uStack_80 = 0x30;
    uStack_78 = 5;
    puStack_70 = &UNK_14302d52e;
    uStack_68 = 0x25;
    uStack_60 = 0x45600000001;
    puStack_58 = &UNK_14302d5b0;
    ppuStack_50 = &puStack_48;
    pdb_140f332f0(&uStack_21,&uStack_a8);
  }
  plVar7 = plStack_30;
  pdb_140e9a350(plStack_30);
  pdb_140e9a350();
  LOCK();
  lVar8 = *plVar7;
  bVar13 = lVar8 == 8;
  if (bVar13) {
    *plVar7 = 0;
    lVar8 = 8;
  }
  UNLOCK();
  if (!bVar13) {
    lVar8 = pdb_142dbca40(plVar7,0);
  }
  return lVar8;
}

