// VA 0x140a97000, PDB extent 841 bytes
// country_core::render::mesh::Mesh::retain_vertices
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::mesh::Mesh::retain_vertices
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/mesh.rs
   Extent: 841 */

void pdb_140a97000(longlong param_1,int *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  if (uVar8 != 0) {
    lVar9 = *(longlong *)(param_1 + 8);
    lVar15 = 4;
    lVar5 = 0;
LAB_140a97050:
    uVar6 = (ulonglong)*(uint *)(lVar9 + -4 + lVar15);
    if (param_3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar6,param_3,&UNK_14331fba8);
    }
    if (param_2[uVar6] == 1) goto code_r0x000140a97068;
    lVar7 = -lVar5;
    if (1U - lVar5 < uVar8) {
      lVar5 = (1 - uVar8) - lVar5;
      do {
        uVar6 = (ulonglong)*(uint *)(lVar9 + lVar15);
        if (param_3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar6,param_3,&UNK_14331fba8,lVar5,param_1,uVar8,lVar5,lVar9,lVar15,lVar7,
                        0xfffffffffffffffe);
        }
        if (param_2[uVar6] == 1) {
          *(uint *)(lVar9 + lVar7 * 4) = *(uint *)(lVar9 + lVar15);
          lVar7 = lVar7 + 1;
        }
        lVar15 = lVar15 + 4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    *(longlong *)(param_1 + 0x10) = lVar7;
    lVar9 = *(longlong *)(param_1 + 0x50);
    goto joined_r0x000140a97145;
  }
LAB_140a97074:
  lVar9 = *(longlong *)(param_1 + 0x50);
joined_r0x000140a97145:
  if (lVar9 != 0) {
    pauVar16 = *(undefined1 (**) [16])(param_1 + 0x38);
    auVar1 = *pauVar16;
    uVar4 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauVar17 = pauVar16 + 1;
    do {
      if ((short)uVar4 == 0) {
        do {
          auVar1 = *pauVar17;
          pauVar16 = pauVar16 + -0x38;
          pauVar17 = pauVar17 + 1;
          uVar4 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar4 == 0);
      }
      uVar2 = 0;
      for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      uVar4 = uVar4 - 1 & uVar4;
      pdb_141c27540((longlong)pauVar16 + (ulonglong)uVar2 * -0x38 + -0x20,param_2);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (param_3 != 0) {
    uVar11 = param_3 - 1 & 0x3fffffffffffffff;
    uVar8 = uVar11 + 1;
    uVar6 = (ulonglong)((uint)uVar8 & 3);
    iVar12 = 0;
    piVar10 = param_2;
    if (2 < uVar11) {
      uVar8 = uVar8 & 0xfffffffffffffffc;
      iVar12 = 0;
      do {
        iVar14 = -1;
        if (*piVar10 == 1) {
          iVar14 = iVar12;
        }
        iVar12 = (uint)(*piVar10 == 1) + iVar12;
        *piVar10 = iVar14;
        iVar14 = -1;
        if (piVar10[1] == 1) {
          iVar14 = iVar12;
        }
        iVar12 = (uint)(piVar10[1] == 1) + iVar12;
        piVar10[1] = iVar14;
        iVar14 = -1;
        if (piVar10[2] == 1) {
          iVar14 = iVar12;
        }
        iVar12 = (uint)(piVar10[2] == 1) + iVar12;
        piVar10[2] = iVar14;
        iVar14 = piVar10[3];
        iVar13 = -1;
        if (iVar14 == 1) {
          iVar13 = iVar12;
        }
        piVar10[3] = iVar13;
        piVar10 = piVar10 + 4;
        iVar12 = (uint)(iVar14 == 1) + iVar12;
        uVar8 = uVar8 - 4;
      } while (uVar8 != 0);
      if (uVar6 == 0) goto LAB_140a97246;
    }
    uVar8 = 0;
    do {
      iVar14 = -1;
      if (piVar10[uVar8] == 1) {
        iVar14 = iVar12;
      }
      iVar12 = (uint)(piVar10[uVar8] == 1) + iVar12;
      piVar10[uVar8] = iVar14;
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
  }
LAB_140a97246:
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar15 = 0;
    do {
      uVar8 = (ulonglong)*(uint *)(lVar5 + lVar15);
      if (param_3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar8,param_3,&UNK_143045b68);
      }
      if (param_2[uVar8] == -1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143045b80,0x26,&UNK_143045ba8);
      }
      *(int *)(lVar5 + lVar15) = param_2[uVar8];
      lVar15 = lVar15 + 4;
    } while (lVar9 << 2 != lVar15);
  }
  return;
code_r0x000140a97068:
  lVar15 = lVar15 + 4;
  lVar5 = lVar5 + -1;
  if (-lVar5 == uVar8) goto LAB_140a97074;
  goto LAB_140a97050;
}

