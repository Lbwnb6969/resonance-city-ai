// VA 0x1414c9780, PDB extent 3535 bytes
// system_decorator::ui_systems::decorator_interaction_intent::snap_balcony_door
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/decorator_interaction_intent.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::decorator_interaction_intent::snap_balcony_door
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/decorator_interaction_intent.rs
   Extent: 3535 */

longlong *
pdb_1414c9780(longlong *param_1,undefined1 param_2,longlong *param_3,float *param_4,float param_5,
             float param_6,undefined8 param_7,undefined8 param_8,longlong param_9,longlong param_10,
             longlong *param_11,longlong *param_12,char param_13,undefined8 param_14,
             undefined8 param_15)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  char cVar11;
  char cVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  ushort uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  byte bVar26;
  char cVar30;
  float fVar27;
  char cVar29;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  undefined1 auVar28 [16];
  undefined1 in_XMM1_Ba;
  char cVar35;
  undefined1 uVar36;
  undefined1 in_XMM1_Bb;
  char cVar37;
  undefined1 uVar38;
  undefined1 in_XMM1_Bc;
  char cVar39;
  undefined1 uVar40;
  undefined1 in_XMM1_Bd;
  char cVar41;
  undefined1 uVar42;
  undefined1 in_XMM1_Be;
  char cVar43;
  undefined1 in_XMM1_Bf;
  char cVar44;
  undefined1 in_XMM1_Bg;
  char cVar45;
  undefined1 in_XMM1_Bh;
  char cVar46;
  undefined1 in_XMM1_Bi;
  char cVar47;
  undefined1 in_XMM1_Bj;
  char cVar48;
  undefined1 in_XMM1_Bk;
  char cVar49;
  undefined1 in_XMM1_Bl;
  char cVar50;
  undefined1 in_XMM1_Bm;
  char cVar51;
  undefined1 in_XMM1_Bn;
  char cVar52;
  undefined1 in_XMM1_Bo;
  char cVar53;
  undefined1 in_XMM1_Bp;
  char cVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  char *pcStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char cStack_130;
  char cStack_12f;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  longlong lStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  ulonglong uStack_100;
  undefined1 auStack_f8 [16];
  
  uVar36 = 3;
  if (*param_3 == 1) {
    uVar36 = *(undefined1 *)((longlong)param_3 + 0x59);
    cStack_12f = '\t';
    cStack_130 = pdb_140c44ba0(uVar36);
    if (param_12[3] != 0) {
      uVar13 = pdb_1413f0300(param_12 + 4,&cStack_130);
      lVar23 = *param_12;
      uVar15 = param_12[1];
      bVar26 = (byte)(uVar13 >> 0x39);
      auVar28 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar28 = pshuflw(auVar28,auVar28,0);
      cVar12 = auVar28[0];
      cVar11 = auVar28[1];
      cVar29 = auVar28[2];
      cVar30 = auVar28[3];
      cVar31 = auVar28[4];
      cVar32 = auVar28[5];
      cVar33 = auVar28[6];
      cVar34 = auVar28[7];
      if (cStack_130 == '\x1a') {
        lVar16 = 0;
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        == CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        );
        cVar35 = (char)iVar19;
        cVar37 = (char)((uint)iVar19 >> 8);
        cVar39 = (char)((uint)iVar19 >> 0x10);
        cVar41 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        == CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        );
        cVar43 = (char)iVar19;
        cVar44 = (char)((uint)iVar19 >> 8);
        cVar45 = (char)((uint)iVar19 >> 0x10);
        cVar46 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        == CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        );
        cVar47 = (char)iVar19;
        cVar48 = (char)((uint)iVar19 >> 8);
        cVar49 = (char)((uint)iVar19 >> 0x10);
        cVar50 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        == CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        );
        cVar51 = (char)iVar19;
        cVar52 = (char)((uint)iVar19 >> 8);
        cVar53 = (char)((uint)iVar19 >> 0x10);
        cVar54 = (char)((uint)iVar19 >> 0x18);
        while( true ) {
          uVar13 = uVar13 & uVar15;
          auVar28 = *(undefined1 (*) [16])(lVar23 + uVar13);
          auVar61[0] = -(auVar28[0] == cVar12);
          auVar61[1] = -(auVar28[1] == cVar11);
          auVar61[2] = -(auVar28[2] == cVar29);
          auVar61[3] = -(auVar28[3] == cVar30);
          auVar61[4] = -(auVar28[4] == cVar31);
          auVar61[5] = -(auVar28[5] == cVar32);
          auVar61[6] = -(auVar28[6] == cVar33);
          auVar61[7] = -(auVar28[7] == cVar34);
          auVar61[8] = -(auVar28[8] == cVar12);
          auVar61[9] = -(auVar28[9] == cVar11);
          auVar61[10] = -(auVar28[10] == cVar29);
          auVar61[0xb] = -(auVar28[0xb] == cVar30);
          auVar61[0xc] = -(auVar28[0xc] == cVar31);
          auVar61[0xd] = -(auVar28[0xd] == cVar32);
          auVar61[0xe] = -(auVar28[0xe] == cVar33);
          auVar61[0xf] = -(auVar28[0xf] == cVar34);
          uVar20 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
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
          uVar24 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar21 = uVar5 + uVar13 & uVar15;
            if (*(char *)(lVar23 + -0x48 + uVar21 * -0x48) == '\x1a') {
              lVar16 = uVar21 * -0x48 + lVar23;
              goto LAB_1414c9ae8;
            }
            uVar20 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar20);
          }
          auVar56[0] = -(auVar28[0] == cVar35);
          auVar56[1] = -(auVar28[1] == cVar37);
          auVar56[2] = -(auVar28[2] == cVar39);
          auVar56[3] = -(auVar28[3] == cVar41);
          auVar56[4] = -(auVar28[4] == cVar43);
          auVar56[5] = -(auVar28[5] == cVar44);
          auVar56[6] = -(auVar28[6] == cVar45);
          auVar56[7] = -(auVar28[7] == cVar46);
          auVar56[8] = -(auVar28[8] == cVar47);
          auVar56[9] = -(auVar28[9] == cVar48);
          auVar56[10] = -(auVar28[10] == cVar49);
          auVar56[0xb] = -(auVar28[0xb] == cVar50);
          auVar56[0xc] = -(auVar28[0xc] == cVar51);
          auVar56[0xd] = -(auVar28[0xd] == cVar52);
          auVar56[0xe] = -(auVar28[0xe] == cVar53);
          auVar56[0xf] = -(auVar28[0xf] == cVar54);
          if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar56 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar56 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar56 >> 0x2f,0) & 1) != 0) || (SUB161(auVar56 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') break;
          uVar13 = uVar13 + lVar16 + 0x10;
          lVar16 = lVar16 + 0x10;
        }
      }
      else {
        lVar22 = 0;
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        == CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        );
        cVar35 = (char)iVar19;
        cVar37 = (char)((uint)iVar19 >> 8);
        cVar39 = (char)((uint)iVar19 >> 0x10);
        cVar41 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        == CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        );
        cVar43 = (char)iVar19;
        cVar44 = (char)((uint)iVar19 >> 8);
        cVar45 = (char)((uint)iVar19 >> 0x10);
        cVar46 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        == CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        );
        cVar47 = (char)iVar19;
        cVar48 = (char)((uint)iVar19 >> 8);
        cVar49 = (char)((uint)iVar19 >> 0x10);
        cVar50 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        == CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        );
        cVar51 = (char)iVar19;
        cVar52 = (char)((uint)iVar19 >> 8);
        cVar53 = (char)((uint)iVar19 >> 0x10);
        cVar54 = (char)((uint)iVar19 >> 0x18);
        while( true ) {
          uVar13 = uVar13 & uVar15;
          auVar28 = *(undefined1 (*) [16])(lVar23 + uVar13);
          auVar63[0] = -(auVar28[0] == cVar12);
          auVar63[1] = -(auVar28[1] == cVar11);
          auVar63[2] = -(auVar28[2] == cVar29);
          auVar63[3] = -(auVar28[3] == cVar30);
          auVar63[4] = -(auVar28[4] == cVar31);
          auVar63[5] = -(auVar28[5] == cVar32);
          auVar63[6] = -(auVar28[6] == cVar33);
          auVar63[7] = -(auVar28[7] == cVar34);
          auVar63[8] = -(auVar28[8] == cVar12);
          auVar63[9] = -(auVar28[9] == cVar11);
          auVar63[10] = -(auVar28[10] == cVar29);
          auVar63[0xb] = -(auVar28[0xb] == cVar30);
          auVar63[0xc] = -(auVar28[0xc] == cVar31);
          auVar63[0xd] = -(auVar28[0xd] == cVar32);
          auVar63[0xe] = -(auVar28[0xe] == cVar33);
          auVar63[0xf] = -(auVar28[0xf] == cVar34);
          uVar20 = (ushort)(SUB161(auVar63 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar63[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar21 = uVar5 + uVar13 & uVar15;
            cVar4 = *(char *)(lVar23 + -0x48 + uVar21 * -0x48);
            if (((cVar4 != '\x1a') && (cStack_130 == cVar4)) &&
               (lVar16 = uVar21 * -0x48 + lVar23, cStack_12f == *(char *)(lVar16 + -0x47)))
            goto LAB_1414c9ae8;
            uVar20 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar20);
          }
          auVar58[0] = -(auVar28[0] == cVar35);
          auVar58[1] = -(auVar28[1] == cVar37);
          auVar58[2] = -(auVar28[2] == cVar39);
          auVar58[3] = -(auVar28[3] == cVar41);
          auVar58[4] = -(auVar28[4] == cVar43);
          auVar58[5] = -(auVar28[5] == cVar44);
          auVar58[6] = -(auVar28[6] == cVar45);
          auVar58[7] = -(auVar28[7] == cVar46);
          auVar58[8] = -(auVar28[8] == cVar47);
          auVar58[9] = -(auVar28[9] == cVar48);
          auVar58[10] = -(auVar28[10] == cVar49);
          auVar58[0xb] = -(auVar28[0xb] == cVar50);
          auVar58[0xc] = -(auVar28[0xc] == cVar51);
          auVar58[0xd] = -(auVar28[0xd] == cVar52);
          auVar58[0xe] = -(auVar28[0xe] == cVar53);
          auVar58[0xf] = -(auVar28[0xf] == cVar54);
          if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar58 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x2f,0) & 1) != 0) || (SUB161(auVar58 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
          uVar13 = uVar13 + lVar22 + 0x10;
          lVar22 = lVar22 + 0x10;
        }
      }
    }
  }
  else {
    if (*param_3 != 0) goto LAB_1414ca48d;
    uVar36 = *(undefined1 *)((longlong)param_3 + 0x59);
    cStack_12f = '\x04';
    cStack_130 = pdb_140c44ba0(uVar36);
    if (param_12[3] != 0) {
      uVar13 = pdb_1413f0300(param_12 + 4,&cStack_130);
      lVar23 = *param_12;
      uVar15 = param_12[1];
      bVar26 = (byte)(uVar13 >> 0x39);
      auVar28 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar28 = pshuflw(auVar28,auVar28,0);
      cVar12 = auVar28[0];
      cVar11 = auVar28[1];
      cVar29 = auVar28[2];
      cVar30 = auVar28[3];
      cVar31 = auVar28[4];
      cVar32 = auVar28[5];
      cVar33 = auVar28[6];
      cVar34 = auVar28[7];
      if (cStack_130 == '\x1a') {
        lVar16 = 0;
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        == CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        );
        cVar35 = (char)iVar19;
        cVar37 = (char)((uint)iVar19 >> 8);
        cVar39 = (char)((uint)iVar19 >> 0x10);
        cVar41 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        == CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        );
        cVar43 = (char)iVar19;
        cVar44 = (char)((uint)iVar19 >> 8);
        cVar45 = (char)((uint)iVar19 >> 0x10);
        cVar46 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        == CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        );
        cVar47 = (char)iVar19;
        cVar48 = (char)((uint)iVar19 >> 8);
        cVar49 = (char)((uint)iVar19 >> 0x10);
        cVar50 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        == CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        );
        cVar51 = (char)iVar19;
        cVar52 = (char)((uint)iVar19 >> 8);
        cVar53 = (char)((uint)iVar19 >> 0x10);
        cVar54 = (char)((uint)iVar19 >> 0x18);
        while( true ) {
          uVar13 = uVar13 & uVar15;
          auVar28 = *(undefined1 (*) [16])(lVar23 + uVar13);
          auVar60[0] = -(auVar28[0] == cVar12);
          auVar60[1] = -(auVar28[1] == cVar11);
          auVar60[2] = -(auVar28[2] == cVar29);
          auVar60[3] = -(auVar28[3] == cVar30);
          auVar60[4] = -(auVar28[4] == cVar31);
          auVar60[5] = -(auVar28[5] == cVar32);
          auVar60[6] = -(auVar28[6] == cVar33);
          auVar60[7] = -(auVar28[7] == cVar34);
          auVar60[8] = -(auVar28[8] == cVar12);
          auVar60[9] = -(auVar28[9] == cVar11);
          auVar60[10] = -(auVar28[10] == cVar29);
          auVar60[0xb] = -(auVar28[0xb] == cVar30);
          auVar60[0xc] = -(auVar28[0xc] == cVar31);
          auVar60[0xd] = -(auVar28[0xd] == cVar32);
          auVar60[0xe] = -(auVar28[0xe] == cVar33);
          auVar60[0xf] = -(auVar28[0xf] == cVar34);
          uVar20 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar60[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar21 = uVar5 + uVar13 & uVar15;
            if (*(char *)(lVar23 + -0x48 + uVar21 * -0x48) == '\x1a') {
              lVar16 = uVar21 * -0x48 + lVar23;
              goto LAB_1414c9ac8;
            }
            uVar20 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar20);
          }
          auVar55[0] = -(auVar28[0] == cVar35);
          auVar55[1] = -(auVar28[1] == cVar37);
          auVar55[2] = -(auVar28[2] == cVar39);
          auVar55[3] = -(auVar28[3] == cVar41);
          auVar55[4] = -(auVar28[4] == cVar43);
          auVar55[5] = -(auVar28[5] == cVar44);
          auVar55[6] = -(auVar28[6] == cVar45);
          auVar55[7] = -(auVar28[7] == cVar46);
          auVar55[8] = -(auVar28[8] == cVar47);
          auVar55[9] = -(auVar28[9] == cVar48);
          auVar55[10] = -(auVar28[10] == cVar49);
          auVar55[0xb] = -(auVar28[0xb] == cVar50);
          auVar55[0xc] = -(auVar28[0xc] == cVar51);
          auVar55[0xd] = -(auVar28[0xd] == cVar52);
          auVar55[0xe] = -(auVar28[0xe] == cVar53);
          auVar55[0xf] = -(auVar28[0xf] == cVar54);
          if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x2f,0) & 1) != 0) || (SUB161(auVar55 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
          uVar13 = uVar13 + lVar16 + 0x10;
          lVar16 = lVar16 + 0x10;
        }
      }
      else {
        lVar22 = 0;
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        == CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)))
                        );
        cVar35 = (char)iVar19;
        cVar37 = (char)((uint)iVar19 >> 8);
        cVar39 = (char)((uint)iVar19 >> 0x10);
        cVar41 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        == CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)))
                        );
        cVar43 = (char)iVar19;
        cVar44 = (char)((uint)iVar19 >> 8);
        cVar45 = (char)((uint)iVar19 >> 0x10);
        cVar46 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        == CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)))
                        );
        cVar47 = (char)iVar19;
        cVar48 = (char)((uint)iVar19 >> 8);
        cVar49 = (char)((uint)iVar19 >> 0x10);
        cVar50 = (char)((uint)iVar19 >> 0x18);
        iVar19 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        == CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)))
                        );
        cVar51 = (char)iVar19;
        cVar52 = (char)((uint)iVar19 >> 8);
        cVar53 = (char)((uint)iVar19 >> 0x10);
        cVar54 = (char)((uint)iVar19 >> 0x18);
        while( true ) {
          uVar13 = uVar13 & uVar15;
          auVar28 = *(undefined1 (*) [16])(lVar23 + uVar13);
          auVar62[0] = -(auVar28[0] == cVar12);
          auVar62[1] = -(auVar28[1] == cVar11);
          auVar62[2] = -(auVar28[2] == cVar29);
          auVar62[3] = -(auVar28[3] == cVar30);
          auVar62[4] = -(auVar28[4] == cVar31);
          auVar62[5] = -(auVar28[5] == cVar32);
          auVar62[6] = -(auVar28[6] == cVar33);
          auVar62[7] = -(auVar28[7] == cVar34);
          auVar62[8] = -(auVar28[8] == cVar12);
          auVar62[9] = -(auVar28[9] == cVar11);
          auVar62[10] = -(auVar28[10] == cVar29);
          auVar62[0xb] = -(auVar28[0xb] == cVar30);
          auVar62[0xc] = -(auVar28[0xc] == cVar31);
          auVar62[0xd] = -(auVar28[0xd] == cVar32);
          auVar62[0xe] = -(auVar28[0xe] == cVar33);
          auVar62[0xf] = -(auVar28[0xf] == cVar34);
          uVar20 = (ushort)(SUB161(auVar62 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar62[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar21 = uVar5 + uVar13 & uVar15;
            cVar4 = *(char *)(lVar23 + -0x48 + uVar21 * -0x48);
            if (((cVar4 != '\x1a') && (cStack_130 == cVar4)) &&
               (lVar16 = uVar21 * -0x48 + lVar23, cStack_12f == *(char *)(lVar16 + -0x47)))
            goto LAB_1414c9ac8;
            uVar20 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar20);
          }
          auVar57[0] = -(auVar28[0] == cVar35);
          auVar57[1] = -(auVar28[1] == cVar37);
          auVar57[2] = -(auVar28[2] == cVar39);
          auVar57[3] = -(auVar28[3] == cVar41);
          auVar57[4] = -(auVar28[4] == cVar43);
          auVar57[5] = -(auVar28[5] == cVar44);
          auVar57[6] = -(auVar28[6] == cVar45);
          auVar57[7] = -(auVar28[7] == cVar46);
          auVar57[8] = -(auVar28[8] == cVar47);
          auVar57[9] = -(auVar28[9] == cVar48);
          auVar57[10] = -(auVar28[10] == cVar49);
          auVar57[0xb] = -(auVar28[0xb] == cVar50);
          auVar57[0xc] = -(auVar28[0xc] == cVar51);
          auVar57[0xd] = -(auVar28[0xd] == cVar52);
          auVar57[0xe] = -(auVar28[0xe] == cVar53);
          auVar57[0xf] = -(auVar28[0xf] == cVar54);
          if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar57 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x2f,0) & 1) != 0) || (SUB161(auVar57 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
          uVar13 = uVar13 + lVar22 + 0x10;
          lVar22 = lVar22 + 0x10;
        }
      }
    }
  }
  goto LAB_1414c9c15;
