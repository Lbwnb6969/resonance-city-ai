// Matched PDB: country_core::resources::roofs::roof_shape::roof_uv_and_point_at_ws_pos
// VA 0x140b76bb0, PDB extent 1044 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::roof_uv_and_point_at_ws_pos
   Extent: 1044 bytes. No whole-program auto-analysis. */

undefined2 *
pdb_140b76bb0(undefined2 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5,longlong param_6)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined2 *puVar11;
  undefined1 uVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM1_Ba;
  char cVar20;
  undefined1 in_XMM1_Bb;
  char cVar21;
  undefined1 in_XMM1_Bc;
  char cVar22;
  undefined1 in_XMM1_Bd;
  char cVar23;
  undefined1 in_XMM1_Be;
  char cVar24;
  undefined1 in_XMM1_Bf;
  char cVar25;
  undefined1 in_XMM1_Bg;
  char cVar26;
  undefined1 in_XMM1_Bh;
  char cVar27;
  undefined1 in_XMM1_Bi;
  char cVar28;
  undefined1 in_XMM1_Bj;
  char cVar29;
  undefined1 in_XMM1_Bk;
  char cVar30;
  undefined1 in_XMM1_Bl;
  char cVar31;
  undefined1 in_XMM1_Bm;
  char cVar32;
  undefined1 in_XMM1_Bn;
  char cVar33;
  undefined1 in_XMM1_Bo;
  char cVar34;
  undefined1 in_XMM1_Bp;
  char cVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar40;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  longlong alStack_e8 [3];
  undefined7 uStack_d0;
  undefined4 uStack_c9;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_87;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int aiStack_40 [6];
  
  uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  uStack_a8 = (undefined1)param_2;
  uStack_a7 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(longlong *)(param_6 + 0x48) != 0) {
    uStack_148 = param_3;
    uStack_144 = param_4;
    uVar9 = pdb_1400af0a0(param_6 + 0x50,&uStack_a8);
    bVar18 = (byte)(uVar9 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar13 = 0;
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    cVar20 = (char)iVar5;
    cVar21 = (char)((uint)iVar5 >> 8);
    cVar22 = (char)((uint)iVar5 >> 0x10);
    cVar23 = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    cVar24 = (char)iVar5;
    cVar25 = (char)((uint)iVar5 >> 8);
    cVar26 = (char)((uint)iVar5 >> 0x10);
    cVar27 = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    cVar28 = (char)iVar5;
    cVar29 = (char)((uint)iVar5 >> 8);
    cVar30 = (char)((uint)iVar5 >> 0x10);
    cVar31 = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    cVar32 = (char)iVar5;
    cVar33 = (char)((uint)iVar5 >> 8);
    cVar34 = (char)((uint)iVar5 >> 0x10);
    cVar35 = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_6 + 0x38);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(param_6 + 0x30) + uVar9);
      auVar38[0] = -(auVar1[0] == auVar19[0]);
      auVar38[1] = -(auVar1[1] == auVar19[1]);
      auVar38[2] = -(auVar1[2] == auVar19[2]);
      auVar38[3] = -(auVar1[3] == auVar19[3]);
      auVar38[4] = -(auVar1[4] == auVar19[4]);
      auVar38[5] = -(auVar1[5] == auVar19[5]);
      auVar38[6] = -(auVar1[6] == auVar19[6]);
      auVar38[7] = -(auVar1[7] == auVar19[7]);
      auVar38[8] = -(auVar1[8] == auVar19[0]);
      auVar38[9] = -(auVar1[9] == auVar19[1]);
      auVar38[10] = -(auVar1[10] == auVar19[2]);
      auVar38[0xb] = -(auVar1[0xb] == auVar19[3]);
      auVar38[0xc] = -(auVar1[0xc] == auVar19[4]);
      auVar38[0xd] = -(auVar1[0xd] == auVar19[5]);
      auVar38[0xe] = -(auVar1[0xe] == auVar19[6]);
      auVar38[0xf] = -(auVar1[0xf] == auVar19[7]);
      uVar15 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar16 = *(longlong *)(param_6 + 0x30) +
                 (uVar3 + uVar9 & *(ulonglong *)(param_6 + 0x38)) * -0x10;
        if (param_2 == *(longlong *)(lVar16 + -0x10)) {
          lVar13 = *(longlong *)(lVar16 + -8);
          lVar16 = 0;
          if ((int)lVar13 != 0) {
            lVar16 = lVar13;
          }
          if ((int)lVar16 == 0) goto LAB_140b76c8d;
          uVar12 = 1;
          if (*(longlong *)(param_5 + 0x3e10) == 0) goto LAB_140b76c93;
          alStack_e8[0] = lVar16;
          uVar9 = pdb_1400af0a0(param_5 + 0x3e18,alStack_e8);
          bVar18 = (byte)(uVar9 >> 0x39);
          auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
          auVar19 = pshuflw(auVar19,auVar19,0);
          lVar13 = 0;
          iVar5 = -(uint)(CONCAT13(cVar23,CONCAT12(cVar22,CONCAT11(cVar21,cVar20))) ==
                         CONCAT13(cVar23,CONCAT12(cVar22,CONCAT11(cVar21,cVar20))));
          iVar6 = -(uint)(CONCAT13(cVar27,CONCAT12(cVar26,CONCAT11(cVar25,cVar24))) ==
                         CONCAT13(cVar27,CONCAT12(cVar26,CONCAT11(cVar25,cVar24))));
          iVar7 = -(uint)(CONCAT13(cVar31,CONCAT12(cVar30,CONCAT11(cVar29,cVar28))) ==
                         CONCAT13(cVar31,CONCAT12(cVar30,CONCAT11(cVar29,cVar28))));
          iVar8 = -(uint)(CONCAT13(cVar35,CONCAT12(cVar34,CONCAT11(cVar33,cVar32))) ==
                         CONCAT13(cVar35,CONCAT12(cVar34,CONCAT11(cVar33,cVar32))));
          goto LAB_140b76d13;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar36[0] = -(auVar1[0] == cVar20);
      auVar36[1] = -(auVar1[1] == cVar21);
      auVar36[2] = -(auVar1[2] == cVar22);
      auVar36[3] = -(auVar1[3] == cVar23);
      auVar36[4] = -(auVar1[4] == cVar24);
      auVar36[5] = -(auVar1[5] == cVar25);
      auVar36[6] = -(auVar1[6] == cVar26);
      auVar36[7] = -(auVar1[7] == cVar27);
      auVar36[8] = -(auVar1[8] == cVar28);
      auVar36[9] = -(auVar1[9] == cVar29);
      auVar36[10] = -(auVar1[10] == cVar30);
      auVar36[0xb] = -(auVar1[0xb] == cVar31);
      auVar36[0xc] = -(auVar1[0xc] == cVar32);
      auVar36[0xd] = -(auVar1[0xd] == cVar33);
      auVar36[0xe] = -(auVar1[0xe] == cVar34);
      auVar36[0xf] = -(auVar1[0xf] == cVar35);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar9 = uVar9 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  lVar16 = 0;
LAB_140b76c8d:
  uVar12 = (undefined1)((ulonglong)lVar16 >> 0x20);
LAB_140b76c93:
  *(undefined1 *)((longlong)param_1 + 1) = uVar12;
  *(undefined1 *)param_1 = 1;
  return param_1;
LAB_140b76d13:
  uVar9 = uVar9 & *(ulonglong *)(param_5 + 0x3e00);
  auVar1 = *(undefined1 (*) [16])(*(longlong *)(param_5 + 0x3df8) + uVar9);
  auVar39[0] = -(auVar1[0] == auVar19[0]);
  auVar39[1] = -(auVar1[1] == auVar19[1]);
  auVar39[2] = -(auVar1[2] == auVar19[2]);
  auVar39[3] = -(auVar1[3] == auVar19[3]);
  auVar39[4] = -(auVar1[4] == auVar19[4]);
  auVar39[5] = -(auVar1[5] == auVar19[5]);
  auVar39[6] = -(auVar1[6] == auVar19[6]);
  auVar39[7] = -(auVar1[7] == auVar19[7]);
  auVar39[8] = -(auVar1[8] == auVar19[0]);
  auVar39[9] = -(auVar1[9] == auVar19[1]);
  auVar39[10] = -(auVar1[10] == auVar19[2]);
  auVar39[0xb] = -(auVar1[0xb] == auVar19[3]);
  auVar39[0xc] = -(auVar1[0xc] == auVar19[4]);
  auVar39[0xd] = -(auVar1[0xd] == auVar19[5]);
  auVar39[0xe] = -(auVar1[0xe] == auVar19[6]);
  auVar39[0xf] = -(auVar1[0xf] == auVar19[7]);
  uVar15 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
  uVar14 = (uint)uVar15;
  while (uVar15 != 0) {
    uVar3 = 0;
    for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar17 = *(longlong *)(param_5 + 0x3df8) +
             (uVar3 + uVar9 & *(ulonglong *)(param_5 + 0x3e00)) * -0x20;
    if (lVar16 == *(longlong *)(lVar17 + -0x20)) {
      if ((ulonglong)*(byte *)(lVar17 + -8) != 0x11) {
        puVar10 = (ulonglong *)
                  pdb_140cd4bd0(param_5 + (ulonglong)*(byte *)(lVar17 + -8) * 0x390 + 0x20,
                                *(undefined4 *)(lVar17 + -0x10),*(undefined4 *)(lVar17 + -0xc));
        if (puVar10 == (ulonglong *)0x0) {
          pdb_142dc8110(&UNK_143033b50,0x42,&UNK_143033b98);
        }
        else {
          uVar9 = *puVar10 & 0xffffffff;
          if (((uVar9 < *(ulonglong *)(param_5 + 0x10)) &&
              (lVar13 = *(longlong *)(param_5 + 8), lVar13 != 0)) &&
             (*(uint *)(lVar13 + 0x20 + uVar9 * 0x28) == ((uint)(*puVar10 >> 0x20) | 1))) {
            uStack_140 = *(undefined8 *)((longlong)puVar10 + 0x44);
            uStack_138 = *(undefined4 *)((longlong)puVar10 + 0x4c);
            uStack_128 = *(undefined8 *)((longlong)puVar10 + 0x34);
            uStack_120 = *(undefined8 *)((longlong)puVar10 + 0x3c);
            lVar13 = lVar13 + uVar9 * 0x28;
            pdb_140de8100(&uStack_68,&uStack_140,&uStack_128);
            pdb_140df4540(&uStack_100,&uStack_148);
            uStack_f4 = _DAT_142f61040;
            uStack_ec = 0x80000000;
            uStack_128 = uStack_58;
            uStack_120 = uStack_50;
            uStack_110 = uStack_60;
            uStack_118 = uStack_68;
            lVar16 = *(longlong *)(lVar13 + 0x18);
            lVar17 = *(longlong *)(lVar16 + 0x38);
            uStack_140 = uStack_100;
            uStack_138 = uStack_f8;
            uStack_134 = _DAT_142f61040;
            uStack_12c = 0x80000000;
            (**(code **)(lVar17 + 0x38))
                      (aiStack_40,
                       (*(longlong *)(lVar17 + 0x10) - 1U & 0xfffffffffffffff0) +
                       *(longlong *)(lVar16 + 0x30) + 0x10,&uStack_128,&uStack_140,
                       CONCAT44(uVar40,0x7f7fffff),1);
            if ((aiStack_40[0] != 4) &&
               (pdb_1409f8a10(&uStack_a8,&uStack_100,aiStack_40,&uStack_128,lVar13), iStack_74 != 2)
               ) {
              uStack_c9._1_3_ = (undefined3)uStack_87;
              uStack_d0 = (undefined7)uStack_8f;
              uStack_c9._0_1_ = (undefined1)((ulonglong)uStack_8f >> 0x38);
              if (iStack_74 != 1) {
                *(undefined1 *)((longlong)param_1 + 1) = 4;
              }
              else {
                *(undefined4 *)(param_1 + 10) = uStack_c9;
                *(ulonglong *)(param_1 + 6) = CONCAT71(uStack_d0,uStack_90);
                *(undefined8 *)(param_1 + 2) = uStack_70;
              }
              *(bool *)param_1 = iStack_74 != 1;
              return param_1;
            }
            *param_1 = 0x301;
            return param_1;
          }
        }
        pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c40);
        pcVar2 = (code *)swi(3);
        puVar11 = (undefined2 *)(*pcVar2)();
        return puVar11;
      }
      goto LAB_140b76c93;
    }
    uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
    uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
  }
  auVar37[0] = -(auVar1[0] == (char)iVar5);
  auVar37[1] = -(auVar1[1] == (char)((uint)iVar5 >> 8));
  auVar37[2] = -(auVar1[2] == (char)((uint)iVar5 >> 0x10));
  auVar37[3] = -(auVar1[3] == (char)((uint)iVar5 >> 0x18));
  auVar37[4] = -(auVar1[4] == (char)iVar6);
  auVar37[5] = -(auVar1[5] == (char)((uint)iVar6 >> 8));
  auVar37[6] = -(auVar1[6] == (char)((uint)iVar6 >> 0x10));
  auVar37[7] = -(auVar1[7] == (char)((uint)iVar6 >> 0x18));
  auVar37[8] = -(auVar1[8] == (char)iVar7);
  auVar37[9] = -(auVar1[9] == (char)((uint)iVar7 >> 8));
  auVar37[10] = -(auVar1[10] == (char)((uint)iVar7 >> 0x10));
  auVar37[0xb] = -(auVar1[0xb] == (char)((uint)iVar7 >> 0x18));
  auVar37[0xc] = -(auVar1[0xc] == (char)iVar8);
  auVar37[0xd] = -(auVar1[0xd] == (char)((uint)iVar8 >> 8));
  auVar37[0xe] = -(auVar1[0xe] == (char)((uint)iVar8 >> 0x10));
  auVar37[0xf] = -(auVar1[0xf] == (char)((uint)iVar8 >> 0x18));
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') goto LAB_140b76c93;
  uVar9 = uVar9 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_140b76d13;
}

