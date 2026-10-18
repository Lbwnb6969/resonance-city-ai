// VA 0x140c8ab10, PDB extent 8373 bytes
// country_core::resources::clutter_packs::discover_mod_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140c9173a) overlaps instruction at (ram,0x000140c91739)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000143076229) */
/* WARNING: Removing unreachable block (ram,0x0001430761ae) */
/* WARNING: Removing unreachable block (ram,0x000143076227) */
/* WARNING: Removing unreachable block (ram,0x000143076c04) */
/* WARNING: Removing unreachable block (ram,0x000143076c07) */
/* WARNING: Removing unreachable block (ram,0x000143076c2a) */
/* WARNING: Removing unreachable block (ram,0x000143076c95) */
/* WARNING: Removing unreachable block (ram,0x000143076c0a) */
/* WARNING: Removing unreachable block (ram,0x000143076c0c) */
/* WARNING: Removing unreachable block (ram,0x000143076c74) */
/* WARNING: Removing unreachable block (ram,0x000143076ab8) */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Removing unreachable block (ram,0x000143076280) */
/* WARNING: Removing unreachable block (ram,0x000143076202) */
/* WARNING: Removing unreachable block (ram,0x000143076a4f) */
/* WARNING: Removing unreachable block (ram,0x000143076acc) */
/* WARNING: Removing unreachable block (ram,0x000143076a53) */
/* WARNING: Removing unreachable block (ram,0x000143076ac9) */
/* WARNING: Removing unreachable block (ram,0x000143076a55) */
/* WARNING: Removing unreachable block (ram,0x000143076adc) */
/* WARNING: Removing unreachable block (ram,0x000143076ae7) */
/* WARNING: Removing unreachable block (ram,0x000143076ae9) */
/* WARNING: Removing unreachable block (ram,0x000143076aeb) */
/* WARNING: Removing unreachable block (ram,0x000143076b48) */
/* WARNING: Removing unreachable block (ram,0x0001430761b3) */
/* WARNING: Removing unreachable block (ram,0x000143076224) */
/* WARNING: Removing unreachable block (ram,0x000143076226) */
/* WARNING: Removing unreachable block (ram,0x000143076228) */
/* WARNING: Removing unreachable block (ram,0x00014307628b) */
/* WARNING: Removing unreachable block (ram,0x00014307629b) */
/* WARNING: Removing unreachable block (ram,0x00014307629d) */
/* WARNING: Removing unreachable block (ram,0x0001430762bd) */
/* WARNING: Removing unreachable block (ram,0x0001430761bb) */
/* WARNING: Removing unreachable block (ram,0x000143076a27) */
/* WARNING: Removing unreachable block (ram,0x000143076a57) */
/* WARNING: Removing unreachable block (ram,0x000143076ac0) */
/* WARNING: Removing unreachable block (ram,0x000143076a29) */
/* WARNING: Removing unreachable block (ram,0x000143076129) */
/* WARNING: Removing unreachable block (ram,0x000143076aa2) */
/* WARNING: Removing unreachable block (ram,0x000143076ada) */
/* WARNING: Removing unreachable block (ram,0x000143076b09) */
/* WARNING: Removing unreachable block (ram,0x000143076b11) */
/* WARNING: Removing unreachable block (ram,0x000143076b15) */
/* WARNING: Removing unreachable block (ram,0x000143076b17) */
/* WARNING: Removing unreachable block (ram,0x000143076b8b) */
/* WARNING: Removing unreachable block (ram,0x000143076b8d) */
/* WARNING: Removing unreachable block (ram,0x000143076bf2) */
/* WARNING: Removing unreachable block (ram,0x000143076bfc) */
/* WARNING: Removing unreachable block (ram,0x000143076154) */
/* WARNING: Removing unreachable block (ram,0x000143076159) */
/* WARNING: Removing unreachable block (ram,0x00014307615c) */
/* WARNING: Removing unreachable block (ram,0x0001430761c7) */
/* WARNING: Removing unreachable block (ram,0x000143076135) */
/* WARNING: Removing unreachable block (ram,0x00014307619f) */
/* WARNING: Removing unreachable block (ram,0x0001430769ce) */
/* WARNING: Removing unreachable block (ram,0x0001430769d1) */
/* WARNING: Removing unreachable block (ram,0x000143076a3a) */
/* WARNING: Removing unreachable block (ram,0x0001430761d3) */
/* WARNING: Removing unreachable block (ram,0x00014307624f) */
/* WARNING: Removing unreachable block (ram,0x0001430761ee) */
/* WARNING: Removing unreachable block (ram,0x000143076263) */
/* WARNING: Removing unreachable block (ram,0x0001430769f6) */
/* WARNING: Removing unreachable block (ram,0x000143076a62) */
/* WARNING: Removing unreachable block (ram,0x0001430769f9) */
/* WARNING: Removing unreachable block (ram,0x0001430769fb) */
/* WARNING: Removing unreachable block (ram,0x000143076a6f) */
/* WARNING: Removing unreachable block (ram,0x000143076a7a) */
/* WARNING: Removing unreachable block (ram,0x000143076a7d) */
/* WARNING: Removing unreachable block (ram,0x000143076af8) */
/* WARNING: Removing unreachable block (ram,0x000143076a84) */
/* WARNING: Removing unreachable block (ram,0x000143076215) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff8e1 : 0x00014307613c */
/* WARNING: Heritage AFTER dead removal. Example location: r0x000143076049 : 0x00014307614f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Matched PDB project procedure: country_core::resources::clutter_packs::discover_mod_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 8373 */

