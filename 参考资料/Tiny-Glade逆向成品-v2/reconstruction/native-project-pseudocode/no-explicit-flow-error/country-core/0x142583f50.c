// VA 0x142583f50, PDB extent 4593 bytes
// country_core::render::nani::systems::nani_update_solid_vertex_color_window_glass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::systems::nani_update_solid_vertex_color_window_glass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 4593 */

longlong * pdb_142583f50(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  char cVar31;
  char cVar32;
  uint uVar33;
  float fVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong *plVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  longlong *plVar41;
  ulonglong *puVar42;
  uint uVar43;
  undefined *puVar44;
  longlong lVar45;
  ushort uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [8];
  undefined *puVar49;
  float *pfVar50;
  longlong lVar51;
  bool bVar52;
  byte bVar53;
  float fVar54;
  float fVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  undefined8 in_stack_fffffffffffffd28;
  undefined4 uVar71;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  longlong lStack_248;
  longlong lStack_238;
  byte bStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  byte bStack_200;
  uint uStack_1f8;
  uint uStack_1f4;
  byte bStack_1f0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  ulonglong *puStack_1c8;
  undefined8 uStack_1c0;
  uint *puStack_1b8;
  longlong *plStack_1b0;
  longlong *plStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  uint *puStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  uint uStack_14c;
  longlong *plStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined1 uStack_129;
  longlong *plStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  byte bStack_f9;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  
  uVar71 = (undefined4)((ulonglong)in_stack_fffffffffffffd28 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  plVar41 = param_2;
  cVar31 = pdb_140e94b40();
  if (cVar31 == '\0') {
    lStack_190 = 0;
  }
  else {
    plVar41 = (longlong *)&UNK_14351c5b9;
    lVar51 = 0x50;
    uVar39 = 0x50;
    lVar35 = pdb_142585200(&UNK_14351c5b9);
    if (lVar35 == 1) {
      if (0x50 < uVar39) {
LAB_142584d62:
        pdb_142dc8070(&UNK_14351c5b9,0x50,0);
LAB_142584d82:
        pdb_142dc8070(&UNK_14351c5b9,0x50);
        pcVar7 = (code *)swi(3);
        plVar41 = (longlong *)(*pcVar7)();
        return plVar41;
      }
      plVar41 = (longlong *)&UNK_14351c5b9;
      uVar36 = pdb_142585200(&UNK_14351c5b9);
      if ((uVar36 & 1) != 0) {
        if (0x50 < uVar39 + 2) goto LAB_142584d82;
        lVar51 = 0x4e - uVar39;
        plVar41 = (longlong *)(&UNK_14351c5bb + uVar39);
      }
    }
    puVar44 = &UNK_14351bdcd;
    puVar49 = &UNK_14351bd9f;
    do {
      bVar53 = puVar44[-1];
      uVar33 = (uint)(char)bVar53;
      plStack_128 = param_3;
      if ((char)bVar53 < '\0') {
        bVar5 = puVar44[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar44[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar44 + -4;
            puVar44 = puVar44 + -4;
            uVar33 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar44 = puVar44 + -3;
            uVar33 = bVar6 & 0xf;
          }
          uVar33 = bVar5 & 0x3f | uVar33 << 6;
        }
        else {
          puVar44 = puVar44 + -2;
          uVar33 = bVar5 & 0x1f;
        }
        uVar33 = (uint)(bVar53 & 0x3f) | uVar33 << 6;
        if (uVar33 != 0x5c) goto LAB_1425840d4;
LAB_1425840ec:
        puVar49 = puVar44 + -0x14351bd9e;
        if (puVar49 < (undefined *)0x2f) {
          lVar35 = 0x2e - (longlong)puVar49;
          puVar49 = puVar44 + 1;
          goto LAB_14258410e;
        }
        pdb_142dc8070(&UNK_14351bd9f,0x2e,puVar49,0x2e,&UNK_14351c9b8);
        goto LAB_142584d62;
      }
      puVar44 = puVar44 + -1;
      if (uVar33 == 0x5c) goto LAB_1425840ec;
LAB_1425840d4:
      if (uVar33 == 0x2f) goto LAB_1425840ec;
    } while (puVar44 != &UNK_14351bd9f);
    lVar35 = 0x2e;
LAB_14258410e:
    plVar37 = (longlong *)pdb_140e97000();
    if (((char)plVar37[0xd] != '\x01') &&
       (plVar37 = (longlong *)pdb_142d8ec20(plVar37,0), plVar37 == (longlong *)0x0))
    goto LAB_142584d04;
    if (*plVar37 != 0) goto LAB_142584cbf;
    *plVar37 = -1;
    plStack_148 = plVar37;
    uStack_188 = pdb_140e94f10(plVar37 + 1,plVar41,lVar51,puVar49,lVar35,1,0);
    uVar71 = (undefined4)((ulonglong)lVar35 >> 0x20);
    *plStack_148 = *plStack_148 + 1;
    lStack_190 = 1;
    param_3 = plStack_128;
  }
  uVar40 = CONCAT71((int7)((ulonglong)plVar41 >> 8),3);
  plStack_128 = (longlong *)pdb_1409d2d80(*param_4);
  lStack_158 = *param_1;
  lStack_180 = param_1[1];
  uStack_1c0 = uVar40;
  pdb_1415238e0(auStack_268,lStack_180,lStack_158,(int)param_1[2],
                CONCAT44(uVar71,*(undefined4 *)((longlong)param_1 + 0x14)));
  uVar30 = _UNK_142e377e4;
  uVar33 = _DAT_142e377e0;
  fVar29 = _DAT_142e36f28;
  lStack_160 = lStack_248;
  lStack_140 = lStack_238;
  uStack_f8 = (uint)bStack_230;
  lStack_120 = lStack_228;
  lStack_118 = lStack_220;
  lStack_110 = lStack_218;
  lStack_108 = lStack_210;
  lStack_138 = lStack_208;
  uStack_f4 = (uint)bStack_200;
  plStack_1b0 = (longlong *)*param_2;
  plStack_148 = (longlong *)*param_3;
  uVar39 = (ulonglong)uStack_1f8;
  plStack_1a8 = plStack_1b0 + 4;
  bStack_f9 = bStack_1f0;
  puStack_1b8 = uStack_260;
  auVar48 = auStack_268;
  if ((bStack_1f0 & 1) != 0) goto LAB_142584560;
LAB_142584296:
  if (uStack_1f4 != (uint)uVar39) goto LAB_142584540;
  do {
    if (auVar48 == (undefined1  [8])puStack_1b8) goto LAB_142584bda;
    uVar43 = *(uint *)auVar48;
    auVar48 = (undefined1  [8])((longlong)auVar48 + 4);
    uVar39 = *(ulonglong *)(*(longlong *)(lStack_180 + 0x100) + 0x58 + (ulonglong)uVar43 * 0xa0);
  } while (uVar39 == 0);
  lVar51 = *(longlong *)(lStack_180 + 0x100) + (ulonglong)uVar43 * 0xa0;
  lVar35 = *(longlong *)(lStack_180 + 0x1a0) + (ulonglong)*(uint *)(lVar51 + 0x94) * 0x48;
  uVar36 = *(ulonglong *)
            (*(longlong *)(lStack_180 + 0x1a0) + 0x40 + (ulonglong)*(uint *)(lVar51 + 0x94) * 0x48);
  if ((*(ulonglong *)(lStack_158 + 0x110) < uVar36) &&
     (uVar38 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + *(ulonglong *)(lStack_158 + 0x110) * 8)
     , uVar38 != 0)) {
    lStack_120 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
    uVar38 = *(ulonglong *)(lStack_158 + 0x118);
    if (uVar36 <= uVar38) goto LAB_14258438d;
LAB_142584357:
    uVar38 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar38 * 8);
    if (uVar38 == 0) goto LAB_14258438d;
    lStack_118 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
    uVar38 = *(ulonglong *)(lStack_158 + 0x120);
    if (uVar38 < uVar36) goto LAB_1425843a4;
LAB_1425843da:
    lStack_110 = 0;
    uVar38 = *(ulonglong *)(lStack_158 + 0x128);
    if (uVar36 <= uVar38) goto LAB_14258442e;
LAB_1425843f1:
    uVar38 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar38 * 8);
    if (uVar38 == 0) goto LAB_14258442e;
    lStack_108 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
    uVar47 = *(ulonglong *)(lStack_158 + 0x130);
    uVar38 = *(ulonglong *)(lVar51 + 0x88);
    if (uVar47 < uVar38) goto LAB_14258444c;
