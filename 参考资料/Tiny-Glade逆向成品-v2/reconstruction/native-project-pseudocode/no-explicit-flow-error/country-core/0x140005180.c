// VA 0x140005180, PDB extent 560 bytes
// country_core::resources::audio_settings::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::audio_settings::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_settings.rs
   Extent: 560 */

char * pdb_140005180(char *param_1,longlong param_2,undefined8 param_3)

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
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140141220(&uStack_78,param_3,&UNK_142e333f0,0xd,4);
  if ((char)uStack_78 == '2') {
    uStack_88 = CONCAT71(uStack_5f,uStack_60);
    uStack_98 = uStack_70;
    uStack_94 = uStack_6c;
    uStack_90 = uStack_68;
    uStack_8c = uStack_64;
    uStack_21 = 1;
    pdb_140133580(&uStack_78,&uStack_98,&UNK_142e333fd,0xd,param_2);
    if ((char)uStack_78 == '2') {
      uStack_21 = 1;
      pdb_140133580(&uStack_78,&uStack_98,&UNK_142e3340a,0xc,param_2 + 4);
      if ((char)uStack_78 == '2') {
        uStack_21 = 1;
        pdb_140133580(&uStack_78,&uStack_98,&UNK_142e33416,10,param_2 + 8);
        if ((char)uStack_78 == '2') {
          uStack_21 = 1;
          pdb_140133580(&uStack_78,&uStack_98,&UNK_142e33420,0xf,param_2 + 0xc);
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
      }
    }
    *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_37,uStack_38);
    *(ulonglong *)(param_1 + 0x31) = CONCAT17(uStack_40,uStack_47);
    *(ulonglong *)(param_1 + 0x39) = CONCAT17(uStack_38,uStack_3f);
    *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_50,uStack_57);
    *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_48,uStack_4f);
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_60,CONCAT43(uStack_64,uStack_68._1_3_));
    *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_58,uStack_5f);
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,uStack_78._1_3_));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
    *param_1 = (char)uStack_78;
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
    *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_37,uStack_38);
    *(ulonglong *)(param_1 + 0x30) = CONCAT71(uStack_47,uStack_48);
    *(ulonglong *)(param_1 + 0x38) = CONCAT71(uStack_3f,uStack_40);
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_57,uStack_58);
    *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_4f,uStack_50);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_a8,(undefined1)uStack_68);
    *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_5f,uStack_60);
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,uStack_78._1_3_));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
    *param_1 = (char)uStack_78;
  }
  return param_1;
}

