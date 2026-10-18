// VA 0x140b51cd0, PDB extent 5377 bytes
// country_core::systems::wall::shapes::shape_placement::shape_placement_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140b55713) overlaps instruction at (ram,0x000140b5570f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::shape_placement::shape_placement_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement.rs
   Extent: 5377 */

void pdb_140b51cd0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11,longlong *param_12,
                  undefined8 *param_13,undefined8 *param_14)

{
  byte *pbVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint7 uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 uVar20;
  undefined *puVar21;
  char cVar22;
  ulonglong uVar23;
  char *pcVar24;
  longlong **pplVar25;
  char cVar26;
  undefined4 *puVar27;
  byte *pbVar28;
  longlong lVar29;
  ushort uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  bool bVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  undefined4 *puVar37;
  int iVar38;
  int iVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  longlong *plStack_280;
  undefined1 auStack_278 [24];
  undefined8 uStack_260;
  byte **ppbStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [17];
  undefined3 uStack_227;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined4 uStack_210;
  longlong lStack_208;
  byte *pbStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  float fStack_1e8;
  undefined4 uStack_1dc;
  float fStack_1cc;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  longlong lStack_1a8;
  float fStack_1a0;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float fStack_178;
  undefined4 uStack_16c;
  float *pfStack_168;
  uint uStack_15c;
  undefined8 uStack_158;
  byte *pbStack_150;
  undefined1 uStack_148;
  undefined2 uStack_147;
  uint uStack_145;
  int iStack_141;
  undefined4 uStack_13d;
  undefined1 uStack_139;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  undefined1 uStack_124;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  undefined4 uStack_108;
  undefined2 uStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  undefined8 uStack_f0;
  undefined1 auVar48 [16];
  
  pplVar25 = (longlong **)auStack_278;
  uStack_f0 = 0xfffffffffffffffe;
  pcVar24 = (char *)*param_1;
  if (*pcVar24 != '\x01') {
    return;
  }
  if (pcVar24[1] == '\0') {
    return;
  }
  puVar2 = (ulonglong *)*param_13;
  lVar18 = param_13[1];
  uVar13 = *puVar2;
  uVar33 = 0;
  uVar14 = uVar13 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar14 = uVar33;
  }
  uVar31 = uVar13 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar31 = uVar33;
  }
  uVar13 = *(ulonglong *)(lVar18 + 0x30);
  uVar23 = uVar13 - uVar31;
  if (uVar31 > uVar13) {
    uVar23 = uVar33;
  }
  uVar3 = *(ulonglong *)(lVar18 + 0x10);
  uVar35 = uVar3 - uVar14;
  if (uVar14 > uVar3) {
    uVar35 = uVar33;
  }
  uVar33 = *(ulonglong *)(lVar18 + 0x40);
  *puVar2 = uVar33 - (uVar35 + uVar23);
  if (uVar14 <= uVar3 && uVar3 - uVar14 != 0 || uVar31 <= uVar13 && uVar13 - uVar31 != 0) {
    *puVar2 = uVar33;
    return;
  }
  plVar19 = (longlong *)&UNK_143044340;
  if (*(char *)*param_2 != '\0') {
    plVar19 = (longlong *)((char *)*param_2 + 4);
  }
  fStack_1a0 = *(float *)(plVar19 + 1);
  lStack_1a8 = *plVar19;
  lVar18 = *param_10;
  if (lVar18 == 0) {
LAB_140b51eea:
    lVar18 = *param_3;
    pbStack_1c0 = (byte *)CONCAT44(pbStack_1c0._4_4_,fStack_1a0);
    uStack_1c8 = lStack_1a8;
    lVar5 = uStack_1c8;
    lVar16 = *param_5;
    lVar4 = param_5[1];
    lStack_208 = 0;
    pbStack_200 = (byte *)0x8;
    puStack_1f8 = (undefined *)0x0;
    uStack_1c8._0_4_ = (float)lStack_1a8;
    fVar41 = (float)uStack_1c8 + _DAT_14304ab10;
    uStack_148 = SUB41(fVar41,0);
    uStack_147 = (undefined2)((uint)fVar41 >> 8);
    uStack_145._1_3_ = SUB43(fStack_1a0 + _UNK_14304ab14,0);
    uStack_145 = CONCAT31(uStack_145._1_3_,(char)((uint)fVar41 >> 0x18));
    iStack_141._1_3_ = SUB43((float)uStack_1c8 + _UNK_14304ab18,0);
    iStack_141 = CONCAT31(iStack_141._1_3_,(char)((uint)(fStack_1a0 + _UNK_14304ab14) >> 0x18));
    uStack_13d._1_3_ = SUB43(fStack_1a0 + _UNK_14304ab1c,0);
    uStack_13d = CONCAT31(uStack_13d._1_3_,
                          (char)((uint)((float)uStack_1c8 + _UNK_14304ab18) >> 0x18));
    uStack_139 = (undefined1)((uint)(fStack_1a0 + _UNK_14304ab1c) >> 0x18);
    plStack_280 = (longlong *)0x140b51f4c;
    uStack_1c8 = lVar5;
    pdb_140b57420(*param_4,&uStack_148,&lStack_208);
    pbVar1 = pbStack_200 + (longlong)puStack_1f8 * 8;
    uStack_148 = SUB81(pbStack_200,0);
    uStack_147 = (undefined2)((ulonglong)pbStack_200 >> 8);
    uStack_145 = (uint)((ulonglong)pbStack_200 >> 0x18);
    iStack_141._0_1_ = (undefined1)((ulonglong)pbStack_200 >> 0x38);
    iStack_141._1_3_ = (uint3)pbVar1;
    uStack_13d = (undefined4)((ulonglong)pbVar1 >> 0x18);
    uStack_139 = (undefined1)((ulonglong)pbVar1 >> 0x38);
    fStack_138 = (float)lVar18;
    fStack_134 = (float)((ulonglong)lVar18 >> 0x20);
    plStack_280 = (longlong *)0x140b51f89;
    uStack_130 = &uStack_1c8;
    pdb_1415f5d00(&uStack_198,&uStack_148);
    if (uStack_188 != (undefined *)0x0) {
      pbVar1 = (byte *)CONCAT44(fStack_18c,fStack_190);
      uStack_148 = SUB81(&uStack_158,0);
      uStack_147 = (undefined2)((ulonglong)&uStack_158 >> 8);
      uStack_145 = (uint)((ulonglong)&uStack_158 >> 0x18);
      iStack_141._0_1_ = (undefined1)((ulonglong)&uStack_158 >> 0x38);
      uStack_158 = &uStack_1c8;
      if (uStack_188 != (undefined *)0x1) {
        pbStack_150 = pbVar1;
        if (uStack_188 < (undefined *)0x15) {
          pbVar28 = pbVar1 + 0x20;
          do {
            plStack_280 = (longlong *)0x140b52d51;
            pdb_141510850(pbVar1,pbVar28,&uStack_158);
            pbVar28 = pbVar28 + 0x20;
          } while (pbVar28 != pbVar1 + (longlong)uStack_188 * 0x20);
        }
        else {
          plStack_280 = (longlong *)0x140b52e2e;
          pdb_140c75e80(pbVar1,uStack_188,&uStack_148);
        }
      }
      uVar45 = *(undefined8 *)(pbVar1 + 8);
      lVar5 = *(longlong *)pbVar1;
      uVar10 = *(undefined4 *)(pbVar1 + 0x10);
      uStack_148 = (undefined1)lVar5;
      uStack_147 = (undefined2)((ulonglong)lVar5 >> 8);
      uStack_145 = (uint)((ulonglong)lVar5 >> 0x18);
      iStack_141._0_1_ = (undefined1)((ulonglong)lVar5 >> 0x38);
      if (*(longlong *)(lVar18 + 0x48) != 0) {
        plStack_280 = (longlong *)0x140b51ff0;
        uVar13 = pdb_1400af0a0(lVar18 + 0x50,&uStack_148);
        bVar40 = (byte)(uVar13 >> 0x39);
        auVar46 = ZEXT216(CONCAT11(bVar40,bVar40));
        auVar46 = pshuflw(auVar46,auVar46,0);
        lVar29 = 0;
        while( true ) {
          uVar13 = uVar13 & *(ulonglong *)(lVar18 + 0x38);
          pcVar24 = (char *)(*(longlong *)(lVar18 + 0x30) + uVar13);
          auVar51[0] = -(*pcVar24 == auVar46[0]);
          auVar51[1] = -(pcVar24[1] == auVar46[1]);
          auVar51[2] = -(pcVar24[2] == auVar46[2]);
          auVar51[3] = -(pcVar24[3] == auVar46[3]);
          auVar51[4] = -(pcVar24[4] == auVar46[4]);
          auVar51[5] = -(pcVar24[5] == auVar46[5]);
          auVar51[6] = -(pcVar24[6] == auVar46[6]);
          auVar51[7] = -(pcVar24[7] == auVar46[7]);
          auVar51[8] = -(pcVar24[8] == auVar46[0]);
          auVar51[9] = -(pcVar24[9] == auVar46[1]);
          auVar51[10] = -(pcVar24[10] == auVar46[2]);
          auVar51[0xb] = -(pcVar24[0xb] == auVar46[3]);
          auVar51[0xc] = -(pcVar24[0xc] == auVar46[4]);
          auVar51[0xd] = -(pcVar24[0xd] == auVar46[5]);
          auVar51[0xe] = -(pcVar24[0xe] == auVar46[6]);
          auVar51[0xf] = -(pcVar24[0xf] == auVar46[7]);
          uVar30 = (ushort)(SUB161(auVar51 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar51[0xf] >> 7) << 0xf;
          uVar11 = (uint)uVar30;
          while (uVar30 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar32 = *(longlong *)(lVar18 + 0x30) +
                     (uVar7 + uVar13 & *(ulonglong *)(lVar18 + 0x38)) * -0x10;
            if (lVar5 == *(longlong *)(lVar32 + -0x10)) {
              uVar13 = *(ulonglong *)(lVar32 + -8);
              uVar14 = uVar13 & 0xffffffff;
              if (uVar14 == 0) {
                bVar34 = false;
              }
              else {
                uVar14 = uVar14 ^ 0xffffffff;
                if ((((*(ulonglong *)(lVar4 + 0x10) <= uVar14) ||
                     (piVar15 = (int *)(uVar14 * 0x18 + *(longlong *)(lVar4 + 8)),
                     piVar15[4] != (int)(uVar13 >> 0x20))) || (*piVar15 == 0)) ||
                   ((uVar13 = *(ulonglong *)(piVar15 + 2),
                    *(ulonglong *)(lVar16 + 0x38) <= (uVar13 & 0xffffffff) ||
                    ((*(ulonglong *)(*(longlong *)(lVar16 + 0x28) + (uVar13 >> 6 & 0x3ffffff) * 8)
                      >> (uVar13 & 0x3f) & 1) == 0)))) goto LAB_140b52196;
                bVar34 = *(float *)(*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(lVar4 + 0x1a0) + 0x18 +
                                       (uVar13 >> 0x20) * 0x48) + 0x10 +
                                     ~*(ulonglong *)
                                       (*(longlong *)
                                         (*(longlong *)(lVar4 + 0x1a0) + 0x38 +
                                         (uVar13 >> 0x20) * 0x48) +
                                       *(longlong *)(lVar16 + 0x110) * 8) * 0x30) + 0x30 +
                                   (ulonglong)(uint)~piVar15[1] * 0x58) <= _DAT_142e3b1d8;
              }
              goto LAB_140b52199;
            }
            uVar30 = (ushort)(uVar11 - 1) & (ushort)uVar11;
            uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar30);
          }
          auVar50[0] = -(*pcVar24 == -1);
          auVar50[1] = -(pcVar24[1] == -1);
          auVar50[2] = -(pcVar24[2] == -1);
          auVar50[3] = -(pcVar24[3] == -1);
          auVar50[4] = -(pcVar24[4] == -1);
          auVar50[5] = -(pcVar24[5] == -1);
          auVar50[6] = -(pcVar24[6] == -1);
          auVar50[7] = -(pcVar24[7] == -1);
          auVar50[8] = -(pcVar24[8] == -1);
          auVar50[9] = -(pcVar24[9] == -1);
          auVar50[10] = -(pcVar24[10] == -1);
          auVar50[0xb] = -(pcVar24[0xb] == -1);
          auVar50[0xc] = -(pcVar24[0xc] == -1);
          auVar50[0xd] = -(pcVar24[0xd] == -1);
          auVar50[0xe] = -(pcVar24[0xe] == -1);
          auVar50[0xf] = -(pcVar24[0xf] == -1);
          if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar50 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar50 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar50 >> 0x2f,0) & 1) != 0) || (SUB161(auVar50 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar50 >> 0x47,0) & 1) != 0) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') break;
          uVar13 = uVar13 + lVar29 + 0x10;
          lVar29 = lVar29 + 0x10;
        }
      }