LAB_1425844a2:
    uStack_f8 = 0;
    uVar47 = *(ulonglong *)(lStack_158 + 0x138);
    if (uVar38 <= uVar47) goto LAB_14258451e;
LAB_1425844d7:
    if (*(longlong *)(*(longlong *)(lVar51 + 0x80) + uVar47 * 8) == 0) goto LAB_14258451e;
    uStack_f4 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar51 + 0x80) >> 8),1);
    if ((uVar47 < uVar36) &&
       (uVar36 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar47 * 8), uVar36 != 0)) {
      lStack_138 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar36 * 0x30);
    }
    else {
      lStack_138 = 0;
    }
  }
  else {
    lStack_120 = 0;
    uVar38 = *(ulonglong *)(lStack_158 + 0x118);
    if (uVar38 < uVar36) goto LAB_142584357;
LAB_14258438d:
    lStack_118 = 0;
    uVar38 = *(ulonglong *)(lStack_158 + 0x120);
    if (uVar36 <= uVar38) goto LAB_1425843da;
LAB_1425843a4:
    uVar38 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar38 * 8);
    if (uVar38 == 0) goto LAB_1425843da;
    lStack_110 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
    uVar38 = *(ulonglong *)(lStack_158 + 0x128);
    if (uVar38 < uVar36) goto LAB_1425843f1;
