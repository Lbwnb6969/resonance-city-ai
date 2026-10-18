// VA 0x140827df0, PDB extent 977 bytes
// system_wall_constructor::construct_playermade_stairs::wooden_supports::plan_braces_to_attachment_tops
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::wooden_supports::plan_braces_to_attachment_tops
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
   Extent: 977 */

void pdb_140827df0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6)

{
  float *pfVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  longlong lStack_138;
  byte *pbStack_130;
  ulonglong uStack_128;
  undefined8 uStack_120;
  float fStack_118;
  undefined8 uStack_110;
  float fStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  byte *pbStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  
  fVar5 = _DAT_142e3b1d8;
  uStack_90 = 0xfffffffffffffffe;
  fVar12 = *(float *)(param_2 + 0x3c);
  if (fVar12 < _DAT_143009d08 !=
      (*(float *)(param_3 + 0x3c) <= _DAT_143009d08 && _DAT_143009d08 != *(float *)(param_3 + 0x3c))
     ) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return;
  }
  uStack_110 = CONCAT44(*(float *)(param_2 + 0x10) -
                        (float)((ulonglong)*(undefined8 *)(param_2 + 0x24) >> 0x20),
                        *(float *)(param_2 + 4) - (float)*(undefined8 *)(param_2 + 0x24));
  fStack_108 = *(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x2c);
  puVar6 = (ulonglong *)&UNK_143009ee0;
  if (fVar12 < _DAT_143009d08) {
    puVar6 = (ulonglong *)&UNK_143009ef0;
  }
  lStack_a8 = 0;
  lStack_a0 = 8;
  lStack_98 = 0;
  puVar9 = puVar6 + (ulonglong)(_DAT_143009d08 <= fVar12) + 1;
  lStack_b8 = 8;
  lVar8 = 0;
  fVar12 = (float)_DAT_143009d40;
  uVar4 = (ulonglong)_DAT_143009d40 >> 0x20;
  do {
    do {
      puVar7 = puVar6;
      if (puVar7 == puVar9) {
        param_1[2] = lStack_98;
        *param_1 = lStack_a8;
        param_1[1] = lStack_a0;
        return;
      }
      uVar3 = *puVar7;
      if (2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar3,3,&UNK_14300a090);
      }
      pfVar1 = (float *)((longlong)&uStack_110 + uVar3 * 4);
      puVar6 = puVar7 + 1;
    } while ((*pfVar1 <= fVar5 && fVar5 != *pfVar1) || (*(int *)(param_4 + uVar3 * 0x10) != 1));
    lVar10 = uVar3 * 0x10 + param_4;
    fStack_118 = *(float *)(lVar10 + 0xc) + 0.0;
    lVar11 = uVar3 * 0xc;
    uStack_c0 = *(undefined4 *)(param_2 + 8 + lVar11);
    uStack_c8 = *(undefined8 *)(param_2 + lVar11);
    uStack_bc = *(undefined4 *)(param_2 + 0x24 + uVar3 * 4);
    pbStack_e8 = *(byte **)(param_3 + lVar11);
    uStack_e0 = (byte *)CONCAT44(*(undefined4 *)(param_3 + 0x24 + uVar3 * 4),
                                 *(undefined4 *)(param_3 + 8 + lVar11));
    uVar2 = *(undefined8 *)(lVar10 + 4);
    uStack_120 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)uVar4,(float)uVar2 + fVar12);
    lStack_100 = param_3;
    lStack_f8 = lVar8;
    pdb_140c99db0(&lStack_138,&uStack_c8,&pbStack_e8,&uStack_120,param_5,param_6);
    uVar3 = uStack_128;
    lVar11 = uStack_128 * 0x20;
    pbStack_d0 = pbStack_130 + lVar11;
    pbStack_e8 = pbStack_130;
    lStack_f0 = lStack_138;
    lStack_d8 = lStack_138;
    pbStack_b0 = pbStack_130;
    uStack_e0 = pbStack_130;
    if ((ulonglong)(lStack_a8 - lStack_f8) < uStack_128) {
      pdb_142d7f1b0(&lStack_a8,lStack_f8,uStack_128,8,0x20);
      lStack_b8 = lStack_a0;
      lVar8 = lStack_98;
LAB_140828010:
      pub_142e32760(lVar8 * 0x20 + lStack_b8,pbStack_b0,lVar11);
    }
    else {
      lVar8 = lStack_f8;
      if (uStack_128 != 0) goto LAB_140828010;
    }
    lVar8 = lVar8 + uVar3;
    lStack_98 = lVar8;
    if (lStack_f0 != 0) {
      pub_1406abac0(pbStack_b0,lStack_f0 << 5,8);
    }
    puVar6 = puVar7 + 1;
    param_3 = lStack_100;
  } while( true );
}

