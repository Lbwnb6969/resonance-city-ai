// VA 0x141b19750, PDB extent 1029 bytes
// country_core::render::ssbo::impl$4::new_storage_buffer<country_core::resources::water_mask::WaterMaskSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$4::new_storage_buffer<country_core::resources::water_mask::WaterMaskSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 1029 */

undefined8 * pdb_141b19750(undefined8 *param_1,undefined8 param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 unaff_R15;
  undefined **ppuStack_100;
  code *pcStack_f8;
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
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 *puStack_b0;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte *pbStack_60;
  undefined4 uStack_54;
  undefined8 uStack_50;
  byte *pbStack_48;
  char cStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (param_3 == (byte *)0x0) {
    pdb_14007ee60();
    param_3 = pub_1406abab0(0x8000,4);
    if (param_3 == (byte *)0x0) {
      cStack_39 = '\0';
      pdb_142dc7e2a(4,0x8000);
      goto LAB_141b19a97;
    }
    lVar6 = 0x1c;
    do {
      pbVar1 = param_3 + lVar6 * 4 + -0x70;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1 = param_3 + lVar6 * 4 + -0x60;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1 = param_3 + lVar6 * 4 + -0x50;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1 = param_3 + lVar6 * 4 + -0x40;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1 = param_3 + lVar6 * 4 + -0x30;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1 = param_3 + lVar6 * 4 + -0x20;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1 = param_3 + lVar6 * 4 + -0x10;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1 = param_3 + lVar6 * 4;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != 0x201c);
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    param_4 = 0x8000;
LAB_141b19823:
    cVar7 = (char)uVar8;
    pbStack_48 = param_3;
    cStack_39 = cVar7;
    uVar5 = pdb_140e1d1f0(0x8000,0x32,5);
    pbStack_48 = param_3;
    cStack_39 = cVar7;
    uVar5 = pdb_140e1d260(uVar5,4);
    pbStack_48 = param_3;
    cStack_39 = cVar7;
    pdb_1415d1d50(&ppuStack_100,param_2,&UNK_14338d9de,9,uVar5,param_3,param_4);
    if (ppuStack_100 != (undefined **)0xb) {
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      uStack_68 = uStack_b8;
      uStack_64 = uStack_b4;
      uStack_80 = uStack_d0;
      uStack_7c = uStack_cc;
      uStack_78 = uStack_c8;
      uStack_74 = uStack_c4;
      uStack_90 = uStack_e0;
      uStack_8c = uStack_dc;
      uStack_88 = uStack_d8;
      uStack_84 = uStack_d4;
      uStack_a0 = uStack_f0;
      uStack_9c = uStack_ec;
      uStack_98 = uStack_e8;
      uStack_94 = uStack_e4;
      puStack_b0 = ppuStack_100;
      uStack_a8 = pcStack_f8;
      pbStack_60 = param_3;
      uStack_54 = uVar8;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_b0,&UNK_143390f58,&UNK_14338d4c8);
    }
    if (cVar7 != '\0') {
      pub_1406abac0(param_3,0x8000,4);
    }
    uStack_50 = pcStack_f8;
    lVar6 = pdb_140e17350(&uStack_50);
    if ((*(char *)(lVar6 + 0x17) != '\x01') && (uVar3 = *(ulonglong *)(lVar6 + 0x48), uVar3 != 0)) {
      uVar2 = *(uint *)(lVar6 + 0x10);
      lVar6 = pdb_140e17350(&uStack_50);
      if (uVar2 < *(uint *)(lVar6 + 0x10)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14338e120,0x42,&UNK_14338e168);
      }
      puStack_b0 = (undefined8 *)((ulonglong)uVar2 & 3);
      if ((uVar2 & 3) == 0) {
        ppuStack_100 = (undefined **)(uVar3 & 3);
        if (ppuStack_100 == (undefined **)0x0) {
          *param_1 = pcStack_f8;
          param_1[1] = uVar3;
          param_1[2] = (ulonglong)(uVar2 >> 2);
          return param_1;
        }
        pdb_142dc7fb4(0,&ppuStack_100,&UNK_14338e180,0,uVar5,&UNK_14338e188);
      }
      else {
        pdb_142dc7fb4(0,&puStack_b0,&UNK_14338e180,0,uVar5,&UNK_14338e1a0);
      }
LAB_141b19a97:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    puStack_b0 = (undefined8 *)(param_4 & 3);
    if (puStack_b0 == (undefined8 *)0x0) {
      ppuStack_100 = (undefined **)((ulonglong)param_3 & 3);
      if (ppuStack_100 == (undefined **)0x0) {
        if (0x8003 < param_4) {
          puStack_b0 = (undefined8 *)&UNK_14339043a;
          uStack_a8 = 0x32;
          ppuStack_100 = (undefined **)&puStack_b0;
          pcStack_f8 = pdb_1402ed400;
          cStack_39 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&ppuStack_100,&UNK_14338d5c0);
        }
        uVar8 = 0;
        goto LAB_141b19823;
      }
    }
    else {
      pdb_142dc7fb4(0,&puStack_b0,&UNK_143381eb8,0);
    }
    pdb_142dc7fb4(0,&ppuStack_100,&UNK_143381eb8,0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14338e108);
}

