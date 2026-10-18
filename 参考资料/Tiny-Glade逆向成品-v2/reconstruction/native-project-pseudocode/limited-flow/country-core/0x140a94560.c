// VA 0x140a94560, PDB extent 119 bytes
// country_core::render::render_config::impl$7::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001430457ef) overlaps instruction at (ram,0x0001430457ec)
    */
/* WARNING: Removing unreachable block (ram,0x000140a95aeb) */
/* WARNING: Removing unreachable block (ram,0x000140a9566b) */
/* WARNING: Removing unreachable block (ram,0x000140a95a0e) */
/* WARNING: Removing unreachable block (ram,0x000140a95688) */
/* WARNING: Removing unreachable block (ram,0x000140a9568d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::render_config::impl$7::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 119 */

uint * pdb_140a94560(byte *param_1,uint *param_2,uint *param_3,longlong param_4)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte bVar17;
  uint *puVar13;
  undefined *puVar14;
  uint *puVar15;
  char *pcVar16;
  byte bVar19;
  undefined2 uVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  int *unaff_RBX;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  char cVar28;
  ushort uVar29;
  int iVar30;
  uint uVar31;
  uint *unaff_RBP;
  byte *pbVar32;
  byte *pbVar33;
  uint *puVar34;
  uint *unaff_RDI;
  byte *pbVar35;
  byte *pbVar36;
  uint *puVar37;
  byte unaff_R12B;
  uint *unaff_R13;
  uint *unaff_R14;
  uint *unaff_R15;
  bool bVar38;
  undefined1 uVar39;
  bool bVar40;
  byte bVar41;
  undefined1 unaff_XMM6 [16];
  undefined1 unaff_XMM7 [16];
  uint unaff_XMM8_Da;
  uint unaff_XMM8_Db;
  uint unaff_XMM8_Dc;
  uint unaff_XMM8_Dd;
  byte abStackX_26 [2];
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined1 auStack_20 [16];
  longlong lStack_10;
  undefined7 uVar18;
  
  bVar41 = 0;
  puVar27 = &uStack_28;
  puVar25 = &uStack_28;
  puVar24 = &uStack_28;
  puVar13 = (uint *)&UNK_1430457c8;
  uVar9 = (ulonglong)*(int *)(&UNK_1430457c8 + (ulonglong)*param_1 * 4);
  bVar38 = 0xfffffffebcfba837 < uVar9;
  puVar10 = (uint *)(&UNK_1430457c8 + uVar9);
  uVar39 = puVar10 == (uint *)0x0;
  iVar30 = (int)puVar10;
  uVar18 = (undefined7)((ulonglong)puVar10 >> 8);
  uVar20 = SUB82(param_2,0);
  bVar7 = (byte)param_4;
  puVar15 = puVar13;
  puVar4 = &uStack_28;
  puVar26 = &uStack_28;
  puVar5 = &uStack_28;
  puVar6 = &uStack_28;
  puVar34 = param_2;
  puVar37 = unaff_RDI;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar14 = &UNK_143045460;
    uVar22 = 0x18;
    break;
  case 1:
    puVar14 = &UNK_143045478;
    uVar22 = 0x13;
    break;
  case 2:
    puVar14 = &UNK_14304548b;
    uVar22 = 0x10;
    break;
  case 3:
    puVar14 = &UNK_14304549b;
    uVar22 = 0xf;
    break;
  case 4:
    puVar14 = &UNK_1430454aa;
    uVar22 = 0x14;
    break;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    uVar31 = LocalDescriptorTableRegister();
    *puVar10 = uVar31;
    uVar11 = CONCAT71(0x1430457,(-0x38 - (&UNK_143045755)[uVar9]) - (0xa8 < (byte)unaff_RBX));
    uVar22 = 0x14;
    goto code_r0x000140a9472f;
  case 7:
    uVar31 = iVar30 + *puVar10 + (uint)bVar38;
    puVar10 = (uint *)(ulonglong)uVar31;
    *(byte *)puVar10 = (byte)*puVar10 + (char)uVar31;
  case 9:
    *(uint *)((longlong)puVar10 + 1) = *(uint *)((longlong)puVar10 + 1) | 0x48e0ffc8;
    uVar11 = 0x43045478;
    uVar22 = 0x13;
code_r0x000140a9472f:
    uVar11 = pdb_140dc6290(uVar11,uVar22);
    goto pdb_140f679a0;
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    pcVar3 = (code *)swi(3);
    puVar10 = (uint *)(*pcVar3)();
    return puVar10;
  case 0xb:
    return (uint *)CONCAT71(uVar18,0xb);
  case 0xc:
    return puVar10;
  default:
    goto code_r0x000140a94d27;
  case 0xe:
    return (uint *)CONCAT71(uVar18,3);
  case 0x16:
    return puVar10;
  case 0x1a:
    goto code_r0x000140a94d2f;
  case 0x1b:
    return (uint *)CONCAT71(uVar18,3);
  case 0x1c:
    return (uint *)CONCAT71(uVar18,10);
  case 0x1d:
    return puVar10;
  case 0x1e:
    return puVar10;
  case 0x1f:
    goto code_r0x000140a94d1b;
  case 0x20:
    return puVar10;
  case 0x21:
    lVar12 = CONCAT71(0x1430457,(&UNK_14304582b)[uVar9] + -0x38);
    goto code_r0x000140a94d2b;
  case 0x22:
    goto code_r0x000140a94d15;
  case 0x23:
    return (uint *)CONCAT71(uVar18,3);
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
    return (uint *)0x0;
  case 0x26:
    return (uint *)0x0;
  case 0x27:
    pcVar3 = (code *)swi(3);
    puVar10 = (uint *)(*pcVar3)();
    return puVar10;
  case 0x2a:
    puVar13 = (uint *)CONCAT71(0x1430457,(&UNK_1430457c9)[uVar9]);
    uVar39 = (int)unaff_RDI >> 1 == 0;
code_r0x000140a94d2f:
    pbVar32 = (byte *)((longlong)puVar13 + -1);
    if (pbVar32 == (byte *)0x0 || !(bool)uVar39) {
      *pbVar32 = *pbVar32 << ((byte)pbVar32 & 0x1f);
      return (uint *)CONCAT71(uVar18,10);
    }
    *(int *)pbVar32 = *(int *)pbVar32 + (int)param_2;
code_r0x000140a94d69:
    return puVar10;
  case 0x2b:
    goto code_r0x000140a94d69;
  case 0x2c:
    puVar13 = (uint *)0xc8;
    puVar10 = (uint *)CONCAT71(uVar18,0xc);
code_r0x000140a94d15:
    puVar13 = (uint *)(ulonglong)((int)puVar13 - 0xc0);
code_r0x000140a94d1b:
    if (0x3e < (uint)puVar13) {
      return puVar10;
    }
code_r0x000140a94d20:
    param_2 = (uint *)&UNK_1430457f0;
code_r0x000140a94d27:
    lVar12 = (longlong)(int)param_2[(longlong)puVar13];
