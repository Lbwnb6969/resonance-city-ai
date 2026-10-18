// VA 0x141b0d680, PDB extent 563 bytes
// country_core::render::ssbo::TypedStorageBuffer::gpu_write_ranges_nonoverlapping<country_core::geometry::instanced_wall::BrickTransformSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::ssbo::TypedStorageBuffer::gpu_write_ranges_nonoverlapping<country_core::geometry::instanced_wall::BrickTransformSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 563 */

void pdb_141b0d680(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 param_7)

{
  ulonglong *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int aiStack_f8 [2];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  ulonglong *puStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (param_6 != 0) {
    pdb_140f33350(auStack_58);
    uVar7 = param_6 * 0x10;
    uVar5 = puStack_48[4] & 0xfffffffffffffff8;
    if (uVar5 - *puStack_48 < uVar7 || uVar5 < *puStack_48) {
      uVar5 = pdb_142dc60a0(auStack_58,8);
      if (uVar5 == 0) {
        pdb_142dc6350();
LAB_141b0d83c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar5 = uVar5 + param_6 * -0x10;
      puStack_48[4] = uVar5;
    }
    uVar6 = 0;
    do {
      if (uVar7 == uVar6) {
        pdb_142dc8110(&UNK_14339117f,0x22,&UNK_143391200);
        goto LAB_141b0d83c;
      }
      lVar3 = ((longlong *)(param_5 + uVar6))[1];
      *(longlong *)(uVar5 + uVar6) = *(longlong *)(param_5 + uVar6) << 6;
      ((longlong *)(uVar5 + uVar6))[1] = lVar3 << 6;
      uVar6 = uVar6 + 0x10;
    } while (uVar7 != uVar6);
    pdb_140e55470(aiStack_f8,param_2,param_1,param_3,param_4 << 6,uVar5,param_6,param_7);
    puVar4 = _DAT_143ca8ec8;
    if (aiStack_f8[0] != 0xb) {
      uStack_68 = uStack_b8;
      uStack_60 = uStack_b0;
      uStack_78 = uStack_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      uStack_88 = uStack_d8;
      uStack_84 = uStack_d4;
      uStack_80 = uStack_d0;
      uStack_7c = uStack_cc;
      uStack_98 = uStack_e8;
      uStack_94 = uStack_e4;
      uStack_90 = uStack_e0;
      uStack_8c = uStack_dc;
      uStack_a0 = uStack_f0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143390f78,0x2b,auStack_a8,&UNK_143390f58,&UNK_14338d4e0);
    }
    while (puStack_48 != puVar4) {
      puVar1 = (ulonglong *)puStack_48[3];
      pub_1406abac0((byte *)*puStack_48,puStack_48[2],puStack_48[1]);
      puStack_48 = puVar1;
    }
  }
  return;
}

