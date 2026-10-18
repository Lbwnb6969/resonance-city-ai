// VA 0x1422f94a0, PDB extent 8155 bytes
// toolbar::mei::widgets::ScrollingListView::with_items_undecorated<toolbar::menu::missing_mods::ui::closure$3::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::ScrollingListView::with_items_undecorated<toolbar::menu::missing_mods::ui::closure$3::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 8155 */

longlong pdb_1422f94a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 uVar4;
  byte ***pppbVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code ***pppcVar13;
  byte ****ppppbVar14;
  code ***pppcVar15;
  code ***pppcVar16;
  code ***pppcVar17;
  code ***pppcVar18;
  byte ****ppppbVar19;
  byte bVar20;
  longlong lVar21;
  longlong lVar22;
  int *piVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte ***pppbVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  byte ****ppppbVar29;
  byte ****ppppbVar30;
  longlong lVar31;
  ushort uVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined8 unaff_R12;
  byte ****ppppbVar35;
  undefined8 unaff_R13;
  uint uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
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
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  undefined1 unaff_XMM11_Ba;
  char cVar70;
  undefined1 unaff_XMM11_Bb;
  char cVar71;
  undefined1 unaff_XMM11_Bc;
  char cVar72;
  undefined1 unaff_XMM11_Bd;
  char cVar73;
  undefined1 unaff_XMM11_Be;
  char cVar74;
  undefined1 unaff_XMM11_Bf;
  char cVar75;
  undefined1 unaff_XMM11_Bg;
  char cVar76;
  undefined1 unaff_XMM11_Bh;
  char cVar77;
  undefined1 unaff_XMM11_Bi;
  char cVar78;
  undefined1 unaff_XMM11_Bj;
  char cVar79;
  undefined1 unaff_XMM11_Bk;
  char cVar80;
  undefined1 unaff_XMM11_Bl;
  char cVar81;
  undefined1 unaff_XMM11_Bm;
  char cVar82;
  undefined1 unaff_XMM11_Bn;
  char cVar83;
  undefined1 unaff_XMM11_Bo;
  char cVar84;
  undefined1 unaff_XMM11_Bp;
  char cVar85;
  undefined1 auStack_230 [8];
  code ***pppcStack_228;
  code ***pppcStack_218;
  longlong *plStack_210;
  longlong lStack_208;
  longlong *plStack_200;
  code ***pppcStack_1f8;
  code ***pppcStack_1f0;
  code ***pppcStack_1e8;
  code ***pppcStack_1e0;
  code ***pppcStack_1d8;
  code ***pppcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  code **ppcStack_1a8;
  undefined8 uStack_1a0;
  code ***pppcStack_198;
  code ***pppcStack_190;
  code ***pppcStack_188;
  longlong lStack_180;
  longlong *plStack_178;
  undefined8 uStack_170;
  code ***pppcStack_168;
  code ***pppcStack_160;
  code ***pppcStack_158;
  code ***pppcStack_148;
  code ***pppcStack_140;
  code ***pppcStack_138;
  code ***pppcStack_130;
  code ***pppcStack_128;
  code ***pppcStack_120;
  code ***pppcStack_118;
  byte ****ppppbStack_108;
  code ***pppcStack_100;
  byte ****ppppbStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_50;
  
  uStack_e0 = 0xfffffffffffffffe;
  lVar21 = pdb_14116e5a0();
  fVar40 = _DAT_142fa5b20;
  fVar69 = _DAT_142e37878;
  fVar37 = *(float *)(lVar21 + 0x28) + _DAT_142e37878;
  fVar39 = (float)*(ulonglong *)(lVar21 + 0x20) * fVar37 + _DAT_142fa5b20;
  if (fVar39 <= 0.0) {
    fVar39 = 0.0;
  }
  fVar39 = fVar39 - (fVar37 * (float)*(ulonglong *)(lVar21 + 0x18) + _DAT_142fa5b20);
  fVar37 = 0.0;
  if (0.0 <= *(float *)(lVar21 + 0x30)) {
    fVar37 = *(float *)(lVar21 + 0x30);
  }
  if (fVar39 <= 0.0) {
    fVar39 = 0.0;
  }
  if (fVar37 <= fVar39) {
    fVar39 = fVar37;
  }
  *(float *)(lVar21 + 0x30) = fVar39;
  pdb_140de9710(lVar21 + 0x2c);
  uVar36 = -(uint)((float)((uint)(*(float *)(lVar21 + 0x2c) - *(float *)(lVar21 + 0x30)) &
                          _DAT_142e377e0) < _DAT_142e3b1d8);
  ppppbVar30 = *(byte *****)(lVar21 + 0x20);
  fVar37 = (float)(~uVar36 & (uint)*(float *)(lVar21 + 0x2c) |
                  (uint)*(float *)(lVar21 + 0x30) & uVar36);
  fVar69 = fVar69 + *(float *)(lVar21 + 0x28);
  fVar39 = (float)ppppbVar30 * fVar69 + fVar40;
  if (fVar39 <= 0.0) {
    fVar39 = 0.0;
  }
  fVar40 = (float)*(ulonglong *)(lVar21 + 0x18) * fVar69 + fVar40;
  fVar39 = fVar39 - fVar40;
  if (fVar39 <= 0.0) {
    fVar39 = 0.0;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar37) {
    fVar10 = fVar37;
  }
  if (fVar10 <= fVar39) {
    fVar39 = fVar10;
  }
  *(float *)(lVar21 + 0x2c) = fVar39;
  fVar37 = fVar39 / fVar69;
  if (fVar37 <= 0.0) {
    fVar37 = 0.0;
  }
  uVar28 = (longlong)(fVar37 - _DAT_142e36f2c) & (longlong)fVar37 >> 0x3f | (longlong)fVar37;
  if (fVar37 < 0.0) {
    uVar28 = 0;
  }
  if (_DAT_142e36f30 < fVar37) {
    uVar28 = 0xffffffffffffffff;
  }
  ppppbVar29 = (byte ****)((uVar28 - 1) + (ulonglong)(uVar28 == 0));
  fVar40 = (fVar40 + fVar39) / fVar69;
  uVar28 = (longlong)(fVar40 - _DAT_142e36f2c) & (longlong)fVar40 >> 0x3f | (longlong)fVar40;
  if (fVar40 < 0.0) {
    uVar28 = 0;
  }
  if (_DAT_142e36f30 < fVar40) {
    uVar28 = 0xffffffffffffffff;
  }
  ppppbVar35 = (byte ****)(uVar28 + 2);
  if (ppppbVar30 < (byte ****)(uVar28 + 2)) {
    ppppbVar35 = ppppbVar30;
  }
  lVar22 = pdb_141172a70(param_1);
  lVar21 = *param_1;
  if (*(longlong *)(lVar21 + 0x1c8) != 0) {
    uVar4 = *(undefined4 *)(lVar22 + 0x28);
    plVar1 = param_1 + 1;
    uVar28 = pdb_1400af0a0(lVar21 + 0x1d0,plVar1);
    lVar22 = *(longlong *)(lVar21 + 0x1b0);
    bVar20 = (byte)(uVar28 >> 0x39);
    auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar38 = pshuflw(auVar38,auVar38,0);
    lVar31 = 0;
    while( true ) {
      uVar28 = uVar28 & *(ulonglong *)(lVar21 + 0x1b8);
      auVar57 = *(undefined1 (*) [16])(lVar22 + uVar28);
      auVar66[0] = -(auVar57[0] == auVar38[0]);
      auVar66[1] = -(auVar57[1] == auVar38[1]);
      auVar66[2] = -(auVar57[2] == auVar38[2]);
      auVar66[3] = -(auVar57[3] == auVar38[3]);
      auVar66[4] = -(auVar57[4] == auVar38[4]);
      auVar66[5] = -(auVar57[5] == auVar38[5]);
      auVar66[6] = -(auVar57[6] == auVar38[6]);
      auVar66[7] = -(auVar57[7] == auVar38[7]);
      auVar66[8] = -(auVar57[8] == auVar38[0]);
      auVar66[9] = -(auVar57[9] == auVar38[1]);
      auVar66[10] = -(auVar57[10] == auVar38[2]);
      auVar66[0xb] = -(auVar57[0xb] == auVar38[3]);
      auVar66[0xc] = -(auVar57[0xc] == auVar38[4]);
      auVar66[0xd] = -(auVar57[0xd] == auVar38[5]);
      auVar66[0xe] = -(auVar57[0xe] == auVar38[6]);
      auVar66[0xf] = -(auVar57[0xf] == auVar38[7]);
      uVar32 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar36 = (uint)uVar32;
      while (uVar32 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar33 = (uVar7 + uVar28 & *(ulonglong *)(lVar21 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar22 + -0xd8 + lVar33)) {
          lVar22 = lVar22 + lVar33;
          *(undefined4 *)(lVar22 + -0x7c) = 0;
          *(float *)(lVar22 + -0x78) = fVar69 * (float)ppppbVar29 - fVar39;
          piVar23 = (int *)pdb_141172a70(param_1);
          if (*piVar23 == 1) {
            lVar21 = *param_1;
            if (*(longlong *)(lVar21 + 0x1c8) == 0) goto LAB_1422faf99;
            ppppbVar30 = *(byte *****)(piVar23 + 2);
            uVar28 = pdb_1400af0a0(lVar21 + 0x1d0,plVar1);
            lVar22 = *(longlong *)(lVar21 + 0x1b0);
            bVar20 = (byte)(uVar28 >> 0x39);
            auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
            auVar38 = pshuflw(auVar38,auVar38,0);
            lVar31 = 0;
            goto LAB_1422f9895;
          }
          lVar21 = *param_1;
          if (*(longlong *)(lVar21 + 0x1c8) == 0) goto LAB_1422faf99;
          uVar28 = pdb_1400af0a0(lVar21 + 0x1d0,plVar1);
          lVar22 = *(longlong *)(lVar21 + 0x1b0);
          bVar20 = (byte)(uVar28 >> 0x39);
          auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
          auVar38 = pshuflw(auVar38,auVar38,0);
          lVar31 = 0;
          goto LAB_1422f9950;
        }
        uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
        uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
      }
      auVar52[0] = -(auVar57[0] == -1);
      auVar52[1] = -(auVar57[1] == -1);
      auVar52[2] = -(auVar57[2] == -1);
      auVar52[3] = -(auVar57[3] == -1);
      auVar52[4] = -(auVar57[4] == -1);
      auVar52[5] = -(auVar57[5] == -1);
      auVar52[6] = -(auVar57[6] == -1);
      auVar52[7] = -(auVar57[7] == -1);
      auVar52[8] = -(auVar57[8] == -1);
      auVar52[9] = -(auVar57[9] == -1);
      auVar52[10] = -(auVar57[10] == -1);
      auVar52[0xb] = -(auVar57[0xb] == -1);
      auVar52[0xc] = -(auVar57[0xc] == -1);
      auVar52[0xd] = -(auVar57[0xd] == -1);
      auVar52[0xe] = -(auVar57[0xe] == -1);
      auVar52[0xf] = -(auVar57[0xf] == -1);
      if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar52 >> 0x17,0) & 1) != 0) || (SUB161(auVar52 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar52 >> 0x27,0) & 1) != 0) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar52 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar52 >> 0x3f,0) & 1) != 0) || (SUB161(auVar52 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar52 >> 0x4f,0) & 1) != 0) || (SUB161(auVar52 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar52 >> 0x5f,0) & 1) != 0) || (SUB161(auVar52 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar52 >> 0x6f,0) & 1) != 0) || (SUB161(auVar52 >> 0x77,0) & 1) != 0) ||
          auVar52[0xf] < '\0') break;
      uVar28 = uVar28 + lVar31 + 0x10;
      lVar31 = lVar31 + 0x10;
    }
  }