code_r0x000140a94d2b:
                    /* WARNING: Could not recover jumptable at 0x000140a94d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (uint *)(*(code *)(lVar12 + (longlong)param_2))((code *)(lVar12 + (longlong)param_2));
    return puVar10;
  case 0x38:
    goto code_r0x000140a94d20;
  case 0x48:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x49:
    pbVar32 = (byte *)((longlong)unaff_RBP + 0x3b);
    bVar40 = 0x37 < *pbVar32 || CARRY1(*pbVar32 - 0x38,bVar38);
    *pbVar32 = (*pbVar32 - 0x38) + bVar38;
    puVar34 = param_2 + 1;
    out(*param_2,uVar20);
    uVar31 = *unaff_RDI;
    bVar17 = (byte)*unaff_RDI - 0x38;
    *(byte *)unaff_RDI = bVar17 + bVar40;
    *(int *)((longlong)unaff_RBX + 3) =
         *(int *)((longlong)unaff_RBX + 3) + (uint)(0x37 < (byte)uVar31 || CARRY1(bVar17,bVar40));
    UNK_143045753 = UNK_143045753 + -0x38;
    *(byte *)(param_4 + -0x73) = *(byte *)(param_4 + -0x73) | bVar7;
    *(longlong *)((longlong)param_3 + -0x77) = *(longlong *)((longlong)param_3 + -0x77) + param_4;
    puVar27 = (undefined8 *)auStack_20;
    *(undefined8 *)(&UNK_143045839 + uVar9) = uStack_28;
    *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
    goto code_r0x000140a94ffa;
  case 0x4a:
code_r0x000140a94e9b:
    *(byte *)puVar34 = 0xd;
    return puVar34;
  case 0x4b:
  case 0x51:
    goto code_r0x000140a95292;
  case 0x4c:
  case 0x4d:
    goto code_r0x000140a950fc;
  case 0x4e:
    (&UNK_143045751)[uVar9] = (&UNK_143045751)[uVar9] ^ 200;
    puVar27 = &uStack_28;
    goto code_r0x000140a9531f;
  case 0x4f:
    puVar27 = (undefined8 *)&stack0xffffffffffffffd0;
    puVar34 = param_2 + 1;
    puVar10 = (uint *)(ulonglong)*param_2;
    UNK_1430457c8 = (UNK_1430457c8 - (char)*param_2) - bVar38;
    goto code_r0x000140a94fcc;
  case 0x50:
    lVar12 = func_0x0001012e9ad1();
    goto code_r0x000140a951d2;
  case 0x52:
    UNK_143045755 = UNK_143045755 + -0x38;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
    *(int *)(uVar9 + 0xd6135ac2) = *(int *)(uVar9 + 0xd6135ac2) + iVar30;
    return puVar10;
  case 0x54:
    puVar27 = &uStack_28;
code_r0x000140a94ffa:
    lVar12 = *(longlong *)(unaff_R15 + 2);
    puVar13 = (uint *)((longlong)unaff_R13 + 1);
    *(uint **)(unaff_RDI + 0x1c50) = puVar13;
    puVar10 = (uint *)(ulonglong)*(byte *)(lVar12 + (longlong)unaff_R13);
    bVar38 = 1 < (byte)(*(byte *)(lVar12 + (longlong)unaff_R13) + 1);
    param_2 = (uint *)(ulonglong)bVar38;
    cVar28 = (char)unaff_RBP;
    param_3 = (uint *)CONCAT71((int7)((ulonglong)param_3 >> 8),cVar28 != -1 || bVar38);
    uVar31 = (uint)param_3;
    unaff_RBP = puVar10;
    unaff_R13 = puVar13;
    if (cVar28 == -1 && !bVar38) {
      do {
        bVar7 = unaff_R12B;
        if (*(uint **)unaff_R14 <= puVar13) goto code_r0x000140a9534d;
        cVar28 = (char)puVar10;
        lVar12 = *(longlong *)(unaff_R15 + 2);
        unaff_R13 = (uint *)((longlong)puVar13 + 1);
        *(uint **)(unaff_RDI + 0x1c50) = unaff_R13;
        puVar10 = (uint *)(ulonglong)*(byte *)(lVar12 + (longlong)puVar13);
        uVar21 = *(byte *)(lVar12 + (longlong)puVar13) + 1;
        param_2 = (uint *)(ulonglong)uVar21;
        unaff_RBP = puVar10;
        puVar13 = unaff_R13;
      } while ((byte)uVar21 < 2);
    }
    puVar10 = unaff_RBP;
    if (cVar28 != -1) goto code_r0x000140a94fea;
    *(undefined **)((longlong)puVar27 + -8) = &UNK_140a9506d;
    puVar13 = unaff_RBP;
    puVar10 = (uint *)pdb_140a94d10(unaff_RBP);
    uVar31 = (uint)param_3;
    bVar7 = (byte)puVar10;
    if (bVar7 == 0xc) {
      bVar7 = 1;
      if ((unaff_R13 < (uint *)0xfffffffffffffffe) &&
         (puVar10 = (uint *)((longlong)unaff_R13 + 2), puVar10 <= *(uint **)unaff_R14)) {
        uVar29 = *(ushort *)(*(longlong *)(unaff_R15 + 2) + (longlong)unaff_R13);
        *(uint **)(unaff_RDI + 0x1c50) = puVar10;
        uVar29 = uVar29 << 8 | uVar29 >> 8;
        *(ushort *)((longlong)puVar27 + 0x60) = uVar29;
        if (1 < uVar29) {
          puVar10 = (uint *)((longlong)puVar10 + (ulonglong)(ushort)(uVar29 - 2));
          *(uint **)(unaff_RDI + 0x1c50) = puVar10;
          unaff_RBX = (int *)0x0;
          unaff_R13 = puVar10;
          goto code_r0x000140a94fea;
        }
        *(undefined1 **)((longlong)puVar27 + 0x30) = (undefined1 *)((longlong)puVar27 + 0x60);
        *(code **)((longlong)puVar27 + 0x38) = pdb_140f71140;
        param_2 = (uint *)&UNK_14304566a;
        uVar31 = (uint)(undefined1 *)((longlong)puVar27 + 0x30);
        *(undefined **)((longlong)puVar27 + -8) = &UNK_140a95388;
        puVar10 = (uint *)pdb_140f60760();
        unaff_XMM6 = *(undefined1 (*) [16])((longlong)puVar27 + 0x80);
        unaff_RDI = *(uint **)((longlong)puVar27 + 0x90);
        bVar7 = 0;
      }
      goto code_r0x000140a9534d;
    }
    if ((3 < (int)unaff_RBX) &&
       ((*(byte *)((longlong)unaff_RDI + 0x711a) != 0 ||
         *(byte *)((longlong)unaff_RDI + 0x711b) != 0 ||
        (puVar13 = (uint *)0x0, *(byte *)((longlong)unaff_RDI + 0x7119) != 0))))
    goto code_r0x000140a94f17;
    *(byte *)((longlong)puVar27 + 0x56) = bVar7;
    *(char *)((longlong)puVar27 + 0x57) = (char)param_2;
    puVar4 = puVar27;
    if (10 < bVar7) {
code_r0x000140a95220:
      if ((unaff_R13 < (uint *)0xfffffffffffffffe) &&
         (param_2 = (uint *)((longlong)unaff_R13 + 2), param_2 <= *(uint **)unaff_R14)) {
        uVar29 = *(ushort *)(*(longlong *)(unaff_R15 + 2) + (longlong)unaff_R13);
        *(uint **)(unaff_RDI + 0x1c50) = param_2;
        uVar29 = uVar29 << 8 | uVar29 >> 8;
        *(ushort *)((longlong)puVar27 + 0x58) = uVar29;
        if (1 < uVar29) {
          param_2 = (uint *)((longlong)param_2 + (ulonglong)(ushort)(uVar29 - 2));
          *(uint **)(unaff_RDI + 0x1c50) = param_2;
          unaff_RBX = (int *)0x0;
          unaff_R13 = param_2;
          if ((char)puVar10 == '\x06') goto code_r0x000140a9545b;
          goto code_r0x000140a94fea;
        }
        *(undefined1 **)((longlong)puVar27 + 0x30) = (undefined1 *)((longlong)puVar27 + 0x58);
        *(code **)((longlong)puVar27 + 0x38) = pdb_140f71140;
        param_2 = (uint *)0x0;
        param_3 = (uint *)((longlong)puVar27 + 0x30);
        *(undefined **)((longlong)puVar27 + -8) = &UNK_140a95429;
        puVar10 = (uint *)pdb_140f60760();
        unaff_XMM6 = *(undefined1 (*) [16])((longlong)puVar27 + 0x60);
        puVar15 = (uint *)0x0;
        unaff_RDI = *(uint **)((longlong)puVar27 + 0x70);
      }
      else {
code_r0x000140a953b1:
        puVar15 = (uint *)0x1;
      }
      goto code_r0x000140a95519;
    }
code_r0x000140a950fc:
    puVar27 = puVar4;
    uVar29 = (ushort)unaff_RBP;
    uVar18 = (undefined7)((ulonglong)puVar13 >> 8);
    puVar15 = (uint *)CONCAT71(uVar18,1);
    bVar7 = (byte)puVar10;
    bVar38 = 0xfffffffebcfba713 <
             (ulonglong)(longlong)*(int *)(&UNK_1430458ec + ((ulonglong)puVar10 & 0xff) * 4);
    param_3 = (uint *)(&UNK_1430458ec + *(int *)(&UNK_1430458ec + ((ulonglong)puVar10 & 0xff) * 4));
    bVar40 = param_3 == (uint *)0x0;
    bVar19 = (byte)param_2;
    bVar17 = (byte)((ulonglong)puVar13 >> 8);
    puVar26 = puVar27;
    puVar13 = puVar34;
    puVar37 = unaff_RDI;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulonglong)puVar10 & 0xff) {
    case 0:
      if (bVar19 < 3) {
        if (bVar19 == 2) goto code_r0x000140a95125;
        param_2 = (uint *)0x0;
        goto code_r0x000140a95305;
      }
      *(undefined **)((longlong)puVar27 + -8) = &UNK_140a9548b;
      pdb_14007ee60();
      unaff_RDI = (uint *)0x18;
      param_2 = (uint *)0x1;
      *(undefined **)((longlong)puVar27 + -8) = &UNK_140a9549f;
      puVar10 = (uint *)pub_1406abab0(0x18,1);
      uVar11 = _UNK_143045558;
      if (puVar10 == (uint *)0x0) {
        *(undefined **)((longlong)puVar27 + -8) = &UNK_140a955af;
        pdb_142dc7e2a(1,0x18);
code_r0x000140a955af:
        *(undefined **)((longlong)puVar27 + -8) = &UNK_140a955be;
        pdb_142dc7e2a(1,0x1c);
        pcVar3 = (code *)swi(3);
        puVar10 = (uint *)(*pcVar3)();
        return puVar10;
      }
      *(undefined8 *)puVar10 = _UNK_143045550;
      *(undefined8 *)(puVar10 + 2) = uVar11;
      puVar10[4] = 0x6f662065;
      puVar10[5] = 0x74616d72;
      uVar11 = _UNK_142e69970;
code_r0x000140a95513:
      unaff_XMM6._8_8_ = puVar10;
      unaff_XMM6._0_8_ = uVar11;
      puVar15 = (uint *)0x0;
      break;
    case 1:
      *(undefined **)((longlong)puVar27 + -8) = &UNK_140a94fcc;
      param_2 = unaff_RDI;
      puVar10 = (uint *)pdb_141c20fa0((undefined1 *)((longlong)puVar27 + 0x30));
      goto code_r0x000140a94fcc;
    case 2:
    case 8:
      *(undefined1 **)((longlong)puVar27 + 0x30) = (undefined1 *)((longlong)puVar27 + 0x56);
      *(code **)((longlong)puVar27 + 0x38) = pdb_140a93d70;
      param_2 = (uint *)&UNK_14304557e;
      param_3 = (uint *)((longlong)puVar27 + 0x30);
      *(undefined **)((longlong)puVar27 + -8) = &UNK_140a953e5;
      puVar10 = (uint *)pdb_140f60760();
      puVar15 = (uint *)0x0;
      unaff_RDI = *(uint **)((longlong)puVar27 + 0xd0);
      unaff_XMM6 = *(undefined1 (*) [16])((longlong)puVar27 + 0xc0);
      break;
    case 3:
    case 4:
      goto code_r0x000140a95220;
    case 5:
      unaff_XMM6 = unaff_XMM7;
      break;
    case 6:
      *(undefined **)((longlong)puVar27 + -8) = &UNK_140a95451;
      pdb_141c23ec0((undefined1 *)((longlong)puVar27 + 0x30));
      bVar7 = *(byte *)((longlong)puVar27 + 0x30);
      if (bVar7 != 0xd) goto code_r0x000140a95467;
code_r0x000140a9545b:
      *(byte *)((longlong)unaff_RDI + 0x71be) = 1;
      goto code_r0x000140a94e9b;
    case 7:
      *(undefined **)((longlong)puVar27 + -8) = &UNK_140a952fe;
      param_2 = unaff_RDI;
      puVar10 = (uint *)pdb_141c22db0((undefined1 *)((longlong)puVar27 + 0x30));
      goto code_r0x000140a94fcc;
    case 9:
      if (unaff_R13 < (uint *)0xfffffffffffffffe) {
        puVar10 = (uint *)((longlong)unaff_R13 + 2);
        param_2 = *(uint **)unaff_R14;
        bVar38 = puVar10 < param_2;
        uVar39 = puVar10 == param_2;
        puVar5 = puVar27;
code_r0x000140a95292:
        puVar27 = puVar5;
        if (bVar38 || (bool)uVar39) {
          param_3 = *(uint **)(unaff_R15 + 2);
          sVar1 = *(short *)((longlong)param_3 + (longlong)unaff_R13);
          *(uint **)(unaff_RDI + 0x1c50) = puVar10;
          if (sVar1 != 0x400) {
            *(undefined **)((longlong)puVar27 + -8) = &UNK_140a954d4;
            pdb_14007ee60();
            unaff_RDI = (uint *)0x1c;
            param_2 = (uint *)0x1;
            *(undefined **)((longlong)puVar27 + -8) = &UNK_140a954e8;
            puVar10 = (uint *)pub_1406abab0(0x1c,1);
            uVar11 = _UNK_1430455d9;
            if (puVar10 == (uint *)0x0) goto code_r0x000140a955af;
            *(ulonglong *)(puVar10 + 3) = CONCAT44(_UNK_1430455d5,_UNK_1430455d1);
            *(undefined8 *)(puVar10 + 5) = uVar11;
            uVar11 = CONCAT44(_UNK_1430455d1,_UNK_1430455cd);
            *(undefined8 *)puVar10 = _UNK_1430455c5;
            *(undefined8 *)(puVar10 + 2) = uVar11;
            uVar11 = _UNK_142f8bc10;
            goto code_r0x000140a95513;
          }
          if ((puVar10 < (uint *)0xfffffffffffffffe) && (unaff_R13 + 1 <= param_2)) {
            uVar29 = *(ushort *)((longlong)param_3 + (longlong)puVar10);
            *(uint **)(unaff_RDI + 0x1c50) = unaff_R13 + 1;
            puVar10 = (uint *)(ulonglong)(ushort)(uVar29 << 8 | uVar29 >> 8);
            *(uint **)(unaff_RDI + 0x1c66) = puVar10;
            *(uint **)(unaff_RDI + 0x1c68) = puVar10;
            goto code_r0x000140a94fda;
          }
        }
      }
      break;
    case 10:
      uVar9 = (ulonglong)param_2 & 0xff;
      param_2 = (uint *)&UNK_143045918;
      switch(uVar9) {
      case 0:
        if (unaff_R13 < (uint *)0xfffffffffffffffe) {
          puVar10 = (uint *)((longlong)unaff_R13 + 2);
          param_2 = *(uint **)unaff_R14;
          if (puVar10 <= param_2) {
            uVar29 = *(ushort *)(*(longlong *)(unaff_R15 + 2) + (longlong)unaff_R13);
            *(uint **)(unaff_RDI + 0x1c50) = puVar10;
            uVar29 = uVar29 << 8 | uVar29 >> 8;
            unaff_RBX = (int *)(ulonglong)uVar29;
            *(ushort *)((longlong)puVar27 + 0x5e) = uVar29;
            if (1 < uVar29) {
              if (5 < uVar29) {
                puVar13 = (uint *)((longlong)unaff_R13 + 7);
                param_3 = (uint *)0xffffffffffffffff;
                if ((uint *)0xfffffffffffffffa < puVar10) {
                  puVar13 = (uint *)0xffffffffffffffff;
                }
                if (puVar13 <= param_2) {
                  *(undefined1 *)((longlong)puVar27 + 0x5c) = 0;
                  *(undefined4 *)((longlong)puVar27 + 0x58) = 0;
                  param_3 = (uint *)0x5;
                  puVar13 = unaff_RDI + 0x1c4e;
                  param_2 = (uint *)((longlong)puVar27 + 0x58);
code_r0x000140a951ca:
                  *(undefined **)((longlong)puVar27 + -8) = &UNK_140a951cf;
                  lVar12 = pdb_14091b830(puVar13);
                  uVar39 = lVar12 == 0;
                  puVar24 = puVar27;
code_r0x000140a951d2:
                  puVar27 = puVar24;
                  if (!(bool)uVar39) {
                    *(longlong *)((longlong)puVar24 + 0x30) = lVar12;
                    *(uint **)((longlong)puVar24 + 0x38) = param_2;
                    *(undefined **)((longlong)puVar24 + 0x20) = &UNK_1430455e8;
                    /* WARNING: Subroutine does not return */
                    *(undefined **)((longlong)puVar24 + -8) = &UNK_140a955a0;
                    pdb_142dc8170(&UNK_143045328,0x2b,(undefined1 *)((longlong)puVar24 + 0x30),
                                  &UNK_143045308);
                  }