LAB_14258442e:
    lStack_108 = 0;
    uVar47 = *(ulonglong *)(lStack_158 + 0x130);
    uVar38 = *(ulonglong *)(lVar51 + 0x88);
    if (uVar38 <= uVar47) goto LAB_1425844a2;
LAB_14258444c:
    if (*(longlong *)(*(longlong *)(lVar51 + 0x80) + uVar47 * 8) == 0) goto LAB_1425844a2;
    uStack_f8 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar51 + 0x80) >> 8),1);
    if ((uVar47 < uVar36) &&
       (uVar47 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar47 * 8), uVar47 != 0)) {
      lStack_140 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar47 * 0x30);
      uVar47 = *(ulonglong *)(lStack_158 + 0x138);
      if (uVar38 <= uVar47) goto LAB_14258451e;
      goto LAB_1425844d7;
    }
    lStack_140 = 0;
    uVar47 = *(ulonglong *)(lStack_158 + 0x138);
    if (uVar47 < uVar38) goto LAB_1425844d7;
LAB_14258451e:
    uStack_f4 = 0;
  }
  uStack_1f4 = 0;
  lStack_160 = *(longlong *)(lVar51 + 0x50);
LAB_142584540:
  uVar43 = ~*(uint *)(lStack_160 + 8 + (ulonglong)uStack_1f4 * 0x10);
  uVar8 = uStack_1f4;
