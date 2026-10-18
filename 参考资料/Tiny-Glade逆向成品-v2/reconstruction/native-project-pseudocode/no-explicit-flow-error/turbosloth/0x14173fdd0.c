// VA 0x14173fdd0, PDB extent 2749 bytes
// turbosloth::asset::impl$24::run::async_block$0<turbosloth::asset::FileAsset,std::io::error::Error,turbosloth::asset::FileAssetRecipe>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<turbosloth::asset::FileAsset,std::io::error::Error,turbosloth::asset::FileAssetRecipe>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 2749 */

undefined8 * pdb_14173fdd0(undefined8 *param_1,longlong *param_2)

{
  undefined *arg0;
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  byte *pbStack_1a8;
  undefined *puStack_1a0;
  longlong lStack_198;
  undefined *puStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  longlong *plStack_138;
  undefined *puStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  undefined *puStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  undefined1 uStack_51;
  uint uStack_50;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_60 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x11]) {
  case '\0':
    lStack_128 = *param_2;
    lStack_120 = param_2[1];
    lStack_118 = param_2[2];
    lStack_110 = param_2[3];
    lStack_198 = param_2[4];
    puStack_190 = (undefined *)param_2[5];
    lStack_188 = param_2[6];
    lStack_180 = param_2[7];
    pdb_141748860(&uStack_e8,&lStack_128,&lStack_198);
    plStack_60[0x10] = uStack_a8;
    *(undefined4 *)(plStack_60 + 0xe) = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)plStack_60 + 0x74) = uStack_b8._4_4_;
    *(undefined4 *)(plStack_60 + 0xf) = uStack_b0;
    *(undefined4 *)((longlong)plStack_60 + 0x7c) = uStack_ac;
    *(undefined4 *)(plStack_60 + 0xc) = (undefined4)uStack_c8;
    *(undefined4 *)((longlong)plStack_60 + 100) = uStack_c8._4_4_;
    *(undefined4 *)(plStack_60 + 0xd) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)plStack_60 + 0x6c) = uStack_c0._4_4_;
    *(undefined4 *)(plStack_60 + 10) = (undefined4)uStack_d8;
    *(undefined4 *)((longlong)plStack_60 + 0x54) = uStack_d8._4_4_;
    *(undefined4 *)(plStack_60 + 0xb) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)plStack_60 + 0x5c) = uStack_d0._4_4_;
    plStack_60[8] = (longlong)uStack_e8;
    plStack_60[9] = (longlong)uStack_e0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(&UNK_14332ba20);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    pdb_142dc8590(&UNK_14332ba20);
  }
  if ((char)plStack_60[0x10] != '\0') {
    if ((char)plStack_60[0x10] != '\x01') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8590(&UNK_14332bb00);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8570(&UNK_14332bb00);
  }
  uStack_78 = plStack_60[8];
  pbStack_70 = (byte *)plStack_60[9];
  puVar8 = (undefined *)plStack_60[10];
  lStack_128 = plStack_60[0xc];
  lStack_120 = plStack_60[0xd];
  lStack_118 = plStack_60[0xe];
  lStack_110 = plStack_60[0xf];
  pdb_141c2f360(&uStack_e8,lStack_128 + 0x10,pbStack_70,puVar8);
  lVar10 = uStack_d8;
  lVar3 = lStack_120;
  auVar13[0] = -((char)uStack_e8 == DAT_142f5c7c0);
  auVar13[1] = -(uStack_e8._1_1_ == UNK_142f5c7c1);
  auVar13[2] = -(uStack_e8._2_1_ == UNK_142f5c7c2);
  auVar13[3] = -(uStack_e8._3_1_ == UNK_142f5c7c3);
  auVar13[4] = -(uStack_e8._4_1_ == UNK_142f5c7c4);
  auVar13[5] = -(uStack_e8._5_1_ == UNK_142f5c7c5);
  auVar13[6] = -(uStack_e8._6_1_ == UNK_142f5c7c6);
  auVar13[7] = -(uStack_e8._7_1_ == UNK_142f5c7c7);
  auVar13[8] = -((char)uStack_e0 == UNK_142f5c7c8);
  auVar13[9] = -(uStack_e0._1_1_ == UNK_142f5c7c9);
  auVar13[10] = -(uStack_e0._2_1_ == UNK_142f5c7ca);
  auVar13[0xb] = -(uStack_e0._3_1_ == UNK_142f5c7cb);
  auVar13[0xc] = -(uStack_e0._4_1_ == UNK_142f5c7cc);
  auVar13[0xd] = -(uStack_e0._5_1_ == UNK_142f5c7cd);
  auVar13[0xe] = -(uStack_e0._6_1_ == UNK_142f5c7ce);
  auVar13[0xf] = -(uStack_e0._7_1_ == UNK_142f5c7cf);
  if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf)
      == 0xffff) {
    pdb_14098a860(&lStack_128);
    if (uStack_78 != 0) {
      pub_1406abac0(pbStack_70,uStack_78,1);
    }
    *(undefined1 *)(plStack_60 + 0x10) = 1;
code_r0x000141740265:
    plVar11 = plStack_60;
    uStack_e8 = (longlong *)lVar10;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(8,8);
    if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,8);
    }
    *(longlong *)pbVar6 = lVar10;
    uVar9 = 1;
    puVar8 = &UNK_1430712c0;
  }
  else {
    puStack_130 = puStack_80;
    uStack_140 = uStack_90;
    plStack_138 = plStack_88;
    uStack_150 = (undefined4)uStack_a0;
    uStack_14c = uStack_a0._4_4_;
    uStack_148 = (undefined4)uStack_98;
    uStack_144 = uStack_98._4_4_;
    uStack_160 = uStack_b0;
    uStack_15c = uStack_ac;
    uStack_158 = (undefined4)uStack_a8;
    uStack_154 = uStack_a8._4_4_;
    uStack_170 = (undefined4)uStack_c0;
    uStack_16c = uStack_c0._4_4_;
    uStack_168 = (undefined4)uStack_b8;
    uStack_164 = uStack_b8._4_4_;
    lStack_180 = uStack_d0;
    uStack_178 = uStack_c8;
    lStack_198 = (longlong)uStack_e8;
    puStack_190 = uStack_e0;
    lStack_188 = uStack_d8;
    if (lStack_120 == 0) {
      uVar7 = (undefined4)CONCAT71((int7)((ulonglong)uStack_e0 >> 8),1);
    }
    else {
      lVar10 = lStack_120 + 0x38;
      LOCK();
      bVar12 = *(char *)(lStack_120 + 0x38) == '\0';
      if (bVar12) {
        *(char *)(lStack_120 + 0x38) = '\x01';
      }
      UNLOCK();
      if (!bVar12) {
        uStack_49 = 1;
        uStack_4a = 1;
        pdb_142dc6be0(lVar10);
      }
      puVar2 = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        uStack_50 = 0;
        cVar4 = *(char *)(lVar3 + 0x39);
      }
      else {
        uStack_49 = 1;
        uStack_4a = 1;
        uStack_50 = pdb_142dc79e0();
        uStack_50 = uStack_50 ^ 1;
        cVar4 = *(char *)(lVar3 + 0x39);
      }
      if (cVar4 != '\0') {
        uVar1 = (ulonglong)uStack_e0 >> 8;
        uStack_e0 = (undefined *)CONCAT71((int7)uVar1,(char)uStack_50);
        uStack_e8 = (longlong *)lVar10;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14332b8d0,0x2b,&uStack_e8,&UNK_14332b940,&UNK_14332bae8);
      }
      uStack_98 = CONCAT44(uStack_144,uStack_148);
      uStack_a8 = CONCAT44(uStack_154,uStack_158);
      uStack_a0 = CONCAT44(uStack_14c,uStack_150);
      uStack_b8 = (undefined *)CONCAT44(uStack_164,uStack_168);
      uStack_c0 = (byte *)CONCAT44(uStack_16c,uStack_170);
      uStack_e8 = (longlong *)lStack_198;
      uStack_e0 = puStack_190;
      uStack_d8 = lStack_188;
      uStack_d0 = lStack_180;
      uStack_c8 = uStack_178;
      uStack_b0 = uStack_160;
      uStack_ac = uStack_15c;
      uStack_90 = uStack_140;
      lStack_68 = lVar10;
      pdb_1417b89d0(lVar3 + 0x40,&uStack_e8);
      if (((char)uStack_50 == '\0') && ((*puVar2 & 0x7fffffffffffffff) != 0)) {
        uStack_49 = 0;
        uStack_4a = 1;
        cVar4 = pdb_142dc79e0();
        if (cVar4 == '\0') {
          *(undefined1 *)(lVar3 + 0x39) = 1;
        }
      }
      uVar7 = 0;
      LOCK();
      cVar4 = *(char *)(lVar3 + 0x38);
      *(char *)(lVar3 + 0x38) = '\0';
      UNLOCK();
      if (cVar4 == '\x02') {
        uStack_49 = 0;
        uStack_4a = 1;
        pdb_142dc6ca0();
        uVar7 = 0;
      }
    }
    pbStack_1a8 = pbStack_70;
    lStack_108 = 0;
    lStack_100 = 1;
    uStack_f8 = 0;
    uStack_d8 = 0x60000020;
    uStack_e8 = &lStack_108;
    uStack_e0 = &UNK_14332b508;
    puStack_1a0 = puVar8;
    uStack_50 = uVar7;
    cVar4 = pdb_140f58310(&pbStack_1a8,&uStack_e8);
    uVar9 = uStack_f8;
    arg0 = puStack_130;
    plVar11 = plStack_138;
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14332b538,0x37,&uStack_51,&UNK_14332b890,&UNK_14332b5e0);
    }
    lStack_68 = lStack_108;
    if (plStack_138 == (longlong *)0x0) {
      pbVar6 = (byte *)0x0;
      arg0 = puVar8;
      lVar10 = lStack_100;
    }
    else {
      uStack_e8 = plStack_138;
      uStack_e0 = puStack_130;
      lStack_f0 = lStack_100;
      if (puStack_130 == (undefined *)0x0) {
        pbVar6 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        pbVar6 = pub_1406abab0((ulonglong)arg0,1);
        if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(1,arg0);
        }
      }
      pub_142e32760(pbVar6,plVar11 + 2,arg0);
      LOCK();
      *uStack_e8 = *uStack_e8 + -1;
      UNLOCK();
      if (*uStack_e8 == 0) {
        pdb_1406ed6a0(&uStack_e8);
      }
      lVar10 = lStack_f0;
    }
    if (((char)uStack_50 != '\0') && (CONCAT44(uStack_154,uStack_158) != 0)) {
      pub_1406abac0((byte *)CONCAT44(uStack_14c,uStack_150),CONCAT44(uStack_154,uStack_158),1);
    }
    pdb_14098a860(&lStack_128);
    lVar3 = lStack_68;
    if (uStack_78 != 0) {
      pub_1406abac0(pbStack_70,uStack_78,1);
    }
    plVar11 = plStack_60;
    *(undefined1 *)(plStack_60 + 0x10) = 1;
    if (SBORROW8(0,lVar3)) goto code_r0x000141740265;
    if (lVar3 == -0x7fffffffffffffff) {
      *param_1 = 2;
      uVar5 = 3;
      goto code_r0x0001417402a5;
    }
    uStack_e8 = (longlong *)0x1;
    uStack_e0 = (undefined *)0x1;
    uStack_d8 = lVar3;
    uStack_c8 = uVar9;
    uStack_d0 = lVar10;
    uStack_c0 = pbVar6;
    uStack_b8 = arg0;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x38,8);
    if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x38);
    }
    *(undefined **)(pbVar6 + 0x30) = uStack_b8;
    *(undefined8 *)(pbVar6 + 0x20) = uStack_c8;
    *(byte **)(pbVar6 + 0x28) = uStack_c0;
    *(longlong *)(pbVar6 + 0x10) = uStack_d8;
    *(longlong *)(pbVar6 + 0x18) = uStack_d0;
    *(longlong **)pbVar6 = uStack_e8;
    *(undefined **)(pbVar6 + 8) = uStack_e0;
    puVar8 = &UNK_14332ba38;
    uVar9 = 0;
  }
  *param_1 = uVar9;
  param_1[1] = pbVar6;
  param_1[2] = puVar8;
  uVar5 = 1;
  plStack_60 = plVar11;
code_r0x0001417402a5:
  *(undefined1 *)(plStack_60 + 0x11) = uVar5;
  return param_1;
}