LAB_1422faf99:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
LAB_1422f9950:
  uVar28 = uVar28 & *(ulonglong *)(lVar21 + 0x1b8);
  auVar57 = *(undefined1 (*) [16])(lVar22 + uVar28);
  auVar68[0] = -(auVar57[0] == auVar38[0]);
  auVar68[1] = -(auVar57[1] == auVar38[1]);
  auVar68[2] = -(auVar57[2] == auVar38[2]);
  auVar68[3] = -(auVar57[3] == auVar38[3]);
  auVar68[4] = -(auVar57[4] == auVar38[4]);
  auVar68[5] = -(auVar57[5] == auVar38[5]);
  auVar68[6] = -(auVar57[6] == auVar38[6]);
  auVar68[7] = -(auVar57[7] == auVar38[7]);
  auVar68[8] = -(auVar57[8] == auVar38[0]);
  auVar68[9] = -(auVar57[9] == auVar38[1]);
  auVar68[10] = -(auVar57[10] == auVar38[2]);
  auVar68[0xb] = -(auVar57[0xb] == auVar38[3]);
  auVar68[0xc] = -(auVar57[0xc] == auVar38[4]);
  auVar68[0xd] = -(auVar57[0xd] == auVar38[5]);
  auVar68[0xe] = -(auVar57[0xe] == auVar38[6]);
  auVar68[0xf] = -(auVar57[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar33 = (uVar7 + uVar28 & *(ulonglong *)(lVar21 + 0x1b8)) * -0xd8;
    if (*plVar1 == *(longlong *)(lVar22 + -0xd8 + lVar33)) {
      pbVar2 = (byte *)(lVar22 + lVar33 + -5);
      *pbVar2 = *pbVar2 & 0x5f;
      if (ppppbVar35 <= ppppbVar29) goto code_r0x00014116e5a0;
      goto LAB_1422f99e0;
    }
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  auVar54[0] = -(auVar57[0] == -1);
  auVar54[1] = -(auVar57[1] == -1);
  auVar54[2] = -(auVar57[2] == -1);
  auVar54[3] = -(auVar57[3] == -1);
  auVar54[4] = -(auVar57[4] == -1);
  auVar54[5] = -(auVar57[5] == -1);
  auVar54[6] = -(auVar57[6] == -1);
  auVar54[7] = -(auVar57[7] == -1);
  auVar54[8] = -(auVar57[8] == -1);
  auVar54[9] = -(auVar57[9] == -1);
  auVar54[10] = -(auVar57[10] == -1);
  auVar54[0xb] = -(auVar57[0xb] == -1);
  auVar54[0xc] = -(auVar57[0xc] == -1);
  auVar54[0xd] = -(auVar57[0xd] == -1);
  auVar54[0xe] = -(auVar57[0xe] == -1);
  auVar54[0xf] = -(auVar57[0xf] == -1);
  if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') goto LAB_1422faf99;
  uVar28 = uVar28 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_1422f9950;
LAB_1422f9def:
  uVar28 = uVar28 & (ulonglong)pppbVar5;
  auVar57 = *(undefined1 (*) [16])((longlong)pppbVar26 + uVar28);
  auVar56[0] = -(auVar57[0] == auVar38[0]);
  auVar56[1] = -(auVar57[1] == auVar38[1]);
  auVar56[2] = -(auVar57[2] == auVar38[2]);
  auVar56[3] = -(auVar57[3] == auVar38[3]);
  auVar56[4] = -(auVar57[4] == auVar38[4]);
  auVar56[5] = -(auVar57[5] == auVar38[5]);
  auVar56[6] = -(auVar57[6] == auVar38[6]);
  auVar56[7] = -(auVar57[7] == auVar38[7]);
  auVar56[8] = -(auVar57[8] == auVar38[0]);
  auVar56[9] = -(auVar57[9] == auVar38[1]);
  auVar56[10] = -(auVar57[10] == auVar38[2]);
  auVar56[0xb] = -(auVar57[0xb] == auVar38[3]);
  auVar56[0xc] = -(auVar57[0xc] == auVar38[4]);
  auVar56[0xd] = -(auVar57[0xd] == auVar38[5]);
  auVar56[0xe] = -(auVar57[0xe] == auVar38[6]);
  auVar56[0xf] = -(auVar57[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
    lVar31 = uVar34 * -0xd8;
    if (pppcStack_120 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) {
      pppbVar26[uVar34 * -0x1b + -0x15] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x14] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x17] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x16] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x13] = (byte **)0x417fbe7700000000;
      pppbVar26[uVar34 * -0x1b + -0x12] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x11] = (byte **)0x0;
      *(undefined8 *)((longlong)pppbVar26 + lVar31 + -0x82) = 0;
      *(undefined8 *)((longlong)pppbVar26 + lVar31 + -0x7a) = 0;
      *(undefined2 *)((longlong)pppbVar26 + lVar31 + -0x72) = 2;
      pppcStack_1e8 = pppcStack_118;
      pppcStack_1f8 = pppcStack_128;
      pppcStack_1f0 = pppcStack_120;
      pdb_140737280(&pppcStack_128,*(undefined8 *)(lVar21 + 8),*(undefined8 *)(lVar21 + 0x10));
      pppcVar17 = pppcStack_118;
      pppcStack_130 = pppcStack_120;
      pppcStack_198 = pppcStack_120;
      pppcStack_190 = pppcStack_118;
      ppppbStack_108 = (byte ****)pdb_140bbbcb0(&pppcStack_198);
      ppppbVar14 = _UNK_14329c268;
      pppcVar13 = _DAT_14329c260;
      pppcStack_100 = _DAT_14329c260;
      ppppbStack_f8 = _UNK_14329c268;
      pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
      ppppbStack_108 = (byte ****)pppcStack_1f0;
      uVar24 = pdb_1400b0130(&ppppbStack_108);
      pdb_14072caa0(&ppppbStack_108,&pppcStack_1f8,uVar24);
      uVar24 = pdb_14116ee90(&ppppbStack_108,0);
      pdb_14119b6b0(uVar24,pppcStack_130,pppcVar17);
      pppcStack_138 = (code ***)ppppbStack_f8;
      pppcStack_148 = (code ***)ppppbStack_108;
      pppcStack_140 = pppcStack_100;
      uVar24 = pdb_14116e180(&pppcStack_148);
      pdb_14119b2b0(uVar24,uVar12);
      ppppbStack_f8 = (byte ****)pppcStack_138;
      ppppbStack_108 = (byte ****)pppcStack_148;
      pppcStack_100 = pppcStack_140;
      uVar24 = pdb_14116e180(&ppppbStack_108);
      pdb_140cb5df0(uVar24,uVar11);
      ppppbVar19 = ppppbStack_108;
      pppcStack_168 = (code ***)ppppbStack_108;
      pppcStack_160 = pppcStack_100;
      pppcStack_158 = (code ***)ppppbStack_f8;
      if (ppppbStack_108[0x39] == (byte ***)0x0) goto LAB_1422fb03f;
      uVar28 = pdb_1400af0a0(ppppbStack_108 + 0x3a,&pppcStack_160);
      pppbVar26 = ppppbVar19[0x36];
      pppbVar5 = ppppbVar19[0x37];
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar38 = pshuflw(auVar38,auVar38,0);
      lVar22 = 0;
      goto LAB_1422fa036;
    }
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  auVar42[0] = -(auVar57[0] == cVar70);
  auVar42[1] = -(auVar57[1] == cVar71);
  auVar42[2] = -(auVar57[2] == cVar72);
  auVar42[3] = -(auVar57[3] == cVar73);
  auVar42[4] = -(auVar57[4] == cVar74);
  auVar42[5] = -(auVar57[5] == cVar75);
  auVar42[6] = -(auVar57[6] == cVar76);
  auVar42[7] = -(auVar57[7] == cVar77);
  auVar42[8] = -(auVar57[8] == cVar78);
  auVar42[9] = -(auVar57[9] == cVar79);
  auVar42[10] = -(auVar57[10] == cVar80);
  auVar42[0xb] = -(auVar57[0xb] == cVar81);
  auVar42[0xc] = -(auVar57[0xc] == cVar82);
  auVar42[0xd] = -(auVar57[0xd] == cVar83);
  auVar42[0xe] = -(auVar57[0xe] == cVar84);
  auVar42[0xf] = -(auVar57[0xf] == cVar85);
  if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') goto LAB_1422fb032;
  uVar28 = uVar28 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1422f9def;
