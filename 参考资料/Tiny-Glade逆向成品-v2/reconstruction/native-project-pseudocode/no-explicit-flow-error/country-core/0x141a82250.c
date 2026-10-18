// VA 0x141a82250, PDB extent 1114 bytes
// country_core::render::shadowed_buffer::ShadowedBuffer::grow<country_core::render::nani::instance_data::VelocityOnlyInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::shadowed_buffer::ShadowedBuffer::grow<country_core::render::nani::instance_data::VelocityOnlyInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
   Extent: 1114 */

longlong * pdb_141a82250(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  longlong *plStack_78;
  byte *pbStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar7 = param_2[2];
  if (param_4 < uVar7 || param_4 - uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143382a98,0x2d,&UNK_143382ac8);
  }
  uVar3 = pdb_140e1d1f0(param_4 * 0x60,0x12,1);
  uVar3 = pdb_140e1d260(uVar3,4);
  pdb_1415d1d50(&lStack_f8,param_3,&UNK_143382c36,0x18,uVar3,0);
  if (lStack_f8 == 0xb) {
    lStack_98 = lStack_f0;
    pbStack_88 = (byte *)param_2[1];
    param_2[1] = 4;
    param_2[2] = 0;
    uStack_61 = 1;
    uStack_62 = 1;
    uStack_90 = uVar7;
    uStack_80 = uVar7;
    pdb_142d7f1b0(&uStack_90,uVar7,param_4 - uVar7,4,0x60);
    pbVar2 = pbStack_88;
    lStack_d0 = _UNK_1433200e8;
    lStack_d8 = _DAT_1433200e0;
    lStack_e0 = _UNK_1433200d8;
    lStack_e8 = _DAT_1433200d0;
    lStack_c0 = _UNK_1433200c8;
    lStack_f8 = _DAT_1433200c0;
    pbStack_70 = (byte *)lStack_f0;
    uVar6 = uStack_80 * 0x60;
    uVar5 = 0;
    do {
      lStack_f0 = lStack_c0;
      lStack_c8 = lStack_f8;
      lStack_b8 = lStack_e8;
      lStack_b0 = lStack_e0;
      uStack_a8 = lStack_d8;
      uStack_a0 = lStack_d0;
      *(longlong *)(pbStack_88 + uVar6 + 0x50) = lStack_d8;
      *(longlong *)(pbStack_88 + uVar6 + 0x50 + 8) = lStack_d0;
      *(longlong *)(pbStack_88 + uVar6 + 0x40) = lStack_e8;
      *(longlong *)(pbStack_88 + uVar6 + 0x40 + 8) = lStack_e0;
      *(longlong *)(pbStack_88 + uVar6 + 0x30) = lStack_f8;
      *(longlong *)(pbStack_88 + uVar6 + 0x30 + 8) = lStack_c0;
      *(longlong *)(pbStack_88 + uVar6 + 0x20) = lStack_d8;
      *(longlong *)(pbStack_88 + uVar6 + 0x20 + 8) = lStack_d0;
      *(longlong *)(pbStack_88 + uVar6 + 0x10) = lStack_e8;
      *(longlong *)(pbStack_88 + uVar6 + 0x10 + 8) = lStack_e0;
      *(longlong *)(pbStack_88 + uVar6) = lStack_f8;
      *(longlong *)(pbStack_88 + uVar6 + 8) = lStack_c0;
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 + 0x60;
    } while (uVar7 - param_4 != uVar5);
    uVar7 = uStack_80 - uVar5;
    pbVar4 = pbStack_88;
    if (uVar7 < uStack_90) {
      plStack_78 = (longlong *)(uStack_90 * 0x60);
      if (uStack_80 == uVar5) {
        pub_1406abac0(pbStack_88,(ulonglong)plStack_78,4);
        pbVar4 = (byte *)0x4;
      }
      else {
        pbVar4 = pub_1406abad0(pbStack_88,(ulonglong)plStack_78,4,uVar6);
        if (pbVar4 == (byte *)0x0) {
          pbStack_70 = pbVar2;
          pdb_142dc7e2a(4,uVar6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
    }
    param_2[1] = (longlong)pbVar4;
    param_2[2] = uVar7;
    plStack_78 = param_2;
    pdb_140989660(param_2);
    *plStack_78 = (longlong)pbStack_70;
    LOCK();
    plStack_78[3] = 0;
    UNLOCK();
    param_4 = param_4 - 1;
    uVar7 = plStack_78[3];
    do {
      uVar6 = param_4;
      if (uVar7 <= param_4) {
        uVar6 = uVar7;
      }
      LOCK();
      uVar5 = plStack_78[3];
      bVar8 = uVar7 == uVar5;
      if (bVar8) {
        plStack_78[3] = uVar6;
        uVar5 = uVar7;
      }
      UNLOCK();
      uVar7 = uVar5;
    } while (!bVar8);
    uVar7 = plStack_78[4];
    do {
      uVar6 = param_4;
      if (param_4 < uVar7) {
        uVar6 = uVar7;
      }
      LOCK();
      uVar5 = plStack_78[4];
      bVar8 = uVar7 == uVar5;
      if (bVar8) {
        plStack_78[4] = uVar6;
        uVar5 = uVar7;
      }
      UNLOCK();
      uVar7 = uVar5;
    } while (!bVar8);
    *param_1 = 0xb;
  }
  else {
    param_1[8] = lStack_b8;
    param_1[9] = lStack_b0;
    param_1[6] = lStack_c8;
    param_1[7] = lStack_c0;
    param_1[4] = lStack_d8;
    param_1[5] = lStack_d0;
    param_1[2] = lStack_e8;
    param_1[3] = lStack_e0;
    *param_1 = lStack_f8;
    param_1[1] = lStack_f0;
  }
  return param_1;
}

