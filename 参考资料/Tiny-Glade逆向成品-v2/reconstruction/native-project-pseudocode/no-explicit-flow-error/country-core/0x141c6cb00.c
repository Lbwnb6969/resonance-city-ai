// VA 0x141c6cb00, PDB extent 3779 bytes
// country_core::input::action_set::_::impl$0::serialize<glam::f32::vec2::Vec2,bool,ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::action_set::_::impl$0::serialize<glam::f32::vec2::Vec2,bool,ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 3779 */

longlong pdb_141c6cb00(float *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cStack_1d0;
  undefined1 uStack_1cf;
  undefined6 uStack_1ce;
  longlong *plStack_1c8;
  char cStack_1bc;
  byte bStack_1bb;
  byte bStack_1ba;
  byte bStack_1b9;
  undefined1 auStack_1b8 [16];
  longlong *plStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  
  auVar11._4_4_ = -(uint)(param_1[1] != 0.0);
  auVar11._0_4_ = -(uint)(*param_1 != 0.0);
  auVar11._8_4_ = -(uint)(param_1[2] != 0.0);
  auVar11._12_4_ = -(uint)(param_1[3] != 0.0);
  auVar9._4_4_ = -(uint)(param_1[5] != 0.0);
  auVar9._0_4_ = -(uint)(param_1[4] != 0.0);
  auVar9._8_4_ = -(uint)(param_1[6] != 0.0);
  auVar9._12_4_ = -(uint)(param_1[7] != 0.0);
  auVar9 = packssdw(auVar11,auVar9);
  auVar10._4_4_ = -(uint)(param_1[9] != 0.0);
  auVar10._0_4_ = -(uint)(param_1[8] != 0.0);
  auVar10._8_4_ = -(uint)(param_1[10] != 0.0);
  auVar10._12_4_ = -(uint)(param_1[0xb] != 0.0);
  auVar11 = packssdw(auVar10,auVar10);
  auStack_1b8 = packsswb(auVar9,auVar11);
  bVar6 = (byte)-(uint)(*param_1 != 0.0) | auStack_1b8[1];
  bVar8 = auStack_1b8[2] | auStack_1b8[3];
  bVar7 = auStack_1b8[4] | auStack_1b8[5];
  bStack_1b9 = auStack_1b8[6] | auStack_1b8[7];
  bStack_1ba = auStack_1b8[8] | auStack_1b8[9];
  bStack_1bb = auStack_1b8[10] | auStack_1b8[0xb];
  uStack_60 = (ulonglong)*(byte *)(param_1 + 0xc);
  uStack_68 = (ulonglong)*(byte *)((longlong)param_1 + 0x31);
  uStack_70 = (ulonglong)*(byte *)((longlong)param_1 + 0x32);
  uStack_78 = (ulonglong)*(byte *)((longlong)param_1 + 0x33);
  uStack_80 = (ulonglong)*(byte *)(param_1 + 0xd);
  uStack_88 = (ulonglong)*(byte *)((longlong)param_1 + 0x35);
  uStack_90 = (ulonglong)*(byte *)((longlong)param_1 + 0x36);
  uStack_98 = (ulonglong)*(byte *)((longlong)param_1 + 0x37);
  uStack_a0 = (ulonglong)*(byte *)(param_1 + 0xe);
  uStack_a8 = (ulonglong)*(byte *)((longlong)param_1 + 0x39);
  uStack_b0 = (ulonglong)*(byte *)((longlong)param_1 + 0x3a);
  uStack_b8 = (ulonglong)*(byte *)((longlong)param_1 + 0x3b);
  uStack_c0 = (ulonglong)*(byte *)(param_1 + 0xf);
  uStack_c8 = (ulonglong)*(byte *)((longlong)param_1 + 0x3d);
  uStack_d0 = (ulonglong)*(byte *)((longlong)param_1 + 0x3e);
  uStack_d8 = (ulonglong)*(byte *)((longlong)param_1 + 0x3f);
  uStack_e0 = (ulonglong)*(byte *)(param_1 + 0x10);
  uStack_e8 = (ulonglong)*(byte *)((longlong)param_1 + 0x41);
  uStack_f8 = (ulonglong)*(byte *)((longlong)param_1 + 0x42);
  uStack_f0 = (ulonglong)*(byte *)((longlong)param_1 + 0x43);
  uStack_1a0 = (ulonglong)*(byte *)(param_1 + 0x11);
  uStack_198 = (ulonglong)*(byte *)((longlong)param_1 + 0x45);
  uStack_190 = (ulonglong)*(byte *)((longlong)param_1 + 0x46);
  uStack_188 = (ulonglong)*(byte *)((longlong)param_1 + 0x47);
  uStack_180 = (ulonglong)*(byte *)(param_1 + 0x12);
  uStack_178 = (ulonglong)*(byte *)((longlong)param_1 + 0x49);
  uStack_170 = (ulonglong)*(byte *)((longlong)param_1 + 0x4a);
  uStack_168 = (ulonglong)*(byte *)((longlong)param_1 + 0x4b);
  uStack_160 = (ulonglong)*(byte *)(param_1 + 0x13);
  uStack_158 = (ulonglong)*(byte *)((longlong)param_1 + 0x4d);
  uStack_150 = (ulonglong)*(byte *)((longlong)param_1 + 0x4e);
  uStack_148 = (ulonglong)*(byte *)((longlong)param_1 + 0x4f);
  uStack_140 = (ulonglong)*(byte *)(param_1 + 0x14);
  uStack_138 = (ulonglong)*(byte *)((longlong)param_1 + 0x51);
  uStack_130 = (ulonglong)*(byte *)((longlong)param_1 + 0x52);
  uStack_128 = (ulonglong)*(byte *)((longlong)param_1 + 0x53);
  uStack_120 = (ulonglong)*(byte *)(param_1 + 0x15);
  uStack_118 = (ulonglong)*(byte *)((longlong)param_1 + 0x55);
  uStack_110 = (ulonglong)*(byte *)((longlong)param_1 + 0x56);
  uStack_108 = (ulonglong)*(byte *)((longlong)param_1 + 0x57);
  plVar2 = (longlong *)*param_2;
  lVar4 = param_2[3];
  param_2[3] = lVar4 + 1;
  uStack_100 = (ulonglong)*(byte *)(param_1 + 0x16);
  lVar5 = uStack_188 + uStack_180 + uStack_178 + uStack_170 + uStack_168 + uStack_160 + uStack_158 +
          uStack_150 + uStack_148 + uStack_140 + uStack_138 + uStack_130 + uStack_128 + uStack_120 +
          uStack_118 + uStack_110 + uStack_108 +
          uStack_a0 + uStack_98 + uStack_a8 + uStack_b0 + uStack_b8 + uStack_c0 + uStack_c8 +
          uStack_d0 + uStack_d8 + uStack_e0 + uStack_e8 + uStack_f8 + uStack_f0 + uStack_1a0 +
          uStack_198 + uStack_190 +
          (ulonglong)(bStack_1ba & 1) +
          (ulonglong)(bStack_1b9 & 1) + (ulonglong)(bVar7 & 1) + (ulonglong)(bVar8 & 1) + uStack_60
          + (ulonglong)(bStack_1bb & 1) + uStack_68 + uStack_70 + uStack_78 + uStack_80 + uStack_88
          + uStack_90 + (ulonglong)(bVar6 & 1) + uStack_100;
  *(undefined1 *)(param_2 + 4) = 0;
  cVar1 = *(char *)((longlong)param_1 + 0x59);
  lVar3 = plVar2[2];
  cStack_1bc = cVar1;
  if (*plVar2 == lVar3) {
    plStack_1a8 = param_2;
    pdb_142d7f1b0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
    param_2 = plStack_1a8;
  }
  *(undefined1 *)(plVar2[1] + lVar3) = 0x7b;
  lVar3 = lVar3 + 1;
  plVar2[2] = lVar3;
  uStack_1cf = 1;
  if (lVar5 == 0 && cVar1 == '\0') {
    param_2[3] = lVar4;
    if (*plVar2 == lVar3) {
      pdb_142d7f1b0(plVar2,lVar3,1,1,1);
      lVar3 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar3) = 0x7d;
    plVar2[2] = lVar3 + 1;
    uStack_1cf = 0;
  }
  cStack_1d0 = '\0';
  plStack_1c8 = param_2;
  if (((bVar6 & 1) != 0) &&
     (lVar4 = pdb_141b7bb90(&cStack_1d0,&UNK_1433a2f80,0x17,param_1), lVar4 != 0)) {
    return lVar4;
  }
  if ((bVar8 & 1) != 0) {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b7bb90(&cStack_1d0,&UNK_1433a2f97,0x21,param_1 + 2);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((bVar7 & 1) != 0) {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b7bb90(&cStack_1d0,&UNK_1433a2fb8,10,param_1 + 4);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((bStack_1b9 & 1) != 0) {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b7bb90(&cStack_1d0,&UNK_1433a2fc2,0xd,param_1 + 6);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((bStack_1ba & 1) != 0) {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b7bb90(&cStack_1d0,&UNK_1433a2fcf,0xb,param_1 + 8);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((bStack_1bb & 1) != 0) {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b7bb90(&cStack_1d0,&UNK_1433a2fda,0xd,param_1 + 10);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_60 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a2fe7,5,param_1 + 0xc);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_68 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a2fec,0xb,(longlong)param_1 + 0x31);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_70 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a2ff7,0x12,(longlong)param_1 + 0x32);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_78 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3009,0xf,(longlong)param_1 + 0x33);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_80 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3018,0xd,param_1 + 0xd);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_88 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3025,9,(longlong)param_1 + 0x35);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_90 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a302e,0xe,(longlong)param_1 + 0x36);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_98 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a303c,0xe,(longlong)param_1 + 0x37);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_a0 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a304a,0xc,param_1 + 0xe);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_a8 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3056,0xb,(longlong)param_1 + 0x39);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_b0 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3061,0xb,(longlong)param_1 + 0x3a);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_b8 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a306c,9,(longlong)param_1 + 0x3b);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_c0 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3075,10,param_1 + 0xf);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_c8 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a307f,0x12,(longlong)param_1 + 0x3d);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_d0 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3091,9,(longlong)param_1 + 0x3e);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_d8 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a309a,0xb,(longlong)param_1 + 0x3f);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_e0 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30a5,0x10,param_1 + 0x10);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_e8 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30b5,4,(longlong)param_1 + 0x41);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_f8 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30b9,4,(longlong)param_1 + 0x42);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_f0 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30bd,6,(longlong)param_1 + 0x43);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_1a0 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30c3,9,param_1 + 0x11);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_198 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30cc,10,(longlong)param_1 + 0x45);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_190 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30d6,7,(longlong)param_1 + 0x46);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_188 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30dd,8,(longlong)param_1 + 0x47);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_180 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30e5,7,param_1 + 0x12);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_178 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30ec,5,(longlong)param_1 + 0x49);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_170 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30f1,0xb,(longlong)param_1 + 0x4a);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_168 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a30fc,0xb,(longlong)param_1 + 0x4b);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_160 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3107,0xc,param_1 + 0x13);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_158 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3113,9,(longlong)param_1 + 0x4d);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_150 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a311c,0xe,(longlong)param_1 + 0x4e);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_148 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a312a,10,(longlong)param_1 + 0x4f);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_140 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3134,0x1c,param_1 + 0x14);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_138 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3150,0x13,(longlong)param_1 + 0x51);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_130 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3163,0x11,(longlong)param_1 + 0x52);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_128 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a3174,0x16,(longlong)param_1 + 0x53);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_120 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a318a,0x16,param_1 + 0x15);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_118 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a31a0,0x11,(longlong)param_1 + 0x55);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_110 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a31b1,9,(longlong)param_1 + 0x56);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_108 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a31ba,0x13,(longlong)param_1 + 0x57);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((char)uStack_100 != '\0') {
    if (cStack_1d0 != '\0') goto LAB_141c6d8f4;
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a31cd,0x17,param_1 + 0x16);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if (cStack_1bc != '\0') {
    if (cStack_1d0 != '\0') {
LAB_141c6d8f4:
      lVar4 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar4;
    }
    lVar4 = pdb_141b841d0(&cStack_1d0,&UNK_1433a31e4,0xf,(longlong)param_1 + 0x59);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  uStack_58 = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,cStack_1d0));
  plStack_50 = plStack_1c8;
  pdb_1400bdf40(&uStack_58);
  return 0;
}

