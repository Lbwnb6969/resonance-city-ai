// VA 0x140872d10, PDB extent 14181 bytes
// system_decorator::dormer_holes::upload_dormer_holes_to_gpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/dormer_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::dormer_holes::upload_dormer_holes_to_gpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/dormer_holes.rs
   Extent: 14181 */

void pdb_140872d10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong *puVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  code *pcVar19;
  code *pcVar20;
  undefined1 (*pauVar21) [16];
  longlong lVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  longlong lVar26;
  undefined8 uVar27;
  int iVar28;
  undefined1 uVar29;
  byte *pbVar30;
  int iVar31;
  undefined *puVar32;
  int iVar33;
  undefined *puVar34;
  code **unaff_R13;
  int iVar35;
  undefined *puVar36;
  bool bVar37;
  float fVar38;
  undefined8 extraout_XMM0_Qa;
  code *pcStack_318;
  code *pcStack_310;
  code **ppcStack_308;
  code *pcStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  longlong lStack_288;
  code *pcStack_278;
  code *pcStack_270;
  code **ppcStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 (*pauStack_228) [16];
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  int iStack_20c;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulonglong uStack_1d0;
  code *pcStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 uStack_1a1;
  longlong *plStack_1a0;
  byte *pbStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  code **ppcStack_130;
  byte bStack_122;
  char cStack_121;
  byte *pbStack_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  puVar24 = param_2;
  puStack_220 = param_1;
  uVar15 = pdb_140e94b40();
  pcVar20 = (code *)(ulonglong)uVar15;
  if ((byte)uVar15 == 0) {
LAB_140872f08:
    uStack_e1 = 0;
    uStack_e2 = 0;
    bStack_122 = (byte)uVar15;
    cVar14 = pdb_140e94b40();
    if (cVar14 == '\0') {
      lStack_1c0 = 0;
    }
    else {
      puVar32 = &UNK_14300e5a9;
      puVar36 = &UNK_14300e57d;
      do {
        bVar7 = puVar32[-1];
        uVar15 = (uint)(char)bVar7;
        if ((char)bVar7 < '\0') {
          bVar8 = puVar32[-2];
          if ((char)bVar8 < -0x40) {
            bVar9 = puVar32[-3];
            if ((char)bVar9 < -0x40) {
              pbVar30 = puVar32 + -4;
              puVar32 = puVar32 + -4;
              uVar15 = bVar9 & 0x3f | (*pbVar30 & 7) << 6;
            }
            else {
              puVar32 = puVar32 + -3;
              uVar15 = bVar9 & 0xf;
            }
            uVar15 = bVar8 & 0x3f | uVar15 << 6;
          }
          else {
            puVar32 = puVar32 + -2;
            uVar15 = bVar8 & 0x1f;
          }
          uVar15 = (uint)(bVar7 & 0x3f) | uVar15 << 6;
          if (uVar15 != 0x5c) goto LAB_140872fb4;
LAB_140872fcc:
          if ((undefined *)0x2c < puVar32 + -0x14300e57c) goto LAB_140874d77;
          lVar17 = 0x2c - (longlong)(puVar32 + -0x14300e57c);
          puVar36 = puVar32 + 1;
          goto LAB_140872fee;
        }
        puVar32 = puVar32 + -1;
        if (uVar15 == 0x5c) goto LAB_140872fcc;
LAB_140872fb4:
        if (uVar15 == 0x2f) goto LAB_140872fcc;
      } while (puVar32 != &UNK_14300e57d);
      lVar17 = 0x2c;
LAB_140872fee:
      uStack_e1 = 0;
      uStack_e2 = 0;
      pcVar20 = (code *)pdb_140e97000();
      if (pcVar20[0x68] != (code)0x1) {
        uStack_e1 = 0;
        uStack_e2 = 0;
        pcVar20 = (code *)pdb_142dde6e0(pcVar20,0);
        if (pcVar20 == (code *)0x0) {
          uStack_e1 = 0;
          uStack_e2 = 0;
          pdb_142dc7890(&UNK_14330e598);
          goto LAB_140874fff;
        }
      }
      if (*(longlong *)pcVar20 != 0) {
        uStack_e1 = 0;
        uStack_e2 = 0;
        pdb_142dc8090(&UNK_14330e608);
        goto LAB_140874fff;
      }
      *(longlong *)pcVar20 = -1;
      pcStack_118 = pcVar20;
      uStack_1b8 = (byte *)pdb_140e94f10(pcVar20 + 8,&UNK_14300e5a9,0xd,puVar36,lVar17,1,0);
      *(longlong *)pcStack_118 = *(longlong *)pcStack_118 + 1;
      lStack_1c0 = 1;
    }
    uStack_e4 = 0;
    pdb_140c17710(&pcStack_188);
    pdb_14007ee60();
    pcVar20 = (code *)pub_1406abab0(0x960,4);
    if (pcVar20 != (code *)0x0) {
      *(code **)(pcVar20 + 0x20) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x28) = uStack_160;
      *(code **)(pcVar20 + 0x10) = uStack_178;
      *(code ***)(pcVar20 + 0x18) = uStack_170;
      *(code **)pcVar20 = pcStack_188;
      *(code **)(pcVar20 + 8) = pcStack_180;
      *(code **)(pcVar20 + 0x50) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x58) = uStack_160;
      *(code **)(pcVar20 + 0x40) = uStack_178;
      *(code ***)(pcVar20 + 0x48) = uStack_170;
      *(code **)(pcVar20 + 0x30) = pcStack_188;
      *(code **)(pcVar20 + 0x38) = pcStack_180;
      *(code **)(pcVar20 + 0x80) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x88) = uStack_160;
      *(code **)(pcVar20 + 0x70) = uStack_178;
      *(code ***)(pcVar20 + 0x78) = uStack_170;
      *(code **)(pcVar20 + 0x60) = pcStack_188;
      *(code **)(pcVar20 + 0x68) = pcStack_180;
      *(code **)(pcVar20 + 0x90) = pcStack_188;
      *(code **)(pcVar20 + 0x98) = pcStack_180;
      *(code **)(pcVar20 + 0xa0) = uStack_178;
      *(code ***)(pcVar20 + 0xa8) = uStack_170;
      *(code **)(pcVar20 + 0xb0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0xb8) = uStack_160;
      *(code **)(pcVar20 + 0xd0) = uStack_178;
      *(code ***)(pcVar20 + 0xd8) = uStack_170;
      *(code **)(pcVar20 + 0xe0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0xe8) = uStack_160;
      *(code **)(pcVar20 + 0xc0) = pcStack_188;
      *(code **)(pcVar20 + 200) = pcStack_180;
      *(code **)(pcVar20 + 0xf0) = pcStack_188;
      *(code **)(pcVar20 + 0xf8) = pcStack_180;
      *(code **)(pcVar20 + 0x100) = uStack_178;
      *(code ***)(pcVar20 + 0x108) = uStack_170;
      *(code **)(pcVar20 + 0x110) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x118) = uStack_160;
      *(code **)(pcVar20 + 0x120) = pcStack_188;
      *(code **)(pcVar20 + 0x128) = pcStack_180;
      *(code **)(pcVar20 + 0x130) = uStack_178;
      *(code ***)(pcVar20 + 0x138) = uStack_170;
      *(code **)(pcVar20 + 0x140) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x148) = uStack_160;
      *(code **)(pcVar20 + 0x150) = pcStack_188;
      *(code **)(pcVar20 + 0x158) = pcStack_180;
      *(code **)(pcVar20 + 0x170) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x178) = uStack_160;
      *(code **)(pcVar20 + 0x160) = uStack_178;
      *(code ***)(pcVar20 + 0x168) = uStack_170;
      *(code **)(pcVar20 + 0x1a0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x1a8) = uStack_160;
      *(code **)(pcVar20 + 400) = uStack_178;
      *(code ***)(pcVar20 + 0x198) = uStack_170;
      *(code **)(pcVar20 + 0x180) = pcStack_188;
      *(code **)(pcVar20 + 0x188) = pcStack_180;
      *(code **)(pcVar20 + 0x1b0) = pcStack_188;
      *(code **)(pcVar20 + 0x1b8) = pcStack_180;
      *(code **)(pcVar20 + 0x1c0) = uStack_178;
      *(code ***)(pcVar20 + 0x1c8) = uStack_170;
      *(code **)(pcVar20 + 0x1d0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x1d8) = uStack_160;
      *(code **)(pcVar20 + 0x1e0) = pcStack_188;
      *(code **)(pcVar20 + 0x1e8) = pcStack_180;
      *(code **)(pcVar20 + 0x1f0) = uStack_178;
      *(code ***)(pcVar20 + 0x1f8) = uStack_170;
      *(code **)(pcVar20 + 0x200) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x208) = uStack_160;
      *(code **)(pcVar20 + 0x210) = pcStack_188;
      *(code **)(pcVar20 + 0x218) = pcStack_180;
      *(code **)(pcVar20 + 0x220) = uStack_178;
      *(code ***)(pcVar20 + 0x228) = uStack_170;
      *(code **)(pcVar20 + 0x230) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x238) = uStack_160;
      *(code **)(pcVar20 + 0x240) = pcStack_188;
      *(code **)(pcVar20 + 0x248) = pcStack_180;
      *(code **)(pcVar20 + 0x250) = uStack_178;
      *(code ***)(pcVar20 + 600) = uStack_170;
      *(code **)(pcVar20 + 0x260) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x268) = uStack_160;
      *(code **)(pcVar20 + 0x270) = pcStack_188;
      *(code **)(pcVar20 + 0x278) = pcStack_180;
      *(code **)(pcVar20 + 0x290) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x298) = uStack_160;
      *(code **)(pcVar20 + 0x280) = uStack_178;
      *(code ***)(pcVar20 + 0x288) = uStack_170;
      *(code **)(pcVar20 + 0x2c0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x2c8) = uStack_160;
      *(code **)(pcVar20 + 0x2b0) = uStack_178;
      *(code ***)(pcVar20 + 0x2b8) = uStack_170;
      *(code **)(pcVar20 + 0x2a0) = pcStack_188;
      *(code **)(pcVar20 + 0x2a8) = pcStack_180;
      *(code **)(pcVar20 + 0x2d0) = pcStack_188;
      *(code **)(pcVar20 + 0x2d8) = pcStack_180;
      *(code **)(pcVar20 + 0x2e0) = uStack_178;
      *(code ***)(pcVar20 + 0x2e8) = uStack_170;
      *(code **)(pcVar20 + 0x2f0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x2f8) = uStack_160;
      *(code **)(pcVar20 + 0x300) = pcStack_188;
      *(code **)(pcVar20 + 0x308) = pcStack_180;
      *(code **)(pcVar20 + 0x310) = uStack_178;
      *(code ***)(pcVar20 + 0x318) = uStack_170;
      *(code **)(pcVar20 + 800) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x328) = uStack_160;
      *(code **)(pcVar20 + 0x330) = pcStack_188;
      *(code **)(pcVar20 + 0x338) = pcStack_180;
      *(code **)(pcVar20 + 0x340) = uStack_178;
      *(code ***)(pcVar20 + 0x348) = uStack_170;
      *(code **)(pcVar20 + 0x350) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x358) = uStack_160;
      *(code **)(pcVar20 + 0x360) = pcStack_188;
      *(code **)(pcVar20 + 0x368) = pcStack_180;
      *(code **)(pcVar20 + 0x370) = uStack_178;
      *(code ***)(pcVar20 + 0x378) = uStack_170;
      *(code **)(pcVar20 + 0x380) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x388) = uStack_160;
      *(code **)(pcVar20 + 0x390) = pcStack_188;
      *(code **)(pcVar20 + 0x398) = pcStack_180;
      *(code **)(pcVar20 + 0x3b0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x3b8) = uStack_160;
      *(code **)(pcVar20 + 0x3a0) = uStack_178;
      *(code ***)(pcVar20 + 0x3a8) = uStack_170;
      *(code **)(pcVar20 + 0x3e0) = uStack_168;
      *(undefined8 *)(pcVar20 + 1000) = uStack_160;
      *(code **)(pcVar20 + 0x3d0) = uStack_178;
      *(code ***)(pcVar20 + 0x3d8) = uStack_170;
      *(code **)(pcVar20 + 0x3c0) = pcStack_188;
      *(code **)(pcVar20 + 0x3c8) = pcStack_180;
      *(code **)(pcVar20 + 0x3f0) = pcStack_188;
      *(code **)(pcVar20 + 0x3f8) = pcStack_180;
      *(code **)(pcVar20 + 0x400) = uStack_178;
      *(code ***)(pcVar20 + 0x408) = uStack_170;
      *(code **)(pcVar20 + 0x410) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x418) = uStack_160;
      *(code **)(pcVar20 + 0x420) = pcStack_188;
      *(code **)(pcVar20 + 0x428) = pcStack_180;
      *(code **)(pcVar20 + 0x430) = uStack_178;
      *(code ***)(pcVar20 + 0x438) = uStack_170;
      *(code **)(pcVar20 + 0x440) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x448) = uStack_160;
      *(code **)(pcVar20 + 0x450) = pcStack_188;
      *(code **)(pcVar20 + 0x458) = pcStack_180;
      *(code **)(pcVar20 + 0x460) = uStack_178;
      *(code ***)(pcVar20 + 0x468) = uStack_170;
      *(code **)(pcVar20 + 0x470) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x478) = uStack_160;
      *(code **)(pcVar20 + 0x480) = pcStack_188;
      *(code **)(pcVar20 + 0x488) = pcStack_180;
      *(code **)(pcVar20 + 0x490) = uStack_178;
      *(code ***)(pcVar20 + 0x498) = uStack_170;
      *(code **)(pcVar20 + 0x4a0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x4a8) = uStack_160;
      *(code **)(pcVar20 + 0x4b0) = pcStack_188;
      *(code **)(pcVar20 + 0x4b8) = pcStack_180;
      *(code **)(pcVar20 + 0x4d0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x4d8) = uStack_160;
      *(code **)(pcVar20 + 0x4c0) = uStack_178;
      *(code ***)(pcVar20 + 0x4c8) = uStack_170;
      *(code **)(pcVar20 + 0x500) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x508) = uStack_160;
      *(code **)(pcVar20 + 0x4f0) = uStack_178;
      *(code ***)(pcVar20 + 0x4f8) = uStack_170;
      *(code **)(pcVar20 + 0x4e0) = pcStack_188;
      *(code **)(pcVar20 + 0x4e8) = pcStack_180;
      *(code **)(pcVar20 + 0x510) = pcStack_188;
      *(code **)(pcVar20 + 0x518) = pcStack_180;
      *(code **)(pcVar20 + 0x520) = uStack_178;
      *(code ***)(pcVar20 + 0x528) = uStack_170;
      *(code **)(pcVar20 + 0x530) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x538) = uStack_160;
      *(code **)(pcVar20 + 0x540) = pcStack_188;
      *(code **)(pcVar20 + 0x548) = pcStack_180;
      *(code **)(pcVar20 + 0x550) = uStack_178;
      *(code ***)(pcVar20 + 0x558) = uStack_170;
      *(code **)(pcVar20 + 0x560) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x568) = uStack_160;
      *(code **)(pcVar20 + 0x570) = pcStack_188;
      *(code **)(pcVar20 + 0x578) = pcStack_180;
      *(code **)(pcVar20 + 0x580) = uStack_178;
      *(code ***)(pcVar20 + 0x588) = uStack_170;
      *(code **)(pcVar20 + 0x590) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x598) = uStack_160;
      *(code **)(pcVar20 + 0x5a0) = pcStack_188;
      *(code **)(pcVar20 + 0x5a8) = pcStack_180;
      *(code **)(pcVar20 + 0x5b0) = uStack_178;
      *(code ***)(pcVar20 + 0x5b8) = uStack_170;
      *(code **)(pcVar20 + 0x5c0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x5c8) = uStack_160;
      *(code **)(pcVar20 + 0x5d0) = pcStack_188;
      *(code **)(pcVar20 + 0x5d8) = pcStack_180;
      *(code **)(pcVar20 + 0x5f0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x5f8) = uStack_160;
      *(code **)(pcVar20 + 0x5e0) = uStack_178;
      *(code ***)(pcVar20 + 0x5e8) = uStack_170;
      *(code **)(pcVar20 + 0x620) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x628) = uStack_160;
      *(code **)(pcVar20 + 0x610) = uStack_178;
      *(code ***)(pcVar20 + 0x618) = uStack_170;
      *(code **)(pcVar20 + 0x600) = pcStack_188;
      *(code **)(pcVar20 + 0x608) = pcStack_180;
      *(code **)(pcVar20 + 0x630) = pcStack_188;
      *(code **)(pcVar20 + 0x638) = pcStack_180;
      *(code **)(pcVar20 + 0x640) = uStack_178;
      *(code ***)(pcVar20 + 0x648) = uStack_170;
      *(code **)(pcVar20 + 0x650) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x658) = uStack_160;
      *(code **)(pcVar20 + 0x660) = pcStack_188;
      *(code **)(pcVar20 + 0x668) = pcStack_180;
      *(code **)(pcVar20 + 0x670) = uStack_178;
      *(code ***)(pcVar20 + 0x678) = uStack_170;
      *(code **)(pcVar20 + 0x680) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x688) = uStack_160;
      *(code **)(pcVar20 + 0x690) = pcStack_188;
      *(code **)(pcVar20 + 0x698) = pcStack_180;
      *(code **)(pcVar20 + 0x6a0) = uStack_178;
      *(code ***)(pcVar20 + 0x6a8) = uStack_170;
      *(code **)(pcVar20 + 0x6b0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x6b8) = uStack_160;
      *(code **)(pcVar20 + 0x6c0) = pcStack_188;
      *(code **)(pcVar20 + 0x6c8) = pcStack_180;
      *(code **)(pcVar20 + 0x6d0) = uStack_178;
      *(code ***)(pcVar20 + 0x6d8) = uStack_170;
      *(code **)(pcVar20 + 0x6e0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x6e8) = uStack_160;
      *(code **)(pcVar20 + 0x6f0) = pcStack_188;
      *(code **)(pcVar20 + 0x6f8) = pcStack_180;
      *(code **)(pcVar20 + 0x710) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x718) = uStack_160;
      *(code **)(pcVar20 + 0x700) = uStack_178;
      *(code ***)(pcVar20 + 0x708) = uStack_170;
      *(code **)(pcVar20 + 0x740) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x748) = uStack_160;
      *(code **)(pcVar20 + 0x730) = uStack_178;
      *(code ***)(pcVar20 + 0x738) = uStack_170;
      *(code **)(pcVar20 + 0x720) = pcStack_188;
      *(code **)(pcVar20 + 0x728) = pcStack_180;
      *(code **)(pcVar20 + 0x750) = pcStack_188;
      *(code **)(pcVar20 + 0x758) = pcStack_180;
      *(code **)(pcVar20 + 0x760) = uStack_178;
      *(code ***)(pcVar20 + 0x768) = uStack_170;
      *(code **)(pcVar20 + 0x770) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x778) = uStack_160;
      *(code **)(pcVar20 + 0x780) = pcStack_188;
      *(code **)(pcVar20 + 0x788) = pcStack_180;
      *(code **)(pcVar20 + 0x790) = uStack_178;
      *(code ***)(pcVar20 + 0x798) = uStack_170;
      *(code **)(pcVar20 + 0x7a0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x7a8) = uStack_160;
      *(code **)(pcVar20 + 0x7b0) = pcStack_188;
      *(code **)(pcVar20 + 0x7b8) = pcStack_180;
      *(code **)(pcVar20 + 0x7c0) = uStack_178;
      *(code ***)(pcVar20 + 0x7c8) = uStack_170;
      *(code **)(pcVar20 + 2000) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x7d8) = uStack_160;
      *(code **)(pcVar20 + 0x7e0) = pcStack_188;
      *(code **)(pcVar20 + 0x7e8) = pcStack_180;
      *(code **)(pcVar20 + 0x7f0) = uStack_178;
      *(code ***)(pcVar20 + 0x7f8) = uStack_170;
      *(code **)(pcVar20 + 0x800) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x808) = uStack_160;
      *(code **)(pcVar20 + 0x810) = pcStack_188;
      *(code **)(pcVar20 + 0x818) = pcStack_180;
      *(code **)(pcVar20 + 0x830) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x838) = uStack_160;
      *(code **)(pcVar20 + 0x820) = uStack_178;
      *(code ***)(pcVar20 + 0x828) = uStack_170;
      *(code **)(pcVar20 + 0x860) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x868) = uStack_160;
      *(code **)(pcVar20 + 0x850) = uStack_178;
      *(code ***)(pcVar20 + 0x858) = uStack_170;
      *(code **)(pcVar20 + 0x840) = pcStack_188;
      *(code **)(pcVar20 + 0x848) = pcStack_180;
      *(code **)(pcVar20 + 0x870) = pcStack_188;
      *(code **)(pcVar20 + 0x878) = pcStack_180;
      *(code **)(pcVar20 + 0x880) = uStack_178;
      *(code ***)(pcVar20 + 0x888) = uStack_170;
      *(code **)(pcVar20 + 0x890) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x898) = uStack_160;
      *(code **)(pcVar20 + 0x8a0) = pcStack_188;
      *(code **)(pcVar20 + 0x8a8) = pcStack_180;
      *(code **)(pcVar20 + 0x8b0) = uStack_178;
      *(code ***)(pcVar20 + 0x8b8) = uStack_170;
      *(code **)(pcVar20 + 0x8c0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x8c8) = uStack_160;
      *(code **)(pcVar20 + 0x8d0) = pcStack_188;
      *(code **)(pcVar20 + 0x8d8) = pcStack_180;
      *(code **)(pcVar20 + 0x8e0) = uStack_178;
      *(code ***)(pcVar20 + 0x8e8) = uStack_170;
      *(code **)(pcVar20 + 0x8f0) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x8f8) = uStack_160;
      *(code **)(pcVar20 + 0x900) = pcStack_188;
      *(code **)(pcVar20 + 0x908) = pcStack_180;
      *(code **)(pcVar20 + 0x910) = uStack_178;
      *(code ***)(pcVar20 + 0x918) = uStack_170;
      *(code **)(pcVar20 + 0x920) = uStack_168;
      *(undefined8 *)(pcVar20 + 0x928) = uStack_160;
      *(code **)(pcVar20 + 0x930) = pcStack_188;
      *(code **)(pcVar20 + 0x938) = pcStack_180;
      *(undefined4 *)(pcVar20 + 0x950) = (undefined4)uStack_168;
      *(undefined4 *)(pcVar20 + 0x954) = uStack_168._4_4_;
      *(undefined4 *)(pcVar20 + 0x958) = (undefined4)uStack_160;
      *(undefined4 *)(pcVar20 + 0x95c) = uStack_160._4_4_;
      *(undefined4 *)(pcVar20 + 0x940) = (undefined4)uStack_178;
      *(undefined4 *)(pcVar20 + 0x944) = uStack_178._4_4_;
      *(undefined4 *)(pcVar20 + 0x948) = (undefined4)uStack_170;
      *(undefined4 *)(pcVar20 + 0x94c) = uStack_170._4_4_;
      pcStack_278 = (code *)0x32;
      ppcStack_268 = (code **)0x32;
      uStack_e4 = 0;
      unaff_R13 = &pcStack_278;
      pcStack_270 = pcVar20;
      pdb_141495430(&pcStack_188,unaff_R13,0xe1);
      pcVar20 = pcStack_180;
      pcStack_f8 = pcStack_188;
      pcStack_f0 = uStack_178;
      pdb_14007ee60();
      pbVar30 = pub_1406abae0(900,4);
      if (pbVar30 == (byte *)0x0) {
        uStack_e4 = 1;
        pdb_142dc7e2a(4,900);
      }
      else {
        pcStack_190 = pcVar20;
        pbStack_198 = pbVar30;
        if (lStack_1c0 == 0) goto LAB_1408739e0;
        pcStack_100 = pcStack_f0;
        pcStack_108 = pcVar20;
        pcStack_110 = pcStack_f8;
        uStack_e1 = 1;
        uStack_e2 = 1;
        pbStack_120 = pbVar30;
        pcVar19 = (code *)pdb_140e97000();
        uVar27 = extraout_XMM0_Qa;
        if (pcVar19[0x68] != (code)0x1) goto LAB_140874806;
        do {
          if (*(longlong *)pcVar19 != 0) {
            pcStack_100 = pcStack_f0;
            pcStack_110 = pcStack_f8;
            uStack_e1 = 1;
            uStack_e2 = 1;
            pbStack_120 = pbVar30;
            pcStack_108 = pcVar20;
            pdb_142dc8090(&UNK_14330e608);
            goto LAB_140874fff;
          }
          *(longlong *)pcVar19 = -1;
          pcStack_118 = pcVar19;
          pdb_140e95370(pcVar19 + 8,uStack_1b8);
          *(longlong *)pcStack_118 = *(longlong *)pcStack_118 + 1;
LAB_1408739e0:
          pcVar20 = pcStack_190;
          pbVar30 = pbStack_198;
          pcStack_100 = pcStack_f0;
          pcStack_110 = pcStack_f8;
          uStack_e1 = 1;
          uStack_e2 = 1;
          pbStack_120 = pbStack_198;
          pcStack_108 = pcStack_190;
          cStack_121 = pdb_140e94b40();
          if (cStack_121 != '\0') {
            puVar36 = &UNK_14300e5a9;
            puVar32 = &UNK_14300e57d;
            do {
              bVar7 = puVar36[-1];
              uVar15 = (uint)(char)bVar7;
              pbStack_120 = pbVar30;
              pcStack_108 = pcVar20;
              if ((char)bVar7 < '\0') {
                bVar8 = puVar36[-2];
                if ((char)bVar8 < -0x40) {
                  bVar9 = puVar36[-3];
                  if ((char)bVar9 < -0x40) {
                    pbVar1 = puVar36 + -4;
                    puVar36 = puVar36 + -4;
                    uVar15 = bVar9 & 0x3f | (*pbVar1 & 7) << 6;
                  }
                  else {
                    puVar36 = puVar36 + -3;
                    uVar15 = bVar9 & 0xf;
                  }
                  uVar15 = bVar8 & 0x3f | uVar15 << 6;
                }
                else {
                  puVar36 = puVar36 + -2;
                  uVar15 = bVar8 & 0x1f;
                }
                uVar15 = (uint)(bVar7 & 0x3f) | uVar15 << 6;
                if (uVar15 != 0x5c) goto LAB_140873ab4;
LAB_140873ac5:
                puVar32 = puVar36 + -0x14300e57c;
                if ((undefined *)0x2c < puVar32) {
                  pcStack_100 = pcStack_f0;
                  pcStack_110 = pcStack_f8;
                  uStack_e1 = 1;
                  uStack_e2 = 1;
                  pdb_142dc8070(&UNK_14300e57d,0x2c,puVar32,0x2c,&UNK_14300e818);
                  goto LAB_140874fff;
                }
                lVar17 = 0x2c - (longlong)puVar32;
                puVar32 = puVar36 + 1;
                goto LAB_140873ae7;
              }
              puVar36 = puVar36 + -1;
              if (uVar15 == 0x5c) goto LAB_140873ac5;
LAB_140873ab4:
              if (uVar15 == 0x2f) goto LAB_140873ac5;
            } while (puVar36 != &UNK_14300e57d);
            lVar17 = 0x2c;
LAB_140873ae7:
            pcStack_100 = pcStack_f0;
            pcStack_110 = pcStack_f8;
            uStack_e1 = 1;
            uStack_e2 = 1;
            pcVar19 = (code *)pdb_140e97000();
            if (pcVar19[0x68] != (code)0x1) {
              pcStack_100 = pcStack_f0;
              pcStack_110 = pcStack_f8;
              uStack_e1 = 1;
              uStack_e2 = 1;
              pbStack_120 = pbVar30;
              pcStack_108 = pcVar20;
              pcVar19 = (code *)pdb_142dde6e0(pcVar19,0);
              if (pcVar19 == (code *)0x0) {
                pcStack_100 = pcStack_f0;
                pcStack_110 = pcStack_f8;
                uStack_e1 = 1;
                uStack_e2 = 1;
                pbStack_120 = pbVar30;
                pcStack_108 = pcVar20;
                pdb_142dc7890(&UNK_14330e598);
                goto LAB_140874fff;
              }
            }
            if (*(longlong *)pcVar19 != 0) {
              pcStack_100 = pcStack_f0;
              pcStack_110 = pcStack_f8;
              uStack_e1 = 1;
              uStack_e2 = 1;
              pbStack_120 = pbVar30;
              pcStack_108 = pcVar20;
              pdb_142dc8090(&UNK_14330e608);
              goto LAB_140874fff;
            }
            *(longlong *)pcVar19 = -1;
            pcStack_118 = pcVar19;
            uStack_218 = pdb_140e94f10(pcVar19 + 8,&UNK_14300e5b6,0xf,puVar32,lVar17,1,0);
            *(longlong *)pcStack_118 = *(longlong *)pcStack_118 + 1;
            pbVar30 = pbStack_198;
            pcVar20 = pcStack_190;
          }
          fVar12 = _DAT_14300e4c0;
          fVar11 = _DAT_14300e4bc;
          fVar10 = _DAT_142e382cc;
          pauStack_1e8 = *(undefined1 (**) [16])*param_3;
          lStack_288 = ((undefined8 *)*param_3)[3];
          auVar6 = *pauStack_1e8;
          uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar6[0xf] >> 7) << 0xf);
          pauVar21 = pauStack_1e8 + 1;
          while (bVar37 = lStack_288 != 0, lStack_288 = lStack_288 + -1, bVar37) {
            pauStack_228 = pauVar21;
            if ((short)uVar15 == 0) {
              do {
                auVar6 = *pauVar21;
                pauStack_1e8 = pauStack_1e8 + -0x10;
                pauVar21 = pauVar21 + 1;
                uVar15 = (ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) ^ 0xffff;
                pauStack_228 = pauVar21;
              } while (uVar15 == 0);
            }
            iVar35 = 0;
            for (uVar16 = uVar15; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              iVar35 = iVar35 + 1;
            }
            uVar15 = uVar15 - 1 & uVar15;
            lVar17 = *(longlong *)((longlong)pauStack_1e8 + (-8 - (ulonglong)(uint)(iVar35 << 4)));
            param_3 = *(undefined8 **)(lVar17 + 0x110);
            puVar24 = param_3 + *(longlong *)(lVar17 + 0x118) * 6;
            while (pauVar21 = pauStack_228, pcVar20 = pcStack_190, param_3 != puVar24) {
              uVar2 = *(undefined4 *)param_3;
              plStack_1a0 = (longlong *)
                            CONCAT44(plStack_1a0._4_4_,*(undefined4 *)((longlong)param_3 + 4));
              uVar3 = *(undefined4 *)(param_3 + 1);
              uStack_1f8 = *(undefined4 *)((longlong)param_3 + 0xc);
              uVar4 = *(undefined4 *)(param_3 + 2);
              uStack_1f0 = *(undefined4 *)((longlong)param_3 + 0x14);
              uVar5 = *(undefined4 *)(param_3 + 3);
              uStack_210 = *(undefined4 *)((longlong)param_3 + 0x1c);
              lVar17 = param_3[4];
              uVar27 = param_3[5];
              uStack_1b8 = (byte *)CONCAT44(uVar3,uVar2);
              lStack_1c0 = lVar17;
              uStack_1b0 = uVar4;
              uStack_1ac = uVar5;
              pdb_140df3450(&uStack_1d8,&lStack_1c0);
              fVar38 = (float)pub_142e32a40(((float)uStack_1d8 + fVar11) / fVar12);
              iVar35 = (int)fVar38;
              if (fVar10 < fVar38) {
                iVar35 = 0x7fffffff;
              }
              if (NAN(fVar38)) {
                iVar35 = 0;
              }
              fVar38 = (float)pub_142e32a40();
              iVar31 = (int)fVar38;
              if (fVar10 < fVar38) {
                iVar31 = 0x7fffffff;
              }
              if (NAN(fVar38)) {
                iVar31 = 0;
              }
              if (iVar35 < 1) {
                iVar35 = 0;
              }
              if (iVar31 < 1) {
                iVar31 = 0;
              }
              fVar38 = (float)pub_142e32a40(((float)uStack_1d0 + fVar11) / fVar12);
              iVar33 = (int)fVar38;
              if (fVar10 < fVar38) {
                iVar33 = 0x7fffffff;
              }
              if (NAN(fVar38)) {
                iVar33 = 0;
              }
              fVar38 = (float)pub_142e32a40();
              iVar28 = (int)fVar38;
              if (fVar10 < fVar38) {
                iVar28 = 0x7fffffff;
              }
              if (NAN(fVar38)) {
                iVar28 = 0;
              }
              if (0xd < iVar33) {
                iVar33 = 0xe;
              }
              if (0xd < iVar28) {
                iVar28 = 0xe;
              }
              pcStack_188 = (code *)0x0;
              pcStack_180 = (code *)0x8;
              uStack_178 = (code *)0x0;
              if (iVar28 < iVar31) {
                pcVar20 = (code *)0x0;
                pcStack_118 = (code *)0x0;
              }
              else {
                pcVar20 = (code *)0x0;
                pcStack_1c8 = (code *)CONCAT44(pcStack_1c8._4_4_,iVar35);
                iStack_20c = iVar28;
                do {
                  pcStack_118 = (code *)CONCAT71(pcStack_118._1_7_,iVar31 < iStack_20c);
                  if (iVar35 <= iVar33) {
                    pcVar19 = pcVar20;
                    do {
                      if (pcVar19 == pcStack_188) {
                        pdb_142d896b0(&pcStack_188);
                      }
                      pcVar20 = pcVar19 + 1;
                      *(ulonglong *)(pcStack_180 + (longlong)pcVar19 * 8) =
                           (ulonglong)(uint)(iVar35 + iVar31 * 0xf);
                      uStack_178 = pcVar20;
                    } while ((iVar35 < iVar33) &&
                            (iVar35 = iVar35 + (uint)(iVar35 < iVar33), pcVar19 = pcVar20,
                            iVar35 <= iVar33));
                  }
                  if (iStack_20c <= iVar31) break;
                  iVar31 = iVar31 + (uint)(byte)pcStack_118;
                  iVar35 = (int)pcStack_1c8;
                } while (iVar31 <= iStack_20c);
                pcStack_118 = pcStack_188;
                unaff_R13 = &pcStack_278;
              }
              puVar13 = _DAT_143ca8e90;
              param_3 = param_3 + 6;
              pcVar20 = pcStack_180 + (longlong)pcVar20 * 8;
              pbVar30 = pbStack_198;
              pcVar19 = pcStack_180;
              pcStack_1c8 = pcStack_180;
              pcStack_188 = pcStack_118;
joined_r0x000140873f46:
              pbStack_198 = pbVar30;
              if (pcVar19 != pcVar20) {
                do {
                  pcStack_208 = *(code **)pcVar19;
                  if ((code *)0xe0 < pcStack_208) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(pcStack_208,0xe1,&UNK_14300e608);
                  }
                  uVar16 = *(int *)(pbVar30 + (longlong)pcStack_208 * 4) + 1;
                  if (uVar16 < 0x32) {
                    *(uint *)(pbVar30 + (longlong)pcStack_208 * 4) = uVar16;
                    if (pcStack_f0 <= pcStack_208) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(pcStack_208,pcStack_f0,&UNK_14300e6a0);
                    }
                    uVar18 = (ulonglong)uVar16 - 1;
                    if (*(ulonglong *)(pcStack_190 + (longlong)pcStack_208 * 0x18 + 0x10) <= uVar18)
                    {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc81f2(uVar18,*(ulonglong *)
                                            (pcStack_190 + (longlong)pcStack_208 * 0x18 + 0x10),
                                    &UNK_14300e6b8);
                    }
                    lVar26 = *(longlong *)(pcStack_190 + (longlong)pcStack_208 * 0x18 + 8);
                    lVar22 = uVar18 * 0x30;
                    *(undefined4 *)(lVar26 + lVar22) = uVar2;
                    *(undefined4 *)(lVar26 + 4 + lVar22) = plStack_1a0._0_4_;
                    *(undefined4 *)(lVar26 + 8 + lVar22) = uVar3;
                    *(undefined4 *)(lVar26 + 0xc + lVar22) = uStack_1f8;
                    *(undefined4 *)(lVar26 + 0x10 + lVar22) = uVar4;
                    *(undefined4 *)(lVar26 + 0x14 + lVar22) = uStack_1f0;
                    *(undefined4 *)(lVar26 + 0x18 + lVar22) = uVar5;
                    *(undefined4 *)(lVar26 + 0x1c + lVar22) = uStack_210;
                    *(longlong *)(lVar26 + 0x20 + lVar22) = lVar17;
                    *(undefined8 *)(lVar26 + 0x28 + lVar22) = uVar27;
                  }
                  else if (1 < *puVar13) goto code_r0x00014087401d;
                  pcVar19 = pcVar19 + 8;
                  if (pcVar19 == pcVar20) break;
                } while( true );
              }
              if (pcStack_118 != (code *)0x0) {
                pub_1406abac0((byte *)pcStack_1c8,(longlong)pcStack_118 << 3,8);
              }
            }
          }
          if (cStack_121 != '\0') {
            pcStack_100 = pcStack_f0;
            pcStack_110 = pcStack_f8;
            uStack_e1 = 1;
            uStack_e2 = 1;
            pbStack_120 = pbVar30;
            pcStack_108 = pcVar20;
            pcVar19 = (code *)pdb_140e97000();
            uVar27 = uStack_218;
            if (pcVar19[0x68] != (code)0x1) {
              pcStack_100 = pcStack_f0;
              pcStack_110 = pcStack_f8;
              uStack_e1 = 1;
              uStack_e2 = 1;
              pbStack_120 = pbVar30;
              pcStack_108 = pcVar20;
              pcVar19 = (code *)pdb_142dde6e0(pcVar19,0);
              if (pcVar19 == (code *)0x0) {
                pcStack_100 = pcStack_f0;
                pcStack_110 = pcStack_f8;
                uStack_e1 = 1;
                uStack_e2 = 1;
                pbStack_120 = pbVar30;
                pcStack_108 = pcVar20;
                pdb_142dc7890(&UNK_14330e598,uVar27);
                goto LAB_140874fff;
              }
            }
            if (*(longlong *)pcVar19 != 0) {
              pcStack_100 = pcStack_f0;
              pcStack_110 = pcStack_f8;
              uStack_e1 = 1;
              uStack_e2 = 1;
              pbStack_120 = pbVar30;
              pcStack_108 = pcVar20;
              pdb_142dc8090(&UNK_14330e608);
              goto LAB_140874fff;
            }
            *(longlong *)pcVar19 = -1;
            pcStack_118 = pcVar19;
            pdb_140e95370(pcVar19 + 8);
            *(longlong *)pcStack_118 = *(longlong *)pcStack_118 + 1;
            pbVar30 = pbStack_198;
            pcVar20 = pcStack_190;
          }
          pcStack_100 = pcStack_f0;
          pcStack_110 = pcStack_f8;
          uStack_e1 = 1;
          uStack_e2 = 1;
          pbStack_120 = pbVar30;
          pcStack_108 = pcVar20;
          cVar14 = pdb_140e94b40();
          pcStack_118 = (code *)CONCAT71(pcStack_118._1_7_,cVar14);
          if (cVar14 == '\0') {
            pcStack_208 = (code *)0x0;
          }
          else {
            puVar36 = &UNK_14300e5a9;
            puVar32 = &UNK_14300e57d;
            do {
              bVar7 = puVar36[-1];
              uVar15 = (uint)(char)bVar7;
              if ((char)bVar7 < '\0') {
                bVar8 = puVar36[-2];
                if ((char)bVar8 < -0x40) {
                  bVar9 = puVar36[-3];
                  if ((char)bVar9 < -0x40) {
                    pbVar1 = puVar36 + -4;
                    puVar36 = puVar36 + -4;
                    uVar15 = bVar9 & 0x3f | (*pbVar1 & 7) << 6;
                  }
                  else {
                    puVar36 = puVar36 + -3;
                    uVar15 = bVar9 & 0xf;
                  }
                  uVar15 = bVar8 & 0x3f | uVar15 << 6;
                }
                else {
                  puVar36 = puVar36 + -2;
                  uVar15 = bVar8 & 0x1f;
                }
                uVar15 = (uint)(bVar7 & 0x3f) | uVar15 << 6;
                if (uVar15 != 0x5c) goto LAB_140874294;
LAB_1408742ac:
                puVar32 = puVar36 + -0x14300e57c;
                if ((undefined *)0x2c < puVar32) {
                  pcStack_100 = pcStack_f0;
                  pcStack_110 = pcStack_f8;
                  uStack_e1 = 1;
                  uStack_e2 = 1;
                  pbStack_120 = pbVar30;
                  pcStack_108 = pcVar20;
                  pdb_142dc8070(&UNK_14300e57d,0x2c,puVar32,0x2c,&UNK_14300e818);
                  goto LAB_140874fff;
                }
                lVar17 = 0x2c - (longlong)puVar32;
                puVar32 = puVar36 + 1;
                goto LAB_1408742ce;
              }
              puVar36 = puVar36 + -1;
              if (uVar15 == 0x5c) goto LAB_1408742ac;
LAB_140874294:
              if (uVar15 == 0x2f) goto LAB_1408742ac;
            } while (puVar36 != &UNK_14300e57d);
            lVar17 = 0x2c;
LAB_1408742ce:
            pcStack_100 = pcStack_f0;
            pcStack_110 = pcStack_f8;
            uStack_e1 = 1;
            uStack_e2 = 1;
            pbStack_120 = pbVar30;
            pcStack_108 = pcVar20;
            plVar23 = (longlong *)pdb_140e97000();
            if ((char)plVar23[0xd] != '\x01') {
              pcStack_100 = pcStack_f0;
              pcStack_110 = pcStack_f8;
              uStack_e1 = 1;
              uStack_e2 = 1;
              pbStack_120 = pbVar30;
              pcStack_108 = pcVar20;
              plVar23 = (longlong *)pdb_142dde6e0(plVar23,0);
              if (plVar23 == (longlong *)0x0) {
                pcStack_100 = pcStack_f0;
                pcStack_110 = pcStack_f8;
                uStack_e1 = 1;
                uStack_e2 = 1;
                pbStack_120 = pbVar30;
                pcStack_108 = pcVar20;
                pdb_142dc7890(&UNK_14330e598);
                goto LAB_140874fff;
              }
            }
            if (*plVar23 != 0) {
              pcStack_100 = pcStack_f0;
              pcStack_110 = pcStack_f8;
              uStack_e1 = 1;
              uStack_e2 = 1;
              pbStack_120 = pbVar30;
              pcStack_108 = pcVar20;
              pdb_142dc8090(&UNK_14330e608);
              goto LAB_140874fff;
            }
            *plVar23 = -1;
            plStack_1a0 = plVar23;
            uStack_200 = pdb_140e94f10(plVar23 + 1,&UNK_14300e5c5,0xc,puVar32,lVar17,1,0);
            *plStack_1a0 = *plStack_1a0 + 1;
            pcStack_208 = (code *)0x1;
          }
          uVar27 = *param_2;
          uStack_e3 = 1;
          puVar24 = (undefined8 *)pdb_14149ba00(uVar27,&UNK_14330e778);
          if (puVar24 != (undefined8 *)0x0) {
            uStack_e3 = 1;
            lVar17 = (**(code **)(puVar24[1] + 0x18))(*puVar24);
            if (lVar17 != 0) {
              uStack_e3 = 1;
              uVar25 = pdb_140a92040(*puStack_220);
              uStack_e3 = 1;
              lVar26 = pdb_140e17350(lVar17);
              if (*(uint *)(lVar26 + 0x10) < 900) {
                pcStack_188 = (code *)0xb;
LAB_140874e4f:
                pcStack_180 = pcStack_318;
                uStack_178 = pcStack_310;
                uStack_170 = ppcStack_308;
                uStack_168 = pcStack_300;
                uStack_160 = uStack_2f8;
                uStack_158 = uStack_2f0;
                puStack_150 = puStack_2e8;
                uStack_148 = uStack_2e0;
                uStack_140 = uStack_2d8;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_14300e750,0x2b,&pcStack_188,&UNK_14300e730,&UNK_14300e5d8);
              }
              pcStack_278 = (code *)0x0;
              pcStack_270 = (code *)0x384;
              uStack_e3 = 1;
              pdb_140e55470(&pcStack_188,uVar25,lVar17,pbStack_198,900,unaff_R13,1,0);
              if (pcStack_188 != (code *)0xb) {
                uStack_2d8 = uStack_140;
                puStack_2e8 = puStack_150;
                uStack_2e0 = uStack_148;
                uStack_2f8 = uStack_160;
                uStack_2f0 = uStack_158;
                ppcStack_308 = uStack_170;
                pcStack_300 = uStack_168;
                pcStack_318 = pcStack_180;
                pcStack_310 = uStack_178;
                goto LAB_140874e4f;
              }
              *(undefined8 *)(lVar17 + 8) = 0xe1;
            }
          }
          uStack_e3 = 1;
          puVar24 = (undefined8 *)pdb_14149ba00(uVar27,&UNK_14330e768);
          uVar18 = CONCAT71((int7)((ulonglong)pbVar30 >> 8),1);
          if (puVar24 != (undefined8 *)0x0) {
            uStack_e3 = 1;
            lVar17 = (**(code **)(puVar24[1] + 0x18))(*puVar24);
            if (lVar17 != 0) {
              uStack_170 = (code **)(pcStack_190 + (longlong)pcStack_f0 * 0x18);
              pcStack_188 = pcStack_190;
              pcStack_180 = pcStack_190;
              uStack_178 = pcStack_f8;
              uStack_168 = (code *)0x0;
              uStack_148 = 0;
              uStack_e3 = 0;
              pdb_14149a880(&lStack_1c0,&pcStack_188);
              uVar27 = pdb_140a92040(*puStack_220);
              pbVar30 = uStack_1b8;
              param_3 = (undefined8 *)CONCAT44(uStack_1ac,uStack_1b0);
              if (param_3 != (undefined8 *)0x0) {
                lVar26 = pdb_140e17350(lVar17);
                uVar18 = (longlong)param_3 * 0x30;
                if (*(uint *)(lVar26 + 0x10) < uVar18) goto LAB_140874f41;
                uStack_1d8 = 0;
                uStack_1d0 = uVar18;
                pdb_140e55470(&pcStack_188,uVar27,lVar17,pbVar30,uVar18,&uStack_1d8,1,0);
                if (pcStack_188 != (code *)0xb) {
                  uStack_238 = uStack_140;
                  puStack_248 = puStack_150;
                  uStack_240 = uStack_148;
                  uStack_258 = uStack_160;
                  uStack_250 = uStack_158;
                  ppcStack_268 = uStack_170;
                  pcStack_260 = uStack_168;
                  pcStack_278 = pcStack_180;
                  pcStack_270 = uStack_178;
                  goto LAB_140874f8a;
                }
              }
              *(undefined8 **)(lVar17 + 8) = param_3;
              if (lStack_1c0 != 0) {
                pub_1406abac0(pbVar30,lStack_1c0 * 0x30,4);
              }
              uVar18 = 0;
            }
          }
          pcVar20 = pcStack_190;
          pbVar30 = pbStack_198;
          if ((byte)pcStack_118 != '\0') {
            pbStack_120 = pbStack_198;
            pcStack_100 = pcStack_f0;
            pcStack_108 = pcStack_190;
            pcStack_110 = pcStack_f8;
            uVar29 = (undefined1)uVar18;
            uStack_e2 = 1;
            uStack_e1 = uVar29;
            plVar23 = (longlong *)pdb_140e97000();
            if ((char)plVar23[0xd] != '\x01') {
              pbStack_120 = pbVar30;
              pcStack_100 = pcStack_f0;
              pcStack_108 = pcVar20;
              pcStack_110 = pcStack_f8;
              uStack_e2 = 1;
              uStack_e1 = uVar29;
              plVar23 = (longlong *)pdb_142dde6e0(plVar23,0);
              if (plVar23 == (longlong *)0x0) {
                pbStack_120 = pbVar30;
                pcStack_100 = pcStack_f0;
                pcStack_108 = pcVar20;
                pcStack_110 = pcStack_f8;
                uStack_e2 = 1;
                uStack_e1 = uVar29;
                pdb_142dc7890(&UNK_14330e598);
                goto LAB_140874fff;
              }
            }
            if (*plVar23 != 0) {
              pbStack_120 = pbVar30;
              pcStack_100 = pcStack_f0;
              pcStack_108 = pcVar20;
              pcStack_110 = pcStack_f8;
              uStack_e2 = 1;
              uStack_e1 = uVar29;
              pdb_142dc8090(&UNK_14330e608);
              goto LAB_140874fff;
            }
            pcStack_118 = (code *)CONCAT44(pcStack_118._4_4_,(int)uVar18);
            *plVar23 = -1;
            plStack_1a0 = plVar23;
            pdb_140e95370(plVar23 + 1,uStack_200);
            *plStack_1a0 = *plStack_1a0 + 1;
            uVar18 = (ulonglong)pcStack_118 & 0xffffffff;
          }
          pub_1406abac0(pbStack_198,900,4);
          bVar7 = bStack_122;
          pcVar20 = pcStack_190;
          pbVar30 = (byte *)(ulonglong)bStack_122;
          if ((char)uVar18 != '\0') {
            if (pcStack_f0 != (code *)0x0) {
              pcVar19 = pcStack_190 + 8;
              do {
                if (*(longlong *)(pcVar19 + -8) != 0) {
                  pub_1406abac0(*(byte **)pcVar19,*(longlong *)(pcVar19 + -8) * 0x30,4);
                }
                pcVar19 = pcVar19 + 0x18;
                pcStack_f0 = pcStack_f0 + -1;
              } while (pcStack_f0 != (code *)0x0);
            }
            if (pcStack_f8 != (code *)0x0) {
              pub_1406abac0((byte *)pcVar20,(longlong)pcStack_f8 * 0x18,8);
            }
          }
          if (bVar7 == 0) {
            return;
          }
          plVar23 = (longlong *)pdb_140e97000();
          if (((char)plVar23[0xd] != '\x01') &&
             (plVar23 = (longlong *)pdb_142dde6e0(plVar23,0), plVar23 == (longlong *)0x0))
          goto LAB_140874cf6;
          if (*plVar23 == 0) {
            *plVar23 = -1;
            pcStack_118 = (code *)plVar23;
            pdb_140e95370(plVar23 + 1);
            *(longlong *)pcStack_118 = *(longlong *)pcStack_118 + 1;
            return;
          }