LAB_142584785:
  do {
    uStack_14c = uVar8;
    plVar41 = plStack_1b0;
    uVar36 = (ulonglong)uVar43;
    lStack_170 = lStack_120 + uVar36 * 0xc;
    pfVar50 = (float *)(uVar36 * 0x30 + lStack_118);
    puStack_178 = (uint *)(lStack_108 + uVar36 * 4);
    plVar37 = (longlong *)(uVar36 * 0x10 + lStack_110);
    lStack_168 = 0;
    if ((uStack_f8 & 1) != 0) {
      lStack_168 = lStack_140;
    }
    puVar42 = (ulonglong *)(lStack_138 + uVar36 * 8);
    if ((uStack_f4 & 1) == 0) {
      puVar42 = (ulonglong *)0x0;
    }
    fVar66 = 0.0;
    if (plStack_1b0[3] != 0) {
      uVar38 = pdb_1400af0a0(plStack_1a8,plVar37);
      lVar35 = *plVar41;
      uVar36 = plVar41[1];
      bVar53 = (byte)(uVar38 >> 0x39);
      auVar55 = ZEXT216(CONCAT11(bVar53,bVar53));
      auVar55 = pshuflw(auVar55,auVar55,0);
      lVar51 = 0;
      while( true ) {
        uVar38 = uVar38 & uVar36;
        auVar56 = *(undefined1 (*) [16])(lVar35 + uVar38);
        auVar59[0] = -(auVar56[0] == auVar55[0]);
        auVar59[1] = -(auVar56[1] == auVar55[1]);
        auVar59[2] = -(auVar56[2] == auVar55[2]);
        auVar59[3] = -(auVar56[3] == auVar55[3]);
        auVar59[4] = -(auVar56[4] == auVar55[4]);
        auVar59[5] = -(auVar56[5] == auVar55[5]);
        auVar59[6] = -(auVar56[6] == auVar55[6]);
        auVar59[7] = -(auVar56[7] == auVar55[7]);
        auVar59[8] = -(auVar56[8] == auVar55[0]);
        auVar59[9] = -(auVar56[9] == auVar55[1]);
        auVar59[10] = -(auVar56[10] == auVar55[2]);
        auVar59[0xb] = -(auVar56[0xb] == auVar55[3]);
        auVar59[0xc] = -(auVar56[0xc] == auVar55[4]);
        auVar59[0xd] = -(auVar56[0xd] == auVar55[5]);
        auVar59[0xe] = -(auVar56[0xe] == auVar55[6]);
        auVar59[0xf] = -(auVar56[0xf] == auVar55[7]);
        uVar46 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf
        ;
        uVar43 = (uint)uVar46;
        if (uVar46 != 0) {
          do {
            uVar8 = 0;
            for (uVar9 = uVar43; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar47 = uVar8 + uVar38 & uVar36;
            if (*plVar37 == *(longlong *)(lVar35 + -0x18 + uVar47 * -0x18)) {
              fVar66 = *(float *)(lVar35 + uVar47 * -0x18 + -0x10);
              goto joined_r0x0001425849d1;
            }
            uVar46 = (ushort)(uVar43 - 1) & (ushort)uVar43;
            uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar46);
          } while (uVar46 != 0);
        }
        auVar58[0] = -(auVar56[0] == -1);
        auVar58[1] = -(auVar56[1] == -1);
        auVar58[2] = -(auVar56[2] == -1);
        auVar58[3] = -(auVar56[3] == -1);
        auVar58[4] = -(auVar56[4] == -1);
        auVar58[5] = -(auVar56[5] == -1);
        auVar58[6] = -(auVar56[6] == -1);
        auVar58[7] = -(auVar56[7] == -1);
        auVar58[8] = -(auVar56[8] == -1);
        auVar58[9] = -(auVar56[9] == -1);
        auVar58[10] = -(auVar56[10] == -1);
        auVar58[0xb] = -(auVar56[0xb] == -1);
        auVar58[0xc] = -(auVar56[0xc] == -1);
        auVar58[0xd] = -(auVar56[0xd] == -1);
        auVar58[0xe] = -(auVar56[0xe] == -1);
        auVar58[0xf] = -(auVar56[0xf] == -1);
        if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x1f,0) & 1) != 0) || (SUB161(auVar58 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
        uVar38 = uVar38 + lVar51 + 0x10;
        lVar51 = lVar51 + 0x10;
      }
    }
