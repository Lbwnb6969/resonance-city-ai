// VA 0x140184590, PDB extent 1210 bytes
// country_core::game_key_bindings::_::impl$0::deserialize<ref_mut$<ron::de::tag::Deserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::deserialize<ref_mut$<ron::de::tag::Deserializer> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 1210 */

undefined8 * pdb_140184590(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_bd0 [904];
  longlong lStack_848;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined1 auStack_7f8 [904];
  char cStack_470;
  undefined7 uStack_46f;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined1 auStack_420 [904];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_1402cda70(&cStack_470,*param_2);
  if (cStack_470 == '2') {
    uStack_98 = uStack_468;
    uStack_94 = uStack_464;
    uStack_90 = uStack_460;
    uStack_8c = uStack_45c;
    uStack_88 = uStack_458;
    uStack_84 = uStack_454;
    uStack_80 = uStack_450;
    uStack_7c = uStack_44c;
    pdb_14045d670(&cStack_470,&uStack_98,&UNK_142e50ab8,0xd,&UNK_142e50b00,0x29);
    if (SBORROW8(0,CONCAT71(uStack_46f,cStack_470))) {
      uStack_800 = uStack_428;
      uStack_818 = CONCAT44(uStack_43c,uStack_440);
      uStack_810 = CONCAT44(uStack_434,uStack_438);
      uStack_808 = CONCAT44(uStack_42c,uStack_430);
      uStack_820 = uStack_448;
      uStack_81c = uStack_444;
      uStack_830 = uStack_458;
      uStack_82c = uStack_454;
      uStack_828 = uStack_450;
      uStack_824 = uStack_44c;
      uStack_840 = uStack_468;
      uStack_83c = uStack_464;
      uStack_838 = uStack_460;
      uStack_834 = uStack_45c;
      lStack_848 = -0x7fffffffffffffff;
LAB_140184727:
      pdb_140187ae0(&lStack_848);
      pdb_140456960(&lStack_848,&uStack_98,&UNK_142e506bd,0xd,&UNK_142e50838,0x28);
      if ((int)lStack_848 == 0xc4) {
        uStack_428 = uStack_800;
        uStack_438 = (undefined4)uStack_810;
        uStack_434 = uStack_810._4_4_;
        uStack_430 = (undefined4)uStack_808;
        uStack_42c = uStack_808._4_4_;
        uStack_448 = uStack_820;
        uStack_444 = uStack_81c;
        uStack_440 = (undefined4)uStack_818;
        uStack_43c = uStack_818._4_4_;
        uStack_458 = uStack_830;
        uStack_454 = uStack_82c;
        uStack_450 = uStack_828;
        uStack_44c = uStack_824;
        uStack_468 = uStack_840;
        uStack_464 = uStack_83c;
        uStack_460 = uStack_838;
        uStack_45c = uStack_834;
        cStack_470 = '\x01';
        uStack_46f = 0x80000000000000;
        pdb_140187ae0(&cStack_470);
        pdb_142d862b0(&cStack_470,&UNK_142e50680,0x3d);
        cVar1 = cStack_470;
        uStack_58 = CONCAT17((undefined1)uStack_468,uStack_46f);
        uStack_50 = CONCAT17((undefined1)uStack_460,CONCAT43(uStack_464,uStack_468._1_3_));
        uStack_48 = CONCAT17((undefined1)uStack_458,CONCAT43(uStack_45c,uStack_460._1_3_));
        uStack_40 = CONCAT43(uStack_454,uStack_458._1_3_);
        uStack_39 = (undefined1)uStack_450;
        uStack_38 = (undefined7)(CONCAT44(uStack_44c,uStack_450) >> 8);
        uStack_78 = CONCAT44(uStack_444,uStack_448);
        uStack_70 = CONCAT44(uStack_43c,uStack_440);
        uStack_68 = CONCAT44(uStack_434,uStack_438);
        uStack_60 = CONCAT44(uStack_42c,uStack_430);
        pdb_140187bd0(&uStack_98);
        cStack_470 = cVar1;
        goto LAB_140184851;
      }
      pub_142e32760(&uStack_468,&lStack_848,0x1c8);
      uStack_58 = CONCAT17((undefined1)uStack_460,CONCAT43(uStack_464,uStack_468._1_3_));
      uStack_50 = CONCAT17((undefined1)uStack_458,CONCAT43(uStack_45c,uStack_460._1_3_));
      uStack_48 = CONCAT17((undefined1)uStack_450,CONCAT43(uStack_454,uStack_458._1_3_));
      uStack_40 = CONCAT43(uStack_44c,uStack_450._1_3_);
      uStack_39 = (undefined1)uStack_448;
      uStack_38 = (undefined7)(CONCAT44(uStack_444,uStack_448) >> 8);
      uStack_78 = CONCAT44(uStack_43c,uStack_440);
      uStack_70 = CONCAT44(uStack_434,uStack_438);
      uStack_68 = CONCAT44(uStack_42c,uStack_430);
      pub_142e32760(auStack_bd0,auStack_420,0x388);
      lVar3 = -0x8000000000000000;
      uVar2 = (undefined1)uStack_468;
    }
    else {
      pub_142e32760(&lStack_848,&cStack_470,0x3d8);
      lVar3 = lStack_848;
      if (lStack_848 == -0x7fffffffffffffff) goto LAB_140184727;
      uVar2 = (undefined1)uStack_840;
      uStack_58 = CONCAT17((undefined1)uStack_838,CONCAT43(uStack_83c,uStack_840._1_3_));
      uStack_50 = CONCAT17((undefined1)uStack_830,CONCAT43(uStack_834,uStack_838._1_3_));
      uStack_48 = CONCAT17((undefined1)uStack_828,CONCAT43(uStack_82c,uStack_830._1_3_));
      uStack_40 = CONCAT43(uStack_824,uStack_828._1_3_);
      uStack_39 = (undefined1)uStack_820;
      uStack_38 = (undefined7)(CONCAT44(uStack_81c,uStack_820) >> 8);
      uStack_78 = uStack_818;
      uStack_70 = uStack_810;
      uStack_68 = uStack_808;
      pub_142e32760(auStack_bd0,auStack_7f8,0x388);
    }
    pdb_140187bd0(&uStack_98);
    cStack_470 = (char)lVar3;
    uStack_46f = (undefined7)((ulonglong)lVar3 >> 8);
    uStack_468._1_3_ = (undefined3)uStack_58;
    uStack_468 = CONCAT31(uStack_468._1_3_,uVar2);
    uStack_464 = (undefined4)((ulonglong)uStack_58 >> 0x18);
    uStack_460._0_1_ = (undefined1)((ulonglong)uStack_58 >> 0x38);
    uStack_460._1_3_ = (undefined3)uStack_50;
    uStack_45c = (undefined4)((ulonglong)uStack_50 >> 0x18);
    uStack_458._0_1_ = (undefined1)((ulonglong)uStack_50 >> 0x38);
    uStack_458._1_3_ = (undefined3)uStack_48;
    uStack_454 = (undefined4)((ulonglong)uStack_48 >> 0x18);
    uStack_450._0_1_ = (undefined1)((ulonglong)uStack_48 >> 0x38);
    uStack_450._1_3_ = (undefined3)uStack_40;
    uStack_44c = (undefined4)((uint7)uStack_40 >> 0x18);
    uStack_448 = (undefined4)CONCAT71(uStack_38,uStack_39);
    uStack_444 = (undefined4)((uint7)uStack_38 >> 0x18);
    uStack_440 = (undefined4)uStack_78;
    uStack_43c = uStack_78._4_4_;
    uStack_438 = (undefined4)uStack_70;
    uStack_434 = uStack_70._4_4_;
    uStack_430 = (undefined4)uStack_68;
    uStack_42c = uStack_68._4_4_;
    pub_142e32760(auStack_420,auStack_bd0,0x388);
    pdb_140a1ad90(param_1,&cStack_470);
  }
  else {
    uStack_828 = (undefined4)(CONCAT44(uStack_44c,uStack_450) >> 8);
    uStack_58 = CONCAT17((undefined1)uStack_468,uStack_46f);
    uStack_50 = CONCAT17((undefined1)uStack_460,CONCAT43(uStack_464,uStack_468._1_3_));
    uStack_838 = (undefined4)CONCAT43(uStack_45c,uStack_460._1_3_);
    uStack_834 = (undefined4)
                 (CONCAT17((undefined1)uStack_458,CONCAT43(uStack_45c,uStack_460._1_3_)) >> 0x20);
    uStack_830 = (undefined4)CONCAT43(uStack_454,uStack_458._1_3_);
    uStack_82c = (undefined4)
                 (CONCAT17((undefined1)uStack_450,CONCAT43(uStack_454,uStack_458._1_3_)) >> 0x20);
    uStack_78 = CONCAT44(uStack_444,uStack_448);
    uStack_70 = CONCAT44(uStack_43c,uStack_440);
    uStack_68 = CONCAT44(uStack_434,uStack_438);
    uStack_60 = CONCAT44(uStack_42c,uStack_430);
    uStack_48 = CONCAT44(uStack_834,uStack_838);
    uStack_40 = (undefined7)CONCAT44(uStack_82c,uStack_830);
    uStack_39 = (undefined1)uStack_450;
    uStack_38 = (undefined7)
                (CONCAT35((int3)((uint)uStack_44c >> 8),CONCAT41(uStack_828,(undefined1)uStack_450))
                >> 8);
LAB_140184851:
    *(char *)(param_1 + 1) = cStack_470;
    *(undefined8 *)((longlong)param_1 + 9) = uStack_58;
    *(undefined8 *)((longlong)param_1 + 0x11) = uStack_50;
    *(undefined8 *)((longlong)param_1 + 0x19) = uStack_48;
    *(ulonglong *)((longlong)param_1 + 0x21) = CONCAT17(uStack_39,uStack_40);
    param_1[5] = CONCAT71(uStack_38,uStack_39);
    param_1[6] = uStack_78;
    param_1[7] = uStack_70;
    param_1[8] = uStack_68;
    param_1[9] = uStack_60;
    *param_1 = 0x8000000000000000;
  }
  return param_1;
}

