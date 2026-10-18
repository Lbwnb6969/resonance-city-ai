// VA 0x140b51420, PDB extent 486 bytes
// country_core::systems::ui_move_shapes::move_gizmo_and_trigger_vol::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_shapes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_move_shapes::move_gizmo_and_trigger_vol::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_shapes.rs
   Extent: 486 */

undefined8 *
pdb_140b51420(undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 auStack_f0 [5];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float *pfStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  ulonglong uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined2 uStack_44;
  undefined1 uStack_42;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(8,8);
  if (pbStack_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pfStack_b8 = (float *)pub_1406abab0(0x18,4);
  if (pfStack_b8 != (float *)0x0) {
    fVar4 = *param_2;
    fVar6 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    fVar5 = param_2[2];
    *pfStack_b8 = fVar4;
    pfStack_b8[1] = fVar6;
    pfStack_b8[2] = fVar2;
    pfStack_b8[3] = fVar3;
    uVar1 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(pfStack_b8 + 4) = uVar1;
    uStack_4c = 0x3f80000000000000;
    uStack_54 = 0;
    fVar6 = fVar6 - (float)uVar1;
    fVar5 = fVar5 - (float)((ulonglong)uVar1 >> 0x20);
    fVar4 = fVar4 - fVar3;
    fStack_74 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
    uStack_c8 = 0x8000000000000002;
    uStack_c0 = 2;
    uStack_b0 = 2;
    uStack_98 = _DAT_142e4e650;
    uStack_94 = _UNK_142e4e654;
    uStack_90 = _UNK_142e4e658;
    uStack_8c = _UNK_142e4e65c;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 1;
    uStack_70 = 0x3f80000000000000;
    uStack_68 = 1;
    uStack_60 = 0x100;
    uStack_5c = (ulonglong)_DAT_142e36f28;
    uStack_44 = 0;
    uStack_42 = 0;
    pdb_1409bba50(auStack_f0,&uStack_c8,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = auStack_f0[0];
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x18);
}

