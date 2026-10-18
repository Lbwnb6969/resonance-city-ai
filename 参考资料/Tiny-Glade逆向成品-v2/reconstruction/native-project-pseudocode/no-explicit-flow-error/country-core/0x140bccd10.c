// VA 0x140bccd10, PDB extent 782 bytes
// country_core::systems::wall::structure_outline::structure_outline::closure$1::closure$14
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::structure_outline::structure_outline::closure$1::closure$14
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
   Extent: 782 */

undefined8 *
pdb_140bccd10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  float fVar4;
  undefined8 auStack_110 [5];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_80;
  ulonglong uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  float fStack_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(8,8);
  if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_40 = pub_1406abab0(0x18,4);
  if (pbStack_40 != (byte *)0x0) {
    uStack_50 = *(undefined4 *)param_2;
    uStack_4c = *(undefined4 *)(param_2 + 1);
    pdb_140df4540(&uStack_e8,&uStack_50);
    pbVar3 = pbStack_40;
    *(undefined4 *)(pbStack_40 + 8) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)pbStack_40 = *param_2;
    *(undefined8 *)(pbStack_40 + 0xc) = uStack_e8;
    *(undefined4 *)(pbStack_40 + 0x14) = (undefined4)uStack_e0;
    pdb_14007ee60();
    pbStack_d8 = pub_1406abab0(0x18,4);
    if (pbStack_d8 != (byte *)0x0) {
      *(undefined8 *)(pbStack_d8 + 0x10) = *(undefined8 *)(pbVar3 + 0x10);
      uVar2 = *(undefined8 *)(pbVar3 + 8);
      *(undefined8 *)pbStack_d8 = *(undefined8 *)pbVar3;
      *(undefined8 *)(pbStack_d8 + 8) = uVar2;
      uStack_6c = 0;
      uStack_74 = 0;
      uStack_8c = *(undefined4 *)(param_2 + 3);
      fStack_94 = *(float *)(param_2 + 2) * _DAT_142e3788c;
      fVar4 = 0.0;
      if (0.0 <= *(float *)((longlong)param_2 + 0x14)) {
        fVar4 = *(float *)((longlong)param_2 + 0x14);
      }
      fStack_68 = _DAT_142e36f28;
      if (fVar4 <= _DAT_142e36f28) {
        fStack_68 = fVar4;
      }
      uStack_e8 = 0x8000000000000002;
      uStack_e0 = 2;
      uStack_d0 = 2;
      uStack_b8 = _DAT_142e4e650;
      uStack_b4 = _UNK_142e4e654;
      uStack_b0 = _UNK_142e4e658;
      uStack_ac = _UNK_142e4e65c;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 1;
      uStack_90 = 0;
      uStack_88 = 1;
      uStack_80 = 0x100;
      uStack_7c = (ulonglong)(uint)_DAT_142e36f28;
      uStack_64 = 0;
      uStack_62 = 0;
      pdb_1409bba50(auStack_110,&uStack_e8,param_3,param_4,param_5);
      *(undefined8 *)pbStack_48 = auStack_110[0];
      *param_1 = 1;
      param_1[1] = pbStack_48;
      param_1[2] = 1;
      pub_1406abac0(pbStack_40,0x18,4);
      return param_1;
    }
    pdb_142dc7e2a(4,0x18);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x18);
}

