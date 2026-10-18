// VA 0x140bc05d0, PDB extent 1139 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::glade_color_customization::GladeColorCustomization>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::glade_color_customization::GladeColorCustomization>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 1139 */

ulonglong * pdb_140bc05d0(ulonglong *param_1,longlong param_2)

{
  code *pcVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  ulonglong *puStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  ulonglong uStack_40;
  undefined2 uStack_38;
  ulonglong **ppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(0x80,1);
  if (pbStack_48 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
    pcVar1 = (code *)swi(3);
    puVar3 = (ulonglong *)(*pcVar1)();
    return puVar3;
  }
  uStack_50 = 0x80;
  puStack_58 = &uStack_50;
  *pbStack_48 = 0x7b;
  uStack_40 = 1;
  uStack_38 = 0x100;
  ppuStack_30 = &puStack_58;
  pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_143062809,0xd,param_2 + 0x28);
  if (pbVar2 == (byte *)0x0) {
    if ((char)uStack_38 == '\0') {
      pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_143062816,8,param_2 + 0x2c);
      if (pbVar2 == (byte *)0x0) {
        if ((char)uStack_38 != '\0') goto LAB_140bc065e;
        pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_14306281e,0xb,param_2 + 0x30);
        if (pbVar2 == (byte *)0x0) {
          if ((char)uStack_38 != '\0') goto LAB_140bc065e;
          pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_143062829,0x10,param_2 + 0x34);
          if (pbVar2 == (byte *)0x0) {
            if ((char)uStack_38 != '\0') goto LAB_140bc065e;
            pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_143062839,4,param_2 + 0x38);
            if (((((pbVar2 == (byte *)0x0) &&
                  (pbVar2 = (byte *)pdb_140bc0b50(&uStack_38,param_2 + 0x5f), pbVar2 == (byte *)0x0)
                  ) && (pbVar2 = (byte *)pdb_140bc0bb0(&uStack_38,param_2 + 0x60),
                       pbVar2 == (byte *)0x0)) &&
                ((pbVar2 = (byte *)pdb_140bc0b30(&uStack_38,param_2 + 0x3c), pbVar2 == (byte *)0x0
                 && (pbVar2 = (byte *)pdb_140bc0b10(&uStack_38,param_2 + 0x5c),
                    pbVar2 == (byte *)0x0)))) &&
               (pbVar2 = (byte *)pdb_140bc0bf0(&uStack_38,param_2 + 0x5d), pbVar2 == (byte *)0x0)) {
              if ((char)uStack_38 != '\0') goto LAB_140bc065e;
              pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_143062886,10,param_2 + 0x40);
              if (pbVar2 == (byte *)0x0) {
                if ((char)uStack_38 != '\0') goto LAB_140bc065e;
                pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_143062890,0xd,param_2 + 0x44);
                if (pbVar2 == (byte *)0x0) {
                  if ((char)uStack_38 != '\0') goto LAB_140bc065e;
                  pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_14306289d,6,param_2 + 0x48);
                  if (pbVar2 == (byte *)0x0) {
                    if ((char)uStack_38 != '\0') goto LAB_140bc065e;
                    pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_1430628a3,0xc,param_2 + 0x4c);
                    if (pbVar2 == (byte *)0x0) {
                      if ((char)uStack_38 != '\0') goto LAB_140bc065e;
                      pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_1430628af,4,param_2 + 0x50);
                      if (pbVar2 == (byte *)0x0) {
                        if ((char)uStack_38 != '\0') goto LAB_140bc065e;
                        pbVar2 = (byte *)pdb_141b7a830(&uStack_38,&UNK_1430628b3,7,param_2);
                        if (pbVar2 == (byte *)0x0) {
                          if ((char)uStack_38 != '\0') goto LAB_140bc065e;
                          pbVar2 = (byte *)pdb_141b7dc80(&uStack_38,&UNK_1430628ba,5,param_2 + 0x54)
                          ;
                          if (((pbVar2 == (byte *)0x0) &&
                              (pbVar2 = (byte *)pdb_140bc0c10(&uStack_38,param_2 + 0x5e),
                              pbVar2 == (byte *)0x0)) &&
                             (pbVar2 = (byte *)pdb_140bc0a90(&uStack_38,param_2 + 0x1c),
                             pbVar2 == (byte *)0x0)) {
                            if ((char)uStack_38 != '\0') goto LAB_140bc065e;
                            pbVar2 = (byte *)pdb_141b82660(&uStack_38,&UNK_143062416,0x12,
                                                           param_2 + 0x58);
                            if ((pbVar2 == (byte *)0x0) &&
                               (pbVar2 = (byte *)pdb_140bc0b70(&uStack_38,param_2 + 8),
                               pbVar2 == (byte *)0x0)) {
                              if (((uStack_38 & 1) == 0) && (uStack_38._1_1_ != '\0')) {
                                pdb_140172c20(*ppuStack_30,&UNK_143062635,1);
                              }
                              pbVar2 = pbStack_48;
                              if (!SBORROW8(0,uStack_50)) {
                                *param_1 = uStack_50;
                                param_1[1] = (ulonglong)pbStack_48;
                                param_1[2] = uStack_40;
                                return param_1;
                              }
                              goto LAB_140bc06a4;
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
        }
      }
    }
    else {
LAB_140bc065e:
      pbVar2 = (byte *)pdb_142db8610();
    }
  }
  if (uStack_50 != 0) {
    pub_1406abac0(pbStack_48,uStack_50,1);
  }
LAB_140bc06a4:
  param_1[1] = (ulonglong)pbVar2;
  *param_1 = 0x8000000000000000;
  return param_1;
}

