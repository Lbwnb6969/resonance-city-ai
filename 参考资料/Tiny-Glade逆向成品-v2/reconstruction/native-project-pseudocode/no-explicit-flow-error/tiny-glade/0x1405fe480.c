// VA 0x1405fe480, PDB extent 806 bytes
// tiny_glade::logging::set_up_logging::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/logging.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::logging::set_up_logging::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/logging.rs
   Extent: 806 */

void pdb_1405fe480(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar1;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  code *pcStack_a0;
  undefined4 *puStack_98;
  code *pcStack_90;
  undefined4 *puStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ushort uStack_3c;
  byte bStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uStack_28 = 0xfffffffffffffffe;
  uStack_c0 = param_3;
  pdb_140e03700(&uStack_68);
  if (DAT_143cb2bd8 == '\x01') {
    pdb_140e03770(&uStack_48,&uStack_68,(ulonglong)CONCAT12(DAT_143cb2bdb,_DAT_143cb2bd9));
    pdb_1405cb140(&uStack_b8,&UNK_142f75c88,(undefined4)uStack_48,
                  CONCAT44(uStack_40,uStack_48._4_4_),
                  CONCAT44(uVar1,(uint)uStack_3c * 0x100 + (uint)bStack_3a * 0x1000000 + 1));
    if ((int)uStack_b8 == 1) {
      uStack_38 = pcStack_a0;
      uStack_48._0_4_ = (undefined4)uStack_b0;
      uStack_48._4_4_ = uStack_b0._4_4_;
      uStack_40 = puStack_a8._0_4_;
      uStack_3c = (ushort)((ulonglong)puStack_a8 >> 0x20);
      bStack_3a = (byte)((ulonglong)puStack_a8 >> 0x30);
      uStack_39 = (undefined1)((ulonglong)puStack_a8 >> 0x38);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f760d8,0x2b,&uStack_48,&UNK_142f76108,&UNK_142f75c98);
    }
  }
  else {
    pdb_1405cb140(&uStack_b8,&UNK_142f75e00,uStack_68,CONCAT44(uStack_60,uStack_64),
                  CONCAT44(uVar1,(uStack_5c & 0xffff) * 0x100 + (uStack_5c >> 0x10) * 0x1000000 + 1)
                 );
    if ((int)uStack_b8 == 1) {
      uStack_38 = pcStack_a0;
      uStack_48._0_4_ = (undefined4)uStack_b0;
      uStack_48._4_4_ = uStack_b0._4_4_;
      uStack_40 = puStack_a8._0_4_;
      uStack_3c = (ushort)((ulonglong)puStack_a8 >> 0x20);
      bStack_3a = (byte)((ulonglong)puStack_a8 >> 0x30);
      uStack_39 = (undefined1)((ulonglong)puStack_a8 >> 0x38);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f760d8,0x2b,&uStack_48,&UNK_142f76108,&UNK_142f75e10);
    }
  }
  uStack_38 = pcStack_a0;
  uStack_48._0_4_ = SUB84(uStack_b0,0);
  uStack_48._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  uStack_40 = SUB84(puStack_a8,0);
  uStack_3c = (ushort)((ulonglong)puStack_a8 >> 0x20);
  bStack_3a = (byte)((ulonglong)puStack_a8 >> 0x30);
  uStack_39 = (undefined1)((ulonglong)puStack_a8 >> 0x38);
  uStack_d8 = *(undefined4 *)(param_4 + 0x38);
  uStack_d4 = *(undefined4 *)(param_4 + 0x3c);
  uStack_d0 = *(undefined4 *)(param_4 + 0x40);
  uStack_cc = *(undefined4 *)(param_4 + 0x44);
  uStack_c8 = *(undefined8 *)(param_4 + 0x30);
  uStack_4c = *_DAT_143ca4440;
  uStack_b8 = &uStack_48;
  uStack_b0 = pdb_140001020;
  puStack_a8 = &uStack_c8;
  pcStack_a0 = pdb_140f332c0;
  puStack_98 = &uStack_d8;
  pcStack_90 = pdb_1402ed400;
  puStack_88 = &uStack_4c;
  pcStack_80 = pdb_140f71a50;
  puStack_78 = &uStack_c0;
  pcStack_70 = pdb_1403d7720;
  pdb_140f60760(&uStack_68,&UNK_142f75ae8,&uStack_b8);
  if (CONCAT44(uStack_48._4_4_,(undefined4)uStack_48) != 0) {
    pub_1406abac0((byte *)CONCAT17(uStack_39,CONCAT16(bStack_3a,CONCAT24(uStack_3c,uStack_40))),
                  CONCAT44(uStack_48._4_4_,(undefined4)uStack_48),1);
  }
  uStack_b8 = (undefined8 *)CONCAT44(uStack_64,uStack_68);
  uStack_b0 = (code *)CONCAT44(uStack_5c,uStack_60);
  puStack_a8 = (undefined8 *)uStack_58;
  uStack_40 = 0x40001020;
  uStack_3c = 1;
  bStack_3a = 0;
  uStack_39 = 0;
  uStack_48 = &uStack_b8;
  pdb_1407206c0(param_2,&UNK_142f758a6,&uStack_48);
  if (uStack_b8 != (undefined8 *)0x0) {
    pub_1406abac0((byte *)uStack_b0,(ulonglong)uStack_b8,1);
  }
  return;
}

