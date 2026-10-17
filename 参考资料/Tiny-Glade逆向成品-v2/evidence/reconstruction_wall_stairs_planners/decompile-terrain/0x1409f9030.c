// Matched PDB: country_core::systems::collision::world::Rapier::raycast_simple
// VA 0x1409f9030, PDB extent 719 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::systems::collision::world::Rapier::raycast_simple
   Extent: 719 bytes. No whole-program auto-analysis. */

void pdb_1409f9030(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,float param_6,uint param_7)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  undefined8 uStack_dc;
  float fStack_d4;
  longlong *plStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_a4;
  
  uStack_108 = param_5;
  fVar2 = *(float *)(param_3 + 1);
  uVar4 = *param_3;
  uVar5 = *(undefined8 *)((longlong)param_3 + 0xc);
  fVar3 = *(float *)((longlong)param_3 + 0x14);
  lVar15 = 0x20;
  uVar13 = 0;
  lVar11 = 0;
  uStack_110 = param_4;
  do {
    uVar9 = uVar13;
    do {
      if (lVar15 == 0x3cb0) {
        if (lVar11 == 0) {
          *(undefined1 *)param_1 = 0x11;
          return;
        }
        puVar10 = (ulonglong *)pdb_140cd4bd0(lVar11,uStack_12c,uStack_130);
        if (puVar10 == (ulonglong *)0x0) {
          pdb_142dc8150(&UNK_143033be0);
        }
        else {
          uVar12 = *puVar10 & 0xffffffff;
          if (((uVar12 < *(ulonglong *)(param_2 + 0x10)) &&
              (lVar11 = *(longlong *)(param_2 + 8), lVar11 != 0)) &&
             (*(uint *)(lVar11 + 0x20 + uVar12 * 0x28) == ((uint)(*puVar10 >> 0x20) | 1))) {
            puVar1 = (undefined8 *)(lVar11 + uVar12 * 0x28);
            param_1[2] = puVar1[2];
            uVar8 = puVar1[1];
            *param_1 = *puVar1;
            param_1[1] = uVar8;
            param_1[3] = CONCAT44((float)((ulonglong)uVar4 >> 0x20) +
                                  param_6 * (float)((ulonglong)uVar5 >> 0x20),
                                  (float)uVar4 + param_6 * (float)uVar5);
            *(float *)(param_1 + 4) = fVar2 + fVar3 * param_6;
            *(float *)((longlong)param_1 + 0x24) = param_6;
            return;
          }
        }
        pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033bf8);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar15 = lVar15 + 0x390;
      uVar13 = uVar9 + 1;
      uVar6 = uVar9 & 0x1f;
      uVar9 = uVar13;
    } while ((param_7 >> uVar6 & 1) == 0);
    lVar14 = param_2 + lVar15 + -0x390;
    puStack_c8 = &UNK_143033f98;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_a4 = 0;
    puStack_118 = param_1;
    lStack_100 = param_2;
    lStack_f8 = lVar14;
    puStack_f0 = &uStack_110;
    uStack_e8 = uVar4;
    fStack_e0 = fVar2;
    uStack_dc = uVar5;
    fStack_d4 = fVar3;
    plStack_d0 = &lStack_100;
    pdb_141a08930(&iStack_128,param_2 + -0x360 + lVar15,param_2 + 0x3d80,lVar14,&uStack_e8,param_6,1
                  ,&plStack_d0);
    param_1 = puStack_118;
    if (iStack_128 == 1) {
      uStack_12c = uStack_124;
      uStack_130 = uStack_120;
      lVar11 = lVar14;
      param_6 = fStack_11c;
    }
  } while( true );
}

