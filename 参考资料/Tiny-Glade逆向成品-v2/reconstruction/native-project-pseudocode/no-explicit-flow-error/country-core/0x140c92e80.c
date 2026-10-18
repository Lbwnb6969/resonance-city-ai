// VA 0x140c92e80, PDB extent 881 bytes
// country_core::render::mesh::Mesh::set_attribute<enum2$<rhapsody::vertex::VertexAttributeValues> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::mesh::Mesh::set_attribute<enum2$<rhapsody::vertex::VertexAttributeValues> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 881 */

void pdb_140c92e80(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4)

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
  undefined8 uVar26;
  undefined8 uVar27;
  ushort uVar28;
  int iVar29;
  ulonglong uVar30;
  byte *pbVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  longlong lVar36;
  undefined8 uVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined1 auVar41 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  byte *pbStack_a0;
  undefined8 *puStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uVar33 = uStack_c0;
  lVar36 = lStack_b8;
  puStack_90 = param_4;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uStack_81 = 1;
    uVar30 = pdb_1400af950(param_1 + 0x58,param_2,param_3);
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar34 = *(ulonglong *)(param_1 + 0x40);
    bVar38 = (byte)(uVar30 >> 0x39);
    auVar39 = ZEXT216(CONCAT11(bVar38,bVar38));
    auVar39 = pshuflw(auVar39,auVar39,0);
    lVar32 = 0;
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
      uVar30 = uVar30 & uVar34;
      pcVar1 = (char *)(lVar2 + uVar30);
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
      auVar40[0] = -(cVar10 == auVar39[0]);
      auVar40[1] = -(cVar11 == auVar39[1]);
      auVar40[2] = -(cVar12 == auVar39[2]);
      auVar40[3] = -(cVar13 == auVar39[3]);
      auVar40[4] = -(cVar14 == auVar39[4]);
      auVar40[5] = -(cVar15 == auVar39[5]);
      auVar40[6] = -(cVar16 == auVar39[6]);
      auVar40[7] = -(cVar17 == auVar39[7]);
      auVar40[8] = -(cVar18 == auVar39[0]);
      auVar40[9] = -(cVar19 == auVar39[1]);
      auVar40[10] = -(cVar20 == auVar39[2]);
      auVar40[0xb] = -(cVar21 == auVar39[3]);
      auVar40[0xc] = -(cVar22 == auVar39[4]);
      auVar40[0xd] = -(cVar23 == auVar39[5]);
      auVar40[0xe] = -(cVar24 == auVar39[6]);
      auVar40[0xf] = -(cVar25 == auVar39[7]);
      uVar28 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar35 = (uint)uVar28;
      uVar33 = uStack_c0;
      lVar36 = lStack_b8;
      while (lStack_b8 = lVar32, uStack_c0 = uVar30, uVar28 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar35; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar36 = (uVar4 + uStack_c0 & uVar34) * -0x38;
        if (param_3 == *(ulonglong *)(lVar2 + -0x28 + lVar36)) {
          lVar36 = lVar36 + lVar2;
          iVar29 = pub_142e32750(param_2,*(undefined8 *)(lVar36 + -0x30),param_3);
          if (iVar29 != 0) goto LAB_140c92f59;
          switch(*(undefined8 *)(lVar36 + -0x20)) {
          case 0:
          case 2:
            if (*(longlong *)(lVar36 + -0x18) == 0) goto LAB_140c930f7;
            pbVar31 = *(byte **)(lVar36 + -0x10);
            uVar33 = *(longlong *)(lVar36 + -0x18) << 2;
            break;
          case 1:
            if (*(longlong *)(lVar36 + -0x18) == 0) goto LAB_140c930f7;
            pbVar31 = *(byte **)(lVar36 + -0x10);
            uVar33 = *(longlong *)(lVar36 + -0x18) << 3;
            uVar34 = 2;
            goto code_r0x000140c930f2;
          case 3:
            if (*(longlong *)(lVar36 + -0x18) == 0) goto LAB_140c930f7;
            pbVar31 = *(byte **)(lVar36 + -0x10);
            uVar33 = *(longlong *)(lVar36 + -0x18) << 3;
            break;
          case 4:
            if (*(longlong *)(lVar36 + -0x18) == 0) goto LAB_140c930f7;
            pbVar31 = *(byte **)(lVar36 + -0x10);
            uVar33 = *(longlong *)(lVar36 + -0x18) * 0xc;
            break;
          default:
            if (*(longlong *)(lVar36 + -0x18) == 0) goto LAB_140c930f7;
            pbVar31 = *(byte **)(lVar36 + -0x10);
            uVar33 = *(longlong *)(lVar36 + -0x18) << 4;
          }
          uVar34 = 4;
code_r0x000140c930f2:
          pub_1406abac0(pbVar31,uVar33,uVar34);
LAB_140c930f7:
          uVar37 = *puStack_90;
          uVar26 = puStack_90[1];
          uVar27 = puStack_90[3];
          *(undefined8 *)(lVar36 + -0x10) = puStack_90[2];
          *(undefined8 *)(lVar36 + -8) = uVar27;
          *(undefined8 *)(lVar36 + -0x20) = uVar37;
          *(undefined8 *)(lVar36 + -0x18) = uVar26;
          return;
        }
LAB_140c92f59:
        uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
        uVar30 = uStack_c0;
        lVar32 = lStack_b8;
        uVar33 = uStack_c0;
        lVar36 = lStack_b8;
      }
      auVar41[0] = -(cVar10 == (char)iVar6);
      auVar41[1] = -(cVar11 == (char)((uint)iVar6 >> 8));
      auVar41[2] = -(cVar12 == (char)((uint)iVar6 >> 0x10));
      auVar41[3] = -(cVar13 == (char)((uint)iVar6 >> 0x18));
      auVar41[4] = -(cVar14 == (char)iVar7);
      auVar41[5] = -(cVar15 == (char)((uint)iVar7 >> 8));
      auVar41[6] = -(cVar16 == (char)((uint)iVar7 >> 0x10));
      auVar41[7] = -(cVar17 == (char)((uint)iVar7 >> 0x18));
      auVar41[8] = -(cVar18 == (char)iVar8);
      auVar41[9] = -(cVar19 == (char)((uint)iVar8 >> 8));
      auVar41[10] = -(cVar20 == (char)((uint)iVar8 >> 0x10));
      auVar41[0xb] = -(cVar21 == (char)((uint)iVar8 >> 0x18));
      auVar41[0xc] = -(cVar22 == (char)iVar9);
      auVar41[0xd] = -(cVar23 == (char)((uint)iVar9 >> 8));
      auVar41[0xe] = -(cVar24 == (char)((uint)iVar9 >> 0x10));
      auVar41[0xf] = -(cVar25 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar41 >> 0x3f,0) & 1) != 0) || (SUB161(auVar41 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar41 >> 0x4f,0) & 1) != 0) || (SUB161(auVar41 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar41 >> 0x5f,0) & 1) != 0) || (SUB161(auVar41 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar41 >> 0x6f,0) & 1) != 0) || (SUB161(auVar41 >> 0x77,0) & 1) != 0) ||
          auVar41[0xf] < '\0') break;
      uVar30 = uStack_c0 + lStack_b8 + 0x10;
      lVar32 = lStack_b8 + 0x10;
      uStack_c0 = uVar33;
      lStack_b8 = lVar36;
    } while( true );
  }
  lStack_b8 = lVar36;
  uStack_c0 = uVar33;
  if ((longlong)param_3 < 0) {
    uVar37 = 0;
LAB_140c92f9a:
    uStack_81 = 1;
    pdb_142dc7e2a(uVar37,param_3);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_3 == 0) {
    pbVar31 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar37 = 1;
    pbVar31 = pub_1406abab0(param_3,1);
    if (pbVar31 == (byte *)0x0) goto LAB_140c92f9a;
    pub_142e32760(pbVar31,param_2,param_3);
  }
  uStack_f8 = *puStack_90;
  uStack_f0 = puStack_90[1];
  uStack_e8 = *(undefined4 *)(puStack_90 + 2);
  uStack_e4 = *(undefined4 *)((longlong)puStack_90 + 0x14);
  uStack_e0 = *(undefined4 *)(puStack_90 + 3);
  uStack_dc = *(undefined4 *)((longlong)puStack_90 + 0x1c);
  uStack_81 = 0;
  uStack_d8 = param_3;
  pbStack_d0 = pbVar31;
  uStack_c8 = param_3;
  pdb_1417bbba0(&lStack_b0,param_1 + 0x38,&uStack_d8,&uStack_f8);
  if (lStack_b0 == 6) {
    return;
  }
  switch(lStack_b0) {
  case 0:
  case 2:
    if (lStack_a8 == 0) {
      return;
    }
    uVar33 = lStack_a8 << 2;
    break;
  case 1:
    if (lStack_a8 == 0) {
      return;
    }
    uVar33 = lStack_a8 << 3;
    uVar34 = 2;
    goto code_r0x000140c93184;
  case 3:
    if (lStack_a8 == 0) {
      return;
    }
    uVar33 = lStack_a8 << 3;
    break;
  case 4:
    if (lStack_a8 == 0) {
      return;
    }
    uVar33 = lStack_a8 * 0xc;
    break;
  default:
    if (lStack_a8 == 0) {
      return;
    }
    uVar33 = lStack_a8 << 4;
  }
  uVar34 = 4;
code_r0x000140c93184:
  pub_1406abac0(pbStack_a0,uVar33,uVar34);
  return;
}