joined_r0x0001425849d1:
    puStack_1c8 = puVar42;
    if (puVar42 != (ulonglong *)0x0) {
      uVar36 = *puVar42;
      uStack_288 = uVar36;
      lVar35 = lStack_198;
      if (plStack_148[0xc] != 0) {
        lVar51 = plStack_148[9];
        uVar38 = plStack_148[10];
        bVar53 = (byte)(uVar36 >> 0x39);
        auVar55 = ZEXT216(CONCAT11(bVar53,bVar53));
        auVar55 = pshuflw(auVar55,auVar55,0);
        lVar45 = 0;
        while( true ) {
          uVar36 = uVar36 & uVar38;
          pcVar2 = (char *)(lVar51 + uVar36);
          cVar31 = *pcVar2;
          cVar10 = pcVar2[1];
          cVar11 = pcVar2[2];
          cVar12 = pcVar2[3];
          cVar13 = pcVar2[4];
          cVar14 = pcVar2[5];
          cVar15 = pcVar2[6];
          cVar16 = pcVar2[7];
          cVar17 = pcVar2[8];
          cVar18 = pcVar2[9];
          cVar19 = pcVar2[10];
          cVar20 = pcVar2[0xb];
          cVar21 = pcVar2[0xc];
          cVar22 = pcVar2[0xd];
          cVar23 = pcVar2[0xe];
          cVar24 = pcVar2[0xf];
          auVar56[0] = -(cVar31 == auVar55[0]);
          auVar56[1] = -(cVar10 == auVar55[1]);
          auVar56[2] = -(cVar11 == auVar55[2]);
          auVar56[3] = -(cVar12 == auVar55[3]);
          auVar56[4] = -(cVar13 == auVar55[4]);
          auVar56[5] = -(cVar14 == auVar55[5]);
          auVar56[6] = -(cVar15 == auVar55[6]);
          auVar56[7] = -(cVar16 == auVar55[7]);
          auVar56[8] = -(cVar17 == auVar55[0]);
          auVar56[9] = -(cVar18 == auVar55[1]);
          auVar56[10] = -(cVar19 == auVar55[2]);
          auVar56[0xb] = -(cVar20 == auVar55[3]);
          auVar56[0xc] = -(cVar21 == auVar55[4]);
          auVar56[0xd] = -(cVar22 == auVar55[5]);
          auVar56[0xe] = -(cVar23 == auVar55[6]);
          auVar56[0xf] = -(cVar24 == auVar55[7]);
          uVar46 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
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
                   (ushort)(auVar56[0xf] >> 7) << 0xf;
          uVar43 = (uint)uVar46;
          lVar35 = lStack_198;
          while (lStack_198 = lVar45, uVar46 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar43; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar47 = uVar8 + uVar36 & uVar38;
            uStack_1a0 = uVar38;
            cVar32 = pdb_140df4430(&uStack_288,lVar51 + uVar47 * -0x18 + -0x18);
            if (cVar32 != '\0') {
              fVar34 = (float)pdb_140a2ec70(plStack_148,
                                            *(undefined8 *)(lVar51 + uVar47 * -0x18 + -0x10));
              goto LAB_1425849da;
            }
            uVar46 = (ushort)(uVar43 - 1) & (ushort)uVar43;
            uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar46);
            uVar38 = uStack_1a0;
            lVar45 = lStack_198;
            lVar35 = lStack_198;
          }
          auVar68[0] = -(cVar31 == -1);
          auVar68[1] = -(cVar10 == -1);
          auVar68[2] = -(cVar11 == -1);
          auVar68[3] = -(cVar12 == -1);
          auVar68[4] = -(cVar13 == -1);
          auVar68[5] = -(cVar14 == -1);
          auVar68[6] = -(cVar15 == -1);
          auVar68[7] = -(cVar16 == -1);
          auVar68[8] = -(cVar17 == -1);
          auVar68[9] = -(cVar18 == -1);
          auVar68[10] = -(cVar19 == -1);
          auVar68[0xb] = -(cVar20 == -1);
          auVar68[0xc] = -(cVar21 == -1);
          auVar68[0xd] = -(cVar22 == -1);
          auVar68[0xe] = -(cVar23 == -1);
          auVar68[0xf] = -(cVar24 == -1);
          if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 || (SUB161(auVar68 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar68 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar68 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar68 >> 0x2f,0) & 1) != 0) || (SUB161(auVar68 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar68 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar68 >> 0x47,0) & 1) != 0) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar68 >> 0x57,0) & 1) != 0) || (SUB161(auVar68 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar68 >> 0x77,0) & 1) != 0) || auVar68[0xf] < '\0') break;
          uVar36 = uVar36 + lStack_198 + 0x10;
          lVar45 = lStack_198 + 0x10;
          lStack_198 = lVar35;
        }
      }
      lStack_198 = lVar35;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14351c200);
    }
    fVar34 = 0.0;
