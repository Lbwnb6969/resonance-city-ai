// VA 0x1417d9770, PDB extent 1031 bytes
// asset_pipe::texture_processing::process_regular_image::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture_processing::process_regular_image::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 1031 */

void pdb_1417d9770(undefined4 *param_1,uint param_2,uint param_3,byte param_4,byte param_5,
                  undefined8 param_6,byte param_7)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_100;
  undefined1 auStack_e0 [32];
  uint uStack_c0;
  uint uStack_bc;
  undefined1 auStack_b8 [32];
  uint uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 *puStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  param_2 = param_2 >> (param_7 & 0x1f);
  param_2 = param_2 + (param_2 == 0);
  param_3 = param_3 >> (param_7 & 0x1f);
  param_3 = param_3 + (param_3 == 0);
  puStack_68 = param_1;
  pdb_140dac2d0(auStack_e0,param_6,param_2,param_3,2);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8510(&UNK_143338b80);
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8510(&UNK_143338b80);
  }
  uVar2 = param_2 % (uint)param_4;
  iVar4 = param_4 - uVar2;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  param_2 = iVar4 + param_2;
  iVar4 = (uint)param_5 - param_3 % (uint)param_5;
  if (param_3 % (uint)param_5 == 0) {
    iVar4 = 0;
  }
  uStack_58 = (ulonglong)uStack_c0;
  if (uStack_c0 <= param_2) {
    param_3 = iVar4 + param_3;
    uVar3 = (ulonglong)uStack_bc;
    if (uStack_bc <= param_3) {
      pdb_140dac2d0(auStack_b8,auStack_e0,uStack_58,uStack_bc,2);
      pdb_140dacd80(&uStack_90,param_2,param_3);
      uStack_60 = uVar3;
      if ((uStack_98 <= uStack_70) && (uStack_4c = uStack_94, uStack_94 <= uStack_6c)) {
        if ((uStack_98 != 0) && (uStack_94 != 0)) {
          uVar2 = 0;
          do {
            uVar5 = 0;
            do {
              uVar1 = pdb_140dad8b0(auStack_b8,uVar5,uVar2);
              pdb_140dacf00(&uStack_90,uVar5,uVar2,uVar1);
              uVar5 = uVar5 + 1;
            } while (uVar5 != uStack_98);
            uVar2 = uVar2 + 1;
          } while (uVar2 != uStack_4c);
        }
        uStack_4c = (int)uStack_58 + -1;
        uVar2 = 0;
        while (uVar5 = uVar2, uVar5 < (uint)uStack_60) {
          uVar1 = pdb_140dad8b0(auStack_b8,uStack_4c,uVar5);
          for (uVar3 = uStack_58; uVar2 = uVar5 + 1, (uint)uVar3 < param_2;
              uVar3 = (ulonglong)((uint)uVar3 + 1)) {
            pdb_140dacf00(&uStack_90,uVar3,uVar5,uVar1);
          }
        }
        uStack_58 = CONCAT44(uStack_58._4_4_,(uint)uStack_60 - 1);
        uVar2 = 0;
        while (uVar5 = uVar2, uVar5 < param_2) {
          uVar1 = pdb_140dad8b0(&uStack_90,uVar5,uStack_58 & 0xffffffff);
          for (uVar3 = uStack_60; uVar2 = uVar5 + 1, (uint)uVar3 < param_3;
              uVar3 = (ulonglong)((uint)uVar3 + 1)) {
            pdb_140dacf00(&uStack_90,uVar5,uVar3,uVar1);
          }
        }
        *(ulonglong *)(puStack_68 + 8) = CONCAT44(uStack_6c,uStack_70);
        puStack_68[4] = uStack_80;
        puStack_68[5] = uStack_7c;
        puStack_68[6] = uStack_78;
        puStack_68[7] = uStack_74;
        *puStack_68 = uStack_90;
        puStack_68[1] = uStack_8c;
        puStack_68[2] = uStack_88;
        puStack_68[3] = uStack_84;
        pdb_1417dc660(auStack_b8);
        pdb_1417dc660(auStack_e0);
        return;
      }
      uStack_120 = 0x8000000000000006;
      uStack_118 = 0x8000000000000000;
      uStack_100 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143339370,0x2b,&uStack_120,&UNK_1433393c0,&UNK_143339338);
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1433392da,0x42,&UNK_143339320);
}