LAB_1422fa036:
  uVar28 = uVar28 & (ulonglong)pppbVar5;
  pcVar3 = (char *)((longlong)pppbVar26 + uVar28);
  auVar57[0] = -(*pcVar3 == auVar38[0]);
  auVar57[1] = -(pcVar3[1] == auVar38[1]);
  auVar57[2] = -(pcVar3[2] == auVar38[2]);
  auVar57[3] = -(pcVar3[3] == auVar38[3]);
  auVar57[4] = -(pcVar3[4] == auVar38[4]);
  auVar57[5] = -(pcVar3[5] == auVar38[5]);
  auVar57[6] = -(pcVar3[6] == auVar38[6]);
  auVar57[7] = -(pcVar3[7] == auVar38[7]);
  auVar57[8] = -(pcVar3[8] == auVar38[0]);
  auVar57[9] = -(pcVar3[9] == auVar38[1]);
  auVar57[10] = -(pcVar3[10] == auVar38[2]);
  auVar57[0xb] = -(pcVar3[0xb] == auVar38[3]);
  auVar57[0xc] = -(pcVar3[0xc] == auVar38[4]);
  auVar57[0xd] = -(pcVar3[0xd] == auVar38[5]);
  auVar57[0xe] = -(pcVar3[0xe] == auVar38[6]);
  auVar57[0xf] = -(pcVar3[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
    if (pppcStack_160 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) {
      pbVar2 = (byte *)((longlong)pppbVar26 + uVar34 * -0xd8 + -5);
      *pbVar2 = *pbVar2 | 2;
      if ((byte ****)pppcStack_128 != (byte ****)0x0) {
        pub_1406abac0((byte *)pppcStack_130,(ulonglong)pppcStack_128,1);
      }
      pppcVar17 = pppcStack_228;
      pppcStack_148 = (code ***)&UNK_1434d6d39;
      pppcStack_140 = (code ***)0xd;
      ppppbStack_108 = (byte ****)pdb_140bbbcb0(&pppcStack_148);
      pppcStack_100 = pppcVar16;
      ppppbStack_f8 = ppppbVar30;
      pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
      ppppbStack_108 = (byte ****)pppcVar17;
      uVar24 = pdb_1400b0130(&ppppbStack_108);
      pdb_14072caa0(&pppcStack_128,auStack_230,uVar24);
      pppcVar17 = pppcStack_128;
      if ((byte ***)pppcStack_128[0x39] == (byte ***)0x0) goto LAB_1422fb032;
      uVar28 = pdb_1400af0a0(pppcStack_128 + 0x3a,&pppcStack_120);
      pppcVar18 = pppcStack_120;
      pppbVar26 = (byte ***)pppcVar17[0x36];
      pppbVar5 = (byte ***)pppcVar17[0x37];
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar38 = pshuflw(auVar38,auVar38,0);
      lVar22 = 0;
      goto LAB_1422fa5c2;
    }
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  auVar43[0] = -(*pcVar3 == cVar70);
  auVar43[1] = -(pcVar3[1] == cVar71);
  auVar43[2] = -(pcVar3[2] == cVar72);
  auVar43[3] = -(pcVar3[3] == cVar73);
  auVar43[4] = -(pcVar3[4] == cVar74);
  auVar43[5] = -(pcVar3[5] == cVar75);
  auVar43[6] = -(pcVar3[6] == cVar76);
  auVar43[7] = -(pcVar3[7] == cVar77);
  auVar43[8] = -(pcVar3[8] == cVar78);
  auVar43[9] = -(pcVar3[9] == cVar79);
  auVar43[10] = -(pcVar3[10] == cVar80);
  auVar43[0xb] = -(pcVar3[0xb] == cVar81);
  auVar43[0xc] = -(pcVar3[0xc] == cVar82);
  auVar43[0xd] = -(pcVar3[0xd] == cVar83);
  auVar43[0xe] = -(pcVar3[0xe] == cVar84);
  auVar43[0xf] = -(pcVar3[0xf] == cVar85);
  if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar43 >> 0x17,0) & 1) != 0) || (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar43 >> 0x27,0) & 1) != 0) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') {
LAB_1422fb03f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar28 = uVar28 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1422fa036;
LAB_1422fa5c2:
  uVar28 = uVar28 & (ulonglong)pppbVar5;
  auVar57 = *(undefined1 (*) [16])((longlong)pppbVar26 + uVar28);
  auVar58[0] = -(auVar57[0] == auVar38[0]);
  auVar58[1] = -(auVar57[1] == auVar38[1]);
  auVar58[2] = -(auVar57[2] == auVar38[2]);
  auVar58[3] = -(auVar57[3] == auVar38[3]);
  auVar58[4] = -(auVar57[4] == auVar38[4]);
  auVar58[5] = -(auVar57[5] == auVar38[5]);
  auVar58[6] = -(auVar57[6] == auVar38[6]);
  auVar58[7] = -(auVar57[7] == auVar38[7]);
  auVar58[8] = -(auVar57[8] == auVar38[0]);
  auVar58[9] = -(auVar57[9] == auVar38[1]);
  auVar58[10] = -(auVar57[10] == auVar38[2]);
  auVar58[0xb] = -(auVar57[0xb] == auVar38[3]);
  auVar58[0xc] = -(auVar57[0xc] == auVar38[4]);
  auVar58[0xd] = -(auVar57[0xd] == auVar38[5]);
  auVar58[0xe] = -(auVar57[0xe] == auVar38[6]);
  auVar58[0xf] = -(auVar57[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
    if (pppcStack_120 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) {
      pppbVar26[uVar34 * -0x1b + -0x11] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x10] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x13] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x12] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x15] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x14] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x17] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x16] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0xf] = (byte **)0x403000100000000;
      pppcStack_188 = pppcStack_118;
      pppcStack_198 = pppcStack_128;
      pppcStack_190 = pppcStack_120;
      pppcStack_148 = (code ***)&UNK_1434d6d46;
      pppcStack_140 = (code ***)0x7;
      ppppbStack_108 = (byte ****)pdb_140bbbcb0(&pppcStack_148);
      pppcStack_100 = pppcVar16;
      ppppbStack_f8 = ppppbVar30;
      pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
      ppppbStack_108 = (byte ****)pppcVar18;
      uVar24 = pdb_1400b0130(&ppppbStack_108);
      pdb_14072caa0(&pppcStack_128,&pppcStack_198,uVar24);
      pppcVar16 = pppcStack_128;
      if ((byte ***)pppcStack_128[0x39] == (byte ***)0x0) goto LAB_1422fb032;
      uVar28 = pdb_1400af0a0(pppcStack_128 + 0x3a,&pppcStack_120);
      pppbVar26 = (byte ***)pppcVar16[0x36];
      pppbVar5 = (byte ***)pppcVar16[0x37];
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar38 = pshuflw(auVar38,auVar38,0);
      lVar22 = 0;
      goto LAB_1422fa733;
    }
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  auVar44[0] = -(auVar57[0] == cVar70);
  auVar44[1] = -(auVar57[1] == cVar71);
  auVar44[2] = -(auVar57[2] == cVar72);
  auVar44[3] = -(auVar57[3] == cVar73);
  auVar44[4] = -(auVar57[4] == cVar74);
  auVar44[5] = -(auVar57[5] == cVar75);
  auVar44[6] = -(auVar57[6] == cVar76);
  auVar44[7] = -(auVar57[7] == cVar77);
  auVar44[8] = -(auVar57[8] == cVar78);
  auVar44[9] = -(auVar57[9] == cVar79);
  auVar44[10] = -(auVar57[10] == cVar80);
  auVar44[0xb] = -(auVar57[0xb] == cVar81);
  auVar44[0xc] = -(auVar57[0xc] == cVar82);
  auVar44[0xd] = -(auVar57[0xd] == cVar83);
  auVar44[0xe] = -(auVar57[0xe] == cVar84);
  auVar44[0xf] = -(auVar57[0xf] == cVar85);
  if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar44 >> 0x17,0) & 1) != 0) || (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar44 >> 0x27,0) & 1) != 0) || (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x37,0) & 1) != 0) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar44 >> 0x47,0) & 1) != 0) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') goto LAB_1422fb032;
  uVar28 = uVar28 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1422fa5c2;
