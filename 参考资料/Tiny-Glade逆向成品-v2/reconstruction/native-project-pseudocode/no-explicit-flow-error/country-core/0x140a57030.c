// VA 0x140a57030, PDB extent 3136 bytes
// country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::register_meshes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::register_meshes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 3136 */

void pdb_140a57030(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  byte *pbVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  ulonglong *puVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 (*pauStack_1e0) [16];
  undefined8 uStack_1d8;
  undefined1 (**ppauStack_168) [16];
  code *pcStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 (*pauStack_e8) [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined8 uStack_80;
  undefined1 (*pauStack_78) [16];
  undefined1 (*pauStack_70) [16];
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pauVar14 = (undefined1 (*) [16])*param_1;
  lVar12 = param_1[3];
  auVar2 = *pauVar14;
  pauVar13 = pauVar14 + 1;
  uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
  puVar15 = _DAT_143ca8e90;
  do {
    bVar17 = lVar12 == 0;
    lVar12 = lVar12 + -1;
    if (bVar17) {
      return;
    }
    if ((short)uVar6 == 0) {
      do {
        auVar2 = *pauVar13;
        pauVar14 = pauVar14 + -0xf0;
        pauVar13 = pauVar13 + 1;
        uVar6 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar6 == 0);
    }
    uStack_158 = (ulonglong)uVar6;
    uVar5 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar7 = (ulonglong)uVar5;
    pauStack_a8 = pauVar14 + uVar7 * -0xf + -0xf;
    if (pauVar14[uVar7 * -0xf + -1][8] == '\0') {
      pauVar14[uVar7 * -0xf + -1][8] = 1;
      if (*(longlong *)(pauVar14[uVar7 * -0xf + -0xd] + 8) == 0) {
        if (1 < *puVar15) {
          pauStack_200 = (undefined1 (*) [16])&pauStack_a8;
          pauStack_1f8 = (undefined1 (*) [16])pdb_140959810;
          pauStack_140 = (undefined1 (*) [16])0x0;
          pauStack_138 = (undefined1 (*) [16])&UNK_14303dce8;
          pauStack_130 = (undefined1 (*) [16])0x33;
          pauStack_128 = (undefined1 (*) [16])0x0;
          pauStack_120 = (undefined1 (*) [16])&UNK_14303dc48;
          pauStack_118 = (undefined1 (*) [16])0x3e;
          pauStack_110 = (undefined1 (*) [16])0x2;
          pauStack_108 = (undefined1 (*) [16])&UNK_14303dce8;
          pauStack_100 = (undefined1 (*) [16])0x33;
          uStack_f8 = (undefined1 (*) [16])0xc000000001;
          uStack_f0 = (undefined1 (*) [16])&UNK_14303dd41;
          pauStack_e8 = (undefined1 (*) [16])&pauStack_200;
          pdb_140f332f0(&uStack_64,&pauStack_140);
        }
      }
      else if (pauVar14[uVar7 * -0xf + -0xf][8] == '\0') {
        pauVar9 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -8];
        uVar16 = *(undefined8 *)(pauVar14[uVar7 * -0xf + -8] + 8);
        pdb_140ca3e60((undefined1 (*) [16])&pauStack_200,pauVar14 + uVar7 * -0xf + -10);
        pauVar10 = *(undefined1 (**) [16])(pauVar14[uVar7 * -0xf + -0xd] + 8);
        uVar1 = (longlong)pauVar10 * 4;
        pauStack_1e0 = pauVar9;
        uStack_1d8 = uVar16;
        if (0x7ffffffffffffffc < uVar1 || (ulonglong)pauVar10 >> 0x3e != 0) {
          uVar16 = 0;
LAB_140a578d8:
          pdb_142dc7e2a(uVar16,uVar1);
          goto LAB_140a57953;
        }
        if (uVar1 == 0) {
          pauStack_78 = (undefined1 (*) [16])0x4;
          pauStack_70 = (undefined1 (*) [16])0x0;
          pauVar9 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -0xd];
          pauVar8 = pauStack_70;
        }
        else {
          pauStack_98 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -0xd];
          uStack_80 = param_2;
          pdb_14007ee60();
          uVar16 = 4;
          pauStack_78 = (undefined1 (*) [16])pub_1406abab0(uVar1,4);
          pauVar9 = pauStack_98;
          param_2 = uStack_80;
          pauVar8 = pauVar10;
          if (pauStack_78 == (undefined1 (*) [16])0x0) goto LAB_140a578d8;
        }
        pauStack_70 = pauVar8;
        uStack_80 = param_2;
        if (pauVar10 != (undefined1 (*) [16])0x0) {
          pub_142e32760(pauStack_78,pauVar9,uVar1);
        }
        pauVar9 = (undefined1 (*) [16])0x8000000000000000;
        if (!SBORROW8(0,*(longlong *)pauVar14[uVar7 * -0xf + -0xc])) {
          pauVar9 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -0xb];
          if ((longlong)pauVar9 < 0) {
            uVar16 = 0;
LAB_140a57934:
            pdb_142dc7e2a(uVar16,pauVar9);
            goto LAB_140a57953;
          }
          pauStack_90 = pauVar9;
          if (pauVar9 == (undefined1 (*) [16])0x0) {
            pauStack_148 = (undefined1 (*) [16])0x1;
          }
          else {
            uVar3 = *(undefined8 *)(pauVar14[uVar7 * -0xf + -0xc] + 8);
            pdb_14007ee60();
            uVar16 = 1;
            pauVar8 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauStack_90,1);
            pauVar9 = pauStack_90;
            if (pauVar8 == (undefined1 (*) [16])0x0) goto LAB_140a57934;
            pauStack_148 = pauVar8;
            pub_142e32760(pauVar8,uVar3,pauStack_90);
            param_2 = uStack_80;
          }
          uStack_62 = pauVar14[uVar7 * -0xf + -0xb][8];
          pauVar9 = pauStack_90;
        }
        pauStack_d8 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -7];
        pauStack_d0 = *(undefined1 (**) [16])(pauVar14[uVar7 * -0xf + -7] + 8);
        uStack_c8 = pauVar14[uVar7 * -0xf + -6][0];
        pauStack_e8 = pauStack_1e0;
        uStack_e0 = (undefined4)uStack_1d8;
        uStack_dc = uStack_1d8._4_4_;
        uStack_f8 = (undefined1 (*) [16])CONCAT44(iStack_1ec,uStack_1f0);
        uStack_f0 = (undefined1 (*) [16])CONCAT44(uStack_1e4,uStack_1e8);
        pauStack_108 = pauStack_200;
        pauStack_100 = pauStack_1f8;
        pauStack_140 = pauStack_70;
        pauStack_138 = pauStack_78;
        pauStack_120 = pauStack_148;
        pauStack_118 = pauStack_90;
        pauStack_110 = (undefined1 (*) [16])CONCAT71(pauStack_110._1_7_,uStack_62);
        uStack_c0 = 0x8000000000000000;
        ppauStack_168 = &pauStack_a8;
        pcStack_160 = pdb_140959810;
        pauStack_130 = pauVar10;
        pauStack_128 = pauVar9;
        pdb_140f60760(&pauStack_200,&UNK_14303dd38,&ppauStack_168);
        pauStack_78 = pauStack_200;
        pauStack_70 = pauStack_1f8;
        uVar1 = CONCAT44(iStack_1ec,uStack_1f0);
        if (iStack_1ec < 0) {
          uVar16 = 0;
LAB_140a57915:
          pdb_142dc7e2a(uVar16,uVar1);
          goto LAB_140a57953;
        }
        if (uVar1 == 0) {
          pbVar11 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar16 = 1;
          pbVar11 = pub_1406abab0(uVar1,1);
          if (pbVar11 == (byte *)0x0) goto LAB_140a57915;
          pub_142e32760(pbVar11,pauStack_70,uVar1);
          param_2 = uStack_80;
        }
        if ((!SBORROW8(0,uStack_c0)) && (uStack_c0 != 0)) {
          pub_1406abac0(pbStack_b8,uStack_c0,1);
        }
        uStack_c0 = uVar1;
        pbStack_b8 = pbVar11;
        pub_142e32760(&pauStack_200,&pauStack_140,0x98);
        uVar16 = pdb_140a2ca40(param_2,&pauStack_200);
        puVar15 = _DAT_143ca8e90;
        if (pauStack_78 != (undefined1 (*) [16])0x0) {
          pub_1406abac0((byte *)pauStack_70,(ulonglong)pauStack_78,1);
        }
        *(undefined8 *)(pauVar14[uVar7 * -0xf + -0xf] + 8) = 1;
        *(undefined8 *)pauVar14[uVar7 * -0xf + -0xe] = uVar16;
      }
      else {
        pauStack_78 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -0xe];
        if (3 < *puVar15) {
          pauStack_200 = (undefined1 (*) [16])&pauStack_a8;
          pauStack_1f8 = (undefined1 (*) [16])pdb_140959810;
          pauStack_140 = (undefined1 (*) [16])0x0;
          pauStack_138 = (undefined1 (*) [16])&UNK_14303dce8;
          pauStack_130 = (undefined1 (*) [16])0x33;
          pauStack_128 = (undefined1 (*) [16])0x0;
          pauStack_120 = (undefined1 (*) [16])&UNK_14303dc48;
          pauStack_118 = (undefined1 (*) [16])0x3e;
          pauStack_110 = (undefined1 (*) [16])0x4;
          pauStack_108 = (undefined1 (*) [16])&UNK_14303dce8;
          pauStack_100 = (undefined1 (*) [16])0x33;
          uStack_f8 = (undefined1 (*) [16])0xb500000001;
          uStack_f0 = (undefined1 (*) [16])&UNK_14303dcc0;
          pauStack_e8 = (undefined1 (*) [16])&pauStack_200;
          pdb_140f332f0(&uStack_64,&pauStack_140);
        }
        pauVar9 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -8];
        uVar16 = *(undefined8 *)(pauVar14[uVar7 * -0xf + -8] + 8);
        pdb_140ca3e60((undefined1 (*) [16])&pauStack_200,pauVar14 + uVar7 * -0xf + -10);
        pauVar10 = *(undefined1 (**) [16])(pauVar14[uVar7 * -0xf + -0xd] + 8);
        uVar1 = (longlong)pauVar10 * 4;
        pauStack_1e0 = pauVar9;
        uStack_1d8 = uVar16;
        if (0x7ffffffffffffffc < uVar1 || (ulonglong)pauVar10 >> 0x3e != 0) {
          uVar16 = 0;
LAB_140a578e9:
          pdb_142dc7e2a(uVar16,uVar1);
          goto LAB_140a57953;
        }
        if (uVar1 == 0) {
          pauStack_70 = (undefined1 (*) [16])0x4;
          pauStack_98 = (undefined1 (*) [16])0x0;
          uVar3 = *(undefined8 *)pauVar14[uVar7 * -0xf + -0xd];
          pauVar9 = pauStack_98;
        }
        else {
          uStack_150 = *(undefined8 *)pauVar14[uVar7 * -0xf + -0xd];
          uStack_80 = param_2;
          pdb_14007ee60();
          uVar16 = 4;
          pauStack_70 = (undefined1 (*) [16])pub_1406abab0(uVar1,4);
          uVar3 = uStack_150;
          param_2 = uStack_80;
          pauVar9 = pauVar10;
          if (pauStack_70 == (undefined1 (*) [16])0x0) goto LAB_140a578e9;
        }
        pauStack_98 = pauVar9;
        if (pauVar10 != (undefined1 (*) [16])0x0) {
          pub_142e32760(pauStack_70,uVar3,uVar1);
        }
        pauVar9 = (undefined1 (*) [16])0x8000000000000000;
        pauVar8 = pauStack_a0;
        if (!SBORROW8(0,*(longlong *)pauVar14[uVar7 * -0xf + -0xc])) {
          pauVar9 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -0xb];
          if ((longlong)pauVar9 < 0) {
            uVar16 = 0;
LAB_140a57926:
            pdb_142dc7e2a(uVar16,pauVar9);
LAB_140a57953:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pauStack_88 = pauVar9;
          if (pauVar9 == (undefined1 (*) [16])0x0) {
            pauVar8 = (undefined1 (*) [16])0x1;
          }
          else {
            uVar3 = *(undefined8 *)(pauVar14[uVar7 * -0xf + -0xc] + 8);
            uStack_80 = param_2;
            pdb_14007ee60();
            uVar16 = 1;
            pauVar8 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauStack_88,1);
            pauVar9 = pauStack_88;
            if (pauVar8 == (undefined1 (*) [16])0x0) goto LAB_140a57926;
            pub_142e32760(pauVar8,uVar3,pauStack_88);
            param_2 = uStack_80;
          }
          uStack_61 = pauVar14[uVar7 * -0xf + -0xb][8];
          pauVar9 = pauStack_88;
        }
        pauStack_d8 = *(undefined1 (**) [16])pauVar14[uVar7 * -0xf + -7];
        pauStack_d0 = *(undefined1 (**) [16])(pauVar14[uVar7 * -0xf + -7] + 8);
        uStack_c8 = pauVar14[uVar7 * -0xf + -6][0];
        pauStack_108 = pauStack_200;
        pauStack_100 = pauStack_1f8;
        uStack_f8 = (undefined1 (*) [16])CONCAT44(iStack_1ec,uStack_1f0);
        uStack_f0 = (undefined1 (*) [16])CONCAT44(uStack_1e4,uStack_1e8);
        pauStack_e8 = pauStack_1e0;
        uStack_e0 = (undefined4)uStack_1d8;
        uStack_dc = uStack_1d8._4_4_;
        pauStack_140 = pauStack_98;
        pauStack_138 = pauStack_70;
        pauStack_118 = pauStack_88;
        pauStack_110 = (undefined1 (*) [16])CONCAT71(pauStack_110._1_7_,uStack_61);
        uStack_63 = 1;
        pauStack_130 = pauVar10;
        pauStack_128 = pauVar9;
        pauStack_120 = pauVar8;
        pauStack_a0 = pauVar8;
        pauVar10 = (undefined1 (*) [16])pdb_140a2d890(param_2,pauStack_78);
        puVar15 = _DAT_143ca8e90;
        if (pauVar10 == (undefined1 (*) [16])0x0) {
          uStack_63 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14303dd20);
        }
        pauStack_78 = pauVar10;
        pdb_14098a960(pauVar10);
        *(undefined1 (**) [16])pauStack_78[7] = pauStack_d0;
        *(undefined1 (**) [16])((longlong)pauStack_78[7] + 8) =
             (undefined1 (*) [16])CONCAT71(uStack_c7,uStack_c8);
        *(undefined1 (**) [16])pauStack_78[6] = (undefined1 (*) [16])CONCAT44(uStack_dc,uStack_e0);
        *(undefined1 (**) [16])((longlong)pauStack_78[6] + 8) = pauStack_d8;
        *(undefined1 (**) [16])pauStack_78[5] = uStack_f0;
        *(undefined1 (**) [16])((longlong)pauStack_78[5] + 8) = pauStack_e8;
        *(undefined1 (**) [16])pauStack_78[4] = pauStack_100;
        *(undefined1 (**) [16])((longlong)pauStack_78[4] + 8) = uStack_f8;
        *(undefined1 (**) [16])pauStack_78[3] = pauStack_110;
        *(undefined1 (**) [16])((longlong)pauStack_78[3] + 8) = pauStack_108;
        *(undefined1 (**) [16])pauStack_78[2] = pauStack_120;
        *(undefined1 (**) [16])((longlong)pauStack_78[2] + 8) = pauStack_118;
        *(undefined1 (**) [16])pauStack_78[1] = pauStack_130;
        *(undefined1 (**) [16])((longlong)pauStack_78[1] + 8) = pauStack_128;
        *(undefined1 (**) [16])*pauStack_78 = pauStack_140;
        *(undefined1 (**) [16])((longlong)*pauStack_78 + 8) = pauStack_138;
      }
    }
    uVar6 = (uint)uStack_158 - 1 & (uint)uStack_158;
  } while( true );
}

