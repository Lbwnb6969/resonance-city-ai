// VA 0x140bcd640, PDB extent 766 bytes
// country_core::systems::wall::structure_outline::structure_outline::closure$1::closure$16
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::structure_outline::structure_outline::closure$1::closure$16
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
   Extent: 766 */

undefined8 *
pdb_140bcd640(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  float fVar4;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 uStack_70;
  ulonglong uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  float fStack_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
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
    pdb_140df4540(&uStack_100,param_2,*(undefined4 *)(param_2 + 8));
    pdb_140df4540(&uStack_d8,param_2);
    pbVar3 = pbStack_40;
    *(undefined4 *)(pbStack_40 + 8) = uStack_f8;
    *(undefined8 *)pbStack_40 = uStack_100;
    *(undefined8 *)(pbStack_40 + 0xc) = uStack_d8;
    *(undefined4 *)(pbStack_40 + 0x14) = (undefined4)uStack_d0;
    pdb_14007ee60();
    pbStack_c8 = pub_1406abab0(0x18,4);
    if (pbStack_c8 != (byte *)0x0) {
      *(undefined8 *)(pbStack_c8 + 0x10) = *(undefined8 *)(pbVar3 + 0x10);
      uVar2 = *(undefined8 *)(pbVar3 + 8);
      *(undefined8 *)pbStack_c8 = *(undefined8 *)pbVar3;
      *(undefined8 *)(pbStack_c8 + 8) = uVar2;
      uStack_5c = 0;
      uStack_64 = 0;
      uStack_7c = *(undefined4 *)(param_2 + 0x18);
      fStack_84 = *(float *)(param_2 + 0x10) * _DAT_142e3788c;
      fVar4 = 0.0;
      if (0.0 <= *(float *)(param_2 + 0x14)) {
        fVar4 = *(float *)(param_2 + 0x14);
      }
      fStack_58 = _DAT_142e36f28;
      if (fVar4 <= _DAT_142e36f28) {
        fStack_58 = fVar4;
      }
      uStack_d8 = 0x8000000000000002;
      uStack_d0 = 2;
      uStack_c0 = 2;
      uStack_a8 = _DAT_142e4e650;
      uStack_a4 = _UNK_142e4e654;
      uStack_a0 = _UNK_142e4e658;
      uStack_9c = _UNK_142e4e65c;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 1;
      uStack_80 = 0;
      uStack_78 = 1;
      uStack_70 = 0x100;
      uStack_6c = (ulonglong)(uint)_DAT_142e36f28;
      uStack_54 = 0;
      uStack_52 = 0;
      pdb_1409bba50(&uStack_100,&uStack_d8,param_3,param_4,param_5);
      *(undefined8 *)pbStack_48 = uStack_100;
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

