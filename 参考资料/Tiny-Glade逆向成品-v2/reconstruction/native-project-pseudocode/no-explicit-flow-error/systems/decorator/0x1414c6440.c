// VA 0x1414c6440, PDB extent 693 bytes
// system_decorator::ui_systems::handle_splitting_wall_decorators::handle_moving_out_wall_decorator_part::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_wall_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::handle_splitting_wall_decorators::handle_moving_out_wall_decorator_part::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/handle_splitting_wall_decorators.rs
   Extent: 693 */

void pdb_1414c6440(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  undefined4 uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [12];
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  uVar13 = *param_2;
  puVar5 = (undefined8 *)param_2[1];
  uVar11 = pdb_140c413e0(puVar5);
  if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143312ef8);
  }
  lVar12 = pdb_140b54f80(uVar13);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143312f28);
  }
  pbVar6 = (byte *)param_2[2];
  if ((*pbVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143312f40);
  }
  uVar4 = *param_4;
  if ((uVar4 & 1) == 0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = (float)param_4[1];
  }
  fVar16 = *(float *)(pbVar6 + 8);
  fVar18 = (float)param_4[2];
  fVar1 = *(float *)(pbVar6 + 4);
  uStack_c8 = pdb_14092f860(lVar12);
  uStack_c4 = extraout_XMM0_Da;
  uVar11 = pdb_140dea700(&uStack_c8,fVar17 + fVar1);
  if ((uVar11 & 1) != 0) {
    if ((uVar4 & 1) == 0) {
      fVar18 = 0.0;
    }
    fVar16 = fVar16 + fVar18;
    uVar15 = extraout_XMM0_Da_00;
    uStack_f0 = extraout_XMM0_Da_00;
    fStack_ec = fVar16;
    fVar17 = (float)pdb_14092fb60(lVar12,extraout_XMM0_Da_00,fVar16);
    uVar9 = pdb_14007fac0();
    lVar7 = param_2[3];
    if (*(char *)(lVar7 + 0x22) != '\x02') {
      uStack_d8 = *(undefined8 *)(lVar7 + 8);
      puStack_d0 = puVar5;
      pdb_140dea260(&uStack_c8,&uStack_f0,lVar12);
      cVar2 = *(char *)(lVar7 + 0x22);
      if (cVar2 != '\x02') {
        uVar3 = *(undefined1 *)(lVar7 + 0x21);
        uStack_e0 = uStack_c0;
        uStack_e8 = CONCAT44(uStack_c4,uStack_c8);
        uVar13 = param_2[4];
        pdb_140dea260(auStack_b8,&uStack_f0,lVar12);
        uVar14 = pdb_140dea170(&uStack_f0,lVar12);
        pdb_140de88f0(&uStack_98,uVar15 ^ _DAT_142e37820,uVar14);
        uStack_c8 = uStack_98;
        uStack_c4 = uStack_94;
        uStack_c0 = uStack_90;
        uStack_bc = uStack_8c;
        uStack_ac = 0x3f8000003f800000;
        uStack_a4 = 0x3f800000;
        pdb_140c45c90(uVar13,param_3,&uStack_c8);
        if (uVar4 == 0) {
          uVar13 = 3;
        }
        else {
          uVar13 = *puStack_d0;
          uVar8 = puStack_d0[1];
          *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_e0;
          *(undefined8 *)((longlong)param_1 + 0x24) = uStack_e8;
          uVar10 = pdb_14008fbf0();
          param_1[1] = uVar8;
          *(uint *)(param_1 + 2) = extraout_XMM0_Da_00;
          *(float *)((longlong)param_1 + 0x14) = fVar16;
          param_1[3] = uStack_d8;
          *(float *)(param_1 + 4) = fVar16 - fVar17;
          *(undefined1 *)(param_1 + 6) = uVar9;
          *(undefined1 *)((longlong)param_1 + 0x31) = uVar3;
          *(char *)((longlong)param_1 + 0x32) = cVar2;
          *(undefined1 *)(param_1 + 7) = uVar10;
        }
        *param_1 = uVar13;
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143312f88);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143312f70);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143312f58);
}

