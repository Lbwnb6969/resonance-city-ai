// VA 0x14116f320, PDB extent 667 bytes
// toolbar::mei::core::NodeContext::get_content_mut_impl<toolbar::mei::widgets::MenuButtonContent>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::get_content_mut_impl<toolbar::mei::widgets::MenuButtonContent>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 667 */

undefined8 pdb_14116f320(longlong *param_1,char param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  char unaff_BL;
  longlong unaff_RDI;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_4f0 [600];
  char cStack_298;
  char cStack_297;
  char cStack_296;
  char cStack_295;
  char cStack_294;
  char cStack_293;
  char cStack_292;
  char cStack_291;
  char cStack_290;
  char cStack_28f;
  char cStack_28e;
  char cStack_28d;
  char cStack_28c;
  char cStack_28b;
  char cStack_28a;
  char cStack_289;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar7 = pdb_1400af0a0(lVar2 + 0x1d0,param_1 + 1);
    unaff_RDI = *(longlong *)(lVar2 + 0x1b0);
    bVar16 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    pcVar11 = (char *)param_1[1];
    lVar12 = 0;
    while( true ) {
      uVar7 = uVar7 & *(ulonglong *)(lVar2 + 0x1b8);
      pcVar1 = (char *)(unaff_RDI + uVar7);
      auVar19[0] = -(*pcVar1 == auVar17[0]);
      auVar19[1] = -(pcVar1[1] == auVar17[1]);
      auVar19[2] = -(pcVar1[2] == auVar17[2]);
      auVar19[3] = -(pcVar1[3] == auVar17[3]);
      auVar19[4] = -(pcVar1[4] == auVar17[4]);
      auVar19[5] = -(pcVar1[5] == auVar17[5]);
      auVar19[6] = -(pcVar1[6] == auVar17[6]);
      auVar19[7] = -(pcVar1[7] == auVar17[7]);
      auVar19[8] = -(pcVar1[8] == auVar17[0]);
      auVar19[9] = -(pcVar1[9] == auVar17[1]);
      auVar19[10] = -(pcVar1[10] == auVar17[2]);
      auVar19[0xb] = -(pcVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(pcVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(pcVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(pcVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(pcVar1[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar15 = (uVar5 + uVar7 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (pcVar11 == *(char **)(unaff_RDI + -0xd8 + lVar15)) {
          unaff_RDI = unaff_RDI + lVar15;
          pbVar8 = *(byte **)(unaff_RDI + -0x38);
          if (pbVar8 == (byte *)0x0) goto LAB_14116f428;
          puVar9 = *(undefined **)(unaff_RDI + -0x30);
          goto LAB_14116f4d6;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      unaff_BL = param_2;
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  param_2 = unaff_BL;
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_14116f428:
  if (param_2 == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x270);
    LOCK();
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pdb_14119b370(auStack_4f0,_DAT_142f95190,1);
    pdb_140cb5c70(auStack_4f0,700);
    pub_142e32760(&cStack_298,auStack_4f0,600);
    uStack_40 = 0xffffffa0;
    uStack_3c = 0x2a00;
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(0x260,8);
    if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x260);
    }
    pcVar11 = &cStack_298;
    pub_142e32760(pbVar8,pcVar11,0x260);
    *(byte **)(unaff_RDI + -0x38) = pbVar8;
    puVar9 = &UNK_14329c948;
    *(undefined **)(unaff_RDI + -0x30) = &UNK_14329c948;
LAB_14116f4d6:
    uVar10 = (**(code **)(puVar9 + 0x28))(pbVar8);
    (**(code **)(pcVar11 + 0x18))(&cStack_298,uVar10);
    auVar17[0] = -(cStack_298 == DAT_14329bc20);
    auVar17[1] = -(cStack_297 == UNK_14329bc21);
    auVar17[2] = -(cStack_296 == UNK_14329bc22);
    auVar17[3] = -(cStack_295 == UNK_14329bc23);
    auVar17[4] = -(cStack_294 == UNK_14329bc24);
    auVar17[5] = -(cStack_293 == UNK_14329bc25);
    auVar17[6] = -(cStack_292 == UNK_14329bc26);
    auVar17[7] = -(cStack_291 == UNK_14329bc27);
    auVar17[8] = -(cStack_290 == UNK_14329bc28);
    auVar17[9] = -(cStack_28f == UNK_14329bc29);
    auVar17[10] = -(cStack_28e == UNK_14329bc2a);
    auVar17[0xb] = -(cStack_28d == UNK_14329bc2b);
    auVar17[0xc] = -(cStack_28c == UNK_14329bc2c);
    auVar17[0xd] = -(cStack_28b == UNK_14329bc2d);
    auVar17[0xe] = -(cStack_28a == UNK_14329bc2e);
    auVar17[0xf] = -(cStack_289 == UNK_14329bc2f);
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return uVar10;
    }
    pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
}

