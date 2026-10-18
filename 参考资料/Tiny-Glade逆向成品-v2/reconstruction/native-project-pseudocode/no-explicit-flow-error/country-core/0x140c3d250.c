// VA 0x140c3d250, PDB extent 99 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::iter_walls_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::iter_walls_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 99 */

undefined8 * pdb_140c3d250(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x36) == '\0') {
    pauVar2 = (undefined1 (*) [16])*param_2;
    lVar3 = param_2[1];
    auVar1 = *pauVar2;
    *(ushort *)(param_1 + 3) =
         ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3
           | (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6
           | (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9
           | (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    *param_1 = pauVar2;
    param_1[1] = pauVar2 + 1;
    param_1[2] = *pauVar2 + lVar3 + 1;
    param_1[4] = param_2[3];
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306cbe0);
}

