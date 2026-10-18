// VA 0x140ae06e0, PDB extent 753 bytes
// country_core::systems::wall::deferred_wall_history::PendingWallChanged::try_new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/deferred_wall_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::deferred_wall_history::PendingWallChanged::try_new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/deferred_wall_history.rs
   Extent: 753 */

undefined8 *
pdb_140ae06e0(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             char param_5)

{
  byte *pbVar1;
  byte *arg0;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
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
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plStack_70 = param_3;
  plStack_68 = param_4;
  if (param_3[2] == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14304f138,0x2a,&UNK_14304f168);
  }
  if (param_4[2] == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14304f0f0,0x29,&UNK_14304f120);
  }
  arg0 = (byte *)param_3[1];
  if (param_5 == '\0') {
    pbVar1 = arg0 + param_3[2] * 8;
    if (pbVar1 == (byte *)0x8) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14304f0a8);
    }
    fVar6 = (float)pdb_1419aaa60(param_4,*(undefined4 *)(pbVar1 + -8),*(undefined4 *)(pbVar1 + -4),
                                 &UNK_14304f0c0);
    fVar5 = 0.0;
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar6 = _DAT_142e36f28;
    if (fVar7 <= _DAT_142e36f28) {
      fVar6 = fVar7;
    }
    if (fVar6 <= 0.0) goto LAB_140ae089f;
  }
  else {
    fVar5 = (float)pdb_1419aaa60(param_4,*(undefined4 *)arg0,*(undefined4 *)(arg0 + 4),
                                 &UNK_14304f0d8);
    fVar7 = 0.0;
    if (0.0 <= fVar5) {
      fVar7 = fVar5;
    }
    fVar5 = _DAT_142e36f28;
    if (fVar7 <= _DAT_142e36f28) {
      fVar5 = fVar7;
    }
    fVar6 = _DAT_142e36f28;
    if (_DAT_142e36f28 <= fVar5) {
LAB_140ae089f:
      plVar4 = plStack_68;
      plVar3 = plStack_70;
      *param_1 = 0x8000000000000000;
      if (*plStack_68 != 0) {
        pub_1406abac0((byte *)plStack_68[1],*plStack_68 << 3,4);
      }
      lVar2 = plVar4[3];
      if (lVar2 != 0) {
        pub_1406abac0((byte *)plVar4[4],lVar2 << 2,4);
      }
      if (*plVar3 != 0) {
        pub_1406abac0(arg0,*plVar3 << 3,4);
      }
      if (plVar3[3] == 0) {
        return param_1;
      }
      pub_1406abac0((byte *)plVar3[4],plVar3[3] << 2,4);
      return param_1;
    }
  }
  lStack_f8 = plStack_70[0xc];
  lStack_f0 = plStack_70[0xd];
  lStack_108 = plStack_70[10];
  lStack_100 = plStack_70[0xb];
  lStack_118 = plStack_70[8];
  lStack_110 = plStack_70[9];
  lStack_158 = *plStack_70;
  lStack_150 = plStack_70[1];
  lStack_148 = plStack_70[2];
  lStack_140 = plStack_70[3];
  lStack_138 = plStack_70[4];
  lStack_130 = plStack_70[5];
  lStack_128 = plStack_70[6];
  lStack_120 = plStack_70[7];
  lStack_e8 = *plStack_68;
  lStack_e0 = plStack_68[1];
  uStack_d8 = (undefined4)plStack_68[2];
  uStack_d4 = *(undefined4 *)((longlong)plStack_68 + 0x14);
  uStack_d0 = (undefined4)plStack_68[3];
  uStack_cc = *(undefined4 *)((longlong)plStack_68 + 0x1c);
  uStack_c8 = (undefined4)plStack_68[4];
  uStack_c4 = *(undefined4 *)((longlong)plStack_68 + 0x24);
  uStack_c0 = (undefined4)plStack_68[5];
  uStack_bc = *(undefined4 *)((longlong)plStack_68 + 0x2c);
  uStack_b8 = (undefined4)plStack_68[6];
  uStack_b4 = *(undefined4 *)((longlong)plStack_68 + 0x34);
  uStack_b0 = (undefined4)plStack_68[7];
  uStack_ac = *(undefined4 *)((longlong)plStack_68 + 0x3c);
  lStack_a8 = plStack_68[8];
  lStack_a0 = plStack_68[9];
  lStack_98 = plStack_68[10];
  lStack_90 = plStack_68[0xb];
  uStack_88 = (undefined4)plStack_68[0xc];
  uStack_84 = *(undefined4 *)((longlong)plStack_68 + 100);
  uStack_80 = (undefined4)plStack_68[0xd];
  uStack_7c = *(undefined4 *)((longlong)plStack_68 + 0x6c);
  pub_142e32760(param_1,&lStack_158,0xe0);
  param_1[0x1c] = param_2;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(float *)((longlong)param_1 + 0xec) = fVar5;
  *(float *)(param_1 + 0x1e) = fVar6;
  return param_1;
}