LAB_140b52196:
      bVar34 = false;
LAB_140b52199:
      uStack_21c = *(undefined4 *)(pbVar1 + 0x1c);
      uVar6 = *(undefined8 *)(pbVar1 + 0x14);
      uStack_224 = (undefined4)uVar6;
      uStack_220 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_218 = *(undefined8 *)(pbVar1 + 0x14);
      uStack_210 = *(undefined4 *)(pbVar1 + 0x1c);
      if (uStack_198 != 0) {
        plStack_280 = (longlong *)0x140b521cb;
        pub_1406abac0(pbVar1,uStack_198 << 5,8);
      }
      if (lStack_208 != 0) {
        plStack_280 = (longlong *)0x140b521e7;
        pub_1406abac0(pbStack_200,lStack_208 << 3,8);
      }
      uVar43 = *(undefined4 *)((longlong)param_7 + 0x1c);
      puVar37 = (undefined4 *)param_7[2];
      *puVar37 = uVar43;
      puVar27 = (undefined4 *)*param_7;
      *puVar27 = 0;
      puVar27[2] = 0;
      puVar27[4] = 1;
      *(undefined8 *)(puVar27 + 8) = uVar45;
      *(longlong *)(puVar27 + 10) = lVar5;
      puVar27[0xc] = uVar10;
      *(bool *)(puVar27 + 0xd) = bVar34;
      *(ulonglong *)((longlong)puVar27 + 0x35) =
           CONCAT17((undefined1)uStack_220,CONCAT43(uStack_224,uStack_227));
      *(ulonglong *)(puVar27 + 0xf) = CONCAT44(uStack_21c,uStack_220);
      *(undefined8 *)(puVar27 + 0x11) = 0;
      puVar27[0x15] = uStack_210;
      *(undefined8 *)(puVar27 + 0x13) = uStack_218;
      cVar26 = '\x02';
      if (*(char *)*param_9 == '\x01') goto code_r0x000140b5225c;
      goto LAB_140b52c14;
    }
    if (uStack_198 != 0) {
      plStack_280 = (longlong *)0x140b5209f;
      pub_1406abac0((byte *)CONCAT44(fStack_18c,fStack_190),uStack_198 << 5,8);
    }
    if (lStack_208 != 0) {
      plStack_280 = (longlong *)0x140b520c2;
      pub_1406abac0(pbStack_200,lStack_208 << 3,8);
    }
    if (*(char *)*param_9 == '\x01') {
      uVar43 = *(undefined4 *)((longlong)param_7 + 0x1c);
      puVar27 = (undefined4 *)*param_7;
      puVar37 = (undefined4 *)param_7[2];
      goto LAB_140b522a9;
    }
    uStack_145 = (uint)lStack_1a8;
    iStack_141 = (int)((ulonglong)lStack_1a8 >> 0x20);
    iVar38 = iStack_141;
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar37 = (undefined4 *)*param_7;
    *puVar37 = 0;
    puVar37[2] = 0;
    puVar37[4] = 0;
    *(undefined1 *)(puVar37 + 0xd) = 2;
    iStack_141._0_1_ = (undefined1)((ulonglong)lStack_1a8 >> 0x20);
    *(ulonglong *)((longlong)puVar37 + 0x35) =
         CONCAT17((undefined1)iStack_141,CONCAT43(uStack_145,CONCAT21(uStack_147,uStack_148)));
    *(ulonglong *)(puVar37 + 0xf) = CONCAT44(fStack_1a0,iVar38);
    *(undefined8 *)(puVar37 + 0x11) = 0;
    *(undefined8 *)(puVar37 + 0x13) = 0;
    puVar37[0x15] = 0;
    pcVar24 = (char *)*param_8;
    cVar26 = '\0';
    goto LAB_140b52caa;
  }
  puStack_248 = (undefined *)CONCAT44(puStack_248._4_4_,0xfb);
  ppuStack_250 = (undefined **)CONCAT44(ppuStack_250._4_4_,0x7f7fffff);
  plStack_280 = (longlong *)0x140b51e32;
  pdb_1409f94a0(&uStack_148,lVar18,*param_11,0);
  if (iStack_114 == 2) {
LAB_140b51ee7:
    goto LAB_140b51eea;
  }
  fStack_178 = fStack_128;
  uStack_16c = uStack_11c;
  uVar9 = CONCAT43(uStack_145,CONCAT21(uStack_147,uStack_148));
  lStack_208 = CONCAT17((undefined1)iStack_141,uVar9);
  pbStack_200 = (byte *)CONCAT17(uStack_139,CONCAT43(uStack_13d,iStack_141._1_3_));
  puStack_1f8 = (undefined *)CONCAT44(fStack_134,fStack_138);
  uStack_180 = CONCAT44(uStack_130._4_4_,(float)uStack_130);
  fStack_1e8 = fStack_128;
  uStack_1dc = uStack_11c;
  fStack_f8 = fStack_128;
  uVar13 = (ulonglong)uVar9 & 0xff;
  puVar21 = &UNK_14305a408;
  uVar14 = (ulonglong)*(int *)(&UNK_14305a408 + uVar13 * 4);
  plVar12 = (longlong *)(&UNK_14305a408 + uVar14);
  cVar26 = (char)plVar12;
  cVar22 = (char)lVar18;
  plVar19 = plVar12;
  pbStack_1c0 = pbStack_200;
  uStack_188 = puStack_1f8;
  uStack_100 = uStack_180;
  uStack_1c8 = lStack_208;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar13) {
  case 0:
  case 9:
    lVar18 = *param_3;
    plStack_280 = (longlong *)0x140b523b4;
    pbStack_150 = pbStack_200;
    lVar16 = pdb_140b54f80(lVar18,pbStack_200,&UNK_143059bb0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      plStack_280 = (longlong *)0x140b52da2;
      pdb_142dc8150(&UNK_143059bc8);
    }
    lVar4 = lVar16 + 0x38;
    fVar54 = uStack_100._4_4_;
    if (_DAT_142f3e554 <= uStack_100._4_4_) {
      fVar54 = _DAT_142f3e554;
    }
    uStack_100 = CONCAT44(fVar54,(undefined4)uStack_100);
    plStack_280 = (longlong *)0x140b52404;
    uVar45 = pdb_1419aa990(lVar4);
    plStack_280 = (longlong *)0x140b5241d;
    uVar10 = pdb_1419aaa60(lVar16);
    auVar47._8_4_ = (int)((ulonglong)extraout_XMM0_Qa >> 0x20);
    auVar47._0_8_ = extraout_XMM0_Qa;
    auVar47._12_4_ = (int)((ulonglong)uVar45 >> 0x20);
    auVar46._8_8_ = auVar47._8_8_;
    auVar46._0_4_ = (undefined4)extraout_XMM0_Qa;
    auVar46._4_4_ = (int)uVar45;
    auVar46 = maxps(ZEXT816(0),auVar46);
    fVar53 = auVar46._0_4_;
    fVar41 = auVar46._4_4_;
    iVar38 = -(uint)(_DAT_142e37950 < fVar53);
    iVar39 = -(uint)(_UNK_142e37954 < fVar41);
    auVar49._4_4_ = iVar39;
    auVar49._0_4_ = iVar38;
    auVar49._8_4_ = iVar39;
    auVar49._12_4_ = iVar39;
    auVar48._8_8_ = auVar49._8_8_;
    auVar48._4_4_ = iVar38;
    auVar48._0_4_ = iVar38;
    uVar11 = movmskpd(uVar10,auVar48);
    if ((uVar11 & 2) == 0) {
      if ((uVar11 & 1) == 0) goto code_r0x000140b5247f;
code_r0x000140b52452:
      uVar11 = *(uint *)(lVar16 + 600);
      fVar53 = _DAT_142e36f28;
      if (1 < uVar11) goto code_r0x000140b5248e;
code_r0x000140b5245d:
      if ((uVar11 & 1) == 0) {
        plStack_280 = (longlong *)0x140b52579;
        fVar42 = fVar53;
        uVar10 = pdb_140def5e0(lVar16 + 0x25c);
      }
      else {
        uVar10 = *(undefined4 *)(lVar16 + 0x25c);
        fVar42 = *(float *)(lVar16 + 0x260);
      }
    }
    else {
      fVar41 = _DAT_142e36f28;
      if ((uVar11 & 1) != 0) goto code_r0x000140b52452;
code_r0x000140b5247f:
      uVar11 = *(uint *)(lVar16 + 600);
      if (uVar11 < 2) goto code_r0x000140b5245d;
code_r0x000140b5248e:
      plStack_280 = (longlong *)0x140b524a0;
      pdb_1419aa0c0(&uStack_148,lVar4);
      uVar10 = CONCAT13((undefined1)uStack_145,CONCAT21(uStack_147,uStack_148));
      fVar42 = (float)CONCAT13((undefined1)uStack_13d,iStack_141._1_3_);
    }
    if (fVar54 < _DAT_142e37838) {
      plStack_280 = (longlong *)0x140b525ab;
      pdb_1419a7e00(&uStack_100,lVar4);
      fVar54 = 0.0;
    }
    plStack_280 = (longlong *)0x140b525d1;
    pdb_1419a7e00(&uStack_148,lVar4);
    uStack_198 = CONCAT44(CONCAT13((undefined1)uStack_13d,iStack_141._1_3_),
                          CONCAT13((undefined1)uStack_145,CONCAT21(uStack_147,uStack_148)));
    puVar36 = (undefined8 *)(auStack_238 + 4);
    plStack_280 = (longlong *)0x140b525ff;
    pdb_140df4540(puVar36,&uStack_198);
    if (((0.0 < fVar54) && (*(uint *)(lVar16 + 600) < 2)) &&
       ((*pcVar24 == '\x01' && (pcVar24[1] == '\x02')))) {
      if (*(uint *)(lVar16 + 600) == 1) {
        uVar45 = *(undefined8 *)(lVar16 + 0x25c);
        uVar6 = *(undefined8 *)(lVar16 + 0x264);
        uStack_148 = (undefined1)uVar45;
        uStack_147 = (undefined2)((ulonglong)uVar45 >> 8);
        uStack_145 = (uint)((ulonglong)uVar45 >> 0x18);
        iStack_141._0_1_ = (undefined1)((ulonglong)uVar45 >> 0x38);
        iStack_141._1_3_ = (uint3)uVar6;
        uStack_13d = (undefined4)((ulonglong)uVar6 >> 0x18);
        uStack_139 = (undefined1)((ulonglong)uVar6 >> 0x38);
        fStack_138 = (float)*(undefined8 *)(lVar16 + 0x26c) + _UNK_1430595a0;
        fStack_134 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x26c) >> 0x20) + _UNK_1430595a4;
        plStack_280 = (longlong *)0x140b52679;
        uVar43 = pdb_140df0920(&uStack_148);
      }
      else {
        uVar45 = *(undefined8 *)(lVar16 + 0x25c);
        uVar6 = *(undefined8 *)(lVar16 + 0x264);
        uStack_148 = (undefined1)uVar45;
        uStack_147 = (undefined2)((ulonglong)uVar45 >> 8);
        uStack_145 = (uint)((ulonglong)uVar45 >> 0x18);
        iStack_141._0_1_ = (undefined1)((ulonglong)uVar45 >> 0x38);
        uStack_139 = (undefined1)((ulonglong)uVar6 >> 0x38);
        fVar44 = (float)uVar6 + _UNK_143059594;
        iStack_141._1_3_ = SUB43(fVar44,0);
        uStack_13d._1_3_ = (undefined3)((ulonglong)uVar6 >> 0x20);
        uStack_13d._0_1_ = (undefined1)((uint)fVar44 >> 0x18);
        plStack_280 = (longlong *)0x140b52b33;
        uVar43 = pdb_140def2c0(&uStack_148);
      }
      uStack_148 = (undefined1)uVar43;
      uStack_147 = (undefined2)((uint)uVar43 >> 8);
      uStack_145._1_3_ = SUB43(fVar53,0);
      uStack_145 = CONCAT31(uStack_145._1_3_,(char)((uint)uVar43 >> 0x18));
      iStack_141._0_1_ = (undefined1)((uint)fVar53 >> 0x18);
      plStack_280 = (longlong *)0x140b52b5a;
      pdb_140df4540(&uStack_100,&uStack_148);
    }
    plStack_280 = (longlong *)0x140b52b6c;
    uVar45 = pdb_140b54b40(lVar18,pbStack_150);
    plStack_280 = (longlong *)0x140b52b7b;
    lVar18 = pdb_140b55350(uVar45,*param_5,param_5[1]);
    if (lVar18 == 0) {
      uVar20 = false;
    }
    else {
      uVar20 = *(float *)(lVar18 + 0x30) <= _DAT_142e3b1d8;
    }
    uVar43 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar37 = (undefined4 *)param_7[2];
    *puVar37 = uVar43;
    puVar27 = (undefined4 *)*param_7;
    *puVar27 = 0;
    puVar27[2] = 0;
    puVar27[4] = 1;
    cVar26 = '\x02';
    goto code_r0x000140b52bba;
  default:
    goto LAB_140b51ee7;
  case 2:
    uStack_1c8._1_1_ = (byte)uStack_147;
    uStack_15c = (uint)uStack_1c8._1_1_;
    lVar18 = *param_3;
    plStack_280 = (longlong *)0x140b524dd;
    pbStack_150 = pbStack_200;
    lVar16 = pdb_140b54f80(lVar18,pbStack_200,&UNK_143059ae0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      plStack_280 = (longlong *)0x140b52dae;
      pdb_142dc8150(&UNK_143059af8);
    }
    if (1 < *(uint *)(lVar16 + 600)) {
                    /* WARNING: Subroutine does not return */
      plStack_280 = (longlong *)0x140b52dba;
      pdb_142dc8150(&UNK_143021f00);
    }
    plStack_280 = (longlong *)0x140b5251e;
    fVar54 = (float)pdb_1419aa990(lVar16 + 0x38);
    fVar41 = _DAT_142e36f28;
    plStack_280 = (longlong *)0x140b52544;
    fVar42 = (float)pdb_1419aaa60(lVar16);
    if (*(char *)(lVar16 + 600) == '\0') {
      fVar53 = 0.0;
      if (0.0 <= fVar42) {
        fVar53 = fVar42;
      }
      fVar42 = fVar41;
      if (fVar53 <= fVar41) {
        fVar42 = fVar53;
      }
      plStack_280 = (longlong *)0x140b5269b;
      uVar10 = pdb_140def5e0(lVar16 + 0x25c);
    }
    else {
      uVar10 = *(undefined4 *)(lVar16 + 0x25c);
      fVar42 = *(float *)(lVar16 + 0x260);
    }
    if ((*pcVar24 != '\x01') ||
       ((fVar53 = _DAT_14303aa00, pcVar24[1] != '\x02' &&
        (fVar53 = _DAT_142e37888, pcVar24[1] != '\x01')))) {
                    /* WARNING: Subroutine does not return */
      plStack_280 = (longlong *)0x140b52e14;
      pdb_142dc83b0(&UNK_143059b70,0x28,&UNK_143059b98);
    }
    fVar53 = fVar53 + uStack_100._4_4_;
    plStack_280 = (longlong *)0x140b526e9;
    uVar45 = pdb_140b54b40(lVar18,pbStack_150);
    if ((int)uVar45 == 0) {
                    /* WARNING: Subroutine does not return */
      plStack_280 = (longlong *)0x140b52dc6;
      pdb_142dc8150(&UNK_143059b40);
    }
    plStack_280 = (longlong *)0x140b52704;
    pdb_140b55520(&uStack_198,*param_5,param_5[1],uVar45);
    if ((int)uStack_198 != 3) {
      uStack_148 = (undefined1)uStack_198;
      uStack_147 = (undefined2)((ulonglong)uStack_198 >> 8);
      uStack_145 = (uint)((ulonglong)uStack_198 >> 0x18);
      iStack_141._0_1_ = (undefined1)((ulonglong)uStack_198 >> 0x38);
      iStack_141._1_3_ = SUB43(fStack_190,0);
      uStack_13d = (undefined4)(CONCAT44(fStack_18c,fStack_190) >> 0x18);
      uStack_139 = (undefined1)((uint)fStack_18c >> 0x18);
      ppbStack_258 = (byte **)&UNK_143059b58;
                    /* WARNING: Subroutine does not return */
      plStack_280 = (longlong *)0x140b52dfc;
      pdb_142dc8170(&UNK_143059ea8,0x2b,&uStack_148,&UNK_143059e88);
    }
    plStack_280 = (longlong *)0x140b52727;
    pdb_140b51610(&uStack_198,CONCAT44(fStack_18c,fStack_190),auStack_1f0,_DAT_142e36f50);
    if ((int)uStack_198 == 0) {
      cVar26 = '\0';
code_r0x000140b52885:
      uVar20 = (undefined1)uStack_15c;
    }
    else {
      fVar44 = uStack_198._4_4_;
      if ((int)uStack_198 == 1) {
        uStack_100 = CONCAT44(fStack_190,uStack_198._4_4_);
        fStack_f8 = fStack_18c;
        uStack_130._4_4_ = fStack_18c;
        fStack_134 = uStack_198._4_4_;
        uStack_148 = 0;
        uStack_147 = 0;
        uStack_145 = uStack_145 & 0xffffff00;
        fStack_138 = 0.3;
        fStack_128 = 1.0;
        uStack_124 = 0;
        uVar45 = *param_14;
        plStack_280 = (longlong *)0x140b527ba;
        pdb_140ab07b0(&uStack_148,uVar45);
        plStack_280 = (longlong *)0x140b527bf;
        pfStack_168 = (float *)pdb_140b4b7e0();
        uStack_158 = (undefined8 *)CONCAT44(fStack_18c,fVar44);
        plStack_280 = (longlong *)0x140b527f4;
        pdb_140df4540(&uStack_148,&uStack_158);
        *pfStack_168 = fVar44;
        pfStack_168[1] = fStack_190;
        pfStack_168[2] = fStack_18c;
        pfStack_168[5] = (float)CONCAT13((undefined1)uStack_13d,iStack_141._1_3_);
        *(ulonglong *)(pfStack_168 + 3) =
             CONCAT17((undefined1)iStack_141,CONCAT43(uStack_145,CONCAT21(uStack_147,uStack_148)));
        uStack_148 = 2;
        uStack_147 = 0;
        uStack_145 = 0;
        iStack_141._1_3_ = (uint3)pfStack_168;
        iStack_141 = (uint)iStack_141._1_3_ << 8;
        uStack_13d = (undefined4)((ulonglong)pfStack_168 >> 0x18);
        uStack_139 = (undefined1)((ulonglong)pfStack_168 >> 0x38);
        fStack_138 = 2.8026e-45;
        fStack_134 = 0.0;
        uStack_130._0_4_ = 0.0;
        uStack_130._4_4_ = -0.0;
        uStack_118 = 0;
        uStack_108 = 0x40400000;
        uStack_104 = 0x101;
        plStack_280 = (longlong *)0x140b5287b;
        pdb_140ab2da0(&uStack_148,uVar45);
        cVar26 = '\x02';
        goto code_r0x000140b52885;
      }
      plStack_280 = (longlong *)0x140b528a1;
      fStack_1cc = fVar54;
      pfVar17 = (float *)pdb_140b4b7e0();
      uVar13 = (ulonglong)_DAT_142f6a630 >> 0x20;
      *pfVar17 = (float)_DAT_142f6a630 + fStack_190;
      pfVar17[1] = (float)uVar13 + fStack_18c;
      pfVar17[2] = (float)uStack_188 + 0.0;
      pfVar17[3] = uStack_188._4_4_ + 0.0;
      fVar52 = (float)((ulonglong)uStack_180 >> 0x20);
      *(ulonglong *)(pfVar17 + 4) = CONCAT44(fVar52 + 0.0,_DAT_142e3787c + (float)uStack_180);
      uStack_148 = 2;
      uStack_147 = 0;
      uStack_145 = 0;
      iStack_141._1_3_ = (uint3)pfVar17;
      iStack_141._0_1_ = 0;
      uStack_13d = (undefined4)((ulonglong)pfVar17 >> 0x18);
      uStack_139 = (undefined1)((ulonglong)pfVar17 >> 0x38);
      fStack_138 = 2.8026e-45;
      fStack_134 = 0.0;
      uStack_130._0_4_ = 0.0;
      uStack_130._4_4_ = -0.0;
      uStack_118 = 0;
      uStack_108 = 0x40400000;
      uStack_104 = 0x101;
      uVar45 = *param_14;
      plStack_280 = (longlong *)0x140b5292e;
      pdb_140ab2da0(&uStack_148,uVar45);
      fVar54 = fVar41 - fVar44;
      fVar55 = fVar52 * fVar44 + (float)uStack_188 * fVar54;
      fVar52 = fVar44 * uStack_188._4_4_ + fVar54 * fStack_190;
      uStack_130._0_4_ = fVar44 * (float)uStack_180 + fVar54 * fStack_18c;
      uStack_100 = CONCAT44((float)uStack_130,fVar52);
      uStack_148 = 0;
      uStack_147 = 0;
      uStack_145 = uStack_145 & 0xffffff00;
      fStack_138 = 0.3;
      fStack_128 = 1.0;
      uStack_124 = 0;
      plStack_280 = (longlong *)0x140b529cc;
      fStack_134 = fVar52;
      uStack_130._4_4_ = fVar55;
      fStack_f8 = fVar55;
      pdb_140ab07b0(&uStack_148,uVar45);
      plStack_280 = (longlong *)0x140b529d1;
      pfStack_168 = (float *)pdb_140b4b7e0();
      uStack_158 = (undefined8 *)CONCAT44(fVar55,fVar52);
      plStack_280 = (longlong *)0x140b52a06;
      pdb_140df4540(&uStack_148,&uStack_158);
      pfStack_168[2] = fStack_f8;
      *(undefined8 *)pfStack_168 = uStack_100;
      pfStack_168[5] = (float)CONCAT13((undefined1)uStack_13d,iStack_141._1_3_);
      *(ulonglong *)(pfStack_168 + 3) =
           CONCAT17((undefined1)iStack_141,CONCAT43(uStack_145,CONCAT21(uStack_147,uStack_148)));
      uStack_148 = 2;
      uStack_147 = 0;
      uStack_145 = 0;
      iStack_141._1_3_ = (uint3)pfStack_168;
      iStack_141 = (uint)iStack_141._1_3_ << 8;
      uStack_13d = (undefined4)((ulonglong)pfStack_168 >> 0x18);
      uStack_139 = (undefined1)((ulonglong)pfStack_168 >> 0x38);
      fStack_138 = 2.8026e-45;
      fStack_134 = 0.0;
      uStack_130._0_4_ = 0.0;
      uStack_130._4_4_ = -0.0;
      uStack_118 = 0;
      uStack_108 = 0x40400000;
      uStack_104 = 0x101;
      plStack_280 = (longlong *)0x140b52a88;
      pdb_140ab2da0(&uStack_148,uVar45);
      cVar26 = '\x02';
      uVar20 = (undefined1)uStack_15c;
      fVar54 = fStack_1cc;
    }
    fVar44 = 0.0;
    if (0.0 <= fVar54) {
      fVar44 = fVar54;
    }
    if (fVar44 <= fVar41) {
      fVar41 = fVar44;
    }
    fVar53 = fVar53 + _DAT_142e37874;
    fVar54 = *(float *)(lVar16 + 0x284);
    uVar43 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar37 = (undefined4 *)param_7[2];
    *puVar37 = uVar43;
    puVar27 = (undefined4 *)*param_7;
    *puVar27 = 1;
    puVar27[1] = fVar53;
    puVar27[2] = 0;
    puVar27[4] = 2;
    *(undefined8 *)(puVar27 + 5) = uStack_100;
    puVar27[7] = fStack_f8;
    puVar36 = &uStack_100;
