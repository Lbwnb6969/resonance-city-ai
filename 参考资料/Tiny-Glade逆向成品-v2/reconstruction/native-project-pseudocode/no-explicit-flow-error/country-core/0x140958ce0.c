// VA 0x140958ce0, PDB extent 9 bytes
// country_core::render::nani::gpu_world::impl$14::grow<country_core::render::nani::instance_data::StoneFloorInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::grow<country_core::render::nani::instance_data::StoneFloorInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 9 */

ulonglong * pdb_140958ce0(ulonglong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  byte *arg0;
  undefined8 uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
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
  byte *pbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  puVar6 = (ulonglong *)(param_2 + 0x18);
  uStack_48 = 0xfffffffffffffffe;
  uVar8 = *(ulonglong *)(param_2 + 0x28);
  lVar7 = param_4 - uVar8;
  if (param_4 < uVar8 || lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143382a98,0x2d,&UNK_143382ac8);
  }
  uVar2 = pdb_140e1d1f0(param_4 << 6,CONCAT62((int6)((ulonglong)puVar6 >> 0x10),0x12),1);
  uVar2 = pdb_140e1d260(uVar2,4);
  pdb_1415d1d50(&uStack_b8,param_3,&UNK_143382bab,0x16,uVar2,0);
  pbStack_58 = pbStack_b0;
  if (uStack_b8 == 0xb) {
    uStack_68 = (ulonglong)pbStack_b0;
    pbStack_b0 = *(byte **)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 4;
    *(undefined8 *)(param_2 + 0x28) = 0;
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_b8 = uVar8;
    uStack_a8 = uVar8;
    pdb_142d7f1b0(&uStack_b8,uVar8,lVar7,4,0x40);
    uVar8 = uStack_a8;
    arg0 = pbStack_b0;
    pub_142e32780(pbStack_b0 + uStack_a8 * 0x40,0,lVar7 * 0x40);
    uVar8 = uVar8 + lVar7;
    pbVar3 = arg0;
    if (uVar8 < uStack_b8) {
      puStack_60 = (ulonglong *)(uStack_b8 << 6);
      if (uVar8 == 0) {
        pbVar3 = (byte *)0x4;
        pub_1406abac0(arg0,(ulonglong)puStack_60,4);
      }
      else {
        pbVar3 = pub_1406abad0(arg0,(ulonglong)puStack_60,4,uVar8 * 0x40);
        if (pbVar3 == (byte *)0x0) {
          pbStack_58 = arg0;
          pdb_142dc7e2a(4,uVar8 * 0x40);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
    }
    *(byte **)(param_2 + 0x20) = pbVar3;
    *(ulonglong *)(param_2 + 0x28) = uVar8;
    puStack_60 = puVar6;
    pdb_140989660(puVar6);
    *puStack_60 = (ulonglong)pbStack_58;
    LOCK();
    puStack_60[3] = 0;
    UNLOCK();
    param_4 = param_4 - 1;
    uVar8 = puStack_60[3];
    do {
      uVar5 = param_4;
      if (uVar8 <= param_4) {
        uVar5 = uVar8;
      }
      LOCK();
      uVar4 = puStack_60[3];
      bVar9 = uVar8 == uVar4;
      if (bVar9) {
        puStack_60[3] = uVar5;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar9);
    uVar8 = puStack_60[4];
    do {
      uVar5 = param_4;
      if (param_4 < uVar8) {
        uVar5 = uVar8;
      }
      LOCK();
      uVar4 = puStack_60[4];
      bVar9 = uVar8 == uVar4;
      if (bVar9) {
        puStack_60[4] = uVar5;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar9);
    *param_1 = 0xb;
  }
  else {
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
  }
  return param_1;
}