code_r0x000140a951d8:
                  if (*(int5 *)((longlong)puVar27 + 0x58) == 0x31495641) {
code_r0x000140a951f1:
                    *(byte *)(unaff_RDI + 0x1c70) = 1;
                  }
                  goto code_r0x000140a951f8;
                }
              }
              goto code_r0x000140a95202;
            }
            *(undefined1 **)((longlong)puVar27 + 0x30) = (undefined1 *)((longlong)puVar27 + 0x5e);
            *(code **)((longlong)puVar27 + 0x38) = pdb_140f71140;
            param_2 = (uint *)0x0;
            param_3 = (uint *)((longlong)puVar27 + 0x30);
            *(undefined **)((longlong)puVar27 + -8) = &UNK_140a95555;
            puVar10 = (uint *)pdb_140f60760();
            unaff_XMM6 = *(undefined1 (*) [16])((longlong)puVar27 + 0xa0);
            puVar15 = (uint *)0x0;
            unaff_RDI = *(uint **)((longlong)puVar27 + 0xb0);
            goto code_r0x000140a95519;
          }
        }
        goto code_r0x000140a953b1;
      case 1:
        *(undefined **)((longlong)puVar27 + -8) = &UNK_140a95336;
        param_2 = unaff_RDI;
        puVar10 = (uint *)pdb_141c1fed0((undefined1 *)((longlong)puVar27 + 0x30));
        break;
      case 2:
        puVar13 = (uint *)((longlong)puVar27 + 0x30);
        param_2 = unaff_RDI;