code_r0x000140b52bba:
    puVar27[8] = uVar10;
    puVar27[9] = fVar42;
    *(byte **)(puVar27 + 10) = pbStack_150;
    puVar27[0xc] = fVar41;
    *(undefined1 *)(puVar27 + 0xd) = uVar20;
    *(undefined8 *)(puVar27 + 0xe) = uStack_100;
    puVar27[0x10] = fStack_f8;
    puVar27[0x11] = fVar54;
    puVar27[0x12] = 0;
    *(undefined8 *)(puVar27 + 0x13) = *puVar36;
    puVar27[0x15] = *(undefined4 *)(puVar36 + 1);
    if (*(char *)*param_9 == '\0') {
LAB_140b52c14:
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      lVar18 = *param_12;
      lVar16 = *(longlong *)(lVar18 + 0x30);
      uVar45 = *(undefined8 *)(lVar18 + 0x40);
      if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
        plStack_280 = (longlong *)0x140b52c42;
        pdb_142d7e980(lVar18 + 0x20);
      }
      lVar4 = *(longlong *)(lVar18 + 0x28);
      *(undefined8 *)(lVar4 + lVar16 * 0x10) = uVar45;
      *(undefined1 *)(lVar4 + 8 + lVar16 * 0x10) = 0;
      *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
      pcVar24 = (char *)*param_8;
      if ((cVar26 != '\0') && (*pcVar24 == '\0')) {
        fStack_138 = (float)puVar27[0x10];
        uVar45 = *(undefined8 *)(puVar27 + 0xe);
        iStack_141._1_3_ = (uint3)uVar45;
        uStack_13d = (undefined4)((ulonglong)uVar45 >> 0x18);
        uStack_139 = (undefined1)((ulonglong)uVar45 >> 0x38);
        uStack_148 = 3;
        plStack_280 = (longlong *)0x140b52caa;
        pdb_1414af100(param_6,&uStack_148,&UNK_143059ca8);
      }
