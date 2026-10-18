// VA 0x140ad9fc0, PDB extent 8236 bytes
// country_core::systems::ui_clutter::ui_autoclutter::ui_convert_autoclutter_to_decoclutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_autoclutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_clutter::ui_autoclutter::ui_convert_autoclutter_to_decoclutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_autoclutter.rs
   Extent: 8236 */

void pdb_140ad9fc0(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6,undefined8 *param_7)

{
  char *pcVar1;
  ulonglong *puVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined1 (*pauVar21) [16];
  byte *pbVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  int *piVar25;
  undefined8 uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  longlong lVar34;
  byte bVar35;
  undefined1 (*unaff_RBX) [16];
  undefined1 (*pauVar36) [16];
  float *pfVar37;
  uint uVar38;
  undefined *puVar39;
  undefined *puVar40;
  ulonglong uVar41;
  ushort uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  int iVar45;
  byte *pbVar46;
  ulonglong uVar47;
  ulonglong *puVar48;
  uint *puVar49;
  undefined1 uVar50;
  uint *puVar51;
  bool bVar52;
  bool bVar53;
  byte bVar54;
  float fVar55;
  float fVar57;
  undefined1 auVar56 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  longlong *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_fffffffffffffc60;
  undefined8 in_stack_fffffffffffffc68;
  undefined4 uVar66;
  longlong lStack_378;
  longlong lStack_370;
  undefined1 auStack_368 [16];
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  longlong lStack_318;
  longlong lStack_310;
  longlong lStack_308;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  ulonglong uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 *puStack_2c8;
  byte *pbStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  longlong lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  longlong lStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  longlong lStack_258;
  longlong lStack_250;
  uint uStack_23c;
  float afStack_238 [2];
  ulonglong uStack_230;
  byte *pbStack_228;
  undefined8 uStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  longlong lStack_208;
  longlong lStack_200;
  uint *puStack_1f8;
  undefined8 *puStack_1f0;
  longlong *plStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  ulonglong *puStack_1d0;
  longlong *plStack_1c8;
  ulonglong *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulonglong uStack_180;
  float fStack_178;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  ulonglong uStack_164;
  undefined4 uStack_158;
  undefined1 uStack_140;
  undefined1 uStack_130;
  float fStack_12c;
  undefined2 uStack_110;
  undefined4 uStack_104;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  longlong lStack_f0;
  undefined8 *puStack_e8;
  longlong *plStack_e0;
  ulonglong *puStack_d8;
  longlong *plStack_d0;
  byte *pbStack_c8;
  float *pfStack_c0;
  undefined1 uStack_b2;
  char cStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_338 = *(undefined8 *)(param_6 + 0x48);
  uStack_330 = *(undefined8 *)(param_6 + 0x50);
  uStack_328 = *(undefined8 *)(param_6 + 0x58);
  uStack_320 = *(undefined8 *)(param_6 + 0x60);
  uVar26 = *param_7;
  puStack_2c8 = (undefined4 *)param_7[2];
  uStack_104 = *(undefined4 *)((longlong)param_7 + 0x1c);
  plVar17 = (longlong *)param_7[4];
  lStack_308 = in_stack_00000058[0xe];
  pbVar46 = (byte *)param_7[8];
  lVar28 = param_7[9];
  uStack_2d8 = param_7[0xb];
  lStack_358 = in_stack_00000058[8];
  lStack_350 = in_stack_00000058[9];
  lStack_348 = in_stack_00000058[10];
  lStack_340 = in_stack_00000058[0xb];
  lStack_318 = in_stack_00000058[0xc];
  lStack_310 = in_stack_00000058[0xd];
  lStack_378 = in_stack_00000058[0xf];
  lStack_370 = in_stack_00000058[0x10];
  auStack_368 = *(undefined1 (*) [16])(in_stack_00000058 + 0x11);
  lStack_208 = *in_stack_00000058;
  lStack_200 = in_stack_00000058[4];
  puStack_1f8 = (uint *)in_stack_00000058[6];
  uStack_23c = *(uint *)((longlong)in_stack_00000058 + 0x3c);
  uVar41 = (ulonglong)uStack_23c;
  uVar19 = in_stack_00000058[0x13];
  puStack_1d0 = *(ulonglong **)(param_6 + 0x20);
  puStack_d8 = *(ulonglong **)(param_6 + 0x28);
  *(undefined4 *)param_7[6] = *(undefined4 *)((longlong)param_7 + 0x3c);
  puStack_1f0 = param_2;
  puStack_1c0 = param_3;
  puStack_100 = param_1;
  puStack_e8 = param_4;
  cVar10 = pdb_140e94b40();
  lStack_f0 = CONCAT71(lStack_f0._1_7_,cVar10);
  uStack_2d0 = uVar26;
  plStack_d0 = plVar17;
  if (cVar10 == '\0') {
    uStack_230 = 0;
    goto LAB_140ada2b3;
  }
  unaff_RBX = (undefined1 (*) [16])0x56;
  lVar15 = pdb_140ade420(0x56);
  puVar51 = (uint *)&UNK_14304ebe2;
  if (lVar15 != 1) goto LAB_140ada17c;
  if (uVar41 < 0x57) {
    uVar16 = pdb_140ade420(uVar41);
    if ((uVar16 & 1) == 0) {
LAB_140ada17c:
      puVar39 = &UNK_14304e629;
      puVar48 = (ulonglong *)&UNK_14304e5ed;
      do {
        bVar54 = puVar39[-1];
        uVar11 = (uint)(char)bVar54;
        if ((char)bVar54 < '\0') {
          bVar35 = puVar39[-2];
          if ((char)bVar35 < -0x40) {
            bVar3 = puVar39[-3];
            if ((char)bVar3 < -0x40) {
              pbVar22 = puVar39 + -4;
              puVar39 = puVar39 + -4;
              uVar11 = bVar3 & 0x3f | (*pbVar22 & 7) << 6;
            }
            else {
              puVar39 = puVar39 + -3;
              uVar11 = bVar3 & 0xf;
            }
            uVar11 = bVar35 & 0x3f | uVar11 << 6;
          }
          else {
            puVar39 = puVar39 + -2;
            uVar11 = bVar35 & 0x1f;
          }
          uVar11 = (uint)(bVar54 & 0x3f) | uVar11 << 6;
          if (uVar11 != 0x5c) goto LAB_140ada204;
LAB_140ada21c:
          puVar40 = puVar39 + -0x14304e5ec;
          if (puVar40 < (undefined *)0x3d) {
            lVar15 = 0x3c - (longlong)puVar40;
            puVar48 = (ulonglong *)(puVar39 + 1);
            goto LAB_140ada23e;
          }
          pdb_142dc8070(&UNK_14304e5ed,0x3c,puVar40,0x3c,&UNK_14304eca0);
          goto LAB_140adbc41;
        }
        puVar39 = puVar39 + -1;
        if (uVar11 == 0x5c) goto LAB_140ada21c;
LAB_140ada204:
        if (uVar11 == 0x2f) goto LAB_140ada21c;
      } while (puVar39 != &UNK_14304e5ed);
      lVar15 = 0x3c;
LAB_140ada23e:
      plVar17 = (longlong *)pdb_140e97000();
      if ((char)plVar17[0xd] != '\x01') goto LAB_140adb200;
LAB_140ada24d:
      if (*plVar17 == 0) {
        *plVar17 = -1;
        in_stack_fffffffffffffc68 = 0;
        in_stack_fffffffffffffc60 = 0;
        pfStack_c0 = (float *)plVar17;
        pbStack_2c0 = (byte *)pdb_140e94f10(plVar17 + 1,puVar51,unaff_RBX,puVar48,lVar15,1,0);
        *(longlong *)pfStack_c0 = *(longlong *)pfStack_c0 + 1;
        uStack_230 = 1;
        pbStack_228 = pbStack_2c0;
LAB_140ada2b3:
        plVar17 = plStack_d0;
        lVar15 = plStack_d0[3];
        uStack_2e8 = uVar19;
        pbStack_c8 = pbVar46;
        if (lVar15 != 0) {
          unaff_RBX = (undefined1 (*) [16])*plStack_d0;
          auVar56 = *unaff_RBX;
          pauVar36 = unaff_RBX + 1;
          uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
          pauVar21 = unaff_RBX;
          do {
            if ((short)uVar11 == 0) {
              do {
                auVar56 = *pauVar36;
                pauVar21 = pauVar21 + -0x20;
                pauVar36 = pauVar36 + 1;
                uVar11 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar11 == 0);
            }
            iVar45 = 0;
            for (uVar38 = uVar11; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
              iVar45 = iVar45 + 1;
            }
            lVar30 = *(longlong *)((longlong)pauVar21 + (-0x18 - (ulonglong)(uint)(iVar45 << 5)));
            if (lVar30 != 0) {
              pub_1406abac0(*(byte **)((longlong)pauVar21 + (-0x10 - (ulonglong)(uint)(iVar45 << 5))
                                      ),lVar30 * 0x60,0x10);
            }
            uVar11 = uVar11 - 1 & uVar11;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          uVar19 = plVar17[1];
          if (uVar19 == 0) {
            uVar41 = 0;
          }
          else {
            pub_142e32780(unaff_RBX,0xff,uVar19 + 0x11);
            uVar41 = (uVar19 + 1 & 0xfffffffffffffff8) - (uVar19 + 1 >> 3);
            if (uVar19 < 8) {
              uVar41 = uVar19;
            }
          }
          plVar17[3] = 0;
          plVar17[2] = uVar41;
        }
        uVar66 = _UNK_142e47bfc;
        uVar14 = _UNK_142e47bf8;
        puVar48 = *(ulonglong **)((longlong)pbStack_c8 + 0xf8);
        puVar51 = (uint *)((longlong)puVar48 + *(longlong *)((longlong)pbStack_c8 + 0x100) * 4);
        plStack_1c8 = plVar17 + 4;
        lVar15 = 0;
        pfStack_c0 = (float *)0x0;
        uVar19 = 0;
        lVar29 = 8;
        lVar27 = 8;
        lVar34 = 0;
        lVar30 = 0;
        pbVar46 = pbStack_c8;
        cVar10 = (char)*(longlong *)((longlong)pbStack_c8 + 0x108);
        do {
          if (cVar10 == '\0') {
            uVar41 = uVar19;
            if ((int)uVar19 == (int)lVar15) {
              do {
                if (puVar48 == (ulonglong *)puVar51) goto LAB_140adab3a;
                uVar11 = *(uint *)puVar48;
                puVar48 = (ulonglong *)((longlong)puVar48 + 4);
                lVar15 = *(longlong *)
                          (*(longlong *)(lVar28 + 0x100) + 0x58 + (ulonglong)uVar11 * 0xa0);
              } while (lVar15 == 0);
              lVar18 = *(longlong *)(lVar28 + 0x100) + (ulonglong)uVar11 * 0xa0;
              uVar19 = (ulonglong)*(uint *)(lVar18 + 0x94);
              lVar27 = *(longlong *)(lVar28 + 0x1a0) + uVar19 * 0x48;
              uVar19 = *(ulonglong *)(*(longlong *)(lVar28 + 0x1a0) + 0x40 + uVar19 * 0x48);
              if ((*(ulonglong *)((longlong)pbStack_c8 + 0x110) < uVar19) &&
                 (uVar41 = *(ulonglong *)
                            (*(longlong *)(lVar27 + 0x38) +
                            *(ulonglong *)((longlong)pbStack_c8 + 0x110) * 8), uVar41 != 0)) {
                lVar30 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar41 * 0x30);
                uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x118);
                if (uVar19 <= uVar41) goto LAB_140ada5ba;
LAB_140ada57a:
                uVar41 = *(ulonglong *)(*(longlong *)(lVar27 + 0x38) + uVar41 * 8);
                if (uVar41 == 0) goto LAB_140ada5ba;
                lVar34 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar41 * 0x30);
                uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x120);
                if (uVar19 <= uVar41) goto LAB_140ada5a7;
LAB_140ada5c9:
                uVar19 = *(ulonglong *)(*(longlong *)(lVar27 + 0x38) + uVar41 * 8);
                if (uVar19 == 0) {
                  pfStack_c0 = (float *)0x0;
                }
                else {
                  pfStack_c0 = *(float **)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar19 * 0x30);
                }
              }
              else {
                lVar30 = 0;
                uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x118);
                if (uVar41 < uVar19) goto LAB_140ada57a;
LAB_140ada5ba:
                lVar34 = 0;
                uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x120);
                if (uVar41 < uVar19) goto LAB_140ada5c9;
LAB_140ada5a7:
                pfStack_c0 = (float *)0x0;
              }
              lVar27 = *(longlong *)(lVar18 + 0x50);
              uVar41 = 0;
            }
            piVar25 = (int *)(lVar27 + uVar41 * 0x10);
            uVar19 = (ulonglong)~*(uint *)(lVar27 + 8 + uVar41 * 0x10);
          }
          else {
            if ((int)uVar19 == (int)lVar15) {
              do {
                if (puVar48 == (ulonglong *)puVar51) goto LAB_140adab3a;
                uVar11 = *(uint *)puVar48;
                puVar48 = (ulonglong *)((longlong)puVar48 + 4);
                lVar15 = *(longlong *)
                          (*(longlong *)(lVar28 + 0x1a0) + 0x10 + (ulonglong)uVar11 * 0x48);
              } while (lVar15 == 0);
              lVar29 = *(longlong *)(lVar28 + 0x1a0) + (ulonglong)uVar11 * 0x48;
              uVar19 = *(ulonglong *)(lVar29 + 0x40);
              if (*(ulonglong *)((longlong)pbStack_c8 + 0x110) < uVar19) {
                uVar41 = *(ulonglong *)
                          (*(longlong *)(lVar29 + 0x38) +
                          *(ulonglong *)((longlong)pbStack_c8 + 0x110) * 8);
                if (uVar41 == 0) {
                  uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x118);
                  goto joined_r0x000140ada607;
                }
                lVar30 = *(longlong *)(*(longlong *)(lVar29 + 0x18) + 0x10 + ~uVar41 * 0x30);
                uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x118);
                if (uVar19 <= uVar41) goto LAB_140ada4a0;
LAB_140ada60d:
                uVar41 = *(ulonglong *)(*(longlong *)(lVar29 + 0x38) + uVar41 * 8);
                if (uVar41 == 0) {
                  uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x120);
                  goto joined_r0x000140ada4ad;
                }
                lVar34 = *(longlong *)(*(longlong *)(lVar29 + 0x18) + 0x10 + ~uVar41 * 0x30);
                uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x120);
                if (uVar41 < uVar19) goto LAB_140ada69d;
