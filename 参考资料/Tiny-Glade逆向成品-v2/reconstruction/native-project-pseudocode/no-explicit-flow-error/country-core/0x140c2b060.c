// VA 0x140c2b060, PDB extent 1357 bytes
// country_core::resources::walls::wall_holes::WallHoleStorage::finalize
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::WallHoleStorage::finalize
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 1357 */

undefined1 pdb_140c2b060(int *param_1,float param_2,char param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  undefined5 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined1 *puStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  int iStack_c0;
  char cStack_bc;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  ulonglong uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined1 uStack_73;
  undefined1 uStack_72;
  char cStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  cStack_71 = param_3;
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14306bd18,0x8b,&UNK_14306bd60);
  }
  uStack_d8 = *(ulonglong *)(param_1 + 8);
  uStack_d0 = *(longlong *)(param_1 + 10);
  uVar10 = *(undefined8 *)(param_1 + 0xc);
  iStack_c0 = param_1[0xe];
  iVar7 = param_1[0xf];
  uVar9 = *(undefined5 *)(param_1 + 0xe);
  cStack_bc = (char)iVar7;
  uStack_bb = (undefined2)((uint)iVar7 >> 8);
  uStack_b9 = (undefined1)((uint)iVar7 >> 0x18);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  lStack_a0 = *(longlong *)(param_1 + 0x10);
  lStack_98 = *(longlong *)(param_1 + 0x12);
  lStack_90 = *(longlong *)(param_1 + 0x14);
  lStack_88 = *(longlong *)(param_1 + 0x16);
  uVar6 = *(ulonglong *)(param_1 + 6);
  iStack_b8 = param_1[2];
  iStack_b4 = param_1[3];
  uVar11 = *(undefined8 *)(param_1 + 2);
  piVar8 = param_1 + 4;
  iStack_b0 = *piVar8;
  iStack_ac = param_1[5];
  uVar12 = *(undefined8 *)piVar8;
  puVar16 = *(undefined4 **)piVar8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uStack_72 = lStack_98 != lStack_88 || lStack_a0 != lStack_90;
  if (lStack_98 == lStack_88 && lStack_a0 == lStack_90) {
    param_1[0] = 1;
    param_1[1] = 0;
    *(longlong *)(param_1 + 0x16) = lStack_88;
    *(longlong *)(param_1 + 0x12) = lStack_98;
    *(longlong *)(param_1 + 0x14) = lStack_90;
    uStack_d8._4_4_ = (int)(uStack_d8 >> 0x20);
    uStack_d0._4_4_ = (int)((ulonglong)uStack_d0 >> 0x20);
    *(ulonglong *)(param_1 + 0xe) = uVar6;
    *(longlong *)(param_1 + 0x10) = lStack_a0;
    *(undefined8 *)(param_1 + 10) = uVar11;
    *(undefined8 *)(param_1 + 0xc) = uVar12;
    *(undefined8 *)(param_1 + 6) = uVar10;
    *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_b9,CONCAT25(uStack_bb,uVar9));
    uStack_138._0_4_ = (float)(int)uStack_d8;
    uStack_138._4_4_ = uStack_d8._4_4_;
    uStack_130._0_4_ = (float)(int)uStack_d0;
    uStack_130._4_4_ = uStack_d0._4_4_;
    goto LAB_140c2b452;
  }
  uStack_c8 = 0;
  uStack_a8 = uVar6;
  if (param_3 == '\0') {
    if (uStack_d8 < uVar6) {
      pdb_142d7f1b0(&uStack_d8,0,uVar6,4,0x14);
    }
    else {
      uVar1 = 0;
      if (uVar6 == 0) goto LAB_140c2b379;
    }
    lVar4 = uStack_d0 + uStack_c8 * 0x14;
    lVar15 = 0;
    lVar13 = 0;
    uStack_140 = uStack_c8;
    do {
      lStack_148 = lVar13;
      pdb_140deead0(&uStack_138,*(undefined4 *)((longlong)puVar16 + lVar15),
                    *(undefined4 *)((longlong)puVar16 + lVar15 + 4),
                    *(undefined4 *)((longlong)puVar16 + lVar15 + 8),
                    *(undefined4 *)((longlong)puVar16 + lVar15 + 0xc));
      uStack_128._0_2_ = (ushort)*(byte *)((longlong)puVar16 + lVar15 + 0x10);
      puVar14 = (undefined4 *)(lVar4 + lVar15);
      *puVar14 = (float)uStack_138;
      puVar14[1] = uStack_138._4_4_;
      puVar14[2] = (float)uStack_130;
      puVar14[3] = uStack_130._4_4_;
      *(undefined4 *)(lVar4 + 0x10 + lVar15) = uStack_128;
      lVar13 = lStack_148 + -1;
      lVar15 = lVar15 + 0x14;
    } while (-lVar13 != uVar6);
    uVar1 = uStack_140 - lVar13;
LAB_140c2b379:
    uStack_c8 = uVar1;
    puStack_150 = &uStack_73;
    if (1 < uStack_c8) {
      if (uStack_c8 < 0x15) {
        pdb_14151bae0(uStack_d0,uStack_c8,1,&puStack_150);
      }
      else {
        pdb_140c76e50(uStack_d0,uStack_c8,&puStack_150);
      }
    }
    cStack_bc = cStack_71;
  }
  else {
    if (uVar6 != 0) {
      puVar14 = puVar16 + uVar6 * 5;
      do {
        while( true ) {
          pdb_140deead0(&uStack_138,*puVar16,puVar16[1],puVar16[2],puVar16[3]);
          uVar6 = uStack_c8;
          uVar5 = *(undefined1 *)(puVar16 + 4);
          if (uStack_c8 == uStack_d8) {
            pdb_142d8d5c0(&uStack_d8);
          }
          puVar3 = (undefined8 *)(uStack_d0 + uVar6 * 0x14);
          *puVar3 = uStack_138;
          puVar3[1] = uStack_130;
          *(undefined1 *)(uStack_d0 + 0x10 + uVar6 * 0x14) = uVar5;
          *(undefined1 *)(uStack_d0 + 0x11 + uVar6 * 0x14) = 0;
          uVar1 = uVar6 + 1;
          uStack_c8 = uVar1;
          if (0.0 <= (float)uStack_138) break;
          uStack_138._0_4_ = (float)uStack_138 + param_2;
          uStack_130._0_4_ = (float)uStack_130 + param_2;
joined_r0x000140c2b260:
          if (uVar1 == uStack_d8) {
            pdb_142d8d5c0(&uStack_d8);
          }
          puVar2 = (undefined4 *)(uStack_d0 + uVar1 * 0x14);
          *puVar2 = (float)uStack_138;
          puVar2[1] = uStack_138._4_4_;
          puVar2[2] = (float)uStack_130;
          puVar2[3] = uStack_130._4_4_;
          *(undefined1 *)(uStack_d0 + 0x10 + uVar1 * 0x14) = uVar5;
          *(undefined1 *)(uStack_d0 + 0x11 + uVar1 * 0x14) = 1;
          puVar16 = puVar16 + 5;
          uVar1 = uVar6 + 2;
          uStack_c8 = uVar6 + 2;
          if (puVar16 == puVar14) goto LAB_140c2b379;
        }
        if (param_2 < (float)uStack_130) {
          uStack_138._0_4_ = (float)uStack_138 - param_2;
          uStack_130._0_4_ = (float)uStack_130 - param_2;
          goto joined_r0x000140c2b260;
        }
        puVar16 = puVar16 + 5;
      } while (puVar16 != puVar14);
      goto LAB_140c2b379;
    }
    cStack_bc = '\x01';
  }
  param_1[0] = 1;
  param_1[1] = 0;
  *(longlong *)(param_1 + 0x16) = lStack_88;
  *(longlong *)(param_1 + 0x12) = lStack_98;
  *(longlong *)(param_1 + 0x14) = lStack_90;
  uStack_138._0_4_ = (float)uStack_d8;
  uStack_138._4_4_ = (int)(uStack_d8 >> 0x20);
  uStack_130._0_4_ = (float)uStack_d0;
  uStack_130._4_4_ = (int)((ulonglong)uStack_d0 >> 0x20);
  *(ulonglong *)(param_1 + 0xe) = uStack_a8;
  *(longlong *)(param_1 + 0x10) = lStack_a0;
  *(ulonglong *)(param_1 + 10) = CONCAT44(iStack_b4,iStack_b8);
  *(ulonglong *)(param_1 + 0xc) = CONCAT44(iStack_ac,iStack_b0);
  *(ulonglong *)(param_1 + 6) = uStack_c8;
  param_1[8] = (int)param_2;
  *(char *)(param_1 + 9) = cStack_bc;
  *(undefined2 *)((longlong)param_1 + 0x25) = uStack_bb;
  *(undefined1 *)((longlong)param_1 + 0x27) = uStack_b9;
LAB_140c2b452:
  param_1[2] = (int)(float)uStack_138;
  param_1[3] = uStack_138._4_4_;
  param_1[4] = (int)(float)uStack_130;
  param_1[5] = uStack_130._4_4_;
  return uStack_72;
}

