// VA 0x140dee3a0, PDB extent 538 bytes
// utils::file::date_time_string_for_filename
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/file.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::file::date_time_string_for_filename
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/file.rs
   Extent: 538 */

undefined8 * pdb_140dee3a0(undefined8 *param_1)

{
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar1;
  int iStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined8 uStack_18;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uStack_18 = 0xfffffffffffffffe;
  pdb_140e03700(&iStack_58);
  if ((_DAT_143cb2ddc & 1) == 0) {
    iStack_28 = iStack_58;
    uStack_24 = uStack_54;
    iStack_20 = iStack_50;
    uStack_1c = uStack_4c;
  }
  else {
    iStack_88 = iStack_58;
    uStack_84 = uStack_54;
    iStack_80 = iStack_50;
    uStack_7c = uStack_4c;
    pdb_140e03770(&iStack_28,&iStack_88,_DAT_143cb2ddc >> 8);
  }
  pdb_141e3aa90(&iStack_58,&UNK_1431ff5e0,0x2d);
  if (iStack_58 == 7) {
    iStack_a8 = iStack_50;
    uStack_a4 = uStack_4c;
    uStack_a0 = uStack_48;
    uStack_9c = uStack_44;
    pdb_141e3ac70(&iStack_88,&iStack_a8,iStack_28,CONCAT44(iStack_20,uStack_24),
                  CONCAT44(uVar1,(uStack_1c & 0xffff) * 0x100 + (uStack_1c >> 0x10) * 0x1000000 + 1)
                 );
    if (iStack_88 != 1) {
      param_1[2] = CONCAT44(uStack_6c,uStack_70);
      *param_1 = CONCAT44(uStack_7c,iStack_80);
      param_1[1] = CONCAT44(uStack_74,uStack_78);
      if (CONCAT44(uStack_a4,iStack_a8) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,iStack_a8) * 0x18,8);
      }
      return param_1;
    }
    iStack_58 = iStack_80;
    uStack_54 = uStack_7c;
    iStack_50 = uStack_78;
    uStack_4c = uStack_74;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1431ff590,0x2b,&iStack_58,&UNK_1431ff570,&UNK_1431ff640);
  }
  uStack_68 = uStack_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  uStack_78 = uStack_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  iStack_88 = iStack_58;
  uStack_84 = uStack_54;
  iStack_80 = iStack_50;
  uStack_7c = uStack_4c;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1431ff590,0x2b,&iStack_88,&UNK_1431ff5c0,&UNK_1431ff628);
}

