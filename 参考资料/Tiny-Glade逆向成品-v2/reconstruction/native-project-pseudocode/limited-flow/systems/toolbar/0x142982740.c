// VA 0x142982740, PDB extent 2905 bytes
// toolbar::toolbar_systems::toolbar_auto_hide
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014298374b) overlaps instruction at (ram,0x00014298374a)
    */
/* WARNING: Removing unreachable block (ram,0x000142982a84) */
/* WARNING: Removing unreachable block (ram,0x000142982a36) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_systems::toolbar_auto_hide
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
   Extent: 2905 */

void pdb_142982740(uint *param_1,uint *param_2,byte *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  float fVar12;
  char cVar13;
  uint uVar14;
  undefined *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
  longlong lVar19;
  char *pcVar20;
  uint *puVar21;
  uint *puVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 *puVar25;
  byte bVar26;
  undefined8 *unaff_RBX;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  ulonglong unaff_RBP;
  undefined8 uVar32;
  byte *unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar33;
  byte *pbVar34;
  ulonglong uVar35;
  bool bVar36;
  ulonglong uVar37;
  ulonglong *unaff_R12;
  undefined8 *unaff_R13;
  undefined8 uVar38;
  uint *unaff_R14;
  longlong *unaff_R15;
  bool bVar39;
  float fVar40;
  uint uVar43;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar44;
  int iVar45;
  undefined1 in_XMM1 [16];
  float fVar46;
  undefined1 in_XMM2 [16];
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  float unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  float unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  float unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  uint unaff_XMM15_Dc;
  uint unaff_XMM15_Dd;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 uVar48;
  
code_r0x000142982740:
  *(longlong **)((longlong)register0x00000020 + -8) = unaff_R15;
  *(uint **)((longlong)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 **)((longlong)register0x00000020 + -0x18) = unaff_R13;
  *(ulonglong **)((longlong)register0x00000020 + -0x20) = unaff_R12;
  *(byte **)((longlong)register0x00000020 + -0x28) = unaff_RSI;
  *(ulonglong *)((longlong)register0x00000020 + -0x30) = unaff_RDI;
  *(ulonglong *)((longlong)register0x00000020 + -0x38) = unaff_RBP;
  *(undefined8 **)((longlong)register0x00000020 + -0x40) = unaff_RBX;
  puVar30 = (undefined8 *)((longlong)register0x00000020 + -0x1f8);
  puVar29 = (undefined8 *)((longlong)register0x00000020 + -0x1f8);
  puVar31 = (undefined8 *)((longlong)register0x00000020 + -0x1f8);
  *(float *)((longlong)register0x00000020 + -0x58) = unaff_XMM15_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0x54) = unaff_XMM15_Db;
  *(uint *)((longlong)register0x00000020 + -0x50) = unaff_XMM15_Dc;
  *(uint *)((longlong)register0x00000020 + -0x4c) = unaff_XMM15_Dd;
  *(float *)((longlong)register0x00000020 + -0x68) = unaff_XMM14_Da;
  *(undefined4 *)((longlong)register0x00000020 + -100) = unaff_XMM14_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x60) = unaff_XMM14_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x5c) = unaff_XMM14_Dd;
  *(undefined4 *)((longlong)register0x00000020 + -0x78) = unaff_XMM13_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0x74) = unaff_XMM13_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x70) = unaff_XMM13_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x6c) = unaff_XMM13_Dd;
  *(float *)((longlong)register0x00000020 + -0x88) = unaff_XMM12_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0x84) = unaff_XMM12_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x80) = unaff_XMM12_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x7c) = unaff_XMM12_Dd;
  *(float *)((longlong)register0x00000020 + -0x98) = unaff_XMM11_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0x94) = unaff_XMM11_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0x90) = unaff_XMM11_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x8c) = unaff_XMM11_Dd;
  *(float *)((longlong)register0x00000020 + -0xa8) = unaff_XMM10_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xa4) = unaff_XMM10_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xa0) = unaff_XMM10_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0x9c) = unaff_XMM10_Dd;
  *(float *)((longlong)register0x00000020 + -0xb8) = unaff_XMM9_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xb4) = unaff_XMM9_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xb0) = unaff_XMM9_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0xac) = unaff_XMM9_Dd;
  *(float *)((longlong)register0x00000020 + -200) = unaff_XMM8_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xc4) = unaff_XMM8_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xc0) = unaff_XMM8_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0xbc) = unaff_XMM8_Dd;
  *(float *)((longlong)register0x00000020 + -0xd8) = unaff_XMM7_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xd4) = unaff_XMM7_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xd0) = unaff_XMM7_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0xcc) = unaff_XMM7_Dd;
  *(float *)((longlong)register0x00000020 + -0xe8) = unaff_XMM6_Da;
  *(undefined4 *)((longlong)register0x00000020 + -0xe4) = unaff_XMM6_Db;
  *(undefined4 *)((longlong)register0x00000020 + -0xe0) = unaff_XMM6_Dc;
  *(undefined4 *)((longlong)register0x00000020 + -0xdc) = unaff_XMM6_Dd;
  puVar4 = *(undefined8 **)((longlong)register0x00000020 + 0x28);
  puVar5 = *(undefined8 **)((longlong)register0x00000020 + 0x80);
  puVar6 = *(undefined8 **)((longlong)register0x00000020 + 0x60);
  puVar7 = *(undefined8 **)((longlong)register0x00000020 + 0x30);
  unaff_RBX = *(undefined8 **)((longlong)register0x00000020 + 0x38);
  puVar8 = *(undefined8 **)((longlong)register0x00000020 + 0x78);
  puVar9 = *(undefined8 **)((longlong)register0x00000020 + 0x50);
  puVar10 = *(undefined8 **)((longlong)register0x00000020 + 0x48);
  bVar26 = **(byte **)param_1;
  *(undefined4 *)puVar10[2] = *(undefined4 *)((longlong)puVar10 + 0x1c);
  uVar27 = *puVar10;
  *(undefined4 *)puVar9[2] = *(undefined4 *)((longlong)puVar9 + 0x1c);
  unaff_XMM6_Da = _DAT_143607b28;
  unaff_XMM12_Da = _DAT_1430348dc;
  unaff_XMM9_Da = _DAT_142e37988;
  unaff_XMM8_Da = _DAT_142e37878;
  unaff_XMM10_Da = _DAT_142e36f50;
  unaff_XMM7_Da = _DAT_142e36f34;
  unaff_XMM14_Da = _DAT_142e36f28;
  unaff_RBP = (ulonglong)bVar26;
  uVar32 = *puVar9;
  *(undefined8 *)((longlong)register0x00000020 + -0x120) = 2;
  *(undefined8 *)((longlong)register0x00000020 + -0x118) = uVar27;
  *(undefined1 *)((longlong)register0x00000020 + -0x110) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x108) = uVar32;
  *(undefined1 *)((longlong)register0x00000020 + -0x100) = 1;
  unaff_R12 = (ulonglong *)*param_4;
  *(undefined8 *)((longlong)register0x00000020 + -0x130) =
       **(undefined8 **)((longlong)register0x00000020 + 0x70);
  *(undefined8 *)((longlong)register0x00000020 + -0x148) = *puVar8;
  *(undefined8 *)((longlong)register0x00000020 + -0x150) = *unaff_RBX;
  *(undefined8 *)((longlong)register0x00000020 + -0x1c0) = *puVar7;
  unaff_RDI = puVar7[1];
  *(undefined8 *)((longlong)register0x00000020 + -0x1a8) = *puVar6;
  *(undefined8 *)((longlong)register0x00000020 + -0x1a0) = puVar6[1];
  *(undefined4 *)((longlong)register0x00000020 + -0x1b4) = *(undefined4 *)((longlong)puVar6 + 0x14);
  *(undefined8 *)((longlong)register0x00000020 + -0x160) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)register0x00000020 + -0x158) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)register0x00000020 + -0x168) = *puVar5;
  *(undefined8 *)((longlong)register0x00000020 + -0x178) = *puVar4;
  *(undefined8 *)((longlong)register0x00000020 + -0x170) =
       **(undefined8 **)((longlong)register0x00000020 + 0x40);
  puVar4 = *(undefined8 **)((longlong)register0x00000020 + 0x58);
  *(undefined4 *)((longlong)register0x00000020 + -0x18c) = *(undefined4 *)((longlong)puVar4 + 0x1c);
  *(undefined8 *)((longlong)register0x00000020 + -0x140) = *puVar4;
  *(undefined8 *)((longlong)register0x00000020 + -0x138) = puVar4[2];
  plVar11 = *(longlong **)((longlong)register0x00000020 + 0x68);
  *(undefined4 *)((longlong)register0x00000020 + -0x1b8) = *(undefined4 *)((longlong)plVar11 + 0x1c)
  ;
  lVar16 = *plVar11;
  *(longlong *)((longlong)register0x00000020 + -0x180) = plVar11[2];
  unaff_XMM6_Db = 0;
  unaff_XMM6_Dc = 0;
  unaff_XMM6_Dd = 0;
  unaff_XMM7_Db = 0;
  unaff_XMM7_Dc = 0;
  unaff_XMM7_Dd = 0;
  unaff_XMM8_Db = 0;
  unaff_XMM8_Dc = 0;
  unaff_XMM8_Dd = 0;
  unaff_XMM9_Db = 0;
  unaff_XMM9_Dc = 0;
  unaff_XMM9_Dd = 0;
  unaff_XMM10_Db = 0;
  unaff_XMM10_Dc = 0;
  unaff_XMM10_Dd = 0;
  unaff_XMM13_Da = 0;
  unaff_XMM13_Db = 0;
  unaff_XMM13_Dc = 0;
  unaff_XMM13_Dd = 0;
  unaff_XMM14_Db = 0;
  unaff_XMM14_Dc = 0;
  unaff_XMM14_Dd = 0;
  unaff_XMM12_Db = 0;
  unaff_XMM12_Dc = 0;
  unaff_XMM12_Dd = 0;
  *(longlong *)((longlong)register0x00000020 + -0x1b0) = lVar16;
  *(longlong *)((longlong)register0x00000020 + -0x188) = lVar16 + 0x20;
  lVar16 = 0;
  *(byte *)((longlong)register0x00000020 + -0x1c9) = bVar26;
  do {
    unaff_RSI = (byte *)(lVar16 + 1);
    *(byte **)((longlong)register0x00000020 + -0x128) = unaff_RSI;
    bVar26 = *(byte *)((longlong)register0x00000020 + lVar16 * 0x10 + -0x110);
    unaff_R14 = (uint *)(ulonglong)bVar26;
    if (((char)unaff_RBP == '\x10') != (bool)bVar26) goto LAB_142982986;
    unaff_R15 = *(longlong **)((longlong)register0x00000020 + lVar16 * 0x10 + -0x118);
    unaff_XMM15_Db = 0;
    unaff_XMM15_Dc = 0;
    unaff_XMM15_Dd = 0;
    unaff_XMM15_Da =
         *(float *)(unaff_R12 + 0x1d) * **(float **)((longlong)register0x00000020 + -0x130);
    if (bVar26 == 0) {
      plVar11 = *(longlong **)((longlong)register0x00000020 + -0x148);
      if ((char)plVar11[0xc] == '\x01') {
LAB_142982ab0:
        *(undefined4 *)((longlong)unaff_R15 + 0x2c) = 0;
      }
      else {
        if (*(char *)((longlong)plVar11 + 0x66) == '\0') {
          cVar13 = *(char *)((longlong)unaff_R12 + 0xf1);
          if (SBORROW8(0,*plVar11)) goto LAB_1429829e1;
        }
        else {
          cVar13 = *(char *)((longlong)unaff_R12 + 0xf1);
        }
        if (cVar13 == '\0') goto LAB_142982ab0;
        *(undefined4 *)((longlong)unaff_R15 + 0x2c) = 0x3f800000;
      }
      goto LAB_142983137;
    }
    cVar13 = *(char *)((longlong)unaff_R12 + 0xf1);
LAB_1429829e1:
    if (cVar13 == '\0') goto LAB_142982ab0;
    *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x1429829f6;
    auVar41._0_8_ = pdb_140a6ad50(*(undefined8 *)((longlong)register0x00000020 + -0x150));
    auVar41._8_8_ = extraout_XMM0_Qb;
    param_3 = *(byte **)((longlong)register0x00000020 + -0x1c0);
    puVar21 = *(uint **)(param_3 + 0xf8);
    param_2 = puVar21 + *(longlong *)(param_3 + 0x100);
    if (param_3[0x108] != 0) {
      param_4 = (undefined8 *)0x0;
      *(undefined8 *)((longlong)register0x00000020 + -0x1c8) = 0;
      unaff_RBX = (undefined8 *)0x0;
LAB_142982ade:
      do {
        bVar3 = *(byte *)((longlong)register0x00000020 + -0x1c9);
        do {
          if (puVar21 == param_2) goto LAB_142982d4a;
          uVar17 = (ulonglong)*puVar21;
          puVar21 = puVar21 + 1;
          param_3 = (byte *)(uVar17 * 9);
          param_4 = *(undefined8 **)(*(longlong *)(unaff_RDI + 0x1a0) + 0x10 + uVar17 * 0x48);
        } while (param_4 == (undefined8 *)0x0);
        lVar33 = *(longlong *)(unaff_RDI + 0x1a0) + uVar17 * 0x48;
        if ((*(ulonglong *)(*(longlong *)((longlong)register0x00000020 + -0x1c0) + 0x118) <
             *(ulonglong *)(lVar33 + 0x40)) &&
           (uVar17 = *(ulonglong *)
                      (*(longlong *)(lVar33 + 0x38) +
                      *(ulonglong *)(*(longlong *)((longlong)register0x00000020 + -0x1c0) + 0x118) *
                      8), uVar17 != 0)) {
          param_3 = *(byte **)(*(longlong *)(lVar33 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uVar17 = *(ulonglong *)(*(longlong *)((longlong)register0x00000020 + -0x1c0) + 0x120);
        }
        else {
          param_3 = (byte *)0x0;
          uVar17 = *(ulonglong *)(*(longlong *)((longlong)register0x00000020 + -0x1c0) + 0x120);
        }
        pbVar18 = param_3;
        if ((uVar17 < *(ulonglong *)(lVar33 + 0x40)) &&
           (*(longlong *)(*(longlong *)(lVar33 + 0x38) + uVar17 * 8) != 0)) {
          uVar14 = 0;
          goto LAB_142982ba4;
        }
        uVar14 = 0;
LAB_142982ac2:
        uVar14 = uVar14 + 1;
        bVar36 = false;
        bVar39 = false;
        if (bVar26 == 0) goto LAB_142982bb5;
        while (uVar14 != (uint)param_4) {
          while( true ) {
            param_3 = pbVar18 + (ulonglong)uVar14 * 3;
            if (!bVar36) goto LAB_142982ac2;
LAB_142982ba4:
            uVar14 = uVar14 + 1;
            bVar36 = true;
            bVar39 = true;
            if (bVar26 == 0) break;
LAB_142982bb5:
            bVar36 = bVar39;
            *(ulonglong *)((longlong)register0x00000020 + -0x1c8) =
                 CONCAT71((int7)((ulonglong)*(undefined8 *)((longlong)register0x00000020 + -0x1c8)
                                >> 8),
                          (byte)*(undefined8 *)((longlong)register0x00000020 + -0x1c8) | param_3[1])
            ;
            unaff_RBX = (undefined8 *)(ulonglong)((int)unaff_RBX + 1);
            if (uVar14 == (uint)param_4) goto LAB_142982ade;
          }
        }
      } while( true );
    }
    unaff_RBX = (undefined8 *)0x0;
    *(undefined8 *)((longlong)register0x00000020 + -0x1c8) = 0;
    param_4 = (undefined8 *)0x0;
LAB_142982c10:
    if (puVar21 != param_2) {
      uVar14 = *puVar21;
      puVar21 = puVar21 + 1;
      lVar33 = *(longlong *)(unaff_RDI + 0x100);
      param_3 = (byte *)((ulonglong)uVar14 * 0xa0);
      param_4 = *(undefined8 **)(param_3 + lVar33 + 0x58);
      if (param_4 != (undefined8 *)0x0) {
        uVar17 = (ulonglong)*(uint *)(param_3 + lVar33 + 0x94);
        lVar19 = *(longlong *)(unaff_RDI + 0x1a0);
        if ((*(ulonglong *)(*(longlong *)((longlong)register0x00000020 + -0x1c0) + 0x118) <
             *(ulonglong *)(lVar19 + 0x40 + uVar17 * 0x48)) &&
           (uVar37 = *(ulonglong *)
                      (*(longlong *)(lVar19 + 0x38 + uVar17 * 0x48) +
                      *(ulonglong *)(*(longlong *)((longlong)register0x00000020 + -0x1c0) + 0x118) *
                      8), uVar37 != 0)) {
          lVar19 = *(longlong *)
                    (*(longlong *)(lVar19 + uVar17 * 0x48 + 0x18) + 0x10 + ~uVar37 * 0x30);
          uVar17 = *(ulonglong *)(*(longlong *)((longlong)register0x00000020 + -0x1c0) + 0x120);
          if (uVar17 < *(ulonglong *)(param_3 + lVar33 + 0x88)) {
LAB_142982cbf:
            if (*(longlong *)(*(longlong *)(param_3 + lVar33 + 0x80) + uVar17 * 8) != 0) {
              lVar33 = *(longlong *)(param_3 + lVar33 + 0x50);
              param_3 = (byte *)((ulonglong)~*(uint *)(lVar33 + 8) * 3 + lVar19);
              uVar14 = 0;
              goto LAB_142982d10;
            }
          }
        }
        else {
          lVar19 = 0;
          uVar17 = *(ulonglong *)(*(longlong *)((longlong)register0x00000020 + -0x1c0) + 0x120);
          if (uVar17 < *(ulonglong *)(param_3 + lVar33 + 0x88)) goto LAB_142982cbf;
        }
        lVar33 = *(longlong *)(param_3 + lVar33 + 0x50);
        param_3 = (byte *)((ulonglong)~*(uint *)(lVar33 + 8) * 3 + lVar19);
        uVar14 = 0;
LAB_142982be5:
        uVar14 = uVar14 + 1;
        bVar36 = false;
        bVar39 = false;
        if (bVar26 == 0) goto LAB_142982d21;
        while (uVar14 != (uint)param_4) {
          while( true ) {
            param_3 = (byte *)((ulonglong)~*(uint *)(lVar33 + 8 + (ulonglong)uVar14 * 0x10) * 3 +
                              lVar19);
            if (!bVar36) goto LAB_142982be5;
LAB_142982d10:
            uVar14 = uVar14 + 1;
            bVar36 = true;
            bVar39 = true;
            if (bVar26 == 0) break;
LAB_142982d21:
            bVar36 = bVar39;
            *(ulonglong *)((longlong)register0x00000020 + -0x1c8) =
                 CONCAT71((int7)((ulonglong)*(undefined8 *)((longlong)register0x00000020 + -0x1c8)
                                >> 8),
                          (byte)*(undefined8 *)((longlong)register0x00000020 + -0x1c8) | param_3[1])
            ;
            unaff_RBX = (undefined8 *)(ulonglong)((int)unaff_RBX + 1);
            if (uVar14 == (uint)param_4) goto LAB_142982c10;
          }
        }
      }
      goto LAB_142982c10;
    }
    bVar3 = *(byte *)((longlong)register0x00000020 + -0x1c9);
LAB_142982d4a:
    unaff_R13 = (undefined8 *)((longlong)register0x00000020 + -0x118);
    unaff_RBP = (ulonglong)bVar3;
    fVar50 = ((float)(int)unaff_RBX + unaff_XMM7_Da) * unaff_XMM8_Da * unaff_XMM15_Da +
             unaff_XMM15_Da * unaff_XMM6_Da * (float)(int)unaff_RBX;
    fVar46 = unaff_XMM15_Da * unaff_XMM6_Da * unaff_XMM9_Da;
    bVar26 = (byte)unaff_R12[0x1e];
    fVar40 = fVar46;
    if (1 < (byte)(bVar26 - 1)) {
      fVar40 = fVar50;
      fVar50 = fVar46;
    }
    fVar46 = fVar46 * unaff_XMM10_Da;
    in_XMM2 = ZEXT416((uint)fVar46);
    uVar37 = (ulonglong)(uint)fVar46;
    param_1 = (uint *)&UNK_143607f68;
    uVar17 = (ulonglong)*(int *)(&UNK_143607f68 + (ulonglong)bVar26 * 4);
    pbVar18 = &UNK_143607f68 + uVar17;
    bVar39 = pbVar18 == (byte *)0x0;
    cVar13 = (char)pbVar18;
    puVar21 = unaff_R14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar26) {
    case 0:
      in_XMM2._4_4_ = in_XMM1._4_4_;
      in_XMM2._0_4_ = in_XMM1._0_4_ - fVar46;
      in_XMM2._8_4_ = in_XMM1._8_4_;
      in_XMM2._12_4_ = in_XMM1._12_4_;
    case 3:
      fVar46 = (float)auVar41._0_8_ * unaff_XMM10_Da;
      fVar49 = _UNK_143607b40;
      fVar12 = _UNK_143607b44;
code_r0x000142982ddc:
      lVar33 = *(longlong *)((longlong)register0x00000020 + -0x1a8);
      puVar22 = *(uint **)(lVar33 + 0xf8);
      puVar21 = puVar22 + *(longlong *)(lVar33 + 0x100);
      fVar40 = fVar40 + unaff_XMM15_Da * fVar49 + unaff_XMM15_Da * fVar49;
      fVar50 = fVar50 + unaff_XMM15_Da * fVar12 + unaff_XMM15_Da * fVar12;
      if (*(char *)(lVar33 + 0x108) != '\0') {
        lVar19 = 0;
        lVar33 = 0;
        param_4 = (undefined8 *)0x0;
        do {
          if ((int)param_4 == (int)lVar19) {
            if (puVar22 == puVar21) goto code_r0x000142982fed;
            while( true ) {
              uVar17 = (ulonglong)*puVar22;
              param_4 = (undefined8 *)(uVar17 * 9);
              lVar19 = *(longlong *)
                        (*(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x1a0) + 0x1a0)
                         + 0x10 + uVar17 * 0x48);
              if (lVar19 != 0) break;
              puVar22 = puVar22 + 1;
              if (puVar22 == puVar21) goto code_r0x000142982fed;
            }
            lVar33 = *(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x1a0) + 0x1a0) +
                     uVar17 * 0x48;
            lVar24 = *(longlong *)(lVar33 + 0x18);
            lVar23 = ~*(ulonglong *)
                       (*(longlong *)(lVar33 + 0x38) +
                       *(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x1a8) + 0x110) *
                       8) * 0x30;
            lVar33 = *(longlong *)(lVar24 + 0x10 + lVar23);
            *(undefined8 *)((longlong)register0x00000020 + -0x198) =
                 *(undefined8 *)(lVar24 + 0x28 + lVar23);
            puVar22 = puVar22 + 1;
            param_4 = (undefined8 *)0x0;
          }
          lVar24 = (longlong)param_4 * 0x10;
          *(float *)(lVar33 + lVar24) = fVar46;
          *(int *)(lVar33 + 4 + lVar24) = in_XMM2._0_4_;
          unaff_R14 = (uint *)(ulonglong)*(uint *)((longlong)register0x00000020 + -0x1b4);
          unaff_RBX = *(undefined8 **)((longlong)register0x00000020 + -0x198);
          *(uint *)((longlong)unaff_RBX + (longlong)param_4 * 4) =
               *(uint *)((longlong)register0x00000020 + -0x1b4);
          *(ulonglong *)(lVar33 + 8 + lVar24) = CONCAT44(fVar50,fVar40);
          param_4 = (undefined8 *)(ulonglong)((int)param_4 + 1);
        } while( true );
      }
      param_4 = (undefined8 *)0x0;
      while (puVar22 != puVar21) {
        lVar33 = *(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x1a0) + 0x100);
        while( true ) {
          param_4 = (undefined8 *)((ulonglong)*puVar22 * 0xa0);
          lVar19 = *(longlong *)(lVar33 + 0x58 + (longlong)param_4);
          if (lVar19 != 0) break;
          puVar22 = puVar22 + 1;
          if (puVar22 == puVar21) goto code_r0x000142982fed;
        }
        uVar17 = (ulonglong)*(uint *)((longlong)param_4 + lVar33 + 0x94);
        lVar24 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x1a0) + 0x1a0) +
                   0x18 + uVar17 * 0x48);
        lVar23 = ~*(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x1a0) + 0x1a0) +
                      0x38 + uVar17 * 0x48) +
                   *(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x1a8) + 0x110) * 8)
                 * 0x30;
        puVar4 = *(undefined8 **)(lVar24 + 0x10 + lVar23);
        *(undefined8 *)((longlong)register0x00000020 + -0x198) =
             *(undefined8 *)(lVar24 + 0x28 + lVar23);
        lVar33 = *(longlong *)((longlong)param_4 + lVar33 + 0x50);
        puVar22 = puVar22 + 1;
        uVar37 = 0;
        uVar17 = 1;
        while( true ) {
          uVar35 = uVar17;
          uVar17 = (ulonglong)~*(uint *)(lVar33 + 8 + uVar37 * 0x10);
          unaff_R14 = (uint *)(uVar17 * 0x10);
          *(float *)(puVar4 + uVar17 * 2) = fVar46;
          *(int *)((longlong)puVar4 + 4 + (longlong)unaff_R14) = in_XMM2._0_4_;
          unaff_RBX = *(undefined8 **)((longlong)register0x00000020 + -0x198);
          *(undefined4 *)((longlong)unaff_RBX + uVar17 * 4) =
               *(undefined4 *)((longlong)register0x00000020 + -0x1b4);
          (puVar4 + 1)[uVar17 * 2] = CONCAT44(fVar50,fVar40);
          iVar45 = (int)uVar35;
          param_4 = puVar4;
          if (iVar45 == (int)lVar19) break;
          uVar17 = (ulonglong)(iVar45 + 1);
          uVar37 = uVar35;
        }
      }
