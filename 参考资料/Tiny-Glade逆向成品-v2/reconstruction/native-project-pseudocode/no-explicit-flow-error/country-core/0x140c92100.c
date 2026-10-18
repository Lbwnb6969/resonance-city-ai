// VA 0x140c92100, PDB extent 1145 bytes
// country_core::render::mesh::Mesh::set_attribute<alloc::vec::Vec<array$<f32,4>,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::mesh::Mesh::set_attribute<alloc::vec::Vec<array$<f32,4>,alloc::alloc::Global>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 1145 */

void pdb_140c92100(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
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
  char cVar25;
  ushort uVar26;
  int iVar27;
  ulonglong uVar28;
  byte *pbVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong lVar34;
  undefined8 uVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar39 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uVar31 = uStack_c0;
  lVar34 = lStack_b8;
  plStack_b0 = param_4;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uStack_81 = 1;
    uVar28 = pdb_1400af950(param_1 + 0x58,param_2,param_3);
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar32 = *(ulonglong *)(param_1 + 0x40);
    bVar36 = (byte)(uVar28 >> 0x39);
    auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
    auVar37 = pshuflw(auVar37,auVar37,0);
    lVar30 = 0;
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    do {
      uVar28 = uVar28 & uVar32;
      pcVar1 = (char *)(lVar2 + uVar28);
      cVar10 = *pcVar1;
      cVar11 = pcVar1[1];
      cVar12 = pcVar1[2];
      cVar13 = pcVar1[3];
      cVar14 = pcVar1[4];
      cVar15 = pcVar1[5];
      cVar16 = pcVar1[6];
      cVar17 = pcVar1[7];
      cVar18 = pcVar1[8];
      cVar19 = pcVar1[9];
      cVar20 = pcVar1[10];
      cVar21 = pcVar1[0xb];
      cVar22 = pcVar1[0xc];
      cVar23 = pcVar1[0xd];
      cVar24 = pcVar1[0xe];
      cVar25 = pcVar1[0xf];
      auVar38[0] = -(cVar10 == auVar37[0]);
      auVar38[1] = -(cVar11 == auVar37[1]);
      auVar38[2] = -(cVar12 == auVar37[2]);
      auVar38[3] = -(cVar13 == auVar37[3]);
      auVar38[4] = -(cVar14 == auVar37[4]);
      auVar38[5] = -(cVar15 == auVar37[5]);
      auVar38[6] = -(cVar16 == auVar37[6]);
      auVar38[7] = -(cVar17 == auVar37[7]);
      auVar38[8] = -(cVar18 == auVar37[0]);
      auVar38[9] = -(cVar19 == auVar37[1]);
      auVar38[10] = -(cVar20 == auVar37[2]);
      auVar38[0xb] = -(cVar21 == auVar37[3]);
      auVar38[0xc] = -(cVar22 == auVar37[4]);
      auVar38[0xd] = -(cVar23 == auVar37[5]);
      auVar38[0xe] = -(cVar24 == auVar37[6]);
      auVar38[0xf] = -(cVar25 == auVar37[7]);
      uVar26 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
      uVar33 = (uint)uVar26;
      uVar31 = uStack_c0;
      lVar34 = lStack_b8;
      while (lStack_b8 = lVar30, uStack_c0 = uVar28, uVar26 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar33; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar34 = (uVar4 + uStack_c0 & uVar32) * -0x38;
        if (param_3 == *(ulonglong *)(lVar2 + -0x28 + lVar34)) {
          lVar34 = lVar34 + lVar2;
          iVar27 = pub_142e32750(param_2,*(undefined8 *)(lVar34 + -0x30),param_3);
          if (iVar27 != 0) goto LAB_140c921d9;
          pbStack_98 = (byte *)plStack_b0[2];
          lStack_a8 = *plStack_b0;
          lStack_a0 = plStack_b0[1];
          uStack_81 = 0;
          pdb_140e46bb0(&uStack_f8,&lStack_a8,&UNK_143076cd0);
          switch(*(undefined8 *)(lVar34 + -0x20)) {
          case 0:
          case 2:
            if (*(longlong *)(lVar34 + -0x18) == 0) goto LAB_140c923c0;
            pbVar29 = *(byte **)(lVar34 + -0x10);
            uVar31 = *(longlong *)(lVar34 + -0x18) << 2;
            break;
          case 1:
            if (*(longlong *)(lVar34 + -0x18) == 0) goto LAB_140c923c0;
            pbVar29 = *(byte **)(lVar34 + -0x10);
            uVar31 = *(longlong *)(lVar34 + -0x18) << 3;
            uVar32 = 2;
            goto code_r0x000140c923bb;
          case 3:
            if (*(longlong *)(lVar34 + -0x18) == 0) goto LAB_140c923c0;
            pbVar29 = *(byte **)(lVar34 + -0x10);
            uVar31 = *(longlong *)(lVar34 + -0x18) << 3;
            break;
          case 4:
            if (*(longlong *)(lVar34 + -0x18) == 0) goto LAB_140c923c0;
            pbVar29 = *(byte **)(lVar34 + -0x10);
            uVar31 = *(longlong *)(lVar34 + -0x18) * 0xc;
            break;
          default:
            if (*(longlong *)(lVar34 + -0x18) == 0) goto LAB_140c923c0;
            pbVar29 = *(byte **)(lVar34 + -0x10);
            uVar31 = *(longlong *)(lVar34 + -0x18) << 4;
          }
          uVar32 = 4;
code_r0x000140c923bb:
          pub_1406abac0(pbVar29,uVar31,uVar32);
LAB_140c923c0:
          *(undefined8 *)(lVar34 + -0x10) = uStack_e8;
          *(undefined8 *)(lVar34 + -8) = uStack_e0;
          *(undefined8 *)(lVar34 + -0x20) = uStack_f8;
          *(undefined8 *)(lVar34 + -0x18) = uStack_f0;
          return;
        }
LAB_140c921d9:
        uVar26 = (ushort)(uVar33 - 1) & (ushort)uVar33;
        uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar26);
        uVar28 = uStack_c0;
        lVar30 = lStack_b8;
        uVar31 = uStack_c0;
        lVar34 = lStack_b8;
      }
      auVar39[0] = -(cVar10 == (char)iVar6);
      auVar39[1] = -(cVar11 == (char)((uint)iVar6 >> 8));
      auVar39[2] = -(cVar12 == (char)((uint)iVar6 >> 0x10));
      auVar39[3] = -(cVar13 == (char)((uint)iVar6 >> 0x18));
      auVar39[4] = -(cVar14 == (char)iVar7);
      auVar39[5] = -(cVar15 == (char)((uint)iVar7 >> 8));
      auVar39[6] = -(cVar16 == (char)((uint)iVar7 >> 0x10));
      auVar39[7] = -(cVar17 == (char)((uint)iVar7 >> 0x18));
      auVar39[8] = -(cVar18 == (char)iVar8);
      auVar39[9] = -(cVar19 == (char)((uint)iVar8 >> 8));
      auVar39[10] = -(cVar20 == (char)((uint)iVar8 >> 0x10));
      auVar39[0xb] = -(cVar21 == (char)((uint)iVar8 >> 0x18));
      auVar39[0xc] = -(cVar22 == (char)iVar9);
      auVar39[0xd] = -(cVar23 == (char)((uint)iVar9 >> 8));
      auVar39[0xe] = -(cVar24 == (char)((uint)iVar9 >> 0x10));
      auVar39[0xf] = -(cVar25 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      uVar28 = uStack_c0 + lStack_b8 + 0x10;
      lVar30 = lStack_b8 + 0x10;
      uStack_c0 = uVar31;
      lStack_b8 = lVar34;
    } while( true );
  }
  lStack_b8 = lVar34;
  uStack_c0 = uVar31;
  if (-1 < (longlong)param_3) {
    if (param_3 == 0) {
      pbVar29 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar35 = 1;
      pbVar29 = pub_1406abab0(param_3,1);
      if (pbVar29 == (byte *)0x0) goto LAB_140c9221a;
      pub_142e32760(pbVar29,param_2,param_3);
    }
    pbStack_98 = (byte *)plStack_b0[2];
    lStack_a8 = *plStack_b0;
    lStack_a0 = plStack_b0[1];
    uStack_82 = 1;
    uStack_d8 = param_3;
    pbStack_d0 = pbVar29;
    uStack_c8 = param_3;
    pdb_140e46bb0(&uStack_f8,&lStack_a8,&UNK_143076ce8);
    uStack_82 = 0;
    pdb_1417bbba0(&lStack_a8,param_1 + 0x38,&uStack_d8,&uStack_f8);
    if (lStack_a8 != 6) {
      switch(lStack_a8) {
      case 0:
      case 2:
        if (lStack_a0 == 0) {
          return;
        }
        uVar31 = lStack_a0 << 2;
        break;
      case 1:
        if (lStack_a0 == 0) {
          return;
        }
        pub_1406abac0(pbStack_98,lStack_a0 << 3,2);
        return;
      case 3:
        if (lStack_a0 == 0) {
          return;
        }
        uVar31 = lStack_a0 << 3;
        break;
      case 4:
        if (lStack_a0 == 0) {
          return;
        }
        uVar31 = lStack_a0 * 0xc;
        break;
      default:
        if (lStack_a0 == 0) {
          return;
        }
        uVar31 = lStack_a0 << 4;
      }
      pub_1406abac0(pbStack_98,uVar31,4);
    }
    return;
  }
  uVar35 = 0;
LAB_140c9221a:
  uStack_81 = 1;
  pdb_142dc7e2a(uVar35,param_3);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