LAB_1422fa733:
  uVar28 = uVar28 & (ulonglong)pppbVar5;
  auVar57 = *(undefined1 (*) [16])((longlong)pppbVar26 + uVar28);
  auVar59[0] = -(auVar57[0] == auVar38[0]);
  auVar59[1] = -(auVar57[1] == auVar38[1]);
  auVar59[2] = -(auVar57[2] == auVar38[2]);
  auVar59[3] = -(auVar57[3] == auVar38[3]);
  auVar59[4] = -(auVar57[4] == auVar38[4]);
  auVar59[5] = -(auVar57[5] == auVar38[5]);
  auVar59[6] = -(auVar57[6] == auVar38[6]);
  auVar59[7] = -(auVar57[7] == auVar38[7]);
  auVar59[8] = -(auVar57[8] == auVar38[0]);
  auVar59[9] = -(auVar57[9] == auVar38[1]);
  auVar59[10] = -(auVar57[10] == auVar38[2]);
  auVar59[0xb] = -(auVar57[0xb] == auVar38[3]);
  auVar59[0xc] = -(auVar57[0xc] == auVar38[4]);
  auVar59[0xd] = -(auVar57[0xd] == auVar38[5]);
  auVar59[0xe] = -(auVar57[0xe] == auVar38[6]);
  auVar59[0xf] = -(auVar57[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
    lVar31 = uVar34 * -0xd8;
    if (pppcStack_120 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) {
      pppbVar26[uVar34 * -0x1b + -0x15] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x14] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x17] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x16] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x13] = (byte **)0x417fbe7700000000;
      pppbVar26[uVar34 * -0x1b + -0x12] = (byte **)0x0;
      pppbVar26[uVar34 * -0x1b + -0x11] = (byte **)0x0;
      *(undefined8 *)((longlong)pppbVar26 + lVar31 + -0x82) = 0;
      *(undefined8 *)((longlong)pppbVar26 + lVar31 + -0x7a) = 0;
      *(undefined2 *)((longlong)pppbVar26 + lVar31 + -0x72) = 0x402;
      pppcStack_158 = pppcStack_118;
      pppcStack_168 = pppcStack_128;
      pppcStack_160 = pppcStack_120;
      lVar22 = *plStack_210;
      if (*(longlong *)(lVar22 + 0x60) == 0) goto LAB_1422fa8a6;
      plStack_178 = (longlong *)(lVar21 + 0x18);
      uVar28 = pdb_1400af0a0(lVar22 + 0x68);
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar38 = pshuflw(auVar38,auVar38,0);
      lVar31 = 0;
      goto LAB_1422fa83d;
    }
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  auVar45[0] = -(auVar57[0] == cVar70);
  auVar45[1] = -(auVar57[1] == cVar71);
  auVar45[2] = -(auVar57[2] == cVar72);
  auVar45[3] = -(auVar57[3] == cVar73);
  auVar45[4] = -(auVar57[4] == cVar74);
  auVar45[5] = -(auVar57[5] == cVar75);
  auVar45[6] = -(auVar57[6] == cVar76);
  auVar45[7] = -(auVar57[7] == cVar77);
  auVar45[8] = -(auVar57[8] == cVar78);
  auVar45[9] = -(auVar57[9] == cVar79);
  auVar45[10] = -(auVar57[10] == cVar80);
  auVar45[0xb] = -(auVar57[0xb] == cVar81);
  auVar45[0xc] = -(auVar57[0xc] == cVar82);
  auVar45[0xd] = -(auVar57[0xd] == cVar83);
  auVar45[0xe] = -(auVar57[0xe] == cVar84);
  auVar45[0xf] = -(auVar57[0xf] == cVar85);
  if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') {
LAB_1422fb032:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar28 = uVar28 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1422fa733;
LAB_1422fa83d:
  uVar28 = uVar28 & *(ulonglong *)(lVar22 + 0x50);
  auVar57 = *(undefined1 (*) [16])(*(longlong *)(lVar22 + 0x48) + uVar28);
  auVar60[0] = -(auVar57[0] == auVar38[0]);
  auVar60[1] = -(auVar57[1] == auVar38[1]);
  auVar60[2] = -(auVar57[2] == auVar38[2]);
  auVar60[3] = -(auVar57[3] == auVar38[3]);
  auVar60[4] = -(auVar57[4] == auVar38[4]);
  auVar60[5] = -(auVar57[5] == auVar38[5]);
  auVar60[6] = -(auVar57[6] == auVar38[6]);
  auVar60[7] = -(auVar57[7] == auVar38[7]);
  auVar60[8] = -(auVar57[8] == auVar38[0]);
  auVar60[9] = -(auVar57[9] == auVar38[1]);
  auVar60[10] = -(auVar57[10] == auVar38[2]);
  auVar60[0xb] = -(auVar57[0xb] == auVar38[3]);
  auVar60[0xc] = -(auVar57[0xc] == auVar38[4]);
  auVar60[0xd] = -(auVar57[0xd] == auVar38[5]);
  auVar60[0xe] = -(auVar57[0xe] == auVar38[6]);
  auVar60[0xf] = -(auVar57[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    if (*plStack_178 ==
        *(longlong *)
         (*(longlong *)(lVar22 + 0x48) + (uVar7 + uVar28 & *(ulonglong *)(lVar22 + 0x50)) * -8 + -8)
       ) {
      uVar27 = 0x1b;
      pppbVar26 = (byte ***)pdb_140dc6290(&UNK_1434d6d67);
      ppcStack_1a8 = (code **)pppbVar26;
      uStack_1a0 = uVar27;
      ppppbStack_108 = (byte ****)pdb_140bbbcb0(&ppcStack_1a8);
      pppcStack_100 = pppcVar13;
      ppppbStack_f8 = ppppbVar14;
      pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
      ppppbStack_108 = (byte ****)pppcStack_160;
      uVar24 = pdb_1400b0130(&ppppbStack_108);
      pdb_14072caa0(&ppppbStack_108,&pppcStack_168,uVar24);
      uVar24 = pdb_14116ee90(&ppppbStack_108,0);
      pdb_14119b6b0(uVar24,pppbVar26,uVar27);
      pppcStack_118 = (code ***)ppppbStack_f8;
      pppcStack_128 = (code ***)ppppbStack_108;
      pppcStack_120 = pppcStack_100;
      uVar24 = pdb_14116e180(&pppcStack_128);
      pdb_14119b2b0(uVar24,uVar12);
      ppppbStack_f8 = (byte ****)pppcStack_118;
      ppppbStack_108 = (byte ****)pppcStack_128;
      pppcStack_100 = pppcStack_120;
      lVar22 = pdb_14116e180(&ppppbStack_108);
      ppppbVar30 = ppppbStack_108;
      *(undefined4 *)(lVar22 + 600) = 0xffffffa0;
      pppcStack_148 = (code ***)ppppbStack_108;
      pppcStack_140 = pppcStack_100;
      pppcStack_138 = (code ***)ppppbStack_f8;
      if (ppppbStack_108[0x39] == (byte ***)0x0) goto LAB_1422faf99;
      uVar28 = pdb_1400af0a0(ppppbStack_108 + 0x3a,&pppcStack_140);
      pppbVar26 = ppppbVar30[0x36];
      pppbVar5 = ppppbVar30[0x37];
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar38 = pshuflw(auVar38,auVar38,0);
      lVar22 = 0;
      goto LAB_1422fab1d;
    }
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  auVar46[0] = -(auVar57[0] == cVar70);
  auVar46[1] = -(auVar57[1] == cVar71);
  auVar46[2] = -(auVar57[2] == cVar72);
  auVar46[3] = -(auVar57[3] == cVar73);
  auVar46[4] = -(auVar57[4] == cVar74);
  auVar46[5] = -(auVar57[5] == cVar75);
  auVar46[6] = -(auVar57[6] == cVar76);
  auVar46[7] = -(auVar57[7] == cVar77);
  auVar46[8] = -(auVar57[8] == cVar78);
  auVar46[9] = -(auVar57[9] == cVar79);
  auVar46[10] = -(auVar57[10] == cVar80);
  auVar46[0xb] = -(auVar57[0xb] == cVar81);
  auVar46[0xc] = -(auVar57[0xc] == cVar82);
  auVar46[0xd] = -(auVar57[0xd] == cVar83);
  auVar46[0xe] = -(auVar57[0xe] == cVar84);
  auVar46[0xf] = -(auVar57[0xf] == cVar85);
  if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') goto LAB_1422fa8a6;
  uVar28 = uVar28 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_1422fa83d;
LAB_1422fab1d:
  uVar28 = uVar28 & (ulonglong)pppbVar5;
  pcVar3 = (char *)((longlong)pppbVar26 + uVar28);
  auVar62[0] = -(*pcVar3 == auVar38[0]);
  auVar62[1] = -(pcVar3[1] == auVar38[1]);
  auVar62[2] = -(pcVar3[2] == auVar38[2]);
  auVar62[3] = -(pcVar3[3] == auVar38[3]);
  auVar62[4] = -(pcVar3[4] == auVar38[4]);
  auVar62[5] = -(pcVar3[5] == auVar38[5]);
  auVar62[6] = -(pcVar3[6] == auVar38[6]);
  auVar62[7] = -(pcVar3[7] == auVar38[7]);
  auVar62[8] = -(pcVar3[8] == auVar38[0]);
  auVar62[9] = -(pcVar3[9] == auVar38[1]);
  auVar62[10] = -(pcVar3[10] == auVar38[2]);
  auVar62[0xb] = -(pcVar3[0xb] == auVar38[3]);
  auVar62[0xc] = -(pcVar3[0xc] == auVar38[4]);
  auVar62[0xd] = -(pcVar3[0xd] == auVar38[5]);
  auVar62[0xe] = -(pcVar3[0xe] == auVar38[6]);
  auVar62[0xf] = -(pcVar3[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
    if (pppcStack_140 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) {
      pbVar2 = (byte *)((longlong)pppbVar26 + uVar34 * -0xd8 + -5);
      *pbVar2 = *pbVar2 | 2;
      goto LAB_1422fac03;
    }
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  auVar48[0] = -(*pcVar3 == cVar70);
  auVar48[1] = -(pcVar3[1] == cVar71);
  auVar48[2] = -(pcVar3[2] == cVar72);
  auVar48[3] = -(pcVar3[3] == cVar73);
  auVar48[4] = -(pcVar3[4] == cVar74);
  auVar48[5] = -(pcVar3[5] == cVar75);
  auVar48[6] = -(pcVar3[6] == cVar76);
  auVar48[7] = -(pcVar3[7] == cVar77);
  auVar48[8] = -(pcVar3[8] == cVar78);
  auVar48[9] = -(pcVar3[9] == cVar79);
  auVar48[10] = -(pcVar3[10] == cVar80);
  auVar48[0xb] = -(pcVar3[0xb] == cVar81);
  auVar48[0xc] = -(pcVar3[0xc] == cVar82);
  auVar48[0xd] = -(pcVar3[0xd] == cVar83);
  auVar48[0xe] = -(pcVar3[0xe] == cVar84);
  auVar48[0xf] = -(pcVar3[0xf] == cVar85);
  if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar48 >> 0x17,0) & 1) != 0) || (SUB161(auVar48 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar48 >> 0x27,0) & 1) != 0) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar48 >> 0x37,0) & 1) != 0) || (SUB161(auVar48 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar48 >> 0x47,0) & 1) != 0) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') goto LAB_1422faf99;
  uVar28 = uVar28 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_1422fab1d;
