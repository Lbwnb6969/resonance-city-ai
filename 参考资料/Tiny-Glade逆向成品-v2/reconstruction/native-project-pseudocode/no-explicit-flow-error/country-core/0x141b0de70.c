// VA 0x141b0de70, PDB extent 641 bytes
// country_core::render::ssbo::TypedStorageBuffer::new<country_core::render::nani::mesh_atlas::NaniMeshAtlasPartInfo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::TypedStorageBuffer::new<country_core::render::nani::mesh_atlas::NaniMeshAtlasPartInfo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 641 */

undefined8 pdb_141b0de70(undefined8 param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 unaff_R14;
  undefined **ppuStack_f0;
  code *pcStack_e8;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  byte *pbStack_50;
  undefined4 uStack_44;
  byte *pbStack_40;
  char cStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (param_2 == (byte *)0x0) {
    pdb_14007ee60();
    param_2 = pub_1406abab0(0x74000,4);
    if (param_2 == (byte *)0x0) {
      cStack_31 = 0;
      pdb_142dc7e2a(4,0x74000);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = 0x70;
    do {
      pbVar1 = param_2 + lVar3 + -0x70;
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
      pbVar1 = param_2 + lVar3 + -0x60;
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
      pbVar1 = param_2 + lVar3 + -0x50;
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
      pbVar1 = param_2 + lVar3 + -0x40;
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
      pbVar1 = param_2 + lVar3 + -0x30;
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
      pbVar1 = param_2 + lVar3 + -0x20;
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
      pbVar1 = param_2 + lVar3 + -0x10;
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
      pbVar1 = param_2 + lVar3;
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
      lVar3 = lVar3 + 0x80;
    } while (lVar3 != 0x74070);
    uVar6 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    param_3 = 0x7400;
  }
  else {
    if (0x7400 < param_3) {
      puStack_a0 = (undefined8 *)&UNK_14338f61f;
      uStack_98 = 0x3d;
      ppuStack_f0 = (undefined **)&puStack_a0;
      pcStack_e8 = pdb_1402ed400;
      cStack_31 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14338d590,&ppuStack_f0,&UNK_14338d5c0);
    }
    uVar6 = 0;
  }
  cVar5 = (char)uVar6;
  pbStack_40 = param_2;
  cStack_31 = cVar5;
  uVar4 = pdb_140e1d1f0(0x74000,0x12,1);
  pbStack_40 = param_2;
  cStack_31 = cVar5;
  uVar4 = pdb_140e1d260(uVar4,4);
  pbStack_40 = param_2;
  cStack_31 = cVar5;
  pdb_1415d1d50(&ppuStack_f0,param_1,&UNK_14338d840,0x11,uVar4,param_2,param_3 << 4);
  if (ppuStack_f0 == (undefined **)0xb) {
    if (cVar5 != '\0') {
      pub_1406abac0(param_2,0x74000,4);
    }
    return pcStack_e8;
  }
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  uStack_58 = uStack_a8;
  uStack_54 = uStack_a4;
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
  puStack_a0 = ppuStack_f0;
  uStack_98 = pcStack_e8;
  pbStack_50 = param_2;
  uStack_44 = uVar6;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_a0,&UNK_143390f58,&UNK_14338d4c8);
}

