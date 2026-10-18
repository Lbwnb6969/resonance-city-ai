// VA 0x140b260b0, PDB extent 1962 bytes
// country_core::systems::render_loop::compute_passes::image_baker::finish_pending_image_bakes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/image_baker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::image_baker::finish_pending_image_bakes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/image_baker.rs
   Extent: 1962 */

void pdb_140b260b0(undefined8 param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  code *pcVar12;
  ulonglong **ppuVar13;
  ulonglong uVar14;
  ulonglong **ppuVar15;
  bool bVar16;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong lStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
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
  ulonglong uStack_140;
  undefined8 **ppuStack_138;
  ulonglong uStack_130;
  ulonglong *puStack_128;
  ulonglong *puStack_120;
  undefined8 uStack_118;
  ulonglong *puStack_110;
  ulonglong uStack_108;
  undefined *puStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  ulonglong *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined2 uStack_60;
  undefined8 **ppuStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (_DAT_143ca4408 == 2) {
    LOCK();
    bVar16 = DAT_143ca4418 == '\0';
    if (bVar16) {
      DAT_143ca4418 = '\x01';
    }
    UNLOCK();
  }
  else {
    pdb_142d8fa30(&DAT_143ca4408,&DAT_143ca4408);
    LOCK();
    bVar16 = DAT_143ca4418 == '\0';
    if (bVar16) {
      DAT_143ca4418 = '\x01';
    }
    UNLOCK();
  }
  if (!bVar16) {
    pdb_142dbd1a0(&DAT_143ca4418);
  }
  pdb_140e9a150(&DAT_143ca4418);
  lStack_98 = _DAT_143ca4430;
  uStack_a8 = _DAT_143ca4420;
  uStack_a4 = DAT_143ca4420_4;
  uStack_a0 = _DAT_143ca4428;
  uStack_9c = DAT_143ca4428_4;
  _DAT_143ca4420 = 0;
  _DAT_143ca4428 = 8;
  _DAT_143ca4430 = 0;
  uStack_49 = 1;
  pdb_140e9a350();
  LOCK();
  bVar16 = DAT_143ca4418 == '\x01';
  if (bVar16) {
    DAT_143ca4418 = '\0';
  }
  UNLOCK();
  if (!bVar16) {
    uStack_49 = 1;
    pdb_142dbcef0(&DAT_143ca4418,0);
  }
  if (lStack_98 == 0) {
    pdb_1409729c0(&uStack_a8);
  }
  else {
    uStack_49 = 1;
    pdb_140e60ac0(param_1);
    uStack_118 = CONCAT44(uStack_a4,uStack_a8);
    puStack_128 = (ulonglong *)CONCAT44(uStack_9c,uStack_a0);
    puStack_110 = puStack_128 + lStack_98 * 8;
    puStack_120 = puStack_128;
    while (puStack_120 != puStack_110) {
      puVar1 = puStack_120 + 8;
      uVar11 = *puStack_120;
      puVar2 = puStack_120 + 7;
      uVar4 = puStack_120[5];
      uVar5 = puStack_120[6];
      puVar3 = puStack_120 + 3;
      puVar6 = puStack_120 + 4;
      ppuVar15 = (ulonglong **)puStack_120[1];
      uVar7 = puStack_120[2];
      puStack_120 = puVar1;
      if (SBORROW8(0,uVar11)) break;
      uStack_1c8 = SUB84(ppuVar15,0);
      uStack_1c4 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
      uStack_1c0 = (undefined4)uVar7;
      uStack_1bc = (undefined4)(uVar7 >> 0x20);
      uStack_1b8 = (undefined4)*puVar3;
      uStack_1b4 = (undefined4)(*puVar3 >> 0x20);
      uStack_1b0 = (undefined4)*puVar6;
      uStack_1ac = (undefined4)(*puVar6 >> 0x20);
      uStack_1a8 = (undefined4)uVar4;
      uStack_1a4 = (undefined4)(uVar4 >> 0x20);
      uStack_1a0 = (undefined4)uVar5;
      uStack_19c = (undefined4)(uVar5 >> 0x20);
      uStack_150 = uStack_1a8;
      uStack_14c = uStack_1a4;
      uStack_148 = uStack_1a0;
      uStack_144 = uStack_19c;
      uStack_160 = uStack_1b8;
      uStack_15c = uStack_1b4;
      uStack_158 = uStack_1b0;
      uStack_154 = uStack_1ac;
      uStack_170 = uStack_1c8;
      uStack_16c = uStack_1c4;
      uStack_168 = uStack_1c0;
      uStack_164 = uStack_1bc;
      uStack_140._0_4_ = (uint)*puVar2;
      uVar8 = (uint)uStack_140;
      uVar14 = uVar7;
      uStack_178 = uVar11;
      uStack_140 = *puVar2;
      ppuStack_138 = ppuVar15;
      uStack_130 = uVar7;
      lVar9 = pdb_140f3eaf0(ppuVar15);
      if (lVar9 == 0) {
LAB_140b262a5:
        uStack_108 = uStack_108 & 0xffffffff00000000;
        puStack_100 = (undefined *)0x0;
        uStack_f8 = 7;
        uStack_e8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_ee = 0;
        uStack_ef = 1;
        uStack_ed = 1;
        uStack_ec = 1;
        uVar10 = pdb_140f4a2a0(&uStack_108,ppuVar15,uVar7);
        uVar11 = pdb_1417078f0(uVar10);
        ppuVar13 = ppuVar15;
        ppuStack_58 = ppuVar15;
        if ((uVar11 & 1) != 0) goto LAB_140b263e5;
        pdb_14007ee60();
        pcVar12 = (code *)pub_1406abab0(0x2000,1);
        if (pcVar12 == (code *)0x0) {
          pdb_142dc7e2a(1,0x2000);
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        puStack_90 = (ulonglong *)0x2000;
        ppuStack_80 = (undefined8 ***)0x0;
        pcStack_78 = (code *)((ulonglong)pcStack_78 & 0xffffffffffffff00);
        ppuStack_70 = ppuStack_58;
        ppuStack_68 = &puStack_90;
        uStack_60 = 0x105;
        pcStack_88 = pcVar12;
        pdb_140aa6530(&uStack_108,&ppuStack_68,uVar4,uVar5,uVar8 & 0xffff,uVar8 >> 0x10,0x10);
        ppuVar13 = (ulonglong **)pdb_1417074c0(&uStack_108,&ppuStack_138);
        pdb_14099b2a0(&puStack_90);
        if (ppuVar13 != (ulonglong **)0x0) goto LAB_140b263e5;
        if (2 < *_DAT_143ca8e90) {
          puStack_90 = &uStack_178;
          pcStack_88 = pdb_140f58250;
          uStack_108 = 0;
          puStack_100 = &UNK_143056bb6;
          uStack_f8 = 0x3f;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ef = 0;
          uStack_ee = 0;
          uStack_ed = 0;
          uStack_ec = 0;
          uStack_e8 = 0x2d;
          uStack_e7 = 0x143056b;
          uStack_e0 = 0x49;
          uStack_d8 = 3;
          puStack_d0 = &UNK_143056bb6;
          uStack_c8 = 0x3f;
          uStack_c0 = 0x6a00000001;
          puStack_b8 = &UNK_143056bf5;
          ppuStack_b0 = &puStack_90;
          pdb_140f332f0(&uStack_4a,&uStack_108);
        }
      }
      else {
        uStack_108 = CONCAT71(uStack_108._1_7_,1);
        lStack_188 = lVar9;
        uStack_180 = uVar14;
        uVar10 = pdb_140f46c40(&uStack_108,lVar9,uVar14);
        ppuStack_58 = (undefined8 **)pdb_1417067f0(uVar10,&lStack_188);
        ppuVar13 = ppuStack_58;
        if (ppuStack_58 == (ulonglong **)0x0) goto LAB_140b262a5;
LAB_140b263e5:
        ppuStack_68 = ppuVar13;
        if (*_DAT_143ca8e90 != 0) {
          puStack_90 = &uStack_178;
          pcStack_88 = pdb_140f58250;
          ppuStack_80 = &ppuStack_68;
          pcStack_78 = pdb_140f36c30;
          uStack_108 = 0;
          puStack_100 = &UNK_143056bb6;
          uStack_f8 = 0x3f;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ef = 0;
          uStack_ee = 0;
          uStack_ed = 0;
          uStack_ec = 0;
          uStack_e8 = 0x2d;
          uStack_e7 = 0x143056b;
          uStack_e0 = 0x49;
          uStack_d8 = 1;
          puStack_d0 = &UNK_143056bb6;
          uStack_c8 = 0x3f;
          uStack_c0 = 0x6800000001;
          puStack_b8 = &UNK_143056b90;
          ppuStack_b0 = &puStack_90;
          pdb_140f332f0(&uStack_4a,&uStack_108);
        }
        pdb_140f36c40(&ppuStack_68);
      }
      pdb_140989660(&uStack_158);
      if (uStack_178 != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_16c,uStack_170),uStack_178,1);
      }
    }
    uStack_49 = 0;
    pdb_140976410(&puStack_128);
  }
  return;
}

