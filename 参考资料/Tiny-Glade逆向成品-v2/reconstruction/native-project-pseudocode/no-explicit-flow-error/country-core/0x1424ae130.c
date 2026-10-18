// VA 0x1424ae130, PDB extent 579 bytes
// country_core::render::ssbo::TypedStorageBuffer::gpu_write_ranges_nonoverlapping<country_core::resources::roofs::roof_buffers::WoodenGablePlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::ssbo::TypedStorageBuffer::gpu_write_ranges_nonoverlapping<country_core::resources::roofs::roof_buffers::WoodenGablePlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 579 */

void pdb_1424ae130(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  code *pcVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  int iStack_a8;
  undefined4 uStack_a4;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  ulonglong *puStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (param_6 != 0) {
    pdb_140f33350(auStack_58);
    uVar8 = param_6 * 0x10;
    uVar6 = puStack_48[4] & 0xfffffffffffffff8;
    if (uVar6 - *puStack_48 < uVar8 || uVar6 < *puStack_48) {
      uVar6 = pdb_142dc60a0(auStack_58,8);
      if (uVar6 == 0) {
        pdb_142dc6350();
LAB_1424ae2fa:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    else {
      uVar6 = uVar6 + param_6 * -0x10;
      puStack_48[4] = uVar6;
    }
    uVar7 = 0;
    do {
      if (uVar8 == uVar7) {
        pdb_142dc8110(&UNK_14350f327,0x22,&UNK_14350f3a8);
        goto LAB_1424ae2fa;
      }
      lVar1 = *param_5;
      lVar2 = param_5[1];
      param_5 = param_5 + 2;
      *(longlong *)(uVar6 + uVar7) = lVar1 * 0x60;
      *(longlong *)(uVar6 + 8 + uVar7) = lVar2 * 0x60;
      uVar7 = uVar7 + 0x10;
    } while (uVar8 != uVar7);
    pdb_140e55470(&iStack_f8,param_2,param_1,param_3,param_4 * 0x60,uVar6,param_6,param_7);
    puVar5 = _DAT_143ca8ec8;
    if (iStack_f8 != 0xb) {
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
      iStack_a8 = iStack_f8;
      uStack_a4 = uStack_f4;
      uStack_a0 = uStack_f0;
      uStack_9c = uStack_ec;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14350f120,0x2b,&iStack_a8,&UNK_14350f100,&UNK_14350f0e8);
    }
    while (puStack_48 != puVar5) {
      puVar3 = (ulonglong *)puStack_48[3];
      pub_1406abac0((byte *)*puStack_48,puStack_48[2],puStack_48[1]);
      puStack_48 = puVar3;
    }
  }
  return;
}