LAB_140ada4b3:
                pfStack_c0 = (float *)0x0;
              }
              else {
                uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x118);
joined_r0x000140ada607:
                lVar30 = 0;
                if (uVar41 < uVar19) goto LAB_140ada60d;
LAB_140ada4a0:
                uVar41 = *(ulonglong *)((longlong)pbStack_c8 + 0x120);
joined_r0x000140ada4ad:
                lVar34 = 0;
                if (uVar19 <= uVar41) goto LAB_140ada4b3;
LAB_140ada69d:
                uVar19 = *(ulonglong *)(*(longlong *)(lVar29 + 0x38) + uVar41 * 8);
                if (uVar19 == 0) {
                  pfStack_c0 = (float *)0x0;
                }
                else {
                  pfStack_c0 = *(float **)(*(longlong *)(lVar29 + 0x18) + 0x10 + ~uVar19 * 0x30);
                }
              }
              lVar29 = *(longlong *)(lVar29 + 8);
              uVar19 = 0;
            }
            piVar25 = (int *)(lVar29 + uVar19 * 8);
            uVar41 = uVar19;
          }
          unaff_RBX = (undefined1 (*) [16])(lVar30 + uVar19 * 0x18);
          puVar20 = (uint *)(uVar19 * 0x60 + lVar34);
          pbVar46 = (byte *)((longlong)pfStack_c0 + uVar19 * 6 * 8);
          uVar19 = uVar41;
          if (*piVar25 == 0) goto LAB_140adab3a;
          uVar19 = (ulonglong)((int)uVar41 + 1);
          if (*puVar20 < 3) {
            plStack_e0 = (longlong *)(ulonglong)puVar20[4];
            lStack_2b8 = lVar30;
            lStack_2b0 = lVar29;
            lStack_2a8 = lVar27;
            lStack_2a0 = lVar34;
            cStack_b1 = cVar10;
            uVar12 = pdb_1409d4b30(*(undefined8 *)(puVar20 + 0xc),*(undefined8 *)(puVar20 + 0xe));
            pdb_1409d5500(&uStack_1b8,uVar12,uStack_2d8);
            uStack_298 = *(undefined8 ***)((longlong)uStack_1b8 + 0x40);
            uStack_290 = *(code **)((longlong)uStack_1b8 + 0x48);
            lStack_288 = *(longlong *)((longlong)uStack_1b8 + 0x50);
            lStack_280 = *(longlong *)((longlong)uStack_1b8 + 0x58);
            lStack_278 = *(longlong *)pbVar46;
            lStack_270 = *(longlong *)((longlong)pbVar46 + 8);
            uStack_268 = *(ulonglong *)((longlong)pbVar46 + 0x10);
            uStack_260 = *(ulonglong *)((longlong)pbVar46 + 0x18);
            lStack_258 = *(longlong *)((longlong)pbVar46 + 0x20);
            lStack_250 = *(longlong *)((longlong)pbVar46 + 0x28);
            uVar12 = *(undefined4 *)(*unaff_RBX + 0xc);
            uStack_1b8 = (undefined8 **)CONCAT44(uStack_1b8._4_4_,(int)plStack_e0);
            pauVar21 = (undefined1 (*) [16])pdb_1400aede0(plStack_1c8,&uStack_1b8);
            bVar54 = (byte)((ulonglong)pauVar21 >> 0x39);
            auVar56 = ZEXT216(CONCAT11(bVar54,bVar54));
            auVar56 = pshuflw(auVar56,auVar56,0);
            lVar30 = 0;
            pauVar36 = pauVar21;
            while( true ) {
              uVar41 = (ulonglong)pauVar36 & plStack_d0[1];
              pcVar1 = (char *)(*plStack_d0 + uVar41);
              auVar61[0] = -(*pcVar1 == auVar56[0]);
              auVar61[1] = -(pcVar1[1] == auVar56[1]);
              auVar61[2] = -(pcVar1[2] == auVar56[2]);
              auVar61[3] = -(pcVar1[3] == auVar56[3]);
              auVar61[4] = -(pcVar1[4] == auVar56[4]);
              auVar61[5] = -(pcVar1[5] == auVar56[5]);
              auVar61[6] = -(pcVar1[6] == auVar56[6]);
              auVar61[7] = -(pcVar1[7] == auVar56[7]);
              auVar61[8] = -(pcVar1[8] == auVar56[0]);
              auVar61[9] = -(pcVar1[9] == auVar56[1]);
              auVar61[10] = -(pcVar1[10] == auVar56[2]);
              auVar61[0xb] = -(pcVar1[0xb] == auVar56[3]);
              auVar61[0xc] = -(pcVar1[0xc] == auVar56[4]);
              auVar61[0xd] = -(pcVar1[0xd] == auVar56[5]);
              auVar61[0xe] = -(pcVar1[0xe] == auVar56[6]);
              auVar61[0xf] = -(pcVar1[0xf] == auVar56[7]);
              uVar42 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar61[0xf] >> 7) << 0xf;
              uVar11 = (uint)uVar42;
              while (uVar42 != 0) {
                uVar38 = 0;
                for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar38 = uVar38 + 1;
                }
                pauVar36 = (undefined1 (*) [16])
                           (*plStack_d0 + (uVar38 + uVar41 & plStack_d0[1]) * -0x20);
                if (*(int *)pauVar36[-2] == (int)plStack_e0) {
                  fStack_178 = (float)lStack_258;
                  uStack_174 = (undefined2)((ulonglong)lStack_258 >> 0x20);
                  uStack_172 = (undefined2)((ulonglong)lStack_258 >> 0x30);
                  uStack_170 = (undefined4)lStack_250;
                  uStack_16c = (undefined4)((ulonglong)lStack_250 >> 0x20);
                  uStack_188 = uStack_268;
                  uStack_180 = uStack_260;
                  uStack_198 = (float *)lStack_278;
                  uStack_190 = (code *)lStack_270;
                  uStack_1a8 = (float *)lStack_288;
                  uStack_1a0 = (code *)lStack_280;
                  uStack_1b8 = uStack_298;
                  uStack_1b0 = uStack_290;
                  lVar30 = *(longlong *)(pauVar36[-1] + 8);
                  if (lVar30 == *(longlong *)(pauVar36[-2] + 8)) {
                    pdb_142d91e10(pauVar36[-2] + 8);
                  }
                  lVar34 = *(longlong *)pauVar36[-1];
                  lVar27 = lVar30 * 0x60;
                  puVar33 = (undefined8 *)(lVar34 + 0x40 + lVar27);
                  *puVar33 = CONCAT26(uStack_172,CONCAT24(uStack_174,fStack_178));
                  puVar33[1] = CONCAT44(uStack_16c,uStack_170);
                  puVar2 = (ulonglong *)(lVar34 + 0x30 + lVar27);
                  *puVar2 = uStack_188;
                  puVar2[1] = uStack_180;
                  plVar17 = (longlong *)(lVar34 + 0x20 + lVar27);
                  *plVar17 = (longlong)uStack_198;
                  plVar17[1] = (longlong)uStack_190;
                  plVar17 = (longlong *)(lVar34 + 0x10 + lVar27);
                  *plVar17 = (longlong)uStack_1a8;
                  plVar17[1] = (longlong)uStack_1a0;
                  *(longlong *)(lVar34 + lVar27) = (longlong)uStack_1b8;
                  ((longlong *)(lVar34 + lVar27))[1] = (longlong)uStack_1b0;
                  *(undefined4 *)(lVar34 + 0x50 + lVar27) = uVar12;
                  *(longlong *)(pauVar36[-1] + 8) = lVar30 + 1;
                  pbVar46 = (byte *)CONCAT71((int7)((ulonglong)(lVar30 + 1) >> 8),1);
                  plStack_1e8 = plStack_d0;
                  plStack_e0 = (longlong *)0x0;
                  goto LAB_140ada980;
                }
                uVar42 = (ushort)(uVar11 - 1) & (ushort)uVar11;
                uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar42);
              }
              auVar59[0] = -(*pcVar1 == -1);
              auVar59[1] = -(pcVar1[1] == -1);
              auVar59[2] = -(pcVar1[2] == -1);
              auVar59[3] = -(pcVar1[3] == -1);
              auVar59[4] = -(pcVar1[4] == -1);
              auVar59[5] = -(pcVar1[5] == -1);
              auVar59[6] = -(pcVar1[6] == -1);
              auVar59[7] = -(pcVar1[7] == -1);
              auVar59[8] = -(pcVar1[8] == -1);
              auVar59[9] = -(pcVar1[9] == -1);
              auVar59[10] = -(pcVar1[10] == -1);
              auVar59[0xb] = -(pcVar1[0xb] == -1);
              auVar59[0xc] = -(pcVar1[0xc] == -1);
              auVar59[0xd] = -(pcVar1[0xd] == -1);
              auVar59[0xe] = -(pcVar1[0xe] == -1);
              auVar59[0xf] = -(pcVar1[0xf] == -1);
              uVar42 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar59[0xf] >> 7) << 0xf;
              if (uVar42 != 0) break;
              pauVar36 = (undefined1 (*) [16])(uVar41 + lVar30 + 0x10);
              lVar30 = lVar30 + 0x10;
            }
            if (plStack_d0[2] == 0) {
              pdb_142dacef0(plStack_d0,1,plStack_1c8,CONCAT71((uint7)(byte)(uVar42 >> 8),1));
            }
            plStack_1e8 = (longlong *)
                          (((ulonglong)plStack_1e8 & 0xffffffff00000000) + (longlong)plStack_e0);
            pbVar46 = (byte *)0x0;
            plStack_e0 = plStack_d0;
            pauVar36 = pauVar21;
