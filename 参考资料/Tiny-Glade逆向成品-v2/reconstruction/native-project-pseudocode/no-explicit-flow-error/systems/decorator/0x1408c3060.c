// VA 0x1408c3060, PDB extent 10855 bytes
// system_decorator::decorator_visual::gothic_wall_window::generate_gothic_wall_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_wall_window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::gothic_wall_window::generate_gothic_wall_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_wall_window.rs
   Extent: 10855 */

void pdb_1408c3060(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined8 *param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  longlong lVar19;
  char *pcVar20;
  undefined1 (*unaff_RBX) [16];
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined *puVar25;
  undefined *puVar26;
  ushort uVar27;
  undefined7 uVar29;
  byte *pbVar28;
  ulonglong uVar30;
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  int iVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 *puVar67;
  ulonglong in_stack_fffffffffffffcb0;
  undefined4 uVar68;
  undefined8 in_stack_fffffffffffffcb8;
  undefined8 uStack_300;
  undefined1 (*pauStack_2f8) [16];
  longlong lStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2e0;
  longlong *plStack_2d8;
  longlong *plStack_2d0;
  undefined4 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined1 (*pauStack_2b8) [16];
  undefined1 (*pauStack_2b0) [16];
  longlong lStack_2a8;
  undefined *puStack_2a0;
  undefined8 auStack_298 [2];
  undefined8 auStack_288 [2];
  undefined8 uStack_278;
  undefined8 uStack_270;
  float fStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  longlong *plStack_250;
  longlong lStack_248;
  undefined8 uStack_240;
  undefined4 uStack_234;
  float fStack_230;
  float fStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  byte *pbStack_1e0;
  float fStack_1d8;
  ulonglong uStack_1d0;
  longlong *plStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  int iStack_1ac;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  ushort uStack_190;
  undefined2 uStack_18e;
  undefined4 uStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined8 uStack_174;
  byte *pbStack_168;
  undefined1 (*pauStack_160) [16];
  ulonglong uStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  undefined *puStack_140;
  undefined1 (*pauStack_138) [16];
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  char cStack_120;
  char cStack_11f;
  uint5 uStack_11e;
  undefined1 uStack_119;
  float fStack_118;
  undefined3 uStack_114;
  longlong *plStack_110;
  undefined1 uStack_102;
  char cStack_101;
  byte *pbStack_100;
  byte bStack_f4;
  undefined1 uStack_f3;
  byte bStack_f2;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pauVar32 = param_2;
  cStack_101 = pdb_140e94b40();
  pauVar33 = param_3;
  if (cStack_101 == '\0') goto LAB_1408c3293;
  uVar30 = 0x54;
  lVar11 = pdb_1408c6300(0x54);
  unaff_RBX = (undefined1 (*) [16])&UNK_143016a08;
  if (lVar11 == 1) {
    if ((undefined1 (*) [16])0x54 < pauVar32) {
      pdb_142dc8070(&UNK_143016a08,0x54,0,pauVar32,&UNK_143016ad8);
LAB_1408c53df:
      pdb_142dc8070(&UNK_143016a08,0x54);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = pdb_1408c6300(pauVar32);
    if ((uVar12 & 1) != 0) {
      if ((undefined *)0x54 < *pauVar32 + 2) goto LAB_1408c53df;
      uVar30 = 0x52 - (longlong)pauVar32;
      unaff_RBX = (undefined1 (*) [16])(pauVar32[0x143016a0] + 10);
    }
  }
  puVar25 = &UNK_14301664b;
  pauVar31 = (undefined1 (*) [16])&UNK_143016608;
  do {
    bVar8 = puVar25[-1];
    uVar10 = (uint)(char)bVar8;
    pauStack_138 = param_1;
    if ((char)bVar8 < '\0') {
      bVar9 = puVar25[-2];
      if ((char)bVar9 < -0x40) {
        bVar3 = puVar25[-3];
        if ((char)bVar3 < -0x40) {
          pbVar18 = puVar25 + -4;
          puVar25 = puVar25 + -4;
          uVar10 = bVar3 & 0x3f | (*pbVar18 & 7) << 6;
        }
        else {
          puVar25 = puVar25 + -3;
          uVar10 = bVar3 & 0xf;
        }
        uVar10 = bVar9 & 0x3f | uVar10 << 6;
      }
      else {
        puVar25 = puVar25 + -2;
        uVar10 = bVar9 & 0x1f;
      }
      uVar10 = (uint)(bVar8 & 0x3f) | uVar10 << 6;
      if (uVar10 != 0x5c) goto LAB_1408c31e4;
LAB_1408c31fc:
      puVar26 = puVar25 + -0x143016607;
      if ((undefined *)0x43 < puVar26) {
        pdb_142dc8070(&UNK_143016608,0x43,puVar26,0x43,&UNK_143016ab8);
LAB_1408c5386:
        uStack_1a8 = &cStack_120;
        fStack_1a0 = 12.578812;
        fStack_19c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14330e2c6,&uStack_1a8,&UNK_14330e310);
      }
      pauVar33 = (undefined1 (*) [16])(0x43 - (longlong)puVar26);
      pauVar31 = (undefined1 (*) [16])(puVar25 + 1);
      goto LAB_1408c3225;
    }
    puVar25 = puVar25 + -1;
    if (uVar10 == 0x5c) goto LAB_1408c31fc;
LAB_1408c31e4:
    if (uVar10 == 0x2f) goto LAB_1408c31fc;
  } while (puVar25 != &UNK_143016608);
  pauVar33 = (undefined1 (*) [16])0x43;
LAB_1408c3225:
  plVar13 = (longlong *)pdb_140e97000();
  if ((char)plVar13[0xd] != '\x01') goto LAB_1408c52b3;
  do {
    if (*plVar13 == 0) {
      *plVar13 = -1;
      in_stack_fffffffffffffcb8 = 0;
      in_stack_fffffffffffffcb0 = 0;
      pauVar32 = unaff_RBX;
      plStack_1c8 = plVar13;
      uStack_240 = pdb_140e94f10(plVar13 + 1,unaff_RBX,uVar30,pauVar31,pauVar33,1,0);
      *plStack_1c8 = *plStack_1c8 + 1;
      param_1 = pauStack_138;
      pauVar33 = param_3;
LAB_1408c3293:
      param_3 = param_2;
      param_2 = param_1;
      uStack_300 = pdb_140c47770(param_2);
      pauStack_2f8 = pauVar32;
      uStack_208 = uStack_300;
      pauStack_138 = pauVar32;
      pdb_140a2fb40(&uStack_1a8,*(undefined8 *)*param_3);
      lStack_220 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
      pauVar31 = (undefined1 (*) [16])CONCAT44(fStack_19c,fStack_1a0);
      uVar30 = (ulonglong)uStack_190;
      plStack_2d8 = *(longlong **)*pauVar33;
      plStack_2d0 = plStack_2d8 + 4;
      uStack_234 = *(undefined4 *)((longlong)param_4 + 0x1c);
      uStack_2c0 = *param_4;
      puStack_2c8 = (undefined4 *)param_4[2];
      pauStack_2b8 = pauStack_138 + 2;
      pauStack_2b0 = pauStack_138 + 5;
      lVar11 = CONCAT44(uStack_184,fStack_188);
      if (CONCAT44(uStack_184,fStack_188) != 0) {
        do {
          lStack_2a8 = lVar11 + -1;
          uVar10 = (uint)uVar30;
          if ((short)uVar30 == 0) {
            do {
              auVar36 = *pauVar31;
              lStack_220 = lStack_220 + -0x980;
              pauVar31 = pauVar31 + 1;
              uVar10 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar10 == 0);
          }
          uVar24 = 0;
          for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          lStack_2f0 = *(longlong *)(lStack_220 + -0x98 + (ulonglong)uVar24 * -0x98);
          lStack_248 = lStack_2f0;
          pdb_140c3ba10(&uStack_1a8,lStack_220 + (ulonglong)uVar24 * -0x98 + -0x90);
          uVar30 = (ulonglong)(uVar10 - 1 & uVar10);
          pauVar33 = (undefined1 (*) [16])CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
          param_2 = (undefined1 (*) [16])CONCAT44(fStack_19c,fStack_1a0);
          param_4 = (undefined8 *)(ulonglong)uStack_190;
          plStack_1c8 = (longlong *)CONCAT44(uStack_184,fStack_188);
          lStack_2e8 = CONCAT44(fStack_17c,fStack_180);
          lStack_2e0 = lStack_2e8 + 0x50;
LAB_1408c33fb:
          lVar11 = lStack_2e8;
          if (plStack_1c8 != (longlong *)0x0) {
            if ((short)param_4 == 0) {
              do {
                auVar36 = *param_2;
                pauVar33 = pauVar33 + -4;
                param_2 = param_2 + 1;
                uVar10 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
                param_4 = (undefined8 *)(ulonglong)uVar10;
              } while (uVar10 == 0);
            }
            iVar52 = 0;
            uVar24 = (uint)param_4;
            for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              iVar52 = iVar52 + 1;
            }
            uStack_1a8._0_4_ =
                 *(float *)((longlong)pauVar33 + (-4 - (ulonglong)(uint)(iVar52 << 2)));
            uStack_1d0 = (ulonglong)(uint)(float)uStack_1a8;
            if (*(longlong *)(lStack_2e8 + 0x48) != 0) {
              param_4 = (undefined8 *)(ulonglong)(uVar24 - 1 & uVar24);
              plVar13 = (longlong *)((longlong)plStack_1c8 + -1);
              uVar14 = pdb_1400aede0(lStack_2e0,&uStack_1a8);
              param_3 = *(undefined1 (**) [16])(lVar11 + 0x30);
              uVar12 = *(ulonglong *)(lVar11 + 0x38);
              bVar8 = (byte)(uVar14 >> 0x39);
              auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
              auVar36 = pshuflw(auVar36,auVar36,0);
              lVar11 = 0;
              while( true ) {
                uVar14 = uVar14 & uVar12;
                auVar2 = *(undefined1 (*) [16])(*param_3 + uVar14);
                auVar48[0] = -(auVar2[0] == auVar36[0]);
                auVar48[1] = -(auVar2[1] == auVar36[1]);
                auVar48[2] = -(auVar2[2] == auVar36[2]);
                auVar48[3] = -(auVar2[3] == auVar36[3]);
                auVar48[4] = -(auVar2[4] == auVar36[4]);
                auVar48[5] = -(auVar2[5] == auVar36[5]);
                auVar48[6] = -(auVar2[6] == auVar36[6]);
                auVar48[7] = -(auVar2[7] == auVar36[7]);
                auVar48[8] = -(auVar2[8] == auVar36[0]);
                auVar48[9] = -(auVar2[9] == auVar36[1]);
                auVar48[10] = -(auVar2[10] == auVar36[2]);
                auVar48[0xb] = -(auVar2[0xb] == auVar36[3]);
                auVar48[0xc] = -(auVar2[0xc] == auVar36[4]);
                auVar48[0xd] = -(auVar2[0xd] == auVar36[5]);
                auVar48[0xe] = -(auVar2[0xe] == auVar36[6]);
                auVar48[0xf] = -(auVar2[0xf] == auVar36[7]);
                uVar27 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar48[0xf] >> 7) << 0xf;
                uVar10 = (uint)uVar27;
                while (uVar27 != 0) {
                  uVar24 = 0;
                  for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                    uVar24 = uVar24 + 1;
                  }
                  lVar21 = (uVar24 + uVar14 & uVar12) * -0x68;
                  plStack_1c8 = plVar13;
                  if ((int)uStack_1d0 == *(int *)((longlong)param_3 + lVar21 + -0x68)) {
                    bStack_f2 = pdb_140c45920(&uStack_300);
                    plVar13 = plStack_2d8;
                    uVar68 = (undefined4)(in_stack_fffffffffffffcb0 >> 0x20);
                    if (((bStack_f2 & 0x1e) != 6) ||
                       (pbStack_100 = (byte *)((longlong)param_3 + lVar21), 1 < pbStack_100[-0x2e]))
                    goto LAB_1408c33fb;
                    if (plStack_2d8[3] == 0) goto LAB_1408c520a;
                    pbStack_168 = pbStack_100 + -0x60;
                    uVar14 = pdb_1400af0a0(plStack_2d0,&lStack_2f0);
                    lVar21 = *plVar13;
                    uVar12 = plVar13[1];
                    bVar8 = (byte)(uVar14 >> 0x39);
                    auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
                    auVar36 = pshuflw(auVar36,auVar36,0);
                    lVar19 = 0;
                    goto LAB_1408c35aa;
                  }
                  uVar27 = (ushort)(uVar10 - 1) & (ushort)uVar10;
                  uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar27);
                }
                auVar40[0] = -(auVar2[0] == -1);
                auVar40[1] = -(auVar2[1] == -1);
                auVar40[2] = -(auVar2[2] == -1);
                auVar40[3] = -(auVar2[3] == -1);
                auVar40[4] = -(auVar2[4] == -1);
                auVar40[5] = -(auVar2[5] == -1);
                auVar40[6] = -(auVar2[6] == -1);
                auVar40[7] = -(auVar2[7] == -1);
                auVar40[8] = -(auVar2[8] == -1);
                auVar40[9] = -(auVar2[9] == -1);
                auVar40[10] = -(auVar2[10] == -1);
                auVar40[0xb] = -(auVar2[0xb] == -1);
                auVar40[0xc] = -(auVar2[0xc] == -1);
                auVar40[0xd] = -(auVar2[0xd] == -1);
                auVar40[0xe] = -(auVar2[0xe] == -1);
                auVar40[0xf] = -(auVar2[0xf] == -1);
                if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
                uVar14 = uVar14 + lVar11 + 0x10;
                lVar11 = lVar11 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143016450);
          }
          unaff_RBX = (undefined1 (*) [16])0x0;
          lVar11 = lStack_2a8;
          if (lStack_2a8 == 0) break;
        } while( true );
      }
      if (cStack_101 == '\0') {
        return;
      }
      plVar13 = (longlong *)pdb_140e97000();
      if (((char)plVar13[0xd] != '\x01') &&
         (plVar13 = (longlong *)pdb_142dde6e0(plVar13,0), plVar13 == (longlong *)0x0)) break;
      if (*plVar13 == 0) {
        *plVar13 = -1;
        pauStack_138 = (undefined1 (*) [16])plVar13;
        pdb_140e95370(plVar13 + 1,uStack_240);
        *(longlong *)pauStack_138 = *(longlong *)pauStack_138 + 1;
        return;
      }
    }
    plVar13 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408c52b3:
    plVar13 = (longlong *)pdb_142dde6e0(plVar13,0);
  } while (plVar13 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_1408c52d3:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
LAB_1408c35aa:
  uVar14 = uVar14 & uVar12;
  auVar2 = *(undefined1 (*) [16])(lVar21 + uVar14);
  auVar49[0] = -(auVar2[0] == auVar36[0]);
  auVar49[1] = -(auVar2[1] == auVar36[1]);
  auVar49[2] = -(auVar2[2] == auVar36[2]);
  auVar49[3] = -(auVar2[3] == auVar36[3]);
  auVar49[4] = -(auVar2[4] == auVar36[4]);
  auVar49[5] = -(auVar2[5] == auVar36[5]);
  auVar49[6] = -(auVar2[6] == auVar36[6]);
  auVar49[7] = -(auVar2[7] == auVar36[7]);
  auVar49[8] = -(auVar2[8] == auVar36[0]);
  auVar49[9] = -(auVar2[9] == auVar36[1]);
  auVar49[10] = -(auVar2[10] == auVar36[2]);
  auVar49[0xb] = -(auVar2[0xb] == auVar36[3]);
  auVar49[0xc] = -(auVar2[0xc] == auVar36[4]);
  auVar49[0xd] = -(auVar2[0xd] == auVar36[5]);
  auVar49[0xe] = -(auVar2[0xe] == auVar36[6]);
  auVar49[0xf] = -(auVar2[0xf] == auVar36[7]);
  uVar27 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar27;
  while (uVar27 != 0) {
    uVar24 = 0;
    for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    lVar22 = (uVar24 + uVar14 & uVar12) * -0x2b0;
    if (lStack_248 == *(longlong *)(lVar21 + -0x2b0 + lVar22)) {
      uStack_148 = (ulonglong)pbStack_100[-7];
      cVar7 = pdb_1409012c0(bStack_f2,uStack_208);
      cStack_120 = pdb_140c44ba0(uStack_148);
      cStack_11f = cVar7;
      lVar19 = pdb_141494370(pauStack_138,&cStack_120);
      if (lVar19 == 0) goto LAB_1408c5386;
      uStack_278 = *(undefined8 *)(lVar19 + 0x20);
      uStack_270 = *(undefined8 *)(lVar19 + 0x28);
      uStack_260 = *(undefined8 *)(lVar19 + 0x38);
      uVar54 = _DAT_143011f50;
      if ((char)uStack_148 != '\x03') {
        uVar54 = *(undefined4 *)(&UNK_143011f58 + (ulonglong)((char)uStack_148 == '\x02') * 4);
      }
      _fStack_268 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar19 + 0x30) >> 0x20),uVar54);
      pfVar15 = (float *)pdb_140901130(pbStack_100 + -0x60,&UNK_143016668);
      pauVar32 = (undefined1 (*) [16])(lVar21 + lVar22);
      puStack_140 = pauVar32[-0x2b] + 8;
      fVar53 = *pfVar15;
      in_stack_fffffffffffffcb0 = CONCAT44(uVar68,uVar54);
      pauStack_160 = pauVar32;
      pdb_1408c2be0(&uStack_1a8,puStack_140,pbStack_100 + -0x60);
      uVar39 = uStack_174;
      fVar46 = fStack_17c;
      fVar58 = fStack_180;
      fVar45 = fStack_188;
      fVar34 = fStack_194;
      fVar57 = fStack_198;
      uVar35 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
      uVar37 = CONCAT44(fStack_19c,fStack_1a0);
      uStack_228 = uStack_18c;
      uStack_224 = uStack_184;
      fStack_230 = fStack_198;
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,CONCAT22(uStack_18e,uStack_190));
      fStack_22c = fStack_180;
      uStack_200 = CONCAT44(uStack_200._4_4_,fStack_178);
      fVar38 = fStack_178 - (float)CONCAT22(uStack_18e,uStack_190);
      fVar44 = fStack_180 - fStack_198;
      fVar47 = _DAT_142e36f28 / SQRT(fVar44 * fVar44 + fVar38 * fVar38);
      uStack_1f0 = CONCAT44(fVar47 * fVar44,(float)((uint)fVar47 ^ _DAT_142e37820) * fVar38);
      pdb_140df4520(&cStack_120,&uStack_1f0);
      pcVar20 = &cStack_120;
      pdb_140de9ab0(&uStack_1a8,pcVar20);
      uStack_218 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
      uStack_210 = CONCAT44(fStack_19c,fStack_1a0);
      *puStack_2c8 = uStack_234;
      uVar16 = pdb_140947f90(lStack_248);
      bStack_f4 = pbStack_100[-8];
      plStack_110 = (longlong *)pdb_1408f3750(uStack_2c0,uStack_1d0,uVar16,pcVar20,bStack_f4);
      iStack_1ac = *(int *)(pbStack_100 + -0x10);
      bVar8 = pdb_1408ff990(pauStack_160[-1] + 0xb);
      param_3 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar32 >> 8),bVar8);
      puStack_2a0 = pauStack_160[-1] + 7;
      bStack_f1 = pdb_1408ff980();
      uStack_158 = uStack_148 & 0xff;
      fVar38 = fStack_268 * _DAT_142e36f50;
      uVar29 = (undefined7)((ulonglong)lVar11 >> 8);
      uVar10 = (uint)CONCAT71(uVar29,1);
      cVar7 = (char)uStack_148;
      iVar52 = (int)uStack_158;
      if (bVar8 == 0) {
        if (bStack_f2 == 7) {
          uVar10 = (uint)bStack_f1;
          goto LAB_1408c3928;
        }
        bVar9 = 1;
        uVar10 = (uint)CONCAT71(uVar29,1);
        if (bStack_f1 != 0) goto LAB_1408c3934;
        if (cVar7 == '\x01') {
          uStack_1c0 = 0x20;
          uStack_150 = CONCAT71(uStack_150._1_7_,1);
          uStack_130 = 0;
          puVar25 = &UNK_143016750;
          puStack_1b8 = &UNK_143016680;
        }
        else if (iVar52 == 3) {
          uStack_1c0 = 0x20;
          uStack_150 = CONCAT71(uStack_150._1_7_,cVar7 == '\x01');
          uStack_130 = 0;
          puVar25 = &UNK_143016750;
          puStack_1b8 = &UNK_1430166c0;
        }
        else {
          if (iVar52 != 2) goto LAB_1408c33fb;
          uStack_1c0 = 0x20;
          uStack_150 = CONCAT71(uStack_150._1_7_,cVar7 == '\x01');
          uStack_130 = 0;
          puVar25 = &UNK_143016750;
          puStack_1b8 = &UNK_1430166a0;
        }
      }
      else {
LAB_1408c3928:
        bVar9 = cVar7 == '\x01' | bStack_f1;
LAB_1408c3934:
        if (cVar7 == '\x01') {
          uStack_1c0 = 0x25;
          uStack_150 = CONCAT71(uStack_150._1_7_,bVar9);
          puVar25 = &UNK_143016768;
          puStack_1b8 = &UNK_1430166e0;
          uStack_130 = uVar10;
        }
        else if (iVar52 == 3) {
          uStack_1c0 = 0x25;
          uStack_150 = CONCAT71(uStack_150._1_7_,bVar9);
          puVar25 = &UNK_143016768;
          puStack_1b8 = &UNK_14301672a;
          uStack_130 = uVar10;
        }
        else {
          if (iVar52 != 2) goto LAB_1408c33fb;
          uStack_1c0 = 0x25;
          uStack_150 = CONCAT71(uStack_150._1_7_,bVar9);
          puVar25 = &UNK_143016768;
          puStack_1b8 = &UNK_143016705;
          uStack_130 = uVar10;
        }
      }
      fStack_124 = fStack_268;
      uStack_12c = *(undefined4 *)(pbStack_100 + -0xc);
      uStack_128 = *(undefined4 *)(pauStack_160[-4] + 0xc);
      cVar7 = pdb_1408ff980(pauStack_160[-1] + 7);
      fVar44 = _DAT_143010290;
      if (((cVar7 != '\0') && (*(uint *)pauStack_160[-5] < 2)) &&
         (0.0 < *(float *)(pauStack_160[-2] + 0xc))) {
        fVar44 = (float)pdb_14092f940(puStack_140);
      }
      fVar47 = *(float *)(puVar25 + uStack_158 * 8 + -8);
      fVar65 = *(float *)(puVar25 + uStack_158 * 8 + -4);
      cVar7 = pdb_140a87390(bStack_f2,puStack_140);
      fVar57 = fVar58 * _DAT_142e36f60 + fVar57 * _DAT_142e36f60;
      fVar58 = fVar46 * _UNK_142e36f64 + fVar34 * _UNK_142e36f64;
      puStack_140 = (undefined *)
                    CONCAT44(puStack_140._4_4_,
                             (float)uStack_200 * _DAT_142e36f50 + (float)uStack_1f8 * _DAT_142e36f50
                            );
      bStack_f1 = bStack_f1 & (bVar8 ^ 1);
      fVar62 = fVar53 - fVar38;
      fVar53 = fVar53 + fVar38;
      if (cVar7 == '\0') {
        fVar38 = fVar58;
        fVar66 = fVar58;
        if ((char)uStack_150 == '\0') {
          uVar12 = CONCAT44((uint)((int)fVar45 >> 0x1f) >> 1,(uint)((int)fVar34 >> 0x1f) >> 1) ^
                   CONCAT44(fVar45,fVar34);
          fVar56 = fVar45;
          fVar38 = fVar34;
          if ((int)uVar12 <= (int)(uVar12 >> 0x20)) {
            fVar56 = fVar34;
            fVar38 = fVar45;
          }
          uVar12 = CONCAT44((uint)((int)fVar46 >> 0x1f) >> 1,(uint)((int)fVar56 >> 0x1f) >> 1) ^
                   CONCAT44(fVar46,fVar56);
          iVar52 = (int)(uVar12 >> 0x20);
          if ((int)((uint)((int)fVar38 >> 0x1f) >> 1 ^ (uint)fVar38) <= iVar52) {
            fVar38 = fVar46;
          }
          fVar66 = fVar46;
          if ((int)uVar12 <= iVar52) {
            fVar66 = fVar56;
          }
        }
        fVar47 = fVar47 + fVar66;
        fVar66 = fVar44;
        if (fVar44 <= fVar47) {
          fVar66 = fVar47;
        }
        fVar38 = (fVar65 + fVar38) -
                 (float)(-(uint)NAN(fVar47) & (uint)fVar44 | ~-(uint)NAN(fVar47) & (uint)fVar66);
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        if (_DAT_142e37848 <= fVar38) {
          fStack_19c = (float)((uint)fStack_19c & 0xff000000);
          uStack_1a8._0_4_ = (float)((uint)(float)uStack_1a8 & 0xffffff);
          uStack_1a8._4_4_ = 0.0;
          fStack_1a0 = 0.0;
          fStack_118 = 0.0;
          uStack_114 = 0;
          cStack_120 = SUB41((float)uStack_1a8,0);
          cStack_11f = (char)((uint)(float)uStack_1a8 >> 8);
          uStack_11e = (uint5)(ushort)((uint)(float)uStack_1a8 >> 0x10);
          uStack_119 = 0;
          lVar11 = plStack_110[0x18];
          if (lVar11 == plStack_110[0x16]) {
            pdb_142d8ddd0(plStack_110 + 0x16);
          }
          lVar21 = plStack_110[0x17];
          lVar19 = lVar11 * 0x170;
          *(undefined8 *)(lVar21 + lVar19) = 0;
          *(undefined8 *)(lVar21 + 0x10 + lVar19) = 0;
          *(undefined8 *)(lVar21 + 0x20 + lVar19) = 0;
          *(undefined8 *)(lVar21 + 0x30 + lVar19) = 0;
          *(undefined4 *)(lVar21 + 0x40 + lVar19) = 0;
          *(undefined4 *)(lVar21 + 0x50 + lVar19) = 0;
          *(undefined4 *)(lVar21 + 0x60 + lVar19) = 0;
          *(undefined4 *)(lVar21 + 0x70 + lVar19) = 2;
          *(undefined **)(lVar21 + 0x90 + lVar19) = puStack_1b8;
          *(undefined8 *)(lVar21 + 0x98 + lVar19) = uStack_1c0;
          *(undefined **)(lVar21 + 0xa0 + lVar19) = &UNK_14330dc70;
          *(undefined8 *)(lVar21 + 0xa8 + lVar19) = 0x26;
          plVar13 = (longlong *)(lVar21 + 0xb0 + lVar19);
          *plVar13 = uStack_218;
          plVar13[1] = uStack_210;
          pfVar15 = (float *)(lVar21 + 0xc0 + lVar19);
          *pfVar15 = fVar57;
          pfVar15[1] = fVar58;
          *(float *)(lVar21 + 200 + lVar19) = puStack_140._0_4_;
          *(undefined8 *)(lVar21 + 0xcc + lVar19) = 0x3f8000003f800000;
          *(undefined4 *)(lVar21 + 0xd4 + lVar19) = 0x3f800000;
          *(undefined4 *)(lVar21 + 0xe0 + lVar19) = 1;
          *(int *)(lVar21 + 0xe4 + lVar19) = iStack_1ac;
          *(undefined4 *)(lVar21 + 0xe8 + lVar19) = 0;
          *(float *)(lVar21 + 0xf0 + lVar19) = fVar62;
          *(float *)(lVar21 + 0xf4 + lVar19) = fVar53;
          *(undefined4 *)(lVar21 + 0xf8 + lVar19) = uStack_12c;
          *(undefined4 *)(lVar21 + 0xfc + lVar19) = uStack_128;
          *(float *)(lVar21 + 0x100 + lVar19) = fStack_124;
          *(char *)(lVar21 + 0x104 + lVar19) = (char)uStack_130;
          *(byte *)(lVar21 + 0x105 + lVar19) = bStack_f1;
          *(undefined4 *)(lVar21 + 0x108 + lVar19) = 0;
          *(float *)(lVar21 + 0x11c + lVar19) = fStack_230;
          *(float *)(lVar21 + 0x120 + lVar19) = fVar34;
          *(float *)(lVar21 + 0x124 + lVar19) = (float)uStack_1f8;
          *(undefined8 *)(lVar21 + 0x128 + lVar19) = uVar35;
          *(undefined4 *)(lVar21 + 0x130 + lVar19) = uStack_228;
          *(float *)(lVar21 + 0x134 + lVar19) = fVar45;
          *(undefined4 *)(lVar21 + 0x138 + lVar19) = uStack_224;
          *(undefined8 *)(lVar21 + 0x13c + lVar19) = uVar37;
          *(float *)(lVar21 + 0x144 + lVar19) = fStack_22c;
          *(float *)(lVar21 + 0x148 + lVar19) = fVar46;
          *(float *)(lVar21 + 0x14c + lVar19) = (float)uStack_200;
          *(undefined8 *)(lVar21 + 0x150 + lVar19) = uVar39;
          *(float *)(lVar21 + 0x158 + lVar19) = fVar44;
          *(char *)(lVar21 + 0x15c + lVar19) = (char)uStack_150;
          *(ulonglong *)(lVar21 + 0x164 + lVar19) =
               CONCAT35(uStack_114,CONCAT41(fStack_118,uStack_119));
          *(ulonglong *)(lVar21 + 0x15d + lVar19) =
               CONCAT17(uStack_119,CONCAT52(uStack_11e,CONCAT11(cStack_11f,cStack_120)));
          *(undefined1 *)(lVar21 + 0x16c + lVar19) = 2;
          *(byte *)(lVar21 + 0x16e + lVar19) = bStack_f4;
          *(undefined1 *)(lVar21 + 0x16f + lVar19) = 0;
          plStack_110[0x18] = lVar11 + 1;
        }
      }
      uStack_200 = *(undefined8 *)(&UNK_143016b30 + (longlong)(char)uStack_148 * 8);
      puVar25 = &UNK_1430167ff;
      if (iStack_1ac == 999) {
        puVar25 = &UNK_1430167d4;
      }
      if (*(uint *)pauStack_160[-5] < 2) {
        uStack_1f8 = *(undefined8 *)(&UNK_143016b48 + (longlong)(char)uStack_148 * 8);
        fStack_19c._0_3_ = 0;
        uStack_1a8._0_4_ = (float)((uint)(float)uStack_1a8 & 0xffffff);
        uStack_1a8._4_4_ = 0.0;
        fStack_1a0 = 0.0;
        fStack_118 = 0.0;
        uStack_114 = 0;
        cStack_120 = SUB41((float)uStack_1a8,0);
        cStack_11f = (char)((uint)(float)uStack_1a8 >> 8);
        uStack_11e = (uint5)(ushort)((uint)(float)uStack_1a8 >> 0x10);
        uStack_119 = 0;
        puVar17 = (undefined4 *)pdb_1409014f0(pbStack_100 + -0x28,&UNK_143016890);
        pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,*puVar17);
        uStack_150 = pdb_140df4400(&UNK_14330db74,0xc);
        uVar29 = CONCAT52(uStack_11e,CONCAT11(cStack_11f,cStack_120));
        fStack_1a0 = fStack_118;
        fStack_19c = (float)CONCAT13(fStack_19c._3_1_,uStack_114);
        uStack_1a8._0_4_ = (float)uVar29;
        uStack_1a8._4_4_ = (float)(CONCAT17(uStack_119,uVar29) >> 0x20);
        lVar11 = plStack_110[0x18];
        if (lVar11 == plStack_110[0x16]) {
          pdb_142d8ddd0(plStack_110 + 0x16);
        }
        fVar45 = (float)uStack_210 * (float)uStack_210;
        fVar46 = uStack_210._4_4_ * uStack_210._4_4_;
        fVar44 = uStack_218._4_4_ * uStack_218._4_4_ + (float)uStack_218 * (float)uStack_218;
        fVar34 = (float)uStack_210 * _UNK_143010288 +
                 uStack_218._4_4_ * _UNK_143010284 + (float)uStack_218 * _DAT_143010280;
        fVar34 = fVar34 + fVar34;
        fVar38 = uStack_210._4_4_ + uStack_210._4_4_;
        fVar57 = fVar57 + fVar38 * (uStack_218._4_4_ * _DAT_14300bbe0 - (float)uStack_210 * 0.0) +
                          fVar34 * (float)uStack_218 + (fVar46 - (fVar44 + fVar45)) * _DAT_143010280
        ;
        fVar58 = fVar58 + fVar38 * ((float)uStack_210 * 0.0 - (float)uStack_218 * _DAT_14300bbe0) +
                          fVar34 * uStack_218._4_4_ + (fVar46 - (fVar44 + fVar45)) * _UNK_143010284;
        fVar34 = puStack_140._0_4_ +
                 fVar38 * ((float)uStack_218 * 0.0 - uStack_218._4_4_ * 0.0) +
                 fVar34 * (float)uStack_210 + (fVar46 - (fVar44 + fVar45)) * _UNK_143010288;
        lVar21 = plStack_110[0x17];
        lVar19 = lVar11 * 0x170;
        *(undefined8 *)(lVar21 + lVar19) = 0;
        *(undefined8 *)(lVar21 + 0x10 + lVar19) = 1;
        *(ulonglong *)(lVar21 + 0x18 + lVar19) = uStack_158 * 1000 + uStack_1d0;
        *(undefined8 *)(lVar21 + 0x20 + lVar19) = 1;
        *(undefined8 *)(lVar21 + 0x28 + lVar19) = uStack_150;
        *(undefined8 *)(lVar21 + 0x30 + lVar19) = 0;
        *(undefined4 *)(lVar21 + 0x40 + lVar19) = 0;
        *(undefined4 *)(lVar21 + 0x50 + lVar19) = 0;
        *(undefined4 *)(lVar21 + 0x60 + lVar19) = 0;
        *(undefined4 *)(lVar21 + 0x70 + lVar19) = 2;
        *(undefined8 *)(lVar21 + 0x90 + lVar19) = uStack_1f8;
        *(undefined8 *)(lVar21 + 0x98 + lVar19) = 0x22;
        *(undefined **)(lVar21 + 0xa0 + lVar19) = &UNK_14330db43;
        *(undefined8 *)(lVar21 + 0xa8 + lVar19) = 0x31;
        pfVar15 = (float *)(lVar21 + 0xb0 + lVar19);
        *pfVar15 = (float)uStack_218;
        pfVar15[1] = uStack_218._4_4_;
        pfVar15[2] = (float)uStack_210;
        pfVar15[3] = uStack_210._4_4_;
        pfVar15 = (float *)(lVar21 + 0xc0 + lVar19);
        *pfVar15 = fVar57;
        pfVar15[1] = fVar58;
        puStack_140 = (undefined *)CONCAT44(puStack_140._4_4_,fVar34);
        *(float *)(lVar21 + 200 + lVar19) = fVar34;
        *(undefined8 *)(lVar21 + 0xcc + lVar19) = 0x3f8000003f800000;
        *(undefined4 *)(lVar21 + 0xd4 + lVar19) = 0x3f800000;
        *(undefined4 *)(lVar21 + 0xe0 + lVar19) = 1;
        *(undefined4 *)(lVar21 + 0xe4 + lVar19) = pbStack_100._0_4_;
        *(undefined4 *)(lVar21 + 0xe8 + lVar19) = 0;
        *(undefined1 *)(lVar21 + 0x105 + lVar19) = 2;
        *(undefined4 *)(lVar21 + 0x108 + lVar19) = 0;
        *(undefined1 *)(lVar21 + 0x15c + lVar19) = 2;
        *(ulonglong *)(lVar21 + 0x15d + lVar19) = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
        *(ulonglong *)(lVar21 + 0x164 + lVar19) =
             CONCAT35(fStack_19c._0_3_,CONCAT41(fStack_1a0,uStack_1a8._7_1_));
        *(undefined1 *)(lVar21 + 0x16c + lVar19) = 2;
        *(byte *)(lVar21 + 0x16e + lVar19) = bStack_f4;
        *(undefined1 *)(lVar21 + 0x16f + lVar19) = 0;
        lVar11 = lVar11 + 1;
        plStack_110[0x18] = lVar11;
      }
      else {
        lVar11 = plStack_110[0x18];
      }
      fStack_19c = (float)((uint)fStack_19c & 0xff000000);
      uStack_1a8._0_4_ = (float)((uint)(float)uStack_1a8 & 0xffffff);
      uStack_1a8._4_4_ = 0.0;
      fStack_1a0 = 0.0;
      fStack_118 = 0.0;
      uStack_114 = 0;
      cStack_120 = SUB41((float)uStack_1a8,0);
      cStack_11f = (char)((uint)(float)uStack_1a8 >> 8);
      uStack_11e = (uint5)(ushort)((uint)(float)uStack_1a8 >> 0x10);
      uStack_119 = 0;
      if (lVar11 == plStack_110[0x16]) {
        pdb_142d8ddd0(plStack_110 + 0x16);
      }
      lVar21 = plStack_110[0x17];
      lVar19 = lVar11 * 0x170;
      *(undefined8 *)(lVar21 + lVar19) = 0;
      *(undefined8 *)(lVar21 + 0x10 + lVar19) = 0;
      *(undefined8 *)(lVar21 + 0x20 + lVar19) = 0;
      *(undefined8 *)(lVar21 + 0x30 + lVar19) = 0;
      *(undefined4 *)(lVar21 + 0x40 + lVar19) = 0;
      *(undefined4 *)(lVar21 + 0x50 + lVar19) = 0;
      *(undefined4 *)(lVar21 + 0x60 + lVar19) = 0;
      *(undefined4 *)(lVar21 + 0x70 + lVar19) = 2;
      *(undefined8 *)(lVar21 + 0x90 + lVar19) = uStack_200;
      *(undefined8 *)(lVar21 + 0x98 + lVar19) = 0x1c;
      *(undefined **)(lVar21 + 0xa0 + lVar19) = puVar25;
      *(undefined8 *)(lVar21 + 0xa8 + lVar19) = 0x2b;
      plVar13 = (longlong *)(lVar21 + 0xb0 + lVar19);
      *plVar13 = uStack_218;
      plVar13[1] = uStack_210;
      pfVar15 = (float *)(lVar21 + 0xc0 + lVar19);
      *pfVar15 = fVar57;
      pfVar15[1] = fVar58;
      *(float *)(lVar21 + 200 + lVar19) = puStack_140._0_4_;
      *(undefined8 *)(lVar21 + 0xcc + lVar19) = 0x3f8000003f800000;
      *(undefined4 *)(lVar21 + 0xd4 + lVar19) = 0x3f800000;
      *(undefined4 *)(lVar21 + 0xe0 + lVar19) = 1;
      *(int *)(lVar21 + 0xe4 + lVar19) = iStack_1ac;
      *(undefined4 *)(lVar21 + 0xe8 + lVar19) = 0;
      *(float *)(lVar21 + 0xf0 + lVar19) = fVar62;
      *(float *)(lVar21 + 0xf4 + lVar19) = fVar53;
      *(undefined4 *)(lVar21 + 0xf8 + lVar19) = uStack_12c;
      *(undefined4 *)(lVar21 + 0xfc + lVar19) = uStack_128;
      *(float *)(lVar21 + 0x100 + lVar19) = fStack_124;
      *(undefined1 *)(lVar21 + 0x104 + lVar19) = 0;
      *(byte *)(lVar21 + 0x105 + lVar19) = bStack_f1;
      *(undefined4 *)(lVar21 + 0x108 + lVar19) = 0;
      *(undefined1 *)(lVar21 + 0x15c + lVar19) = 2;
      *(ulonglong *)(lVar21 + 0x164 + lVar19) = CONCAT35(uStack_114,CONCAT41(fStack_118,uStack_119))
      ;
      *(ulonglong *)(lVar21 + 0x15d + lVar19) =
           CONCAT17(uStack_119,CONCAT52(uStack_11e,CONCAT11(cStack_11f,cStack_120)));
      *(undefined1 *)(lVar21 + 0x16c + lVar19) = 2;
      *(byte *)(lVar21 + 0x16e + lVar19) = bStack_f4;
      *(undefined1 *)(lVar21 + 0x16f + lVar19) = 0;
      plStack_110[0x18] = lVar11 + 1;
      cVar7 = pdb_1409012c0(bStack_f2,uStack_208);
      cStack_120 = pdb_140c44ba0(uStack_148);
      cStack_11f = cVar7;
      if (*(longlong *)(pauStack_138[1] + 8) == 0) goto LAB_1408c5228;
      pbVar18 = (byte *)pdb_1413f0300(pauStack_2b8,&cStack_120);
      lVar11 = *(longlong *)*pauStack_138;
      uVar12 = *(ulonglong *)(*pauStack_138 + 8);
      bVar8 = (byte)((ulonglong)pbVar18 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
      auVar36 = pshuflw(auVar36,auVar36,0);
      pbVar28 = (byte *)0x0;
      goto LAB_1408c44d7;
    }
    uVar27 = (ushort)(uVar10 - 1) & (ushort)uVar10;
    uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar27);
  }
  auVar41[0] = -(auVar2[0] == -1);
  auVar41[1] = -(auVar2[1] == -1);
  auVar41[2] = -(auVar2[2] == -1);
  auVar41[3] = -(auVar2[3] == -1);
  auVar41[4] = -(auVar2[4] == -1);
  auVar41[5] = -(auVar2[5] == -1);
  auVar41[6] = -(auVar2[6] == -1);
  auVar41[7] = -(auVar2[7] == -1);
  auVar41[8] = -(auVar2[8] == -1);
  auVar41[9] = -(auVar2[9] == -1);
  auVar41[10] = -(auVar2[10] == -1);
  auVar41[0xb] = -(auVar2[0xb] == -1);
  auVar41[0xc] = -(auVar2[0xc] == -1);
  auVar41[0xd] = -(auVar2[0xd] == -1);
  auVar41[0xe] = -(auVar2[0xe] == -1);
  auVar41[0xf] = -(auVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto LAB_1408c520a;
  uVar14 = uVar14 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_1408c35aa;
LAB_1408c44d7:
  uVar14 = (ulonglong)pbVar18 & uVar12;
  auVar2 = *(undefined1 (*) [16])(lVar11 + uVar14);
  auVar50[0] = -(auVar2[0] == auVar36[0]);
  auVar50[1] = -(auVar2[1] == auVar36[1]);
  auVar50[2] = -(auVar2[2] == auVar36[2]);
  auVar50[3] = -(auVar2[3] == auVar36[3]);
  auVar50[4] = -(auVar2[4] == auVar36[4]);
  auVar50[5] = -(auVar2[5] == auVar36[5]);
  auVar50[6] = -(auVar2[6] == auVar36[6]);
  auVar50[7] = -(auVar2[7] == auVar36[7]);
  auVar50[8] = -(auVar2[8] == auVar36[0]);
  auVar50[9] = -(auVar2[9] == auVar36[1]);
  auVar50[10] = -(auVar2[10] == auVar36[2]);
  auVar50[0xb] = -(auVar2[0xb] == auVar36[3]);
  auVar50[0xc] = -(auVar2[0xc] == auVar36[4]);
  auVar50[0xd] = -(auVar2[0xd] == auVar36[5]);
  auVar50[0xe] = -(auVar2[0xe] == auVar36[6]);
  auVar50[0xf] = -(auVar2[0xf] == auVar36[7]);
  uVar27 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
  uVar10 = (uint)uVar27;
  if (uVar27 != 0) {
    if (cStack_120 == '\x1a') {
      do {
        uVar24 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar23 = uVar24 + uVar14 & uVar12;
        if (*(char *)(lVar11 + -0x48 + uVar23 * -0x48) == '\x1a') goto LAB_1408c458e;
        uVar27 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar27);
      } while (uVar27 != 0);
    }
    else {
      do {
        uVar24 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uVar23 = uVar24 + uVar14 & uVar12;
        cVar7 = *(char *)(lVar11 + -0x48 + uVar23 * -0x48);
        pbStack_100 = pbVar28;
        if (((cVar7 != '\x1a') && (cStack_120 == cVar7)) &&
           (cStack_11f == *(char *)(lVar11 + uVar23 * -0x48 + -0x47))) goto LAB_1408c458e;
        uVar27 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar27);
      } while (uVar27 != 0);
    }
  }
  auVar42[0] = -(auVar2[0] == -1);
  auVar42[1] = -(auVar2[1] == -1);
  auVar42[2] = -(auVar2[2] == -1);
  auVar42[3] = -(auVar2[3] == -1);
  auVar42[4] = -(auVar2[4] == -1);
  auVar42[5] = -(auVar2[5] == -1);
  auVar42[6] = -(auVar2[6] == -1);
  auVar42[7] = -(auVar2[7] == -1);
  auVar42[8] = -(auVar2[8] == -1);
  auVar42[9] = -(auVar2[9] == -1);
  auVar42[10] = -(auVar2[10] == -1);
  auVar42[0xb] = -(auVar2[0xb] == -1);
  auVar42[0xc] = -(auVar2[0xc] == -1);
  auVar42[0xd] = -(auVar2[0xd] == -1);
  auVar42[0xe] = -(auVar2[0xe] == -1);
  auVar42[0xf] = -(auVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') {
LAB_1408c5228:
    uStack_1a8 = &cStack_120;
    fStack_1a0 = 4.3802795;
    fStack_19c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1430164a5,&uStack_1a8,&UNK_1430164d8);
  }
  pbVar18 = pbVar28 + uVar14 + 0x10;
  pbVar28 = pbVar28 + 0x10;
  goto LAB_1408c44d7;