code_r0x000142982fed:
      unaff_XMM11_Da = *(float *)((longlong)unaff_R15 + 0x2c);
      unaff_XMM11_Db = 0;
      unaff_XMM11_Dc = 0;
      unaff_XMM11_Dd = 0;
      if ((*(byte *)((longlong)register0x00000020 + -0x1c8) & 1) == 0) {
        *(float *)((longlong)register0x00000020 + -0x1d8) = fVar50;
        unaff_R14 = (uint *)((longlong)register0x00000020 + -0xf8);
        *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x142983017;
        pdb_140deead0(unaff_R14);
        in_XMM2 = ZEXT416(*(uint *)(*(longlong *)((longlong)register0x00000020 + -0x160) + 4));
        *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x142983030;
        cVar13 = pdb_140deec60(unaff_R14);
        if (cVar13 != '\0') goto code_r0x000142983034;
code_r0x000142983056:
        fVar40 = *(float *)(*(longlong *)((longlong)register0x00000020 + -0x178) + 0x58) /
                 unaff_XMM9_Da + *(float *)((longlong)unaff_R15 + 0x2c);
      }
      else {
code_r0x000142983034:
        *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x142983041;
        cVar13 = pdb_140a00370(*(undefined8 *)((longlong)register0x00000020 + -0x158));
        if ((cVar13 == '\0') || (**(int **)((longlong)register0x00000020 + -0x168) != 0))
        goto code_r0x000142983056;
        uVar48 = **(undefined4 **)((longlong)register0x00000020 + -0x170);
        *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x142983201;
        cVar13 = pdb_140938ba0(uVar48);
        fVar40 = *(float *)((longlong)unaff_R15 + 0x2c);
        if (cVar13 == '\0') {
          fVar40 = fVar40 + *(float *)(*(longlong *)((longlong)register0x00000020 + -0x178) + 0x58)
                            / _DAT_142e37ae0;
        }
      }
      fVar50 = 0.0;
      if (0.0 <= fVar40) {
        fVar50 = fVar40;
      }
      fVar40 = unaff_XMM14_Da;
      if (fVar50 <= unaff_XMM14_Da) {
        fVar40 = fVar50;
      }
      *(float *)((longlong)unaff_R15 + 0x2c) = fVar40;
      if (((unaff_XMM11_Da != 0.0) || (NAN(unaff_XMM11_Da))) || (fVar40 <= 0.0)) {
        if ((unaff_XMM11_Da == unaff_XMM14_Da) && (fVar40 < unaff_XMM14_Da)) {
          **(undefined4 **)((longlong)register0x00000020 + -0x180) =
               *(undefined4 *)((longlong)register0x00000020 + -0x1b8);
          lVar19 = *(longlong *)((longlong)register0x00000020 + -0x1b0);
          lVar33 = *(longlong *)(lVar19 + 0x30);
          uVar27 = *(undefined8 *)(lVar19 + 0x40);
          if (lVar33 == *(longlong *)(lVar19 + 0x20)) {
            *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x142983108;
            pdb_142d7e6e0(*(undefined8 *)((longlong)register0x00000020 + -0x188));
          }
          lVar19 = *(longlong *)((longlong)register0x00000020 + -0x1b0);
          lVar24 = *(longlong *)(lVar19 + 0x28);
          lVar23 = lVar33 * 0x20;
          *(undefined4 *)(lVar24 + lVar23) = 0x15;
          goto code_r0x00014298311f;
        }
      }
      else {
        **(undefined4 **)((longlong)register0x00000020 + -0x180) =
             *(undefined4 *)((longlong)register0x00000020 + -0x1b8);
        lVar19 = *(longlong *)((longlong)register0x00000020 + -0x1b0);
        lVar33 = *(longlong *)(lVar19 + 0x30);
        uVar27 = *(undefined8 *)(lVar19 + 0x40);
        if (lVar33 == *(longlong *)(lVar19 + 0x20)) {
          *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x1429830b9;
          pdb_142d7e6e0(*(undefined8 *)((longlong)register0x00000020 + -0x188));
        }
        lVar19 = *(longlong *)((longlong)register0x00000020 + -0x1b0);
        lVar24 = *(longlong *)(lVar19 + 0x28);
        lVar23 = lVar33 * 0x20;
        *(undefined4 *)(lVar24 + lVar23) = 0x14;
code_r0x00014298311f:
        *(undefined8 *)(lVar24 + 0x18 + lVar23) = uVar27;
        unaff_R14 = (uint *)(lVar33 + 1);
        *(uint **)(lVar19 + 0x30) = unaff_R14;
        *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
      }