LAB_1425849da:
    fStack_1d0 = pfVar50[6];
    uStack_1d8 = *(undefined8 *)(pfVar50 + 4);
    fVar65 = pfVar50[7];
    fVar67 = pfVar50[8];
    fVar28 = pfVar50[9];
    fVar25 = *pfVar50;
    fVar26 = pfVar50[1];
    fVar27 = pfVar50[3];
    fStack_258 = pfVar50[4];
    fStack_254 = pfVar50[5];
    fStack_250 = pfVar50[6];
    fVar3 = pfVar50[2];
    fVar70 = fVar3 + fVar3;
    fVar60 = fVar26 + fVar26;
    fVar64 = fVar25 * (fVar25 + fVar25);
    fVar61 = (fVar25 + fVar25) * fVar27;
    fVar69 = fVar70 * fVar25 - fVar60 * fVar27;
    fVar62 = fVar61 + fVar70 * fVar26;
    fVar63 = fVar29 - (fVar64 + fVar26 * fVar60);
    fVar4 = pfVar50[7];
    fVar54 = (float)*(undefined8 *)(pfVar50 + 8);
    fVar57 = (float)((ulonglong)*(undefined8 *)(pfVar50 + 8) >> 0x20);
    uStack_288 = CONCAT44(fVar4 * (fVar60 * fVar25 + fVar27 * fVar70),
                          fVar4 * (fVar29 - (fVar26 * fVar60 + fVar3 * fVar70)));
    uStack_280 = CONCAT44(fVar4 * fVar69,fVar4 * fVar69);
    auStack_278._4_4_ = fVar54 * (fVar29 - (fVar3 * fVar70 + fVar64));
    auStack_278._0_4_ = fVar54 * (fVar60 * fVar25 - fVar27 * fVar70);
    fStack_270 = fVar54 * fVar62;
    fStack_26c = fVar54 * fVar62;
    auStack_268._4_4_ = fVar57 * (fVar70 * fVar26 - fVar61);
    auStack_268._0_4_ = fVar57 * (fVar60 * fVar27 + fVar70 * fVar25);
    uStack_260._0_4_ = fVar57 * fVar63;
    uStack_260._4_4_ = fVar57 * fVar63;
    fStack_24c = fStack_250;
    pdb_140e07fe0(&uStack_2b8,&uStack_288);
    if ((int)*puStack_178 < 0) goto LAB_142584d11;
    fVar65 = (float)((uint)fVar65 & uVar33);
    fVar67 = (float)((uint)fVar67 & uVar33);
    if (fVar67 <= (float)((uint)fVar28 & uVar30)) {
      fVar67 = (float)((uint)fVar28 & uVar30);
    }
    if (fVar65 <= fVar67) {
      fVar65 = fVar67;
    }
    fStack_258 = (float)(*puStack_178 | (uint)(lStack_168 != 0) << 0x1f);
    _auStack_268 = auStack_298;
    _auStack_278 = auStack_2a8;
    uStack_288 = uStack_2b8;
    uStack_280 = uStack_2b0;
    fStack_250 = (float)(uint)(puStack_1c8 != (ulonglong *)0x0);
    fStack_254 = fVar66;
    fStack_24c = fVar34;
    pdb_1409519b0(uStack_1c0,lStack_170,&uStack_1d8,fVar65,&uStack_288,&UNK_14351c218);
    uStack_1f4 = uStack_14c + 1;
    if ((bStack_f9 & 1) == 0) goto LAB_142584296;
LAB_142584560:
    uVar43 = uStack_1f4;
    uVar8 = uStack_1f4;
    if (uStack_1f4 == (uint)uVar39) {
      do {
        if (auVar48 == (undefined1  [8])puStack_1b8) goto LAB_142584bda;
        uVar43 = *(uint *)auVar48;
        auVar48 = (undefined1  [8])((longlong)auVar48 + 4);
        uVar39 = *(ulonglong *)(*(longlong *)(lStack_180 + 0x1a0) + 0x10 + (ulonglong)uVar43 * 0x48)
        ;
      } while (uVar39 == 0);
      lVar35 = *(longlong *)(lStack_180 + 0x1a0) + (ulonglong)uVar43 * 0x48;
      uVar36 = *(ulonglong *)(lVar35 + 0x40);
      if ((*(ulonglong *)(lStack_158 + 0x110) < uVar36) &&
         (uVar38 = *(ulonglong *)
                    (*(longlong *)(lVar35 + 0x38) + *(ulonglong *)(lStack_158 + 0x110) * 8),
         uVar38 != 0)) {
        lStack_120 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
        uVar38 = *(ulonglong *)(lStack_158 + 0x118);
        if (uVar36 <= uVar38) goto LAB_142584634;
LAB_1425845fe:
        uVar38 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar38 * 8);
        if (uVar38 == 0) goto LAB_142584634;
        lStack_118 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
        uVar38 = *(ulonglong *)(lStack_158 + 0x120);
        if (uVar38 < uVar36) goto LAB_14258464b;
LAB_142584681:
        lStack_110 = 0;
        uVar38 = *(ulonglong *)(lStack_158 + 0x128);
        if (uVar36 <= uVar38) goto LAB_1425846ce;
LAB_142584698:
        uVar38 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar38 * 8);
        if (uVar38 == 0) goto LAB_1425846ce;
        lStack_108 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
        uVar38 = *(ulonglong *)(lStack_158 + 0x130);
        if (uVar38 < uVar36) goto LAB_1425846e5;