LAB_1422fa8a6:
  uVar24 = pdb_140dc6290(&UNK_1434d6d4d);
  pdb_1407339e0(&ppppbStack_108,&pppcStack_168,uVar24);
  uVar24 = pdb_14116dd60(&ppppbStack_108);
  pdb_14119b2b0(uVar24,uVar12);
  ppppbVar30 = ppppbStack_108;
  pppcStack_128 = (code ***)ppppbStack_108;
  pppcStack_120 = pppcStack_100;
  pppcStack_118 = (code ***)ppppbStack_f8;
  if (ppppbStack_108[0x39] == (byte ***)0x0) {
LAB_1422fb069:
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1422fb081:
    lVar21 = pdb_14116e5a0(param_1);
    if (((byte)uStack_1b8 & *(byte *)(lVar21 + 0x3a) & 1) != 0) {
      fVar39 = _DAT_142e37878 + *(float *)(lVar21 + 0x28);
      fVar69 = (float)pppcStack_1e0 * fVar39;
      fVar39 = (*(float *)(lVar21 + 0x28) + fVar69) -
               (fVar39 * (float)*(ulonglong *)(lVar21 + 0x18) + _DAT_142fa5b20);
      if (fVar39 <= 0.0) {
        fVar39 = 0.0;
      }
      if (fVar69 < fVar39) {
        pppcStack_148 = (code ***)CONCAT44(pppcStack_148._4_4_,fVar39);
        pppcStack_128 = (code ***)CONCAT44(pppcStack_128._4_4_,fVar69);
        ppppbStack_108 = (byte ****)&pppcStack_148;
        pppcStack_100 = (code ***)pdb_140f705d0;
        pcStack_f0 = pdb_140f705d0;
        ppppbStack_f8 = (byte ****)&pppcStack_128;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142fa5c78,&ppppbStack_108,&UNK_142fa5d18);
      }
      if (fVar39 <= *(float *)(lVar21 + 0x30)) {
        fVar39 = *(float *)(lVar21 + 0x30);
      }
      if (fVar39 <= fVar69) {
        fVar69 = fVar39;
      }
      *(float *)(lVar21 + 0x30) = fVar69;
    }
    return lVar21;
  }
  uVar28 = pdb_1400af0a0(ppppbStack_108 + 0x3a,&pppcStack_120);
  pppbVar26 = ppppbVar30[0x36];
  pppbVar5 = ppppbVar30[0x37];
  bVar20 = (byte)(uVar28 >> 0x39);
  auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
  auVar38 = pshuflw(auVar38,auVar38,0);
  lVar22 = 0;
  do {
    uVar28 = uVar28 & (ulonglong)pppbVar5;
    auVar57 = *(undefined1 (*) [16])((longlong)pppbVar26 + uVar28);
    auVar61[0] = -(auVar57[0] == auVar38[0]);
    auVar61[1] = -(auVar57[1] == auVar38[1]);
    auVar61[2] = -(auVar57[2] == auVar38[2]);
    auVar61[3] = -(auVar57[3] == auVar38[3]);
    auVar61[4] = -(auVar57[4] == auVar38[4]);
    auVar61[5] = -(auVar57[5] == auVar38[5]);
    auVar61[6] = -(auVar57[6] == auVar38[6]);
    auVar61[7] = -(auVar57[7] == auVar38[7]);
    auVar61[8] = -(auVar57[8] == auVar38[0]);
    auVar61[9] = -(auVar57[9] == auVar38[1]);
    auVar61[10] = -(auVar57[10] == auVar38[2]);
    auVar61[0xb] = -(auVar57[0xb] == auVar38[3]);
    auVar61[0xc] = -(auVar57[0xc] == auVar38[4]);
    auVar61[0xd] = -(auVar57[0xd] == auVar38[5]);
    auVar61[0xe] = -(auVar57[0xe] == auVar38[6]);
    auVar61[0xf] = -(auVar57[0xf] == auVar38[7]);
    uVar32 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf;
    uVar36 = (uint)uVar32;
    if (uVar32 != 0) {
      while( true ) {
        uVar7 = 0;
        for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
        if (pppcStack_120 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) break;
        uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
        uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
        if (uVar32 == 0) goto LAB_1422fa99f;
      }
      if ((*(byte *)((longlong)pppbVar26 + uVar34 * -0xd8 + -6) & 0x30) != 0) {
        ppppbVar30 = *(byte *****)(lVar21 + 0x18);
        *(undefined4 *)plStack_200[2] = *(undefined4 *)((longlong)plStack_200 + 0x1c);
        lVar22 = *plStack_200;
        lVar31 = *(longlong *)(lVar22 + 0x30);
        uVar24 = *(undefined8 *)(lVar22 + 0x40);
        if (lVar31 == *(longlong *)(lVar22 + 0x20)) {
          uStack_170 = *(undefined8 *)(lVar22 + 0x40);
          pppcStack_130 = (code ***)ppppbVar30;
          pdb_142d7e980(lVar22 + 0x20);
          uVar24 = uStack_170;
          ppppbVar30 = (byte ****)pppcStack_130;
        }
        lVar33 = *(longlong *)(lVar22 + 0x28);
        *(undefined8 *)(lVar33 + lVar31 * 0x10) = uVar24;
        *(byte *****)(lVar33 + 8 + lVar31 * 0x10) = ppppbVar30;
        *(longlong *)(lVar22 + 0x30) = lVar31 + 1;
        *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
      }
LAB_1422fac03:
      uVar24 = 0x16;
      ppcStack_1a8 = (code **)pdb_140dc6290(&UNK_1434d6d82);
      pppcStack_128 = &ppcStack_1a8;
      pppcStack_120 = (code ***)pdb_1402ed400;
      uStack_1a0 = uVar24;
      pdb_140f60760(&ppppbStack_108,&UNK_1434d6d98,&pppcStack_128);
      pppcStack_130 = pppcStack_100;
      pdb_1407339e0(&pppcStack_128,&pppcStack_168);
      uVar24 = pdb_14116dd60(&pppcStack_128);
      pdb_14119b2b0(uVar24,uVar12);
      pppcVar16 = pppcStack_128;
      pppcStack_148 = pppcStack_128;
      pppcStack_140 = pppcStack_120;
      pppcStack_138 = pppcStack_118;
      if ((byte ***)pppcStack_128[0x39] == (byte ***)0x0) {
LAB_1422fb04e:
        pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar28 = pdb_1400af0a0(pppcStack_128 + 0x3a,&pppcStack_140);
      pppbVar26 = (byte ***)pppcVar16[0x36];
      pppbVar5 = (byte ***)pppcVar16[0x37];
      bVar20 = (byte)(uVar28 >> 0x39);
      auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
      auVar38 = pshuflw(auVar38,auVar38,0);
      lVar22 = 0;
      do {
        uVar28 = uVar28 & (ulonglong)pppbVar5;
        pcVar3 = (char *)((longlong)pppbVar26 + uVar28);
        auVar63[0] = -(*pcVar3 == auVar38[0]);
        auVar63[1] = -(pcVar3[1] == auVar38[1]);
        auVar63[2] = -(pcVar3[2] == auVar38[2]);
        auVar63[3] = -(pcVar3[3] == auVar38[3]);
        auVar63[4] = -(pcVar3[4] == auVar38[4]);
        auVar63[5] = -(pcVar3[5] == auVar38[5]);
        auVar63[6] = -(pcVar3[6] == auVar38[6]);
        auVar63[7] = -(pcVar3[7] == auVar38[7]);
        auVar63[8] = -(pcVar3[8] == auVar38[0]);
        auVar63[9] = -(pcVar3[9] == auVar38[1]);
        auVar63[10] = -(pcVar3[10] == auVar38[2]);
        auVar63[0xb] = -(pcVar3[0xb] == auVar38[3]);
        auVar63[0xc] = -(pcVar3[0xc] == auVar38[4]);
        auVar63[0xd] = -(pcVar3[0xd] == auVar38[5]);
        auVar63[0xe] = -(pcVar3[0xe] == auVar38[6]);
        auVar63[0xf] = -(pcVar3[0xf] == auVar38[7]);
        uVar32 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf
        ;
        uVar36 = (uint)uVar32;
        while (uVar32 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
          if (pppcStack_140 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) {
            bVar20 = *(byte *)((longlong)pppbVar26 + uVar34 * -0xd8 + -6);
            if (ppppbStack_108 != (byte ****)0x0) {
              pub_1406abac0((byte *)pppcStack_130,(ulonglong)ppppbStack_108,1);
            }
            if ((bVar20 & 0x30) != 0) {
              pppcStack_128 = (code ***)(lVar21 + 0x18);
              pppcStack_120 = (code ***)pdb_140c91ab0;
              pdb_140f60760(&ppppbStack_108,&UNK_1434d6d9f,&pppcStack_128);
              pdb_1422d1a80(lStack_208,&ppppbStack_108);
            }
            if (*(char *)(lVar21 + 0x20) != '\0') goto LAB_1422fa490;
            uVar27 = 0x1b;
            pppbVar26 = (byte ***)pdb_140dc6290(&UNK_1434d6dd9);
            ppcStack_1a8 = (code **)pppbVar26;
            uStack_1a0 = uVar27;
            ppppbStack_108 = (byte ****)pdb_140bbbcb0(&ppcStack_1a8);
            pppcStack_100 = pppcVar13;
            ppppbStack_f8 = ppppbVar14;
            pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
            ppppbStack_108 = (byte ****)pppcStack_190;
            uVar24 = pdb_1400b0130(&ppppbStack_108);
            pdb_14072caa0(&ppppbStack_108,&pppcStack_198,uVar24);
            uVar24 = pdb_14116ee90(&ppppbStack_108,0);
            pdb_14119b6b0(uVar24,pppbVar26,uVar27);
            pppcStack_118 = (code ***)ppppbStack_f8;
            pppcStack_128 = (code ***)ppppbStack_108;
            pppcStack_120 = pppcStack_100;
            uVar24 = pdb_14116e180(&pppcStack_128);
            pdb_14119b2b0(uVar24);
            ppppbStack_f8 = (byte ****)pppcStack_118;
            ppppbStack_108 = (byte ****)pppcStack_128;
            pppcStack_100 = pppcStack_120;
            lVar21 = pdb_14116e180(&ppppbStack_108);
            ppppbVar30 = ppppbStack_108;
            *(undefined4 *)(lVar21 + 600) = 0xff8010ff;
            pppcStack_148 = (code ***)ppppbStack_108;
            pppcStack_140 = pppcStack_100;
            pppcStack_138 = (code ***)ppppbStack_f8;
            if (ppppbStack_108[0x39] == (byte ***)0x0) goto LAB_1422faf99;
            uVar28 = pdb_1400af0a0(ppppbStack_108 + 0x3a,&pppcStack_140);
            pppbVar26 = ppppbVar30[0x36];
            pppbVar5 = ppppbVar30[0x37];
            bVar20 = (byte)(uVar28 >> 0x39);
            auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
            auVar38 = pshuflw(auVar38,auVar38,0);
            lVar21 = 0;
            goto LAB_1422faf27;
          }
          uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
          uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
        }
        auVar49[0] = -(*pcVar3 == cVar70);
        auVar49[1] = -(pcVar3[1] == cVar71);
        auVar49[2] = -(pcVar3[2] == cVar72);
        auVar49[3] = -(pcVar3[3] == cVar73);
        auVar49[4] = -(pcVar3[4] == cVar74);
        auVar49[5] = -(pcVar3[5] == cVar75);
        auVar49[6] = -(pcVar3[6] == cVar76);
        auVar49[7] = -(pcVar3[7] == cVar77);
        auVar49[8] = -(pcVar3[8] == cVar78);
        auVar49[9] = -(pcVar3[9] == cVar79);
        auVar49[10] = -(pcVar3[10] == cVar80);
        auVar49[0xb] = -(pcVar3[0xb] == cVar81);
        auVar49[0xc] = -(pcVar3[0xc] == cVar82);
        auVar49[0xd] = -(pcVar3[0xd] == cVar83);
        auVar49[0xe] = -(pcVar3[0xe] == cVar84);
        auVar49[0xf] = -(pcVar3[0xf] == cVar85);
        if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x1f,0) & 1) != 0) || (SUB161(auVar49 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar49 >> 0x37,0) & 1) != 0) || (SUB161(auVar49 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar49 >> 0x47,0) & 1) != 0) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') goto LAB_1422fb04e;
        uVar28 = uVar28 + lVar22 + 0x10;
        lVar22 = lVar22 + 0x10;
      } while( true );
    }