code_r0x000140a9531f:
        *(undefined **)((longlong)puVar27 + -8) = &UNK_140a95324;
        puVar10 = (uint *)pdb_141c200c0(puVar13);
        break;
      default:
        goto code_r0x000140a95220;
      case 0xe:
        *(undefined **)((longlong)puVar27 + -8) = &UNK_140a95348;
        param_2 = unaff_RDI;
        puVar10 = (uint *)pdb_141c20790((undefined1 *)((longlong)puVar27 + 0x30));
      }
      goto code_r0x000140a94fcc;
    case 0xb:
      *(byte *)puVar10 = (byte)*puVar10 + bVar7;
code_r0x000140a95125:
      *(byte *)((longlong)unaff_RDI + 0x71bd) = 1;
      param_2 = (uint *)0x2;
code_r0x000140a95305:
      *(undefined **)((longlong)puVar27 + -8) = &UNK_140a95312;
      param_3 = unaff_RDI;
      puVar10 = (uint *)pdb_141c215e0((undefined1 *)((longlong)puVar27 + 0x30));
code_r0x000140a94fcc:
      bVar7 = *(byte *)((longlong)puVar27 + 0x30);
      if (bVar7 != 0xd) {
code_r0x000140a95467:
        puVar15 = (uint *)(ulonglong)bVar7;
        param_2 = (uint *)(ulonglong)*(byte *)((longlong)puVar27 + 0x31);
        puVar10 = (uint *)(ulonglong)*(ushort *)((longlong)puVar27 + 0x32);
        param_3 = (uint *)(ulonglong)*(uint *)((longlong)puVar27 + 0x34);
        unaff_RDI = *(uint **)((longlong)puVar27 + 0x48);
        unaff_XMM6 = *(undefined1 (*) [16])((longlong)puVar27 + 0x38);
        break;
      }
code_r0x000140a94fda:
      unaff_R15 = *(uint **)(unaff_RDI + 0x1c4e);
      unaff_RBX = (int *)0x0;
      unaff_R13 = *(uint **)(unaff_RDI + 0x1c50);
code_r0x000140a94fea:
      uVar31 = (uint)param_3;
      unaff_RBX = (int *)(ulonglong)((int)unaff_RBX + 1);
      unaff_R14 = unaff_R15 + 4;
      bVar7 = unaff_R12B;
      if (*(uint **)(unaff_R15 + 4) <= unaff_R13) {
code_r0x000140a9534d:
        unaff_R12B = bVar7;
        unaff_XMM8_Da = unaff_XMM6._0_4_;
        unaff_XMM8_Db = unaff_XMM6._4_4_;
        unaff_XMM8_Dc = unaff_XMM6._8_4_;
        unaff_XMM8_Dd = unaff_XMM6._12_4_;
code_r0x000140a94f17:
        *(byte *)puVar34 = unaff_R12B;
        *(byte *)((longlong)puVar34 + 1) = (byte)param_2;
        *(short *)((longlong)puVar34 + 2) = (short)puVar10;
        puVar34[1] = uVar31;
        puVar34[2] = unaff_XMM8_Da;
        puVar34[3] = unaff_XMM8_Db;
        puVar34[4] = unaff_XMM8_Dc;
        puVar34[5] = unaff_XMM8_Dd;
        *(uint **)(puVar34 + 6) = unaff_RDI;
        return puVar34;
      }
      goto code_r0x000140a94ffa;
    case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *(byte *)puVar15 = (byte)*puVar15 + bVar7;
code_r0x000140a951f8:
      uVar29 = (short)unaff_RBX - 5;
      puVar10 = *(uint **)(unaff_RDI + 0x1c50);
code_r0x000140a95202:
      uVar9 = (ulonglong)(ushort)(uVar29 - 2);
      if (uVar29 < 2) {
        uVar9 = 0;
      }
      *(byte **)(unaff_RDI + 0x1c50) = (byte *)(uVar9 + (longlong)puVar10);
      goto code_r0x000140a94fda;
    case 0x19:
      return puVar10;
    case 0x1a:
      *(byte *)puVar10 = (byte)*puVar10 + bVar7;
      goto code_r0x000140a9575f;
    case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1c:
    case 0x22:
      puVar27 = (undefined8 *)((longlong)puVar27 + 8);
      goto LAB_140a95a3d;
    case 0x1d:
    case 0x1e:
      goto code_r0x000140a95864;
    case 0x1f:
      puVar34[4] = (uint)CONCAT71((int7)((ulonglong)puVar10 >> 8),bVar7 ^ bVar17);
      goto LAB_140a95a3d;
    case 0x20:
      *(byte *)puVar10 = (byte)*puVar10 + bVar7;
code_r0x000140a95abe:
      *(undefined1 **)((longlong)puVar27 + 0x30) = (undefined1 *)((longlong)puVar27 + 0x56);
      *(code **)((longlong)puVar27 + 0x38) = pdb_140a93d70;
      *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95aed;
      pdb_140f60760((undefined1 *)((longlong)puVar27 + 0xa8),&UNK_14304557e,
                    (undefined1 *)((longlong)puVar27 + 0x30));
      unaff_RBX = *(int **)((longlong)puVar27 + 0xa8);
      unaff_XMM7 = *(undefined1 (*) [16])((longlong)puVar27 + 0xb0);
      bVar7 = 0;
