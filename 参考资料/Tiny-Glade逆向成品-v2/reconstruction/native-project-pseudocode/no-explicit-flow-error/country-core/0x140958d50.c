// VA 0x140958d50, PDB extent 9 bytes
// country_core::render::nani::gpu_world::impl$14::grow<country_core::render::nani::instance_data::PreplacedFlowerInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::grow<country_core::render::nani::instance_data::PreplacedFlowerInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 9 */

ulonglong * pdb_140958d50(ulonglong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong *puStack_60;
  ulonglong uStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  puVar10 = (ulonglong *)(param_2 + 0x18);
  uStack_48 = 0xfffffffffffffffe;
  uVar9 = *(ulonglong *)(param_2 + 0x28);
  uVar12 = param_4 - uVar9;
  if (param_4 < uVar9 || uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143382a98,0x2d,&UNK_143382ac8);
  }
  uVar7 = pdb_140e1d1f0(param_4 * 0x30,CONCAT62((int6)((ulonglong)puVar10 >> 0x10),0x12),1);
  uVar7 = pdb_140e1d260(uVar7,4);
  pdb_1415d1d50(&uStack_b8,param_3,&UNK_143382bf3,0x1b,uVar7,0);
  uStack_58 = (ulonglong)pbStack_b0;
  if (uStack_b8 != 0xb) {
    param_1[8] = uStack_78;
    param_1[9] = uStack_70;
    param_1[6] = uStack_88;
    param_1[7] = uStack_80;
    param_1[4] = uStack_98;
    param_1[5] = uStack_90;
    param_1[2] = uStack_a8;
    param_1[3] = uStack_a0;
    *param_1 = uStack_b8;
    param_1[1] = (ulonglong)pbStack_b0;
    return param_1;
  }
  uStack_68 = (ulonglong)pbStack_b0;
  pbStack_b0 = *(byte **)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 4;
  *(undefined8 *)(param_2 + 0x28) = 0;
  uStack_49 = 1;
  uStack_4a = 1;
  uStack_b8 = uVar9;
  uStack_a8 = uVar9;
  pdb_142d7f1b0(&uStack_b8,uVar9,uVar12,4,0x30);
  uVar6 = _UNK_1433200e8;
  uVar13 = uStack_a8;
  uVar7 = _DAT_1433200c0;
  uVar2 = _UNK_1433200c8;
  uVar3 = _DAT_1433200d0;
  uVar4 = _UNK_1433200d8;
  uVar5 = _DAT_1433200e0;
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 - 1;
    lVar11 = uStack_a8 * 0x30;
    *(undefined8 *)(pbStack_b0 + lVar11 + 0x20) = _DAT_1433200e0;
    *(undefined8 *)(pbStack_b0 + lVar11 + 0x20 + 8) = uVar6;
    uVar7 = _UNK_1433200d8;
    *(undefined8 *)(pbStack_b0 + lVar11 + 0x10) = _DAT_1433200d0;
    *(undefined8 *)(pbStack_b0 + lVar11 + 0x10 + 8) = uVar7;
    uVar7 = _UNK_1433200c8;
    *(undefined8 *)(pbStack_b0 + lVar11) = _DAT_1433200c0;
    *(undefined8 *)(pbStack_b0 + lVar11 + 8) = uVar7;
    uVar13 = uStack_a8 + 1;
    uVar7 = _DAT_1433200c0;
    uVar2 = _UNK_1433200c8;
    uVar3 = _DAT_1433200d0;
    uVar4 = _UNK_1433200d8;
    uVar5 = _DAT_1433200e0;
    uVar6 = _UNK_1433200e8;
  }
  _DAT_1433200c0 = uVar7;
  _UNK_1433200c8 = uVar2;
  _DAT_1433200d0 = uVar3;
  _UNK_1433200d8 = uVar4;
  _DAT_1433200e0 = uVar5;
  _UNK_1433200e8 = uVar6;
  if (param_4 != uVar9 + 1) {
    pbVar8 = pbStack_b0 + uVar13 * 0x30;
    lVar11 = 0;
    do {
      *(undefined8 *)(pbVar8 + 0x20) = uVar5;
      *(undefined8 *)(pbVar8 + 0x28) = uVar6;
      *(undefined8 *)(pbVar8 + 0x10) = uVar3;
      *(undefined8 *)(pbVar8 + 0x18) = uVar4;
      *(undefined8 *)pbVar8 = uVar7;
      *(undefined8 *)(pbVar8 + 8) = uVar2;
      *(undefined8 *)(pbVar8 + 0x30) = uVar7;
      *(undefined8 *)(pbVar8 + 0x38) = uVar2;
      *(undefined8 *)(pbVar8 + 0x40) = uVar3;
      *(undefined8 *)(pbVar8 + 0x48) = uVar4;
      *(undefined8 *)(pbVar8 + 0x50) = uVar5;
      *(undefined8 *)(pbVar8 + 0x58) = uVar6;
      pbVar8 = pbVar8 + 0x60;
      lVar11 = lVar11 + -2;
    } while (-lVar11 != uVar12);
    uVar13 = uVar13 - lVar11;
  }
  if (uVar13 < uStack_b8) {
    uVar9 = uStack_b8 * 0x30;
    if (uVar13 == 0) {
      pub_1406abac0(pbStack_b0,uVar9,4);
      pbVar8 = (byte *)0x4;
    }
    else {
      puStack_60 = (ulonglong *)pbStack_b0;
      pbVar8 = pub_1406abad0(pbStack_b0,uVar9,4,uVar13 * 0x30);
      if (pbVar8 == (byte *)0x0) {
        uStack_58 = uVar9;
        pdb_142dc7e2a(4,uVar13 * 0x30);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  else {
    pbVar8 = pbStack_b0;
  }
  *(byte **)(param_2 + 0x20) = pbVar8;
  *(ulonglong *)(param_2 + 0x28) = uVar13;
  puStack_60 = puVar10;
  pdb_140989660(puVar10);
  *puStack_60 = uStack_58;
  LOCK();
  puStack_60[3] = 0;
  UNLOCK();
  param_4 = param_4 - 1;
  uVar9 = puStack_60[3];
  do {
    uVar12 = param_4;
    if (uVar9 <= param_4) {
      uVar12 = uVar9;
    }
    LOCK();
    uVar13 = puStack_60[3];
    bVar14 = uVar9 == uVar13;
    if (bVar14) {
      puStack_60[3] = uVar12;
      uVar13 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar13;
  } while (!bVar14);
  uVar9 = puStack_60[4];
  do {
    uVar12 = param_4;
    if (param_4 < uVar9) {
      uVar12 = uVar9;
    }
    LOCK();
    uVar13 = puStack_60[4];
    bVar14 = uVar9 == uVar13;
    if (bVar14) {
      puStack_60[4] = uVar12;
      uVar13 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar13;
  } while (!bVar14);
  *param_1 = 0xb;
  return param_1;
}