LAB_1422fa99f:
    auVar47[0] = -(auVar57[0] == cVar70);
    auVar47[1] = -(auVar57[1] == cVar71);
    auVar47[2] = -(auVar57[2] == cVar72);
    auVar47[3] = -(auVar57[3] == cVar73);
    auVar47[4] = -(auVar57[4] == cVar74);
    auVar47[5] = -(auVar57[5] == cVar75);
    auVar47[6] = -(auVar57[6] == cVar76);
    auVar47[7] = -(auVar57[7] == cVar77);
    auVar47[8] = -(auVar57[8] == cVar78);
    auVar47[9] = -(auVar57[9] == cVar79);
    auVar47[10] = -(auVar57[10] == cVar80);
    auVar47[0xb] = -(auVar57[0xb] == cVar81);
    auVar47[0xc] = -(auVar57[0xc] == cVar82);
    auVar47[0xd] = -(auVar57[0xd] == cVar83);
    auVar47[0xe] = -(auVar57[0xe] == cVar84);
    auVar47[0xf] = -(auVar57[0xf] == cVar85);
    if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x17,0) & 1) != 0) || (SUB161(auVar47 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x27,0) & 1) != 0) || (SUB161(auVar47 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x37,0) & 1) != 0) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') goto LAB_1422fb069;
    uVar28 = uVar28 + lVar22 + 0x10;
    lVar22 = lVar22 + 0x10;
  } while( true );
LAB_1422faf27:
  uVar28 = uVar28 & (ulonglong)pppbVar5;
  pcVar3 = (char *)((longlong)pppbVar26 + uVar28);
  auVar64[0] = -(*pcVar3 == auVar38[0]);
  auVar64[1] = -(pcVar3[1] == auVar38[1]);
  auVar64[2] = -(pcVar3[2] == auVar38[2]);
  auVar64[3] = -(pcVar3[3] == auVar38[3]);
  auVar64[4] = -(pcVar3[4] == auVar38[4]);
  auVar64[5] = -(pcVar3[5] == auVar38[5]);
  auVar64[6] = -(pcVar3[6] == auVar38[6]);
  auVar64[7] = -(pcVar3[7] == auVar38[7]);
  auVar64[8] = -(pcVar3[8] == auVar38[0]);
  auVar64[9] = -(pcVar3[9] == auVar38[1]);
  auVar64[10] = -(pcVar3[10] == auVar38[2]);
  auVar64[0xb] = -(pcVar3[0xb] == auVar38[3]);
  auVar64[0xc] = -(pcVar3[0xc] == auVar38[4]);
  auVar64[0xd] = -(pcVar3[0xd] == auVar38[5]);
  auVar64[0xe] = -(pcVar3[0xe] == auVar38[6]);
  auVar64[0xf] = -(pcVar3[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
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
  uVar36 = (uint)uVar32;
  while( true ) {
    if (uVar32 == 0) goto LAB_1422faf6d;
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
    if (pppcStack_140 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) break;
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  goto LAB_1422faf89;
LAB_1422faf6d:
  auVar50[0] = -(*pcVar3 == cVar70);
  auVar50[1] = -(pcVar3[1] == cVar71);
  auVar50[2] = -(pcVar3[2] == cVar72);
  auVar50[3] = -(pcVar3[3] == cVar73);
  auVar50[4] = -(pcVar3[4] == cVar74);
  auVar50[5] = -(pcVar3[5] == cVar75);
  auVar50[6] = -(pcVar3[6] == cVar76);
  auVar50[7] = -(pcVar3[7] == cVar77);
  auVar50[8] = -(pcVar3[8] == cVar78);
  auVar50[9] = -(pcVar3[9] == cVar79);
  auVar50[10] = -(pcVar3[10] == cVar80);
  auVar50[0xb] = -(pcVar3[0xb] == cVar81);
  auVar50[0xc] = -(pcVar3[0xc] == cVar82);
  auVar50[0xd] = -(pcVar3[0xd] == cVar83);
  auVar50[0xe] = -(pcVar3[0xe] == cVar84);
  auVar50[0xf] = -(pcVar3[0xf] == cVar85);
  if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 || (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar50 >> 0x17,0) & 1) != 0) || (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar50 >> 0x27,0) & 1) != 0) || (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar50 >> 0x37,0) & 1) != 0) || (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar50 >> 0x47,0) & 1) != 0) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') goto LAB_1422faf99;
  uVar28 = uVar28 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_1422faf27;
LAB_1422faf89:
  pbVar2 = (byte *)((longlong)pppbVar26 + uVar34 * -0xd8 + -5);
  *pbVar2 = *pbVar2 | 2;
LAB_1422fa490:
  lVar21 = lStack_1b0;
  ppppbStack_108 = (byte ****)pppcStack_1d8;
  bVar20 = pdb_141172f20(pppcStack_1d8,pppcStack_1d0,&ppppbStack_108);
  if (bVar20 != 0) {
    pppcStack_1e0 = (code ***)ppppbVar29;
  }
  uStack_1b8 = CONCAT71((int7)((ulonglong)uStack_1b8 >> 8),(byte)uStack_1b8 | bVar20);
  ppppbVar29 = (byte ****)pppcStack_218;
  if ((byte ****)pppcStack_218 == ppppbVar35) goto LAB_1422fb081;
  goto LAB_1422f9a42;
