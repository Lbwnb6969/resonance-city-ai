// VA 0x140c41900, PDB extent 123 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::all_decorators
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::all_decorators
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 123 */

void pdb_140c41900(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  pauVar2 = (undefined1 (*) [16])*param_2;
  lVar3 = param_2[1];
  auVar1 = *pauVar2;
  *(ushort *)(param_1 + 7) =
       ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
         (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
         (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
         (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
         (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
         (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
         (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
         (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
         (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
         (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  param_1[4] = pauVar2;
  param_1[5] = pauVar2 + 1;
  param_1[6] = *pauVar2 + lVar3 + 1;
  param_1[8] = param_2[3];
  puVar4 = param_2 + 0x18;
  if (param_2[0x18] == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  puVar5 = param_2 + 0x2a;
  if (param_2[0x2a] == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  param_1[2] = 1;
  param_1[3] = puVar4;
  *param_1 = 1;
  param_1[1] = puVar5;
  return;
}