LAB_142584726:
        uStack_f8 = 0;
        uVar38 = *(ulonglong *)(lStack_158 + 0x138);
      }
      else {
        lStack_120 = 0;
        uVar38 = *(ulonglong *)(lStack_158 + 0x118);
        if (uVar38 < uVar36) goto LAB_1425845fe;
LAB_142584634:
        lStack_118 = 0;
        uVar38 = *(ulonglong *)(lStack_158 + 0x120);
        if (uVar36 <= uVar38) goto LAB_142584681;
LAB_14258464b:
        uVar38 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar38 * 8);
        if (uVar38 == 0) goto LAB_142584681;
        lStack_110 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
        uVar38 = *(ulonglong *)(lStack_158 + 0x128);
        if (uVar38 < uVar36) goto LAB_142584698;
LAB_1425846ce:
        lStack_108 = 0;
        uVar38 = *(ulonglong *)(lStack_158 + 0x130);
        if (uVar36 <= uVar38) goto LAB_142584726;
LAB_1425846e5:
        uVar38 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar38 * 8);
        if (uVar38 == 0) goto LAB_142584726;
        lStack_140 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar38 * 0x30);
        uStack_f8 = (uint)CONCAT71((int7)((ulonglong)lStack_140 >> 8),1);
        uVar38 = *(ulonglong *)(lStack_158 + 0x138);
      }
      if (uVar38 < uVar36) {
        uVar43 = 0;
        uVar36 = *(ulonglong *)(*(longlong *)(lVar35 + 0x38) + uVar38 * 8);
        if (uVar36 != 0) {
          lStack_138 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar36 * 0x30);
          uStack_f4 = (uint)CONCAT71((int7)((ulonglong)lStack_138 >> 8),1);
          uVar8 = uVar43;
          goto LAB_142584785;
        }
      }
      uVar43 = 0;
      uStack_f4 = 0;
      uVar8 = uVar43;
    }
  } while( true );
LAB_142584bda:
  param_4 = plStack_128;
  pdb_140e9a350(plStack_128);
  pdb_140e9a350();
  LOCK();
  plVar41 = (longlong *)*param_4;
  bVar52 = plVar41 == (longlong *)0x8;
  if (bVar52) {
    *param_4 = 0;
    plVar41 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar52) goto LAB_142584ccc;
  while( true ) {
    if (lStack_190 == 0) {
      return plVar41;
    }
    plVar41 = (longlong *)pdb_140e97000();
    if (((char)plVar41[0xd] != '\x01') &&
       (plVar41 = (longlong *)pdb_142d8ec20(plVar41,0), plVar41 == (longlong *)0x0)) break;
    if (*plVar41 == 0) {
      *plVar41 = -1;
      plStack_128 = plVar41;
      pdb_140e95370(plVar41 + 1,uStack_188);
      *plStack_128 = *plStack_128 + 1;
      return plStack_128;
    }
LAB_142584cbf:
    pdb_142dc8090(&UNK_143326a50);
LAB_142584ccc:
    plVar41 = (longlong *)pdb_142dbca40(param_4);
  }
LAB_142584d04:
  pdb_142dc7890(&UNK_143326860);
LAB_142584d11:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14351bce8,0x37,&uStack_129,&UNK_14351c340,&UNK_14351bd58);
}