LAB_1414c9ae8:
  fVar70 = *(float *)(lVar16 + -4) - *(float *)(lVar16 + -8);
  cVar12 = '\x06';
  goto LAB_1414c9afb;
LAB_1414c9fc6:
  lVar16 = *(longlong *)(param_10 + 0x98);
  if (lVar16 == 1) goto LAB_1414ca359;
  if (lVar16 == 0) goto LAB_1414ca500;
  pcStack_158 = *(char **)(param_10 + 0x90);
  pcStack_148 = pdb_140ade410;
  uStack_140 = 0;
  uStack_138 = 0;
  pcStack_150 = (code *)lVar16;
  pdb_1414d3b90(&pcStack_158);
  param_1 = plStack_108;
  uVar13 = uStack_138 & 0xffffffff;
  uVar15 = *(ulonglong *)(param_10 + 0x98);
  if (uVar15 <= uVar13) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar13,uVar15,&UNK_1433135f0);
  }
  uVar21 = uVar13 + 1;
  cVar12 = (char)lStack_118;
  uVar36 = 3;
  if (uVar15 <= uVar21) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar21,uVar15,&UNK_1433135f0);
  }
  fVar65 = *(float *)(*(longlong *)(param_10 + 0x90) + 4 + uVar13 * 0xc);
  fVar65 = (*(float *)(*(longlong *)(param_10 + 0x90) + 4 + uVar21 * 0xc) - fVar65) *
           uStack_138._4_4_ + fVar65;
  if (fVar65 <= 0.0) {
    fVar65 = 0.0;
  }
  if (param_13 == '\0') {
    fVar68 = (fVar68 - fVar69) * _DAT_142e36f38 + fVar3;
  }
  else {
    fVar68 = _DAT_142e42360 + (fVar3 - fVar70);
  }
  lVar16 = param_9;
  if (fVar65 <= fVar68) {
    pcStack_158 = (char *)CONCAT44((float)auStack_f8._0_4_ + param_6 * _UNK_142e36f64,
                                   fVar2 + param_5 * _DAT_142e36f60);
    pdb_140df4540(&cStack_130,&pcStack_158);
    uStack_124 = _DAT_142f61040;
    uStack_11c = 0x80000000;
    pdb_1409edd20(&pcStack_158,param_15,&cStack_130,_DAT_142e36f28,0x1000);
    if ((char)pcStack_158 != '\r') goto LAB_1414ca48d;
    fVar69 = uStack_140._4_4_ + fVar70 + _DAT_142e37ad4;
    fVar68 = fVar70;
    if (fVar70 <= fVar69) {
      fVar68 = fVar69;
    }
    fVar68 = (float)(~-(uint)NAN(fVar69) & (uint)fVar68 | -(uint)NAN(fVar69) & (uint)fVar70);
    uVar15 = CONCAT71((int7)((ulonglong)&cStack_130 >> 8),2);
  }
  else {
    fVar69 = fVar65 + fVar70 + _DAT_142e37ad4;
    fVar68 = fVar70;
    if (fVar70 <= fVar69) {
      fVar68 = fVar69;
    }
    fVar68 = (float)(-(uint)NAN(fVar69) & (uint)fVar70 | ~-(uint)NAN(fVar69) & (uint)fVar68);
    uVar15 = 1;
  }
  goto LAB_1414ca1ce;
