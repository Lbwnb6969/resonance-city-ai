// VA 0x140728b00, PDB extent 2416 bytes
// toolbar::mei::widgets::impl$23::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::impl$23::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 2416 */

undefined1 (*) [16] pdb_140728b00(undefined1 (*param_1) [16],ulonglong *param_2,longlong param_3)

{
  byte *******pppppppbVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  byte ******ppppppbVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *****pppppbVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  byte *****pppppbVar16;
  byte ******unaff_R12;
  undefined8 unaff_R13;
  undefined7 uVar18;
  byte ******ppppppbVar17;
  undefined1 *puVar19;
  byte *******arg1;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  byte ******ppppppbStack_1b8;
  byte ******ppppppbStack_1b0;
  byte bStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  char cStack_180;
  char cStack_17f;
  byte ******ppppppbStack_178;
  byte ******ppppppbStack_170;
  ulonglong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_130;
  byte ******ppppppbStack_128;
  byte ******ppppppbStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte ******ppppppbStack_e0;
  byte ******ppppppbStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  char cStack_a7;
  undefined1 (*pauStack_a0) [16];
  ulonglong *puStack_98;
  byte *****pppppbStack_90;
  byte ******ppppppbStack_88;
  byte *****pppppbStack_80;
  byte *****pppppbStack_78;
  byte ******ppppppbStack_70;
  char cStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar20 = *(longlong *)(param_3 + 0x30);
  lStack_130 = param_3;
  pauStack_a0 = param_1;
  if (lVar20 != 0) {
    unaff_R12 = *(byte *******)(param_3 + 0x38);
    ppppppbStack_e0 = (byte ******)0x0;
    ppppppbStack_d8 = (byte ******)0x8;
    uStack_d0 = 0;
    puStack_98 = param_2;
    if (unaff_R12[0x31] == (byte *****)0x0) {
      pppppbVar12 = (byte *****)0x0;
    }
    else {
      uVar10 = pdb_1400aef40(unaff_R12 + 0x32,param_2 + 0xf);
      bVar23 = (byte)(uVar10 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
      auVar24 = pshuflw(auVar24,auVar24,0);
      lVar13 = 0;
      while( true ) {
        uVar10 = uVar10 & (ulonglong)unaff_R12[0x2f];
        auVar2 = *(undefined1 (*) [16])((longlong)unaff_R12[0x2e] + uVar10);
        auVar26[0] = -(auVar2[0] == auVar24[0]);
        auVar26[1] = -(auVar2[1] == auVar24[1]);
        auVar26[2] = -(auVar2[2] == auVar24[2]);
        auVar26[3] = -(auVar2[3] == auVar24[3]);
        auVar26[4] = -(auVar2[4] == auVar24[4]);
        auVar26[5] = -(auVar2[5] == auVar24[5]);
        auVar26[6] = -(auVar2[6] == auVar24[6]);
        auVar26[7] = -(auVar2[7] == auVar24[7]);
        auVar26[8] = -(auVar2[8] == auVar24[0]);
        auVar26[9] = -(auVar2[9] == auVar24[1]);
        auVar26[10] = -(auVar2[10] == auVar24[2]);
        auVar26[0xb] = -(auVar2[0xb] == auVar24[3]);
        auVar26[0xc] = -(auVar2[0xc] == auVar24[4]);
        auVar26[0xd] = -(auVar2[0xd] == auVar24[5]);
        auVar26[0xe] = -(auVar2[0xe] == auVar24[6]);
        auVar26[0xf] = -(auVar2[0xf] == auVar24[7]);
        uVar15 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
        ;
        uVar14 = (uint)uVar15;
        while (uVar15 != 0) {
          uVar3 = 0;
          for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          pppppbVar16 = unaff_R12[0x2e] + (uVar3 + uVar10 & (ulonglong)unaff_R12[0x2f]) * -4;
          if ((char)param_2[0xf] == *(char *)(pppppbVar16 + -4)) goto LAB_140728c51;
          uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
        }
        auVar25[0] = -(auVar2[0] == -1);
        auVar25[1] = -(auVar2[1] == -1);
        auVar25[2] = -(auVar2[2] == -1);
        auVar25[3] = -(auVar2[3] == -1);
        auVar25[4] = -(auVar2[4] == -1);
        auVar25[5] = -(auVar2[5] == -1);
        auVar25[6] = -(auVar2[6] == -1);
        auVar25[7] = -(auVar2[7] == -1);
        auVar25[8] = -(auVar2[8] == -1);
        auVar25[9] = -(auVar2[9] == -1);
        auVar25[10] = -(auVar2[10] == -1);
        auVar25[0xb] = -(auVar2[0xb] == -1);
        auVar25[0xc] = -(auVar2[0xc] == -1);
        auVar25[0xd] = -(auVar2[0xd] == -1);
        auVar25[0xe] = -(auVar2[0xe] == -1);
        auVar25[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x1f,0) & 1) != 0) || (SUB161(auVar25 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
        uVar10 = uVar10 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
      pppppbVar16 = (byte *****)0x0;
LAB_140728c51:
      pppppbVar12 = pppppbVar16 + -3;
      if (pppppbVar16 == (byte *****)0x0) {
        pppppbVar12 = (byte *****)0x0;
      }
    }
    ppppppbStack_70 = (byte ******)0x8;
    uVar10 = 0;
    ppppppbVar17 = (byte ******)0x0;
    do {
      if ((ppppppbVar17 == (byte ******)0x0) || (ppppppbVar17 == (byte ******)pppppbStack_78)) {
        if ((pppppbVar12 == (byte *****)0x0) || (pppppbVar12[2] == (byte ****)0x0))
        goto LAB_140728db6;
        ppppppbVar17 = (byte ******)pppppbVar12[1];
        pppppbStack_78 = (byte *****)((longlong)ppppppbVar17 + (longlong)pppppbVar12[2] * 2);
        pppppbVar12 = (byte *****)0x0;
      }
      uVar8 = pdb_140a44d50(*(undefined1 *)ppppppbVar17,*(undefined1 *)((longlong)ppppppbVar17 + 1))
      ;
      pdb_140a441b0(&ppppppbStack_178,unaff_R12,lVar20,uVar8);
      uVar11 = uStack_168;
      ppppppbVar6 = ppppppbStack_170;
      if (!SBORROW8(0,(longlong)ppppppbStack_178)) {
        ppppppbStack_128 = ppppppbStack_178;
        ppppppbStack_120 = ppppppbStack_170;
        uStack_118 = uStack_168;
        if ((longlong)ppppppbStack_e0 - uVar10 < uStack_168) {
          pdb_142d7f1b0(&ppppppbStack_e0,uVar10,uStack_168,8,0x20);
          ppppppbStack_70 = ppppppbStack_d8;
          uVar10 = uStack_d0;
LAB_140728d24:
          pub_142e32760(ppppppbStack_70 + uVar10 * 4,ppppppbVar6,uVar11 << 5);
          uVar10 = uStack_d0;
        }
        else if (uStack_168 != 0) goto LAB_140728d24;
        uVar10 = uVar10 + uVar11;
        uStack_d0 = uVar10;
        if ((byte *******)ppppppbStack_128 != (byte *******)0x0) {
          pub_1406abac0((byte *)ppppppbStack_120,(longlong)ppppppbStack_128 << 5,8);
        }
      }
      ppppppbVar17 = (byte ******)((longlong)ppppppbVar17 + 2);
    } while( true );
  }
  uVar18 = (undefined7)((ulonglong)unaff_R13 >> 8);
  arg1 = (byte *******)0x8000000000000000;
  bVar22 = SBORROW8(0,*param_2);
joined_r0x000140729090:
  uVar10 = CONCAT71(uVar18,1);
  if (!bVar22) {
LAB_140729092:
    uVar10 = param_2[4];
    if (!SBORROW8(0,uVar10)) {
      if (uVar10 != 0) {
        pub_1406abac0((byte *)param_2[5],uVar10,1);
      }
      if (param_2[8] != 0) {
        pub_1406abac0((byte *)param_2[9],param_2[8] << 2,4);
      }
    }
    param_2[4] = 0x8000000000000000;
    uVar10 = *param_2;
    if ((!SBORROW8(0,uVar10)) && (uVar10 != 0)) {
      pub_1406abac0((byte *)param_2[1],uVar10,1);
    }
    *param_2 = (ulonglong)arg1;
    param_2[1] = (ulonglong)unaff_R12;
    *(undefined4 *)(param_2 + 2) = unaff_XMM6_Da;
    *(undefined4 *)((longlong)param_2 + 0x14) = unaff_XMM6_Db;
    *(undefined4 *)(param_2 + 3) = unaff_XMM6_Dc;
    *(undefined4 *)((longlong)param_2 + 0x1c) = unaff_XMM6_Dd;
    uVar10 = 0;
  }
LAB_140729103:
  uVar11 = param_2[4];
joined_r0x000140729277:
  puVar5 = param_2 + 4;
  if (SBORROW8(0,uVar11)) {
    if (!SBORROW8(0,*param_2)) {
      cStack_61 = (char)uVar10;
      ppppppbStack_88 = (byte ******)arg1;
      pppppbStack_80 = (byte *****)unaff_R12;
      pdb_140f5fd10(&ppppppbStack_128,param_2[1],param_2[2]);
      pppppbStack_90 = (byte *****)CONCAT44(pppppbStack_90._4_4_,(int)uVar10);
      ppppppbStack_d8 = (byte ******)pdb_140001020;
      ppppppbStack_e0 = (byte ******)&ppppppbStack_128;
      pppppbStack_78 = (byte *****)unaff_R12;
      ppppppbStack_70 = (byte ******)arg1;
      pdb_140f60760(&ppppppbStack_178,&UNK_142fa6005,&ppppppbStack_e0);
      if ((!SBORROW8(0,(longlong)ppppppbStack_128)) &&
         ((byte *******)ppppppbStack_128 != (byte *******)0x0)) {
        pub_1406abac0((byte *)ppppppbStack_120,(ulonglong)ppppppbStack_128,1);
      }
      arg1 = (byte *******)ppppppbStack_70;
      unaff_R12 = (byte ******)pppppbStack_78;
      ppppppbStack_128 = ppppppbStack_178;
      ppppppbStack_120 = ppppppbStack_170;
      uStack_118 = uStack_168;
      uVar11 = *puVar5;
      uVar10 = (ulonglong)pppppbStack_90 & 0xffffffff;
      if (!SBORROW8(0,uVar11)) {
        if (uVar11 != 0) {
          pub_1406abac0((byte *)param_2[5],uVar11,1);
        }
        if (param_2[8] != 0) {
          pub_1406abac0((byte *)param_2[9],param_2[8] << 2,4);
        }
      }
      param_2[6] = uStack_118;
      *puVar5 = (ulonglong)ppppppbStack_128;
      param_2[5] = (ulonglong)ppppppbStack_120;
      *(undefined4 *)(param_2 + 7) = 0x42000000;
      *(undefined1 *)((longlong)param_2 + 0x3c) = 0;
      param_2[8] = 0;
      param_2[9] = 4;
      *(undefined1 (*) [16])(param_2 + 10) = (undefined1  [16])0x0;
      *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
      *(undefined1 *)((longlong)param_2 + 100) = 0;
      if (!SBORROW8(0,param_2[4])) goto LAB_14072927d;
    }
    cVar7 = (char)uVar10;
    *pauStack_a0 = (undefined1  [16])0x0;
  }
  else {
LAB_14072927d:
    cVar7 = (char)uVar10;
    ppppppbStack_88 = (byte ******)arg1;
    pppppbStack_80 = (byte *****)unaff_R12;
    cStack_61 = cVar7;
    pdb_140727230(pauStack_a0,puVar5,lStack_130);
  }
  if ((cVar7 != '\0') && (((ulonglong)arg1 & 0x7fffffffffffffff) != 0)) {
    pub_1406abac0((byte *)unaff_R12,(ulonglong)arg1,1);
  }
  return pauStack_a0;
LAB_140728db6:
  if (uVar10 == 0) {
    if ((byte *******)ppppppbStack_e0 != (byte *******)0x0) {
      pub_1406abac0((byte *)ppppppbStack_d8,(longlong)ppppppbStack_e0 << 5,8);
    }
    bVar21 = SBORROW8(0,*puStack_98);
    arg1 = (byte *******)0x8000000000000000;
    bVar22 = true;
LAB_140729087:
    param_2 = puStack_98;
    if (bVar21) {
      uVar18 = (undefined7)((ulonglong)ppppppbVar17 >> 8);
      goto joined_r0x000140729090;
    }
    goto LAB_140729092;
  }
  uVar11 = pdb_140f3cb70(puStack_98 + 0xd);
  ppppppbVar6 = ppppppbStack_d8;
  uVar11 = uVar11 >> 1;
  ppppppbStack_70 = ppppppbStack_e0;
  if ((uVar11 | uVar10) >> 0x20 == 0) {
    ppppppbVar17 = (byte ******)((uVar11 & 0xffffffff) % (uVar10 & 0xffffffff));
  }
  else {
    ppppppbVar17 = (byte ******)(uVar11 % uVar10);
  }
  pppppppbVar1 = (byte *******)(ppppppbStack_d8 + (longlong)ppppppbVar17 * 4);
  if (ppppppbVar17 != (byte ******)0x0) {
    lVar20 = 0;
    do {
      if (*(ulonglong *)((longlong)ppppppbVar6 + lVar20) != 0) {
        pub_1406abac0(*(byte **)((longlong)ppppppbVar6 + lVar20 + 8),
                      *(ulonglong *)((longlong)ppppppbVar6 + lVar20),1);
      }
      lVar20 = lVar20 + 0x20;
    } while ((longlong)ppppppbVar17 * 0x20 != lVar20);
  }
  arg1 = (byte *******)*pppppppbVar1;
  pppppbStack_78 = (byte *****)pppppppbVar1[1];
  unaff_XMM6_Da = *(undefined4 *)(pppppppbVar1 + 2);
  unaff_XMM6_Db = *(undefined4 *)((longlong)pppppppbVar1 + 0x14);
  unaff_XMM6_Dc = *(undefined4 *)(pppppppbVar1 + 3);
  unaff_XMM6_Dd = *(undefined4 *)((longlong)pppppppbVar1 + 0x1c);
  pppppbStack_90 = (byte *****)pppppppbVar1[2];
  if (uVar10 << 5 != (longlong)ppppppbVar17 * 0x20 + 0x20) {
    ppppppbVar17 = (byte ******)~(ulonglong)ppppppbVar17;
    puVar19 = (undefined1 *)((longlong)ppppppbVar17 + uVar10);
    lVar20 = 0;
    do {
      if (pppppppbVar1[lVar20 * 4 + 4] != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppppbVar1[lVar20 * 4 + 5],(ulonglong)pppppppbVar1[lVar20 * 4 + 4],1
                     );
      }
      lVar20 = lVar20 + 1;
      puVar19 = puVar19 + -1;
    } while (puVar19 != (undefined1 *)0x0);
  }
  if ((byte *******)ppppppbStack_70 != (byte *******)0x0) {
    pub_1406abac0((byte *)ppppppbVar6,(longlong)ppppppbStack_70 << 5,8);
  }
  unaff_R12 = (byte ******)pppppbStack_78;
  param_2 = puStack_98;
  bVar21 = SBORROW8(0,*puStack_98);
  bVar22 = SBORROW8(0,(longlong)arg1);
  if ((bVar22) || (SBORROW8(0,*puStack_98))) goto LAB_140729087;
  uVar10 = puStack_98[1];
  uVar11 = puStack_98[2];
  pppppbStack_80 = pppppbStack_78;
  cStack_61 = 1;
  ppppppbStack_88 = (byte ******)arg1;
  pdb_140f3ddd0(&ppppppbStack_1b8,pppppbStack_78,pppppbStack_90);
  pppppbStack_80 = (byte *****)unaff_R12;
  cStack_61 = '\x01';
  ppppppbStack_88 = (byte ******)arg1;
  pdb_140f3ddd0(&ppppppbStack_e0,uVar10,uVar11);
  uVar18 = (undefined7)((ulonglong)ppppppbVar17 >> 8);
  if (((((ppppppbStack_1b0 != ppppppbStack_d8) || (cStack_180 != cStack_a8)) ||
       (cStack_17f != '\x02')) || ((cStack_a7 != '\x02' || ((byte)uStack_d0 < 3 != bStack_1a8 < 3)))
      ) || (iVar9 = pub_142e32750(ppppppbStack_1b8,ppppppbStack_e0), iVar9 != 0)) {
    uStack_168 = CONCAT71(uStack_1a7,bStack_1a8);
    uStack_148 = uStack_188;
    uStack_158 = uStack_198;
    uStack_150 = uStack_190;
    uStack_160 = uStack_1a0;
    ppppppbStack_178 = ppppppbStack_1b8;
    ppppppbStack_170 = ppppppbStack_1b0;
    uStack_f8 = uStack_b0;
    uStack_108 = uStack_c0;
    uStack_100 = uStack_b8;
    uStack_118 = uStack_d0;
    uStack_110 = uStack_c8;
    ppppppbStack_128 = ppppppbStack_e0;
    ppppppbStack_120 = ppppppbStack_d8;
    pppppbStack_80 = (byte *****)unaff_R12;
    cStack_61 = '\x01';
    ppppppbStack_88 = (byte ******)arg1;
    cVar7 = pdb_1411a4c10(&ppppppbStack_178,&ppppppbStack_128);
    uVar10 = CONCAT71(uVar18,1);
    if (cVar7 == '\0') goto LAB_140729092;
    goto LAB_140729103;
  }
  uVar10 = CONCAT71(uVar18,1);
  uVar11 = param_2[4];
  goto joined_r0x000140729277;
}

