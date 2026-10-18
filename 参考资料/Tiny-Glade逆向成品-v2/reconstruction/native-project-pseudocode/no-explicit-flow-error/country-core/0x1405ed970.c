// VA 0x1405ed970, PDB extent 3935 bytes
// country_core::input::action_set::_::impl$0::serialize<glam::f32::vec2::Vec2,bool,ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::action_set::_::impl$0::serialize<glam::f32::vec2::Vec2,bool,ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/action_set.rs
   Extent: 3935 */

longlong pdb_1405ed970(float *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bStack_1c0;
  char cStack_1bf;
  longlong *plStack_1b8;
  char cStack_1ab;
  byte bStack_1aa;
  byte bStack_1a9;
  undefined1 auStack_1a8 [16];
  ulonglong uStack_190;
  longlong *plStack_188;
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
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
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
  auStack_1a8 = packsswb(auVar9,auVar11);
  bVar4 = (byte)-(uint)(*param_1 != 0.0) | auStack_1a8[1];
  bVar7 = auStack_1a8[2] | auStack_1a8[3];
  bVar6 = auStack_1a8[4] | auStack_1a8[5];
  bVar8 = auStack_1a8[6] | auStack_1a8[7];
  bStack_1a9 = auStack_1a8[8] | auStack_1a8[9];
  bStack_1aa = auStack_1a8[10] | auStack_1a8[0xb];
  uStack_48 = (ulonglong)*(byte *)(param_1 + 0xc);
  uStack_50 = (ulonglong)*(byte *)((longlong)param_1 + 0x31);
  uStack_58 = (ulonglong)*(byte *)((longlong)param_1 + 0x32);
  uStack_60 = (ulonglong)*(byte *)((longlong)param_1 + 0x33);
  uStack_68 = (ulonglong)*(byte *)(param_1 + 0xd);
  uStack_70 = (ulonglong)*(byte *)((longlong)param_1 + 0x35);
  uStack_78 = (ulonglong)*(byte *)((longlong)param_1 + 0x36);
  uStack_80 = (ulonglong)*(byte *)((longlong)param_1 + 0x37);
  uStack_190 = (ulonglong)*(byte *)(param_1 + 0xe);
  uStack_88 = (ulonglong)*(byte *)((longlong)param_1 + 0x39);
  uStack_90 = (ulonglong)*(byte *)((longlong)param_1 + 0x3a);
  uStack_98 = (ulonglong)*(byte *)((longlong)param_1 + 0x3b);
  uStack_a0 = (ulonglong)*(byte *)(param_1 + 0xf);
  uStack_a8 = (ulonglong)*(byte *)((longlong)param_1 + 0x3d);
  uStack_b0 = (ulonglong)*(byte *)((longlong)param_1 + 0x3e);
  uStack_b8 = (ulonglong)*(byte *)((longlong)param_1 + 0x3f);
  uStack_c0 = (ulonglong)*(byte *)(param_1 + 0x10);
  uStack_c8 = (ulonglong)*(byte *)((longlong)param_1 + 0x41);
  uStack_d8 = (ulonglong)*(byte *)((longlong)param_1 + 0x42);
  uStack_d0 = (ulonglong)*(byte *)((longlong)param_1 + 0x43);
  uStack_180 = (ulonglong)*(byte *)(param_1 + 0x11);
  uStack_178 = (ulonglong)*(byte *)((longlong)param_1 + 0x45);
  uStack_170 = (ulonglong)*(byte *)((longlong)param_1 + 0x46);
  uStack_168 = (ulonglong)*(byte *)((longlong)param_1 + 0x47);
  uStack_160 = (ulonglong)*(byte *)(param_1 + 0x12);
  uStack_158 = (ulonglong)*(byte *)((longlong)param_1 + 0x49);
  uStack_150 = (ulonglong)*(byte *)((longlong)param_1 + 0x4a);
  uStack_148 = (ulonglong)*(byte *)((longlong)param_1 + 0x4b);
  uStack_140 = (ulonglong)*(byte *)(param_1 + 0x13);
  uStack_138 = (ulonglong)*(byte *)((longlong)param_1 + 0x4d);
  uStack_130 = (ulonglong)*(byte *)((longlong)param_1 + 0x4e);
  uStack_128 = (ulonglong)*(byte *)((longlong)param_1 + 0x4f);
  uStack_120 = (ulonglong)*(byte *)(param_1 + 0x14);
  uStack_118 = (ulonglong)*(byte *)((longlong)param_1 + 0x51);
  uStack_110 = (ulonglong)*(byte *)((longlong)param_1 + 0x52);
  uStack_108 = (ulonglong)*(byte *)((longlong)param_1 + 0x53);
  uStack_100 = (ulonglong)*(byte *)(param_1 + 0x15);
  uStack_f8 = (ulonglong)*(byte *)((longlong)param_1 + 0x55);
  uStack_f0 = (ulonglong)*(byte *)((longlong)param_1 + 0x56);
  uStack_e8 = (ulonglong)*(byte *)((longlong)param_1 + 0x57);
  uStack_e0 = (ulonglong)*(byte *)(param_1 + 0x16);
  lVar5 = uStack_168 + uStack_160 + uStack_158 + uStack_150 + uStack_148 + uStack_140 + uStack_138 +
          uStack_130 + uStack_128 + uStack_120 + uStack_118 + uStack_110 + uStack_108 + uStack_100 +
          uStack_f8 + uStack_f0 + uStack_e8 +
          uStack_190 + uStack_80 + uStack_88 + uStack_90 + uStack_98 + uStack_a0 + uStack_a8 +
          uStack_b0 + uStack_b8 + uStack_c0 + uStack_c8 + uStack_d8 + uStack_d0 + uStack_180 +
          uStack_178 + uStack_170 +
          (ulonglong)(bStack_1a9 & 1) +
          (ulonglong)(bVar8 & 1) + (ulonglong)(bVar6 & 1) + (ulonglong)(bVar7 & 1) + uStack_48 +
          (ulonglong)(bStack_1aa & 1) + uStack_50 + uStack_58 + uStack_60 + uStack_68 + uStack_70 +
          uStack_78 + (ulonglong)(bVar4 & 1) + uStack_e0;
  cVar1 = *(char *)((longlong)param_1 + 0x59);
  plVar2 = (longlong *)*param_2;
  lVar3 = plVar2[2];
  cStack_1ab = cVar1;
  if (*plVar2 == lVar3) {
    plStack_188 = param_2;
    pdb_142d7f1b0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
    param_2 = plStack_188;
  }
  *(undefined1 *)(plVar2[1] + lVar3) = 0x7b;
  lVar3 = lVar3 + 1;
  plVar2[2] = lVar3;
  cStack_1bf = '\x01';
  if (lVar5 == 0 && cVar1 == '\0') {
    if (*plVar2 == lVar3) {
      pdb_142d7f1b0(plVar2,lVar3,1,1,1);
      lVar3 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar3) = 0x7d;
    plVar2[2] = lVar3 + 1;
    cStack_1bf = '\0';
  }
  bStack_1c0 = 0;
  plStack_1b8 = param_2;
  if (((bVar4 & 1) == 0) ||
     (lVar3 = pdb_14054c7e0(&bStack_1c0,&UNK_142f73e42,0x17,param_1), lVar3 == 0)) {
    if ((bVar7 & 1) != 0) {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14054c7e0(&bStack_1c0,&UNK_142f73e59,0x21,param_1 + 2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((bVar6 & 1) != 0) {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14054c7e0(&bStack_1c0,&UNK_142f73e7a,10,param_1 + 4);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((bVar8 & 1) != 0) {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14054c7e0(&bStack_1c0,&UNK_142f73e84,0xd,param_1 + 6);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((bStack_1a9 & 1) != 0) {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14054c7e0(&bStack_1c0,&UNK_142f73e91,0xb,param_1 + 8);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((bStack_1aa & 1) != 0) {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14054c7e0(&bStack_1c0,&UNK_142f73e9c,0xd,param_1 + 10);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_48 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73ea9,5,param_1 + 0xc);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_50 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73eae,0xb,(longlong)param_1 + 0x31);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_58 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73eb9,0x12,(longlong)param_1 + 0x32);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_60 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73ecb,0xf,(longlong)param_1 + 0x33);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_68 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73eda,0xd,param_1 + 0xd);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_70 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73ee7,9,(longlong)param_1 + 0x35);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_78 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73ef0,0xe,(longlong)param_1 + 0x36);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_80 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73efe,0xe,(longlong)param_1 + 0x37);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_190 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f0c,0xc,param_1 + 0xe);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_88 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f18,0xb,(longlong)param_1 + 0x39);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_90 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f23,0xb,(longlong)param_1 + 0x3a);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_98 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f2e,9,(longlong)param_1 + 0x3b);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_a0 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f37,10,param_1 + 0xf);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_a8 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f41,0x12,(longlong)param_1 + 0x3d);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_b0 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f53,9,(longlong)param_1 + 0x3e);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_b8 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f5c,0xb,(longlong)param_1 + 0x3f);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_c0 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f67,0x10,param_1 + 0x10);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_c8 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f77,4,(longlong)param_1 + 0x41);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_d8 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f7b,4,(longlong)param_1 + 0x42);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_d0 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f7f,6,(longlong)param_1 + 0x43);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_180 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f85,9,param_1 + 0x11);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_178 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f8e,10,(longlong)param_1 + 0x45);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_170 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f98,7,(longlong)param_1 + 0x46);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_168 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73f9f,8,(longlong)param_1 + 0x47);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_160 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73fa7,7,param_1 + 0x12);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_158 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73fae,5,(longlong)param_1 + 0x49);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_150 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73fb3,0xb,(longlong)param_1 + 0x4a);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_148 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73fbe,0xb,(longlong)param_1 + 0x4b);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_140 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73fc9,0xc,param_1 + 0x13);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_138 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73fd5,9,(longlong)param_1 + 0x4d);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_130 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73fde,0xe,(longlong)param_1 + 0x4e);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_128 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73fec,10,(longlong)param_1 + 0x4f);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_120 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f73ff6,0x1c,param_1 + 0x14);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_118 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f74012,0x13,(longlong)param_1 + 0x51);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_110 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f74025,0x11,(longlong)param_1 + 0x52);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_108 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f74036,0x16,(longlong)param_1 + 0x53);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_100 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f7404c,0x16,param_1 + 0x15);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_f8 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f74062,0x11,(longlong)param_1 + 0x55);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_f0 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f74073,9,(longlong)param_1 + 0x56);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_e8 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f7407c,0x13,(longlong)param_1 + 0x57);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if ((char)uStack_e0 != '\0') {
      if ((bStack_1c0 & 1) != 0) goto LAB_1405ee7ef;
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f7408f,0x17,param_1 + 0x16);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    if (cStack_1ab != '\0') {
      if ((bStack_1c0 & 1) != 0) {
LAB_1405ee7ef:
        lVar3 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
        return lVar3;
      }
      lVar3 = pdb_14053e0d0(&bStack_1c0,&UNK_142f740a6,0xf,(longlong)param_1 + 0x59);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    lVar3 = 0;
    if (((bStack_1c0 & 1) == 0) && (cStack_1bf != '\0')) {
      pdb_140172c20(*plStack_1b8,&UNK_142f73e41,1);
      lVar3 = 0;
    }
  }
  return lVar3;
}

