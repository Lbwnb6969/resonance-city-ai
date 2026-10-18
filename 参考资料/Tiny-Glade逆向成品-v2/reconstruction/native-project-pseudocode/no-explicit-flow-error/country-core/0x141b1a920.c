// VA 0x141b1a920, PDB extent 965 bytes
// country_core::render::ssbo::impl$4::new_storage_buffer<country_core::systems::render_loop::resources::critters::FireflyVisibilitySsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$4::new_storage_buffer<country_core::systems::render_loop::resources::critters::FireflyVisibilitySsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 965 */

undefined8 * pdb_141b1a920(undefined8 *param_1,undefined8 param_2,byte *param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
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
    param_4 = 0x180;
    param_3 = pub_1406abae0(0x180,4);
    if (param_3 == (byte *)0x0) {
      cStack_39 = '\0';
      pdb_142dc7e2a(4,0x180);
      goto LAB_141b1ac23;
    }
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
LAB_141b1a9af:
    cVar6 = (char)uVar7;
    pbStack_48 = param_3;
    cStack_39 = cVar6;
    uVar4 = pdb_140e1d1f0(0x180,0x32,5);
    pbStack_48 = param_3;
    cStack_39 = cVar6;
    uVar4 = pdb_140e1d260(uVar4,4);
    pbStack_48 = param_3;
    cStack_39 = cVar6;
    pdb_1415d1d50(&ppuStack_100,param_2,&UNK_14338df08,0x12,uVar4,param_3,param_4);
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
      uStack_54 = uVar7;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_b0,&UNK_143390f58,&UNK_14338d4c8);
    }
    if (cVar6 != '\0') {
      pub_1406abac0(param_3,0x180,4);
    }
    uStack_50 = pcStack_f8;
    lVar5 = pdb_140e17350(&uStack_50);
    if ((*(char *)(lVar5 + 0x17) != '\x01') && (uVar2 = *(ulonglong *)(lVar5 + 0x48), uVar2 != 0)) {
      uVar1 = *(uint *)(lVar5 + 0x10);
      lVar5 = pdb_140e17350(&uStack_50);
      if (uVar1 < *(uint *)(lVar5 + 0x10)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14338e120,0x42,&UNK_14338e168);
      }
      puStack_b0 = (undefined8 *)((ulonglong)uVar1 & 3);
      if ((uVar1 & 3) == 0) {
        ppuStack_100 = (undefined **)(uVar2 & 3);
        if (ppuStack_100 == (undefined **)0x0) {
          *param_1 = pcStack_f8;
          param_1[1] = uVar2;
          param_1[2] = (ulonglong)(uVar1 >> 2);
          return param_1;
        }
        pdb_142dc7fb4(0,&ppuStack_100,&UNK_14338e180,0,uVar4,&UNK_14338e188);
      }
      else {
        pdb_142dc7fb4(0,&puStack_b0,&UNK_14338e180,0,uVar4,&UNK_14338e1a0);
      }
LAB_141b1ac23:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    puStack_b0 = (undefined8 *)(param_4 & 3);
    if (puStack_b0 == (undefined8 *)0x0) {
      ppuStack_100 = (undefined **)((ulonglong)param_3 & 3);
      if (ppuStack_100 == (undefined **)0x0) {
        if (0x183 < param_4) {
          puStack_b0 = (undefined8 *)&UNK_14338f9b9;
          uStack_a8 = 0x4e;
          ppuStack_100 = (undefined **)&puStack_b0;
          pcStack_f8 = pdb_1402ed400;
          cStack_39 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&ppuStack_100,&UNK_14338d5c0);
        }
        uVar7 = 0;
        goto LAB_141b1a9af;
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