LAB_140b52caa:
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      *pcVar24 = cVar26;
    }
    else {
code_r0x000140b5225c:
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      lVar18 = *param_12;
      lVar16 = *(longlong *)(lVar18 + 0x30);
      uVar45 = *(undefined8 *)(lVar18 + 0x40);
      if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
        plStack_280 = (longlong *)0x140b5228a;
        pdb_142d7e980(lVar18 + 0x20);
      }
      lVar4 = *(longlong *)(lVar18 + 0x28);
      *(undefined8 *)(lVar4 + lVar16 * 0x10) = uVar45;
      *(undefined1 *)(lVar4 + 8 + lVar16 * 0x10) = 1;
      *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
LAB_140b522a9:
      uStack_145 = (uint)lStack_1a8;
      iStack_141 = (int)((ulonglong)lStack_1a8 >> 0x20);
      iVar38 = iStack_141;
      *puVar37 = uVar43;
      *puVar27 = 0;
      puVar27[2] = 0;
      puVar27[4] = 0;
      *(undefined1 *)(puVar27 + 0xd) = 2;
      iStack_141._0_1_ = (undefined1)((ulonglong)lStack_1a8 >> 0x20);
      *(ulonglong *)((longlong)puVar27 + 0x35) =
           CONCAT17((undefined1)iStack_141,CONCAT43(uStack_145,CONCAT21(uStack_147,uStack_148)));
      *(ulonglong *)(puVar27 + 0xf) = CONCAT44(fStack_1a0,iVar38);
      *(undefined8 *)(puVar27 + 0x11) = 0;
      *(undefined8 *)(puVar27 + 0x13) = 0;
      puVar27[0x15] = 0;
    }
    return;
  case 3:
  case 4:
  case 5:
  case 0xf:
  case 0x10:
    uStack_148 = SUB81(&uStack_1c8,0);
    uStack_147 = (undefined2)((ulonglong)&uStack_1c8 >> 8);
    uStack_145 = (uint)((ulonglong)&uStack_1c8 >> 0x18);
    iStack_141._0_1_ = (undefined1)((ulonglong)&uStack_1c8 >> 0x38);
    iStack_141 = CONCAT31(0xb55630,(undefined1)iStack_141);
    uStack_13d = 0x140;
    uStack_139 = 0;
                    /* WARNING: Subroutine does not return */
    plStack_280 = (longlong *)0x140b52d96;
    pdb_142dc83d0(&UNK_143059c40,&uStack_148,&UNK_143059c90);
  case 0x11:
    plStack_280 = (longlong *)0x140b55622;
    pdb_140f66090(plVar12,0x43059fe8,0xb,&puStack_248);
    return;
  case 0x12:
    *(char *)(uVar14 + 0xcbca2550) = *(char *)(uVar14 + 0xcbca2550) + cVar22;
    *(char *)plVar12 = (char)*plVar12 + cVar26;
    puStack_1f8 = &UNK_14305a410;
    puStack_248 = &UNK_143059ff8;
    ppuStack_250 = &puStack_1f8;
    ppbStack_258 = (byte **)0x7;
    break;
  case 0x13:
    *(char *)(uVar14 + 0xcbca2550) = *(char *)(uVar14 + 0xcbca2550) + cVar22;
    *(char *)plVar12 = (char)*plVar12 + cVar26;
    puStack_1f8 = &UNK_14305a410;
    puStack_248 = &UNK_143059ff8;
    ppuStack_250 = &puStack_1f8;
    ppbStack_258 = (byte **)0x7;
    break;
  case 0x14:
    uStack_240 = 9;
    uStack_260 = 10;
    plStack_280 = plVar12;
    ppbStack_258 = (byte **)lVar18;
    pdb_140f66f00((ulonglong)plVar12 & 0xffffffffffffff30,&UNK_14305a1c0,0x18,&UNK_14305a184);
    return;
  case 0x15:
    puVar21 = (undefined *)CONCAT71(0x14305a4,(&UNK_14305a391)[uVar14] + '\b');
    plVar19 = (longlong *)((ulonglong)plVar12 & 0xffffffffffffff30);
  case 0x1c:
    *(char *)(plVar19 + -0xee76fd7) = (char)plVar19[-0xee76fd7] + cVar22;
    *(char *)plVar19 = (char)*plVar19 + (char)plVar19;
    puStack_1f8 = puVar21 + 4;
    puStack_248 = &UNK_14305a158;
    ppuStack_250 = &puStack_1f8;
    ppbStack_258 = (byte **)0xa;
    puVar21 = &UNK_14305a18e;
