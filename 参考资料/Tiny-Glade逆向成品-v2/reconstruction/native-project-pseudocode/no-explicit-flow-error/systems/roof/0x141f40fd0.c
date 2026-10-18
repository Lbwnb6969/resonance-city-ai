// VA 0x141f40fd0, PDB extent 3682 bytes
// system_roof::ui_edit_roof_ridge_dir::ui_edit_roof_ridge_dir
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::ui_edit_roof_ridge_dir::ui_edit_roof_ridge_dir
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
   Extent: 3682 */

void pdb_141f40fd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  code *pcVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  char *pcVar23;
  int *piVar24;
  ulonglong uVar25;
  undefined8 ****ppppuVar26;
  undefined1 (*pauVar27) [16];
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  longlong lVar31;
  undefined8 ****ppppuVar32;
  bool bVar33;
  float fVar34;
  undefined4 unaff_XMM7_Db;
  uint uVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_2b8 [16];
  undefined8 ****ppppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 **ppuStack_298;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  int iStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined1 (*pauStack_1d0) [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1a8;
  undefined8 ****ppppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  int iStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 ***pppuStack_168;
  undefined1 (*pauStack_160) [16];
  undefined8 uStack_158;
  undefined8 ***pppuStack_148;
  undefined1 (*pauStack_140) [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint auStack_128 [2];
  longlong lStack_120;
  undefined8 **ppuStack_118;
  undefined8 ***pppuStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar17 = pdb_140e94b40();
  if (cVar17 == '\0') {
    bVar33 = false;
    lStack_120 = 0;
    pcVar23 = (char *)*param_1;
    if (*pcVar23 == '\0') {
LAB_141f41230:
      if (*(int *)(pcVar23 + 8) != 0) goto LAB_141f4123a;
      uVar6 = *param_2;
      pdb_140b55220(&ppppuStack_2a8,uVar6);
      fVar16 = _UNK_14342eccc;
      fVar15 = _UNK_14342ecc8;
      fVar14 = _UNK_14342ecc4;
      fVar13 = _DAT_14342ecc0;
      fVar12 = _DAT_142e37830;
      uVar18 = _DAT_142e37820;
      fVar11 = _DAT_142e377f0;
      fVar10 = _DAT_142e36f28;
      uVar19 = (uint)fStack_290 & 0xffff;
      lVar20 = CONCAT44(fStack_284,fStack_288);
      plStack_108 = (longlong *)*param_3;
      plStack_100 = (longlong *)param_3[1];
      uStack_190 = *param_4;
      pauVar27 = uStack_2a0;
      ppppuVar32 = ppppuStack_2a8;
      while (bVar33 = lVar20 != 0, lVar20 = lVar20 + -1, bVar33) {
        if ((short)uVar19 == 0) {
          do {
            auVar2 = *pauVar27;
            ppppuVar32 = ppppuVar32 + -0x560;
            pauVar27 = pauVar27 + 1;
            uVar19 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar19 == 0);
        }
        uVar9 = 0;
        for (uVar35 = uVar19; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        pppuVar7 = ppppuVar32[(ulonglong)uVar9 * -0x56 + -0x56];
        lVar31 = pdb_140b54f80(uVar6,pppuVar7,&UNK_14342edc0);
        if (lVar31 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14342edd8);
        }
        pdb_14092f8d0(&iStack_1ec,lVar31);
        uVar35 = uStack_1e4;
        uVar9 = uStack_1e8;
        if (iStack_1ec == 1) {
          uVar25 = pdb_140b54b40(uVar6,pppuVar7);
          if (((((uVar25 & 0xffffffff) != 0) &&
               (uVar21 = uVar25 & 0xffffffff ^ 0xffffffff, uVar21 < (ulonglong)plStack_100[2])) &&
              (piVar24 = (int *)(uVar21 * 0x18 + plStack_100[1]),
              piVar24[4] == (int)(uVar25 >> 0x20))) &&
             (((*piVar24 != 0 &&
               (uVar25 = *(ulonglong *)(piVar24 + 2),
               (uVar25 & 0xffffffff) < (ulonglong)plStack_108[7])) &&
              ((*(ulonglong *)(plStack_108[5] + (uVar25 >> 6 & 0x3ffffff) * 8) >> (uVar25 & 0x3f) &
               1) != 0)))) {
            if ((ulonglong)plStack_108[0x22] <
                *(ulonglong *)(plStack_100[0x34] + 0x40 + (uVar25 >> 0x20) * 0x48)) {
              lVar31 = plStack_100[0x34] + (uVar25 >> 0x20) * 0x48;
              uVar25 = *(ulonglong *)(*(longlong *)(lVar31 + 0x38) + plStack_108[0x22] * 8);
              if (uVar25 == 0) goto LAB_141f414da;
              lVar31 = *(longlong *)(*(longlong *)(lVar31 + 0x18) + 0x10 + ~uVar25 * 0x30);
            }
            else {
LAB_141f414da:
              lVar31 = 0;
            }
            pppuStack_110 = (undefined8 ***)((ulonglong)(uint)~piVar24[1] * 0x58 + lVar31);
            cVar17 = pdb_140b77990();
            if (cVar17 != '\0') {
              uStack_198 = pdb_140ac6110(pppuStack_110);
              pdb_140ac5730(&iStack_184,&uStack_198,pppuStack_110);
              if (iStack_184 == 1) {
                uVar36 = uVar9;
                if (*(char *)((longlong)pppuStack_110 + 0x3c) != '\0') {
                  uVar36 = uVar35 ^ uVar18;
                  uVar35 = uVar9;
                }
                fVar37 = (fStack_174 + fStack_180) * fVar13;
                fVar38 = (fStack_170 + fStack_17c) * fVar14;
                fVar39 = (fStack_16c + fStack_178) * fVar15;
                fVar34 = SQRT((fStack_178 - fStack_16c) * (fStack_178 - fStack_16c) +
                              (fStack_17c - fStack_170) * (fStack_17c - fStack_170) +
                              (fStack_180 - fStack_174) * (fStack_180 - fStack_174));
                if (fVar12 <= fVar34) {
                  fVar34 = fVar12;
                }
                auStack_128[0] = uVar36;
                pdb_140df4520(&pppuStack_168,auStack_128);
                pdb_140de9ab0(&pppuStack_148,&pppuStack_168);
                ppuStack_298 = (undefined8 **)CONCAT44(fVar38,fVar37);
                ppppuStack_2a8 = (undefined8 ****)pppuStack_148;
                uStack_2a0 = pauStack_140;
                fStack_28c = 1.0;
                fStack_288 = 1.0;
                fStack_284 = 1.0;
                fStack_290 = fVar39;
                pdb_140b3d590(&pauStack_1d0,fVar10,fVar10,CONCAT44(unaff_XMM7_Db,fVar34),
                              &ppppuStack_2a8);
                pppuStack_148 = pppuStack_110;
                pauStack_140 = (undefined1 (*) [16])pdb_141f43a10;
                uStack_f1 = 1;
                pdb_140f60760(&ppppuStack_2a8,&UNK_14342edf0,&pppuStack_148);
                pppuStack_168 = ppppuStack_2a8;
                pauStack_160 = uStack_2a0;
                uStack_158 = ppuStack_298;
                uStack_130 = uStack_1c0;
                pauStack_140 = pauStack_1d0;
                uStack_138 = uStack_1c8;
                pppuStack_148 = (undefined8 ***)CONCAT71(pppuStack_148._1_7_,2);
                auStack_2b8[0] = 0;
                uStack_f2 = 1;
                pdb_140c9dcb0(&ppppuStack_2a8,&pppuStack_148,auStack_2b8);
                uStack_f2 = 0;
                ppppuVar26 = &pppuStack_168;
                uStack_1a8 = pdb_142807c30(uStack_190,ppppuVar26,&ppppuStack_2a8);
                uStack_f1 = 0;
                ppppuStack_1a0 = ppppuVar26;
                cVar17 = pdb_1408ffaf0(&uStack_1a8);
                if (cVar17 != '\0') {
                  uStack_f1 = 0;
                  ppppuStack_2a8 = (undefined8 ****)pdb_14072cd40(&uStack_1a8);
                  uStack_2a0 = (undefined1 (*) [16])CONCAT44(uVar35,uVar36);
                  uStack_f1 = 0;
                  ppuStack_298 = pppuVar7;
                  fStack_290 = fVar37;
                  fStack_28c = fVar38;
                  fStack_288 = fVar39;
                  fStack_284 = (fVar11 + fVar10) * fVar16;
                  pdb_142807f70(param_5,&ppppuStack_2a8,&UNK_14342ee08);
                  if (lStack_120 == 0) {
                    return;
                  }
                  pppuStack_148 = &ppuStack_118;
                  ppppuStack_2a8 = &pppuStack_148;
                  pdb_142807ee0(&UNK_14342f060,&ppppuStack_2a8);
                  return;
                }
              }
            }
          }
        }
        uVar19 = uVar19 - 1 & uVar19;
      }
      if (lStack_120 == 0) {
        return;
      }
    }
    else {
LAB_141f4123a:
      if (!bVar33) {
        return;
      }
    }
    plVar22 = (longlong *)pdb_140e97000();
    if ((char)plVar22[0xd] != '\x01') goto LAB_141f41803;
    do {
      if (*plVar22 == 0) {
        *plVar22 = -1;
        plStack_100 = plVar22;
        pdb_140e95370(plVar22 + 1,ppuStack_118);
        *plStack_100 = *plStack_100 + 1;
        return;
      }
LAB_141f417f7:
      plVar22 = (longlong *)pdb_142dc8090(&UNK_14359bf70);
LAB_141f41803:
      plVar22 = (longlong *)pdb_142e293d0(plVar22,0);
    } while (plVar22 != (longlong *)0x0);
LAB_141f4182b:
    pdb_142dc7890(&UNK_14359bf00);
LAB_141f41837:
    pdb_142dc8070(&UNK_14342ed8a,0x31);
  }
  else {
    puVar29 = &UNK_14342efdb;
    lVar31 = 0x3b;
    uVar25 = 0x3b;
    lVar20 = pdb_141f435f0(&UNK_14342efdb);
    if (lVar20 != 1) {
LAB_141f410c5:
      puVar28 = &UNK_14342edbb;
      puVar30 = &UNK_14342ed8a;
      do {
        bVar3 = puVar28[-1];
        uVar18 = (uint)(char)bVar3;
        plStack_100 = param_4;
        if ((char)bVar3 < '\0') {
          bVar4 = puVar28[-2];
          if ((char)bVar4 < -0x40) {
            bVar5 = puVar28[-3];
            if ((char)bVar5 < -0x40) {
              pbVar1 = puVar28 + -4;
              puVar28 = puVar28 + -4;
              uVar18 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar28 = puVar28 + -3;
              uVar18 = bVar5 & 0xf;
            }
            uVar18 = bVar4 & 0x3f | uVar18 << 6;
          }
          else {
            puVar28 = puVar28 + -2;
            uVar18 = bVar4 & 0x1f;
          }
          uVar18 = (uint)(bVar3 & 0x3f) | uVar18 << 6;
          if (uVar18 != 0x5c) goto LAB_141f41154;
LAB_141f41185:
          if ((undefined *)0x31 < puVar28 + -0x14342ed89) goto LAB_141f41837;
          lVar20 = 0x31 - (longlong)(puVar28 + -0x14342ed89);
          puVar30 = puVar28 + 1;
          goto LAB_141f411ad;
        }
        puVar28 = puVar28 + -1;
        if (uVar18 == 0x5c) goto LAB_141f41185;
LAB_141f41154:
        if (uVar18 == 0x2f) goto LAB_141f41185;
      } while (puVar28 != &UNK_14342ed8a);
      lVar20 = 0x31;
LAB_141f411ad:
      plVar22 = (longlong *)pdb_140e97000();
      if (((char)plVar22[0xd] == '\x01') ||
         (plVar22 = (longlong *)pdb_142e293d0(plVar22,0), plVar22 != (longlong *)0x0)) {
        if (*plVar22 != 0) goto LAB_141f417f7;
        *plVar22 = -1;
        plStack_108 = plVar22;
        ppuStack_118 = (undefined8 **)pdb_140e94f10(plVar22 + 1,puVar29,lVar31,puVar30,lVar20,1,0);
        *plStack_108 = *plStack_108 + 1;
        bVar33 = true;
        lStack_120 = 1;
        pcVar23 = (char *)*param_1;
        param_4 = plStack_100;
        if (*pcVar23 == '\0') goto LAB_141f41230;
        goto LAB_141f4123a;
      }
      goto LAB_141f4182b;
    }
    if (uVar25 < 0x3c) {
      puVar29 = &UNK_14342efdb;
      uVar21 = pdb_141f435f0(&UNK_14342efdb);
      if ((uVar21 & 1) != 0) {
        if (0x3b < uVar25 + 2) goto LAB_141f4187a;
        lVar31 = 0x39 - uVar25;
        puVar29 = &UNK_14342efdd + uVar25;
      }
      goto LAB_141f410c5;
    }
  }
  pdb_142dc8070(&UNK_14342efdb,0x3b,0);
LAB_141f4187a:
  pdb_142dc8070(&UNK_14342efdb,0x3b);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

