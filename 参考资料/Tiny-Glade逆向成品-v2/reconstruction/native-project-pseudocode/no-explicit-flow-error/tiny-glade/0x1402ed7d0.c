// VA 0x1402ed7d0, PDB extent 448 bytes
// rhapsody::raw::init::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody::raw::init::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 448 */

char * pdb_1402ed7d0(char *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined7 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140141220(&uStack_78,param_3,&UNK_142f38f69,0x16,2);
  if ((char)uStack_78 == '2') {
    uStack_98 = uStack_70;
    uStack_94 = uStack_6c;
    uStack_90 = uStack_68;
    uStack_8c = uStack_64;
    uStack_88 = uStack_60;
    uStack_21 = 1;
    pdb_140129c40(&uStack_78,&uStack_98,&UNK_142f38ecf,7,param_2 + 0x18);
    if ((char)uStack_78 == '2') {
      uStack_21 = 1;
      pdb_140132320(&uStack_78,&uStack_98,&UNK_142f38f7f,5,param_2);
      if ((char)uStack_78 == '2') {
        uStack_68 = (undefined4)uStack_88;
        uStack_64 = (undefined4)((ulonglong)uStack_88 >> 0x20);
        uStack_78 = uStack_98;
        uStack_74 = uStack_94;
        uStack_70 = uStack_90;
        uStack_6c = uStack_8c;
        uStack_21 = 0;
        pdb_140140500(param_1,&uStack_78);
        return param_1;
      }
    }
    *(undefined8 *)(param_1 + 0x40) = uStack_38;
    *(undefined8 *)(param_1 + 0x30) = uStack_48;
    *(undefined8 *)(param_1 + 0x38) = uStack_40;
    *(undefined8 *)(param_1 + 0x20) = uStack_58;
    *(undefined8 *)(param_1 + 0x28) = uStack_50;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_64,uStack_68);
    *(undefined8 *)(param_1 + 0x18) = uStack_60;
    *(ulonglong *)param_1 = CONCAT44(uStack_74,uStack_78);
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_6c,uStack_70);
    piVar1 = (int *)CONCAT44(uStack_8c,uStack_90);
    if (*piVar1 == 1) {
      lVar2 = -1;
      if (*(longlong *)(piVar1 + 2) + 1 != 0) {
        lVar2 = *(longlong *)(piVar1 + 2) + 1;
      }
      *(longlong *)(piVar1 + 2) = lVar2;
    }
  }
  else {
    uStack_a8 = (undefined7)(CONCAT44(uStack_64,uStack_68) >> 8);
    *(undefined8 *)(param_1 + 0x40) = uStack_38;
    *(undefined8 *)(param_1 + 0x30) = uStack_48;
    *(undefined8 *)(param_1 + 0x38) = uStack_40;
    *(undefined8 *)(param_1 + 0x20) = uStack_58;
    *(undefined8 *)(param_1 + 0x28) = uStack_50;
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_a8,(undefined1)uStack_68);
    *(undefined8 *)(param_1 + 0x18) = uStack_60;
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,uStack_78._1_3_));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
    *param_1 = (char)uStack_78;
  }
  return param_1;
}

