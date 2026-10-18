// VA 0x140901640, PDB extent 153 bytes
// country_core::resources::walls::decorator::DecoratorRotationXZ::from_quat
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorRotationXZ::from_quat
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 153 */

void pdb_140901640(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar7 = fVar4 * fVar4;
  fVar8 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar6 = _UNK_142e37b08 * fVar3 + _UNK_142e37b04 * fVar2 + _DAT_142e37b00 * fVar1;
  fVar6 = fVar6 + fVar6;
  fVar5 = fVar4 + fVar4;
                    /* WARNING: Could not recover jumptable at 0x000142e32980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  atan2f((uint)(fVar5 * (fVar2 * _DAT_142e37b10 - fVar3 * _DAT_142e377a0) +
               fVar6 * fVar1 + (fVar7 - (fVar8 + fVar3 * fVar3)) * _DAT_142e37af0) ^ _DAT_142e37820,
         CONCAT44((uint)(fVar5 * (fVar4 * _UNK_142e37b1c - fVar4 * _UNK_142e377ac) +
                        fVar6 * fVar4 + (fVar7 - (fVar8 + fVar7)) * _UNK_142e37afc) ^ _UNK_142e37824
                  ,(uint)(fVar5 * (fVar1 * _UNK_142e37b18 - fVar2 * _UNK_142e377a8) +
                         fVar6 * fVar3 + (fVar7 - (fVar8 + fVar3 * fVar3)) * _UNK_142e37af8) ^
                   _DAT_142e37820));
  return;
}