LAB_1408747fa:
          uVar27 = pdb_142dc8090(&UNK_14330e608);
LAB_140874806:
          pcStack_100 = pcStack_f0;
          pcStack_110 = pcStack_f8;
          uStack_e1 = 1;
          uStack_e2 = 1;
          pbStack_120 = pbVar30;
          pcStack_108 = pcVar20;
          pcVar19 = (code *)pdb_142dde6e0(uVar27,0);
        } while (pcVar19 != (code *)0x0);
        pcStack_100 = pcStack_f0;
        pcStack_110 = pcStack_f8;
        uStack_e1 = 1;
        uStack_e2 = 1;
        pbStack_120 = pbVar30;
        pcStack_108 = pcVar20;
        pdb_142dc7890(&UNK_14330e598);
      }
      goto LAB_140874fff;
    }
  }
  else {
    pbVar30 = (byte *)0x3a;
    lVar17 = pdb_140876530(0x3a);
    puVar36 = &UNK_14300e77b;
    if (lVar17 == 1) {
      if ((undefined8 *)0x3a < puVar24) {
        pdb_142dc8070(&UNK_14300e77b,0x3a,0,puVar24,&UNK_14300e838);
LAB_140874f41:
        pcStack_188 = (code *)0xb;
LAB_140874f8a:
        uStack_140 = uStack_238;
        puStack_150 = puStack_248;
        uStack_148 = uStack_240;
        uStack_160 = uStack_258;
        uStack_158 = uStack_250;
        uStack_170 = ppcStack_268;
        uStack_168 = pcStack_260;
        pcStack_180 = pcStack_278;
        uStack_178 = pcStack_270;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14300e750,0x2b,&pcStack_188,&UNK_14300e730,&UNK_14300e5f0);
      }
      uVar18 = pdb_140876530(puVar24);
      if ((uVar18 & 1) != 0) {
        if (0x3a < (longlong)puVar24 + 2U) {
          pdb_142dc8070(&UNK_14300e77b,0x3a,(longlong)puVar24 + 2U,0x3a,&UNK_14300e850);
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        pbVar30 = (byte *)(0x38 - (longlong)puVar24);
        puVar36 = &UNK_14300e77d + (longlong)puVar24;
      }
    }
    puVar32 = &UNK_14300e5a9;
    puVar34 = &UNK_14300e57d;
    do {
      bVar7 = puVar32[-1];
      uVar16 = (uint)(char)bVar7;
      if ((char)bVar7 < '\0') {
        bVar8 = puVar32[-2];
        if ((char)bVar8 < -0x40) {
          bVar9 = puVar32[-3];
          if ((char)bVar9 < -0x40) {
            pbVar1 = puVar32 + -4;
            puVar32 = puVar32 + -4;
            uVar16 = bVar9 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar32 = puVar32 + -3;
            uVar16 = bVar9 & 0xf;
          }
          uVar16 = bVar8 & 0x3f | uVar16 << 6;
        }
        else {
          puVar32 = puVar32 + -2;
          uVar16 = bVar8 & 0x1f;
        }
        uVar16 = (uint)(bVar7 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_140872e74;
LAB_140872e85:
        puVar34 = puVar32 + -0x14300e57c;
        if ((undefined *)0x2c < puVar34) {
          pdb_142dc8070(&UNK_14300e57d,0x2c,puVar34,0x2c,&UNK_14300e818);
          goto LAB_140874d77;
        }
        lVar17 = 0x2c - (longlong)puVar34;
        puVar34 = puVar32 + 1;
        goto LAB_140872ea7;
      }
      puVar32 = puVar32 + -1;
      if (uVar16 == 0x5c) goto LAB_140872e85;
LAB_140872e74:
      if (uVar16 == 0x2f) goto LAB_140872e85;
    } while (puVar32 != &UNK_14300e57d);
    lVar17 = 0x2c;
LAB_140872ea7:
    pcVar19 = (code *)pdb_140e97000();
    if ((pcVar19[0x68] == (code)0x1) ||
       (pcVar19 = (code *)pdb_142dde6e0(pcVar19,0), pcVar19 != (code *)0x0)) {
      if (*(longlong *)pcVar19 != 0) goto LAB_1408747fa;
      *(longlong *)pcVar19 = -1;
      pcStack_118 = pcVar19;
      uStack_1e0 = pdb_140e94f10(pcVar19 + 8,puVar36,pbVar30,puVar34,lVar17,1,0);
      *(longlong *)pcStack_118 = *(longlong *)pcStack_118 + 1;
      goto LAB_140872f08;
    }
LAB_140874cf6:
    pdb_142dc7890(&UNK_14330e598);
  }
  uStack_e4 = 0;
  pdb_142dc7e2a(4,0x960);
LAB_140874fff:
                    /* WARNING: Does not return */
  pcVar20 = (code *)invalidInstructionException();
  (*pcVar20)();
LAB_140874d77:
  uStack_e1 = 0;
  uStack_e2 = 0;
  pdb_142dc8070(&UNK_14300e57d,0x2c);
  goto LAB_140874fff;
code_r0x00014087401d:
  pcStack_278 = (code *)&UNK_14300e620;
  pcStack_270 = pdb_140f72a40;
  ppcStack_268 = &pcStack_208;
  pcStack_260 = pdb_140f72a40;
  pcStack_188 = (code *)0x0;
  pcStack_180 = (code *)&UNK_14300e67c;
  uStack_178 = (code *)0x1e;
  uStack_170 = (code **)0x0;
  uStack_168 = (code *)&UNK_14300e550;
  uStack_160 = 0x2c;
  uStack_158 = 2;
  puStack_150 = &UNK_14300e67c;
  uStack_148 = 0x1e;
  uStack_140 = 0x3600000001;
  puStack_138 = &UNK_14300e628;
  ppcStack_130 = unaff_R13;
  pdb_140f332f0(&uStack_1a1,&pcStack_188);
  pcVar19 = pcVar19 + 8;
  pbVar30 = pbStack_198;
  goto joined_r0x000140873f46;
}