LAB_1408c458e:
  plVar13 = *(longlong **)(lVar11 + -0x28 + uVar23 * -0x48);
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  if (*plVar13 != 0 && SCARRY8(lVar11,1) == *plVar13 < 0) {
    uStack_f3 = 1;
    plStack_250 = plVar13;
    cVar7 = pdb_1409012c0(bStack_f2,uStack_208);
    uStack_f3 = 1;
    cStack_120 = pdb_140c44ba0(uStack_148);
    cStack_11f = cVar7;
    if (*(longlong *)(pauStack_138[4] + 8) != 0) {
      uStack_f3 = 1;
      pbVar18 = (byte *)pdb_1413f0300(pauStack_2b0,&cStack_120);
      lVar11 = *(longlong *)pauStack_138[3];
      uVar12 = *(ulonglong *)(pauStack_138[3] + 8);
      bVar8 = (byte)((ulonglong)pbVar18 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar8,bVar8));
      auVar36 = pshuflw(auVar36,auVar36,0);
      pbVar28 = (byte *)0x0;
      while( true ) {
        uVar14 = (ulonglong)pbVar18 & uVar12;
        auVar2 = *(undefined1 (*) [16])(lVar11 + uVar14);
        auVar51[0] = -(auVar2[0] == auVar36[0]);
        auVar51[1] = -(auVar2[1] == auVar36[1]);
        auVar51[2] = -(auVar2[2] == auVar36[2]);
        auVar51[3] = -(auVar2[3] == auVar36[3]);
        auVar51[4] = -(auVar2[4] == auVar36[4]);
        auVar51[5] = -(auVar2[5] == auVar36[5]);
        auVar51[6] = -(auVar2[6] == auVar36[6]);
        auVar51[7] = -(auVar2[7] == auVar36[7]);
        auVar51[8] = -(auVar2[8] == auVar36[0]);
        auVar51[9] = -(auVar2[9] == auVar36[1]);
        auVar51[10] = -(auVar2[10] == auVar36[2]);
        auVar51[0xb] = -(auVar2[0xb] == auVar36[3]);
        auVar51[0xc] = -(auVar2[0xc] == auVar36[4]);
        auVar51[0xd] = -(auVar2[0xd] == auVar36[5]);
        auVar51[0xe] = -(auVar2[0xe] == auVar36[6]);
        auVar51[0xf] = -(auVar2[0xf] == auVar36[7]);
        uVar27 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf
        ;
        uVar10 = (uint)uVar27;
        if (uVar27 != 0) {
          if (cStack_120 == '\x1a') {
            uStack_1d0 = CONCAT71(uStack_1d0._1_7_,0x1a);
            do {
              uVar24 = 0;
              for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar24 = uVar24 + 1;
              }
              uVar23 = uVar24 + uVar14 & uVar12;
              if (*(char *)(lVar11 + -0x48 + uVar23 * -0x48) == '\x1a') goto LAB_1408c4729;
              uVar27 = (ushort)(uVar10 - 1) & (ushort)uVar10;
              uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar27);
            } while (uVar27 != 0);
          }
          else {
            do {
              uVar24 = 0;
              for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar24 = uVar24 + 1;
              }
              uVar23 = uVar24 + uVar14 & uVar12;
              cVar7 = *(char *)(lVar11 + -0x48 + uVar23 * -0x48);
              pbStack_100 = pbVar28;
              if (((cVar7 != '\x1a') && (cStack_120 == cVar7)) &&
                 (cStack_11f == *(char *)(lVar11 + uVar23 * -0x48 + -0x47))) goto LAB_1408c4729;
              uVar27 = (ushort)(uVar10 - 1) & (ushort)uVar10;
              uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar27);
            } while (uVar27 != 0);
          }
        }
        auVar43[0] = -(auVar2[0] == -1);
        auVar43[1] = -(auVar2[1] == -1);
        auVar43[2] = -(auVar2[2] == -1);
        auVar43[3] = -(auVar2[3] == -1);
        auVar43[4] = -(auVar2[4] == -1);
        auVar43[5] = -(auVar2[5] == -1);
        auVar43[6] = -(auVar2[6] == -1);
        auVar43[7] = -(auVar2[7] == -1);
        auVar43[8] = -(auVar2[8] == -1);
        auVar43[9] = -(auVar2[9] == -1);
        auVar43[10] = -(auVar2[10] == -1);
        auVar43[0xb] = -(auVar2[0xb] == -1);
        auVar43[0xc] = -(auVar2[0xc] == -1);
        auVar43[0xd] = -(auVar2[0xd] == -1);
        auVar43[0xe] = -(auVar2[0xe] == -1);
        auVar43[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x1f,0) & 1) != 0) || (SUB161(auVar43 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
        pbVar18 = pbVar28 + uVar14 + 0x10;
        pbVar28 = pbVar28 + 0x10;
      }
    }
    uStack_1a8 = &cStack_120;
    fStack_1a0 = 4.3802795;
    fStack_19c = 1.4013e-45;
    uStack_f3 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1430164a5,&uStack_1a8,&UNK_1430164f0);
  }
  goto LAB_1408c53bd;