code_r0x000140b55b44:
    *(undefined8 *)((longlong)pplVar25 + -8) = 0x140b55b59;
    pdb_140f66e50(plVar19,puVar21,0xc,&UNK_14305a184);
    return;
  case 0x16:
    plVar12 = (longlong *)
              (ulonglong)((int)plVar12 + 0x25046d1 + (uint)(0xfffffffebcfa5bf7 < uVar14));
    break;
  case 0x17:
    pplVar25 = &plStack_280;
    plVar19 = (longlong *)((ulonglong)plVar12 & 0xffffffffffffff30);
    ppbStack_258 = &pbStack_200;
    uStack_260 = 10;
    puVar21 = &UNK_14305a178;
    plStack_280 = plVar12;
    goto code_r0x000140b55b44;
  case 0x18:
    uStack_240 = 4;
    uStack_260 = 0xc;
    plStack_280 = plVar12;
    ppbStack_258 = (byte **)lVar18;
    pdb_140f66f00((ulonglong)plVar12 & 0xffffffffffffff30,&UNK_14305a0d8,0x12,&UNK_14305a0ea);
    return;
  case 0x19:
    *(char *)plVar12 = (char)*plVar12 + cVar26;
    pbVar1 = &UNK_14305a395 + uVar14;
    bVar40 = *pbVar1;
    *pbVar1 = *pbVar1 + 8;
    plVar12 = (longlong *)(ulonglong)((int)plVar12 + 0x2504587 + (uint)(0xf7 < bVar40));
    break;
  case 0x1a:
    ppuStack_250 = &puStack_1f8;
    ppbStack_258 = (byte **)0x6;
    plStack_280 = (longlong *)0x140b5583a;
    pdb_140f66e50((int)pcVar24 + 0x50U & 0xffffff30,&UNK_14305a140,0xb,&UNK_14305a14b);
    return;
  case 0x1b:
    *(int *)(&UNK_14305a40a + lVar18 * 2 + uVar14) =
         *(int *)(&UNK_14305a40a + lVar18 * 2 + uVar14) + 0x48;
    puStack_248 = (undefined *)CONCAT44(puStack_248._4_4_,0x4305a408);
    ppuStack_250 = &puStack_1f8;
    ppbStack_258 = (byte **)0x7;
    break;
  case 0x1d:
    uStack_240 = 4;
    uStack_260 = 0xc;
    plStack_280 = plVar12;
    ppbStack_258 = (byte **)lVar18;
    pdb_140f66f00((ulonglong)plVar12 & 0xffffffffffffff30,&UNK_14305a0fa,0x14,&UNK_14305a0ea);
    return;
  case 0x1e:
    uStack_240 = 4;
    uStack_260 = 0xc;
    plStack_280 = param_3;
    ppbStack_258 = (byte **)lVar18;
    pdb_140f66f00((ulonglong)plVar12 & 0xffffffffffffff30,&UNK_14305a10e,0x10,&UNK_14305a0ea);
    return;
  case 0x1f:
    uStack_240 = 9;
    uStack_260 = 10;
    plStack_280 = plVar12;
    ppbStack_258 = (byte **)lVar18;
    pdb_140f66f00((ulonglong)plVar12 & 0xffffffffffffff30,&UNK_14305a1e1,0x1a,&UNK_14305a184);
    return;
  case 0x20:
    ppuStack_250 = (undefined **)CONCAT44(ppuStack_250._4_4_,(int)lVar18);
    uStack_218 = 5;
    auStack_238._0_8_ = 4;
    ppbStack_258 = (byte **)0x7;
    plStack_280 = (longlong *)0x140b5591b;
    pdb_140f66ff0(plVar12,&UNK_14305a088,4,&UNK_14305a01c);
    return;
  case 0x21:
    ppbStack_258 = &pbStack_200;
    uStack_260 = 7;
    plStack_280 = param_3;
    pdb_140f66e50(CONCAT31((int3)(char)((ulonglong)plVar12 >> 8),cVar26) & 0xffffff30,&UNK_14305a018
                  ,4,&UNK_14305a01c);
    return;
  }
  plStack_280 = (longlong *)0x140b55bac;
  pdb_140f66e50(plVar12);
  return;
}

