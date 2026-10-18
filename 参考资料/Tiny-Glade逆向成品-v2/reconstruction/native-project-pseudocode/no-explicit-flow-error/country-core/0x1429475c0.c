// VA 0x1429475c0, PDB extent 961 bytes
// country_core::render::ssbo::impl$6::cpu_write<country_core::systems::render_loop::resources::critters::FireflySsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$6::cpu_write<country_core::systems::render_loop::resources::critters::FireflySsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 961 */

void pdb_1429475c0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined *unaff_RSI;
  undefined *puVar10;
  undefined *unaff_R12;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong unaff_R14;
  ulonglong uStack_50;
  
  uVar12 = param_2;
  uVar6 = pdb_140e94b40();
  uVar11 = (ulonglong)uVar6;
  if ((char)uVar6 == '\0') goto LAB_14294777e;
  unaff_R14 = 0x75;
  lVar7 = pdb_142947d60(0x75);
  unaff_RSI = &UNK_143600560;
  if (lVar7 == 1) {
    if (uVar12 < 0x76) {
      uVar8 = pdb_142947d60(uVar12);
      if ((uVar8 & 1) != 0) {
        if (0x75 < uVar12 + 2) goto LAB_142947884;
        unaff_R14 = 0x73 - uVar12;
        unaff_RSI = &UNK_143600562 + uVar12;
      }
      goto LAB_14294764d;
    }
  }
  else {
LAB_14294764d:
    puVar10 = &UNK_1436004e5;
    unaff_R12 = &UNK_1436004bf;
    do {
      bVar2 = puVar10[-1];
      uVar6 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar10[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar10[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar10 + -4;
            puVar10 = puVar10 + -4;
            uVar6 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar10 = puVar10 + -3;
            uVar6 = bVar4 & 0xf;
          }
          uVar6 = bVar3 & 0x3f | uVar6 << 6;
        }
        else {
          puVar10 = puVar10 + -2;
          uVar6 = bVar3 & 0x1f;
        }
        uVar6 = (uint)(bVar2 & 0x3f) | uVar6 << 6;
        if (uVar6 != 0x5c) goto LAB_1429476d4;
LAB_1429476f0:
        if ((undefined *)0x26 < puVar10 + -0x1436004be) goto LAB_142947841;
        uVar12 = 0x26 - (longlong)(puVar10 + -0x1436004be);
        unaff_R12 = puVar10 + 1;
        goto LAB_142947716;
      }
      puVar10 = puVar10 + -1;
      if (uVar6 == 0x5c) goto LAB_1429476f0;
LAB_1429476d4:
      if (uVar6 == 0x2f) goto LAB_1429476f0;
    } while (puVar10 != &UNK_1436004bf);
    uVar12 = 0x26;
LAB_142947716:
    plVar9 = (longlong *)pdb_140e97000();
    uStack_50 = param_2;
    if ((char)plVar9[0xd] != '\x01') goto LAB_14294780d;
    do {
      if (*plVar9 == 0) {
        *plVar9 = -1;
        unaff_R14 = pdb_140e94f10(plVar9 + 1,unaff_RSI,unaff_R14,unaff_R12,uVar12,1,0);
        *plVar9 = *plVar9 + 1;
        uVar11 = uVar11 & 0xffffffff;
        param_2 = uStack_50;
LAB_14294777e:
        uVar12 = *(ulonglong *)(param_1 + 0x10);
        uVar8 = uVar12;
        if (param_3 < uVar12) {
          uVar8 = param_3;
        }
        if (uVar12 < param_3) {
          pdb_142dc85e0(uVar8,param_3,&UNK_1436004e8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        pub_142e32760(*(undefined8 *)(param_1 + 8),param_2,uVar8 << 4);
        if ((char)uVar11 == '\0') {
          return;
        }
        plVar9 = (longlong *)pdb_140e97000();
        if (((char)plVar9[0xd] != '\x01') &&
           (plVar9 = (longlong *)pdb_142e2d6a0(plVar9,0), plVar9 == (longlong *)0x0)) break;
        uVar12 = uVar11;
        uVar11 = param_2;
        if (*plVar9 == 0) {
          *plVar9 = -1;
          pdb_140e95370(plVar9 + 1,unaff_R14);
          *plVar9 = *plVar9 + 1;
          return;
        }
      }
      plVar9 = (longlong *)pdb_142dc8090(&UNK_1436007f8);
LAB_14294780d:
      plVar9 = (longlong *)pdb_142e2d6a0(plVar9,0);
    } while (plVar9 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143600788);
LAB_142947841:
    pdb_142dc8070(&UNK_1436004bf,0x26);
  }
  pdb_142dc8070(&UNK_143600560,0x75,0);
LAB_142947884:
  pdb_142dc8070(&UNK_143600560,0x75);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