LAB_1414ca465:
  uVar36 = 4;
  uVar15 = uStack_100 & 0xffffffff;
  param_1 = plStack_108;
  if (fVar65 + fVar2 + fVar67 <= fVar70 + fVar3) goto LAB_1414ca48d;
  goto LAB_1414ca481;
LAB_1414c9ac8:
  fVar70 = *(float *)(lVar16 + -4) - *(float *)(lVar16 + -8);
  cVar12 = '\0';
LAB_1414c9afb:
  lStack_118 = CONCAT71(lStack_118._1_7_,param_2);
  cStack_130 = pdb_140c44ba0(uVar36);
  cStack_12f = cVar12;
  uVar13 = pdb_1413f0300(param_12 + 4,&cStack_130);
  bVar26 = (byte)(uVar13 >> 0x39);
  auVar28 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar28 = pshuflw(auVar28,auVar28,0);
  lVar16 = 0;
  iVar19 = -(uint)(CONCAT13(cVar41,CONCAT12(cVar39,CONCAT11(cVar37,cVar35))) ==
                  CONCAT13(cVar41,CONCAT12(cVar39,CONCAT11(cVar37,cVar35))));
  iVar7 = -(uint)(CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43))) ==
                 CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43))));
  iVar8 = -(uint)(CONCAT13(cVar50,CONCAT12(cVar49,CONCAT11(cVar48,cVar47))) ==
                 CONCAT13(cVar50,CONCAT12(cVar49,CONCAT11(cVar48,cVar47))));
  iVar9 = -(uint)(CONCAT13(cVar54,CONCAT12(cVar53,CONCAT11(cVar52,cVar51))) ==
                 CONCAT13(cVar54,CONCAT12(cVar53,CONCAT11(cVar52,cVar51))));
  while( true ) {
    uVar13 = uVar13 & uVar15;
    auVar61 = *(undefined1 (*) [16])(lVar23 + uVar13);
    auVar64[0] = -(auVar61[0] == auVar28[0]);
    auVar64[1] = -(auVar61[1] == auVar28[1]);
    auVar64[2] = -(auVar61[2] == auVar28[2]);
    auVar64[3] = -(auVar61[3] == auVar28[3]);
    auVar64[4] = -(auVar61[4] == auVar28[4]);
    auVar64[5] = -(auVar61[5] == auVar28[5]);
    auVar64[6] = -(auVar61[6] == auVar28[6]);
    auVar64[7] = -(auVar61[7] == auVar28[7]);
    auVar64[8] = -(auVar61[8] == auVar28[0]);
    auVar64[9] = -(auVar61[9] == auVar28[1]);
    auVar64[10] = -(auVar61[10] == auVar28[2]);
    auVar64[0xb] = -(auVar61[0xb] == auVar28[3]);
    auVar64[0xc] = -(auVar61[0xc] == auVar28[4]);
    auVar64[0xd] = -(auVar61[0xd] == auVar28[5]);
    auVar64[0xe] = -(auVar61[0xe] == auVar28[6]);
    auVar64[0xf] = -(auVar61[0xf] == auVar28[7]);
    uVar20 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
    uVar24 = (uint)uVar20;
    if (uVar20 != 0) {
      if (cStack_130 == '\x1a') {
        do {
          uVar5 = 0;
          for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar21 = uVar5 + uVar13 & uVar15;
          if (*(char *)(lVar23 + -0x48 + uVar21 * -0x48) == '\x1a') {
            lVar22 = uVar21 * -0x48 + lVar23;
            goto LAB_1414c9c44;
          }
          uVar20 = (ushort)(uVar24 - 1) & (ushort)uVar24;
          uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar20);
        } while (uVar20 != 0);
      }
      else {
        do {
          uVar5 = 0;
          for (uVar6 = uVar24; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar21 = uVar5 + uVar13 & uVar15;
          cVar12 = *(char *)(lVar23 + -0x48 + uVar21 * -0x48);
          if (((cVar12 != '\x1a') && (cStack_130 == cVar12)) &&
             (lVar22 = uVar21 * -0x48 + lVar23, cStack_12f == *(char *)(lVar22 + -0x47)))
          goto LAB_1414c9c44;
          uVar20 = (ushort)(uVar24 - 1) & (ushort)uVar24;
          uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar20);
        } while (uVar20 != 0);
      }
    }
    auVar59[0] = -(auVar61[0] == (char)iVar19);
    auVar59[1] = -(auVar61[1] == (char)((uint)iVar19 >> 8));
    auVar59[2] = -(auVar61[2] == (char)((uint)iVar19 >> 0x10));
    auVar59[3] = -(auVar61[3] == (char)((uint)iVar19 >> 0x18));
    auVar59[4] = -(auVar61[4] == (char)iVar7);
    auVar59[5] = -(auVar61[5] == (char)((uint)iVar7 >> 8));
    auVar59[6] = -(auVar61[6] == (char)((uint)iVar7 >> 0x10));
    auVar59[7] = -(auVar61[7] == (char)((uint)iVar7 >> 0x18));
    auVar59[8] = -(auVar61[8] == (char)iVar8);
    auVar59[9] = -(auVar61[9] == (char)((uint)iVar8 >> 8));
    auVar59[10] = -(auVar61[10] == (char)((uint)iVar8 >> 0x10));
    auVar59[0xb] = -(auVar61[0xb] == (char)((uint)iVar8 >> 0x18));
    auVar59[0xc] = -(auVar61[0xc] == (char)iVar9);
    auVar59[0xd] = -(auVar61[0xd] == (char)((uint)iVar9 >> 8));
    auVar59[0xe] = -(auVar61[0xe] == (char)((uint)iVar9 >> 0x10));
    auVar59[0xf] = -(auVar61[0xf] == (char)((uint)iVar9 >> 0x18));
    if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x17,0) & 1) != 0) || (SUB161(auVar59 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x27,0) & 1) != 0) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x37,0) & 1) != 0) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
    uVar13 = uVar13 + lVar16 + 0x10;
    lVar16 = lVar16 + 0x10;
  }
