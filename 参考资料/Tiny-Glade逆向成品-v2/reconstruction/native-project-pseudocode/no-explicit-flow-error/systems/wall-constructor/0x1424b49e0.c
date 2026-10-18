// VA 0x1424b49e0, PDB extent 936 bytes
// system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::add_wooden_riser
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::add_wooden_riser
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
   Extent: 936 */

void pdb_1424b49e0(int *param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined4 param_6,undefined4 param_7,longlong param_8,longlong *param_9)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [224];
  
  fVar10 = _DAT_142f57bcc;
  fVar12 = (float)((uint)(param_2 - param_4) & _DAT_142e377e0) + *(float *)(param_8 + 0x14);
  if (_DAT_142e37848 < fVar12) {
    fVar9 = param_3 + param_5 * _DAT_142e36f50 + *(float *)(param_8 + 0x10);
    fVar11 = param_4;
    if (param_2 <= param_4) {
      fVar11 = param_2;
    }
    fVar11 = (float)(~-(uint)NAN(param_2) & (uint)fVar11 | -(uint)NAN(param_2) & (uint)param_4) -
             *(float *)(param_8 + 0x14);
    if (*param_1 == 0) {
      pdb_1424b6de0(param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],fVar9,fVar11,
                    *(undefined4 *)(param_8 + 0xc),fVar12,param_6,param_7,param_9);
    }
    else if (*param_1 == 1) {
      fVar13 = (float)param_1[1] * _DAT_142f57bcc;
      fVar7 = (float)pdb_141c40430(param_1 + 6);
      fVar2 = (float)param_1[5];
      fVar8 = fVar2;
      if (fVar2 <= _DAT_142e37848) {
        fVar8 = _DAT_142e37848;
      }
      fVar14 = (*(float *)(param_8 + 8) / fVar8) * _DAT_142e36f50;
      fVar13 = (fVar13 - fVar7) - fVar14;
      fVar8 = (float)param_1[2];
      fVar7 = (float)pdb_141c40430(param_1 + 6);
      fVar7 = fVar8 * fVar10 - fVar7;
      uVar6 = -(uint)(fVar7 < fVar13);
      pdb_140df4540(auStack_118,param_1 + 3,fVar11);
      pdb_140aaa9f0(&uStack_168,auStack_118,fVar9 + fVar2,*(undefined4 *)(param_8 + 0xc),fVar12,
                    fVar13,(float)(~uVar6 & (uint)fVar7 | (uint)(fVar10 + fVar7) & uVar6) + fVar14,3
                   );
      pdb_140aaac40(auStack_118,&uStack_168,param_6);
      pdb_140aaa7d0(&uStack_168,auStack_118,param_7);
      lVar3 = param_9[2];
      if (lVar3 == *param_9) {
        pdb_142d8db00(param_9);
      }
      lVar4 = param_9[1];
      lVar5 = lVar3 * 0x50;
      puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar5);
      *puVar1 = uStack_128;
      puVar1[1] = uStack_120;
      puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar5);
      *puVar1 = uStack_138;
      puVar1[1] = uStack_130;
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5);
      *puVar1 = uStack_148;
      puVar1[1] = uStack_140;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5);
      *puVar1 = uStack_158;
      puVar1[1] = uStack_150;
      *(undefined8 *)(lVar4 + lVar5) = uStack_168;
      ((undefined8 *)(lVar4 + lVar5))[1] = uStack_160;
      param_9[2] = lVar3 + 1;
    }
    else {
      fVar10 = fVar9 * (float)param_1[5];
      fVar9 = fVar9 * (float)param_1[6];
      pdb_1424b6730((float)param_1[1] + fVar10,(float)param_1[2] + fVar9,fVar10 + (float)param_1[3],
                    fVar9 + (float)param_1[4],param_1[5],param_1[6],fVar11,
                    *(undefined4 *)(param_8 + 0xc),fVar12,*(undefined4 *)(param_8 + 8),param_6,
                    param_7,param_9);
    }
  }
  return;
}