LAB_140ada980:
            pdb_14007ee60();
            pbVar22 = pub_1406abab0(0x60,0x10);
            if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(0x10,0x60);
            }
            *(longlong *)(pbVar22 + 0x40) = lStack_258;
            *(longlong *)(pbVar22 + 0x48) = lStack_250;
            auVar56._8_8_ = lStack_280;
            auVar56._0_8_ = lStack_288;
            *(ulonglong *)(pbVar22 + 0x30) = uStack_268;
            *(ulonglong *)(pbVar22 + 0x38) = uStack_260;
            *(longlong *)(pbVar22 + 0x20) = lStack_278;
            *(longlong *)(pbVar22 + 0x28) = lStack_270;
            *(undefined1 (*) [16])(pbVar22 + 0x10) = auVar56;
            *(undefined8 ***)pbVar22 = uStack_298;
            *(code **)(pbVar22 + 8) = uStack_290;
            *(undefined4 *)(pbVar22 + 0x50) = uVar12;
            if ((char)pbVar46 == '\0') {
              pauVar21 = (undefined1 (*) [16])*plStack_e0;
              uVar41 = plStack_e0[1];
              uVar16 = uVar41 & (ulonglong)pauVar36;
              auVar56 = *(undefined1 (*) [16])(*pauVar21 + uVar16);
              uVar42 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar56[0xf] >> 7) << 0xf;
              uVar11 = (uint)uVar42;
              if (uVar42 == 0) {
                lVar30 = 0x10;
                do {
                  uVar16 = uVar16 + lVar30 & uVar41;
                  auVar56 = *(undefined1 (*) [16])(*pauVar21 + uVar16);
                  lVar30 = lVar30 + 0x10;
                  uVar11 = (uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
                } while (uVar11 == 0);
              }
              uVar38 = 0;
              for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar38 = uVar38 + 1;
              }
              uVar16 = uVar38 + uVar16 & uVar41;
              bVar54 = (*pauVar21)[uVar16];
              if (-1 < (char)bVar54) {
                auVar56 = *pauVar21;
                uVar11 = 0;
                for (uVar38 = (uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
                    (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
                  uVar11 = uVar11 + 1;
                }
                uVar16 = (ulonglong)uVar11;
                bVar54 = (*pauVar21)[uVar16];
              }
              unaff_RBX = (undefined1 (*) [16])((ulonglong)pauVar36 >> 0x39);
              bVar35 = (byte)((ulonglong)pauVar36 >> 0x39);
              (*pauVar21)[uVar16] = bVar35;
              pauVar21[1][uVar16 - 0x10 & uVar41] = bVar35;
              *(int *)pauVar21[uVar16 * -2 + -2] = (int)plStack_1e8;
              *(undefined8 *)(pauVar21[uVar16 * -2 + -2] + 8) = 1;
              *(byte **)pauVar21[uVar16 * -2 + -1] = pbVar22;
              *(undefined8 *)(pauVar21[uVar16 * -2 + -1] + 8) = 1;
              auVar60._0_8_ = CONCAT71(0,bVar54 & 1);
              auVar60._8_4_ = uVar14;
              auVar60._12_4_ = uVar66;
              plStack_e0[2] = plStack_e0[2] - auVar60._0_8_;
              plStack_e0[3] = plStack_e0[3] - auVar60._8_8_;
              lVar29 = lStack_2b0;
              lVar27 = lStack_2a8;
              lVar34 = lStack_2a0;
              lVar30 = lStack_2b8;
              pbVar46 = (byte *)plStack_e0;
              cVar10 = cStack_b1;
            }
            else {
              pub_1406abac0(pbVar22,0x60,0x10);
              lVar29 = lStack_2b0;
              unaff_RBX = pauVar36;
              lVar27 = lStack_2a8;
              lVar34 = lStack_2a0;
              lVar30 = lStack_2b8;
              cVar10 = cStack_b1;
            }
          }
        } while( true );
      }
      goto LAB_140adb1f4;
    }
    if (uVar41 + 2 < 0x57) {
      unaff_RBX = (undefined1 (*) [16])(0x54 - uVar41);
      puVar51 = (uint *)(&UNK_14304ebe4 + uVar41);
      goto LAB_140ada17c;
    }
  }
  else {
LAB_140adbc41:
    pdb_142dc8070(&UNK_14304ebe2,0x56,0);
  }
  pdb_142dc8070(&UNK_14304ebe2,0x56);
  goto LAB_140adbc84;