LAB_1408c520a:
  pdb_142dc8110(&UNK_1430163f8,0x16,&UNK_143016650);
  goto LAB_1408c53bd;
LAB_1408c4729:
  pbVar18 = *(byte **)(lVar11 + -0x28 + uVar23 * -0x48);
  LOCK();
  lVar11 = *(longlong *)pbVar18;
  *(longlong *)pbVar18 = *(longlong *)pbVar18 + 1;
  UNLOCK();
  if (*(longlong *)pbVar18 != 0 && SCARRY8(lVar11,1) == *(longlong *)pbVar18 < 0) {
    uStack_102 = 1;
    pbStack_1e0 = pbVar18;
    pbStack_100 = pbVar18;
    pdb_140df4150(&cStack_120,&uStack_278);
    plVar6 = plStack_110;
    fVar46 = fStack_118 * _DAT_142e378e0 * _DAT_142e36f60;
    fVar38 = fStack_118 * _UNK_142e378e4 * _UNK_142e36f64;
    fVar53 = (float)uStack_218;
    fVar34 = uStack_218._4_4_;
    fVar45 = (float)uStack_210;
    fVar62 = (float)uStack_210 * (float)uStack_210;
    fVar66 = uStack_210._4_4_ * uStack_210._4_4_;
    fVar44 = uStack_218._4_4_ * uStack_218._4_4_ + (float)uStack_218 * (float)uStack_218;
    fVar47 = fVar66 - (fVar44 + fVar62);
    fVar65 = fVar66 - (fVar44 + fVar62);
    fVar66 = fVar66 - (fVar44 + fVar62);
    fVar44 = (float)uStack_210 * fVar38 + uStack_218._4_4_ * fVar46 + (float)uStack_218 * fVar46;
    fVar44 = fVar44 + fVar44;
    fVar62 = uStack_210._4_4_ + uStack_210._4_4_;
    uStack_1f0 = CONCAT44(fVar58 + (fVar46 * (float)uStack_210 - fVar38 * (float)uStack_218) *
                                   fVar62 + fVar44 * uStack_218._4_4_ + fVar65 * fVar46,
                          fVar57 + (fVar38 * uStack_218._4_4_ - fVar46 * (float)uStack_210) * fVar62
                                   + fVar44 * (float)uStack_218 + fVar47 * fVar46);
    fStack_1e8 = (fVar46 * (float)uStack_218 - fVar46 * uStack_218._4_4_) * fVar62 +
                 fVar44 * (float)uStack_210 + fVar66 * fVar38 + puStack_140._0_4_;
    uStack_1a8._0_4_ = (float)uStack_218;
    uStack_1a8._4_4_ = uStack_218._4_4_;
    fStack_1a0 = (float)uStack_210;
    fStack_19c = uStack_210._4_4_;
    uStack_102 = 0;
    puVar67 = &uStack_1a8;
    pdb_1408f3120(plStack_110,plVar13,pbStack_100,&uStack_1f0,puVar67);
    uVar68 = (undefined4)((ulonglong)puVar67 >> 0x20);
    if (*plVar6 != 0 || plVar6[1] != 0) goto LAB_1408c52d3;
    plVar6[1] = 0;
    *plVar6 = 1;
    plVar6[2] = uStack_218;
    plVar6[3] = uStack_210;
    *(float *)(plVar6 + 4) = fVar57;
    *(float *)((longlong)plVar6 + 0x24) = fVar58;
    *(float *)(plVar6 + 5) = puStack_140._0_4_;
    *(undefined8 *)((longlong)plVar6 + 0x2c) = 0x3f8000003f800000;
    *(undefined4 *)((longlong)plVar6 + 0x34) = 0x3f800000;
    if ((char)uStack_148 == '\x01') {
      pdb_14007ee60();
      pbVar18 = pub_1406abab0(0x24,4);
      if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x24);
      }
      pbVar18[0] = 0x33;
      pbVar18[1] = 0x33;
      pbVar18[2] = 0x93;
      pbVar18[3] = 0xbe;
      uVar54 = (undefined4)_DAT_1430162f0;
      uVar55 = (undefined4)((ulonglong)_DAT_1430162f0 >> 0x20);
      fVar46 = _DAT_143016300;
      uVar35 = _DAT_1430162e0;
      uVar37 = _UNK_1430162e8;
      uVar39 = _DAT_1430162d0;
      uVar16 = _UNK_1430162d8;
    }
    else if ((int)uStack_158 == 2) {
      pdb_14007ee60();
      pbVar18 = pub_1406abab0(0x24,4);
      if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x24);
      }
      pbVar18[0] = 0x3a;
      pbVar18[1] = 0xb4;
      pbVar18[2] = 200;
      pbVar18[3] = 0xbd;
      uVar54 = (undefined4)_DAT_1430162b0;
      uVar55 = (undefined4)((ulonglong)_DAT_1430162b0 >> 0x20);
      fVar46 = _DAT_1430162c0;
      uVar35 = _DAT_1430162a0;
      uVar37 = _UNK_1430162a8;
      uVar39 = _DAT_143016290;
      uVar16 = _UNK_143016298;
    }
    else {
      if ((int)uStack_158 != 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143016508,0x28,&UNK_143016578);
      }
      pdb_14007ee60();
      pbVar18 = pub_1406abab0(0x24,4);
      if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x24);
      }
      pbVar18[0] = 0x1f;
      pbVar18[1] = 0x85;
      pbVar18[2] = 0x6b;
      pbVar18[3] = 0x3e;
      uVar54 = (undefined4)_DAT_143016270;
      uVar55 = (undefined4)((ulonglong)_DAT_143016270 >> 0x20);
      fVar46 = _DAT_143016280;
      uVar35 = _DAT_143016260;
      uVar37 = _UNK_143016268;
      uVar39 = _DAT_143016250;
      uVar16 = _UNK_143016258;
    }
    *(undefined8 *)(pbVar18 + 4) = uVar35;
    *(undefined8 *)(pbVar18 + 0xc) = uVar37;
    *(undefined8 *)(pbVar18 + 0x14) = uVar39;
    *(undefined8 *)(pbVar18 + 0x1c) = uVar16;
    pbStack_100 = pbVar18;
    puVar17 = (undefined4 *)pdb_140901130(pbStack_168,&UNK_143016948);
    plVar13 = plStack_110;
    fVar38 = (float)puVar17[1];
    uVar1 = *puVar17;
    lVar11 = plStack_110[0x1b];
    if (lVar11 == plStack_110[0x19]) {
      pdb_142d8d5c0(plStack_110 + 0x19);
    }
    lVar21 = plVar13[0x1a];
    *(undefined4 *)(lVar21 + lVar11 * 0x14) = uVar1;
    *(float *)(lVar21 + 4 + lVar11 * 0x14) = fVar46 + fVar38;
    *(ulonglong *)(lVar21 + 8 + lVar11 * 0x14) = CONCAT44(uVar55,uVar54);
    *(undefined1 *)(lVar21 + 0x10 + lVar11 * 0x14) = 0;
    plVar13[0x1b] = lVar11 + 1;
    fVar46 = *(float *)(pbStack_100 + 0xc);
    uVar35 = *(undefined8 *)(pbStack_100 + 0x10);
    puVar17 = (undefined4 *)pdb_140901130(pbStack_168,&UNK_143016948);
    fVar38 = (float)puVar17[1];
    uVar54 = *puVar17;
    lVar11 = plVar13[0x1b];
    if (lVar11 == plVar13[0x19]) {
      pdb_142d8d5c0(plVar13 + 0x19);
    }
    lVar21 = plVar13[0x1a];
    *(undefined4 *)(lVar21 + lVar11 * 0x14) = uVar54;
    *(float *)(lVar21 + 4 + lVar11 * 0x14) = fVar46 + fVar38;
    *(undefined8 *)(lVar21 + 8 + lVar11 * 0x14) = uVar35;
    *(undefined1 *)(lVar21 + 0x10 + lVar11 * 0x14) = 0;
    plVar13[0x1b] = lVar11 + 1;
    fVar46 = *(float *)(pbStack_100 + 0x18);
    uVar35 = *(undefined8 *)(pbStack_100 + 0x1c);
    puVar17 = (undefined4 *)pdb_140901130(pbStack_168,&UNK_143016948);
    fVar38 = (float)puVar17[1];
    uVar54 = *puVar17;
    lVar11 = plVar13[0x1b];
    if (lVar11 == plVar13[0x19]) {
      pdb_142d8d5c0(plVar13 + 0x19);
    }
    lVar21 = plVar13[0x1a];
    *(undefined4 *)(lVar21 + lVar11 * 0x14) = uVar54;
    *(float *)(lVar21 + 4 + lVar11 * 0x14) = fVar46 + fVar38;
    *(undefined8 *)(lVar21 + 8 + lVar11 * 0x14) = uVar35;
    *(undefined1 *)(lVar21 + 0x10 + lVar11 * 0x14) = 0;
    plVar13[0x1b] = lVar11 + 1;
    pub_1406abac0(pbStack_100,0x24,4);
    cVar7 = pdb_1408ff980(puStack_2a0);
    param_3 = pauStack_160;
    if (cVar7 != '\0') {
      puVar17 = (undefined4 *)pdb_140901130(pbStack_168,&UNK_1430168a8);
      uVar54 = *puVar17;
      uVar55 = puVar17[1];
      fVar46 = fVar47 * _DAT_142e378f0;
      fVar38 = fVar66 * _UNK_142e378f8;
      fVar59 = (float)uStack_218 * _DAT_142e378f0;
      fVar60 = uStack_218._4_4_ * _UNK_142e378f4;
      fVar61 = (float)uStack_210 * _UNK_142e378f8;
      fVar44 = fVar53 * _UNK_142e378f4;
      fVar56 = fVar34 * _UNK_142e378f8;
      fVar63 = uStack_218._4_4_ * _UNK_143011b24;
      fVar64 = (float)uStack_210 * _UNK_143011b28;
      pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,1 < *(uint *)param_3[-5]);
      lVar11 = plStack_110[0x24];
      if (lVar11 == plStack_110[0x22]) {
        pdb_142d8a7a0(plStack_110 + 0x22);
      }
      fVar61 = fVar61 + fVar60 + fVar59;
      fVar61 = fVar61 + fVar61;
      lVar21 = plStack_110[0x23];
      lVar19 = lVar11 * 0x20;
      puVar17 = (undefined4 *)(lVar21 + lVar19);
      *puVar17 = uVar54;
      puVar17[1] = uVar55;
      puVar17[2] = (fVar56 + fVar64) * fVar62 + fVar46 + fVar61 * (float)uStack_218;
      puVar17[3] = (fVar44 + fVar63) * fVar62 + fVar38 + fVar61 * (float)uStack_210;
      pfVar15 = (float *)(lVar21 + 0x10 + lVar19);
      *pfVar15 = fVar57;
      pfVar15[1] = fVar58;
      *(float *)(lVar21 + 0x18 + lVar19) = puStack_140._0_4_;
      *(char *)(lVar21 + 0x1c + lVar19) = (char)uStack_148 + '\x02';
      *(undefined1 *)(lVar21 + 0x1d + lVar19) = pbStack_100._0_1_;
      plStack_110[0x24] = lVar11 + 1;
    }
    if (bStack_f2 == 7) {
      if (*(uint *)param_3[-5] < 2) {
        pdb_140df4150(auStack_298);
        uVar54 = (undefined4)(in_stack_fffffffffffffcb0 >> 0x20);
        uVar55 = (undefined4)((ulonglong)in_stack_fffffffffffffcb8 >> 0x20);
        if (0.0 < (float)auStack_298[0]) {
          auStack_298[0] = *(undefined8 *)(&UNK_1430168b8 + uStack_158 * 8);
          pdb_140901130(pbStack_168,&UNK_143016918);
          pdb_140901130(pbStack_168,&UNK_143016930);
          pdb_140c428e0(uStack_158);
          pdb_140c428a0(&uStack_1a8);
          lVar11 = plStack_110[0x1e];
          if (lVar11 == plStack_110[0x1c]) {
            pdb_142d8a7a0(plStack_110 + 0x1c);
          }
          lVar21 = plStack_110[0x1d];
          puVar67 = (undefined8 *)(lVar21 + 0x10 + lVar11 * 0x20);
          *puVar67 = CONCAT44(fStack_194,fStack_198);
          puVar67[1] = CONCAT44(uStack_18c,CONCAT22(uStack_18e,uStack_190));
          puVar67 = (undefined8 *)(lVar21 + lVar11 * 0x20);
          *puVar67 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
          puVar67[1] = CONCAT44(fStack_19c,fStack_1a0);
          plStack_110[0x1e] = lVar11 + 1;
          pdb_140df4150(&pbStack_1e0,&uStack_278);
          pbStack_1e0 = (byte *)CONCAT44((float)((ulonglong)pbStack_1e0 >> 0x20) + 0.0,
                                         SUB84(pbStack_1e0,0) + 0.0);
          fStack_1d8 = 1.13;
          pdb_140df4540(&uStack_1a8,&uStack_270,
                        ((float)uStack_260 + uStack_260._4_4_) * _DAT_142e36f50);
          fVar46 = (float)uStack_210 * _UNK_142e378f8 +
                   uStack_218._4_4_ * _UNK_142e378f4 + (float)uStack_218 * _DAT_142e378f0;
          fVar46 = fVar46 + fVar46;
          fVar34 = fVar62 * ((float)uStack_210 * _UNK_142f46978 + fVar34 * _UNK_142e378f8) +
                   fVar46 * (float)uStack_218 + fVar47 * _DAT_142e378f0;
          fVar53 = fVar62 * (uStack_218._4_4_ * _UNK_142f46974 + fVar53 * _UNK_142e378f4) +
                   fVar46 * (float)uStack_210 + fVar66 * _UNK_142e378f8;
          lVar11 = (ulonglong)(byte)((char)uStack_148 - 1) * 4;
          fStack_1e8 = puStack_140._0_4_ + uStack_1a8._4_4_ * _DAT_142e378e0 +
                       fVar53 * _DAT_142e36f50 * _DAT_142e36f50;
          uStack_1f0 = CONCAT44((fVar62 * ((float)uStack_218 * _DAT_142f46970 +
                                          fVar45 * _DAT_142e378f0) +
                                fVar46 * uStack_218._4_4_ + fVar65 * _UNK_142e378f4) *
                                _UNK_142e36f64 * _UNK_142e36f64 +
                                fVar58 + uStack_1a8._4_4_ * _UNK_142e378e4,
                                fVar34 * _DAT_142e36f60 * _DAT_142e36f60 +
                                fVar57 + uStack_1a8._4_4_ * _DAT_142e378e0);
          fStack_118 = fStack_1d8;
          cStack_120 = (char)pbStack_1e0;
          cStack_11f = (char)((ulonglong)pbStack_1e0 >> 8);
          uStack_11e = (uint5)((ulonglong)pbStack_1e0 >> 0x10);
          uStack_119 = (undefined1)((ulonglong)pbStack_1e0 >> 0x38);
          in_stack_fffffffffffffcb8 = CONCAT44(uVar55,*(undefined4 *)(&UNK_143016b68 + lVar11));
          in_stack_fffffffffffffcb0 = CONCAT44(uVar54,fVar53);
          pdb_140c17730(&uStack_1a8,*(undefined4 *)(param_3[-4] + 0xc),&uStack_1f0,&cStack_120,
                        CONCAT44(uVar68,fVar34),in_stack_fffffffffffffcb0,in_stack_fffffffffffffcb8,
                        *(undefined4 *)(&UNK_143016b74 + lVar11));
          lVar11 = plStack_110[0x21];
          if (lVar11 == plStack_110[0x1f]) {
            pdb_142d8d630(plStack_110 + 0x1f);
          }
          lVar21 = plStack_110[0x20];
          lVar19 = lVar11 * 0x30;
          puVar67 = (undefined8 *)(lVar21 + 0x20 + lVar19);
          *puVar67 = CONCAT44(uStack_184,fStack_188);
          puVar67[1] = CONCAT44(fStack_17c,fStack_180);
          puVar67 = (undefined8 *)(lVar21 + 0x10 + lVar19);
          *puVar67 = CONCAT44(fStack_194,fStack_198);
          puVar67[1] = CONCAT44(uStack_18c,CONCAT22(uStack_18e,uStack_190));
          *(undefined8 *)(lVar21 + lVar19) = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
          ((undefined8 *)(lVar21 + lVar19))[1] = CONCAT44(fStack_19c,fStack_1a0);
          plStack_110[0x21] = lVar11 + 1;
        }
      }
    }
    else {
      pdb_140df4150(auStack_288);
      if (0.0 < (float)auStack_288[0]) {
        auStack_288[0] = *(undefined8 *)(&UNK_1430168b8 + uStack_158 * 8);
        pdb_140901130(pbStack_168,&UNK_1430168e8);
        pdb_140901130(pbStack_168,&UNK_143016900);
        pdb_140c428e0(uStack_158);
        in_stack_fffffffffffffcb0 = in_stack_fffffffffffffcb0 & 0xffffffffffffff00;
        pdb_140c428a0(&uStack_1a8);
        lVar11 = plStack_110[0x1e];
        if (lVar11 == plStack_110[0x1c]) {
          pdb_142d8a7a0(plStack_110 + 0x1c);
        }
        lVar21 = plStack_110[0x1d];
        puVar67 = (undefined8 *)(lVar21 + 0x10 + lVar11 * 0x20);
        *puVar67 = CONCAT44(fStack_194,fStack_198);
        puVar67[1] = CONCAT44(uStack_18c,CONCAT22(uStack_18e,uStack_190));
        puVar67 = (undefined8 *)(lVar21 + lVar11 * 0x20);
        *puVar67 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
        puVar67[1] = CONCAT44(fStack_19c,fStack_1a0);
        plStack_110[0x1e] = lVar11 + 1;
      }
    }
    goto LAB_1408c33fb;
  }
LAB_1408c53bd:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