LAB_1422f98df:
  auVar53[0] = -(auVar57[0] == -1);
  auVar53[1] = -(auVar57[1] == -1);
  auVar53[2] = -(auVar57[2] == -1);
  auVar53[3] = -(auVar57[3] == -1);
  auVar53[4] = -(auVar57[4] == -1);
  auVar53[5] = -(auVar57[5] == -1);
  auVar53[6] = -(auVar57[6] == -1);
  auVar53[7] = -(auVar57[7] == -1);
  auVar53[8] = -(auVar57[8] == -1);
  auVar53[9] = -(auVar57[9] == -1);
  auVar53[10] = -(auVar57[10] == -1);
  auVar53[0xb] = -(auVar57[0xb] == -1);
  auVar53[0xc] = -(auVar57[0xc] == -1);
  auVar53[0xd] = -(auVar57[0xd] == -1);
  auVar53[0xe] = -(auVar57[0xe] == -1);
  auVar53[0xf] = -(auVar57[0xf] == -1);
  if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') goto LAB_1422faf99;
  uVar28 = uVar28 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
LAB_1422f9895:
  uVar28 = uVar28 & *(ulonglong *)(lVar21 + 0x1b8);
  auVar57 = *(undefined1 (*) [16])(lVar22 + uVar28);
  auVar67[0] = -(auVar57[0] == auVar38[0]);
  auVar67[1] = -(auVar57[1] == auVar38[1]);
  auVar67[2] = -(auVar57[2] == auVar38[2]);
  auVar67[3] = -(auVar57[3] == auVar38[3]);
  auVar67[4] = -(auVar57[4] == auVar38[4]);
  auVar67[5] = -(auVar57[5] == auVar38[5]);
  auVar67[6] = -(auVar57[6] == auVar38[6]);
  auVar67[7] = -(auVar57[7] == auVar38[7]);
  auVar67[8] = -(auVar57[8] == auVar38[0]);
  auVar67[9] = -(auVar57[9] == auVar38[1]);
  auVar67[10] = -(auVar57[10] == auVar38[2]);
  auVar67[0xb] = -(auVar57[0xb] == auVar38[3]);
  auVar67[0xc] = -(auVar57[0xc] == auVar38[4]);
  auVar67[0xd] = -(auVar57[0xd] == auVar38[5]);
  auVar67[0xe] = -(auVar57[0xe] == auVar38[6]);
  auVar67[0xf] = -(auVar57[0xf] == auVar38[7]);
  uVar32 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf;
  uVar36 = (uint)uVar32;
  while( true ) {
    if (uVar32 == 0) goto LAB_1422f98df;
    uVar7 = 0;
    for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar33 = (uVar7 + uVar28 & *(ulonglong *)(lVar21 + 0x1b8)) * -0xd8;
    if (*plVar1 == *(longlong *)(lVar22 + -0xd8 + lVar33)) break;
    uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
    uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
  }
  lVar22 = lVar22 + lVar33;
  bVar20 = *(byte *)(lVar22 + -5);
  *(byte *)(lVar22 + -5) = bVar20 | 0xe0;
  if ((ppppbVar30 < ppppbVar29) || (ppppbVar35 <= ppppbVar30)) {
    *(byte *)(lVar22 + -5) = bVar20 | 0xe4;
  }
  if (ppppbVar29 < ppppbVar35) goto LAB_1422f99e0;
code_r0x00014116e5a0:
  lVar21 = *param_1;
  if (*(longlong *)(lVar21 + 0x1c8) != 0) {
    uStack_50 = 0x14116e5ca;
    uVar28 = pdb_1400af0a0(lVar21 + 0x1d0,param_1 + 1);
    lVar22 = *(longlong *)(lVar21 + 0x1b0);
    bVar20 = (byte)(uVar28 >> 0x39);
    auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar38 = pshuflw(auVar38,auVar38,0);
    lVar31 = 0;
    while( true ) {
      uVar28 = uVar28 & *(ulonglong *)(lVar21 + 0x1b8);
      auVar57 = *(undefined1 (*) [16])(lVar22 + uVar28);
      auVar65[0] = -(auVar57[0] == auVar38[0]);
      auVar65[1] = -(auVar57[1] == auVar38[1]);
      auVar65[2] = -(auVar57[2] == auVar38[2]);
      auVar65[3] = -(auVar57[3] == auVar38[3]);
      auVar65[4] = -(auVar57[4] == auVar38[4]);
      auVar65[5] = -(auVar57[5] == auVar38[5]);
      auVar65[6] = -(auVar57[6] == auVar38[6]);
      auVar65[7] = -(auVar57[7] == auVar38[7]);
      auVar65[8] = -(auVar57[8] == auVar38[0]);
      auVar65[9] = -(auVar57[9] == auVar38[1]);
      auVar65[10] = -(auVar57[10] == auVar38[2]);
      auVar65[0xb] = -(auVar57[0xb] == auVar38[3]);
      auVar65[0xc] = -(auVar57[0xc] == auVar38[4]);
      auVar65[0xd] = -(auVar57[0xd] == auVar38[5]);
      auVar65[0xe] = -(auVar57[0xe] == auVar38[6]);
      auVar65[0xf] = -(auVar57[0xf] == auVar38[7]);
      uVar32 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
      uVar36 = (uint)uVar32;
      while (uVar32 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar33 = (uVar7 + uVar28 & *(ulonglong *)(lVar21 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar22 + -0xd8 + lVar33)) {
          lVar22 = lVar22 + lVar33;
          if (*(longlong *)(lVar22 + -0x38) == 0) goto LAB_14116e6e2;
          uStack_50 = 0x14116e67e;
          lVar21 = (**(code **)(*(longlong *)(lVar22 + -0x30) + 0x28))();
          uStack_50 = 0x14116e68f;
          (**(code **)(lVar22 + 0x18))(&stack0xffffffffffffffd8,lVar21);
          auVar38[0] = -((char)unaff_R12 == DAT_14329bc50);
          auVar38[1] = -((char)((ulonglong)unaff_R12 >> 8) == UNK_14329bc51);
          auVar38[2] = -((char)((ulonglong)unaff_R12 >> 0x10) == UNK_14329bc52);
          auVar38[3] = -((char)((ulonglong)unaff_R12 >> 0x18) == UNK_14329bc53);
          auVar38[4] = -((char)((ulonglong)unaff_R12 >> 0x20) == UNK_14329bc54);
          auVar38[5] = -((char)((ulonglong)unaff_R12 >> 0x28) == UNK_14329bc55);
          auVar38[6] = -((char)((ulonglong)unaff_R12 >> 0x30) == UNK_14329bc56);
          auVar38[7] = -((char)((ulonglong)unaff_R12 >> 0x38) == UNK_14329bc57);
          auVar38[8] = -((char)unaff_R13 == UNK_14329bc58);
          auVar38[9] = -((char)((ulonglong)unaff_R13 >> 8) == UNK_14329bc59);
          auVar38[10] = -((char)((ulonglong)unaff_R13 >> 0x10) == UNK_14329bc5a);
          auVar38[0xb] = -((char)((ulonglong)unaff_R13 >> 0x18) == UNK_14329bc5b);
          auVar38[0xc] = -((char)((ulonglong)unaff_R13 >> 0x20) == UNK_14329bc5c);
          auVar38[0xd] = -((char)((ulonglong)unaff_R13 >> 0x28) == UNK_14329bc5d);
          auVar38[0xe] = -((char)((ulonglong)unaff_R13 >> 0x30) == UNK_14329bc5e);
          auVar38[0xf] = -((char)((ulonglong)unaff_R13 >> 0x38) == UNK_14329bc5f);
          if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
            return lVar21;
          }
          goto LAB_14116e6ca;
        }
        uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
        uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
      }
      auVar51[0] = -(auVar57[0] == -1);
      auVar51[1] = -(auVar57[1] == -1);
      auVar51[2] = -(auVar57[2] == -1);
      auVar51[3] = -(auVar57[3] == -1);
      auVar51[4] = -(auVar57[4] == -1);
      auVar51[5] = -(auVar57[5] == -1);
      auVar51[6] = -(auVar57[6] == -1);
      auVar51[7] = -(auVar57[7] == -1);
      auVar51[8] = -(auVar57[8] == -1);
      auVar51[9] = -(auVar57[9] == -1);
      auVar51[10] = -(auVar57[10] == -1);
      auVar51[0xb] = -(auVar57[0xb] == -1);
      auVar51[0xc] = -(auVar57[0xc] == -1);
      auVar51[0xd] = -(auVar57[0xd] == -1);
      auVar51[0xe] = -(auVar57[0xe] == -1);
      auVar51[0xf] = -(auVar57[0xf] == -1);
      if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar51 >> 0x17,0) & 1) != 0) || (SUB161(auVar51 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar51 >> 0x27,0) & 1) != 0) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar51 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar51 >> 0x3f,0) & 1) != 0) || (SUB161(auVar51 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar51 >> 0x4f,0) & 1) != 0) || (SUB161(auVar51 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || (SUB161(auVar51 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar51 >> 0x6f,0) & 1) != 0) || (SUB161(auVar51 >> 0x77,0) & 1) != 0) ||
          auVar51[0xf] < '\0') break;
      uVar28 = uVar28 + lVar31 + 0x10;
      lVar31 = lVar31 + 0x10;
    }
  }
  uStack_50 = 0x14116e6ca;
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_14116e6ca:
  uStack_50 = 0x14116e6e2;
  pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
LAB_14116e6e2:
                    /* WARNING: Subroutine does not return */
  uStack_50 = 0x14116e6fa;
  pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