LAB_140a95c82:
      *(byte *)puVar34 = bVar7;
      uVar31 = *(uint *)((longlong)puVar27 + 0x28);
      uVar21 = *(uint *)((longlong)puVar27 + 0x2b);
      *(uint *)((longlong)puVar34 + 1) = uVar31;
      puVar34[1] = uVar21;
      *(int **)(puVar34 + 2) = unaff_RBX;
      *(undefined1 (*) [16])(puVar34 + 4) = unaff_XMM7;
      return (uint *)(ulonglong)uVar31;
    case 0x21:
      goto code_r0x000140a95938;
    case 0x23:
      puVar13 = (uint *)((longlong)puVar10 + -0x77);
      *puVar13 = *puVar13 >> 0xf | *puVar13 << 0x11;
      pcVar16 = (char *)CONCAT71(uVar18,bVar17 + 1);
      *pcVar16 = *pcVar16 + bVar7;
      *(byte *)puVar10 = (byte)*puVar10 + bVar7;
      goto LAB_140a958cc;
    case 0x24:
      *(byte *)unaff_RDI = (byte)*unaff_RDI & 1;
      pcVar16 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                 CONCAT11(-0x71 - (byte)*puVar15,bVar19));
      *pcVar16 = *pcVar16 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
      *(byte *)puVar10 = (byte)*puVar10 + bVar7;
      goto code_r0x000140a9575f;
    case 0x26:
      uVar31 = ((int)puVar10 - *unaff_RBX) - (uint)bVar38;
      puVar10 = (uint *)(ulonglong)uVar31;
      *(byte *)puVar10 = (byte)*puVar10 + (char)uVar31;
      goto code_r0x000140a95960;
    case 0x27:
      *(byte *)((longlong)unaff_RDI + (longlong)puVar15) =
           *(byte *)((longlong)unaff_RDI + (longlong)puVar15) + bVar7;
      goto code_r0x000140a95956;
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
      goto code_r0x000140a95838;
    case 0x33:
      *(byte *)puVar10 = (byte)*puVar10 + bVar7;
      goto code_r0x000140a9596d;
    case 0x34:
    case 0x35:
    case 0x3a:
    case 0x5a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x36:
    case 0x59:
    case 0x5b:
    case 0x5c:
    case 0x37:
    case 0x38:
      puVar37 = (uint *)((longlong)unaff_RDI + 1);
      puVar13 = (uint *)((longlong)puVar34 + 1);
      *(byte *)unaff_RDI = (byte)*puVar34;
code_r0x0001430458ef:
code_r0x0001430458f0:
      puVar34 = (uint *)(ulonglong)(uint)((int)puVar13 << 1);
code_r0x0001430458f2:
      *(byte *)puVar37 = (byte)*puVar34;
code_r0x0001430458f3:
code_r0x0001430458f4:
      return puVar10;
    case 0x39:
      goto code_r0x0001430458ef;
    case 0x3b:
    case 0x40:
      goto code_r0x0001430458f0;
    case 0x3c:
    case 0x47:
    case 0x4c:
code_r0x0001430458f8:
      puVar13 = puVar34;
      puVar37 = unaff_RDI;
code_r0x0001430458fa:
      unaff_RDI = (uint *)((longlong)puVar37 + (ulonglong)bVar41 * -2 + 1);
      puVar34 = (uint *)((longlong)puVar13 + (ulonglong)bVar41 * -2 + 1);
      *(byte *)puVar37 = (byte)*puVar13;
code_r0x0001430458fb:
      bVar41 = 1;
code_r0x0001430458fc:
      puVar13 = puVar34;
      puVar37 = unaff_RDI;
code_r0x0001430458fe:
      unaff_RDI = (uint *)((longlong)puVar37 + (ulonglong)bVar41 * -2 + 1);
      puVar34 = (uint *)((longlong)puVar13 + (ulonglong)bVar41 * -2 + 1);
      *(byte *)puVar37 = (byte)*puVar13;
code_r0x0001430458ff:
      bVar41 = 1;
code_r0x000143045900:
      *(int **)((longlong)puVar27 + -8) = unaff_RBX;
code_r0x000143045901:
      puVar13 = puVar34;
      puVar37 = unaff_RDI;
code_r0x000143045902:
      unaff_RDI = (uint *)((longlong)puVar37 + (ulonglong)bVar41 * -2 + 1);
      puVar34 = (uint *)((longlong)puVar13 + (ulonglong)bVar41 * -2 + 1);
      *(byte *)puVar37 = (byte)*puVar13;
code_r0x000143045903:
      *(byte *)unaff_RDI = (byte)*puVar34;
      *(byte *)((longlong)unaff_RDI + -1) = *(byte *)((longlong)puVar34 + -1);
      *(byte *)((longlong)unaff_RDI + -2) = *(byte *)((longlong)puVar34 + -2);
      *(byte *)((longlong)unaff_RDI + -3) = *(byte *)((longlong)puVar34 + -3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3d:
    case 0x3e:
      goto code_r0x0001430458f2;
    case 0x3f:
      goto code_r0x0001430458f3;
    case 0x41:
    case 0x46:
      goto code_r0x0001430458f4;
    case 0x42:
    case 0x43:
    case 0x44:
      puVar37 = (uint *)((longlong)unaff_RDI + 1);
      puVar13 = (uint *)((longlong)puVar34 + 1);
      *(byte *)unaff_RDI = (byte)*puVar34;
code_r0x0001430458f7:
      bVar41 = 1;
      puVar34 = puVar13;
      unaff_RDI = puVar37;
      goto code_r0x0001430458f8;
    case 0x45:
      goto code_r0x0001430458f7;
    case 0x48:
    case 0x49:
    case 0x4a:
      goto code_r0x0001430458fa;
    case 0x4b:
      goto code_r0x0001430458fb;
    case 0x4d:
    case 0x52:
      goto code_r0x0001430458fc;
    case 0x4e:
    case 0x4f:
    case 0x50:
      goto code_r0x0001430458fe;
    case 0x51:
      goto code_r0x0001430458ff;
    case 0x53:
    case 0x58:
      goto code_r0x000143045900;
    case 0x54:
      goto code_r0x000143045901;
    case 0x55:
    case 0x56:
      goto code_r0x000143045902;
    case 0x57:
      goto code_r0x000143045903;
    }
code_r0x000140a95519:
    uVar31 = (uint)param_3;
    unaff_R12B = (byte)puVar15;
    unaff_XMM8_Da = unaff_XMM6._0_4_;
    unaff_XMM8_Db = unaff_XMM6._4_4_;
    unaff_XMM8_Dc = unaff_XMM6._8_4_;
    unaff_XMM8_Dd = unaff_XMM6._12_4_;
    goto code_r0x000140a94f17;
  case 0x55:
    puVar27 = &uStack_28;
    goto code_r0x000140a951d8;
  case 0x56:
    puVar27 = (undefined8 *)&stack0xffffffffffffffd0;
    goto code_r0x000140a951ca;
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
    *(byte *)param_2 = (byte)*param_2 - 0x38;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x62:
    puVar27 = (undefined8 *)&stack0xffffffffffffffd0;
    *(ulonglong *)((longlong)unaff_R13 + 7) =
         *(ulonglong *)((longlong)unaff_R13 + 7) ^ (ulonglong)param_2;
    goto code_r0x000140a951f1;
  case 99:
    UNK_143045751 = UNK_143045751 + -0x38;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
  case 0x6b:
    puVar10 = (uint *)(ulonglong)((int)param_2 + 2);
    puVar27 = &uStack_28;
    goto code_r0x000140a95935;
  case 0x66:
  case 0x67:
    goto code_r0x000140a9573f;
  case 0x68:
    goto code_r0x000140a959c3;
  case 0x69:
    *(char *)((longlong)unaff_RBX + 0x50c115ed7) =
         *(char *)((longlong)unaff_RBX + 0x50c115ed7) + -0x38;
    UNK_1430457c8 = UNK_1430457c8 + (char)((ulonglong)param_2 >> 8);
    in(uVar20);
    puVar27 = &uStack_28;
    goto code_r0x000140a959cc;
  case 0x6a:
    goto code_r0x000140a95814;
  case 0x6c:
    uVar31 = *puVar10;
    pcVar16 = (char *)((ulonglong)(iVar30 + uVar31) - 0x77a9dbbc);
    *pcVar16 = *pcVar16 + -0x38;
    puVar27 = (undefined8 *)&stack0xffffffffffffffd0;
    puVar10 = (uint *)((ulonglong)(iVar30 + uVar31) & 0xffffffffffffff57);
    goto LAB_140a9579e;
  case 0x6d:
    (&UNK_14304578f)[uVar9] = (&UNK_14304578f)[uVar9] | bVar7;
    cRam0000000129a95667 = cRam0000000129a95667 + bVar7;
    pcVar16 = (char *)((ulonglong)(iVar30 + *puVar10) - 0x75);
    *pcVar16 = *pcVar16 + (&UNK_143045751)[uVar9] + -0x38;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6e:
LAB_140a95650:
    *(byte *)param_2 = 1;
    *(undefined **)(param_2 + 2) = &UNK_1430454cc;
    param_2[4] = 0xd;
    param_2[5] = 0;
    return (uint *)&UNK_1430454cc;
  case 0x6f:
code_r0x000140a95838:
    uVar29 = (ushort)unaff_RBP;
    *(byte *)puVar10 = (byte)*puVar10 + (char)puVar10;
    puVar27 = puVar26;
    goto code_r0x000140a9583a;
  case 0x70:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7c:
    *(int *)(&UNK_1430457d7 + uVar9) = *(int *)(&UNK_1430457d7 + uVar9) + -1;
    return puVar10;
  case 0x7d:
  case 0x7e:
  case 0x83:
  case 0xa3:
  case 0x80:
  case 0x81:
code_r0x0001430457ca:
    *(byte *)unaff_RDI = (byte)*param_2;
code_r0x0001430457cb:
code_r0x0001430457bb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7f:
  case 0xa2:
  case 0xa4:
  case 0xa5:
    in(uVar20);
    goto code_r0x0001430457ca;
  case 0x82:
    goto code_r0x0001430457cb;
  case 0x84:
  case 0x89:
    goto code_r0x0001430457bb;
  case 0x85:
    uVar31 = in(uVar20);
    puVar10 = (uint *)(ulonglong)uVar31;
  case 0x86:
  case 0x87:
    *(byte *)unaff_RDI = (byte)*param_2;
code_r0x0001430457cf:
code_r0x0001430457d0:
    return puVar10;
  case 0x88:
    goto code_r0x0001430457cf;
  case 0x8a:
  case 0x8f:
    goto code_r0x0001430457d0;
  case 0x8b:
    uVar31 = in(uVar20);
    puVar10 = (uint *)(ulonglong)uVar31;
  case 0x8c:
  case 0x8d:
    puVar37 = (uint *)((longlong)unaff_RDI + 1);
    puVar34 = (uint *)((longlong)param_2 + 1);
    *(byte *)unaff_RDI = (byte)*param_2;
code_r0x0001430457d3:
    bVar41 = 1;
code_r0x0001430457d4:
  case 0x92:
  case 0x93:
code_r0x0001430457d6:
    unaff_RDI = (uint *)((longlong)puVar37 + (ulonglong)bVar41 * -2 + 1);
    param_2 = (uint *)((longlong)puVar34 + (ulonglong)bVar41 * -2 + 1);
    *(byte *)puVar37 = (byte)*puVar34;
code_r0x0001430457d7:
code_r0x0001430457d8:
    unaff_RBP = (uint *)((ulonglong)unaff_RBP >> 4 & 0xfffffff);
code_r0x0001430457db:
    bVar41 = 1;
code_r0x0001430457dc:
    uVar31 = (int)unaff_RBP - (int)unaff_RDI;
    pbVar35 = (byte *)((longlong)unaff_RDI + (ulonglong)bVar41 * -2 + 1);
    pbVar32 = (byte *)((longlong)param_2 + (ulonglong)bVar41 * -2 + 1);
    *(byte *)unaff_RDI = (byte)*param_2;
    bVar38 = (uint)pbVar35 < uVar31;
    pbVar36 = pbVar35 + -1;
    pbVar33 = pbVar32 + -1;
    *pbVar35 = *pbVar32;
    do {
      uVar21 = (uint)bVar38;
      uVar8 = (uint)puVar10;
      uVar2 = uVar8 + 0xbf025b11;
      puVar10 = (uint *)(ulonglong)(uVar2 - uVar21);
      bVar38 = 0x40fda4ee < uVar8 && uVar21 <= uVar2;
      pbVar32 = pbVar33;
      pbVar35 = pbVar36;
      while( true ) {
        pbVar36 = pbVar35 + -1;
        pbVar33 = pbVar32 + -1;
        *pbVar35 = *pbVar32;
        if (bVar38 || uVar2 - uVar21 == 0) break;
        *pbVar36 = *pbVar33;
        if (SBORROW4(uVar8,0x40fda4ef) != SBORROW4(uVar2,uVar21)) {
          pbVar35[-2] = pbVar32[-2];
          pbVar35[-3] = pbVar32[-3];
          pbVar32 = (byte *)(ulonglong)uVar31;
          pbVar35[-4] = *pbVar32;
          pbVar35[-5] = pbVar32[-1];
          pbVar35[-6] = pbVar32[-2];
          pbVar35[-7] = pbVar32[-3];
          pbVar35[-8] = pbVar32[-4];
          pbVar35[-9] = pbVar32[-5];
          pbVar35[-10] = pbVar32[-6];
          pbVar35[-0xb] = pbVar32[-7];
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar38 = bVar38 == false;
        pbVar32 = pbVar32 + -2;
        pbVar35 = pbVar35 + -2;
      }
    } while( true );
  case 0x8e:
    goto code_r0x0001430457d3;
  case 0x90:
  case 0x95:
    goto code_r0x0001430457d4;
  case 0x91:
    uVar31 = in(uVar20);
    puVar10 = (uint *)(ulonglong)uVar31;
    goto code_r0x0001430457d6;
  case 0x94:
    goto code_r0x0001430457d7;
  case 0x96:
  case 0x9b:
    goto code_r0x0001430457d8;
  case 0x97:
    uVar31 = in(uVar20);
    puVar10 = (uint *)(ulonglong)uVar31;
  case 0x98:
  case 0x99:
    *(byte *)unaff_RDI = (byte)*param_2;
    param_2 = (uint *)((longlong)param_2 + 1);
    unaff_RDI = (uint *)((longlong)unaff_RDI + 1);
  case 0x9a:
    goto code_r0x0001430457db;
  case 0x9c:
  case 0xa1:
    goto code_r0x0001430457dc;
  case 0x9d:
    out(uVar20,iVar30);
  case 0x9e:
  case 0x9f:
    puVar37 = (uint *)((longlong)unaff_RDI + 1);
    puVar34 = (uint *)((longlong)param_2 + 1);
    *(byte *)unaff_RDI = (byte)*param_2;
code_r0x0001430457df:
    out(uVar20,iVar30);
    unaff_RDI = (uint *)((longlong)puVar37 + -1);
    param_2 = (uint *)((longlong)puVar34 + -1);
    *(byte *)puVar37 = (byte)*puVar34;
    bVar41 = 1;
    goto code_r0x0001430457dc;
  case 0xa0:
    goto code_r0x0001430457df;
  }
  uVar11 = pdb_140dc6290(puVar14,uVar22);
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar10 = (uint *)(**(code **)(*(longlong *)(param_2 + 2) + 0x18))
                              (*(undefined8 *)param_2,uVar11,uVar22,
                               *(code **)(*(longlong *)(param_2 + 2) + 0x18));
  return puVar10;
code_r0x000140a9575f:
  unaff_R14 = (uint *)((longlong)puVar10 + (ulonglong)((int)puVar15 - 2U & 0xffff));
  *(uint **)(unaff_RDI + 0x1c52) = unaff_R14;
  iVar30 = 0;
  bVar7 = unaff_R12B;