LAB_1414c9c15:
  pcStack_158 = &cStack_130;
  pcStack_150 = pdb_1414c9690;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143313560,&pcStack_158,&UNK_143313590);
LAB_1414c9c44:
  fVar68 = *(float *)(lVar22 + -4);
  fVar69 = *(float *)(lVar22 + -8);
  fVar2 = *param_4;
  fVar3 = param_4[1];
  auStack_f8 = ZEXT416((uint)param_4[2]);
  fVar67 = param_5 * _DAT_142e3787c + fVar2;
  lStack_110 = *param_11;
  lVar23 = param_11[1];
  puVar17 = *(uint **)(lStack_110 + 0xf8);
  puVar1 = puVar17 + *(longlong *)(lStack_110 + 0x100);
  cVar12 = *(char *)(lStack_110 + 0x108);
  fVar70 = fVar70 * _DAT_142e36f50;
  fVar65 = _DAT_14300a340 + (fVar3 - fVar70);
  uStack_100 = 8;
  lVar22 = 0;
  uVar15 = 0;
  lVar16 = 0;
  plStack_108 = param_1;
LAB_1414c9cf8:
  do {
    do {
      do {
        do {
          if (cVar12 == '\0') {
            if ((int)uVar15 == (int)lVar16) {
              do {
                if (puVar17 == puVar1) goto LAB_1414c9fc6;
                uVar24 = *puVar17;
                puVar17 = puVar17 + 1;
                lVar16 = *(longlong *)
                          (*(longlong *)(lVar23 + 0x100) + 0x58 + (ulonglong)uVar24 * 0xa0);
              } while (lVar16 == 0);
              lVar14 = *(longlong *)(lVar23 + 0x100) + (ulonglong)uVar24 * 0xa0;
              uVar15 = (ulonglong)*(uint *)(lVar14 + 0x94);
              if (*(ulonglong *)(lStack_110 + 0x110) <
                  *(ulonglong *)(*(longlong *)(lVar23 + 0x1a0) + 0x40 + uVar15 * 0x48)) {
                lVar22 = *(longlong *)(lVar23 + 0x1a0) + uVar15 * 0x48;
                uVar15 = *(ulonglong *)
                          (*(longlong *)(lVar22 + 0x38) + *(ulonglong *)(lStack_110 + 0x110) * 8);
                if (uVar15 == 0) goto LAB_1414c9e0f;
                lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar15 * 0x30);
              }
              else {
LAB_1414c9e0f:
                lVar22 = 0;
              }
              uStack_100 = *(longlong *)(lVar14 + 0x50);
              uVar15 = 0;
            }
            iVar19 = (int)uVar15;
            uVar15 = (ulonglong)~*(uint *)(uStack_100 + 8 + uVar15 * 0x10);
          }
          else {
            if ((int)uVar15 == (int)lVar16) {
              do {
                if (puVar17 == puVar1) goto LAB_1414c9fc6;
                uVar24 = *puVar17;
                puVar17 = puVar17 + 1;
                lVar16 = *(longlong *)
                          (*(longlong *)(lVar23 + 0x1a0) + 0x10 + (ulonglong)uVar24 * 0x48);
              } while (lVar16 == 0);
              lVar22 = *(longlong *)(lVar23 + 0x1a0) + (ulonglong)uVar24 * 0x48;
              if ((*(ulonglong *)(lStack_110 + 0x110) < *(ulonglong *)(lVar22 + 0x40)) &&
                 (uVar15 = *(ulonglong *)
                            (*(longlong *)(lVar22 + 0x38) + *(ulonglong *)(lStack_110 + 0x110) * 8),
                 uVar15 != 0)) {
                lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar15 * 0x30);
              }
              else {
                lVar22 = 0;
              }
              uVar15 = 0;
            }
            iVar19 = (int)uVar15;
          }
          plVar25 = (longlong *)(uVar15 * 0x58 + lVar22);
          uVar15 = (ulonglong)(iVar19 + 1);
          cVar11 = pdb_140b77b50(plVar25);
        } while ((cVar11 == '\0') || (*plVar25 == param_9));
        fVar66 = *(float *)((longlong)plVar25 + 0x4c) + _DAT_142e3c604;
        fVar27 = *(float *)(param_10 + 0x284) + _DAT_14300a340;
      } while (fVar3 <= fVar66);
      fVar10 = fVar27;
      if (fVar27 <= fVar65) {
        fVar10 = fVar65;
      }
    } while (fVar66 < (float)(~-(uint)NAN(fVar65) & (uint)fVar10 | -(uint)NAN(fVar65) & (uint)fVar27
                             ));
    uVar36 = SUB41(fVar67,0);
    if ((int)plVar25[1] != 1) {
      pcStack_158 = *(char **)((longlong)plVar25 + 0xc);
      pcStack_150 = *(code **)((longlong)plVar25 + 0x14);
      fVar27 = (float)pdb_140def6a0(&pcStack_158);
      if (fVar27 < _DAT_142e3798c) {
        uVar38 = (undefined1)((uint)fVar67 >> 8);
        uVar40 = (undefined1)((uint)fVar67 >> 0x10);
        uVar42 = (undefined1)((uint)fVar67 >> 0x18);
        fVar27 = (float)pdb_140def6a0(&pcStack_158);
        if (fVar27 < (float)(CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar38,uVar36))) ^
                            CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar38,uVar36))))) break;
      }
      goto LAB_1414c9cf8;
    }
    pcStack_148 = *(code **)((longlong)plVar25 + 0x1c);
    pcStack_158 = *(char **)((longlong)plVar25 + 0xc);
    pcStack_150 = *(code **)((longlong)plVar25 + 0x14);
    cVar11 = pdb_140df24f0(&pcStack_158,pcStack_148,auStack_f8._0_8_,_DAT_142e3c670,0x3f4ccccd);
  } while ((cVar11 == '\0') || (cVar11 = pdb_140df24f0(&pcStack_158), cVar11 == '\0'));
  fVar68 = *(float *)(param_10 + 0x284);
  fVar69 = fVar68;
  if (fVar68 <= fVar66) {
    fVar69 = fVar66;
  }
  fVar68 = (float)(~-(uint)NAN(fVar66) & (uint)fVar69 | -(uint)NAN(fVar66) & (uint)fVar68) + fVar70;
  uVar15 = 0;
  param_1 = plStack_108;
  lVar16 = *plVar25;
  cVar12 = (char)lStack_118;