LAB_1422f99e0:
  uVar25 = _UNK_14329c2b8;
  pppcVar15 = _DAT_14329c2b0;
  uVar12 = _DAT_142f57bc4;
  uVar11 = _DAT_142f3e560;
  lVar21 = *param_2;
  plStack_210 = (longlong *)param_2[1];
  plStack_200 = (longlong *)param_2[2];
  lStack_208 = param_2[3];
  iVar9 = -(uint)(CONCAT13(unaff_XMM11_Bd,
                           CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))) ==
                 CONCAT13(unaff_XMM11_Bd,
                          CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))));
  cVar70 = (char)iVar9;
  cVar71 = (char)((uint)iVar9 >> 8);
  cVar72 = (char)((uint)iVar9 >> 0x10);
  cVar73 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM11_Bh,
                           CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))) ==
                 CONCAT13(unaff_XMM11_Bh,
                          CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))));
  cVar74 = (char)iVar9;
  cVar75 = (char)((uint)iVar9 >> 8);
  cVar76 = (char)((uint)iVar9 >> 0x10);
  cVar77 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM11_Bl,
                           CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))) ==
                 CONCAT13(unaff_XMM11_Bl,
                          CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))));
  cVar78 = (char)iVar9;
  cVar79 = (char)((uint)iVar9 >> 8);
  cVar80 = (char)((uint)iVar9 >> 0x10);
  cVar81 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM11_Bp,
                           CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))) ==
                 CONCAT13(unaff_XMM11_Bp,
                          CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))));
  cVar82 = (char)iVar9;
  cVar83 = (char)((uint)iVar9 >> 8);
  cVar84 = (char)((uint)iVar9 >> 0x10);
  cVar85 = (char)((uint)iVar9 >> 0x18);
  uStack_1b8 = 0;
LAB_1422f9a42:
  pppcStack_100 = pppcVar15;
  ppppbStack_f8 = (byte ****)uVar25;
  ppppbStack_108 = ppppbVar29;
  pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
  ppppbStack_108 = (byte ****)param_1[1];
  uVar24 = pdb_1400b0130(&ppppbStack_108);
  pdb_14072caa0(&ppppbStack_108,param_1,uVar24);
  pdb_14116f0d0(&ppppbStack_108,0);
  ppppbVar30 = ppppbStack_108;
  uStack_1c8 = ppppbStack_f8;
  pppcStack_1d8 = (code ***)ppppbStack_108;
  pppcStack_1d0 = pppcStack_100;
  if (ppppbStack_108[0x39] != (byte ***)0x0) {
    pppcStack_218 = (code ***)((longlong)ppppbVar29 + 1);
    uVar28 = pdb_1400af0a0(ppppbStack_108 + 0x3a,&pppcStack_100);
    pppcVar13 = pppcStack_100;
    pppbVar26 = ppppbVar30[0x36];
    pppbVar5 = ppppbVar30[0x37];
    bVar20 = (byte)(uVar28 >> 0x39);
    auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar38 = pshuflw(auVar38,auVar38,0);
    lVar22 = 0;
    while( true ) {
      uVar28 = uVar28 & (ulonglong)pppbVar5;
      auVar57 = *(undefined1 (*) [16])((longlong)pppbVar26 + uVar28);
      auVar55[0] = -(auVar57[0] == auVar38[0]);
      auVar55[1] = -(auVar57[1] == auVar38[1]);
      auVar55[2] = -(auVar57[2] == auVar38[2]);
      auVar55[3] = -(auVar57[3] == auVar38[3]);
      auVar55[4] = -(auVar57[4] == auVar38[4]);
      auVar55[5] = -(auVar57[5] == auVar38[5]);
      auVar55[6] = -(auVar57[6] == auVar38[6]);
      auVar55[7] = -(auVar57[7] == auVar38[7]);
      auVar55[8] = -(auVar57[8] == auVar38[0]);
      auVar55[9] = -(auVar57[9] == auVar38[1]);
      auVar55[10] = -(auVar57[10] == auVar38[2]);
      auVar55[0xb] = -(auVar57[0xb] == auVar38[3]);
      auVar55[0xc] = -(auVar57[0xc] == auVar38[4]);
      auVar55[0xd] = -(auVar57[0xd] == auVar38[5]);
      auVar55[0xe] = -(auVar57[0xe] == auVar38[6]);
      auVar55[0xf] = -(auVar57[0xf] == auVar38[7]);
      uVar32 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
      uVar36 = (uint)uVar32;
      while (uVar32 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar34 = uVar7 + uVar28 & (ulonglong)pppbVar5;
        if (pppcStack_100 == (code ***)pppbVar26[uVar34 * -0x1b + -0x1b]) {
          *(undefined4 *)(pppbVar26 + uVar34 * -0x1b + -0x11) = 0;
          *(undefined4 *)((longlong)pppbVar26 + uVar34 * -0xd8 + -0x84) = uVar4;
          ppppbVar30 = _UNK_14329c338;
          pppcVar16 = _DAT_14329c330;
          uStack_1c8 = ppppbStack_f8;
          pppcStack_1d8 = (code ***)ppppbStack_108;
          pppcStack_1d0 = pppcStack_100;
          if (*(byte *****)(lVar21 + 0x10) <= ppppbVar29) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(ppppbVar29,*(byte *****)(lVar21 + 0x10),&UNK_1434d6d08);
          }
          lVar22 = *(longlong *)(lVar21 + 8) + (longlong)ppppbVar29 * 0x10;
          lVar31 = *(longlong *)(*(longlong *)(lVar21 + 8) + (longlong)ppppbVar29 * 0x10);
          lStack_1b0 = lVar21;
          if (lVar31 != 0) {
            ppppbStack_108 = *(byte *****)(lVar22 + 8);
            pppcStack_100 = _DAT_14329c330;
            ppppbStack_f8 = _UNK_14329c338;
            pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
            ppppbStack_108 = (byte ****)pppcVar13;
            uVar25 = pdb_1400b0130(&ppppbStack_108);
            pdb_14072caa0(&pppcStack_128,&pppcStack_1d8,uVar25);
            pdb_141174160(&ppppbStack_108,&pppcStack_128,&UNK_1434d6d20,0x12,0);
            pdb_141186520(&pppcStack_198,&ppppbStack_108,&UNK_1434d6d32,7);
            lVar21 = *(longlong *)(lVar31 + 0x38);
            if (-1 < lVar21) {
              lVar21 = 1;
            }
                    /* WARNING: Could not recover jumptable at 0x0001422f9c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar21 = (*(code *)(&UNK_1434d6fdc + *(int *)(&UNK_1434d6fdc + lVar21 * 4)))();
            return lVar21;
          }
          lStack_180 = *(longlong *)(lVar22 + 8);
          ppppbStack_108 = *(byte *****)(lStack_180 + 0x18);
          pppcStack_100 = _DAT_14329c330;
          ppppbStack_f8 = _UNK_14329c338;
          pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
          ppppbStack_108 = (byte ****)pppcVar13;
          uVar24 = pdb_1400b0130(&ppppbStack_108);
          pdb_14072caa0(&pppcStack_128,&pppcStack_1d8,uVar24);
          pdb_141174160(&ppppbStack_108,&pppcStack_128,&UNK_1434d6d20,0x12,0);
          pdb_141186520(auStack_230,&ppppbStack_108,&UNK_1434d6d32);
          pppcVar13 = pppcStack_228;
          ppppbStack_108 = (byte ****)0x0;
          pppcStack_100 = pppcVar16;
          ppppbStack_f8 = ppppbVar30;
          pppcStack_100 = (code ***)pdb_1400affa0(&ppppbStack_108);
          ppppbStack_108 = (byte ****)pppcVar13;
          uVar24 = pdb_1400b0130(&ppppbStack_108);
          lVar21 = lStack_180;
          pdb_14072caa0(&pppcStack_128,auStack_230,uVar24);
          pppcVar13 = pppcStack_128;
          if ((byte ***)pppcStack_128[0x39] == (byte ***)0x0) goto LAB_1422fb032;
          uVar28 = pdb_1400af0a0(pppcStack_128 + 0x3a,&pppcStack_120);
          pppbVar26 = (byte ***)pppcVar13[0x36];
          pppbVar5 = (byte ***)pppcVar13[0x37];
          bVar20 = (byte)(uVar28 >> 0x39);
          auVar38 = ZEXT216(CONCAT11(bVar20,bVar20));
          auVar38 = pshuflw(auVar38,auVar38,0);
          lVar22 = 0;
          goto LAB_1422f9def;
        }
        uVar32 = (ushort)(uVar36 - 1) & (ushort)uVar36;
        uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar32);
      }
      auVar41[0] = -(auVar57[0] == cVar70);
      auVar41[1] = -(auVar57[1] == cVar71);
      auVar41[2] = -(auVar57[2] == cVar72);
      auVar41[3] = -(auVar57[3] == cVar73);
      auVar41[4] = -(auVar57[4] == cVar74);
      auVar41[5] = -(auVar57[5] == cVar75);
      auVar41[6] = -(auVar57[6] == cVar76);
      auVar41[7] = -(auVar57[7] == cVar77);
      auVar41[8] = -(auVar57[8] == cVar78);
      auVar41[9] = -(auVar57[9] == cVar79);
      auVar41[10] = -(auVar57[10] == cVar80);
      auVar41[0xb] = -(auVar57[0xb] == cVar81);
      auVar41[0xc] = -(auVar57[0xc] == cVar82);
      auVar41[0xd] = -(auVar57[0xd] == cVar83);
      auVar41[0xe] = -(auVar57[0xe] == cVar84);
      auVar41[0xf] = -(auVar57[0xf] == cVar85);
      if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar41 >> 0x3f,0) & 1) != 0) || (SUB161(auVar41 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar41 >> 0x4f,0) & 1) != 0) || (SUB161(auVar41 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar41 >> 0x5f,0) & 1) != 0) || (SUB161(auVar41 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar41 >> 0x6f,0) & 1) != 0) || (SUB161(auVar41 >> 0x77,0) & 1) != 0) ||
          auVar41[0xf] < '\0') break;
      uVar28 = uVar28 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14329c430);
}

