// VA 0x140957070, PDB extent 3723 bytes
// country_core::render::nani::gpu_world::GpuWorld::create_instances<country_core::resources::placement_data::PlacementDataSsbo,country_core::systems::prefab::create_prefab_gpu_instances::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::GpuWorld::create_instances<country_core::resources::placement_data::PlacementDataSsbo,country_core::systems::prefab::create_prefab_gpu_instances::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 3723 */

void pdb_140957070(longlong param_1,byte param_2,longlong param_3,ulonglong param_4,longlong param_5
                  ,ulonglong param_6,longlong *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  ulonglong *puVar25;
  char *pcVar26;
  char cVar27;
  longlong *plVar28;
  byte *pbVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  ulonglong *puVar39;
  undefined8 *puVar40;
  ulonglong uVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  longlong *plStack_138;
  longlong lStack_130;
  char cStack_128;
  char cStack_127;
  char cStack_126;
  char cStack_125;
  char cStack_124;
  char cStack_123;
  char cStack_122;
  char cStack_121;
  char cStack_120;
  char cStack_11f;
  char cStack_11e;
  char cStack_11d;
  char cStack_11c;
  char cStack_11b;
  char cStack_11a;
  char cStack_119;
  ulonglong *puStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  ulonglong uStack_c0;
  undefined8 **ppuStack_b8;
  code *pcStack_b0;
  ulonglong *puStack_a8;
  char *pcStack_a0;
  undefined8 **ppuStack_98;
  code *pcStack_90;
  ulonglong *puStack_88;
  undefined1 uStack_74;
  byte bStack_73;
  undefined1 auStack_72 [50];
  
  auStack_72._2_8_ = 0xfffffffffffffffe;
  uVar36 = (ulonglong)param_2;
  uVar41 = *(ulonglong *)(param_1 + 0x1258 + (ulonglong)((uint)param_2 * 8));
  lStack_158 = param_3;
  bStack_73 = param_2;
  plVar28 = (longlong *)pdb_1409d2d80();
  cVar24 = UNK_14302538f;
  cVar23 = UNK_14302538e;
  cVar22 = UNK_14302538d;
  cVar21 = UNK_14302538c;
  cVar20 = UNK_14302538b;
  cVar19 = UNK_14302538a;
  cVar18 = UNK_143025389;
  cVar17 = UNK_143025388;
  cVar16 = UNK_143025387;
  cVar15 = UNK_143025386;
  cVar14 = UNK_143025385;
  cVar13 = UNK_143025384;
  cVar12 = UNK_143025383;
  cVar11 = UNK_143025382;
  cVar10 = UNK_143025381;
  cVar9 = DAT_143025380;
  uStack_170 = *(ulonglong *)(&UNK_143026e60 + (uint)param_2 * 8);
  lVar32 = *(longlong *)(param_1 + 0x28);
  uStack_160 = uStack_170;
  uStack_c0 = uVar41;
  auStack_72[0] = param_2;
  if (param_4 == 0) {
LAB_140957993:
    pdb_140e9a350(plVar28,lVar32);
    pdb_140e9a350();
    LOCK();
    lVar32 = *plVar28;
    if (lVar32 == 8) {
      *plVar28 = 0;
    }
    UNLOCK();
    if (lVar32 != 8) {
      pdb_142dbca40(plVar28,0);
    }
    pdb_1409d2e70(param_1,bStack_73,uVar41,uStack_c0);
    *(longlong *)(param_1 + 0x1340) = *(longlong *)(param_1 + 0x1340) + param_4;
    return;
  }
  lStack_130 = *(longlong *)(param_1 + 0x28) + 0x10;
  if (param_4 <= param_6) {
    param_6 = param_4;
  }
  uVar37 = 0;
  uStack_168 = param_6;
  uStack_150 = param_4;
  lStack_148 = param_1;
  uStack_140 = uVar41;
  plStack_138 = plVar28;
  do {
    uVar33 = uVar37;
    uVar30 = uStack_c0 * 2;
    if (uStack_160 < uStack_c0 * 2) {
      uVar30 = uStack_160;
    }
    while( true ) {
      lVar32 = lStack_130;
      plVar28 = plStack_138;
      uVar41 = uStack_140;
      param_4 = uStack_150;
      param_1 = lStack_148;
      if (uStack_168 <= uVar33) goto LAB_140957993;
      uVar37 = uVar33 + 1;
      uVar41 = uStack_c0;
      if (*(ulonglong *)(uVar36 + 0x80) < uStack_c0) break;
      if (uVar30 == uStack_c0) {
        cStack_128 = (char)auStack_72;
        cStack_127 = (char)((ulonglong)auStack_72 >> 8);
        cStack_126 = (char)((ulonglong)auStack_72 >> 0x10);
        cStack_125 = (char)((ulonglong)auStack_72 >> 0x18);
        cStack_124 = (char)((ulonglong)auStack_72 >> 0x20);
        cStack_123 = (char)((ulonglong)auStack_72 >> 0x28);
        cStack_122 = (char)((ulonglong)auStack_72 >> 0x30);
        cStack_121 = (char)((ulonglong)auStack_72 >> 0x38);
        cStack_120 = '@';
        cStack_11f = '\x06';
        cStack_11e = -0x6a;
        cStack_11d = '@';
        cStack_11c = '\x01';
        cStack_11b = '\0';
        cStack_11a = '\0';
        cStack_119 = '\0';
        puStack_118 = &uStack_170;
        pcStack_110 = pdb_140f72a40;
        pdb_140f60760(&ppuStack_98,&UNK_143025e7b,&cStack_128);
        ppuStack_b8 = ppuStack_98;
        pcStack_b0 = pcStack_90;
        puStack_a8 = puStack_88;
        if (_DAT_143ca42b4 != 0) {
          ppuStack_98 = (undefined8 **)CONCAT71(ppuStack_98._1_7_,1);
          cStack_128 = (char)&ppuStack_98;
          cStack_127 = (char)((ulonglong)&ppuStack_98 >> 8);
          cStack_126 = (char)((ulonglong)&ppuStack_98 >> 0x10);
          cStack_125 = (char)((ulonglong)&ppuStack_98 >> 0x18);
          cStack_124 = (char)((ulonglong)&ppuStack_98 >> 0x20);
          cStack_123 = (char)((ulonglong)&ppuStack_98 >> 0x28);
          cStack_122 = (char)((ulonglong)&ppuStack_98 >> 0x30);
          cStack_121 = (char)((ulonglong)&ppuStack_98 >> 0x38);
          pdb_142dc7060(&DAT_143ca42b4,0,&cStack_128,&UNK_1430267c0,&UNK_143026220);
        }
        pdb_1400f0d40(&cStack_128,_DAT_143cb2cb0);
        if (CONCAT13(cStack_125,CONCAT12(cStack_126,CONCAT11(cStack_127,cStack_128))) == 1) {
          ppuStack_98 = (undefined8 **)
                        CONCAT17(cStack_119,
                                 CONCAT16(cStack_11a,
                                          CONCAT15(cStack_11b,
                                                   CONCAT14(cStack_11c,
                                                            CONCAT13(cStack_11d,
                                                                     CONCAT12(cStack_11e,
                                                                              CONCAT11(cStack_11f,
                                                                                       cStack_120)))
                                                           ))));
          pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,(char)puStack_118);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143025e2a,0x13,&ppuStack_98,&UNK_143026e00,&UNK_143026220);
        }
        pcStack_a0 = (char *)CONCAT17(cStack_119,
                                      CONCAT16(cStack_11a,
                                               CONCAT15(cStack_11b,
                                                        CONCAT14(cStack_11c,
                                                                 CONCAT13(cStack_11d,
                                                                          CONCAT12(cStack_11e,
                                                                                   CONCAT11(
                                                  cStack_11f,cStack_120)))))));
        auStack_72[1] = (char)puStack_118;
        pdb_14007ee60();
        pbVar29 = pub_1406abab0(0xf,1);
        if (pbVar29 == (byte *)0x0) {
          pdb_142dc7e2a(1,0xf);
          goto LAB_140957ae5;
        }
        pbVar29[7] = 0x70;
        pbVar29[8] = 0x61;
        pbVar29[9] = 0x74;
        pbVar29[10] = 0x68;
        pbVar29[0xb] = 0x21;
        pbVar29[0xc] = 0x20;
        pbVar29[0xd] = 0x28;
        pbVar29[0xe] = 0x29;
        pbVar29[0] = 0x6d;
        pbVar29[1] = 0x6f;
        pbVar29[2] = 100;
        pbVar29[3] = 0x75;
        pbVar29[4] = 0x6c;
        pbVar29[5] = 0x65;
        pbVar29[6] = 0x5f;
        pbVar29[7] = 0x70;
        cStack_128 = '\x0f';
        cStack_127 = 0;
        cStack_126 = 0;
        cStack_125 = 0;
        cStack_124 = 0;
        cStack_123 = 0;
        cStack_122 = 0;
        cStack_121 = 0;
        cStack_120 = (char)pbVar29;
        cStack_11f = (char)((ulonglong)pbVar29 >> 8);
        cStack_11e = (char)((ulonglong)pbVar29 >> 0x10);
        cStack_11d = (char)((ulonglong)pbVar29 >> 0x18);
        cStack_11c = (char)((ulonglong)pbVar29 >> 0x20);
        cStack_11b = (char)((ulonglong)pbVar29 >> 0x28);
        cStack_11a = (char)((ulonglong)pbVar29 >> 0x30);
        cStack_119 = (char)((ulonglong)pbVar29 >> 0x38);
        puStack_118 = (ulonglong *)0xf;
        pdb_142d7f1b0(&cStack_128,0xf,0x17,1,1);
        puVar25 = puStack_a8;
        pcVar3 = pcStack_b0;
        uVar4 = _UNK_143025e45;
        lVar32 = CONCAT17(cStack_119,
                          CONCAT16(cStack_11a,
                                   CONCAT15(cStack_11b,
                                            CONCAT14(cStack_11c,
                                                     CONCAT13(cStack_11d,
                                                              CONCAT12(cStack_11e,
                                                                       CONCAT11(cStack_11f,
                                                                                cStack_120)))))));
        puVar38 = (undefined8 *)(lVar32 + (longlong)puStack_118);
        *puVar38 = _DAT_143025e3d;
        puVar38[1] = uVar4;
        *(undefined8 *)(lVar32 + 0xf + (longlong)puStack_118) = 0x6e726157203a3a20;
        puVar39 = (ulonglong *)((longlong)puStack_118 + 0x17);
        ppuStack_98 = (undefined8 **)
                      CONCAT17(cStack_121,
                               CONCAT16(cStack_122,
                                        CONCAT15(cStack_123,
                                                 CONCAT14(cStack_124,
                                                          CONCAT13(cStack_125,
                                                                   CONCAT12(cStack_126,
                                                                            CONCAT11(cStack_127,
                                                                                     cStack_128)))))
                                       ));
        pcStack_90 = (code *)CONCAT17(cStack_119,
                                      CONCAT16(cStack_11a,
                                               CONCAT15(cStack_11b,
                                                        CONCAT14(cStack_11c,
                                                                 CONCAT13(cStack_11d,
                                                                          CONCAT12(cStack_11e,
                                                                                   CONCAT11(
                                                  cStack_11f,cStack_120)))))));
        puStack_88 = puVar39;
        if ((ulonglong *)((longlong)ppuStack_98 - (longlong)puVar39) < puStack_a8) {
          pdb_142d7f1b0(&ppuStack_98,puVar39,puStack_a8,1,1);
LAB_1409572eb:
          puVar39 = puStack_88;
          pub_142e32760(pcStack_90 + (longlong)puStack_88,pcVar3,puVar25);
        }
        else if (puStack_a8 != (ulonglong *)0x0) goto LAB_1409572eb;
        puStack_118 = (ulonglong *)((longlong)puVar39 + (longlong)puVar25);
        cStack_128 = (char)ppuStack_98;
        cStack_127 = (char)((ulonglong)ppuStack_98 >> 8);
        cStack_126 = (char)((ulonglong)ppuStack_98 >> 0x10);
        cStack_125 = (char)((ulonglong)ppuStack_98 >> 0x18);
        cStack_124 = (char)((ulonglong)ppuStack_98 >> 0x20);
        cStack_123 = (char)((ulonglong)ppuStack_98 >> 0x28);
        cStack_122 = (char)((ulonglong)ppuStack_98 >> 0x30);
        cStack_121 = (char)((ulonglong)ppuStack_98 >> 0x38);
        cStack_120 = (char)pcStack_90;
        cStack_11f = (char)((ulonglong)pcStack_90 >> 8);
        cStack_11e = (char)((ulonglong)pcStack_90 >> 0x10);
        cStack_11d = (char)((ulonglong)pcStack_90 >> 0x18);
        cStack_11c = (char)((ulonglong)pcStack_90 >> 0x20);
        cStack_11b = (char)((ulonglong)pcStack_90 >> 0x28);
        cStack_11a = (char)((ulonglong)pcStack_90 >> 0x30);
        cStack_119 = (char)((ulonglong)pcStack_90 >> 0x38);
        puStack_88 = puStack_118;
        cVar27 = pdb_14192b470(pcStack_a0 + 8,&cStack_128);
        if ((cVar27 == '\0') && (1 < *_DAT_143ca8e90)) {
          ppuStack_98 = &ppuStack_b8;
          pcStack_90 = pdb_140001020;
          cStack_128 = '\0';
          cStack_127 = '\0';
          cStack_126 = '\0';
          cStack_125 = '\0';
          cStack_124 = '\0';
          cStack_123 = '\0';
          cStack_122 = '\0';
          cStack_121 = '\0';
          cStack_120 = 'V';
          cStack_11f = '^';
          cStack_11e = '\x02';
          cStack_11d = 'C';
          cStack_11c = '\x01';
          cStack_11b = '\0';
          cStack_11a = '\0';
          cStack_119 = '\0';
          puStack_118 = (ulonglong *)0x25;
          pcStack_110 = (code *)0x0;
          puStack_108 = &UNK_1430254f3;
          uStack_100 = 0x30;
          uStack_f8 = 2;
          puStack_f0 = &UNK_143025e56;
          uStack_e8 = 0x25;
          uStack_e0 = 0x2a500000001;
          puStack_d8 = &UNK_143025e54;
          ppuStack_d0 = &ppuStack_98;
          pdb_140f332f0(&uStack_74,&cStack_128);
        }
        pcVar26 = pcStack_a0;
        if (((auStack_72[1] == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
           (cVar27 = pdb_142dc79e0(), cVar27 == '\0')) {
          pcVar26[1] = '\x01';
        }
        LOCK();
        cVar27 = *pcVar26;
        *pcVar26 = '\0';
        UNLOCK();
        if (cVar27 == '\x02') {
          pdb_142dc6ca0(pcVar26);
        }
      }
      else {
        cVar27 = pdb_1409d1e50(uVar36,lStack_130,uVar30);
        uVar41 = uVar30;
        if (cVar27 != '\0') break;
        ppuStack_98 = (undefined8 **)auStack_72;
        pcStack_90 = pdb_140960640;
        pdb_140f60760(&cStack_128,&UNK_143025e08,&ppuStack_98);
        ppuStack_b8 = (undefined8 **)
                      CONCAT17(cStack_121,
                               CONCAT16(cStack_122,
                                        CONCAT15(cStack_123,
                                                 CONCAT14(cStack_124,
                                                          CONCAT13(cStack_125,
                                                                   CONCAT12(cStack_126,
                                                                            CONCAT11(cStack_127,
                                                                                     cStack_128)))))
                                       ));
        pcStack_b0 = (code *)CONCAT17(cStack_119,
                                      CONCAT16(cStack_11a,
                                               CONCAT15(cStack_11b,
                                                        CONCAT14(cStack_11c,
                                                                 CONCAT13(cStack_11d,
                                                                          CONCAT12(cStack_11e,
                                                                                   CONCAT11(
                                                  cStack_11f,cStack_120)))))));
        puStack_a8 = puStack_118;
        if (_DAT_143ca42b0 != 0) {
          ppuStack_98 = (undefined8 **)CONCAT71(ppuStack_98._1_7_,1);
          cStack_128 = (char)&ppuStack_98;
          cStack_127 = (char)((ulonglong)&ppuStack_98 >> 8);
          cStack_126 = (char)((ulonglong)&ppuStack_98 >> 0x10);
          cStack_125 = (char)((ulonglong)&ppuStack_98 >> 0x18);
          cStack_124 = (char)((ulonglong)&ppuStack_98 >> 0x20);
          cStack_123 = (char)((ulonglong)&ppuStack_98 >> 0x28);
          cStack_122 = (char)((ulonglong)&ppuStack_98 >> 0x30);
          cStack_121 = (char)((ulonglong)&ppuStack_98 >> 0x38);
          pdb_142dc7060(&DAT_143ca42b0,0,&cStack_128,&UNK_143026798,&UNK_143026220);
        }
        pdb_1400f0d40(&cStack_128,_DAT_143cb2ca8);
        if (CONCAT13(cStack_125,CONCAT12(cStack_126,CONCAT11(cStack_127,cStack_128))) == 1) {
          ppuStack_98 = (undefined8 **)
                        CONCAT17(cStack_119,
                                 CONCAT16(cStack_11a,
                                          CONCAT15(cStack_11b,
                                                   CONCAT14(cStack_11c,
                                                            CONCAT13(cStack_11d,
                                                                     CONCAT12(cStack_11e,
                                                                              CONCAT11(cStack_11f,
                                                                                       cStack_120)))
                                                           ))));
          pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,(char)puStack_118);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143025e2a,0x13,&ppuStack_98,&UNK_143026e00,&UNK_143026220);
        }
        pcStack_a0 = (char *)CONCAT17(cStack_119,
                                      CONCAT16(cStack_11a,
                                               CONCAT15(cStack_11b,
                                                        CONCAT14(cStack_11c,
                                                                 CONCAT13(cStack_11d,
                                                                          CONCAT12(cStack_11e,
                                                                                   CONCAT11(
                                                  cStack_11f,cStack_120)))))));
        auStack_72[1] = (char)puStack_118;
        pdb_14007ee60();
        pbVar29 = pub_1406abab0(0xf,1);
        if (pbVar29 == (byte *)0x0) {
          pdb_142dc7e2a(1,0xf);
          goto LAB_140957ae5;
        }
        pbVar29[7] = 0x70;
        pbVar29[8] = 0x61;
        pbVar29[9] = 0x74;
        pbVar29[10] = 0x68;
        pbVar29[0xb] = 0x21;
        pbVar29[0xc] = 0x20;
        pbVar29[0xd] = 0x28;
        pbVar29[0xe] = 0x29;
        pbVar29[0] = 0x6d;
        pbVar29[1] = 0x6f;
        pbVar29[2] = 100;
        pbVar29[3] = 0x75;
        pbVar29[4] = 0x6c;
        pbVar29[5] = 0x65;
        pbVar29[6] = 0x5f;
        pbVar29[7] = 0x70;
        cStack_128 = '\x0f';
        cStack_127 = 0;
        cStack_126 = 0;
        cStack_125 = 0;
        cStack_124 = 0;
        cStack_123 = 0;
        cStack_122 = 0;
        cStack_121 = 0;
        cStack_120 = (char)pbVar29;
        cStack_11f = (char)((ulonglong)pbVar29 >> 8);
        cStack_11e = (char)((ulonglong)pbVar29 >> 0x10);
        cStack_11d = (char)((ulonglong)pbVar29 >> 0x18);
        cStack_11c = (char)((ulonglong)pbVar29 >> 0x20);
        cStack_11b = (char)((ulonglong)pbVar29 >> 0x28);
        cStack_11a = (char)((ulonglong)pbVar29 >> 0x30);
        cStack_119 = (char)((ulonglong)pbVar29 >> 0x38);
        puStack_118 = (ulonglong *)0xf;
        pdb_142d7f1b0(&cStack_128,0xf,0x17,1,1);
        puVar25 = puStack_a8;
        pcVar3 = pcStack_b0;
        uVar4 = _UNK_143025e45;
        lVar32 = CONCAT17(cStack_119,
                          CONCAT16(cStack_11a,
                                   CONCAT15(cStack_11b,
                                            CONCAT14(cStack_11c,
                                                     CONCAT13(cStack_11d,
                                                              CONCAT12(cStack_11e,
                                                                       CONCAT11(cStack_11f,
                                                                                cStack_120)))))));
        puVar38 = (undefined8 *)(lVar32 + (longlong)puStack_118);
        *puVar38 = _DAT_143025e3d;
        puVar38[1] = uVar4;
        *(undefined8 *)(lVar32 + 0xf + (longlong)puStack_118) = 0x6e726157203a3a20;
        puVar39 = (ulonglong *)((longlong)puStack_118 + 0x17);
        ppuStack_98 = (undefined8 **)
                      CONCAT17(cStack_121,
                               CONCAT16(cStack_122,
                                        CONCAT15(cStack_123,
                                                 CONCAT14(cStack_124,
                                                          CONCAT13(cStack_125,
                                                                   CONCAT12(cStack_126,
                                                                            CONCAT11(cStack_127,
                                                                                     cStack_128)))))
                                       ));
        pcStack_90 = (code *)CONCAT17(cStack_119,
                                      CONCAT16(cStack_11a,
                                               CONCAT15(cStack_11b,
                                                        CONCAT14(cStack_11c,
                                                                 CONCAT13(cStack_11d,
                                                                          CONCAT12(cStack_11e,
                                                                                   CONCAT11(
                                                  cStack_11f,cStack_120)))))));
        puStack_88 = puVar39;
        if ((ulonglong *)((longlong)ppuStack_98 - (longlong)puVar39) < puStack_a8) {
          pdb_142d7f1b0(&ppuStack_98,puVar39,puStack_a8,1,1);
LAB_14095757c:
          puVar39 = puStack_88;
          pub_142e32760(pcStack_90 + (longlong)puStack_88,pcVar3,puVar25);
        }
        else if (puStack_a8 != (ulonglong *)0x0) goto LAB_14095757c;
        puStack_118 = (ulonglong *)((longlong)puVar39 + (longlong)puVar25);
        cStack_128 = (char)ppuStack_98;
        cStack_127 = (char)((ulonglong)ppuStack_98 >> 8);
        cStack_126 = (char)((ulonglong)ppuStack_98 >> 0x10);
        cStack_125 = (char)((ulonglong)ppuStack_98 >> 0x18);
        cStack_124 = (char)((ulonglong)ppuStack_98 >> 0x20);
        cStack_123 = (char)((ulonglong)ppuStack_98 >> 0x28);
        cStack_122 = (char)((ulonglong)ppuStack_98 >> 0x30);
        cStack_121 = (char)((ulonglong)ppuStack_98 >> 0x38);
        cStack_120 = (char)pcStack_90;
        cStack_11f = (char)((ulonglong)pcStack_90 >> 8);
        cStack_11e = (char)((ulonglong)pcStack_90 >> 0x10);
        cStack_11d = (char)((ulonglong)pcStack_90 >> 0x18);
        cStack_11c = (char)((ulonglong)pcStack_90 >> 0x20);
        cStack_11b = (char)((ulonglong)pcStack_90 >> 0x28);
        cStack_11a = (char)((ulonglong)pcStack_90 >> 0x30);
        cStack_119 = (char)((ulonglong)pcStack_90 >> 0x38);
        puStack_88 = puStack_118;
        cVar27 = pdb_14192b470(pcStack_a0 + 8,&cStack_128);
        if ((cVar27 == '\0') && (1 < *_DAT_143ca8e90)) {
          ppuStack_98 = &ppuStack_b8;
          pcStack_90 = pdb_140001020;
          cStack_128 = '\0';
          cStack_127 = '\0';
          cStack_126 = '\0';
          cStack_125 = '\0';
          cStack_124 = '\0';
          cStack_123 = '\0';
          cStack_122 = '\0';
          cStack_121 = '\0';
          cStack_120 = 'V';
          cStack_11f = '^';
          cStack_11e = '\x02';
          cStack_11d = 'C';
          cStack_11c = '\x01';
          cStack_11b = '\0';
          cStack_11a = '\0';
          cStack_119 = '\0';
          puStack_118 = (ulonglong *)0x25;
          pcStack_110 = (code *)0x0;
          puStack_108 = &UNK_1430254f3;
          uStack_100 = 0x30;
          uStack_f8 = 2;
          puStack_f0 = &UNK_143025e56;
          uStack_e8 = 0x25;
          uStack_e0 = 0x2a500000001;
          puStack_d8 = &UNK_143025e54;
          ppuStack_d0 = &ppuStack_98;
          pdb_140f332f0(&uStack_74,&cStack_128);
        }
        pcVar26 = pcStack_a0;
        if (((auStack_72[1] == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
           (cVar27 = pdb_142dc79e0(), cVar27 == '\0')) {
          pcVar26[1] = '\x01';
        }
        LOCK();
        cVar27 = *pcVar26;
        *pcVar26 = '\0';
        UNLOCK();
        if (cVar27 == '\x02') {
          pdb_142dc6ca0(pcVar26);
        }
      }
      uVar33 = uVar37;
      if ((undefined8 ***)ppuStack_b8 != (undefined8 ***)0x0) {
        pub_1406abac0((byte *)pcStack_b0,(ulonglong)ppuStack_b8,1);
      }
    }
    uStack_c0 = uVar41;
    puVar40 = (undefined8 *)(uVar33 * 0x10 + lStack_158);
    puVar38 = (undefined8 *)(uVar33 * 0x30 + param_5);
    do {
      *(int *)(uVar36 + 0x90) = *(int *)(uVar36 + 0x90) + 1;
      pdb_1416429a0(&cStack_128,uVar36);
    } while (CONCAT13(cStack_125,CONCAT12(cStack_126,CONCAT11(cStack_127,cStack_128))) == 1);
    uVar41 = (ulonglong)CONCAT13(cStack_11d,CONCAT12(cStack_11e,CONCAT11(cStack_11f,cStack_120)));
    uVar4 = CONCAT17(cStack_11d,
                     CONCAT16(cStack_11e,
                              CONCAT15(cStack_11f,
                                       CONCAT14(cStack_120,
                                                CONCAT13(cStack_121,
                                                         CONCAT12(cStack_122,
                                                                  CONCAT11(cStack_123,cStack_124))))
                                      )));
    lVar32 = param_7[2];
    if (lVar32 == *param_7) {
      pdb_142d7f010(param_7);
    }
    lVar2 = param_7[1];
    *(undefined8 *)(lVar2 + lVar32 * 0xc) = uVar4;
    *(byte *)(lVar2 + 8 + lVar32 * 0xc) = bStack_73;
    param_7[2] = lVar32 + 1;
    uVar33 = *(ulonglong *)(uVar36 + 0x58);
    if (uVar33 <= uVar41) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar41,uVar33,&UNK_143382cf0);
    }
    uVar4 = puVar40[1];
    puVar1 = (undefined8 *)(*(longlong *)(uVar36 + 0x50) + uVar41 * 0x10);
    *puVar1 = *puVar40;
    puVar1[1] = uVar4;
    uVar30 = *(ulonglong *)(uVar36 + 0x60);
    do {
      uVar34 = uVar41;
      if (uVar30 <= uVar41) {
        uVar34 = uVar30;
      }
      LOCK();
      uVar31 = *(ulonglong *)(uVar36 + 0x60);
      bVar42 = uVar30 == uVar31;
      if (bVar42) {
        *(ulonglong *)(uVar36 + 0x60) = uVar34;
        uVar31 = uVar30;
      }
      UNLOCK();
      uVar30 = uVar31;
    } while (!bVar42);
    uVar30 = *(ulonglong *)(uVar36 + 0x68);
    do {
      uVar34 = uVar41;
      if (uVar41 < uVar30) {
        uVar34 = uVar30;
      }
      LOCK();
      uVar31 = *(ulonglong *)(uVar36 + 0x68);
      bVar42 = uVar30 == uVar31;
      if (bVar42) {
        *(ulonglong *)(uVar36 + 0x68) = uVar34;
        uVar31 = uVar30;
      }
      UNLOCK();
      uVar30 = uVar31;
    } while (!bVar42);
    lVar32 = (**(code **)(*(longlong *)(uVar36 + 0x78) + 0x28))(*(undefined8 *)(uVar36 + 0x70));
    (**(code **)(uVar33 + 0x18))(&cStack_128,lVar32);
    auVar43[0] = -(cStack_128 == cVar9);
    auVar43[1] = -(cStack_127 == cVar10);
    auVar43[2] = -(cStack_126 == cVar11);
    auVar43[3] = -(cStack_125 == cVar12);
    auVar43[4] = -(cStack_124 == cVar13);
    auVar43[5] = -(cStack_123 == cVar14);
    auVar43[6] = -(cStack_122 == cVar15);
    auVar43[7] = -(cStack_121 == cVar16);
    auVar43[8] = -(cStack_120 == cVar17);
    auVar43[9] = -(cStack_11f == cVar18);
    auVar43[10] = -(cStack_11e == cVar19);
    auVar43[0xb] = -(cStack_11d == cVar20);
    auVar43[0xc] = -(cStack_11c == cVar21);
    auVar43[0xd] = -(cStack_11b == cVar22);
    auVar43[0xe] = -(cStack_11a == cVar23);
    auVar43[0xf] = -(cStack_119 == cVar24);
    if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf
                ) != 0xffff) {
      pdb_142d8e1d0(auStack_72);
LAB_140957ae5:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (*(ulonglong *)(lVar32 + 0x28) <= uVar41) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar41,*(ulonglong *)(lVar32 + 0x28),&UNK_143382cf0);
    }
    lVar2 = *(longlong *)(lVar32 + 0x20);
    lVar35 = uVar41 * 0x30;
    uVar4 = *puVar38;
    uVar5 = puVar38[1];
    uVar6 = puVar38[2];
    uVar7 = puVar38[3];
    uVar8 = puVar38[5];
    puVar40 = (undefined8 *)(lVar2 + 0x20 + lVar35);
    *puVar40 = puVar38[4];
    puVar40[1] = uVar8;
    puVar38 = (undefined8 *)(lVar2 + 0x10 + lVar35);
    *puVar38 = uVar6;
    puVar38[1] = uVar7;
    *(undefined8 *)(lVar2 + lVar35) = uVar4;
    ((undefined8 *)(lVar2 + lVar35))[1] = uVar5;
    uVar33 = *(ulonglong *)(lVar32 + 0x30);
    do {
      uVar30 = uVar41;
      if (uVar33 <= uVar41) {
        uVar30 = uVar33;
      }
      LOCK();
      uVar34 = *(ulonglong *)(lVar32 + 0x30);
      bVar42 = uVar33 == uVar34;
      if (bVar42) {
        *(ulonglong *)(lVar32 + 0x30) = uVar30;
        uVar34 = uVar33;
      }
      UNLOCK();
      uVar33 = uVar34;
    } while (!bVar42);
    uVar33 = *(ulonglong *)(lVar32 + 0x38);
    do {
      uVar30 = uVar41;
      if (uVar41 < uVar33) {
        uVar30 = uVar33;
      }
      LOCK();
      uVar34 = *(ulonglong *)(lVar32 + 0x38);
      bVar42 = uVar33 == uVar34;
      if (bVar42) {
        *(ulonglong *)(lVar32 + 0x38) = uVar30;
        uVar34 = uVar33;
      }
      UNLOCK();
      uVar33 = uVar34;
    } while (!bVar42);
    *(longlong *)(uVar36 + 0x80) = *(longlong *)(uVar36 + 0x80) + 1;
  } while( true );
}