LAB_1414ca1ce:
  if (cVar12 != '\0') {
    lVar22 = *(longlong *)(param_10 + 0x98);
    if (lVar22 == 1) {
LAB_1414ca359:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143314ab0);
    }
    if (lVar22 == 0) {
LAB_1414ca500:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143314a68,0x2d,&UNK_143314a98);
    }
    pcStack_158 = *(char **)(param_10 + 0x90);
    pcStack_148 = pdb_140ade410;
    uStack_140 = 0;
    uStack_138 = 0;
    pcStack_150 = (code *)lVar22;
    pdb_1414d3b90(&pcStack_158);
    fVar69 = _DAT_142e3c604;
    uVar21 = uStack_138 & 0xffffffff;
    uVar13 = *(ulonglong *)(param_10 + 0xe8);
    if (uVar13 <= uVar21) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar21,uVar13,&UNK_143313608);
    }
    uStack_100 = CONCAT44(uStack_100._4_4_,(int)uVar15);
    if (uVar13 <= uVar21 + 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar21 + 1,uVar13,&UNK_143313608);
    }
    fVar2 = *(float *)(*(longlong *)(param_10 + 0xe0) + uVar21 * 4);
    fVar65 = (*(float *)(*(longlong *)(param_10 + 0xe0) + 4 + uVar21 * 4) - fVar2) *
             uStack_138._4_4_;
    puVar17 = *(uint **)(lStack_110 + 0xf8);
    puVar1 = puVar17 + *(longlong *)(lStack_110 + 0x100);
    if (*(char *)(lStack_110 + 0x108) != '\0') {
      lVar14 = 0;
      uVar24 = 0;
      lVar22 = 0;
      fVar67 = 0.0;
      do {
        if (uVar24 == (uint)lVar22) {
          do {
            if (puVar17 == puVar1) goto LAB_1414ca465;
            uVar24 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar22 = *(longlong *)(*(longlong *)(lVar23 + 0x1a0) + 0x10 + (ulonglong)uVar24 * 0x48);
          } while (lVar22 == 0);
          lVar14 = *(longlong *)(lVar23 + 0x1a0) + (ulonglong)uVar24 * 0x48;
          if ((*(ulonglong *)(lStack_110 + 0x110) < *(ulonglong *)(lVar14 + 0x40)) &&
             (uVar15 = *(ulonglong *)
                        (*(longlong *)(lVar14 + 0x38) + *(ulonglong *)(lStack_110 + 0x110) * 8),
             uVar15 != 0)) {
            lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar15 * 0x30);
          }
          else {
            lVar14 = 0;
          }
          uVar24 = 0;
        }
        plVar25 = (longlong *)((ulonglong)uVar24 * 0x58 + lVar14);
        uVar24 = uVar24 + 1;
        cVar12 = pdb_140b77b50(plVar25);
        if ((cVar12 != '\0') && (*plVar25 == param_9)) {
          fVar67 = fVar69;
        }
      } while( true );
    }
    lVar18 = 8;
    lVar14 = 0;
    uVar24 = 0;
    lVar22 = 0;
    fVar67 = 0.0;
    lStack_118 = lVar16;
    do {
      if (uVar24 == (uint)lVar22) {
        do {
          lVar16 = lStack_118;
          if (puVar17 == puVar1) goto LAB_1414ca465;
          uVar24 = *puVar17;
          puVar17 = puVar17 + 1;
          lVar22 = *(longlong *)(*(longlong *)(lVar23 + 0x100) + 0x58 + (ulonglong)uVar24 * 0xa0);
        } while (lVar22 == 0);
        lVar16 = *(longlong *)(lVar23 + 0x100) + (ulonglong)uVar24 * 0xa0;
        uVar15 = (ulonglong)*(uint *)(lVar16 + 0x94);
        if (*(ulonglong *)(lStack_110 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar23 + 0x1a0) + 0x40 + uVar15 * 0x48)) {
          lVar14 = *(longlong *)(lVar23 + 0x1a0) + uVar15 * 0x48;
          uVar15 = *(ulonglong *)
                    (*(longlong *)(lVar14 + 0x38) + *(ulonglong *)(lStack_110 + 0x110) * 8);
          if (uVar15 == 0) goto LAB_1414ca416;
          lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar15 * 0x30);
        }
        else {
LAB_1414ca416:
          lVar14 = 0;
        }
        lVar18 = *(longlong *)(lVar16 + 0x50);
        uVar24 = 0;
      }
      plVar25 = (longlong *)
                ((ulonglong)~*(uint *)(lVar18 + 8 + (ulonglong)uVar24 * 0x10) * 0x58 + lVar14);
      uVar24 = uVar24 + 1;
      cVar12 = pdb_140b77b50(plVar25);
      if ((cVar12 != '\0') && (*plVar25 == param_9)) {
        fVar67 = _DAT_142e3c604;
      }
    } while( true );
  }
LAB_1414ca481:
  *param_1 = lVar16;
  *(float *)(param_1 + 1) = fVar68;
  uVar36 = (undefined1)uVar15;
LAB_1414ca48d:
  *(undefined1 *)((longlong)param_1 + 0xc) = uVar36;
  return param_1;
}

