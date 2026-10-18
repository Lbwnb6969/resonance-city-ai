// VA 0x142989f80, PDB extent 957 bytes
// toolbar::resouces_and_components::taffy_layout::TaffyLayout::perform_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::resouces_and_components::taffy_layout::TaffyLayout::perform_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_layout.rs
   Extent: 957 */

void pdb_142989f80(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  undefined *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int aiStack_b8 [2];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  longlong lStack_90;
  
  lVar13 = *(longlong *)(param_1 + 0xa0);
  uVar6 = *(ulonglong *)(param_1 + 0xa8);
  uStack_e8 = &uStack_e9;
  uStack_c0 = param_2;
  uStack_bc = param_3;
  if (uVar6 < 2) {
    if (uVar6 == 0) {
      return;
    }
  }
  else if (uVar6 < 0x15) {
    pdb_1411b8340(lVar13,uVar6,1,&uStack_e8);
  }
  else {
    pdb_1411b8c50(lVar13,uVar6,&uStack_e8);
  }
  uVar10 = _DAT_142e37820;
  fVar9 = _DAT_142e36f50;
  lStack_90 = uVar6 * 0x28;
  lVar12 = 0;
  lVar14 = lStack_90;
  lStack_98 = lVar13;
LAB_14298a07b:
  while (bVar1 = *(byte *)(lVar13 + 0x24 + lVar12), bVar1 == 4) {
    uVar2 = *(undefined4 *)(lVar13 + 0x10 + lVar12);
    uVar3 = *(undefined4 *)(lVar13 + 0x14 + lVar12);
    pdb_1423909c0(param_1,uVar2,uVar3,&uStack_c0,&uStack_bc);
    uStack_e8 = (undefined1 *)CONCAT44(_UNK_143608a30,_DAT_143608a2c);
    uStack_e0 = _UNK_143608a34;
    uStack_dc = _UNK_143608a38;
    pdb_1411bdbb0(aiStack_b8,param_1,uVar2,uVar3,&uStack_e8);
    if (aiStack_b8[0] != 4) {
      uStack_d8 = uStack_a8;
      uStack_d4 = uStack_a4;
      uStack_d0 = uStack_a0;
      uStack_cc = uStack_9c;
      uStack_e0 = uStack_b0;
      uStack_dc = uStack_ac;
      puVar11 = &UNK_143608a80;
      goto LAB_14298a2e5;
    }
    pdb_142b5a4a0(param_1,uVar2,uVar3,*(undefined4 *)(lVar13 + 8 + lVar12),
                  *(undefined4 *)(lVar13 + 0xc + lVar12));
    lVar12 = lVar12 + 0x28;
    if (lVar14 == lVar12) {
      return;
    }
  }
  uVar2 = *(undefined4 *)(lVar13 + 0x18 + lVar12);
  uVar3 = *(undefined4 *)(lVar13 + 0x1c + lVar12);
  fVar15 = *(float *)(lVar13 + 0x20 + lVar12);
  uVar4 = *(undefined4 *)(lVar13 + 0x10 + lVar12);
  uVar5 = *(undefined4 *)(lVar13 + 0x14 + lVar12);
  uStack_e8 = (undefined1 *)CONCAT44(_UNK_143608a30,_DAT_143608a2c);
  uStack_e0 = _UNK_143608a34;
  uStack_dc = _UNK_143608a38;
  puVar17 = &uStack_e8;
  pdb_1411bdbb0(aiStack_b8,param_1,uVar4,uVar5,puVar17);
  uVar18 = (undefined4)((ulonglong)puVar17 >> 0x20);
  if (aiStack_b8[0] == 4) {
    pdb_1411bdd00(aiStack_b8,param_1,uVar2,uVar3);
    if (aiStack_b8[0] == 4) {
      pfVar7 = (float *)CONCAT44(uStack_ac,uStack_b0);
      pdb_1411bdd00(aiStack_b8,param_1,uVar4,uVar5);
      lVar13 = lStack_98;
      if (aiStack_b8[0] == 4) {
        pfVar8 = (float *)CONCAT44(uStack_ac,uStack_b0);
        if (bVar1 < 2) {
          fVar16 = *pfVar7 * fVar9 - *pfVar8 * fVar9;
          if (bVar1 == 0) {
            fVar15 = (float)((uint)pfVar8[1] ^ uVar10) - fVar15 * param_4;
          }
          else {
            fVar15 = pfVar7[1] + fVar15 * param_4;
          }
        }
        else {
          if (bVar1 == 2) {
            fVar16 = (float)((uint)*pfVar8 ^ uVar10) - fVar15 * param_4;
          }
          else {
            fVar16 = *pfVar7 + fVar15 * param_4;
          }
          fVar15 = pfVar7[1] * fVar9 - pfVar8[1] * fVar9;
        }
        pdb_142b5a4a0(param_1,uVar4,uVar5,fVar16 + pfVar7[2] + *(float *)(lStack_98 + 8 + lVar12),
                      CONCAT44(uVar18,fVar15 + pfVar7[3] + *(float *)(lStack_98 + 0xc + lVar12)));
        lVar12 = lVar12 + 0x28;
        lVar14 = lStack_90;
        if (lStack_90 == lVar12) {
          return;
        }
        goto LAB_14298a07b;
      }
      uStack_d8 = uStack_a8;
      uStack_d4 = uStack_a4;
      uStack_d0 = uStack_a0;
      uStack_cc = uStack_9c;
      uStack_e0 = uStack_b0;
      uStack_dc = uStack_ac;
      puVar11 = &UNK_143608ac8;
    }
    else {
      uStack_d8 = uStack_a8;
      uStack_d4 = uStack_a4;
      uStack_d0 = uStack_a0;
      uStack_cc = uStack_9c;
      uStack_e0 = uStack_b0;
      uStack_dc = uStack_ac;
      puVar11 = &UNK_143608ab0;
    }
  }
  else {
    uStack_d8 = uStack_a8;
    uStack_d4 = uStack_a4;
    uStack_d0 = uStack_a0;
    uStack_cc = uStack_9c;
    uStack_e0 = uStack_b0;
    uStack_dc = uStack_ac;
    puVar11 = &UNK_143608a98;
  }
LAB_14298a2e5:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1436088e0,0x2b,&uStack_e8,&UNK_1436088c0,puVar11);
}

