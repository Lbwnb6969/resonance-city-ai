// VA 0x140a79030, PDB extent 2311 bytes
// country_core::resources::world_raster::impl$3::rasterize_stroke<512,core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec3::Vec3>,country_core::resources::raster_stroke::impl$2::iter_points_xz::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::world_raster::impl$3::rasterize_stroke<512,core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec3::Vec3>,country_core::resources::raster_stroke::impl$2::iter_points_xz::closure_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 2311 */

void pdb_140a79030(longlong param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  float param_5,byte param_6,int param_7,float param_8)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  byte *pbVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  longlong *plVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined4 *puVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  ulonglong uStack_19c;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte *pbStack_180;
  longlong lStack_178;
  undefined4 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 uStack_124;
  undefined2 uStack_123;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong lStack_f0;
  undefined4 uStack_e4;
  longlong lStack_e0;
  byte *pbStack_d8;
  longlong lStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  char cStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  puVar19 = (undefined8 *)((longlong)param_4 - (longlong)param_3);
  if (puVar19 < (undefined8 *)0x18) {
    return;
  }
  lStack_f0 = param_1;
  cVar11 = pdb_140e94b40();
  plStack_c0 = (longlong *)CONCAT71(plStack_c0._1_7_,cVar11);
  cStack_b1 = param_2;
  if (cVar11 == '\0') {
    uStack_110 = 0;
    goto LAB_140a7929b;
  }
  plVar21 = (longlong *)&UNK_143042444;
  puVar24 = (undefined4 *)0x83;
  uVar18 = 0x83;
  lVar13 = pdb_140a7a9e0(&UNK_143042444);
  if (lVar13 == 1) {
    if (0x83 < uVar18) {
LAB_140a79674:
      pdb_142dc8070(&UNK_143042444,0x83,0);
LAB_140a79694:
      pdb_142dc8070(&UNK_143042444,0x83);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar21 = (longlong *)&UNK_143042444;
    uVar14 = pdb_140a7a9e0(&UNK_143042444);
    if ((uVar14 & 1) != 0) {
      if (0x83 < uVar18 + 2) goto LAB_140a79694;
      puVar24 = (undefined4 *)(0x81 - uVar18);
      plVar21 = (longlong *)(&UNK_143042446 + uVar18);
    }
  }
  puVar20 = &UNK_1430420e1;
  puVar22 = &UNK_1430420b0;
  do {
    bVar3 = puVar20[-1];
    uVar12 = (uint)(char)bVar3;
    if ((char)bVar3 < '\0') {
      bVar4 = puVar20[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar20[-3];
        if ((char)bVar5 < -0x40) {
          pbVar16 = puVar20 + -4;
          puVar20 = puVar20 + -4;
          uVar12 = bVar5 & 0x3f | (*pbVar16 & 7) << 6;
        }
        else {
          puVar20 = puVar20 + -3;
          uVar12 = bVar5 & 0xf;
        }
        uVar12 = bVar4 & 0x3f | uVar12 << 6;
      }
      else {
        puVar20 = puVar20 + -2;
        uVar12 = bVar4 & 0x1f;
      }
      uVar12 = (uint)(bVar3 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_140a791f4;
LAB_140a7920d:
      puVar22 = puVar20 + -0x1430420af;
      if ((undefined *)0x31 < puVar22) {
        pdb_142dc8070(&UNK_1430420b0,0x31,puVar22,0x31,&UNK_1430425b0);
        goto LAB_140a79674;
      }
      lVar13 = 0x31 - (longlong)puVar22;
      puVar22 = puVar20 + 1;
      goto LAB_140a79230;
    }
    puVar20 = puVar20 + -1;
    if (uVar12 == 0x5c) goto LAB_140a7920d;
LAB_140a791f4:
    if (uVar12 == 0x2f) goto LAB_140a7920d;
  } while (puVar20 != &UNK_1430420b0);
  lVar13 = 0x31;
LAB_140a79230:
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_140a795f6;
  do {
    if (*plVar15 == 0) {
      *plVar15 = -1;
      plStack_c8 = plVar15;
      uStack_108 = pdb_140e94f10(plVar15 + 1,plVar21,puVar24,puVar22,lVar13,1,0);
      *plStack_c8 = *plStack_c8 + 1;
      uStack_110 = 1;
      plStack_c8 = (longlong *)uStack_108;
LAB_140a7929b:
      lVar13 = ((ulonglong)puVar19 >> 2) * -0x5555555555555555;
      uVar18 = ((ulonglong)puVar19 >> 2) * -0x555555555555554c;
      if ((undefined8 *)0x36db6db6db6db6d8 < puVar19) {
        uVar23 = 0;
LAB_140a792d1:
        pdb_142dc7e2a(uVar23,uVar18);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (uVar18 == 0) {
        pbVar16 = (byte *)0x4;
        lVar13 = 0;
      }
      else {
        pdb_14007ee60();
        uVar23 = 4;
        pbVar16 = pub_1406abab0(uVar18,4);
        if (pbVar16 == (byte *)0x0) goto LAB_140a792d1;
      }
      lVar10 = lStack_f0;
      lStack_d0 = 0;
      lStack_e0 = lVar13;
      pbStack_d8 = pbVar16;
      if (param_3 == param_4) goto LAB_140a79642;
      uVar17 = *param_3;
      uVar2 = param_3[2];
      if (lVar13 == 0) {
        pdb_142def110(&lStack_e0);
      }
      fVar25 = (param_5 / _DAT_143006a28) * _DAT_142e61210;
      auVar27._4_4_ = uVar2;
      auVar27._0_4_ = uVar17;
      auVar27._8_8_ = 0;
      auVar27 = divps(auVar27,_DAT_142e61200);
      fVar26 = (auVar27._0_4_ + _DAT_142e36f60) * _DAT_142e61220;
      fVar28 = (auVar27._4_4_ + _UNK_142e36f64) * _UNK_142e61224;
      puVar22 = (undefined *)(ulonglong)param_6;
      pbStack_d8[0] = 0;
      pbStack_d8[1] = 0;
      pbStack_d8[2] = 0;
      pbStack_d8[3] = 0;
      *(ulonglong *)(pbStack_d8 + 4) = CONCAT44(fVar28,fVar26);
      fVar9 = _UNK_142e61224;
      fVar8 = _DAT_142e61220;
      auVar27 = _DAT_142e61200;
      fVar28 = _UNK_142e36f64;
      fVar26 = _DAT_142e36f60;
      lVar13 = 1;
      plVar21 = &lStack_e0;
      while (puVar24 = param_3 + 3, lStack_d0 = lVar13, puVar24 != param_4) {
        auVar29._4_4_ = param_3[5];
        auVar29._0_4_ = param_3[3];
        auVar29._8_8_ = 0;
        auVar29 = divps(auVar29,auVar27);
        if (lVar13 == lStack_e0) {
          pdb_142def110(plVar21);
        }
        pbVar16 = pbStack_d8 + lVar13 * 0x1c;
        pbVar16[0] = 1;
        pbVar16[1] = 0;
        pbVar16[2] = 0;
        pbVar16[3] = 0;
        *(float *)(pbStack_d8 + lVar13 * 0x1c + 4) = (auVar29._0_4_ + fVar26) * fVar8;
        *(float *)((longlong)(pbStack_d8 + lVar13 * 0x1c + 4) + 4) =
             (auVar29._4_4_ + fVar28) * fVar9;
        lVar13 = lVar13 + 1;
        param_3 = puVar24;
      }
      puVar1 = (undefined8 *)(lVar10 + 0x20);
      puVar19 = (undefined8 *)(lVar10 + 0x28);
      if (cStack_b1 == '\0') {
        puVar19 = (undefined8 *)(lVar10 + 0x10);
        puVar1 = (undefined8 *)(lVar10 + 8);
      }
      uVar23 = *puVar19;
      uVar6 = *puVar1;
      fStack_1a0 = fVar25 + fVar25;
      pbStack_180 = pbStack_d8;
      uStack_124 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_150 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_170 = 0;
      uStack_1b0 = 4;
      uStack_1a8 = 0;
      uStack_19c = (ulonglong)_DAT_142e37adc;
      uStack_194 = 0x1020202;
      uStack_148 = 0x20000000200;
      uStack_123 = 0x101;
      lStack_178 = lVar13;
      if (param_7 == 1) {
        if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143042100,0xf,&UNK_143042110);
        }
        fVar26 = 0.0;
        if (0.0 <= param_8) {
          fVar26 = param_8;
        }
        fVar28 = _DAT_142e36f28;
        if (fVar26 <= _DAT_142e36f28) {
          fVar28 = fVar26;
        }
        fVar28 = fVar28 * _DAT_143041c60;
        uVar17 = 0;
        if (0.0 <= fVar28) {
          uVar17 = (undefined4)(longlong)fVar28;
        }
        uStack_e4 = 0xffffffff;
        if (fVar28 <= _DAT_142e46a48) {
          uStack_e4 = uVar17;
        }
        pdb_141164d70(auStack_120,&uStack_1b0,uVar6,uVar23,&uStack_e4,0);
      }
      else if (param_6 == 0) {
        pdb_141163dd0(auStack_120,&uStack_1b0,uVar6,uVar23,0);
      }
      else {
        pdb_1411645a0(auStack_120,&uStack_1b0,uVar6,uVar23,0);
      }
      if (lStack_e0 != 0) {
        pub_1406abac0(pbStack_d8,lStack_e0 * 0x1c,4);
      }
      if ((char)plStack_c0 == '\0') {
        return;
      }
      plVar15 = (longlong *)pdb_140e97000();
      if (((char)plVar15[0xd] != '\x01') &&
         (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 == (longlong *)0x0)) break;
      if (*plVar15 == 0) {
        *plVar15 = -1;
        plStack_c0 = plVar15;
        pdb_140e95370(plVar15 + 1,plStack_c8);
        *plStack_c0 = *plStack_c0 + 1;
        return;
      }
    }
    plVar15 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a795f6:
    plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
  } while (plVar15 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140a79642:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430420e8);
}