LAB_140a956b3:
  do {
    iVar30 = iVar30 + 1;
    param_2 = puVar34;
    if (unaff_R15 <= unaff_R14) goto LAB_140a95650;
    unaff_R13 = *(uint **)(unaff_RDI + 0x1c4e);
    puVar10 = (uint *)((longlong)unaff_R14 + 1);
    *(uint **)(unaff_RDI + 0x1c52) = puVar10;
    unaff_R12B = *(byte *)((longlong)unaff_R13 + (longlong)unaff_R14);
    bVar38 = 1 < (byte)(unaff_R12B + 1);
    uVar31 = (uint)bVar38;
    unaff_R14 = puVar10;
    if (bVar7 == 0xff && !bVar38) {
      do {
        bVar7 = unaff_R12B;
        if (unaff_R15 <= puVar10) goto LAB_140a95650;
        unaff_R14 = (uint *)((longlong)puVar10 + 1);
        *(uint **)(unaff_RDI + 0x1c52) = unaff_R14;
        unaff_R12B = *(byte *)((longlong)unaff_R13 + (longlong)puVar10);
        uVar31 = unaff_R12B + 1;
        puVar10 = unaff_R14;
      } while ((byte)uVar31 < 2);
    }
    param_2 = (uint *)(ulonglong)uVar31;
    bVar38 = bVar7 != 0xff;
    bVar7 = unaff_R12B;
  } while (bVar38);
  *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95724;
  puVar10 = (uint *)pdb_140a94d10(unaff_R12B);
  if ((char)puVar10 != '\f') {
    if ((3 < iVar30) &&
       ((*(byte *)((longlong)unaff_RDI + 0x711a) != 0 ||
         *(byte *)((longlong)unaff_RDI + 0x711b) != 0 ||
        (*(byte *)((longlong)unaff_RDI + 0x7119) != 0)))) {
      *(byte *)puVar34 = 1;
      *(undefined **)(puVar34 + 2) = &UNK_143045640;
      puVar34[4] = 0x2a;
      puVar34[5] = 0;
      return (uint *)&UNK_143045640;
    }
LAB_140a9579e:
    *(char *)((longlong)puVar27 + 0x56) = (char)puVar10;
    bVar41 = (byte)param_2;
    *(byte *)((longlong)puVar27 + 0x57) = bVar41;
    puVar13 = (uint *)0x1;
    bVar7 = 1;
    switch((ulonglong)puVar10 & 0xff) {
    case 0:
      if (2 < bVar41) {
        *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95ba6;
        pdb_14007ee60();
        unaff_RBX = (int *)0x18;
        *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95bba;
        pbVar32 = pub_1406abab0(0x18,1);
        uVar11 = _UNK_143045558;
        if (pbVar32 == (byte *)0x0) {
          *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95ce2;
          pdb_142dc7e2a(1,0x18);
code_r0x000140a95ce2:
          *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95cf1;
          pdb_142dc7e2a(1,0x1c);
          pcVar3 = (code *)swi(3);
          puVar10 = (uint *)(*pcVar3)();
          return puVar10;
        }
        *(undefined8 *)pbVar32 = _UNK_143045550;
        *(undefined8 *)(pbVar32 + 8) = uVar11;
        pbVar32[0x10] = 0x65;
        pbVar32[0x11] = 0x20;
        pbVar32[0x12] = 0x66;
        pbVar32[0x13] = 0x6f;
        pbVar32[0x14] = 0x72;
        pbVar32[0x15] = 0x6d;
        pbVar32[0x16] = 0x61;
        pbVar32[0x17] = 0x74;
        unaff_XMM7._8_8_ = _UNK_142f8bc38;
        unaff_XMM7._0_8_ = pbVar32;
        bVar7 = 0;
        goto LAB_140a95c82;
      }
      if (bVar41 == 2) {
        *(byte *)((longlong)unaff_RDI + 0x71c5) = 1;
        uVar11 = 2;
      }
      else {
        uVar11 = 0;
      }
      *(undefined8 *)((longlong)puVar27 + -8) = 0x140a959be;
      pdb_141c21da0((undefined1 *)((longlong)puVar27 + 0x30),uVar11);
      break;
    case 1:
      *(undefined8 *)((longlong)puVar27 + -8) = 0x140a9599e;
      pdb_141c20950((undefined1 *)((longlong)puVar27 + 0x30));
      break;
    case 2:
    case 8:
      goto code_r0x000140a95abe;
    default:
LAB_140a958cc:
      bVar7 = 1;
      if (((uint *)0xfffffffffffffffd < unaff_R14) ||
         (puVar13 = (uint *)((longlong)unaff_R14 + 2), unaff_R15 < puVar13)) goto LAB_140a95c82;
      uVar29 = *(ushort *)((longlong)unaff_R13 + (longlong)unaff_R14);
      *(uint **)(unaff_RDI + 0x1c52) = puVar13;
      uVar29 = uVar29 << 8 | uVar29 >> 8;
      *(ushort *)((longlong)puVar27 + 0x58) = uVar29;
      if (uVar29 < 2) {
        *(undefined1 **)((longlong)puVar27 + 0x30) = (undefined1 *)((longlong)puVar27 + 0x58);
        *(code **)((longlong)puVar27 + 0x38) = pdb_140f71140;
        *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95b3d;
        pdb_140f60760((undefined1 *)((longlong)puVar27 + 0x60),&UNK_143045600,
                      (undefined1 *)((longlong)puVar27 + 0x30));
        unaff_RBX = *(int **)((longlong)puVar27 + 0x60);
        unaff_XMM7 = *(undefined1 (*) [16])((longlong)puVar27 + 0x68);
        bVar7 = 0;
        goto LAB_140a95c82;
      }
      unaff_R14 = (uint *)((longlong)puVar13 + (ulonglong)(ushort)(uVar29 - 2));
      *(uint **)(unaff_RDI + 0x1c52) = unaff_R14;
      iVar30 = 0;
      bVar7 = unaff_R12B;
      if ((char)puVar10 == '\x06') {
LAB_140a95b72:
        *(byte *)((longlong)unaff_RDI + 0x71c6) = 1;
        *(byte *)puVar34 = 0xd;
        return puVar10;
      }
      goto LAB_140a956b3;
    case 5:
      unaff_RBX = (int *)&UNK_143045568;
      unaff_XMM7 = unaff_XMM6;
      bVar7 = 1;
      goto LAB_140a95c82;
    case 6:
      *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95b68;
      puVar10 = (uint *)pdb_141c23610((undefined1 *)((longlong)puVar27 + 0x30));
      bVar7 = *(byte *)((longlong)puVar27 + 0x30);
      if (bVar7 == 0xd) goto LAB_140a95b72;
      goto code_r0x000140a95b81;
    case 7:
      *(undefined8 *)((longlong)puVar27 + -8) = 0x140a959ad;
      pdb_141c22560((undefined1 *)((longlong)puVar27 + 0x30));
      break;
    case 9:
      if (unaff_R14 < (uint *)0xfffffffffffffffe) {
        puVar10 = (uint *)((longlong)unaff_R14 + 2);
code_r0x000140a95935:
        bVar38 = puVar10 < unaff_R15;
        bVar40 = puVar10 == unaff_R15;
        puVar15 = puVar13;
code_r0x000140a95938:
        bVar7 = (byte)puVar15;
        if (bVar38 || bVar40) {
          sVar1 = *(short *)((longlong)unaff_R13 + (longlong)unaff_R14);
          *(uint **)(unaff_RDI + 0x1c52) = puVar10;
          if (sVar1 == 0x400) {
code_r0x000140a95956:
            bVar7 = (byte)puVar15;
            if (puVar10 < (uint *)0xfffffffffffffffe) {
code_r0x000140a95960:
              bVar7 = (byte)puVar15;
              unaff_R14 = unaff_R14 + 1;
              if (unaff_R14 <= unaff_R15) {
code_r0x000140a9596d:
                uVar29 = *(ushort *)((longlong)unaff_R13 + (longlong)puVar10);
                *(uint **)(unaff_RDI + 0x1c52) = unaff_R14;
                uVar9 = (ulonglong)(ushort)(uVar29 << 8 | uVar29 >> 8);
                *(ulonglong *)(unaff_RDI + 0x1c68) = uVar9;
                *(ulonglong *)(unaff_RDI + 0x1c6a) = uVar9;
                goto code_r0x000140a959cc;
              }
            }
          }
          else {
            *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95bf5;
            pdb_14007ee60();
            unaff_RBX = (int *)0x1c;
            *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95c09;
            pbVar32 = pub_1406abab0(0x1c,1);
            uVar11 = _UNK_1430455d9;
            if (pbVar32 == (byte *)0x0) goto code_r0x000140a95ce2;
            *(ulonglong *)(pbVar32 + 0xc) = CONCAT44(_UNK_1430455d5,_UNK_1430455d1);
            *(undefined8 *)(pbVar32 + 0x14) = uVar11;
            uVar11 = CONCAT44(_UNK_1430455d1,_UNK_1430455cd);
            *(undefined8 *)pbVar32 = _UNK_1430455c5;
            *(undefined8 *)(pbVar32 + 8) = uVar11;
            unaff_XMM7._8_8_ = _UNK_142f8bc28;
            unaff_XMM7._0_8_ = pbVar32;
            bVar7 = 0;
          }
        }
      }
      goto LAB_140a95c82;
    case 10:
      switch((ulonglong)param_2 & 0xff) {
      case 0:
        puVar13 = (uint *)0x1;
        bVar7 = 1;
        if (unaff_R14 < (uint *)0xfffffffffffffffe) {
          puVar10 = (uint *)((longlong)unaff_R14 + 2);
          bVar38 = puVar10 < unaff_R15;
          uVar39 = puVar10 == unaff_R15;
          puVar6 = puVar27;
code_r0x000140a95814:
          puVar27 = puVar6;
          bVar7 = (byte)puVar13;
          if (bVar38 || (bool)uVar39) {
            uVar29 = *(ushort *)((longlong)unaff_R13 + (longlong)unaff_R14);
            *(uint **)(unaff_RDI + 0x1c52) = puVar10;
            uVar29 = uVar29 << 8 | uVar29 >> 8;
            *(ushort *)((longlong)puVar27 + 0x5e) = uVar29;
            if (1 < uVar29) {
code_r0x000140a9583a:
              puVar13 = (uint *)((longlong)puVar10 + 5);
              if ((uint *)0xfffffffffffffffa < puVar10) {
                puVar13 = (uint *)0xffffffffffffffff;
              }
              if ((puVar13 <= unaff_R15) && (5 < uVar29)) {
                *(undefined1 *)((longlong)puVar27 + 0x5c) = 0;
                *(undefined4 *)((longlong)puVar27 + 0x58) = 0;
code_r0x000140a95864:
                puVar23 = (undefined1 *)((longlong)puVar27 + 0x58);
                *(undefined8 *)((longlong)puVar27 + -8) = 0x140a9587b;
                lVar12 = pdb_14091b8c0(unaff_RDI + 0x1c4e,puVar23,5);
                if (lVar12 != 0) {
                  *(longlong *)((longlong)puVar27 + 0x30) = lVar12;
                  *(undefined1 **)((longlong)puVar27 + 0x38) = puVar23;
                  *(undefined **)((longlong)puVar27 + 0x20) = &UNK_1430455e8;
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95cd3;
                  pdb_142dc8170(&UNK_143045328,0x2b,(undefined1 *)((longlong)puVar27 + 0x30),
                                &UNK_143045308);
                }
                if (*(int5 *)((longlong)puVar27 + 0x58) == 0x31495641) {
                  *(byte *)(unaff_RDI + 0x1c72) = 1;
                }
                uVar29 = uVar29 - 5;
                puVar10 = *(uint **)(unaff_RDI + 0x1c52);
              }
              uVar9 = (ulonglong)(ushort)(uVar29 - 2);
              if (uVar29 < 2) {
                uVar9 = 0;
              }
              *(byte **)(unaff_RDI + 0x1c52) = (byte *)(uVar9 + (longlong)puVar10);
              goto code_r0x000140a959cc;
            }
            *(undefined1 **)((longlong)puVar27 + 0x30) = (undefined1 *)((longlong)puVar27 + 0x5e);
            *(code **)((longlong)puVar27 + 0x38) = pdb_140f71140;
            *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95c68;
            pdb_140f60760((undefined1 *)((longlong)puVar27 + 0x90),&UNK_143045600,
                          (undefined1 *)((longlong)puVar27 + 0x30));
            unaff_RBX = *(int **)((longlong)puVar27 + 0x90);
            bVar7 = 0;
            unaff_XMM7 = *(undefined1 (*) [16])((longlong)puVar27 + 0x98);
          }
        }
        goto LAB_140a95c82;
      case 1:
        *(undefined8 *)((longlong)puVar27 + -8) = 0x140a959fd;
        pdb_141c1fcf0((undefined1 *)((longlong)puVar27 + 0x30));
        break;
      case 2:
        *(undefined8 *)((longlong)puVar27 + -8) = 0x140a959ee;
        pdb_141c20350((undefined1 *)((longlong)puVar27 + 0x30));
        break;
      default:
        goto LAB_140a958cc;
      case 0xe:
        *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95a0c;
        pdb_141c205d0((undefined1 *)((longlong)puVar27 + 0x30));
      }
    }
    puVar13 = (uint *)(ulonglong)*(byte *)((longlong)puVar27 + 0x30);
code_r0x000140a959c3:
    bVar7 = (byte)puVar13;
    if (bVar7 != 0xd) {
code_r0x000140a95b81:
      *(undefined4 *)((longlong)puVar27 + 0x2b) = *(undefined4 *)((longlong)puVar27 + 0x34);
      *(undefined4 *)((longlong)puVar27 + 0x28) = *(undefined4 *)((longlong)puVar27 + 0x31);
      unaff_RBX = *(int **)((longlong)puVar27 + 0x38);
      unaff_XMM7 = *(undefined1 (*) [16])((longlong)puVar27 + 0x40);
      goto LAB_140a95c82;
    }
code_r0x000140a959cc:
    unaff_R15 = *(uint **)(unaff_RDI + 0x1c50);
    unaff_R14 = *(uint **)(unaff_RDI + 0x1c52);
    iVar30 = 0;
    bVar7 = unaff_R12B;
    goto LAB_140a956b3;
  }
  param_2 = puVar34;
  if (((uint *)0xfffffffffffffffd < unaff_R14) ||
     (puVar10 = (uint *)((longlong)unaff_R14 + 2), puVar25 = puVar27, unaff_R15 < puVar10))
  goto LAB_140a95650;
