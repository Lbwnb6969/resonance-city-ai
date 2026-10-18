// VA 0x14014dbd0, PDB extent 1130 bytes
// country_core::game_config::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_config::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 1130 */

char * pdb_14014dbd0(char *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  longlong lVar5;
  longlong alStack_c8 [2];
  undefined7 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  cVar1 = *(char *)(param_2 + 0x14);
  cVar2 = *(char *)(param_2 + 0x15);
  cVar3 = *(char *)(param_2 + 0x16);
  pdb_140141220(&uStack_88,param_3,&UNK_142e4a07f,0xc,
                (cVar1 == '\x06' ^ 0xbU) + (cVar3 != '\x06') + (cVar2 != '\x06'));
  if ((char)uStack_88 != '2') {
    uStack_b8 = (undefined7)(CONCAT44(uStack_74,uStack_78) >> 8);
    *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_47,uStack_48);
    *(ulonglong *)(param_1 + 0x30) = CONCAT71(uStack_57,uStack_58);
    *(ulonglong *)(param_1 + 0x38) = CONCAT71(uStack_4f,uStack_50);
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_67,uStack_68);
    *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_5f,uStack_60);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_b8,(undefined1)uStack_78);
    *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_6f,uStack_70);
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)uStack_80,CONCAT43(uStack_84,uStack_88._1_3_));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17((undefined1)uStack_78,CONCAT43(uStack_7c,uStack_80._1_3_));
    *param_1 = (char)uStack_88;
    return param_1;
  }
  uStack_98 = CONCAT71(uStack_6f,uStack_70);
  uStack_a8 = uStack_80;
  uStack_a4 = uStack_7c;
  uStack_a0 = uStack_78;
  uStack_9c = uStack_74;
  uStack_39 = 1;
  pdb_140133580(&uStack_88,&uStack_a8,&UNK_142e4a08b,0x1b,param_2);
  if ((char)uStack_88 == '2') {
    uStack_39 = 1;
    pdb_140133580(&uStack_88,&uStack_a8,&UNK_142e4a0a6,0x15,param_2 + 4);
    if ((char)uStack_88 == '2') {
      uStack_39 = 1;
      pdb_140136960(&uStack_88,&uStack_a8,&UNK_142e4a0bb,0xf,param_2 + 0x17);
      if ((char)uStack_88 == '2') {
        uStack_39 = 1;
        pdb_140136960(&uStack_88,&uStack_a8,&UNK_142e4a0ca,0xf,param_2 + 0x18);
        if ((char)uStack_88 == '2') {
          if (cVar1 != '\x06') {
            alStack_c8[0] = param_2 + 0x14;
            uStack_39 = 1;
            pdb_140138580(&uStack_88,&uStack_a8,&UNK_142e4a0d9,0x15,alStack_c8);
            if ((char)uStack_88 != '2') goto LAB_14014df8d;
          }
          if (cVar2 != '\x06') {
            alStack_c8[0] = param_2 + 0x15;
            uStack_39 = 1;
            pdb_140138580(&uStack_88,&uStack_a8,&UNK_142e4a0ee,0x1e,alStack_c8);
            if ((char)uStack_88 != '2') goto LAB_14014df8d;
          }
          if (cVar3 != '\x06') {
            alStack_c8[0] = param_2 + 0x16;
            uStack_39 = 1;
            pdb_140138580(&uStack_88,&uStack_a8,&UNK_142e4a10c,0x11,alStack_c8);
            if ((char)uStack_88 != '2') goto LAB_14014df8d;
          }
          uStack_39 = 1;
          pdb_140133580(&uStack_88,&uStack_a8,&UNK_142e4a11d,0x18,param_2 + 8);
          if ((char)uStack_88 == '2') {
            uStack_39 = 1;
            pdb_140133580(&uStack_88,&uStack_a8,&UNK_142e4a135,10,param_2 + 0xc);
            if ((char)uStack_88 == '2') {
              uStack_39 = 1;
              pdb_140133580(&uStack_88,&uStack_a8,&UNK_142e4a13f,9,param_2 + 0x10);
              if ((char)uStack_88 == '2') {
                uStack_39 = 1;
                pdb_140135d00(&uStack_88,&uStack_a8,&UNK_142e4a148,0x11,param_2 + 0x19);
                if ((char)uStack_88 == '2') {
                  uStack_39 = 1;
                  pdb_140136960(&uStack_88,&uStack_a8,&UNK_142e4a159,0x19,param_2 + 0x1a);
                  if ((char)uStack_88 == '2') {
                    uStack_39 = 1;
                    pdb_140136960(&uStack_88,&uStack_a8,&UNK_142e4a172,0x15,param_2 + 0x1b);
                    if ((char)uStack_88 == '2') {
                      uStack_78 = (undefined4)uStack_98;
                      uStack_74 = (undefined4)((ulonglong)uStack_98 >> 0x20);
                      uStack_88 = uStack_a8;
                      uStack_84 = uStack_a4;
                      uStack_80 = uStack_a0;
                      uStack_7c = uStack_9c;
                      uStack_39 = 0;
                      pdb_140140500(param_1,&uStack_88);
                      return param_1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14014df8d:
  *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_47,uStack_48);
  *(ulonglong *)(param_1 + 0x31) = CONCAT17(uStack_50,uStack_57);
  *(ulonglong *)(param_1 + 0x39) = CONCAT17(uStack_48,uStack_4f);
  *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_60,uStack_67);
  *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_58,uStack_5f);
  *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_70,CONCAT43(uStack_74,uStack_78._1_3_));
  *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_68,uStack_6f);
  *(ulonglong *)(param_1 + 1) = CONCAT17((undefined1)uStack_80,CONCAT43(uStack_84,uStack_88._1_3_));
  *(ulonglong *)(param_1 + 9) = CONCAT17((undefined1)uStack_78,CONCAT43(uStack_7c,uStack_80._1_3_));
  *param_1 = (char)uStack_88;
  piVar4 = (int *)CONCAT44(uStack_9c,uStack_a0);
  if (*piVar4 == 1) {
    lVar5 = -1;
    if (*(longlong *)(piVar4 + 2) + 1 != 0) {
      lVar5 = *(longlong *)(piVar4 + 2) + 1;
    }
    *(longlong *)(piVar4 + 2) = lVar5;
  }
  return param_1;
}

