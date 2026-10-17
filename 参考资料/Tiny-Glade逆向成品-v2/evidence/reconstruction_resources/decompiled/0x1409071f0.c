// Matched PDB: rkyv::impls::core::impl$15::deserialize_unsized<asset::foliage::ArchivedGrass2SlotAsset,asset::foliage::Grass2SlotAsset,rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error> >
// VA 0x1409071f0, PDB extent 473 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   rkyv::impls::core::impl$15::deserialize_unsized<asset::foliage::ArchivedGrass2SlotAsset,asset::foliage::Grass2SlotAsset,rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error>
   >
   Extent: 473 bytes. No whole-program auto-analysis. */

undefined8 pdb_1409071f0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    lStack_88 = param_1 + param_2 * 0x24;
    lVar8 = 0;
    do {
      pdb_14150fa80(&lStack_a8,param_1,param_3);
      if (SBORROW8(0,lStack_a8)) {
        return 1;
      }
      lStack_80 = lStack_a8;
      uStack_78 = uStack_a0;
      uStack_90 = uStack_98;
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x20);
      if (uVar9 == 0) {
        lVar7 = 0x10;
      }
      else {
        pdb_14007ee60();
        lVar7 = func_0x0001406abab0(uVar9 * 0xd0,0x10);
        if (lVar7 == 0) {
          pdb_142dc7e11(0x10,uVar9 * 0xd0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      cVar6 = pdb_1409073d0((longlong)*(int *)(param_1 + 0x1c) + param_1 + 0x1c,uVar9,param_3,lVar7)
      ;
      if (cVar6 != '\0') {
        if (lStack_80 != 0) {
          func_0x0001406abac0(uStack_78,lStack_80,1);
          return 1;
        }
        return 1;
      }
      param_1 = param_1 + 0x24;
      *(longlong *)(param_4 + lVar8 * 0x48) = lStack_80;
      *(undefined8 *)(param_4 + 8 + lVar8 * 0x48) = uStack_78;
      *(undefined8 *)(param_4 + 0x10 + lVar8 * 0x48) = uStack_90;
      *(ulonglong *)(param_4 + 0x18 + lVar8 * 0x48) = uVar9;
      *(longlong *)(param_4 + 0x20 + lVar8 * 0x48) = lVar7;
      *(ulonglong *)(param_4 + 0x28 + lVar8 * 0x48) = uVar9;
      puVar1 = (undefined8 *)(param_4 + 0x30 + lVar8 * 0x48);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      *(undefined4 *)(param_4 + 0x40 + lVar8 * 0x48) = uVar2;
      lVar8 = lVar8 + 1;
    } while (param_1 != lStack_88);
  }
  return 0;
}