code_r0x000140a9573f:
  uVar29 = *(ushort *)((longlong)unaff_R13 + (longlong)unaff_R14);
  *(uint **)(unaff_RDI + 0x1c52) = puVar10;
  uVar29 = uVar29 << 8 | uVar29 >> 8;
  puVar15 = (uint *)(ulonglong)uVar29;
  *(ushort *)((longlong)puVar25 + 0x60) = uVar29;
  puVar27 = puVar25;
  if (uVar29 < 2) {
LAB_140a95a3d:
    *(undefined1 **)((longlong)puVar27 + 0x30) = (undefined1 *)((longlong)puVar27 + 0x60);
    *(code **)((longlong)puVar27 + 0x38) = pdb_140f71140;
    *(undefined8 *)((longlong)puVar27 + -8) = 0x140a95a69;
    pdb_140f60760((undefined1 *)((longlong)puVar27 + 0x78),&UNK_14304566a,
                  (undefined1 *)((longlong)puVar27 + 0x30));
    *(undefined8 *)((longlong)puVar27 + 0x37) = *(undefined8 *)((longlong)puVar27 + 0x78);
    *(undefined8 *)((longlong)puVar27 + 0x3f) = *(undefined8 *)((longlong)puVar27 + 0x80);
    *(undefined8 *)((longlong)puVar27 + 0x47) = *(undefined8 *)((longlong)puVar27 + 0x88);
    *(byte *)puVar34 = 0;
    uVar22 = *(undefined8 *)((longlong)puVar27 + 0x38);
    puVar10 = *(uint **)((longlong)puVar27 + 0x3f);
    uVar11 = *(undefined8 *)((longlong)puVar27 + 0x47);
    *(undefined8 *)((longlong)puVar34 + 1) = *(undefined8 *)((longlong)puVar27 + 0x30);
    *(undefined8 *)((longlong)puVar34 + 9) = uVar22;
    *(uint **)(puVar34 + 4) = puVar10;
    *(undefined8 *)(puVar34 + 6) = uVar11;
    return puVar10;
  }
  goto code_r0x000140a9575f;
}