undefined1 (*) [16] pdb_140c8ab10(undefined1 (*param_1) [16],undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 (**ppauVar11) [16];
  undefined1 (**ppauVar12) [16];
  undefined1 (**ppauVar13) [16];
  undefined1 (**ppauVar14) [16];
  bool bVar15;
  char cVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  byte bVar30;
  undefined8 uVar20;
  longlong *plVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  undefined1 (*extraout_RAX) [16];
  undefined1 (*pauVar26) [16];
  char *pcVar27;
  byte bVar31;
  uint *puVar28;
  int *piVar29;
  byte bVar35;
  ulonglong uVar32;
  undefined1 (*arg0) [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined1 (*pauVar33) [16];
  char *pcVar34;
  byte bVar40;
  undefined2 uVar37;
  byte *pbVar38;
  undefined *puVar39;
  undefined1 (**ppauVar41) [16];
  undefined1 (**ppauVar42) [16];
  undefined1 (**ppauVar43) [16];
  undefined1 (**ppauVar44) [16];
  undefined1 (**ppauVar45) [16];
  undefined1 (*pauVar46) [16];
  undefined1 (**ppauVar47) [16];
  undefined1 (**ppauVar48) [16];
  undefined1 (**ppauVar49) [16];
  undefined1 (**ppauVar50) [16];
  undefined1 (**ppauVar51) [16];
  undefined1 (**ppauVar52) [16];
  undefined1 (**ppauVar53) [16];
  undefined1 (**ppauVar54) [16];
  undefined1 (**ppauVar55) [16];
  undefined1 (**ppauVar56) [16];
  undefined1 (**ppauVar57) [16];
  undefined1 (**ppauVar58) [16];
  undefined1 (**ppauVar59) [16];
  undefined1 (**ppauVar60) [16];
  undefined1 (**ppauVar61) [16];
  undefined1 (**ppauVar62) [16];
  undefined1 (**ppauVar63) [16];
  undefined1 (**ppauVar64) [16];
  undefined1 (**ppauVar65) [16];
  undefined1 (**ppauVar66) [16];
  undefined1 (**ppauVar67) [16];
  undefined1 (**ppauVar68) [16];
  undefined1 (**ppauVar69) [16];
  undefined1 (**ppauVar70) [16];
  undefined1 (**ppauVar71) [16];
  undefined1 (**ppauVar72) [16];
  undefined1 (**ppauVar73) [16];
  undefined1 (**ppauVar74) [16];
  undefined1 (**ppauVar75) [16];
  undefined1 (**ppauVar76) [16];
  undefined1 (**ppauVar77) [16];
  undefined1 (**ppauVar78) [16];
  undefined1 (**ppauVar79) [16];
  undefined1 (**ppauVar80) [16];
  undefined1 (**ppauVar81) [16];
  undefined1 (**ppauVar82) [16];
  undefined1 (**ppauVar83) [16];
  undefined1 (**ppauVar84) [16];
  undefined1 (**ppauVar85) [16];
  undefined1 (**ppauVar86) [16];
  undefined1 (**ppauVar87) [16];
  undefined1 (**ppauVar88) [16];
  undefined1 (**ppauVar89) [16];
  undefined1 (**ppauVar90) [16];
  undefined1 (**ppauVar91) [16];
  undefined1 (**ppauVar92) [16];
  undefined1 (**ppauVar93) [16];
  undefined1 (**ppauVar94) [16];
  undefined1 (**ppauVar95) [16];
  undefined1 (**ppauVar96) [16];
  undefined1 (**ppauVar97) [16];
  undefined1 (**ppauVar98) [16];
  undefined1 (**ppauVar99) [16];
  undefined1 (**ppauVar100) [16];
  undefined1 (**ppauVar101) [16];
  undefined1 (**ppauVar102) [16];
  undefined1 (**ppauVar103) [16];
  undefined1 (**ppauVar104) [16];
  undefined1 (**ppauVar105) [16];
  undefined1 (**ppauVar106) [16];
  undefined1 (**ppauVar107) [16];
  undefined1 (**ppauVar108) [16];
  undefined1 (**ppauVar109) [16];
  undefined1 (**ppauVar110) [16];
  undefined1 (**ppauVar111) [16];
  undefined1 (**ppauVar112) [16];
  undefined1 (**ppauVar113) [16];
  undefined1 (**ppauVar114) [16];
  undefined1 (**ppauVar115) [16];
  undefined1 (**ppauVar116) [16];
  undefined1 (**ppauVar117) [16];
  ulonglong uVar118;
  undefined1 *puVar119;
  int iVar120;
  uint uVar121;
  uint *puVar122;
  undefined2 *puVar123;
  undefined1 *puVar124;
  ushort uVar125;
  longlong lVar126;
  ulonglong uVar127;
  byte *pbVar128;
  undefined1 (*pauVar129) [16];
  undefined1 (*pauVar130) [16];
  uint *puVar131;
  undefined1 (*pauVar132) [16];
  undefined1 (*pauVar133) [16];
  uint uVar134;
  undefined1 (*pauVar135) [16];
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar136;
  bool bVar137;
  bool bVar138;
  bool bVar139;
  bool bVar140;
  bool bVar141;
  bool bVar142;
  bool bVar143;
  undefined1 (*pauStack_e917) [16];
  undefined1 auStack_e90f [57527];
  undefined1 *puStack_858;
  byte abStack_828 [8];
  undefined1 (*pauStack_820) [16];
  undefined8 uStack_818;
  undefined1 (*pauStack_810) [16];
  undefined1 (*pauStack_808) [16];
  undefined1 auStack_800 [24];
  undefined1 (*pauStack_7e8) [16];
  uint *puStack_7e0;
  undefined1 (*pauStack_7d8) [16];
  undefined1 (*pauStack_7d0) [16];
  undefined1 (*pauStack_7c8) [16];
  undefined1 (*pauStack_7c0) [16];
  undefined1 (*pauStack_7b8) [16];
  undefined1 (*pauStack_7b0) [16];
  undefined1 (*pauStack_7a8) [16];
  longlong lStack_7a0;
  byte bStack_798;
  undefined4 uStack_797;
  undefined3 uStack_793;
  byte *pbStack_790;
  undefined1 (*pauStack_788) [16];
  longlong lStack_780;
  undefined4 uStack_778;
  undefined4 uStack_774;
  byte *pbStack_770;
  undefined1 (*pauStack_768) [16];
  longlong lStack_760;
  byte *pbStack_758;
  byte bStack_723;
  byte bStack_71f;
  uint auStack_714 [109];
  undefined1 (*pauStack_560) [16];
  undefined1 (*pauStack_558) [16];
  undefined1 (*pauStack_550) [16];
  undefined1 (*pauStack_548) [16];
  undefined1 (*pauStack_540) [16];
  undefined8 uStack_538;
  undefined1 (*pauStack_528) [16];
  undefined1 (*pauStack_520) [16];
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 (*pauStack_4e8) [16];
  undefined1 (*pauStack_4e0) [16];
  undefined1 (*pauStack_4d8) [16];
  undefined1 (*pauStack_4d0) [16];
  undefined1 (*pauStack_4c8) [16];
  undefined1 (*pauStack_4b8) [16];
  undefined1 (*pauStack_4b0) [16];
  undefined1 (*pauStack_4a8) [16];
  undefined1 uStack_4a0;
  char cStack_49f;
  undefined1 (*pauStack_2b0) [16];
  undefined1 (*pauStack_2a8) [16];
  byte bStack_2a0;
  undefined7 uStack_29f;
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined1 (*pauStack_288) [16];
  undefined1 (*pauStack_280) [16];
  char cStack_278;
  char cStack_277;
  undefined6 uStack_276;
  ulonglong uStack_270;
  byte *pbStack_268;
  undefined8 uStack_260;
  undefined1 (*pauStack_250) [16];
  undefined1 (*pauStack_248) [16];
  ulonglong uStack_240;
  byte *pbStack_238;
  undefined8 uStack_230;
  undefined1 (*pauStack_220) [16];
  undefined1 (*pauStack_218) [16];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 (*pauStack_1e0) [16];
  byte *pbStack_1d8;
  undefined8 uStack_1d0;
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  undefined1 (*pauStack_198) [16];
  longlong lStack_190;
  longlong lStack_188;
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  ulonglong uStack_d0;
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined8 uStack_b8;
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 uStack_91;
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 (*pauStack_80) [16];
  undefined1 (*pauStack_78) [16];
  undefined1 (*pauStack_70) [16];
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined7 uVar36;
  
  ppauVar44 = &pauStack_808;
  ppauVar45 = &pauStack_808;
  ppauVar61 = &pauStack_808;
  ppauVar70 = &pauStack_808;
  ppauVar89 = &pauStack_808;
  ppauVar103 = &pauStack_808;
  ppauVar106 = &pauStack_808;
  ppauVar110 = &pauStack_808;
  ppauVar116 = &pauStack_808;
  ppauVar117 = &pauStack_808;
  ppauVar42 = &pauStack_808;
  ppauVar43 = &pauStack_808;
  pauVar26 = (undefined1 (*) [16])&pauStack_788;
  uStack_60 = 0xfffffffffffffffe;
  uVar20 = param_2[3];
  uVar8 = param_2[4];
  pauStack_7e8 = (undefined1 (*) [16])0x7;
  pauStack_810 = (undefined1 (*) [16])0x140c8ab71;
  pauStack_70 = param_1;
  pdb_140f3e9e0(&uStack_240,uVar20,uVar8,&UNK_143076093);
  uVar10 = uStack_230;
  pbVar128 = pbStack_238;
  pauStack_7e8 = (undefined1 (*) [16])0xc;
  pauStack_810 = (undefined1 (*) [16])0x140c8aba1;
  pdb_140f3e9e0(&uStack_270,pbStack_238,uStack_230,&UNK_14307609a);
  pbVar38 = pbStack_268;
  pauStack_810 = (undefined1 (*) [16])0x140c8abc8;
  pdb_141b1e240(&uStack_128,pbStack_268,uStack_260,3);
  pauStack_810 = (undefined1 (*) [16])0x140c8abdb;
  pdb_140f55fb0(&pauStack_528,pbVar38,uStack_260);
  if (SBORROW8(0,(longlong)pauStack_528)) {
    pauStack_810 = (undefined1 (*) [16])0x140c8abfe;
    uVar20 = pdb_142d929f0(&uStack_128);
    *(undefined8 *)(*pauStack_70 + 8) = uVar20;
    *(undefined8 *)*pauStack_70 = 0x8000000000000000;
    goto LAB_140c8b96c;
  }
  pbStack_e8 = pbVar128;
  uStack_f0 = uVar10;
  pauStack_b0 = pauStack_528;
  pauStack_140 = pauStack_520;
  pauStack_810 = (undefined1 (*) [16])0x140c8ac4b;
  pauVar33 = pauStack_520;
  pdb_14164c2a0(&pauStack_528,pauStack_520,uStack_518);
  pauVar22 = uStack_518;
  pauVar133 = pauStack_520;
  pauVar132 = pauStack_528;
  if (SBORROW8(0,(longlong)pauStack_528)) {
    pauStack_810 = (undefined1 (*) [16])0x140c8ac71;
    uVar20 = pdb_142d925c0(&uStack_128,pauStack_520);
    *(undefined8 *)(*pauStack_70 + 8) = uVar20;
    *(undefined8 *)*pauStack_70 = 0x8000000000000000;
    pauVar26 = pauStack_140;
    pauVar33 = pauStack_b0;
  }
  else {
    pauStack_560 = pauStack_528;
    pauStack_558 = pauStack_520;
    pauStack_550 = uStack_518;
    pauStack_250 = (undefined1 (*) [16])*param_2;
    if (pauStack_250 == (undefined1 (*) [16])0x0) {
      uStack_66 = 1;
      pauStack_7e8 = (undefined1 (*) [16])0xd;
      pauStack_810 = (undefined1 (*) [16])0x140c8b64f;
      pdb_140f3e9e0(&pauStack_220,uVar20,uVar8,&UNK_143076086);
      pauVar33 = (undefined1 (*) [16])CONCAT44(uStack_20c,uStack_210);
      pauStack_90 = pauStack_218;
      pauStack_810 = (undefined1 (*) [16])0x140c8b674;
      pdb_140f55fb0(&pauStack_1a8,pauStack_218,pauVar33);
      if (SBORROW8(0,(longlong)pauStack_1a8)) {
        uVar134 = (uint)((ulonglong)pauStack_1a0 >> 0x20);
        switch((uint)pauStack_1a0 & 3) {
        case 0:
          cVar16 = (char)*(uint *)pauStack_1a0[1];
          break;
        case 1:
          cVar16 = *(char *)((longlong)*pauStack_1a0 + 0xf);
          break;
        case 2:
          if (((uVar134 - 0xf < 0x35) &&
              ((0x10004000000001U >> ((ulonglong)(uVar134 - 0xf) & 0x3f) & 1) != 0)) ||
             (uVar134 - 2 < 2)) goto code_r0x000140c8bb52;
          goto code_r0x000140c8bbb4;
        case 3:
          cVar16 = '*';
          if (uVar134 < 0x2a) {
            cVar16 = (char)((ulonglong)pauStack_1a0 >> 0x20);
          }
        }
        if (cVar16 == '\0') {
code_r0x000140c8bb52:
          pauStack_528 = pauStack_1a0;
          pauStack_810 = (undefined1 (*) [16])0x140c8bb65;
          pdb_1404b38e0(&pauStack_528);
          pauStack_78 = (undefined1 (*) [16])0x0;
LAB_140c8bb71:
          pauVar33 = pauStack_220;
          if (pauStack_220 != (undefined1 (*) [16])0x0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8bb93;
            pub_1406abac0((byte *)pauStack_90,(ulonglong)pauStack_220,1);
          }
          goto LAB_140c8acc9;
        }
code_r0x000140c8bbb4:
        pauStack_1e0 = pauStack_1a0;
        pauVar26 = (undefined1 (*) [16])&pauStack_7d8;
code_r0x000140c8bbbf:
        pauStack_810 = (undefined1 (*) [16])0x140c8bbd7;
        pdb_141b1e240(pauVar26,pauStack_90,pauVar33,2);
        pauStack_520 = (undefined1 (*) [16])pdb_140f58250;
        uStack_518 = (undefined1 (*) [16])&pauStack_1e0;
        uStack_510 = pdb_140f59780;
        pauStack_810 = (undefined1 (*) [16])0x140c8bc23;
        pauStack_528 = pauVar26;
        pdb_140f60760(&pauStack_2b0,&UNK_1430760a6,&pauStack_528);
        if (pauStack_7d8 != (undefined1 (*) [16])0x0) {
          pauStack_810 = (undefined1 (*) [16])0x140c8bc3c;
          pub_1406abac0((byte *)pauStack_7d0,(ulonglong)pauStack_7d8,1);
        }
        pauStack_528 = pauStack_2b0;
        pauStack_520 = pauStack_2a8;
        uStack_518 = (undefined1 (*) [16])CONCAT71(uStack_29f,bStack_2a0);
        pauStack_810 = (undefined1 (*) [16])0x140c8bc66;
        uVar20 = pdb_142de92b0(&pauStack_528);
        *(undefined8 *)(*pauStack_70 + 8) = uVar20;
        *(undefined8 *)*pauStack_70 = 0x8000000000000000;
        pauStack_810 = (undefined1 (*) [16])0x140c8bc8b;
        pdb_1404b38e0(&pauStack_1e0);
      }
      else {
        pauStack_78 = pauStack_1a8;
        pauStack_a8 = pauStack_1a0;
        pauStack_810 = (undefined1 (*) [16])0x140c8b6f0;
        pauVar135 = pauStack_198;
        lVar126 = pdb_14164bfc0();
        if (lVar126 != 1) {
          pauStack_1b8 = pauVar135;
          if (pauStack_78 != (undefined1 (*) [16])0x0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8ba06;
            pub_1406abac0((byte *)pauStack_a8,(ulonglong)pauStack_78,1);
          }
          pauStack_78 = (undefined1 (*) [16])&uRam0000000000000001;
          goto LAB_140c8bb71;
        }
        pauStack_810 = (undefined1 (*) [16])0x140c8b717;
        uVar20 = pdb_142d927f0(pauStack_90,pauVar33,pauVar135);
        *(undefined8 *)(*pauStack_70 + 8) = uVar20;
        *(undefined8 *)*pauStack_70 = 0x8000000000000000;
        if (pauStack_78 != (undefined1 (*) [16])0x0) {
          pauStack_810 = (undefined1 (*) [16])0x140c8b752;
          pub_1406abac0((byte *)pauStack_a8,(ulonglong)pauStack_78,1);
        }
      }
      pauVar33 = pauStack_b0;
      if (pauStack_220 != (undefined1 (*) [16])0x0) {
        pauStack_810 = (undefined1 (*) [16])0x140c8bcb1;
        pub_1406abac0((byte *)pauStack_90,(ulonglong)pauStack_220,1);
      }
      if (pauVar22 != (undefined1 (*) [16])0x0) {
        puVar122 = (uint *)((longlong)*pauVar133 + 8);
        do {
          if (*(ulonglong *)(puVar122 + -2) != 0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8bce0;
            pub_1406abac0(*(byte **)puVar122,*(ulonglong *)(puVar122 + -2),1);
          }
          puVar122 = puVar122 + 8;
          pauVar22 = (undefined1 (*) [16])((longlong)pauVar22[-1] + 0xf);
        } while (pauVar22 != (undefined1 (*) [16])0x0);
      }
      pauVar26 = pauStack_140;
      if (pauVar132 != (undefined1 (*) [16])0x0) {
        pauStack_810 = (undefined1 (*) [16])0x140c8bd03;
        pub_1406abac0((byte *)pauVar133,(longlong)pauVar132 << 5,8);
        pauVar26 = pauStack_140;
      }
    }
    else {
      pauStack_78 = (undefined1 (*) [16])0x0;
LAB_140c8acc9:
      uStack_108 = 0;
      lStack_100 = 8;
      uStack_f8 = 0;
      uStack_68 = 1;
      pauStack_810 = (undefined1 (*) [16])0x140c8acf6;
      plVar21 = (longlong *)pdb_140f3bda0();
      if ((char)plVar21[2] == '\x01') {
        lStack_188 = *plVar21;
        pauVar33 = (undefined1 (*) [16])plVar21[1];
      }
      else {
        uStack_68 = 1;
        pauStack_810 = (undefined1 (*) [16])0x140c8c1e0;
        lStack_188 = pdb_140f4fd10();
        *plVar21 = lStack_188;
        plVar21[1] = (longlong)pauVar33;
        *(undefined1 *)(plVar21 + 2) = 1;
      }
      *plVar21 = lStack_188 + 1;
      pauStack_198 = _DAT_143076640;
      lStack_190 = _UNK_143076648;
      pauStack_1a8 = _DAT_143076630;
      pauStack_1a0 = _UNK_143076638;
      pauStack_160 = pauVar133 + (longlong)pauVar22 * 2;
      pauStack_178 = pauVar133;
      pauStack_170 = pauVar133;
      pauStack_168 = pauVar132;
      pauStack_248 = (undefined1 (*) [16])param_2[1];
      pauStack_90 = (undefined1 (*) [16])(param_2 + 6);
      pauStack_a8 = (undefined1 (*) [16])(param_2 + 9);
      pauVar132 = (undefined1 (*) [16])&pauStack_7d8;
      pauStack_180 = pauVar33;
      if (pauVar133 != pauStack_160) {
        do {
          pauVar22 = pauStack_170 + 2;
          puVar122 = (uint *)*pauStack_170;
          uStack_538 = *(undefined8 *)((longlong)pauStack_170[1] + 8);
          pauVar133 = *(undefined1 (**) [16])((longlong)*pauStack_170 + 8);
          pauVar33 = *(undefined1 (**) [16])pauStack_170[1];
          pauStack_548 = pauVar133;
          pauStack_540 = pauVar33;
          pauStack_170 = pauVar22;
          if (SBORROW8(0,*(ulonglong *)puVar122)) break;
          pauStack_810 = (undefined1 (*) [16])0x140c8ae04;
          uStack_d0 = *(ulonglong *)puVar122;
          pauStack_c8 = pauVar133;
          pauStack_c0 = pauVar33;
          uStack_b8 = uStack_538;
          pdb_140f3ddd0((undefined1 (*) [16])&pauStack_528,pauVar133,pauVar33);
          lVar126 = 0;
          while( true ) {
            pauStack_810 = (undefined1 (*) [16])0x140c8ae1b;
            pdb_140f5bb30(pauVar132,(undefined1 (*) [16])&pauStack_528);
            if ((byte)pauStack_7d8 == '\n') break;
            lVar126 = lVar126 + 1;
          }
          if (lVar126 != 1) goto LAB_140c8b757;
          pauStack_810 = (undefined1 (*) [16])0x140c8ae45;
          pauVar135 = pauVar33;
          pauVar22 = (undefined1 (*) [16])pdb_140f3ecf0(pauVar133);
          pauStack_810 = (undefined1 (*) [16])0x140c8ae5a;
          pauVar24 = pauVar33;
          pdb_140f3ddd0((undefined1 (*) [16])&pauStack_528,pauVar133);
          pauStack_810 = (undefined1 (*) [16])0x140c8ae66;
          pdb_140f5bb30(pauVar132,(undefined1 (*) [16])&pauStack_528);
          uVar127 = (ulonglong)pauStack_7d8 & 0xff;
          if (uVar127 == 10) {
            if (pauVar22 != (undefined1 (*) [16])0x0) goto LAB_140c8b757;
            goto LAB_140c8aefb;
          }
          pauVar23 = (undefined1 (*) [16])(uVar127 - 5);
          if ((byte)pauStack_7d8 < 6) {
            pauVar23 = (undefined1 (*) [16])0x0;
          }
          uVar32 = (ulonglong)*(int *)(&UNK_1430768f0 + (longlong)pauVar23 * 4);
          arg0 = (undefined1 (*) [16])(&UNK_1430768f0 + uVar32);
          bVar139 = arg0 == (undefined1 (*) [16])0x0;
          pbVar38 = &UNK_143075fe4;
          cVar16 = (char)pauVar23;
          iVar19 = (int)pauVar23;
          bVar40 = (byte)arg0;
          bVar18 = (byte)((ulonglong)arg0 >> 8);
          uVar36 = (undefined7)((ulonglong)arg0 >> 8);
          cVar17 = (char)((ulonglong)pauVar133 >> 8);
          iVar120 = (int)pauVar26;
          pauVar129 = (undefined1 (*) [16])&uRam0000000000000001;
          pauVar46 = (undefined1 (*) [16])&pauStack_528;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar127) {
          case 0:
            uRam0000000000000001 = *(uint *)*pauVar33;
            uRam0000000000000005 = (undefined1)*(uint *)((longlong)*pauVar33 + 4);
            cRam0000000000000016 = cVar16;
            iRam0000000000000017 = iVar19;
            iRam000000000000001b = iVar19;
            iRam000000000000001f = iVar19;
            uVar134 = *(uint *)((longlong)pauVar33[2] + 10);
            pcVar27 = (char *)(ulonglong)uVar134;
            puVar122 = &uRam0000000000000038;
            cVar17 = (char)uVar134;
            uVar121 = iVar120 >> 0x1f;
            bVar139 = (uVar121 & 1) != 0;
            if (!bVar139) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (iVar120 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            uVar9 = *(uint *)((ulonglong)uVar121 + 0x20);
            puVar5 = (undefined4 *)((longlong)pauVar33[3] + 2);
            out(*(undefined4 *)((longlong)pauVar33[2] + 0xe),0x5fe4);
            if (bVar139) {
              out(*(undefined1 *)puVar5,0x5fe4);
              puVar5 = (undefined4 *)((longlong)pauVar33[3] + 7);
              out(*(undefined4 *)((longlong)pauVar33[3] + 3),0x5fe4);
              out(*puVar5,0x5fe4);
            }
            else {
              (*arg0)[0] = (char)*(uint *)*arg0;
              out(*puVar5,0x5fe4);
            }
            bVar35 = (byte)(uVar134 >> 8);
            if (bVar139) {
              out(*(undefined1 *)(puVar5 + 1),0x5fe4);
              puVar119 = (undefined1 *)((longlong)puVar5 + 9);
              out(*(undefined4 *)((longlong)puVar5 + 5),0x5fe4);
              if (-1 < (int)uVar121) {
                uRam0000000000000038 = uRam0000000000000038 ^ (uint)puVar119;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if ((!bVar139) ||
                 (lVar126 = (longlong)*(int *)((longlong)puVar5 + 0x6d) * 0x632e7865,
                 (int)lVar126 == lVar126)) {
                bRam00000000000000a1 = bRam00000000000000a1 & 0x5f;
                if (bRam00000000000000a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                goto code_r0x000143076a91;
              }
            }
            else {
              uVar127 = (longlong)(int)*(uint *)((longlong)pauVar133[7] + 4) * 0x732f7972;
              puVar119 = (undefined1 *)(uVar127 & 0xffffffff);
              if ((longlong)(int)uVar127 == uVar127) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              *pcVar27 = *pcVar27 + cVar17;
              cVar16 = *pcVar27;
              cVar1 = *pcVar27;
              *(undefined1 (**) [16])((ulonglong)uVar9 - 8) = pauVar133;
              if (-1 < cVar16) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar122 = (uint *)0x3c;
              uRam0000000000000038 = in(0x5fe4);
            }
            bVar30 = UNK_143076059 & bVar35;
            _UNK_143076057 = CONCAT12(bVar30,_UNK_143076057);
code_r0x000143076a91:
            pbVar128 = &UNK_143076910 + uVar32;
            *pbVar128 = *pbVar128 & bVar35;
            uVar127 = (longlong)*(int *)(puVar119 + in_FS_OFFSET + 0x66) * 0x6e657265;
            uVar118 = uVar127 & 0xffffffff;
            if (*pbVar128 == 0) {
              *(undefined8 *)(uVar118 - 8) = 7;
              *(uint *)*pauVar24 = *(uint *)*pauVar24 + uVar134;
              *pcVar27 = *pcVar27 + cVar17;
              bVar35 = bRam0000000000005f00;
              uVar125 = CONCAT11(0x5f,bRam0000000000005f00);
              puVar28 = (uint *)(ulonglong)uVar125;
              cRam0000000196076b49 = cRam0000000196076b49 + bVar40 + cVar17;
              if (cRam0000000196076b49 < '\0') {
                if (cRam0000000196076b49 != '\0') {
                  uVar134 = in(0x5fe4);
                  *puVar122 = uVar134;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                *(byte *)puVar28 = (byte)*puVar28 + bRam0000000000005f00;
                *(byte *)puVar28 = (byte)*puVar28 + bVar35;
                *(byte *)puVar28 = (byte)*puVar28 + bVar35;
                pbVar38 = &UNK_143075f02;
                *(byte *)puVar28 = (byte)*puVar28 + bVar35;
                *puVar28 = *puVar28 - (uint)uVar125;
              }
              bVar139 = CARRY1((byte)*puVar28,bVar35);
              *(byte *)puVar28 = (byte)*puVar28 + bVar35;
              bVar35 = (byte)*puVar28;
              puVar4 = (undefined2 *)(puVar119 + 1);
              out(*puVar119,(short)pbVar38);
              puVar131 = puVar122;
            }
            else {
              if ((longlong)(int)uVar127 != uVar127) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar123 = (undefined2 *)(ulonglong)(*(uint *)pauVar133[2] * 0x74737973);
              puVar131 = puVar122 + 1;
              uVar121 = in(0x5fe4);
              *puVar122 = uVar121;
              UNK_143076049 = UNK_143076049 & bVar35;
              out(*puVar123,0x5fe4);
              _UNK_143076057 = _UNK_143076057 & 0xff5fffff;
              out(*(undefined1 *)(puVar123 + 1),0x5fe4);
              puVar4 = puVar123 + 2;
              out(*(undefined1 *)((longlong)puVar123 + 3),0x5fe4);
              iVar19 = *(int *)((longlong)puVar123 + 0x6b);
              *pcVar27 = *pcVar27 + cVar17;
              *pcVar27 = *pcVar27 + cVar17;
              *pcVar27 = *pcVar27 + cVar17;
              *(undefined8 *)(uVar118 - 8) = 7;
              *(uint *)*pauVar24 = *(uint *)*pauVar24 + uVar134;
              *pcVar27 = *pcVar27 + cVar17;
              puVar28 = (uint *)0x0;
              cRam000000016c075fe6 = cRam000000016c075fe6 + '_';
              pbVar128 = (byte *)((ulonglong)(uint)(iVar19 * 0x3f746920) + 0x6e);
              bVar139 = false;
              *pbVar128 = *pbVar128;
              bVar35 = *pbVar128;
            }
            lVar126 = CONCAT71(uVar36,bVar40 + cVar17);
            uVar37 = SUB82(pbVar38,0);
            out(*(undefined1 *)puVar4,uVar37);
            if (bVar35 != 0) {
              bVar35 = (byte)puVar28;
              bVar30 = (byte)((ulonglong)pbVar38 >> 8);
              uVar134 = (uint)puVar28;
              if (bVar139) {
                puVar119 = (undefined1 *)(uVar118 - 0x10);
                *(undefined8 *)(uVar118 - 0x10) = 7;
                *(uint *)*pauVar24 = *(uint *)*pauVar24 + uVar134;
                *(byte *)puVar28 = (byte)*puVar28 + bVar35;
                puVar28 = (uint *)0x0;
                pcVar27 = (char *)((longlong)pauVar133[0x900000] + 2);
                *pcVar27 = *pcVar27 + bVar30;
                lVar126 = CONCAT71(uVar36,bVar40 + cVar17 + bVar35 * '\x02');
              }
              else {
                pbVar128 = (byte *)(in_FS_OFFSET + lVar126 + 0x20);
                bVar31 = (byte)((ulonglong)puVar28 >> 8);
                *pbVar128 = *pbVar128 & bVar31;
                uVar121 = in(uVar37);
                *puVar131 = uVar121;
                puVar124 = (undefined1 *)
                           (ulonglong)(uint)(*(int *)((longlong)pauVar133[6] + 0xd) * 0x68637461);
                pbVar128 = (byte *)((longlong)puVar131 + in_FS_OFFSET + 0x73);
                *pbVar128 = *pbVar128 & (byte)pbVar38;
                pbVar128 = (byte *)(lVar126 + 0x20);
                *pbVar128 = *pbVar128 & bVar35;
                bVar40 = *pbVar128;
                bVar2 = *pbVar128;
                puVar119 = (undefined1 *)(uVar118 - 0x10);
                *(undefined1 (**) [16])(uVar118 - 0x10) = pauVar133;
                if ((char)bVar40 < '\0') {
                  puVar119 = (undefined1 *)(uVar118 - 0x10);
                  if (bVar2 != 0) {
                    uVar121 = in(uVar37);
                    puVar131[1] = uVar121;
                    pbVar128 = (byte *)((longlong)pauVar133[6] + 1);
                    *pbVar128 = *pbVar128 & bVar31;
                    out(*puVar124,uVar37);
                    out(puVar124[1],uVar37);
                    out(*(undefined4 *)(puVar124 + 2),uVar37);
                    if (*pbVar128 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    puVar119 = (undefined1 *)(uVar118 - 0x18);
                    *(undefined8 *)(uVar118 - 0x18) = 0x6e6f2065;
                    pbVar128 = (byte *)(unaff_GS_OFFSET + lVar126 + 0x74);
                    *pbVar128 = *pbVar128 & bVar18;
                    *(byte *)((longlong)puVar131 + 0x69) =
                         *(byte *)((longlong)puVar131 + 0x69) & bVar30;
                    *(byte *)puVar28 = (byte)*puVar28 + bVar35;
                    pauVar133 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)pauVar133 >> 8),2);
                    *(byte *)puVar28 = (byte)*puVar28 + bVar35;
                    *puVar28 = *puVar28 | uVar134;
                    *(byte *)puVar28 = (byte)*puVar28 + bVar35;
                    *(uint *)(pbVar38 + 7) = *(uint *)(pbVar38 + 7) >> 3;
                  }
                  *puVar28 = *puVar28 + uVar134;
                }
                else {
                  *(byte *)puVar28 = (byte)*puVar28 + bVar35;
                }
              }
              *(undefined8 *)(puVar119 + -8) = 7;
              *(uint *)*pauVar24 = *(uint *)*pauVar24 + (int)puVar28;
              *(byte *)puVar28 = (byte)*puVar28 + (char)puVar28;
              bVar40 = bRam0000000000000000;
              uVar36 = (undefined7)((ulonglong)lVar126 >> 8);
              cVar17 = (char)pauVar133;
              cVar16 = (char)lVar126 + cVar17;
              pcVar34 = (char *)CONCAT71(uVar36,cVar16);
              piVar29 = (int *)(ulonglong)bRam0000000000000000;
              *(char *)((longlong)piVar29 * 2) = *(char *)((longlong)piVar29 * 2) + bVar30;
              *(byte *)piVar29 = (char)*piVar29 + bVar40;
              *(uint *)(pbVar38 + 7) = *(uint *)(pbVar38 + 7) >> 3;
              *piVar29 = *piVar29 + (uint)bVar40;
              *(byte *)piVar29 = (char)*piVar29 + bVar40;
              bVar40 = bRam0000000000000000;
              piVar29 = (int *)(ulonglong)bRam0000000000000000;
              *(char *)((longlong)piVar29 * 2) = *(char *)((longlong)piVar29 * 2) + bVar30;
              *(byte *)piVar29 = (char)*piVar29 + bVar40;
              *(uint *)(pbVar38 + 7) = *(uint *)(pbVar38 + 7) >> 3;
              *piVar29 = *piVar29 + (uint)bVar40;
              *(byte *)piVar29 = (char)*piVar29 + bVar40;
              bVar35 = (byte)((ulonglong)lVar126 >> 8);
              bVar18 = bVar35 + *(char *)(ulonglong)bVar35;
              pcVar27 = (char *)(ulonglong)bVar18;
              *pcVar34 = *pcVar34 + bVar35;
              *pcVar27 = *pcVar27 + bVar18;
              *(undefined8 *)(puVar119 + -0x10) = 7;
              *(uint *)*pauVar24 = *(uint *)*pauVar24 + (uint)bVar18;
              *pcVar27 = *pcVar27 + bVar18;
              bVar40 = bRam0000000000000000;
              cVar16 = cVar16 + bVar18 + bVar35;
              pcVar34 = (char *)CONCAT71(uVar36,cVar16);
              pcVar27 = (char *)(ulonglong)bRam0000000000000000;
              *pcVar34 = *pcVar34 + cVar16;
              *pcVar27 = *pcVar27 + bVar40;
              puVar119 = (undefined1 *)
                         (CONCAT62((int6)((ulonglong)pauVar133 >> 0x10),
                                   CONCAT11((char)((ulonglong)pauVar133 >> 8) + cVar17,cVar17)) +
                         0x72);
              *puVar119 = *puVar119;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(undefined8 *)(uVar118 - 0x10) = 0x6ac1002e;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
            pauStack_810 = (undefined1 (*) [16])((ulonglong)pauVar23 & 0xffffffff);
            pauVar26 = (undefined1 (*) [16])&pauStack_810;
            ppauVar42 = (undefined1 (**) [16])((longlong)&uStack_818 + 3);
            uVar20 = 1;
            goto LAB_140c8b6ab;
          case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
            pauVar26 = (undefined1 (*) [16])(ulonglong)(iVar120 - 0x50);
            goto code_r0x000140c8bbbf;
          case 3:
            pcVar27 = (char *)((longlong)pauVar23[-5] + 10);
                    /* WARNING: This code block may not be properly labeled as switch case */
            *pcVar27 = *pcVar27 + bVar40 + (0xfffffffebcf8970f < uVar32);
            *(uint *)*pauVar23 = *(uint *)*pauVar23 + iVar19;
            (*pauVar23)[0] = (char)*(uint *)*pauVar23 + cVar16;
            (*pauVar23)[0] = (char)*(uint *)*pauVar23 + -0x1c;
            (&UNK_143076894)[uVar32] = (&UNK_143076894)[uVar32] + bVar40;
            return pauVar23;
          case 4:
                    /* WARNING: This code block may not be properly labeled as switch case */
            return pauVar23;
          case 5:
            pauVar23 = pauStack_7a8;
            pbVar38 = (byte *)pauStack_7b0;
                    /* WARNING: This code block may not be properly labeled as switch case */
            break;
          case 6:
            break;
          case 7:
            pauVar23 = (undefined1 (*) [16])&uRam0000000000000001;
            pbVar38 = &UNK_143075fe5;
            break;
          case 8:
            pauVar23 = (undefined1 (*) [16])((longlong)&uRam0000000000000001 + 1);
            pbVar38 = &UNK_143075fe6;
            break;
          case 9:
            pauVar23 = pauStack_7c8;
            pbVar38 = (byte *)pauStack_7d0;
            break;
          case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0xb:
            pauStack_768 = pauStack_7a8;
            lStack_760 = lStack_7a0;
          case 0xf:
            pauStack_810 = (undefined1 (*) [16])0x140c90d90;
            func_0x0001690e96d8();
            pauVar23 = (undefined1 (*) [16])0xc;
code_r0x000140c90dcd:
            uStack_797 = CONCAT13((undefined1)uStack_774,uStack_778._1_3_);
            uStack_793 = (undefined3)((uint)uStack_774 >> 8);
            pauStack_788 = pauStack_768;
            lStack_780 = lStack_760;
            bStack_798 = (byte)pauVar23;
            pbStack_790 = pbStack_770;
            pauStack_7e8 = (undefined1 (*) [16])&UNK_143076540;
            puStack_7e0 = (uint *)0x3;
            pauStack_810 = (undefined1 (*) [16])0x140c90e1e;
            pdb_141b4d6f0(&uStack_778,&bStack_798,&UNK_14307651e,0x20);
            lVar126 = CONCAT44(uStack_774,uStack_778);
            pbVar38 = pbStack_770;
            if (lVar126 == 3) {
              pbStack_758 = pbStack_770;
              if (*(longlong *)pbStack_770 == 1) {
                pauStack_810 = (undefined1 (*) [16])0x140c90e6e;
                pdb_1404b38e0(pbStack_770 + 8);
              }
              else if ((*(longlong *)pbStack_770 == 0) && (*(ulonglong *)(pbStack_770 + 0x10) != 0))
              {
                pauStack_810 = (undefined1 (*) [16])0x140c90e63;
                pub_1406abac0(*(byte **)(pbStack_770 + 8),*(ulonglong *)(pbStack_770 + 0x10),1);
              }
              pbVar38 = (byte *)0x28;
              pauStack_810 = (undefined1 (*) [16])0x140c90e83;
              pub_1406abac0(pbStack_758,0x28,8);
              pbVar128 = &bStack_798;
              if (bStack_798 == 0x13) {
                pbVar128 = pbStack_790;
              }
              pauStack_810 = (undefined1 (*) [16])0x140c90e95;
              lVar126 = pdb_141b57340(pbVar128);
              lVar126 = lVar126 + 3;
              if (lVar126 == 4) {
                pbStack_758 = pbVar38;
                if (*(longlong *)pbVar38 == 1) {
                  pauStack_810 = (undefined1 (*) [16])0x140c90efc;
                  pdb_1404b38e0(pbVar38 + 8);
                }
                else if ((*(longlong *)pbVar38 == 0) && (*(ulonglong *)(pbVar38 + 0x10) != 0)) {
                  pauStack_810 = (undefined1 (*) [16])0x140c90ed8;
                  pub_1406abac0(*(byte **)(pbVar38 + 8),*(ulonglong *)(pbVar38 + 0x10),1);
                }
                pauStack_810 = (undefined1 (*) [16])0x140c90f11;
                pub_1406abac0(pbStack_758,0x28,8);
                pauStack_810 = (undefined1 (*) [16])0x140c90f23;
                pbVar38 = (byte *)pdb_142d86fc0(&UNK_1430764d0,0x4e);
                pauStack_810 = (undefined1 (*) [16])0x140c90f30;
                pdb_140c91760(&bStack_798);
                pbStack_770 = pbVar38;
code_r0x000140c90f30:
                lVar25 = 3;
                pbVar38 = pbStack_770;
                goto code_r0x000140c90f35;
              }
            }
            pauStack_810 = (undefined1 (*) [16])0x140c90ee3;
            pdb_140c91760(&bStack_798);
            lVar25 = 0;
            if (lVar126 - 1U < 2) {
              lVar25 = lVar126;
            }
code_r0x000140c90f35:
            *(byte **)((longlong)*pauVar33 + 8) = pbVar38;
            *(longlong *)*pauVar33 = lVar25;
            return pauVar33;
          case 0xc:
            pbVar38 = (byte *)((longlong)pauVar23[-8] + 0xd);
            *pbVar38 = *pbVar38 | bVar40;
            uVar127 = (longlong)*(int *)((longlong)pauVar133[-1] + 3) * 0x45b60f00;
            pauVar33 = (undefined1 (*) [16])(uVar127 & 0xffffffff);
            puVar122 = (uint *)((longlong)pauVar33[0x143075fe] + 4);
            *(char *)puVar122 = (char)*puVar122 + cVar17 + ((longlong)(int)uVar127 != uVar127);
            if ((char)*puVar122 != '\0') goto code_r0x000140c90dcd;
            goto code_r0x000140c90f30;
          case 0xd:
            pbStack_770 = _UNK_143075ff4;
            pauVar23 = (undefined1 (*) [16])(ulonglong)(0xa0804 >> ((byte)((int)arg0 << 3) & 0x1f));
            goto code_r0x000140c90dcd;
          case 0xe:
                    /* WARNING: Could not emulate address calculation at 0x000140c90d29 */
                    /* WARNING: Treating indirect jump as call */
            pauVar26 = (undefined1 (*) [16])
                       (*(code *)(CONCAT71((int7)((ulonglong)pauVar23 >> 8),cVar16 + -0x7f) +
                                 CONCAT71(uVar36,bVar40 + *(char *)((longlong)pauVar23[6] + 3))))();
            return pauVar26;
          case 0x10:
            puStack_858 = (undefined1 *)0x140c91012;
            pauStack_810 = pauVar33;
            pdb_141b4c820(abStack_828);
            pauVar23 = (undefined1 (*) [16])(ulonglong)abStack_828[0];
            puVar39 = &UNK_14307691c;
            goto code_r0x000140c91023;
          case 0x11:
            goto code_r0x000140c91034;
          case 0x12:
            puVar39 = (undefined *)0x4307691c;
            pauStack_820 = arg0;
code_r0x000140c91023:
                    /* WARNING: Could not recover jumptable at 0x000140c9102a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pauVar26 = (undefined1 (*) [16])
                       (*(code *)(puVar39 + *(int *)(puVar39 + (longlong)pauVar23 * 4)))
                                 (pauStack_820);
            return pauVar26;
          case 0x13:
            arg0 = (undefined1 (*) [16])(&UNK_1430768ef + uVar32);
            if (arg0 != (undefined1 (*) [16])0x0 && cVar17 >> 1 != '\0') {
              return pauVar23;
            }
            if ((int)arg0 == 0) {
              puStack_7e0 = (uint *)CONCAT71(puStack_7e0._1_7_,0xd);
              pauStack_810 = (undefined1 (*) [16])0x140c910af;
              pbVar38 = (byte *)pdb_142db90e0(&puStack_7e0,&UNK_143396a68,&UNK_1433966f8);
              lVar126 = 1;
              goto code_r0x000140c9103f;
            }
            bVar139 = (char)*(uint *)*arg0 == '\x13';
code_r0x000140c91034:
            if (bVar139) {
              arg0 = *(undefined1 (**) [16])((longlong)*arg0 + 8);
            }
            pauStack_810 = (undefined1 (*) [16])0x140c9103f;
            lVar126 = pdb_141b57340(arg0);
code_r0x000140c9103f:
            *(byte **)((longlong)*pauVar33 + 8) = pbVar38;
            *(longlong *)*pauVar33 = lVar126 * 3;
            return pauVar33;
          case 0x14:
            pauVar22 = (undefined1 (*) [16])&pauStack_7d0;
            pauVar135 = (undefined1 (*) [16])&UNK_14307692c;
            goto code_r0x000140c91239;
          case 0x15:
code_r0x000140c91239:
            while( true ) {
              pauStack_810 = (undefined1 (*) [16])&UNK_140c9124e;
              uVar127 = pdb_140f5ad90(1,pauVar22);
              pauVar26 = pauStack_7c0;
              if (uVar127 != 0) break;
              if (pauStack_7c0 == (undefined1 (*) [16])0x0) {
                return (undefined1 (*) [16])0x0;
              }
              bVar40 = (byte)*(uint *)((longlong)pauVar33[6] + 8);
              uVar127 = (ulonglong)bVar40;
              pauVar132 = (undefined1 (*) [16])(0x40 - uVar127);
              pauVar133 = (undefined1 (*) [16])((longlong)pauStack_7c0 - (longlong)pauVar132);
              if (pauStack_7c0 < pauVar132) {
                pauStack_810 = (undefined1 (*) [16])&UNK_140c9130e;
                pub_142e32760((longlong)pauVar33[2] + uVar127 + 8,pauStack_7d0,pauStack_7c0);
                cVar16 = bVar40 + (char)pauVar26;
              }
              else {
                pbVar38 = (byte *)pauStack_7d0;
                pauVar23 = pauStack_7c0;
                if (bVar40 != 0) {
                  pauStack_7d8 = (undefined1 (*) [16])((longlong)pauStack_7d0 + (longlong)pauVar132)
                  ;
                  puStack_7e0 = (uint *)((longlong)pauVar33[2] + 8);
                  pauStack_810 = (undefined1 (*) [16])&UNK_140c91345;
                  pub_142e32760((longlong)puStack_7e0 + uVar127);
                  *(longlong *)pauVar33[2] = *(longlong *)pauVar33[2] + 1;
                  pauStack_810 = (undefined1 (*) [16])&UNK_140c9135c;
                  pdb_141c17860(pauVar33,puStack_7e0,1);
                  pbVar38 = (byte *)pauStack_7d8;
                  pauVar23 = pauVar133;
                }
                if ((ulonglong)pauVar23 >> 6 != 0) {
                  *(ulonglong *)pauVar33[2] = *(longlong *)pauVar33[2] + ((ulonglong)pauVar23 >> 6);
                  pauStack_810 = (undefined1 (*) [16])&UNK_140c91379;
                  pdb_141c17860(pauVar33);
                }
                arg0 = (undefined1 (*) [16])0x7fffffffffffffc0;
                pauVar46 = pauVar23;
code_r0x000140c91389:
                uVar134 = (uint)pauVar46 & 0x3f;
                cVar16 = (char)uVar134;
                pauStack_810 = (undefined1 (*) [16])&UNK_140c9139f;
                pub_142e32760((uint *)((longlong)pauVar33[2] + 8),
                              (longlong)*(undefined1 (*) [16])pbVar38 +
                              ((ulonglong)pauVar23 & (ulonglong)arg0),uVar134);
              }
              *(char *)((longlong)pauVar33[6] + 8) = cVar16;
              pauStack_7c0 = (undefined1 (*) [16])0x0;
            }
code_r0x000140c91256:
                    /* WARNING: Could not recover jumptable at 0x000140c91262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pauVar26 = (undefined1 (*) [16])
                       (*(code *)((longlong)*pauVar135 +
                                 (longlong)
                                 (int)*(uint *)((longlong)*pauVar135 +
                                               (ulonglong)((uint)uVar127 & 3) * 4)))();
            return pauVar26;
          case 0x16:
            goto code_r0x000140c91389;
          case 0x17:
            uVar127 = (ulonglong)pauVar23 & 0xffffffff;
            goto code_r0x000140c91256;
          case 0x18:
            goto code_r0x000140c91440;
          case 0x19:
            pauStack_810 = *(undefined1 (**) [16])*arg0;
            ppauVar43 = (undefined1 (**) [16])&lStack_780;
            goto code_r0x000140c91449;
          case 0x1a:
            if ((char)*(uint *)pauVar23[1] != '#') {
              return pauVar23;
            }
            pauStack_810 = (undefined1 (*) [16])&UNK_140c914c5;
            pdb_1404b38e0(pauVar22);
            arg0 = pauVar33;
            ppauVar43 = &pauStack_808;
code_r0x000140c91440:
            while( true ) {
              if (arg0 == (undefined1 (*) [16])0x0) {
                return (undefined1 (*) [16])0x0;
              }
code_r0x000140c91449:
              *(undefined **)((longlong)ppauVar43 + -8) = &UNK_140c9145a;
              pdb_140c28230(pauVar135,pauVar133,pauVar129,pauVar33);
              bVar139 = *(char *)((longlong)ppauVar43 + 0x40) == '\x03';
              uVar127 = (ulonglong)bVar139;
              pauVar26 = *(undefined1 (**) [16])((longlong)ppauVar43 + 0x38);
              pauVar22 = pauVar33;
code_r0x000140c91469:
              *(ulonglong *)((longlong)ppauVar43 + 0x28) = uVar127;
              *(undefined1 (**) [16])((longlong)ppauVar43 + 0x30) = pauVar26;
              if (bVar139) {
                UNRECOVERED_JUMPTABLE =
                     (code *)((longlong)*pauVar132 +
                             (longlong)
                             (int)*(uint *)((longlong)*pauVar132 +
                                           (ulonglong)((uint)pauVar26 & 3) * 4));
                    /* WARNING: Could not recover jumptable at 0x000140c91481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pauVar26 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
                return pauVar26;
              }
              if (pauVar26 == (undefined1 (*) [16])0x0) {
                return (undefined1 (*) [16])&pauStack_528;
              }
              pauVar33 = (undefined1 (*) [16])((longlong)pauVar22 - (longlong)pauVar26);
              if (pauVar22 < pauVar26) break;
              pauVar129 = (undefined1 (*) [16])((longlong)*pauVar26 + (longlong)*pauVar129);
              arg0 = pauVar33;
            }
            *(undefined **)((longlong)ppauVar43 + -8) = &UNK_140c914fa;
            pdb_142dc8420(pauVar26,pauVar22,pauVar22,&UNK_1430766f8);
            UNRECOVERED_JUMPTABLE = (code *)swi(3);
            pauVar26 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)();
            return pauVar26;
          case 0x1b:
            uVar127 = (ulonglong)((int)arg0 + uRam0000000000000001);
            ppauVar43 = (undefined1 (**) [16])((ulonglong)pauVar23 & 0xffffffff);
            puVar122 = (uint *)(((ulonglong)&pauStack_808 & 0xffffffff) - 0x75);
            *puVar122 = *puVar122 >> 4 | *puVar122 << 0x1c;
            pauVar26 = (undefined1 (*) [16])((ulonglong)&pauStack_808 & 0xffffff38);
            bVar139 = ((ulonglong)&pauStack_808 & 0x38) == 0;
            pauVar22 = pauVar33;
            goto code_r0x000140c91469;
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x22:
            goto code_r0x000140c9166b;
          case 0x1f:
                    /* WARNING: Could not emulate address calculation at 0x000140f679a7 */
                    /* WARNING: Treating indirect jump as call */
            pauVar26 = (undefined1 (*) [16])
                       (**(code **)(*(longlong *)(&UNK_1430768f8 + uVar32) + 0x18))
                                 (*(undefined8 *)*arg0,&UNK_143075fe4,0x1c,
                                  *(code **)(*(longlong *)(&UNK_1430768f8 + uVar32) + 0x18));
            return pauVar26;
          case 0x20:
            puStack_858 = (undefined1 *)&pauStack_810;
            ppauVar106 = &pauStack_810;
            cVar16 = '\b';
            pauVar132 = pauVar26;
            do {
              pauVar132 = (undefined1 (*) [16])((longlong)pauVar132[-1] + 8);
              ppauVar106 = ppauVar106 + -1;
              *ppauVar106 = (undefined1 (*) [16])*(undefined8 *)*pauVar132;
              cVar16 = cVar16 + -1;
            } while ('\0' < cVar16);
            if (*(uint *)pauVar23[1] == 0) {
              return pauVar23;
            }
            uVar127 = *(ulonglong *)((longlong)pauVar24[1] + 8);
            ppauVar41 = (undefined1 (**) [16])auStack_e90f;
            pauStack_810 = pauVar26;
code_r0x0001406abac0:
            *(undefined1 (**) [16])((longlong)ppauVar41 + -8) = pauStack_e917;
            *(undefined1 (**) [16])((longlong)ppauVar41 + -0x10) = pauVar33;
            *(undefined **)((longlong)ppauVar41 + -0x40) = &UNK_140f3c37e;
            uVar20 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pauVar26 = (undefined1 (*) [16])HeapFree(uVar20,0,uVar127);
            return pauVar26;
          case 0x21:
code_r0x000140c9166b:
            uVar127 = *(ulonglong *)(lStack_7a0 + 8);
            ppauVar41 = &pauStack_7c0;
            pauStack_e917 = pauStack_7c8;
            goto code_r0x0001406abac0;
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x30:
          case 0x32:
          case 0x33:
          case 0x35:
            goto code_r0x000140c91716;
          case 0x2f:
          case 0x31:
            pcVar27 = (char *)((longlong)pauVar23[-8] + 9);
            *pcVar27 = *pcVar27 + bVar40;
            ppauVar44 = &pauStack_810;
            pauStack_810 = (undefined1 (*) [16])&pauStack_808;
code_r0x000140c91716:
            *(byte **)((longlong)ppauVar44 + 0x10) = &UNK_143075fe4;
            *(undefined1 (**) [16])((longlong)ppauVar44 + -8) = pauVar26;
            ppauVar45 = (undefined1 (**) [16])((longlong)ppauVar44 + -0x28);
            pauVar26 = (undefined1 (*) [16])&UNK_143076024;
            pauVar132 = (undefined1 (*) [16])0x0;
            if ((_UNK_143076014 & 0x7fffffffffffffff) != 0) {
              arg0 = *(undefined1 (**) [16])((longlong)*_UNK_14307600c + 8);
              pauVar23 = _UNK_14307600c;
code_r0x000140c91737:
              (*pauVar23)[0] = (char)*(uint *)*pauVar23 + (char)pauVar23;
              pcVar27 = (char *)((longlong)pauVar23[-8] + 5);
              *pcVar27 = *pcVar27 + (char)arg0;
              *(undefined1 *)((longlong)((longlong)pauVar23[4] + 8) + (longlong)pauVar133) = 0;
              *(undefined **)((longlong)ppauVar45 + -8) = &UNK_140c91747;
              func_0x00014911a28f();
              uVar127 = *(ulonglong *)pauVar26[-1];
              *(undefined **)((longlong)ppauVar45 + -8) = &UNK_140c91756;
              pub_1406abac0((byte *)arg0,uVar127,1);
              pauVar132 = extraout_RAX;
            }
            return pauVar132;
          case 0x34:
            bVar136 = (undefined1 (*) [16])0xfffffffebcf8a01b < pauVar23;
            bVar142 = SCARRY8((longlong)pauVar23,0x143075fe4);
            puVar28 = (uint *)((longlong)pauVar23[0x143075fe] + 4);
            bVar141 = (longlong)puVar28 < 0;
            bVar139 = puVar28 == (uint *)0x0;
            bVar35 = (byte)puVar28;
            bVar30 = (byte)((ulonglong)puVar28 >> 8);
            iVar19 = (int)puVar28;
            uVar36 = (undefined7)((ulonglong)puVar28 >> 8);
            puVar122 = &uRam0000000000000001;
            ppauVar42 = &pauStack_808;
            ppauVar43 = &pauStack_808;
            ppauVar104 = &pauStack_808;
            ppauVar105 = &pauStack_808;
            ppauVar107 = &pauStack_808;
            ppauVar108 = &pauStack_808;
            ppauVar109 = &pauStack_808;
            ppauVar11 = &pauStack_808;
            ppauVar95 = &pauStack_808;
            ppauVar96 = &pauStack_808;
            ppauVar97 = &pauStack_808;
            ppauVar98 = &pauStack_808;
            ppauVar12 = &pauStack_808;
            ppauVar99 = &pauStack_808;
            ppauVar100 = &pauStack_808;
            ppauVar101 = &pauStack_808;
            ppauVar112 = &pauStack_808;
            ppauVar102 = &pauStack_808;
            ppauVar115 = &pauStack_808;
            ppauVar111 = &pauStack_808;
            ppauVar113 = &pauStack_808;
            ppauVar114 = &pauStack_808;
            ppauVar63 = &pauStack_808;
            ppauVar92 = &pauStack_808;
            ppauVar64 = &pauStack_808;
            ppauVar67 = &pauStack_808;
            ppauVar68 = &pauStack_808;
            ppauVar91 = &pauStack_808;
            ppauVar69 = &pauStack_808;
            ppauVar71 = &pauStack_808;
            ppauVar72 = &pauStack_808;
            ppauVar73 = &pauStack_808;
            ppauVar74 = &pauStack_808;
            ppauVar75 = &pauStack_808;
            ppauVar76 = &pauStack_808;
            ppauVar77 = &pauStack_808;
            ppauVar78 = &pauStack_808;
            ppauVar79 = &pauStack_808;
            ppauVar80 = &pauStack_808;
            ppauVar81 = &pauStack_808;
            ppauVar82 = &pauStack_808;
            ppauVar83 = &pauStack_808;
            ppauVar84 = &pauStack_808;
            ppauVar85 = &pauStack_808;
            ppauVar86 = &pauStack_808;
            ppauVar87 = &pauStack_808;
            ppauVar88 = &pauStack_808;
            ppauVar13 = &pauStack_808;
            ppauVar93 = &pauStack_808;
            ppauVar94 = &pauStack_808;
            ppauVar62 = &pauStack_808;
            ppauVar65 = &pauStack_808;
            ppauVar66 = &pauStack_808;
            ppauVar14 = &pauStack_808;
            ppauVar58 = &pauStack_808;
            ppauVar59 = &pauStack_808;
            ppauVar60 = &pauStack_808;
            pauVar22 = (undefined1 (*) [16])&pauStack_808;
            pauVar46 = (undefined1 (*) [16])&pauStack_808;
            ppauVar47 = &pauStack_808;
            ppauVar48 = &pauStack_808;
            ppauVar49 = &pauStack_808;
            ppauVar50 = &pauStack_808;
            ppauVar51 = &pauStack_808;
            ppauVar52 = &pauStack_808;
            ppauVar53 = &pauStack_808;
            ppauVar54 = &pauStack_808;
            ppauVar55 = &pauStack_808;
            ppauVar56 = &pauStack_808;
            ppauVar57 = &pauStack_808;
            ppauVar90 = &pauStack_808;
            pauVar132 = pauVar33;
            pauVar130 = pauVar129;
            bVar137 = bVar136;
            bVar138 = bVar136;
            bVar140 = bVar139;
            bVar15 = bVar141;
            bVar143 = bVar142;
            switch(uVar127) {
            case 6:
              goto code_r0x000143075fe5;
            case 7:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
              pauVar46 = (undefined1 (*) [16])&pauStack_808;
              break;
            case 8:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
              pauVar46 = (undefined1 (*) [16])&pauStack_808;
              break;
            case 9:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
              pauVar46 = (undefined1 (*) [16])&pauStack_808;
              break;
            case 10:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
            case 0xc:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143075fed:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143075fef:
              *(byte *)puVar28 = (char)*puVar28 + bVar40;
code_r0x000143075ff1:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143075ff3:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143075ff5:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143075ff7:
              *(byte *)puVar28 = (char)*puVar28 + bVar40;
code_r0x000143075ff9:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143075ffb:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143075ffd:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143075fff:
              pbVar128 = (byte *)((longlong)pauVar23[0x14307603] + 0xe);
              bVar136 = 0xa0 < *pbVar128;
              bVar142 = SCARRY1(*pbVar128,'_');
              *pbVar128 = *pbVar128 + 0x5f;
              bVar141 = (char)*pbVar128 < '\0';
              bVar139 = *pbVar128 == 0;
              ppauVar14 = &pauStack_808;
              goto code_r0x000143076002;
            case 0xb:
              break;
            case 0xd:
              goto code_r0x000143075fec;
            case 0xe:
              goto code_r0x000143075fed;
            case 0xf:
              goto code_r0x000143075fee;
            case 0x10:
              goto code_r0x000143075fef;
            case 0x11:
              goto code_r0x000143075ff0;
            case 0x12:
              goto code_r0x000143075ff1;
            case 0x13:
              goto code_r0x000143075ff2;
            case 0x14:
              goto code_r0x000143075ff3;
            case 0x15:
              goto code_r0x000143075ff4;
            case 0x16:
              goto code_r0x000143075ff5;
            case 0x17:
              goto code_r0x000143075ff6;
            case 0x18:
              goto code_r0x000143075ff7;
            case 0x19:
              goto code_r0x000143075ff8;
            case 0x1a:
              goto code_r0x000143075ff9;
            case 0x1b:
              goto code_r0x000143075ffa;
            case 0x1c:
              goto code_r0x000143075ffb;
            case 0x1d:
              goto code_r0x000143075ffc;
            case 0x1e:
              goto code_r0x000143075ffd;
            case 0x1f:
              goto code_r0x000143075ffe;
            case 0x20:
              goto code_r0x000143075fff;
            case 0x21:
              goto code_r0x000143076000;
            case 0x22:
              pbVar38 = (byte *)pauStack_808;
              ppauVar14 = (undefined1 (**) [16])auStack_800;
            case 0x23:
              goto code_r0x000143076002;
            case 0x24:
              *(uint *)*pauVar24 = *(uint *)*pauVar24 + iVar19;
              ppauVar59 = &pauStack_808;
              goto code_r0x000143076006;
            case 0x25:
              goto code_r0x000143076004;
            case 0x26:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
            case 0x28:
              puVar122 = (uint *)((longlong)pauVar133[7] + 4);
              bVar137 = 0x1b < (byte)*puVar122;
              bVar142 = SCARRY1((char)*puVar122,-0x1c);
              *(char *)puVar122 = (char)*puVar122 + -0x1c;
              bVar141 = (char)*puVar122 < '\0';
              bVar139 = (char)*puVar122 == '\0';
code_r0x00014307600a:
              ppauVar92 = &pauStack_808;
              if (bVar137) goto code_r0x000143076075;
code_r0x00014307600c:
              ppauVar63 = &pauStack_808;
              ppauVar91 = &pauStack_808;
              if (!bVar142) goto code_r0x00014307600e;
              goto code_r0x00014307605e;
            case 0x27:
              goto code_r0x000143076006;
            case 0x29:
              goto code_r0x000143076008;
            case 0x2a:
              goto code_r0x000143076009;
            case 0x2b:
              goto code_r0x00014307600a;
            case 0x2c:
              goto code_r0x00014307600b;
            case 0x2d:
              goto code_r0x00014307600c;
            case 0x2e:
              ppauVar63 = &pauStack_810;
            case 0x2f:
code_r0x00014307600e:
              ppauVar92 = ppauVar63;
              ppauVar64 = ppauVar63;
              if (!bVar137) {
code_r0x000143076010:
                iVar19 = *(short *)((longlong)pauVar23[0x14307602] + 9) * 0x7272;
                uVar125 = (ushort)iVar19;
                pauVar129 = (undefined1 (*) [16])(ulonglong)uVar125;
                bVar137 = (short)uVar125 != iVar19;
                ppauVar67 = ppauVar64;
                bVar142 = bVar137;
                goto code_r0x000143076016;
              }
              goto code_r0x000143076075;
            case 0x30:
              iVar19 = *(short *)((longlong)pauVar23[0x14307602] + unaff_GS_OFFSET + 9) * 0x7272;
              uVar125 = (ushort)iVar19;
              pauVar129 = (undefined1 (*) [16])(ulonglong)uVar125;
              bVar137 = (short)uVar125 != iVar19;
              ppauVar67 = &pauStack_808;
              bVar142 = bVar137;
              goto code_r0x000143076016;
            case 0x31:
              goto code_r0x000143076010;
            case 0x32:
              uVar127 = (longlong)*(int *)((longlong)pauVar23[0x14307602] + 9) * 0x726f7272;
              pauVar129 = (undefined1 (*) [16])(uVar127 & 0xffffffff);
              bVar136 = (longlong)(int)uVar127 != uVar127;
              bVar142 = bVar136;
            case 0x39:
              ppauVar70 = &pauStack_808;
              bVar141 = true;
              bVar137 = bVar136;
              goto joined_r0x000143076018;
            case 0x33:
              goto code_r0x000143076012;
            case 0x34:
              ppauVar12 = &pauStack_808;
              ppauVar67 = &pauStack_808;
              if (!bVar136) goto code_r0x000143076016;
              goto code_r0x000143076088;
            case 0x35:
              goto code_r0x000143076014;
            case 0x36:
              ppauVar68 = &pauStack_808;
              if (bVar136) goto code_r0x000143076086;
              goto code_r0x000143076017;
            case 0x37:
              goto code_r0x000143076016;
            case 0x38:
              goto code_r0x000143076017;
            case 0x3a:
              goto code_r0x000143076019;
            case 0x3b:
              ppauVar71 = &pauStack_808;
              if (bVar136) goto code_r0x00014307608b;
              goto code_r0x00014307601c;
            case 0x3c:
              goto code_r0x00014307601b;
            case 0x3d:
              goto code_r0x00014307601c;
            case 0x3e:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
            case 0x40:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143076021:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143076023:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143076025:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143076027:
              *(byte *)puVar28 = (char)*puVar28 + bVar40;
code_r0x000143076029:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x00014307602b:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x00014307602d:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x00014307602f:
              *(byte *)puVar28 = (char)*puVar28 + bVar40;
code_r0x000143076031:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143076033:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143076035:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
code_r0x000143076037:
              pcVar27 = (char *)((longlong)pauVar23[0x143075ff] + 0xe);
              *pcVar27 = *pcVar27 + bVar35;
code_r0x00014307603a:
              *(undefined4 *)((longlong)pauVar23[0x143075fe] + 5) = 0x57000000;
              halt_baddata();
            case 0x3f:
              goto code_r0x00014307601e;
            case 0x41:
              goto code_r0x000143076020;
            case 0x42:
              goto code_r0x000143076021;
            case 0x43:
              goto code_r0x000143076022;
            case 0x44:
              goto code_r0x000143076023;
            case 0x45:
              goto code_r0x000143076024;
            case 0x46:
              goto code_r0x000143076025;
            case 0x47:
              goto code_r0x000143076026;
            case 0x48:
              goto code_r0x000143076027;
            case 0x49:
              goto code_r0x000143076028;
            case 0x4a:
              goto code_r0x000143076029;
            case 0x4b:
              goto code_r0x00014307602a;
            case 0x4c:
              goto code_r0x00014307602b;
            case 0x4d:
              goto code_r0x00014307602c;
            case 0x4e:
              goto code_r0x00014307602d;
            case 0x4f:
              goto code_r0x00014307602e;
            case 0x50:
              goto code_r0x00014307602f;
            case 0x51:
              goto code_r0x000143076030;
            case 0x52:
              goto code_r0x000143076031;
            case 0x53:
              goto code_r0x000143076032;
            case 0x54:
              goto code_r0x000143076033;
            case 0x55:
              goto code_r0x000143076034;
            case 0x56:
              goto code_r0x000143076035;
            case 0x57:
              goto code_r0x000143076036;
            case 0x58:
              goto code_r0x000143076037;
            case 0x59:
              goto code_r0x000143076038;
            case 0x5a:
              puVar28 = (uint *)CONCAT71(uVar36,(bVar35 - cVar17) - bVar136);
              ppauVar86 = &pauStack_808;
              goto code_r0x00014307603b;
            case 0x5b:
              goto code_r0x00014307603a;
            case 0x5c:
              goto code_r0x00014307603b;
            case 0x5d:
              *puVar28 = *puVar28 + iVar19;
              ppauVar87 = &pauStack_808;
              goto code_r0x00014307603e;
            case 0x5e:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
            case 0x60:
              bVar136 = 0x1b < bRam0000000000000062;
              bRam0000000000000062 = bRam0000000000000062 - 0x1c;
              bVar141 = (char)bRam0000000000000062 < '\0';
              bVar139 = bRam0000000000000062 == 0;
code_r0x000143076042:
              puVar122 = (uint *)((longlong)&uRam0000000000000001 + 1);
              uVar6 = in(0x5fe4);
              uRam0000000000000001 = CONCAT31(uRam0000000000000001._1_3_,uVar6);
code_r0x000143076043:
              pauVar129 = (undefined1 (*) [16])((longlong)puVar122 + 1);
              uVar6 = in(0x5fe4);
              *(undefined1 *)puVar122 = uVar6;
code_r0x000143076044:
              ppauVar89 = &pauStack_810;
              goto code_r0x000143076045;
            case 0x5f:
              goto code_r0x00014307603e;
            case 0x61:
              goto code_r0x000143076040;
            case 0x62:
              goto code_r0x000143076041;
            case 99:
              goto code_r0x000143076042;
            case 100:
              goto code_r0x000143076043;
            case 0x65:
              goto code_r0x000143076044;
            case 0x66:
              goto code_r0x000143076045;
            case 0x67:
              ppauVar89 = &pauStack_808;
              goto joined_r0x000143076046;
            case 0x68:
              if (bVar136) goto code_r0x0001430760aa;
            case 0x6a:
              uVar127 = (longlong)*(int *)((longlong)pauVar33[5] + 3) * 0x72696174;
              pauVar26 = (undefined1 (*) [16])(uVar127 & 0xffffffff);
              bVar136 = (longlong)(int)uVar127 != uVar127;
              bVar142 = bVar136;
code_r0x000143076050:
              bVar137 = false;
              if (bVar136) {
code_r0x000143076052:
                pbVar38 = (byte *)((longlong)pauVar133[7] + 2);
                *pbVar38 = *pbVar38 & bVar30;
code_r0x000143076055:
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            case 0x93:
code_r0x000143076072:
              ppauVar92 = &pauStack_808;
              if (!bVar137) goto code_r0x0001430760a4;
code_r0x000143076075:
              pauVar26 = (undefined1 (*) [16])
                         (ulonglong)*(uint *)((longlong)pauVar26[7] + (longlong)pauVar33 * 2 + 4);
              ppauVar93 = ppauVar92;
code_r0x000143076079:
              ppauVar94 = ppauVar93;
              if (bVar139) goto code_r0x0001430760e0;
code_r0x00014307607b:
              ppauVar95 = ppauVar94;
              bVar136 = bVar137;
              if (!bVar137) goto code_r0x00014307607d;
code_r0x0001430760dc:
              goto code_r0x0001430760de;
            case 0x69:
              goto code_r0x000143076048;
            case 0x6b:
              out((char)*(uint *)*pauVar33,0x5fe4);
            case 0x6c:
code_r0x00014307604c:
              if (!bVar139) {
code_r0x000143076055:
                halt_baddata();
              }
code_r0x0001430760af:
              UNK_143075fe4 = UNK_143075fe4 << 2 | UNK_143075fe4 >> 6;
            case 0xd3:
code_r0x0001430760b2:
code_r0x0001430760b4:
code_r0x0001430760b6:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 0x6d:
              goto code_r0x00014307604c;
            case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 0x6f:
              goto code_r0x000143076055;
            case 0x70:
              ppauVar115 = &pauStack_808;
              if (!bVar136) goto code_r0x000143076051;
              goto code_r0x0001430760c4;
            case 0x71:
              goto code_r0x000143076050;
            case 0x72:
code_r0x000143076051:
              bVar136 = false;
              *(byte *)puVar28 = (byte)*puVar28 & bVar30;
              bVar141 = (char)*puVar28 < '\0';
              bVar139 = (char)*puVar28 == '\0';
            case 0x74:
              pauVar33 = (undefined1 (*) [16])(ulonglong)_UNK_143076045;
            case 0x77:
code_r0x000143076056:
              ppauVar112 = &pauStack_808;
              if (!bVar139) {
code_r0x000143076058:
                bVar137 = true;
                if (bVar136) {
code_r0x00014307605a:
                  pauVar26 = (undefined1 (*) [16])(ulonglong)uRam0000000000000076;
                  pauVar132 = pauVar33;
code_r0x00014307605d:
                  pauVar33 = (undefined1 (*) [16])((longlong)*pauVar132 + 1);
                  out((char)*(uint *)*pauVar132,0x5fe4);
                  ppauVar91 = &pauStack_808;
                  goto code_r0x00014307605e;
                }
code_r0x000143076089:
                uVar127 = (longlong)(int)*(uint *)((longlong)pauVar133[6] + 8) * 0x6f;
                pauVar33 = (undefined1 (*) [16])(uVar127 & 0xffffffff);
                bVar136 = (longlong)(int)uVar127 != uVar127;
                ppauVar101 = &pauStack_808;
                bVar142 = bVar136;
                goto code_r0x00014307608d;
              }
              goto code_r0x0001430760bd;
            case 0x73:
              goto code_r0x000143076052;
            case 0x75:
              if (bVar136) goto code_r0x0001430760b7;
              goto code_r0x000143076056;
            case 0x76:
              goto code_r0x000143076055;
            case 0x78:
              if (bVar136) goto code_r0x00014307605a;
              goto code_r0x000143076089;
            case 0x79:
              goto code_r0x000143076058;
            case 0x7a:
              goto code_r0x000143076059;
            case 0x7b:
              goto code_r0x00014307605a;
            case 0x7c:
              out(*(uint *)*pauVar33,0x5fe4);
              ppauVar90 = &pauStack_808;
              pauVar33 = (undefined1 (*) [16])((longlong)*pauVar33 + 4);
            case 0x7d:
              goto code_r0x00014307605c;
            case 0x7e:
              goto code_r0x00014307605d;
            case 0x7f:
              goto code_r0x00014307605e;
            case 0x80:
              if (bVar136) goto code_r0x0001430760da;
            case 0x82:
code_r0x000143076066:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 0x81:
              goto code_r0x000143076060;
            case 0x83:
              goto code_r0x000143076062;
            case 0x84:
              out(*(uint *)*pauVar33,0x5fe4);
            case 0x85:
              if (!bVar136) {
                halt_baddata();
              }
            case 0xec:
code_r0x0001430760cb:
              bVar136 = false;
              bStack_723 = bStack_723 & bVar18;
code_r0x0001430760ce:
              goto joined_r0x0001430760ce;
            case 0x86:
              goto code_r0x000143076065;
            case 0x87:
              goto code_r0x000143076066;
            case 0x88:
              if (bVar136) goto code_r0x000143076069;
              goto code_r0x0001430760db;
            case 0x89:
              if (!bVar136) {
                halt_baddata();
              }
              goto code_r0x0001430760cd;
            case 0x8a:
code_r0x000143076069:
              pauVar26 = (undefined1 (*) [16])(ulonglong)uRam0000000000000001;
            case 0x8c:
              if (bVar136) goto code_r0x0001430760d2;
code_r0x00014307606d:
joined_r0x00014307606c:
              if (bVar136) goto code_r0x00014307606f;
              goto code_r0x0001430760de;
            case 0x8b:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 0x8d:
              goto joined_r0x00014307606c;
            case 0x8e:
              goto code_r0x00014307606d;
            case 0x8f:
              out(*(uint *)*pauVar33,0x5fe4);
            case 0x90:
code_r0x00014307606f:
              if (bVar139) {
code_r0x000143076071:
code_r0x000143076074:
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              pauVar33 = (undefined1 (*) [16])
                         (ulonglong)
                         (uint)(*(int *)((longlong)pauVar133[6] + in_FS_OFFSET + 0xb) * 0x6572203b);
              goto code_r0x0001430760eb;
            case 0x91:
              if (bVar136) goto code_r0x0001430760d5;
              goto code_r0x000143076072;
            case 0x92:
              goto code_r0x000143076071;
            case 0x94:
              ppauVar92 = &pauStack_808;
              if (bVar136) goto code_r0x000143076075;
              goto code_r0x0001430760a4;
            case 0x95:
              goto code_r0x000143076074;
            case 0x96:
              goto code_r0x000143076075;
            case 0x97:
              pauVar129 = (undefined1 (*) [16])((longlong)&uRam0000000000000001 + 1);
              uVar6 = in(0x5fe4);
              uRam0000000000000001 = CONCAT31(uRam0000000000000001._1_3_,uVar6);
            case 0x98:
              ppauVar93 = &pauStack_808;
              if (bVar139) goto code_r0x000143076079;
              puVar122 = (uint *)((longlong)*pauVar129 + 4);
              uVar134 = in(0x5fe4);
              *(uint *)*pauVar129 = uVar134;
code_r0x0001430760ee:
              pbVar128 = (byte *)((longlong)pauVar23[0x14307604] +
                                 unaff_GS_OFFSET + (longlong)pauVar26 * 2 + 9);
              *pbVar128 = *pbVar128 & 0x5f;
              pbVar128 = (byte *)((longlong)pauVar33[6] + 9);
              *pbVar128 = *pbVar128 & bVar30;
              pauVar129 = (undefined1 (*) [16])((longlong)puVar122 + 1);
              uVar6 = in(0x5fe4);
              *(undefined1 *)puVar122 = uVar6;
code_r0x0001430760f7:
              pbVar128 = (byte *)((longlong)pauVar129[2] + unaff_GS_OFFSET + (longlong)pauVar26 * 2)
              ;
              *pbVar128 = *pbVar128 & 0x5f;
              bVar40 = *pbVar128;
              pauVar132 = pauVar33;
              goto code_r0x0001430760fc;
            case 0x99:
              puVar122 = &uRam0000000000000001;
              if (!bVar139) goto code_r0x00014307607a;
              goto code_r0x0001430760ee;
            case 0x9a:
              goto code_r0x000143076079;
            case 0x9b:
code_r0x00014307607a:
              ppauVar95 = &pauStack_808;
              if (bVar136) goto code_r0x0001430760dc;
              goto code_r0x00014307607d;
            case 0x9c:
              goto code_r0x00014307607b;
            case 0x9d:
              ppauVar95 = (undefined1 (**) [16])auStack_800;
              pauVar129 = pauStack_808;
            case 0x9e:
              goto code_r0x00014307607d;
            case 0x9f:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 0xa0:
              goto code_r0x00014307607f;
            case 0xa1:
              uVar127 = (longlong)*(int *)((longlong)pauVar133[2] + 0xe) * 0x72;
              pauVar33 = (undefined1 (*) [16])(uVar127 & 0xffffffff);
              bVar136 = (longlong)(int)uVar127 != uVar127;
              bVar142 = bVar136;
            case 0xa5:
code_r0x000143076086:
              ppauVar12 = &pauStack_808;
              pauVar132 = pauVar33;
              if (bVar136 || bVar139) goto code_r0x000143076088;
              goto code_r0x0001430760f7;
            case 0xa2:
              if (!bVar136) goto code_r0x0001430760b1;
            case 0xa4:
              ppauVar98 = &pauStack_808;
              if (bVar136) goto code_r0x0001430760f8;
              goto code_r0x000143076085;
            case 0xa3:
              goto code_r0x000143076082;
            case 0xa6:
              goto code_r0x000143076085;
            case 0xa7:
              goto code_r0x000143076086;
            case 0xa8:
              out(*(uint *)*pauVar33,0x5fe4);
              ppauVar12 = &pauStack_808;
              pauVar132 = (undefined1 (*) [16])((longlong)*pauVar33 + 4);
            case 0xa9:
              goto code_r0x000143076088;
            case 0xaa:
              goto code_r0x000143076089;
            case 0xab:
              goto code_r0x00014307608a;
            case 0xac:
code_r0x00014307608b:
              ppauVar11 = &pauStack_810;
            case 0xb1:
              ppauVar42 = ppauVar11;
              if (!bVar136) {
                pauVar132 = (undefined1 (*) [16])((longlong)*pauVar33 + 4);
                out(*(uint *)*pauVar33,0x5fe4);
                goto code_r0x0001430760f5;
              }
              goto code_r0x000143076092;
            case 0xad:
              goto code_r0x00014307608c;
            case 0xae:
              goto code_r0x00014307608d;
            case 0xaf:
              ppauVar103 = &pauStack_810;
              goto code_r0x000143076091;
            case 0xb0:
              goto code_r0x00014307608f;
            case 0xb2:
              goto code_r0x000143076091;
            case 0xb3:
              goto code_r0x000143076092;
            case 0xb4:
              goto code_r0x000143076093;
            case 0xb5:
              pauVar129 = (undefined1 (*) [16])((longlong)&uRam0000000000000001 + 1);
              uVar6 = in(0x5fe4);
              uRam0000000000000001 = CONCAT31(uRam0000000000000001._1_3_,uVar6);
            case 0xb6:
              ppauVar104 = &pauStack_808;
              if (!bVar139) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              goto code_r0x000143076097;
            case 0xb7:
              pauVar132 = pauVar129;
              if (!bVar139) goto code_r0x000143076098;
              goto code_r0x00014307610c;
            case 0xb8:
              goto code_r0x000143076097;
            case 0xb9:
code_r0x000143076098:
              bVar141 = bVar136;
              ppauVar106 = &pauStack_808;
              goto joined_r0x000143076098;
            case 0xba:
              goto code_r0x000143076099;
            case 0xbb:
              pauVar26 = (undefined1 (*) [16])
                         (ulonglong)*(uint *)((longlong)auStack_714 + (longlong)pauVar33 * 2);
              ppauVar108 = &pauStack_808;
              goto code_r0x00014307609e;
            case 0xbc:
              goto code_r0x00014307609b;
            case 0xbd:
              goto code_r0x00014307609c;
            case 0xbe:
              if (bVar139) {
                uRam0000000000000001 = in(0x5fe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            case 0xc0:
              ppauVar110 = &pauStack_808;
              goto joined_r0x00014307609f;
            case 0xbf:
              goto code_r0x00014307609e;
            case 0xc1:
              goto code_r0x0001430760a0;
            case 0xc2:
              goto code_r0x0001430760a4;
            case 0xc3:
              goto code_r0x0001430760a2;
            case 0xc4:
              if (!bVar136) {
                halt_baddata();
              }
              goto code_r0x0001430760a5;
            case 0xc5:
              goto code_r0x0001430760a4;
            case 0xc6:
              goto code_r0x0001430760a5;
            case 199:
              goto code_r0x0001430760a6;
            case 200:
              if (!bVar136) {
                halt_baddata();
              }
              pbVar128 = (byte *)((longlong)pauVar23[0x14307604] + (longlong)pauVar26 * 2 + 9);
              *pbVar128 = *pbVar128 & 0x5f;
              pauVar132 = pauVar33;
              goto code_r0x000143076112;
            case 0xc9:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 0xca:
              goto code_r0x0001430760a9;
            case 0xcb:
code_r0x0001430760aa:
              goto code_r0x0001430760b2;
            case 0xcc:
              goto code_r0x0001430760b2;
            case 0xcd:
              out((char)*(uint *)*pauVar33,0x5fe4);
            case 0xce:
            case 0xd1:
code_r0x0001430760b0:
              goto code_r0x0001430760b2;
            case 0xcf:
              goto code_r0x0001430760b0;
            case 0xd0:
              goto code_r0x0001430760af;
            case 0xd2:
code_r0x0001430760b1:
code_r0x0001430760b3:
              *(char *)puVar28 = (char)*puVar28;
              halt_baddata();
            case 0xd4:
              goto code_r0x0001430760b3;
            case 0xd5:
              goto code_r0x0001430760b4;
            case 0xd6:
              uRam0000000000000001 =
                   CONCAT31(uRam0000000000000001._1_3_,
                            (byte)uRam0000000000000001 >> 2 | (byte)uRam0000000000000001 << 6);
            case 0xd9:
              bVar136 = false;
              bStack_71f = bStack_71f & bVar18;
              bVar139 = bStack_71f == 0;
code_r0x0001430760bb:
              ppauVar112 = &pauStack_808;
              if (!bVar136) goto code_r0x000143076130;
              goto code_r0x0001430760bd;
            case 0xd7:
              goto code_r0x0001430760b6;
            case 0xd8:
code_r0x0001430760b7:
              bVar141 = (char)(bVar30 - (byte)*puVar28) < '\0';
              bVar139 = bVar30 == (byte)*puVar28;
            case 0xda:
              pauVar129 = (undefined1 (*) [16])&uRam0000000000000005;
              uRam0000000000000001 = in(0x5fe4);
              ppauVar111 = &pauStack_808;
            case 0xdb:
              goto code_r0x0001430760ba;
            case 0xdc:
              goto code_r0x0001430760bb;
            case 0xdd:
              if (bVar136) goto code_r0x0001430760be;
              goto code_r0x000143076127;
            case 0xde:
              goto code_r0x0001430760bd;
            case 0xdf:
code_r0x0001430760be:
              pauVar132 = (undefined1 (*) [16])((longlong)*pauVar33 + 1);
              out((char)*(uint *)*pauVar33,0x5fe4);
            case 0xe0:
              pbVar128 = (byte *)(longlong)(iVar120 + 0x65);
              bVar136 = false;
              *pbVar128 = *pbVar128 & bVar18;
              bVar141 = (char)*pbVar128 < '\0';
              bVar139 = *pbVar128 == 0;
              pauVar33 = pauVar132;
            case 0xe4:
code_r0x0001430760c3:
              if (bVar136) goto code_r0x0001430760c5;
              goto code_r0x00014307612d;
            case 0xe1:
              bVar136 = false;
              bStack_723 = bStack_723 & bVar18;
              bVar141 = (char)bStack_723 < '\0';
              bVar139 = bStack_723 == 0;
              goto code_r0x0001430760c3;
            case 0xe2:
              goto code_r0x0001430760c1;
            case 0xe3:
              goto code_r0x0001430760c2;
            case 0xe5:
              goto code_r0x0001430760c4;
            case 0xe6:
              goto code_r0x0001430760c5;
            case 0xe7:
              *(char *)puVar28 = (char)*puVar28;
              halt_baddata();
            case 0xe8:
              goto code_r0x0001430760c7;
            case 0xe9:
              uRam0000000000000001 =
                   CONCAT31(uRam0000000000000001._1_3_,
                            (byte)uRam0000000000000001 << 2 | (byte)uRam0000000000000001 >> 6);
              goto code_r0x0001430760cb;
            case 0xea:
              goto code_r0x0001430760c9;
            case 0xeb:
              bVar136 = bVar30 < (byte)*puVar28;
            case 0xed:
              goto code_r0x0001430760cc;
            case 0xee:
              goto code_r0x0001430760cd;
            case 0xef:
              goto code_r0x0001430760ce;
            case 0xf0:
              goto code_r0x0001430760d4;
            case 0xf1:
              goto code_r0x0001430760d0;
            case 0xf2:
              goto code_r0x0001430760d4;
            case 0xf3:
              goto code_r0x0001430760d2;
            case 0xf4:
              (&UNK_143076963)[uVar32] = (&UNK_143076963)[uVar32] & bVar18;
            case 0xf7:
              pbVar128 = (byte *)((longlong)pauVar33[6] + 1);
              *pbVar128 = *pbVar128 & bVar18;
code_r0x0001430760d9:
              uRam0000000000000001 = in(0x5fe4);
code_r0x0001430760da:
              goto code_r0x0001430760de;
            case 0xf5:
              goto code_r0x0001430760d4;
            case 0xf6:
code_r0x0001430760d5:
              if (bVar136) goto code_r0x0001430760d7;
              goto code_r0x0001430760f7;
            case 0xf8:
code_r0x0001430760d7:
              out((char)*(uint *)*pauVar33,0x5fe4);
code_r0x0001430760d8:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 0xf9:
              goto code_r0x0001430760d8;
            case 0xfa:
              goto code_r0x0001430760d9;
            case 0xfb:
              goto code_r0x0001430760da;
            case 0xfc:
              goto code_r0x0001430760db;
            case 0xfd:
              goto code_r0x0001430760dc;
            case 0xfe:
              pbVar128 = &UNK_143076910 + uVar32;
              *pbVar128 = *pbVar128 << 7 | *pbVar128 >> 1;
              pauVar132 = pauVar33;
              goto code_r0x0001430760e1;
            case 0xff:
              goto code_r0x0001430760de;
            default:
              pauVar22 = pauStack_808;
code_r0x000143075fe5:
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
              pauVar46 = pauVar22;
            }
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            ppauVar47 = (undefined1 (**) [16])pauVar46;
code_r0x000143075fec:
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            ppauVar48 = ppauVar47;
code_r0x000143075fee:
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            ppauVar49 = ppauVar48;
code_r0x000143075ff0:
            *(byte *)puVar28 = (byte)*puVar28 | bVar35;
            ppauVar50 = ppauVar49;
code_r0x000143075ff2:
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            ppauVar51 = ppauVar50;
code_r0x000143075ff4:
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            ppauVar52 = ppauVar51;
code_r0x000143075ff6:
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            ppauVar53 = ppauVar52;
code_r0x000143075ff8:
            *(byte *)puVar28 = (byte)*puVar28 | bVar35;
            ppauVar54 = ppauVar53;
code_r0x000143075ffa:
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            ppauVar55 = ppauVar54;
code_r0x000143075ffc:
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            ppauVar56 = ppauVar55;
code_r0x000143075ffe:
            bVar136 = CARRY1((byte)*puVar28,bVar35);
            bVar143 = SCARRY1((char)*puVar28,bVar35);
            *(byte *)puVar28 = (char)*puVar28 + bVar35;
            bVar141 = (char)*puVar28 < '\0';
            bVar139 = (char)*puVar28 == '\0';
            ppauVar57 = ppauVar56;
code_r0x000143076000:
            bVar142 = false;
            ppauVar14 = ppauVar57;
            ppauVar90 = ppauVar57;
            bVar140 = bVar139;
            if (bVar143) {
code_r0x00014307605c:
              bVar139 = true;
              ppauVar91 = ppauVar90;
              bVar137 = bVar136;
              if (bVar140) {
code_r0x00014307605e:
                bVar142 = !bVar139;
                ppauVar13 = ppauVar91;
                bVar136 = bVar137;
                bVar139 = false;
                if (bVar142) {
code_r0x000143076060:
                  ppauVar102 = ppauVar13;
                  if (bVar141) {
code_r0x000143076062:
code_r0x000143076065:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
code_r0x00014307608f:
                  ppauVar103 = (undefined1 (**) [16])((longlong)ppauVar102 + -8);
                  *(undefined8 *)((longlong)ppauVar102 + -8) = 0x73;
code_r0x000143076091:
                  out(*(uint *)*pauVar33,(short)pbVar38);
                  ppauVar42 = ppauVar103;
                  pauVar132 = (undefined1 (*) [16])((longlong)*pauVar33 + 4);
code_r0x000143076092:
                  pauVar33 = (undefined1 (*) [16])((longlong)*pauVar132 + 1);
                  out((char)*(uint *)*pauVar132,(short)pbVar38);
                  ppauVar43 = ppauVar42;
code_r0x000143076093:
                  pauVar26 = (undefined1 (*) [16])
                             (ulonglong)
                             *(uint *)((longlong)pauVar26[7] + (longlong)pauVar33 * 2 + 4);
                  ppauVar104 = ppauVar43;
code_r0x000143076097:
                  bVar140 = false;
                  ppauVar105 = ppauVar104;
                  if (bVar139) {
code_r0x0001430760fe:
                    pbVar38 = (byte *)((longlong)pauVar129[7] +
                                      unaff_GS_OFFSET + (longlong)pauVar26 * 2 + 7);
                    *pbVar38 = *pbVar38 & bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
code_r0x000143076099:
                  bVar141 = bVar136;
                  bVar139 = bVar140;
                  ppauVar106 = ppauVar105;
joined_r0x000143076098:
                  bVar136 = false;
                  pauVar130 = pauVar129;
                  if (bVar141) goto code_r0x0001430760fe;
code_r0x00014307609b:
                  pauVar129 = (undefined1 (*) [16])((longlong)*pauVar130 + 1);
                  uVar6 = in((short)pbVar38);
                  (*pauVar130)[0] = uVar6;
                  ppauVar107 = ppauVar106;
code_r0x00014307609c:
                  ppauVar108 = ppauVar107;
                  pauVar132 = pauVar33;
                  bVar140 = true;
                  if (bVar139) {
code_r0x00014307609e:
                    ppauVar109 = ppauVar108;
                    if (!bVar140) {
code_r0x0001430760a0:
                      ppauVar110 = ppauVar109;
joined_r0x00014307609f:
                      if (!bVar136) {
code_r0x0001430760a2:
                        *(undefined8 *)((longlong)ppauVar110 + -8) = 0x73;
                        pauVar132 = pauVar33;
code_r0x0001430760a4:
                        pauVar33 = (undefined1 (*) [16])((longlong)*pauVar132 + 4);
                        out(*(uint *)*pauVar132,(short)pbVar38);
code_r0x0001430760a5:
                        out((char)*(uint *)*pauVar33,(short)pbVar38);
code_r0x0001430760a6:
                        pbVar128 = (byte *)((longlong)
                                            *(undefined1 (*) [16])((longlong)pbVar38 + 0x60) + 5);
                        *pbVar128 = *pbVar128 | (byte)((ulonglong)pbVar38 >> 8);
code_r0x0001430760a9:
                    /* WARNING: Bad instruction - Truncating control flow here */
                        halt_baddata();
                      }
                      goto code_r0x0001430760d0;
                    }
                    pbVar128 = (byte *)((longlong)pauVar33[6] + unaff_GS_OFFSET + 1);
                    *pbVar128 = *pbVar128 & bVar18;
                    pauVar132 = pauVar129;
code_r0x00014307610c:
                    pauVar129 = (undefined1 (*) [16])((longlong)*pauVar132 + 4);
                    uVar134 = in((short)pbVar38);
                    *(uint *)*pauVar132 = uVar134;
                    pbVar128 = (byte *)((longlong)pauVar23[0x14307604] +
                                       unaff_GS_OFFSET + (longlong)pauVar26 * 2 + 9);
                    *pbVar128 = *pbVar128 & (byte)((ulonglong)pbVar38 >> 8);
                    pauVar132 = pauVar33;
                  }
code_r0x000143076112:
                  pbVar128 = (byte *)((longlong)pauVar26[6] + 1);
                  *pbVar128 = *pbVar128 & bVar18;
                  pauVar33 = (undefined1 (*) [16])((longlong)*pauVar132 + 1);
                  out((char)*(uint *)*pauVar132,(short)pbVar38);
                  lVar126 = (longlong)*(int *)((longlong)pauVar132[6] + 6) * 0x75207473;
                  if ((int)lVar126 == lVar126) {
                    (&UNK_143076910)[uVar32] = (&UNK_143076910)[uVar32] & bVar30;
                    pauVar26 = (undefined1 (*) [16])
                               CONCAT62((int6)((ulonglong)pauVar26 >> 0x10),
                                        (short)*(uint *)*pauVar26 * 0x16c0);
                    if (bVar30 != (byte)*puVar28) {
                      halt_baddata();
                    }
                  }
                  else {
                    (*pauVar129)[0] =
                         (char)*(uint *)*pauVar129 << 2 | (byte)*(uint *)*pauVar129 >> 6;
                    pbVar128 = (byte *)((longlong)pauVar26[6] + 5);
                    *pbVar128 = *pbVar128 & bVar18;
                    bVar139 = *pbVar128 == 0;
code_r0x000143076127:
                    if (!bVar139) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                  }
code_r0x000143076193:
                  puVar5 = (undefined4 *)((longlong)*pauVar129 + 1);
                  uVar37 = SUB82(pbVar38,0);
                  uVar6 = in(uVar37);
                  (*pauVar129)[0] = uVar6;
                  lVar126 = (longlong)*(int *)((longlong)pauVar133[6] + 1) * 0x6d206574;
                  if ((int)lVar126 != lVar126) {
                    *(byte *)((longlong)pauVar133[7] + 4) =
                         (byte)*(uint *)((longlong)pauVar133[7] + 4) &
                         (byte)((ulonglong)pbVar38 >> 8);
                    uVar7 = in(uVar37);
                    *puVar5 = uVar7;
                    uVar134 = *(uint *)*(undefined1 (*) [16])pbVar38;
                    pbVar38 = (byte *)((longlong)pauVar26[6] + 5);
                    *pbVar38 = *pbVar38 & bVar18;
                    pbVar38 = (byte *)((ulonglong)(((int)puVar5 + 4) - uVar134) + 0x77 +
                                      (longlong)pauVar26 * 2);
                    *pbVar38 = *pbVar38 & bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  out((char)*(uint *)*pauVar33,uVar37);
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
code_r0x0001430760cc:
                uRam0000000000000001 = in(0x5fe4);
code_r0x0001430760cd:
joined_r0x0001430760ce:
                if (!bVar136) {
                  (*arg0)[0] = (byte)*(uint *)*arg0 & 0x5f;
                  pbVar38 = (byte *)((longlong)*arg0 + unaff_GS_OFFSET);
                  *pbVar38 = *pbVar38 & 0x5f;
                  (&UNK_14307695d)[(longlong)&pauStack_528 * 2 + uVar32] =
                       (&UNK_14307695d)[(longlong)&pauStack_528 * 2 + uVar32] & (byte)pauVar26;
                  lVar126 = (longlong)*(int *)((longlong)puVar28 * 2 + -0x40) * 0x6d203a28;
                  if ((int)lVar126 == lVar126) {
                    halt_baddata();
                  }
                  UNK_143076049 = UNK_143076049 & 0x5f;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
code_r0x0001430760d0:
              }
code_r0x0001430760d2:
              puVar28 = (uint *)(ulonglong)CONCAT11(bVar30 | (byte)*puVar28,bVar35);
code_r0x0001430760d4:
              pauVar33 = (undefined1 (*) [16])(ulonglong)(*(uint *)pauVar133[2] * 0x656d616e);
code_r0x0001430760db:
            }
            else {
code_r0x000143076002:
              ppauVar89 = ppauVar14;
              ppauVar58 = ppauVar89;
              if (bVar142) {
code_r0x000143076045:
joined_r0x000143076046:
                ppauVar111 = ppauVar89;
                if (!bVar136) {
code_r0x000143076048:
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
code_r0x0001430760ba:
                uVar127 = (longlong)*(int *)((longlong)pauVar133[7] + 3) * 0x20676e69;
                pauVar33 = (undefined1 (*) [16])(uVar127 & 0xffffffff);
                bVar136 = (longlong)(int)uVar127 != uVar127;
                ppauVar113 = ppauVar111;
                pauVar130 = pauVar129;
code_r0x0001430760c1:
                pauVar129 = (undefined1 (*) [16])((longlong)*pauVar130 + 4);
                uVar134 = in((short)pbVar38);
                *(uint *)*pauVar130 = uVar134;
                ppauVar114 = ppauVar113;
code_r0x0001430760c2:
                ppauVar116 = ppauVar114;
                if (bVar136) {
code_r0x0001430760c5:
code_r0x0001430760c7:
                  halt_baddata();
                }
code_r0x00014307612d:
                ppauVar117 = ppauVar116;
                if (!bVar141) {
code_r0x000143076130:
                  if (bVar139) {
                    uVar6 = in((short)pbVar38);
                    *(undefined1 *)pauVar129 = uVar6;
                    pbVar128 = (byte *)((longlong)*pauVar33 + unaff_GS_OFFSET);
                    *pbVar128 = *pbVar128 & bVar18;
                    uVar6 = in((short)pbVar38);
                    ((undefined1 *)pauVar129)[1] = uVar6;
                    halt_baddata();
                  }
                  *(undefined8 *)((longlong)ppauVar117 + -8) = 0x200ec020;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                goto code_r0x000143076193;
              }
code_r0x000143076004:
              *puVar28 = *puVar28 + iVar19;
              ppauVar59 = ppauVar58;
code_r0x000143076006:
              bVar136 = CARRY1((byte)*puVar28,bVar35);
              bVar142 = SCARRY1((char)*puVar28,bVar35);
              *(byte *)puVar28 = (char)*puVar28 + bVar35;
              bVar141 = (char)*puVar28 < '\0';
              bVar139 = (char)*puVar28 == '\0';
              ppauVar60 = ppauVar59;
code_r0x000143076008:
              ppauVar61 = (undefined1 (**) [16])((longlong)ppauVar60 + -8);
              *(undefined1 (**) [16])((longlong)ppauVar60 + -8) = pauVar133;
code_r0x000143076009:
              ppauVar95 = ppauVar61;
              ppauVar62 = ppauVar61;
              if (!bVar139) {
code_r0x00014307600b:
                uVar127 = (longlong)(int)*(uint *)((longlong)pauVar23[0x14307603] + 4) * 0x69666572;
                pauVar33 = (undefined1 (*) [16])(uVar127 & 0xffffffff);
                bVar136 = (longlong)(int)uVar127 != uVar127;
                ppauVar65 = ppauVar62;
                bVar142 = bVar136;
code_r0x000143076012:
                ppauVar66 = ppauVar65;
                bVar138 = bVar136;
                bVar15 = false;
                if (bVar141) {
code_r0x000143076059:
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
code_r0x000143076014:
                bVar141 = bVar15;
                bVar136 = true;
                ppauVar12 = ppauVar66;
                ppauVar67 = ppauVar66;
                pauVar132 = pauVar33;
                bVar137 = false;
                if (bVar138) goto code_r0x000143076088;
code_r0x000143076016:
                pauVar33 = (undefined1 (*) [16])((longlong)*pauVar132 + 4);
                out(*(uint *)*pauVar132,(short)pbVar38);
                ppauVar68 = ppauVar67;
                bVar136 = bVar137;
code_r0x000143076017:
                ppauVar91 = ppauVar68;
                ppauVar69 = ppauVar68;
                bVar137 = bVar136;
                if (bVar136) goto code_r0x00014307605e;
code_r0x000143076019:
                ppauVar70 = ppauVar69;
                bVar141 = bVar136;
                bVar137 = bVar136;
joined_r0x000143076018:
                bVar136 = bVar141;
                ppauVar101 = ppauVar70;
                if (!bVar137) {
code_r0x00014307601b:
                  out(*(uint *)*pauVar33,(short)pbVar38);
                  ppauVar71 = ppauVar70;
code_r0x00014307601c:
                  ppauVar72 = ppauVar71;
code_r0x00014307601e:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar73 = ppauVar72;
code_r0x000143076020:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar74 = ppauVar73;
code_r0x000143076022:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar75 = ppauVar74;
code_r0x000143076024:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar76 = ppauVar75;
code_r0x000143076026:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar77 = ppauVar76;
code_r0x000143076028:
                  *(byte *)puVar28 = (byte)*puVar28 | bVar35;
                  ppauVar78 = ppauVar77;
code_r0x00014307602a:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar79 = ppauVar78;
code_r0x00014307602c:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar80 = ppauVar79;
code_r0x00014307602e:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar81 = ppauVar80;
code_r0x000143076030:
                  *(byte *)puVar28 = (byte)*puVar28 | bVar35;
                  ppauVar82 = ppauVar81;
code_r0x000143076032:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar83 = ppauVar82;
code_r0x000143076034:
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar84 = ppauVar83;
code_r0x000143076036:
                  bVar136 = CARRY1((byte)*puVar28,bVar35);
                  *(byte *)puVar28 = (char)*puVar28 + bVar35;
                  ppauVar85 = ppauVar84;
code_r0x000143076038:
                  puVar28 = (uint *)CONCAT71(uVar36,(bVar35 - (char)pauVar129) - bVar136);
                  ppauVar86 = ppauVar85;
code_r0x00014307603b:
                  *puVar28 = *puVar28 + (int)puVar28;
                  ppauVar87 = ppauVar86;
code_r0x00014307603e:
                  *(char *)puVar28 = (char)*puVar28 + (char)puVar28;
                  ppauVar88 = ppauVar87;
code_r0x000143076040:
                  *(undefined1 (**) [16])((longlong)ppauVar88 + -8) = pauVar129;
code_r0x000143076041:
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
code_r0x00014307608d:
                ppauVar112 = ppauVar101;
                ppauVar102 = ppauVar101;
                if (bVar142) {
code_r0x0001430760bd:
                  ppauVar115 = ppauVar112;
code_r0x0001430760c4:
                  *(undefined8 *)((longlong)ppauVar115 + -8) = 0xffffffffc000c020;
code_r0x0001430760c9:
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                goto code_r0x00014307608f;
              }
code_r0x00014307607d:
              ppauVar96 = ppauVar95;
              if (!bVar142) {
code_r0x00014307607f:
                pauVar26 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)pauVar133[7] + 3);
                ppauVar97 = ppauVar96;
code_r0x000143076082:
                ppauVar98 = ppauVar97;
                if (bVar136) {
code_r0x0001430760f8:
                  pbVar128 = (byte *)((longlong)pauVar129[2] + (longlong)pauVar26 * 2);
                  *pbVar128 = *pbVar128 & (byte)((ulonglong)pbVar38 >> 8);
                  bVar40 = *pbVar128;
code_r0x0001430760fc:
                  if (bVar40 == 0) {
                    uVar6 = in((short)pbVar38);
                    (*pauVar129)[0] = uVar6;
                    pbVar128 = (byte *)((longlong)pauVar23[0x14307604] +
                                       unaff_GS_OFFSET + (longlong)pauVar26 * 2 + 9);
                    *pbVar128 = *pbVar128 & (byte)((ulonglong)pbVar38 >> 8);
                    puVar122 = (uint *)((longlong)pauVar133[6] + 0xc);
                    bVar141 = false;
                    *(byte *)puVar122 = (byte)*puVar122 & bVar30;
                    bVar139 = (char)*puVar122 == '\0';
                    if (!bVar139) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    goto code_r0x000143076169;
                  }
                  goto code_r0x0001430760fe;
                }
code_r0x000143076085:
                pbVar128 = (byte *)((longlong)pauVar129[6] + 0xf);
                bVar40 = (byte)((ulonglong)pbVar38 >> 8);
                bVar136 = CARRY1(*pbVar128,bVar40);
                bVar142 = SCARRY1(*pbVar128,bVar40);
                *pbVar128 = *pbVar128 + bVar40;
                bVar139 = *pbVar128 == 0;
                ppauVar12 = ppauVar98;
code_r0x000143076088:
                ppauVar42 = ppauVar12;
                bVar137 = false;
                ppauVar99 = ppauVar42;
                if (bVar136) {
code_r0x0001430760f5:
                  lVar126 = (longlong)(int)*(uint *)pauVar26[2] * 0x74206f74;
                  bVar141 = (int)lVar126 != lVar126;
                  *(undefined8 *)((longlong)ppauVar42 + -8) = 0x6f6c2065;
                  if ((bVar141 || bVar139) && (!bVar141)) {
                    halt_baddata();
                  }
code_r0x000143076169:
                  if (bVar139) {
                    out(*(uint *)*pauVar132,(short)pbVar38);
                    iVar19 = *(int *)((longlong)pauVar132[6] + 0xb);
                    pcVar27 = (char *)CONCAT71(uVar36,bVar35 * '\x02');
                    (*(undefined1 (*) [16])pbVar38)[0] =
                         (char)*(uint *)*(undefined1 (*) [16])pbVar38 +
                         cVar17 + (char)*(uint *)*(undefined1 (*) [16])pbVar38 +
                         CARRY1(bVar35,bVar35);
                    pbVar38 = (byte *)((ulonglong)(uint)(iVar19 * 0x3a02c020) + 0x65);
                    *pbVar38 = *pbVar38 & bVar18;
                    *pcVar27 = *pcVar27 + bVar35 * '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  if (!bVar141) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
code_r0x00014307608a:
                bVar136 = true;
                ppauVar100 = ppauVar99;
                if (!bVar137) {
                  pauVar26 = (undefined1 (*) [16])
                             CONCAT62((int6)((ulonglong)pauVar26 >> 0x10),
                                      (short)*(uint *)pauVar26[2] * 0x6f74);
                  pbVar128 = (byte *)((longlong)pauVar23[0x14307604] + (longlong)pauVar26 * 2 + 9);
                  *pbVar128 = *pbVar128 & (byte)((ulonglong)pbVar38 >> 8);
                  pbVar38 = (byte *)((longlong)pauVar129[7] + (longlong)pauVar26 * 2 + 7);
                  *pbVar38 = *pbVar38 & bVar18;
                  goto code_r0x0001430760fe;
                }
code_r0x00014307608c:
                pauVar33 = (undefined1 (*) [16])((longlong)*pauVar132 + 4);
                out(*(uint *)*pauVar132,(short)pbVar38);
                ppauVar101 = ppauVar100;
                goto code_r0x00014307608d;
              }
code_r0x0001430760e0:
              out(*(uint *)*pauVar33,(short)pbVar38);
              pauVar132 = (undefined1 (*) [16])((longlong)*pauVar33 + 4);
code_r0x0001430760e1:
              pauVar33 = (undefined1 (*) [16])((longlong)*pauVar132 + 1);
              out((char)*(uint *)*pauVar132,(short)pbVar38);
            }
code_r0x0001430760de:
            pbVar128 = (byte *)((longlong)pauVar135[6] + 0xe);
            *pbVar128 = *pbVar128 & (byte)pauVar26;
            (&UNK_143076963)[(longlong)pauVar26 * 2 + uVar32] =
                 (&UNK_143076963)[(longlong)pauVar26 * 2 + uVar32] & (byte)((ulonglong)puVar28 >> 8)
            ;
            lVar126 = (longlong)(int)*(uint *)*pauVar133 * 0x20;
            if ((int)lVar126 != lVar126) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
code_r0x0001430760eb:
            out((char)*(uint *)*pauVar33,(short)pbVar38);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x36:
            pbVar38 = (byte *)((longlong)pauVar23[-8] + 5);
            *pbVar38 = *pbVar38 | bVar40;
            *(char *)((longlong)pauVar33[4] + ((longlong)pauVar26 * 2 + 2) * 4) =
                 (char)*(uint *)((longlong)pauVar33[4] + ((longlong)pauVar26 * 2 + 2) * 4) <<
                 (bVar40 & 0x1f);
            uVar127 = (ulonglong)*(uint *)(&UNK_143076900 + uVar32);
            ppauVar41 = &pauStack_7a8;
            pauStack_e917 = pauStack_7b0;
            pauVar33 = pauStack_7b8;
            pauStack_810 = arg0;
            goto code_r0x0001406abac0;
          default:
            goto code_r0x000140c91737;
          }
          if ((pauVar22 == (undefined1 (*) [16])0x0) || (pauVar135 != pauVar23)) {
LAB_140c8b757:
            pauStack_528 = (undefined1 (*) [16])&uStack_128;
            pauStack_520 = (undefined1 (*) [16])pdb_140f58250;
            uStack_518 = (undefined1 (*) [16])&uStack_d0;
            uStack_510 = pdb_140094770;
            pauStack_810 = (undefined1 (*) [16])0x140c8b7a6;
            pdb_140f60760(&pauStack_7d8,&UNK_1430761a6,&pauStack_528);
            pauStack_528 = pauStack_7d8;
            pauStack_520 = pauStack_7d0;
            uStack_518 = pauStack_7c8;
            pauStack_810 = (undefined1 (*) [16])0x140c8b7cb;
            uVar20 = pdb_142de92b0(&pauStack_528);
LAB_140c8b7cc:
            *(undefined8 *)(*pauStack_70 + 8) = uVar20;
            *(undefined8 *)*pauStack_70 = 0x8000000000000000;
LAB_140c8b7e4:
            if (uStack_d0 != 0) {
              pauStack_810 = (undefined1 (*) [16])0x140c8b802;
              pub_1406abac0((byte *)pauStack_c8,uStack_d0,1);
            }
            if ((longlong)pauStack_160 - (longlong)pauStack_170 != 0) {
              uVar127 = (ulonglong)((longlong)pauStack_160 - (longlong)pauStack_170) >> 5;
              puVar122 = (uint *)((longlong)*pauStack_170 + 8);
              do {
                if (*(ulonglong *)(puVar122 + -2) != 0) {
                  pauStack_810 = (undefined1 (*) [16])0x140c8b840;
                  pub_1406abac0(*(byte **)puVar122,*(ulonglong *)(puVar122 + -2),1);
                }
                puVar122 = puVar122 + 8;
                uVar127 = uVar127 - 1;
              } while (uVar127 != 0);
            }
            if (pauStack_168 != (undefined1 (*) [16])0x0) {
              pauStack_810 = (undefined1 (*) [16])0x140c8b864;
              pub_1406abac0((byte *)pauStack_178,(longlong)pauStack_168 << 5,8);
            }
            pauVar26 = pauStack_1a0;
            if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
              if (lStack_190 != 0) {
                auVar3 = *pauStack_1a8;
                pauVar132 = pauStack_1a8 + 1;
                uVar134 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
                pauVar22 = pauStack_1a8;
                lVar126 = lStack_190;
                do {
                  if ((short)uVar134 == 0) {
                    do {
                      auVar3 = *pauVar132;
                      pauVar22 = pauVar22 + -0x18;
                      pauVar132 = pauVar132 + 1;
                      uVar134 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
                    } while (uVar134 == 0);
                  }
                  uVar121 = 0;
                  for (uVar9 = uVar134; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                    uVar121 = uVar121 + 1;
                  }
                  uVar127 = *(ulonglong *)((longlong)pauVar22 + (ulonglong)uVar121 * -0x18 + -0x18);
                  if (uVar127 != 0) {
                    pauStack_810 = (undefined1 (*) [16])0x140c8b907;
                    pub_1406abac0(*(byte **)((longlong)pauVar22 + (ulonglong)uVar121 * -0x18 + -0x10
                                            ),uVar127,1);
                  }
                  uVar134 = uVar134 - 1 & uVar134;
                  lVar126 = lVar126 + -1;
                } while (lVar126 != 0);
              }
              uVar127 = (longlong)pauVar26 * 0x18 + 0x27U & 0xfffffffffffffff0;
              uVar32 = (longlong)pauVar26[1] + uVar127 + 1;
              if (uVar32 != 0) {
                pauStack_810 = (undefined1 (*) [16])0x140c8b93a;
                pub_1406abac0((byte *)((longlong)pauStack_1a8 - uVar127),uVar32,0x10);
              }
            }
            uStack_66 = 0;
            pauStack_810 = (undefined1 (*) [16])0x140c8b94d;
            pdb_140967580(&uStack_108);
            pauVar26 = pauStack_140;
            pauVar33 = pauStack_b0;
            goto joined_r0x000140c8bd46;
          }
          pauStack_810 = (undefined1 (*) [16])0x140c8aef3;
          iVar19 = pub_142e32750(pauVar22,pbVar38,pauVar135);
          if (iVar19 != 0) goto LAB_140c8b757;
LAB_140c8aefb:
          pauStack_810 = (undefined1 (*) [16])0x140c8af06;
          pauVar22 = pauVar33;
          lVar126 = pdb_140f3ec80(pauVar133,pauVar33);
          if (lVar126 == 0) goto LAB_140c8b757;
          pauStack_810 = (undefined1 (*) [16])0x140c8af1e;
          pdb_140f69110((undefined1 (*) [16])&pauStack_528,lVar126,pauVar22);
          if ((((char)pauStack_528 != '\0') ||
              (uStack_518 != (undefined1 (*) [16])((longlong)&uRam0000000000000001 + 2))) ||
             (*(char *)((longlong)*pauStack_520 + 2) != 'b' ||
              (short)*(uint *)*pauStack_520 != 0x6c67)) goto LAB_140c8b757;
          pauStack_810 = (undefined1 (*) [16])0x140c8af65;
          pauVar22 = pauVar33;
          lVar126 = pdb_140f3ee10(pauVar133,pauVar33);
          if (lVar126 == 0) {
LAB_140c8b6bd:
            pauStack_810 = (undefined1 (*) [16])0x140c8b6d0;
            uVar20 = pdb_142d929a0(&uStack_d0,&uStack_128);
            goto LAB_140c8b7cc;
          }
          pauStack_810 = (undefined1 (*) [16])0x140c8af7d;
          pdb_140f69110((undefined1 (*) [16])&pauStack_528,lVar126,pauVar22);
          pauVar135 = uStack_518;
          pauVar22 = pauStack_520;
          if (((char)pauStack_528 != '\0') || (uStack_518 == (undefined1 (*) [16])0x0))
          goto LAB_140c8b6bd;
          pauVar24 = (undefined1 (*) [16])0x0;
          do {
            cVar16 = *(char *)((longlong)*pauVar24 + (longlong)*pauStack_520);
            if (((9 < (byte)(cVar16 - 0x30U) && 0x19 < (byte)(cVar16 + 0x9fU)) && (cVar16 != '_'))
               && (cVar16 != '-')) goto LAB_140c8b6bd;
            pauVar24 = (undefined1 (*) [16])((longlong)*pauVar24 + 1);
          } while (uStack_518 != pauVar24);
          if ((longlong)uStack_518 < 0) {
            uVar20 = 0;
LAB_140c8b6ab:
            uVar8 = *(undefined8 *)((longlong)pauVar26[0x5c] + 8);
            *(undefined8 *)((longlong)ppauVar42 + -8) = 0x140c8b6ba;
            pdb_142dc7e2a(uVar20,uVar8);
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
            (*UNRECOVERED_JUMPTABLE)();
          }
          pauStack_810 = (undefined1 (*) [16])0x140c8aff4;
          pdb_14007ee60();
          uVar20 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b006;
          pauVar24 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar135,1);
          if (pauVar24 == (undefined1 (*) [16])0x0) {
            pauStack_1c0 = pauVar135;
            ppauVar42 = &pauStack_808;
            goto LAB_140c8b6ab;
          }
          pauStack_810 = (undefined1 (*) [16])0x140c8b020;
          pub_142e32760(pauVar24,pauVar22,pauVar135);
          pauStack_158 = pauVar135;
          pauStack_148 = pauVar135;
          uStack_65 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b052;
          pauStack_1c0 = pauVar24;
          pauStack_150 = pauVar24;
          pdb_140f60be0((undefined1 (*) [16])&pauStack_528,&pauStack_158);
          uStack_65 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b069;
          cVar16 = pdb_1403b0b40(&pauStack_1a8,(undefined1 (*) [16])&pauStack_528);
          if (cVar16 != '\0') {
            pauStack_528 = (undefined1 (*) [16])&uStack_128;
            pauStack_520 = (undefined1 (*) [16])pdb_140f58250;
            uStack_518 = (undefined1 (*) [16])&pauStack_158;
            uStack_510 = pdb_140094770;
            uStack_65 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8bebb;
            uVar20 = pdb_142d8fe70(&UNK_14307618c,&pauStack_528);
            *(undefined8 *)(*pauStack_70 + 8) = uVar20;
            *(undefined8 *)*pauStack_70 = 0x8000000000000000;
LAB_140c8c1aa:
            if (pauStack_158 != (undefined1 (*) [16])0x0) {
              pauStack_810 = (undefined1 (*) [16])0x140c8c1cc;
              pub_1406abac0((byte *)pauStack_150,(ulonglong)pauStack_158,1);
            }
            goto LAB_140c8b7e4;
          }
          uStack_65 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b09b;
          pauStack_7e8 = pauVar33;
          pdb_140f3e9e0(&pauStack_1e0,pbStack_e8,uStack_f0,pauVar133);
          uStack_64 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b0b9;
          pdb_140f4f710((undefined1 (*) [16])&pauStack_528,pbStack_e8,uStack_f0);
          pauVar33 = pauStack_520;
          pauVar22 = pauStack_528;
          if (pauStack_528 == (undefined1 (*) [16])((longlong)&uRam0000000000000001 + 1)) {
            uStack_64 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8bee8;
            uVar20 = pdb_142deaf00(pauStack_520);
LAB_140c8c036:
            *(undefined8 *)(*pauStack_70 + 8) = uVar20;
            *(undefined8 *)*pauStack_70 = 0x8000000000000000;
LAB_140c8c18c:
            if (pauStack_1e0 != (undefined1 (*) [16])0x0) {
              pauStack_810 = (undefined1 (*) [16])0x140c8c1aa;
              pub_1406abac0(pbStack_1d8,(ulonglong)pauStack_1e0,1);
            }
            goto LAB_140c8c1aa;
          }
          pauStack_810 = (undefined1 (*) [16])0x140c8b0e8;
          pub_142e32760(&pauStack_7c8,&uStack_518,0x260);
          pauStack_7d8 = pauVar22;
          pauStack_7d0 = pauVar33;
          pauStack_810 = (undefined1 (*) [16])0x140c8b102;
          pdb_1419b8500((undefined1 (*) [16])&pauStack_528,pauVar132,&uStack_d0);
          pauVar133 = (undefined1 (*) [16])uStack_510;
          pauVar33 = uStack_518;
          pauVar22 = pauStack_520;
          pauStack_e0 = pauStack_528;
          if (!SBORROW8(0,(longlong)pauStack_528)) {
            pauStack_138 = pauStack_520;
          }
          if (pauStack_7d8 != (undefined1 (*) [16])0x0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8b14b;
            pdb_140f590a0(&pauStack_7d0);
          }
          LOCK();
          *(longlong *)*pauStack_7c8 = *(longlong *)*pauStack_7c8 + -1;
          UNLOCK();
          if (*(longlong *)*pauStack_7c8 == 0) {
            uStack_61 = 1;
            uStack_62 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8b16d;
            pdb_140cd0de0(&pauStack_7c8);
          }
          pauVar135 = pauStack_e0;
          if (SBORROW8(0,(longlong)pauStack_e0)) {
            pauStack_528 = (undefined1 (*) [16])&uStack_128;
            pauStack_520 = (undefined1 (*) [16])pdb_140f58250;
            uStack_518 = (undefined1 (*) [16])&uStack_d0;
            uStack_510 = pdb_140094770;
            uStack_61 = 1;
            uStack_62 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8bf4b;
            pdb_140905540(&pauStack_7d8,&UNK_1430760b5,&pauStack_528);
            pauStack_528 = pauStack_7d8;
            pauStack_520 = pauStack_7d0;
            uStack_518 = pauStack_7c8;
            uStack_61 = 1;
            uStack_62 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8bf7e;
            uVar20 = pdb_142de92b0(&pauStack_528);
            goto LAB_140c8c036;
          }
          if (pauVar33 != pauStack_c0) {
LAB_140c8bd5a:
            pauStack_7d8 = pauVar135;
            pauStack_7d0 = pauVar22;
            pauStack_7c8 = pauVar33;
            pauStack_7c0 = pauVar133;
            pauStack_528 = (undefined1 (*) [16])&uStack_128;
            pauStack_520 = (undefined1 (*) [16])pdb_140f58250;
            uStack_518 = (undefined1 (*) [16])&uStack_d0;
            uStack_510 = pdb_140094770;
            uStack_500 = pdb_140f58250;
            pauStack_810 = (undefined1 (*) [16])0x140c8bdcd;
            uStack_508 = pauVar132;
            pdb_140905540(&pauStack_220,&UNK_1430760c8,&pauStack_528);
            pauStack_528 = pauStack_220;
            pauStack_520 = pauStack_218;
            uStack_518 = (undefined1 (*) [16])CONCAT44(uStack_20c,uStack_210);
            pauStack_810 = (undefined1 (*) [16])0x140c8bdf8;
            uVar20 = pdb_142de92b0(&pauStack_528);
            *(undefined8 *)(*pauStack_70 + 8) = uVar20;
            *(undefined8 *)*pauStack_70 = 0x8000000000000000;
            pauVar26 = pauStack_7d8;
            pauVar132 = pauStack_7d0;
joined_r0x000140c8be18:
            if (pauVar26 != (undefined1 (*) [16])0x0) {
              pauStack_810 = (undefined1 (*) [16])0x140c8c18c;
              pub_1406abac0((byte *)pauVar132,(ulonglong)pauVar26,1);
            }
            goto LAB_140c8c18c;
          }
          pauStack_810 = (undefined1 (*) [16])0x140c8b1a0;
          iVar19 = pub_142e32750(pauVar22,pauStack_c8,pauVar33);
          if (iVar19 != 0) goto LAB_140c8bd5a;
          if (pauVar135 != (undefined1 (*) [16])0x0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8b1be;
            pub_1406abac0((byte *)pauVar22,(ulonglong)pauVar135,1);
          }
          uVar20 = uStack_1d0;
          pbVar38 = pbStack_1d8;
          uStack_61 = 1;
          uStack_62 = 0;
          pauStack_810 = (undefined1 (*) [16])0x140c8b1e5;
          cVar16 = pdb_140f3ec10(pbStack_1d8,uStack_1d0);
          if (cVar16 == '\0') {
            pauStack_528 = (undefined1 (*) [16])&uStack_128;
            pauStack_520 = (undefined1 (*) [16])pdb_140f58250;
            uStack_518 = (undefined1 (*) [16])&uStack_d0;
            uStack_510 = pdb_140094770;
            uStack_61 = 1;
            uStack_62 = 0;
            pauStack_810 = (undefined1 (*) [16])0x140c8bfe1;
            pdb_140905540(&pauStack_7d8,&UNK_143076172,&pauStack_528);
            pauStack_528 = pauStack_7d8;
            pauStack_520 = pauStack_7d0;
            uStack_518 = pauStack_7c8;
            uStack_61 = 1;
            uStack_62 = 0;
            pauStack_810 = (undefined1 (*) [16])0x140c8c012;
            uVar20 = pdb_142de92b0(&pauStack_528);
            goto LAB_140c8c036;
          }
          uStack_61 = 1;
          uStack_62 = 0;
          pauStack_810 = (undefined1 (*) [16])0x140c8b20a;
          pdb_140f4ee90((undefined1 (*) [16])&pauStack_528,pbVar38,uVar20);
          pauVar133 = (undefined1 (*) [16])uStack_510;
          pauVar33 = uStack_518;
          pauStack_88 = pauStack_520;
          if (SBORROW8(0,(longlong)pauStack_528)) {
            uStack_61 = 1;
            uStack_62 = 0;
            pauStack_810 = (undefined1 (*) [16])0x140c8c035;
            uVar20 = pdb_142d92490(pbVar38,uVar20,pauStack_520);
            goto LAB_140c8c036;
          }
          pauStack_80 = pauStack_528;
          uStack_67 = 1;
          pbStack_e8 = pbStack_238;
          uStack_f0 = uStack_230;
          pauStack_810 = (undefined1 (*) [16])0x140c8b26c;
          pdb_140f4ee90((undefined1 (*) [16])&pauStack_528);
          pauVar135 = uStack_518;
          pauStack_a0 = pauStack_520;
          if (SBORROW8(0,(longlong)pauStack_528)) {
            uStack_67 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8c074;
            uVar20 = pdb_142d926c0(pbStack_e8,uStack_f0,pauStack_520);
            *(undefined8 *)(*pauStack_70 + 8) = uVar20;
            *(undefined8 *)*pauStack_70 = 0x8000000000000000;
            pauVar26 = pauStack_80;
            pauVar132 = pauStack_88;
            goto joined_r0x000140c8be18;
          }
          pauStack_d8 = pauStack_528;
          uStack_63 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b2b2;
          pauVar24 = pauVar33;
          lVar126 = pdb_140f3eaf0(pauStack_88,pauVar33);
          if (lVar126 == 0) {
LAB_140c8be2d:
            pauStack_528 = (undefined1 (*) [16])&uStack_128;
            pauStack_520 = (undefined1 (*) [16])pdb_140f58250;
            uStack_63 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8be63;
            uVar20 = pdb_142d8fe70(&UNK_143076147,&pauStack_528);
LAB_140c8c135:
            pauVar26 = pauStack_80;
            *(undefined8 *)(*pauStack_70 + 8) = uVar20;
            *(undefined8 *)*pauStack_70 = 0x8000000000000000;
            pauVar132 = pauStack_88;
            if (pauStack_d8 != (undefined1 (*) [16])0x0) {
              pauStack_810 = (undefined1 (*) [16])0x140c8c172;
              pub_1406abac0((byte *)pauStack_a0,(ulonglong)pauStack_d8,1);
              pauVar132 = pauStack_88;
            }
            goto joined_r0x000140c8be18;
          }
          uStack_63 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b2d5;
          pdb_140f3ddd0(&pauStack_2b0,lVar126,pauVar24);
          uStack_63 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b2f3;
          pdb_140f3ddd0(&pauStack_220,pauStack_a0,pauVar135);
          if ((((pauStack_2a8 == pauStack_218) && (cStack_278 == (char)uStack_1e8)) &&
              (cStack_277 == '\x02')) &&
             ((uStack_1e8._1_1_ == '\x02' && ((byte)uStack_210 < 3 == bStack_2a0 < 3)))) {
            pauStack_810 = (undefined1 (*) [16])0x140c8b350;
            iVar19 = pub_142e32750(pauStack_2b0,pauStack_220);
            if (iVar19 != 0) goto LAB_140c8b358;
          }
          else {
LAB_140c8b358:
            pauStack_7c8 = (undefined1 (*) [16])CONCAT71(uStack_29f,bStack_2a0);
            lStack_7a0 = CONCAT62(uStack_276,CONCAT11(cStack_277,cStack_278));
            pauStack_7a8 = pauStack_280;
            pauStack_7b8 = pauStack_290;
            pauStack_7b0 = pauStack_288;
            pauStack_7c0 = pauStack_298;
            pauStack_7d8 = pauStack_2b0;
            pauStack_7d0 = pauStack_2a8;
            uStack_4f8 = (undefined1 (*) [16])CONCAT44(uStack_1ec,uStack_1f0);
            uStack_4f0 = (undefined1 (*) [16])CONCAT44(uStack_1e4,uStack_1e8);
            uStack_508 = (undefined1 (*) [16])CONCAT44(uStack_1fc,uStack_200);
            uStack_500 = (code *)CONCAT44(uStack_1f4,uStack_1f8);
            uStack_518 = (undefined1 (*) [16])CONCAT44(uStack_20c,uStack_210);
            uStack_510 = (code *)CONCAT44(uStack_204,uStack_208);
            pauStack_528 = pauStack_220;
            pauStack_520 = pauStack_218;
            uStack_63 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8b3d0;
            cVar16 = pdb_141b03d50(pauVar132,(undefined1 (*) [16])&pauStack_528);
            if (cVar16 == '\0') goto LAB_140c8be2d;
          }
          uStack_63 = 1;
          pauStack_810 = (undefined1 (*) [16])0x140c8b3f2;
          pdb_140f4f620((undefined1 (*) [16])&pauStack_528,pauStack_88,pauVar33);
          pauVar135 = pauStack_148;
          if ((int)pauStack_528 == 2) {
            uStack_63 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8c0ac;
            uVar20 = pdb_142deaf00(pauStack_520);
            goto LAB_140c8c135;
          }
          if ((undefined1 (*) [16])0x8000000 < uStack_4f0) {
            pauStack_528 = (undefined1 (*) [16])&uStack_128;
            pauStack_520 = (undefined1 (*) [16])pdb_140f58250;
            uStack_518 = (undefined1 (*) [16])&uStack_d0;
            uStack_510 = pdb_140094770;
            uStack_63 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8c108;
            pdb_140905540(&pauStack_7d8,&UNK_143076121,&pauStack_528);
            pauStack_528 = pauStack_7d8;
            pauStack_520 = pauStack_7d0;
            uStack_518 = pauStack_7c8;
            uStack_63 = 1;
            pauStack_810 = (undefined1 (*) [16])0x140c8c134;
            uVar20 = pdb_142de92b0(&pauStack_528);
            goto LAB_140c8c135;
          }
          pauStack_130 = pauStack_158;
          pauStack_1b0 = pauStack_150;
          uVar6 = (undefined1)uStack_b8;
          cVar16 = uStack_b8._1_1_;
          if (uStack_b8._1_1_ == '\'') {
            cVar16 = '\x12';
          }
          pauStack_810 = (undefined1 (*) [16])0x140c8b460;
          pdb_140f60be0(&pauStack_220,pauStack_90);
          pauStack_810 = (undefined1 (*) [16])0x140c8b470;
          pdb_140f60be0(pauVar132,pauStack_a8);
          uVar127 = uStack_f8;
          pauStack_528 = pauStack_250;
          pauStack_520 = pauStack_248;
          uStack_508 = pauStack_130;
          uStack_500 = (code *)pauStack_1b0;
          uStack_4f8 = pauVar135;
          uStack_4f0 = pauStack_80;
          pauStack_4e8 = pauStack_88;
          pauStack_4e0 = pauVar33;
          pauStack_4d8 = pauVar133;
          uStack_4a0 = uVar6;
          uStack_518 = pauStack_78;
          uStack_510 = (code *)pauStack_1b8;
          pauStack_4d0 = pauStack_220;
          pauStack_4c8 = pauStack_218;
          pauStack_4a8 = pauStack_7c8;
          pauStack_4b8 = pauStack_7d8;
          pauStack_4b0 = pauStack_7d0;
          cStack_49f = cVar16;
          if (uStack_f8 == uStack_108) {
            pauStack_810 = (undefined1 (*) [16])0x140c8b546;
            pdb_142d89330(&uStack_108);
          }
          pauStack_810 = (undefined1 (*) [16])0x140c8b564;
          pub_142e32760(uVar127 * 0x90 + lStack_100,(undefined1 (*) [16])&pauStack_528,0x90);
          uStack_f8 = uVar127 + 1;
          if (pauStack_d8 != (undefined1 (*) [16])0x0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8b58c;
            pub_1406abac0((byte *)pauStack_a0,(ulonglong)pauStack_d8,1);
          }
          if (pauStack_1e0 != (undefined1 (*) [16])0x0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8b5a6;
            pub_1406abac0(pbVar38,(ulonglong)pauStack_1e0,1);
          }
          if (uStack_d0 != 0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8b5c4;
            pub_1406abac0((byte *)pauStack_c8,uStack_d0,1);
          }
          pauStack_138 = pauVar22;
        } while (pauStack_170 != pauStack_160);
      }
      if ((longlong)pauStack_160 - (longlong)pauStack_170 != 0) {
        uVar127 = (ulonglong)((longlong)pauStack_160 - (longlong)pauStack_170) >> 5;
        puVar122 = (uint *)((longlong)*pauStack_170 + 8);
        do {
          if (*(ulonglong *)(puVar122 + -2) != 0) {
            pauStack_810 = (undefined1 (*) [16])0x140c8b624;
            pub_1406abac0(*(byte **)puVar122,*(ulonglong *)(puVar122 + -2),1);
          }
          puVar122 = puVar122 + 8;
          uVar127 = uVar127 - 1;
        } while (uVar127 != 0);
      }
      if (pauStack_168 != (undefined1 (*) [16])0x0) {
        pauStack_810 = (undefined1 (*) [16])0x140c8ba39;
        pub_1406abac0((byte *)pauStack_178,(longlong)pauStack_168 << 5,8);
      }
      pauStack_528 = (undefined1 (*) [16])&uStack_91;
      if (1 < uStack_f8) {
        if (uStack_f8 < 0x15) {
          pauStack_810 = (undefined1 (*) [16])0x140c8c20f;
          pdb_14151b4c0(lStack_100,uStack_f8,1,&pauStack_528);
        }
        else {
          pauStack_810 = (undefined1 (*) [16])0x140c8c22d;
          pdb_140c76020(lStack_100,uStack_f8,&pauStack_528);
        }
      }
      pauVar26 = pauStack_140;
      pauVar132 = pauStack_1a0;
      *(ulonglong *)pauStack_70[1] = uStack_f8;
      *(ulonglong *)*pauStack_70 = uStack_108;
      *(longlong *)(*pauStack_70 + 8) = lStack_100;
      pauVar33 = pauStack_b0;
      if (pauStack_1a0 != (undefined1 (*) [16])0x0) {
        if (lStack_190 != 0) {
          auVar3 = *pauStack_1a8;
          pauVar22 = pauStack_1a8 + 1;
          uVar134 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
          pauVar33 = pauStack_1a8;
          lVar126 = lStack_190;
          do {
            if ((short)uVar134 == 0) {
              do {
                auVar3 = *pauVar22;
                pauVar33 = pauVar33 + -0x18;
                pauVar22 = pauVar22 + 1;
                uVar134 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar134 == 0);
            }
            uVar121 = 0;
            for (uVar9 = uVar134; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar121 = uVar121 + 1;
            }
            uVar127 = *(ulonglong *)((longlong)pauVar33 + (ulonglong)uVar121 * -0x18 + -0x18);
            if (uVar127 != 0) {
              pauStack_810 = (undefined1 (*) [16])0x140c8bb27;
              pub_1406abac0(*(byte **)((longlong)pauVar33 + (ulonglong)uVar121 * -0x18 + -0x10),
                            uVar127,1);
            }
            uVar134 = uVar134 - 1 & uVar134;
            lVar126 = lVar126 + -1;
          } while (lVar126 != 0);
        }
        uVar127 = (longlong)pauVar132 * 0x18 + 0x27U & 0xfffffffffffffff0;
        uVar32 = (longlong)pauVar132[1] + uVar127 + 1;
        pauVar33 = pauStack_b0;
        if (uVar32 != 0) {
          pauStack_810 = (undefined1 (*) [16])0x140c8bd3c;
          pub_1406abac0((byte *)((longlong)pauStack_1a8 - uVar127),uVar32,0x10);
          pauVar33 = pauStack_b0;
        }
      }
    }
  }
joined_r0x000140c8bd46:
  if (pauVar33 != (undefined1 (*) [16])0x0) {
    pauStack_810 = (undefined1 (*) [16])0x140c8b96c;
    pub_1406abac0((byte *)pauVar26,(ulonglong)pauVar33,1);
  }
LAB_140c8b96c:
  if (uStack_128 != 0) {
    pauStack_810 = (undefined1 (*) [16])0x140c8b98a;
    pub_1406abac0(pbStack_120,uStack_128,1);
  }
  if (uStack_270 != 0) {
    pauStack_810 = (undefined1 (*) [16])0x140c8b9a8;
    pub_1406abac0(pbStack_268,uStack_270,1);
  }
  if (uStack_240 != 0) {
    pauStack_810 = (undefined1 (*) [16])0x140c8b9c6;
    pub_1406abac0(pbStack_238,uStack_240,1);
  }
  return pauStack_70;
}