LAB_142983137:
      in_XMM1 = ZEXT416(*(uint *)((longlong)unaff_R15 + 0x2c));
      *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x142983149;
      fVar40 = (float)pdb_140dedcd0(&UNK_143607eb8);
      unaff_XMM15_Da = unaff_XMM15_Da * unaff_XMM12_Da * fVar40;
      **(undefined4 **)((longlong)register0x00000020 + -0x138) =
           *(undefined4 *)((longlong)register0x00000020 + -0x18c);
      pbVar18 = *(byte **)(*(longlong *)((longlong)register0x00000020 + -0x140) + 0xa0);
      param_1 = (uint *)0x0;
      pbVar34 = pbVar18;
      do {
        if ((uint *)(*(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x140) + 0xa8) *
                    0x28) == param_1) goto LAB_142982986;
        pbVar1 = pbVar34 + 0x10;
        pbVar34 = pbVar34 + 0x28;
        in_XMM1._0_4_ = -(uint)((int)*(undefined8 *)pbVar1 == (int)unaff_R15[3]);
        iVar45 = -(uint)((int)((ulonglong)*(undefined8 *)pbVar1 >> 0x20) ==
                        (int)((ulonglong)unaff_R15[3] >> 0x20));
        in_XMM1._4_4_ = in_XMM1._0_4_;
        in_XMM1._8_4_ = iVar45;
        in_XMM1._12_4_ = iVar45;
        uVar14 = movmskpd((int)param_4,in_XMM1);
        param_4 = (undefined8 *)(ulonglong)uVar14;
        param_1 = param_1 + 10;
      } while (uVar14 != 3);
      param_2 = (uint *)(ulonglong)(byte)unaff_R12[0x1e];
      auVar41 = (undefined1  [16])0x0;
      puVar21 = unaff_R14;
      break;
    case 1:
      goto code_r0x000142982dc8;
    case 2:
      fVar46 = (float)auVar41._0_8_ - fVar46;