LAB_140adab3a:
  if ((char)lStack_f0 != '\0') {
    plVar17 = (longlong *)pdb_140e97000();
    if (((char)plVar17[0xd] != '\x01') &&
       (plVar17 = (longlong *)pdb_142d8ec20(plVar17,0), plVar17 == (longlong *)0x0))
    goto LAB_140adb22f;
    if (*plVar17 != 0) {
LAB_140adb1f4:
      plVar17 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140adb200:
      plVar17 = (longlong *)pdb_142d8ec20(plVar17,0);
      if (plVar17 == (longlong *)0x0) goto LAB_140adb22f;
      goto LAB_140ada24d;
    }
    *plVar17 = -1;
    pfStack_c0 = (float *)plVar17;
    pdb_140e95370(plVar17 + 1);
    *(longlong *)pfStack_c0 = *(longlong *)pfStack_c0 + 1;
  }
  uVar19 = *puStack_1d0;
  uVar16 = 0;
  uVar41 = uVar19 - *(ulonglong *)((longlong)puStack_d8 + 0x18);
  if (uVar19 < *(ulonglong *)((longlong)puStack_d8 + 0x18)) {
    uVar41 = uVar16;
  }
  uVar23 = uVar19 - *(ulonglong *)((longlong)puStack_d8 + 0x38);
  if (uVar19 < *(ulonglong *)((longlong)puStack_d8 + 0x38)) {
    uVar23 = uVar16;
  }
  uVar19 = *(ulonglong *)((longlong)puStack_d8 + 0x10);
  pfStack_c0 = *(float **)((longlong)puStack_d8 + 0x30);
  bVar52 = pfStack_c0 < uVar23;
  uVar31 = (longlong)pfStack_c0 - uVar23;
  uVar32 = uVar31;
  if (bVar52) {
    uVar32 = uVar16;
  }
  bVar53 = uVar19 < uVar41;
  uVar43 = uVar19 - uVar41;
  uVar44 = uVar43;
  if (bVar53) {
    uVar44 = uVar16;
  }
  lVar15 = *(longlong *)((longlong)puStack_d8 + 8);
  uVar47 = uVar32 + uVar44;
  if (!bVar53 && uVar43 != 0 || !bVar52 && uVar31 != 0) {
    uVar47 = uVar16;
  }
  lVar30 = *(longlong *)((longlong)puStack_d8 + 0x28);
  *puStack_1d0 = *(longlong *)((longlong)puStack_d8 + 0x40) - uVar47;
  if (!bVar53 && uVar43 != 0 || !bVar52 && uVar31 != 0) {
    lVar30 = lVar30 + uVar23 * 0x10;
    lVar15 = lVar15 + uVar41 * 0x10;
    if (uVar19 < uVar41) {
      lVar15 = 8;
    }
    puVar33 = (undefined8 *)0x0;
    if (uVar41 < uVar19) {
      puVar33 = (undefined8 *)(lVar15 + -0x10 + uVar44 * 0x10);
    }
    if (pfStack_c0 < uVar23) {
      lVar30 = 8;
    }
    puVar24 = (undefined8 *)(lVar30 + -0x10 + uVar32 * 0x10);
    if (pfStack_c0 <= uVar23) {
      puVar24 = puVar33;
    }
    uVar19 = (ulonglong)~(uint)*puVar24;
    if ((((uVar19 < *(ulonglong *)(lVar28 + 0x10)) &&
         (piVar25 = (int *)(uVar19 * 0x18 + *(longlong *)(lVar28 + 8)),
         piVar25[4] == (int)((ulonglong)*puVar24 >> 0x20))) && (*piVar25 != 0)) &&
       ((uVar19 = *(ulonglong *)(piVar25 + 2),
        (uVar19 & 0xffffffff) < *(ulonglong *)((longlong)pbStack_c8 + 0x38) &&
        ((*(ulonglong *)(*(longlong *)((longlong)pbStack_c8 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8)
          >> (uVar19 & 0x3f) & 1) != 0)))) {
      lVar15 = *(longlong *)(*(longlong *)(lVar28 + 0x1a0) + 0x18 + (uVar19 >> 0x20) * 0x48);
      lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x1a0) + 0x38 + (uVar19 >> 0x20) * 0x48);
      uVar19 = (ulonglong)(uint)~piVar25[1];
      lVar30 = *(longlong *)
                (lVar15 + 0x10 +
                ~*(ulonglong *)(lVar28 + *(longlong *)((longlong)pbStack_c8 + 0x118) * 8) * 0x30);
      lVar34 = *(longlong *)
                (lVar15 + 0x10 +
                ~*(ulonglong *)(lVar28 + *(longlong *)((longlong)pbStack_c8 + 0x120) * 8) * 0x30);
      lVar28 = *(longlong *)
                (lVar15 + 0x10 +
                ~*(ulonglong *)(lVar28 + *(longlong *)((longlong)pbStack_c8 + 0x110) * 8) * 0x30);
      *puStack_2c8 = uStack_104;
      *puStack_1f8 = uStack_23c;
      pdb_140b4bb40(uVar19 * 0x30 + lVar34,uVar19 * 0x60 + lVar30,lStack_208,&lStack_318,uStack_2d0,
                    uVar19 * 0x18 + lVar28,&uStack_338,lStack_200,puStack_100);
      return;
    }
  }
  pcVar1 = (char *)*puStack_100;
  if (*pcVar1 == '\x04') {
    if (pcVar1[1] != '\x03') {
      return;
    }
  }
  else {
    if (*pcVar1 != '\0') {
      return;
    }
    if (*(int *)(pcVar1 + 8) != 0) {
      return;
    }
  }
  pfVar6 = (float *)*param_5;
  pdb_1409f94a0(&uStack_1b8,*puStack_e8,pfVar6,0);
  if (uStack_188._4_4_ == 2) {
    return;
  }
  if ((char)uStack_1b8 != '\f') {
    return;
  }
  fVar55 = (float)uStack_1a0;
  fVar4 = uStack_1a0._4_4_;
  fVar5 = (float)uStack_198;
  puStack_2e0 = (undefined8 *)uStack_1b0;
  if (*(ulonglong *)(lVar28 + 0x10) <= (ulonglong)~(uint)uStack_1b0) {
    return;
  }
  piVar25 = (int *)((ulonglong)~(uint)uStack_1b0 * 0x18 + *(longlong *)(lVar28 + 8));
  if (piVar25[4] != (int)((ulonglong)uStack_1b0 >> 0x20)) {
    return;
  }
  if (*piVar25 == 0) {
    return;
  }
  uVar19 = *(ulonglong *)(piVar25 + 2);
  if (*(ulonglong *)((longlong)pbStack_c8 + 0x38) <= (uVar19 & 0xffffffff)) {
    return;
  }
  if ((*(ulonglong *)(*(longlong *)((longlong)pbStack_c8 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
       (uVar19 & 0x3f) & 1) == 0) {
    return;
  }
  lVar15 = *(longlong *)(lVar28 + 0x1a0) + (uVar19 >> 0x20) * 0x48;
  uVar19 = *(ulonglong *)(*(longlong *)(lVar28 + 0x1a0) + 0x40 + (uVar19 >> 0x20) * 0x48);
  if ((*(ulonglong *)((longlong)pbStack_c8 + 0x110) < uVar19) &&
     (uVar41 = *(ulonglong *)
                (*(longlong *)(lVar15 + 0x38) + *(ulonglong *)((longlong)pbStack_c8 + 0x110) * 8),
     uVar41 != 0)) {
    lStack_f0 = *(undefined8 *)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar41 * 0x30);
  }
  else {
    lStack_f0 = 0;
  }
  if ((*(ulonglong *)((longlong)pbStack_c8 + 0x118) < uVar19) &&
     (uVar41 = *(ulonglong *)
                (*(longlong *)(lVar15 + 0x38) + *(ulonglong *)((longlong)pbStack_c8 + 0x118) * 8),
     uVar41 != 0)) {
    lVar28 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar41 * 0x30);
  }
  else {
    lVar28 = 0;
  }
  if ((*(ulonglong *)((longlong)pbStack_c8 + 0x120) < uVar19) &&
     (uVar19 = *(ulonglong *)
                (*(longlong *)(lVar15 + 0x38) + *(ulonglong *)((longlong)pbStack_c8 + 0x120) * 8),
     uVar19 != 0)) {
    pfStack_c0 = *(float **)(*(longlong *)(lVar15 + 0x18) + 0x10 + ~uVar19 * 0x30);
  }
  else {
    pfStack_c0 = (float *)0x0;
  }
  uVar11 = piVar25[1];
  uVar26 = *puStack_1f0;
  uStack_298 = &puStack_2e0;
  uStack_290 = pdb_140ed4b80;
  pdb_140f60760(&uStack_1b8,&UNK_14304e629,&uStack_298);
  uStack_298 = uStack_1b8;
  uStack_290 = uStack_1b0;
  lStack_288 = (longlong)uStack_1a8;
  fStack_12c = SQRT((pfVar6[2] - fVar5) * (pfVar6[2] - fVar5) +
                    (pfVar6[1] - fVar4) * (pfVar6[1] - fVar4) +
                    (*pfVar6 - fVar55) * (*pfVar6 - fVar55));
  uStack_1b8 = (undefined8 **)0x0;
  uStack_1b0 = (code *)0x8;
  uStack_1a8 = (float *)0x0;
  uStack_1a0 = (code *)CONCAT44(uStack_1a0._4_4_,1);
  uStack_198 = (float *)0x0;
  uStack_188 = uStack_188 & 0xffffffff00000000;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_130 = 5;
  uStack_110 = 0x301;
  puVar33 = &uStack_298;
  lVar15 = pdb_1409008d0(uVar26,puVar33,&uStack_1b8);
  if (*(char *)(lVar15 + 0x18) == '\0') {
    return;
  }
  if (*(undefined8 **)(lVar15 + 0x38) != puVar33) {
    return;
  }
  if (*(int *)(lVar15 + 0x28) == 2) {
    return;
  }
  puStack_100 = (undefined8 *)((ulonglong)~uVar11 * 3);
  puStack_d8 = (ulonglong *)(lVar28 + (ulonglong)~uVar11 * 0x60);
  lVar28 = 0;
  if (1 < *puStack_d8) {
    lVar28 = *puStack_d8 - 2;
  }
  puStack_1d0 = puVar33;
                    /* WARNING: Could not recover jumptable at 0x000140adb113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14304ee2c + *(int *)(&UNK_14304ee2c + lVar28 * 4)))();
  return;
LAB_140adb22f:
  pdb_142dc7890(&UNK_143326860);
  plStack_d0 = (longlong *)*in_stack_00000060;
  pbStack_c8 = (byte *)in_stack_00000060[1];
  puVar49 = (uint *)plStack_d0[0x1f];
  puVar20 = puVar49 + plStack_d0[0x20];
  puStack_e8 = (undefined8 *)*puStack_1c0;
  uVar19 = 0;
  lVar28 = 0;
  pbVar22 = pbStack_c8;
  lVar30 = 8;
  cVar10 = (char)plStack_d0[0x21];
LAB_140adb28d:
  do {
    uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffc60 >> 0x20);
    uVar66 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
    if (cVar10 == '\0') {
      if ((int)uVar19 == (int)lVar15) {
        do {
          if (puVar49 == puVar20) goto LAB_140adb565;
          uVar11 = *puVar49;
          puVar49 = puVar49 + 1;
          lVar15 = *(longlong *)
                    (*(longlong *)((longlong)pbVar22 + 0x100) + 0x58 + (ulonglong)uVar11 * 0xa0);
        } while (lVar15 == 0);
        lVar30 = *(longlong *)((longlong)pbVar22 + 0x100) + (ulonglong)uVar11 * 0xa0;
        uVar19 = (ulonglong)*(uint *)(lVar30 + 0x94);
        if ((ulonglong)plStack_d0[0x22] <
            *(ulonglong *)(*(longlong *)((longlong)pbVar22 + 0x1a0) + 0x40 + uVar19 * 0x48)) {
          lVar28 = *(longlong *)((longlong)pbVar22 + 0x1a0) + uVar19 * 0x48;
          uVar19 = *(ulonglong *)(*(longlong *)(lVar28 + 0x38) + plStack_d0[0x22] * 8);
          if (uVar19 == 0) goto LAB_140adb399;
          lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x18) + 0x10 + ~uVar19 * 0x30);
        }
        else {
LAB_140adb399:
          lVar28 = 0;
        }
        lVar30 = *(longlong *)(lVar30 + 0x50);
        uVar19 = 0;
        pbVar22 = pbStack_c8;
      }
      iVar45 = (int)uVar19;
      uVar19 = (ulonglong)~*(uint *)(lVar30 + 8 + uVar19 * 0x10);
    }
    else {
      if ((int)uVar19 == (int)lVar15) {
        do {
          if (puVar49 == puVar20) {
LAB_140adb565:
            pfVar37 = (float *)((longlong)pfStack_c0 + (longlong)puStack_100 * 2 * 8);
            plStack_d0 = *(longlong **)((longlong)puVar48 + 0x30);
            puStack_e8 = *(undefined8 **)((longlong)puVar48 + 0x38);
            uVar12 = pdb_1409d4b30();
            pdb_1409d5500(&uStack_1b8,uVar12,uStack_2d8);
            fVar63 = _DAT_142e3b1d8;
            fVar8 = _DAT_142e36f50;
            uVar12 = 0;
            uVar64 = 0;
            uVar65 = 0;
            fVar62 = (*(float *)((longlong)uStack_1b8 + 0x50) +
                     *(float *)((longlong)uStack_1b8 + 0x54)) * _DAT_142e36f50 * _DAT_142e36f50 +
                     _DAT_142e3b1d8;
            pfVar6 = pfVar37 + 4;
            fVar55 = *pfVar6;
            fVar4 = pfVar37[5];
            lVar27 = *(longlong *)pfVar6;
            lVar34 = *(longlong *)pfVar6;
            lVar30 = *(longlong *)pfVar6;
            lVar15 = *(longlong *)pfVar6;
            lVar28 = *(longlong *)pfVar6;
            fVar5 = pfVar37[6];
            uVar41 = (ulonglong)(uint)fVar55;
            pfStack_c0 = pfVar37;
            pdb_140defa80(&uStack_230,fVar55,fVar5);
            pdb_140def200(&uStack_298,&uStack_230);
            pdb_1415fceb0(&uStack_1b8,&uStack_298);
            uStack_1a0 = (code *)0x8000000000000000;
            uStack_188 = uStack_188 & 0xffffffff00000000;
            fStack_178 = 2.0;
            uStack_174 = 1;
            uVar19 = *puStack_1c0;
            pdb_140ab2da0(&uStack_1b8,uVar19);
            fVar62 = fVar62 + _DAT_142f684a8;
            if (fVar8 <= fVar62) {
              fVar62 = fVar8;
            }
            uStack_1b8 = &puStack_2e0;
            uStack_1b0 = pdb_140ed4b80;
            uStack_1a8 = &fStack_218;
            uStack_1a0 = pdb_140f33df0;
            uStack_198 = afStack_238;
            uStack_190 = pdb_140f70fc0;
            afStack_238[0] = fVar62;
            fStack_218 = fVar55;
            fStack_214 = fVar4;
            fStack_210 = fVar5;
            pdb_140ad9ba0(&uStack_230,&uStack_1b8);
            pbStack_c8 = pbStack_228;
            uStack_1b0 = (code *)CONCAT44(fVar62,fVar5);
            uStack_1b8 = (undefined8 **)lVar15;
            uVar26 = pdb_140ade8d0(&uStack_1b8);
            puVar39 = &UNK_14304e688;
            pdb_1409baea0(&uStack_298,pbStack_c8,uStack_220,uVar26,&UNK_14304e688);
            uStack_188 = lStack_278;
            uStack_198 = (float *)lStack_288;
            uStack_190 = (code *)lStack_280;
            uStack_1a8 = (float *)uStack_298;
            uStack_1a0 = uStack_290;
            uStack_1b0 = (code *)CONCAT71(uStack_1b0._1_7_,2);
            pdb_141a88350(uVar19,&uStack_1b8);
            if (uStack_230 != 0) {
              pub_1406abac0(pbStack_c8,uStack_230,1);
            }
            if (((unaff_RBX[1][8] == '\x02') && (*(ulonglong **)(unaff_RBX[3] + 8) == puStack_1d0))
               && (unaff_RBX[1][9] == '\x03')) {
              *puStack_2c8 = uStack_104;
              uVar16 = *(ulonglong *)(lStack_f0 + (longlong)puStack_100 * 8);
              pdb_1403b05d0(uStack_2d0,uVar16);
              pdb_141b74dc0(&lStack_358,uVar16,&UNK_14304e6b8);
              uVar13 = pdb_1409d4b30(plStack_d0,puStack_e8);
              if (((char)*(longlong *)pbVar46 == '\x04') &&
                 (*(char *)((longlong)pbVar46 + 1) == '\x03')) {
                uStack_1b0 = (code *)pdb_1409d4a80(uVar13);
                uStack_1b8 = (undefined8 **)0x2a;
                uStack_198._0_5_ = (uint5)(uint)fVar5;
                uStack_1a0 = (code *)lVar30;
                pdb_1414af010(in_stack_00000068,&uStack_1b8,&UNK_14304e6d0);
              }
              else {
                uStack_1b8 = (undefined8 **)0x2f;
                uStack_198._0_5_ = (uint5)(uint)fVar5;
                uStack_1a0 = (code *)lVar34;
                pdb_1414af010(in_stack_00000068,&uStack_1b8,&UNK_14304e6e8);
                fVar4 = *pfStack_c0;
                fVar8 = pfStack_c0[1];
                fVar62 = pfStack_c0[2];
                fVar9 = pfStack_c0[3];
                if (*(uint *)((longlong)puStack_d8 + 0x18) == 0) {
                  fVar63 = (float)*(undefined8 *)((longlong)puStack_d8 + 0x28);
                  uVar12 = (undefined4)
                           ((ulonglong)*(undefined8 *)((longlong)puStack_d8 + 0x28) >> 0x20);
                  uVar64 = 0;
                  uVar65 = 0;
                  if ((*(uint *)((longlong)puStack_d8 + 0x1c) & 1) == 0) {
                    uStack_298 = (undefined8 **)
                                 CONCAT44((float)((ulonglong)lVar28 >> 0x20) + _UNK_14300d924,
                                          fVar55 + _DAT_14300d920);
                    uStack_290 = (code *)CONCAT44(_DAT_142e377f0 + _UNK_14300d92c,
                                                  fVar5 + _UNK_14300d928);
                    lStack_288 = _DAT_142fa5c30;
                    pdb_1409f94a0(&uStack_1b8,puVar51,&uStack_298,0,puVar39,
                                  CONCAT44(uVar14,0x7f7fffff),CONCAT44(uVar66,2));
                    uVar16 = 1;
                    uVar19 = 0;
                    uVar41 = _DAT_142e36f60;
                    if (uStack_188._4_4_ != 2) {
                      uVar19 = 0;
                      if ((uStack_188._4_4_ == 1) && (uVar19 = 0, (char)uStack_1b8 == '\x02')) {
                        uVar16 = (ulonglong)uStack_1b8 >> 8 & 0xff;
                        uVar19 = (ulonglong)uStack_1b8 >> 0x10 & 0xff;
                        uStack_f8 = uStack_1b8._3_4_;
                        uStack_f4 = uStack_1b8._7_1_;
                        fVar63 = (float)uStack_1b0;
                        uVar12 = uStack_1b0._4_4_;
                        uVar64 = (undefined4)uStack_1a8;
                        uVar65 = uStack_1a8._4_4_;
                        uVar41 = uStack_180;
                      }
                    }
                  }
                  else {
                    uVar16 = 1;
                    uVar19 = 0;
                    uVar41 = *(ulonglong *)((longlong)puStack_d8 + 0x20);
                  }
                  uStack_1e0 = 0x3f80000000000000;
                  uStack_1d8 = 0;
                  uVar50 = 2;
                  uStack_168 = 1;
                }
                else if (*(uint *)((longlong)puStack_d8 + 0x18) == 1) {
                  fVar63 = (float)*(undefined8 *)((longlong)puStack_d8 + 0x20);
                  uVar12 = (undefined4)
                           ((ulonglong)*(undefined8 *)((longlong)puStack_d8 + 0x20) >> 0x20);
                  uVar64 = 0;
                  uVar65 = 0;
                  fStack_2f8 = fVar4;
                  fStack_2f4 = fVar8;
                  fStack_2f0 = fVar62;
                  fStack_2ec = fVar9;
                  pdb_140ade840(&uStack_1e0,&fStack_2f8);
                  uStack_168 = 0;
                  uVar50 = 0;
                }
                else {
                  uStack_1e0 = 0x3f80000000000000;
                  uStack_1d8 = 0;
                  uVar50 = 0xb;
                  uStack_168 = 0;
                }
                uVar14 = pdb_1409d4b30(plStack_d0,puStack_e8);
                uVar26 = pdb_1409d4a80(uVar14);
                pdb_140dee670(&uStack_1b8,uStack_2e8);
                fVar55 = (float)((uint)uStack_1b8 ^ _DAT_142e377a0);
                fVar57 = (float)(uStack_1b8._4_4_ ^ _UNK_142e377a4);
                uStack_1b0._0_4_ = (float)((uint)(float)uStack_1b0 ^ _UNK_142e377a8);
                fVar58 = (float)(uStack_1b0._4_4_ ^ _UNK_142e377ac);
                uStack_1a8 = (float *)puStack_1d0;
                uStack_198 = (float *)CONCAT17(uStack_f4,
                                               CONCAT43(uStack_f8,
                                                        CONCAT12((char)uVar19,
                                                                 CONCAT11((char)uVar16,uVar50))));
                uStack_190 = (code *)CONCAT44(uVar12,fVar63);
                uStack_188 = CONCAT44(uVar65,uVar64);
                uStack_174 = (undefined2)uStack_1e0;
                uStack_172 = (undefined2)((ulonglong)uStack_1e0 >> 0x10);
                uStack_170 = (undefined4)((ulonglong)uStack_1e0 >> 0x20);
                uStack_16c = uStack_1d8;
                uStack_1b8 = (undefined8 **)
                             CONCAT44(fVar55 * fVar62 * _UNK_142e377d4 +
                                      fVar58 * fVar8 * _UNK_142e377c4 +
                                      (float)uStack_1b0 * fVar4 * _UNK_142e377b4 + fVar9 * fVar57,
                                      fVar57 * fVar62 * _DAT_142e377d0 +
                                      (float)uStack_1b0 * fVar8 * _DAT_142e377c0 +
                                      fVar58 * fVar4 * _DAT_142e377b0 + fVar9 * fVar55);
                uStack_1b0 = (code *)CONCAT44((float)uStack_1b0 * fVar62 * _UNK_142e377dc +
                                              fVar57 * fVar8 * _UNK_142e377cc +
                                              fVar55 * fVar4 * _UNK_142e377bc + fVar9 * fVar58,
                                              fVar58 * fVar62 * _UNK_142e377d8 +
                                              fVar55 * fVar8 * _UNK_142e377c8 +
                                              fVar57 * fVar4 * _UNK_142e377b8 +
                                              fVar9 * (float)uStack_1b0);
                uStack_1a0 = (code *)uVar26;
                uStack_180 = lVar27;
                fStack_178 = fVar5;
                uStack_164 = uVar41;
                pdb_141b752a0(param_6,&uStack_1b8,&UNK_14304e700);
                pdb_140314c70(&lStack_378,&UNK_14304e718);
              }
            }
            return;
          }
          uVar11 = *puVar49;
          puVar49 = puVar49 + 1;
          lVar15 = *(longlong *)
                    (*(longlong *)((longlong)pbVar22 + 0x1a0) + 0x10 + (ulonglong)uVar11 * 0x48);
        } while (lVar15 == 0);
        lVar28 = *(longlong *)((longlong)pbVar22 + 0x1a0) + (ulonglong)uVar11 * 0x48;
        if (((ulonglong)plStack_d0[0x22] < *(ulonglong *)(lVar28 + 0x40)) &&
           (uVar19 = *(ulonglong *)(*(longlong *)(lVar28 + 0x38) + plStack_d0[0x22] * 8),
           uVar19 != 0)) {
          lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x18) + 0x10 + ~uVar19 * 0x30);
        }
        else {
          lVar28 = 0;
        }
        uVar19 = 0;
        pbVar22 = pbStack_c8;
      }
      iVar45 = (int)uVar19;
    }
    lVar34 = uVar19 * 0x38 + lVar28;
    uVar19 = (ulonglong)(iVar45 + 1U);
  } while ((*(longlong *)(lVar34 + 0x18) != *(longlong *)((longlong)puVar48 + 8)) ||
          (*(uint *)(lVar34 + 0x30) != *(uint *)((longlong)puVar48 + 0x10)));
  puStack_1f8 = (uint *)CONCAT44(puStack_1f8._4_4_,iVar45 + 1U);
  plStack_1c8 = (longlong *)CONCAT71(plStack_1c8._1_7_,cVar10);
  lStack_208 = lVar30;
  lStack_200 = lVar28;
  pdb_1401751d0(&uStack_298);
  lVar28 = lStack_288;
  if (lStack_288 != 0) {
    uStack_1b8 = *(undefined8 ***)uStack_290;
    uStack_1b0 = (code *)CONCAT44(uStack_1b0._4_4_,*(undefined4 *)((longlong)uStack_290 + 8));
    if ((undefined8 **)lStack_288 == uStack_298) {
      uStack_b2 = 1;
      pdb_142db7820(&uStack_298);
    }
    *(float *)((longlong)uStack_290 + lVar28 * 0xc + 8) = (float)uStack_1b0;
    *(undefined8 ***)((longlong)uStack_290 + lVar28 * 0xc) = uStack_1b8;
    lStack_288 = lVar28 + 1;
    uStack_1b8 = uStack_298;
    uStack_1b0 = uStack_290;
    uStack_1a0 = (code *)0x8000000000000000;
    uStack_188 = uStack_188 & 0xffffffff00000000;
    fStack_178 = 2.0;
    uStack_174 = 0x101;
    uStack_b2 = 0;
    uStack_1a8 = (float *)lStack_288;
    pdb_140ab2da0(&uStack_1b8,puStack_e8);
    uVar19 = (ulonglong)puStack_1f8 & 0xffffffff;
    lVar28 = lStack_200;
    pbVar22 = pbStack_c8;
    lVar30 = lStack_208;
    puVar48 = puStack_d8;
    cVar10 = (char)plStack_1c8;
    goto LAB_140adb28d;
  }
LAB_140adbc84:
  uStack_b2 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_14304e658);
}

