// VA 0x140958dd0, PDB extent 9 bytes
// country_core::render::nani::gpu_world::impl$14::grow<country_core::render::nani::instance_data::WrenInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::grow<country_core::render::nani::instance_data::WrenInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 9 */

longlong * pdb_140958dd0(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  longlong *plStack_88;
  byte *pbStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  plVar6 = (longlong *)(param_2 + 0x18);
  uStack_70 = 0xfffffffffffffffe;
  uVar8 = *(ulonglong *)(param_2 + 0x28);
  if (param_4 < uVar8 || param_4 - uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143382a98,0x2d,&UNK_143382ac8);
  }
  uVar3 = pdb_140e1d1f0(param_4 * 0x70,CONCAT62((int6)((ulonglong)plVar6 >> 0x10),0x12),1);
  uVar3 = pdb_140e1d260(uVar3,4);
  pdb_1415d1d50(&lStack_118,param_3,&UNK_143382ca2,0x10,uVar3,0);
  if (lStack_118 == 0xb) {
    lStack_a8 = lStack_110;
    pbStack_98 = *(byte **)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 4;
    *(undefined8 *)(param_2 + 0x28) = 0;
    uStack_71 = 1;
    uStack_72 = 1;
    uStack_a0 = uVar8;
    uStack_90 = uVar8;
    pdb_142d7f1b0(&uStack_a0,uVar8,param_4 - uVar8,4,0x70);
    pbVar2 = pbStack_98;
    lStack_f0 = _UNK_1433200e8;
    lStack_f8 = _DAT_1433200e0;
    lStack_100 = _UNK_1433200d8;
    lStack_108 = _DAT_1433200d0;
    lStack_e0 = _UNK_1433200c8;
    lStack_118 = _DAT_1433200c0;
    pbStack_80 = (byte *)lStack_110;
    uVar7 = uStack_90 * 0x70;
    uVar5 = 0;
    do {
      lStack_110 = lStack_e0;
      lStack_e8 = lStack_118;
      lStack_d8 = lStack_108;
      lStack_d0 = lStack_100;
      uStack_c8 = lStack_f8;
      uStack_c0 = lStack_f0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      pbVar4 = pbStack_98 + uVar7 + 0x60;
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4[4] = 0;
      pbVar4[5] = 0;
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      *(longlong *)(pbStack_98 + uVar7 + 0x50) = lStack_f8;
      *(longlong *)(pbStack_98 + uVar7 + 0x50 + 8) = lStack_f0;
      *(longlong *)(pbStack_98 + uVar7 + 0x40) = lStack_108;
      *(longlong *)(pbStack_98 + uVar7 + 0x40 + 8) = lStack_100;
      *(longlong *)(pbStack_98 + uVar7 + 0x30) = lStack_118;
      *(longlong *)(pbStack_98 + uVar7 + 0x30 + 8) = lStack_e0;
      *(longlong *)(pbStack_98 + uVar7 + 0x20) = lStack_f8;
      *(longlong *)(pbStack_98 + uVar7 + 0x20 + 8) = lStack_f0;
      *(longlong *)(pbStack_98 + uVar7 + 0x10) = lStack_108;
      *(longlong *)(pbStack_98 + uVar7 + 0x10 + 8) = lStack_100;
      *(longlong *)(pbStack_98 + uVar7) = lStack_118;
      *(longlong *)(pbStack_98 + uVar7 + 8) = lStack_e0;
      uVar5 = uVar5 - 1;
      uVar7 = uVar7 + 0x70;
    } while (uVar8 - param_4 != uVar5);
    uVar8 = uStack_90 - uVar5;
    pbVar4 = pbStack_98;
    if (uVar8 < uStack_a0) {
      plStack_88 = (longlong *)(uStack_a0 * 0x70);
      if (uStack_90 == uVar5) {
        pub_1406abac0(pbStack_98,(ulonglong)plStack_88,4);
        pbVar4 = (byte *)0x4;
      }
      else {
        pbVar4 = pub_1406abad0(pbStack_98,(ulonglong)plStack_88,4,uVar7);
        if (pbVar4 == (byte *)0x0) {
          pbStack_80 = pbVar2;
          pdb_142dc7e2a(4,uVar7);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
    }
    *(byte **)(param_2 + 0x20) = pbVar4;
    *(ulonglong *)(param_2 + 0x28) = uVar8;
    plStack_88 = plVar6;
    pdb_140989660(plVar6);
    *plStack_88 = (longlong)pbStack_80;
    LOCK();
    plStack_88[3] = 0;
    UNLOCK();
    param_4 = param_4 - 1;
    uVar8 = plStack_88[3];
    do {
      uVar5 = param_4;
      if (uVar8 <= param_4) {
        uVar5 = uVar8;
      }
      LOCK();
      uVar7 = plStack_88[3];
      bVar9 = uVar8 == uVar7;
      if (bVar9) {
        plStack_88[3] = uVar5;
        uVar7 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar7;
    } while (!bVar9);
    uVar8 = plStack_88[4];
    do {
      uVar5 = param_4;
      if (param_4 < uVar8) {
        uVar5 = uVar8;
      }
      LOCK();
      uVar7 = plStack_88[4];
      bVar9 = uVar8 == uVar7;
      if (bVar9) {
        plStack_88[4] = uVar5;
        uVar7 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar7;
    } while (!bVar9);
    *param_1 = 0xb;
  }
  else {
    param_1[8] = lStack_d8;
    param_1[9] = lStack_d0;
    param_1[6] = lStack_e8;
    param_1[7] = lStack_e0;
    param_1[4] = lStack_f8;
    param_1[5] = lStack_f0;
    param_1[2] = lStack_108;
    param_1[3] = lStack_100;
    *param_1 = lStack_118;
    param_1[1] = lStack_110;
  }
  return param_1;
}