code_r0x000142982dc8:
      in_XMM2._4_4_ = in_XMM1._4_4_;
      in_XMM2._0_4_ = in_XMM1._0_4_ * unaff_XMM10_Da;
      in_XMM2._8_4_ = in_XMM1._8_4_;
      in_XMM2._12_4_ = in_XMM1._12_4_;
      fVar49 = _UNK_143607b30;
      fVar12 = _UNK_143607b34;
      goto code_r0x000142982ddc;
    case 4:
      goto code_r0x000142982969;
    case 5:
      break;
    case 6:
      param_2 = (uint *)(ulonglong)*(uint *)(pbVar18 + (longlong)param_2 * 4);
      break;
    case 7:
      param_3[-0x77] = param_3[-0x77] & 0x68;
      register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x1f8);
      goto code_r0x000142982740;
    case 8:
      pbVar18 = (byte *)(ulonglong)*(byte *)(_UNK_143607f68 + 0xf0);
      goto code_r0x0001429832c6;
    case 9:
      *(int *)(unaff_RBP - 0x77) = *(int *)(unaff_RBP - 0x77) + 1;
      param_2 = (uint *)(unaff_RDI & 0xffffffff);
      unaff_RBX = *(undefined8 **)((longlong)register0x00000020 + -0x1d8);
      puVar31 = (undefined8 *)((longlong)register0x00000020 + -0x1c8);
      param_3 = unaff_RSI;
      goto code_r0x0001429833ad;
    case 10:
      *(int *)(unaff_RBP - 0x77) = *(int *)(unaff_RBP - 0x77) + 1;
      param_2 = (uint *)(unaff_RDI & 0xffffffff);
      unaff_RBX = *(undefined8 **)((longlong)register0x00000020 + -0x1d8);
      puVar29 = (undefined8 *)((longlong)register0x00000020 + -0x1c8);
      param_3 = unaff_RSI;
      goto code_r0x000142983315;
    case 0xb:
      *(int *)(unaff_RBP - 0x77) = *(int *)(unaff_RBP - 0x77) + 1;
      param_2 = (uint *)(unaff_RDI & 0xffffffff);
      unaff_RBX = *(undefined8 **)((longlong)register0x00000020 + -0x1d8);
      puVar30 = (undefined8 *)((longlong)register0x00000020 + -0x1c8);
      param_3 = unaff_RSI;
      goto pdb_142390ad0;
    case 0xc:
      **(undefined4 **)((longlong)register0x00000020 + -0x108) =
           *(undefined4 *)((longlong)register0x00000020 + -0xfc);
      unaff_R12 = (ulonglong *)*unaff_R13;
      *(undefined4 *)(unaff_R12 + 2) = 0;
      goto LAB_1429836e4;
    case 0xd:
      goto code_r0x000142983564;
    case 0xe:
      *pbVar18 = *pbVar18 + cVar13 + (0xfffffffebc9f8097 < uVar17);
      *pbVar18 = *pbVar18 + cVar13;
      *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x1429834fd;
      pbVar18 = (byte *)func_0x0001869834fe(&UNK_143607fe7);
      param_1 = (uint *)&UNK_143607f98;
    case 0xf:
      goto code_r0x000142983507;
    case 0x10:
      goto code_r0x000142983743;
    case 0x11:
      uVar14 = movmskps((int)param_4,in_XMM2);
      param_4 = (undefined8 *)(ulonglong)uVar14;
      goto code_r0x000142983753;
    case 0x12:
      piVar2 = (int *)(lVar16 + 0x10);
      iVar45 = *piVar2;
      *piVar2 = *piVar2 << 1;
      if (iVar45 < 0 == *piVar2 < 0) {
        *(byte **)((longlong)register0x00000020 + -0x200) = pbVar18;
        goto code_r0x000142983753;
      }
      pbVar18 = (byte *)CONCAT71((int7)((ulonglong)pbVar18 >> 8),
                                 cVar13 + -0x77 + (0xbc9f8097 < *(uint *)(&UNK_143607ef5 + uVar17)))
      ;
      goto code_r0x00014298372e;
    case 0x13:
      UNK_143607eeb = UNK_143607eeb + 'h' + (0xfffffffebc9f8097 < uVar17);
      *pbVar18 = *pbVar18 >> 6;
      goto code_r0x000142983753;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_R14 = param_1;
    uVar37 = in_XMM2._0_8_;
    param_3 = &UNK_143607f78;
    lVar33 = (longlong)param_2 * 4;
    param_2 = (uint *)(&UNK_143607f78 + *(int *)(&UNK_143607f78 + lVar33));
    bVar26 = (byte)unaff_RBX;
    param_1 = unaff_R14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_2) {
    case (uint *)0x142982971:
      unaff_XMM15_Da = (float)((uint)unaff_XMM15_Da ^ _DAT_142e37820);
      break;
    case (uint *)0x1429831d8:
      unaff_XMM15_Da = (float)((uint)unaff_XMM15_Da ^ _DAT_142e37820);
      unaff_XMM15_Dc = _UNK_142e37828;
      unaff_XMM15_Dd = _UNK_142e3782c;
    case (uint *)0x1429831e0:
      auVar41._4_4_ = 0;
      auVar41._0_4_ = unaff_XMM15_Da;
      auVar41._8_4_ = unaff_XMM15_Dc;
      auVar41._12_4_ = unaff_XMM15_Dd;
      unaff_XMM15_Da = 0.0;
      break;
    case (uint *)0x1429832c6:
code_r0x0001429832c6:
                    /* WARNING: Could not recover jumptable at 0x0001429832d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_143607f88 + *(int *)(&UNK_143607f88 + (longlong)pbVar18 * 4)))();
      return;
    case (uint *)0x142983312:
      *(byte *)((longlong)unaff_RBX + 0x5d) = *(byte *)((longlong)unaff_RBX + 0x5d) & bVar26;
code_r0x000142983315:
      uVar48 = SUB84(param_2,0);
      uVar27 = *puVar29;
      uVar32 = puVar29[1];
      uVar38 = puVar29[3];
      puVar28 = puVar29 + 5;
pdb_1423905a0:
      *(undefined8 *)((longlong)puVar28 + -8) = uVar38;
      *(undefined8 *)((longlong)puVar28 + -0x10) = uVar32;
      *(undefined8 *)((longlong)puVar28 + -0x18) = uVar27;
      *(undefined8 **)((longlong)puVar28 + -0x20) = unaff_RBX;
      *(undefined8 *)((longlong)puVar28 + -0x1f0) = 0x1423905c7;
      pdb_1411bdcb0((undefined1 *)((longlong)puVar28 + -0x1b8),unaff_R14,uVar48,
                    (ulonglong)param_3 & 0xffffffff);
      if (*(int *)((longlong)puVar28 + -0x1b8) == 4) {
        *(undefined8 *)((longlong)puVar28 + -0x1f0) = 0x1423905e0;
        pdb_14238fa10((undefined1 *)((longlong)puVar28 + -0x178),
                      *(undefined8 *)((longlong)puVar28 + -0x1b0));
        *(undefined1 *)((longlong)puVar28 + -0x2d) = 0;
        *(undefined1 **)((longlong)puVar28 + -0x1c8) = (undefined1 *)((longlong)puVar28 + -0x178);
        *(undefined8 *)((longlong)puVar28 + -0x1f0) = 0x142390600;
        pdb_1411be200((undefined1 *)((longlong)puVar28 + -0x1b8),unaff_R14,uVar48,
                      (ulonglong)param_3 & 0xffffffff);
        if (*(int *)((longlong)puVar28 + -0x1b8) == 4) {
          return;
        }
        *(undefined8 *)((longlong)puVar28 + -0x188) = *(undefined8 *)((longlong)puVar28 + -0x1a8);
        *(undefined8 *)((longlong)puVar28 + -0x180) = *(undefined8 *)((longlong)puVar28 + -0x1a0);
        *(undefined8 *)((longlong)puVar28 + -0x198) = *(undefined8 *)((longlong)puVar28 + -0x1b8);
        *(undefined8 *)((longlong)puVar28 + -400) = *(undefined8 *)((longlong)puVar28 + -0x1b0);
        puVar15 = &UNK_1434e0000;
      }
      else {
        *(undefined8 *)((longlong)puVar28 + -0x188) = *(undefined8 *)((longlong)puVar28 + -0x1a8);
        *(undefined8 *)((longlong)puVar28 + -0x180) = *(undefined8 *)((longlong)puVar28 + -0x1a0);
        *(undefined8 *)((longlong)puVar28 + -0x198) = *(undefined8 *)((longlong)puVar28 + -0x1b8);
        *(undefined8 *)((longlong)puVar28 + -400) = *(undefined8 *)((longlong)puVar28 + -0x1b0);
        puVar15 = &UNK_1434dffe8;
      }
      *(undefined **)((longlong)puVar28 + -0x1c8) = puVar15;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)puVar28 + -0x1f0) = 0x14239066e;
      pdb_142dc8170(&UNK_1434dfe58,0x2b,(undefined1 *)((longlong)puVar28 + -0x198),&UNK_1434dfe38);
    case (uint *)0x14298335e:
      *(byte *)((longlong)unaff_RBX + 0x5d) = *(byte *)((longlong)unaff_RBX + 0x5d) & bVar26;
pdb_142390ad0:
      puVar30[4] = puVar30[3];
      puVar30[3] = puVar30[1];
      puVar30[2] = *puVar30;
      puVar30[1] = unaff_RBX;
      puVar30[-0x39] = 0x142390af7;
      pdb_1411bdcb0(puVar30 + -0x32,unaff_R14,(ulonglong)param_2 & 0xffffffff,
                    (ulonglong)param_3 & 0xffffffff);
      if (*(int *)(puVar30 + -0x32) == 4) {
        puVar30[-0x39] = 0x142390b10;
        pdb_14238fa10(puVar30 + -0x2a,puVar30[-0x31]);
        *(undefined1 *)((longlong)puVar30 + -5) = 1;
        puVar30[-0x34] = puVar30 + -0x2a;
        puVar30[-0x39] = 0x142390b30;
        pdb_1411be200(puVar30 + -0x32,unaff_R14,(ulonglong)param_2 & 0xffffffff,
                      (ulonglong)param_3 & 0xffffffff);
        if (*(int *)(puVar30 + -0x32) == 4) {
          return;
        }
        puVar30[-0x2c] = puVar30[-0x30];
        puVar30[-0x2b] = puVar30[-0x2f];
        puVar30[-0x2e] = puVar30[-0x32];
        puVar30[-0x2d] = puVar30[-0x31];
        puVar15 = &UNK_1434e0000;
      }
      else {
        puVar30[-0x2c] = puVar30[-0x30];
        puVar30[-0x2b] = puVar30[-0x2f];
        puVar30[-0x2e] = puVar30[-0x32];
        puVar30[-0x2d] = puVar30[-0x31];
        puVar15 = &UNK_1434dffe8;
      }
      puVar30[-0x34] = puVar15;
                    /* WARNING: Subroutine does not return */
      puVar30[-0x39] = 0x142390b9e;
      pdb_142dc8170(&UNK_1434dfe58,0x2b,puVar30 + -0x2e,&UNK_1434dfe38);
    case (uint *)0x1429833aa:
      *(byte *)((longlong)unaff_RBX + 0x5d) = *(byte *)((longlong)unaff_RBX + 0x5d) & bVar26;
code_r0x0001429833ad:
      uVar48 = SUB84(param_2,0);
      uVar27 = *puVar31;
      uVar32 = puVar31[1];
      uVar38 = puVar31[3];
      puVar28 = puVar31 + 5;
      goto pdb_1423905a0;
    case (uint *)0x1429834f0:
      pcVar20 = (char *)((ulonglong)pbVar18 & 0xffffffffffffff10);
      *pcVar20 = *pcVar20 + (char)pcVar20;
      *pcVar20 = *pcVar20 + (char)pcVar20;
      goto LAB_1429836e4;
    case (uint *)0x142983502:
      pbVar18 = (byte *)(ulonglong)((uint)pbVar18 | 0xc84a91);
code_r0x000142983507:
                    /* WARNING: Could not recover jumptable at 0x00014298350e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((longlong)(int)param_1[(longlong)pbVar18] + (longlong)param_1))();
      return;
    case (uint *)0x142983517:
      unaff_RBX = (undefined8 *)
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                           bVar26 + (char)((ulonglong)param_2 >> 8));
code_r0x000142983564:
      unaff_R12 = *(ulonglong **)((longlong)register0x00000020 + -0x118);
      fVar40 = *(float *)(unaff_R12 + 2);
      uVar27 = *unaff_RBX;
      *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x142983577;
      cVar13 = pdb_140a00370(uVar27);
      if (cVar13 == '\0') {
code_r0x0001429835ff:
        fVar50 = *(float *)(*(longlong *)unaff_RSI + 0x58) / _DAT_142e37988;
code_r0x00014298360f:
        uVar48 = *(undefined4 *)((longlong)register0x00000020 + -0xfc);
        puVar25 = *(undefined4 **)((longlong)register0x00000020 + -0x108);
        *puVar25 = uVar48;
        fVar50 = fVar50 + *(float *)(unaff_R12 + 2);
      }
      else {
        *(float *)((longlong)register0x00000020 + -0x1d8) =
             _DAT_142f3e558 * unaff_XMM9_Da + _DAT_142f3e558 * unaff_XMM9_Da + unaff_XMM11_Da;
        *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x1429835b7;
        pdb_140deead0((undefined1 *)((longlong)register0x00000020 + -0x1c8));
        *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x1429835cb;
        cVar13 = pdb_140deec60((undefined1 *)((longlong)register0x00000020 + -0x1c8));
        if (cVar13 == '\0') goto code_r0x0001429835ff;
        uVar48 = *(undefined4 *)**(undefined8 **)((longlong)register0x00000020 + -0xf0);
        *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x1429835e6;
        cVar13 = pdb_140938ba0(uVar48);
        if (cVar13 == '\0') {
          fVar50 = *(float *)(*(longlong *)unaff_RSI + 0x58) / _DAT_142e37ae0;
          goto code_r0x00014298360f;
        }
        fVar50 = *(float *)(unaff_R12 + 2);
        uVar48 = *(undefined4 *)((longlong)register0x00000020 + -0xfc);
        puVar25 = *(undefined4 **)((longlong)register0x00000020 + -0x108);
      }
      fVar46 = _DAT_142e36f28;
      plVar11 = *(longlong **)((longlong)register0x00000020 + -0xd8);
      fVar49 = 0.0;
      if (0.0 <= fVar50) {
        fVar49 = fVar50;
      }
      fVar50 = _DAT_142e36f28;
      if (fVar49 <= _DAT_142e36f28) {
        fVar50 = fVar49;
      }
      *puVar25 = uVar48;
      *(float *)(unaff_R12 + 2) = fVar50;
      if ((fVar40 != 0.0) || (fVar50 <= 0.0)) {
        if ((fVar40 == _DAT_142e36f28) &&
           ((!NAN(fVar40) && !NAN(_DAT_142e36f28) && (fVar50 < fVar46)))) {
          *(undefined4 *)plVar11[2] = *(undefined4 *)((longlong)plVar11 + 0x1c);
          lVar16 = *plVar11;
          lVar33 = *(longlong *)(lVar16 + 0x30);
          uVar27 = *(undefined8 *)(lVar16 + 0x40);
          if (lVar33 == *(longlong *)(lVar16 + 0x20)) {
            *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x1429836c2;
            pdb_142d7e6e0(lVar16 + 0x20);
          }
          lVar19 = *(longlong *)(lVar16 + 0x28);
          lVar24 = lVar33 * 0x20;
          *(undefined4 *)(lVar19 + lVar24) = 0x15;
          goto code_r0x0001429836d4;
        }
      }
      else {
        *(undefined4 *)plVar11[2] = *(undefined4 *)((longlong)plVar11 + 0x1c);
        lVar16 = *plVar11;
        lVar33 = *(longlong *)(lVar16 + 0x30);
        uVar27 = *(undefined8 *)(lVar16 + 0x40);
        if (lVar33 == *(longlong *)(lVar16 + 0x20)) {
          *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x14298367a;
          pdb_142d7e6e0(lVar16 + 0x20);
        }
        lVar19 = *(longlong *)(lVar16 + 0x28);
        lVar24 = lVar33 * 0x20;
        *(undefined4 *)(lVar19 + lVar24) = 0x14;
code_r0x0001429836d4:
        *(undefined8 *)(lVar19 + 0x18 + lVar24) = uVar27;
        *(longlong *)(lVar16 + 0x30) = lVar33 + 1;
        *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      }
LAB_1429836e4:
      fVar40 = unaff_XMM9_Da * _DAT_142e3a74c;
      *(undefined8 *)((longlong)register0x00000020 + -0x200) = 0x142983700;
      auVar42._0_8_ = pdb_140dedcd0(&UNK_143607eb8);
      auVar42._8_8_ = extraout_XMM0_Qb_00;
      auVar41._4_12_ = auVar42._4_12_;
      auVar41._0_4_ = (float)auVar42._0_8_ * fVar40;
      *(undefined4 *)unaff_R15[2] = *(undefined4 *)((longlong)unaff_R15 + 0x1c);
      in_XMM1._8_8_ = 0;
      in_XMM1._0_8_ = *unaff_R12;
      pbVar18 = *(byte **)(*unaff_R15 + 0xa0);
      param_2 = (uint *)(*(longlong *)(*unaff_R15 + 0xa8) * 0x28);
code_r0x00014298372e:
      param_1 = (uint *)0x0;
      param_3 = pbVar18;
      do {
        bVar39 = param_2 == param_1;
code_r0x000142983743:
        if (bVar39) {
          return;
        }
        pbVar34 = param_3 + 0x10;
        param_3 = param_3 + 0x28;
        uVar37 = CONCAT44(-(uint)((int)((ulonglong)*(undefined8 *)pbVar34 >> 0x20) == in_XMM1._4_4_)
                          ,-(uint)((int)*(undefined8 *)pbVar34 == in_XMM1._0_4_));
code_r0x000142983753:
        auVar47._0_4_ = (undefined4)uVar37;
        uVar48 = (undefined4)(uVar37 >> 0x20);
        auVar47._4_4_ = auVar47._0_4_;
        auVar47._8_4_ = uVar48;
        auVar47._12_4_ = uVar48;
        uVar14 = movmskpd((int)param_4,auVar47);
        param_4 = (undefined8 *)(ulonglong)uVar14;
        unaff_R14 = param_1 + 10;
        param_1 = unaff_R14;
      } while (uVar14 != 3);
code_r0x000142983767:
      uVar14 = auVar41._0_4_;
      uVar48 = 0;
      uVar43 = auVar41._8_4_;
      uVar44 = auVar41._12_4_;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)puVar21[0x3c]) {
      case '\0':
        auVar41._0_4_ = (float)(uVar14 ^ _DAT_142e37820);
        auVar41._4_4_ = 0;
        auVar41._8_4_ = uVar43 ^ _UNK_142e37828;
        auVar41._12_4_ = uVar44 ^ _UNK_142e3782c;
      case '\x03':
        uVar48 = auVar41._0_4_;
        uVar14 = 0;
        break;
      case '\x02':
        uVar14 = uVar14 ^ _DAT_142e37820;
      case '\x01':
        break;
      default:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(uint *)(pbVar18 + -0x20 + (longlong)unaff_R14) = uVar14;
      *(undefined4 *)(pbVar18 + -0x1c + (longlong)unaff_R14) = uVar48;
      return;
    case (uint *)0x14298352d:
      goto code_r0x000142983564;
    case (uint *)0x142983753:
      goto code_r0x000142983753;
    case (uint *)0x14298375a:
      uVar14 = movmskps((int)unaff_R14,in_XMM2);
      param_1 = (uint *)(ulonglong)uVar14;
      goto code_r0x000142983753;
    case (uint *)0x142983762:
      goto code_r0x000142983753;
    case (uint *)0x142983769:
      LOCK();
      *pbVar18 = *pbVar18 + (char)pbVar18;
      UNLOCK();
      *(char *)(lVar16 + 0x10) = *(char *)(lVar16 + 0x10) + (char)((ulonglong)pbVar18 >> 8);
      out(CONCAT11(0x96,(char)param_2),(uint)pbVar18);
      goto code_r0x000142983767;
    case (uint *)0x143607f78:
      piVar2 = (int *)((longlong)*(int *)(&UNK_143607f78 + lVar33) + 0xf5c17eaf);
      *piVar2 = *piVar2 + (int)unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(pbVar18 + -0x20 + (longlong)unaff_R14) = auVar41._0_4_;
    *(float *)(pbVar18 + -0x1c + (longlong)unaff_R14) = unaff_XMM15_Da;
LAB_142982986:
    lVar16 = 1;
    if (unaff_RSI == (byte *)0x2) {
      return;
    }
  } while( true );
code_r0x000142982969:
  pbVar18 = &UNK_143607ef0 + uVar17;
  *pbVar18 = *pbVar18 << 4 | *pbVar18 >> 4;
  register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x1f8);
  goto code_r0x000142982740;
}

