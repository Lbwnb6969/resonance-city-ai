// VA 0x140a946d0, PDB extent 119 bytes
// country_core::render::render_config::impl$4::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001430457ef) overlaps instruction at (ram,0x0001430457ec)
    */
/* WARNING: Removing unreachable block (ram,0x000140a94d96) */
/* WARNING: Removing unreachable block (ram,0x000140a94ebc) */
/* WARNING: Removing unreachable block (ram,0x000140a953a5) */
/* WARNING: Removing unreachable block (ram,0x000140a94ed1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::render_config::impl$4::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 119 */

byte * pdb_140a946d0(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,code *UNRECOVERED_JUMPTABLE,
                    short param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
                    code *param_8,code *param_9,undefined8 param_10,byte *param_11,
                    undefined8 param_12,code *param_13,code *param_14,code *param_15,code *param_16,
                    code *param_17,code *param_18)

{
  code cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte *pbVar13;
  code *pcVar16;
  undefined *puVar17;
  code *pcVar18;
  char *pcVar19;
  undefined2 uVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  short sVar25;
  code *unaff_RBX;
  undefined6 uVar26;
  int iVar27;
  int iVar32;
  code **ppcVar33;
  code **ppcVar34;
  code **ppcVar35;
  code **ppcVar36;
  char cVar37;
  ushort uVar38;
  uint uVar39;
  code *unaff_RBP;
  code *pcVar40;
  code *unaff_RDI;
  code *pcVar41;
  code cVar42;
  code *unaff_R12;
  code *unaff_R13;
  code *unaff_R14;
  code *unaff_R15;
  bool bVar43;
  bool bVar44;
  byte bVar45;
  bool bVar46;
  code *unaff_XMM6_Qa;
  code *unaff_XMM6_Qb;
  code *unaff_XMM7_Qa;
  code *unaff_XMM7_Qb;
  code *unaff_XMM8_Qa;
  code *unaff_XMM8_Qb;
  uint unaff_retaddr;
  undefined3 unaff_retaddr_00;
  undefined1 uStackX_8;
  undefined1 uStackX_9;
  ushort uStackX_a;
  undefined1 uStackX_c;
  undefined2 uStackX_d;
  undefined1 uStackX_f;
  undefined7 uStackX_10;
  undefined1 uStackX_17;
  undefined7 uStackX_18;
  undefined1 uStackX_1f;
  undefined7 uStackX_20;
  undefined1 uStackX_27;
  undefined *puStack_30;
  code *pcStack_28;
  undefined1 auStack_20 [24];
  byte bVar14;
  undefined7 uVar15;
  byte bVar24;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  
  bVar45 = 0;
  ppcVar33 = &pcStack_28;
  ppcVar36 = &pcStack_28;
  ppcVar34 = &pcStack_28;
  iVar31 = (int)&pcStack_28;
  iVar30 = (int)&pcStack_28;
  iVar29 = (int)&pcStack_28;
  iVar28 = (int)&pcStack_28;
  iVar27 = (int)&pcStack_28;
  pcVar16 = (code *)&UNK_1430457dc;
  uVar9 = (ulonglong)*(int *)(&UNK_1430457dc + (ulonglong)*param_1 * 4);
  bVar43 = 0xfffffffebcfba823 < uVar9;
  bVar46 = SCARRY8(uVar9,0x1430457dc);
  pcVar10 = (code *)(&UNK_1430457dc + uVar9);
  bVar44 = pcVar10 == (code *)0x0;
  bVar24 = (byte)((ulonglong)UNRECOVERED_JUMPTABLE_00 >> 8);
  uVar20 = SUB82(UNRECOVERED_JUMPTABLE_00,0);
  bVar6 = (byte)pcVar10;
  iVar7 = (int)pcVar10;
  uVar15 = (undefined7)((ulonglong)pcVar10 >> 8);
  uVar26 = (undefined6)((ulonglong)unaff_RBX >> 0x10);
  uVar39 = (uint)unaff_RBP;
  bVar14 = (byte)((ulonglong)pcVar10 >> 8);
  pcVar18 = pcVar16;
  pcVar40 = UNRECOVERED_JUMPTABLE_00;
  ppcVar35 = &pcStack_28;
  pcVar41 = unaff_RDI;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar17 = &UNK_143045478;
    uVar22 = 0x13;
    break;
  case 1:
    puVar17 = &UNK_14304548b;
    uVar22 = 0x10;
    break;
  case 2:
    puVar17 = &UNK_14304549b;
    uVar22 = 0xf;
    break;
  case 3:
    puVar17 = &UNK_1430454aa;
    uVar22 = 0x14;
    break;
  case 4:
    puVar17 = &UNK_1430454be;
    uVar22 = 0xe;
    break;
  case 5:
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_1430457f0;
    goto code_r0x000140a94d27;
  case 6:
    return (byte *)CONCAT71(uVar15,10);
  case 7:
    return (byte *)CONCAT71(uVar15,3);
  default:
code_r0x000140a94d38:
    return (byte *)CONCAT71(uVar15,10);
  case 9:
    goto code_r0x000140a94d67;
  case 0x11:
    return (byte *)pcVar10;
  case 0x15:
    return (byte *)CONCAT71(uVar15,3);
  case 0x16:
    return (byte *)CONCAT71(uVar15,3);
  case 0x17:
    return (byte *)CONCAT71(uVar15,3);
  case 0x18:
    goto code_r0x000140a94d72;
  case 0x19:
    return (byte *)pcVar10;
  case 0x1a:
    pcVar16 = (code *)&UNK_1430457db;
    if (!bVar44) {
      UNK_1430457db = 0;
      goto code_r0x000140a94d38;
    }
  case 0x1f:
code_r0x000140a94d67:
    *(int *)pcVar16 = *(int *)pcVar16 + (int)UNRECOVERED_JUMPTABLE_00;
code_r0x000140a94d72:
    return (byte *)pcVar10;
  case 0x1b:
    return (byte *)CONCAT71(uVar15,10);
  case 0x1c:
    return (byte *)pcVar10;
  case 0x1d:
    goto code_r0x000140a94d27;
  case 0x1e:
    return (byte *)0x0;
  case 0x20:
    return (byte *)pcVar10;
  case 0x21:
    return (byte *)pcVar10;
  case 0x22:
    UNRECOVERED_JUMPTABLE_00 = (code *)0x430457f0;
    goto code_r0x000140a94d27;
  case 0x25:
    return (byte *)CONCAT71(uVar15,0xb);
  case 0x26:
    return (byte *)pcVar10;
  case 0x27:
code_r0x000140a94d27:
    UNRECOVERED_JUMPTABLE_00 =
         UNRECOVERED_JUMPTABLE_00 + *(int *)(UNRECOVERED_JUMPTABLE_00 + 0x50c115f70);
code_r0x000140a94d2e:
                    /* WARNING: Could not recover jumptable at 0x000140a94d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar13 = (byte *)(*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
    return pbVar13;
  case 0x33:
    return (byte *)pcVar10;
  case 0x43:
    UNRECOVERED_JUMPTABLE_00 = (code *)(ulonglong)((int)UNRECOVERED_JUMPTABLE_00 + 0x430457dc);
    goto code_r0x000140a94d2e;
  case 0x44:
    *(int *)(unaff_RDI + 0x7140) = 0x430457dc;
    ppcVar33 = &pcStack_28;
    goto code_r0x000140a94ffa;
  case 0x45:
    unaff_RDI[0x26] = (code)((byte)unaff_RDI[0x26] | bVar24);
    unaff_XMM6_Qb = _UNK_142f8bbe8;
    uStackX_9 = SUB81(UNRECOVERED_JUMPTABLE_00,0);
    pcVar10 = *(code **)(unaff_RDI + 0x7140);
    unaff_R12 = (code *)0x1;
    cVar42 = (code)0x1;
    pcVar16 = (code *)&UNK_1430454cc;
    pcVar41 = unaff_XMM6_Qb;
    if ((code *)0xfffffffffffffffd < pcVar10) goto code_r0x000140a94f17;
    unaff_R15 = *(code **)(unaff_RDI + 0x7138);
    unaff_R13 = pcVar10 + 2;
    if (*(code **)(unaff_R15 + 0x10) < unaff_R13) goto code_r0x000140a94f17;
    uVar38 = *(ushort *)(pcVar10 + *(longlong *)(unaff_R15 + 8));
    *(code **)(unaff_RDI + 0x7140) = unaff_R13;
    if (uVar38 != 0xd8ff) {
      pcVar10 = (code *)(ulonglong)(ushort)(uVar38 << 8 | uVar38 >> 8);
      cVar42 = (code)0x2;
      goto code_r0x000140a94f17;
    }
    unaff_R14 = unaff_R15 + 0x10;
    pcVar10 = (code *)0xd8ff;
    if (*(code **)unaff_R14 <= unaff_R13) goto code_r0x000140a94f17;
    unaff_XMM6_Qa = (code *)&UNK_1430454cc;
    unaff_XMM8_Qa = (code *)&UNK_143045640;
    unaff_RBP = (code *)0x0;
    unaff_RBX = (code *)0x0;
    ppcVar33 = &pcStack_28;
    unaff_XMM8_Qb = _UNK_142f8bbf8;
code_r0x000140a94ffa:
    do {
      iVar7 = (int)unaff_RBX;
      cVar42 = SUB81(unaff_R12,0);
      lVar12 = *(longlong *)(unaff_R15 + 8);
      pcVar18 = unaff_R13 + 1;
      *(code **)(unaff_RDI + 0x7140) = pcVar18;
      pcVar10 = (code *)(ulonglong)(byte)unaff_R13[lVar12];
      bVar43 = 1 < (byte)((char)unaff_R13[lVar12] + 1U);
      pcVar40 = (code *)(ulonglong)bVar43;
      cVar37 = (char)unaff_RBP;
      UNRECOVERED_JUMPTABLE =
           (code *)CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),cVar37 != -1 || bVar43);
      unaff_RBP = pcVar10;
      unaff_R13 = pcVar18;
      pcVar16 = unaff_XMM6_Qa;
      pcVar41 = unaff_XMM6_Qb;
      if (cVar37 == -1 && !bVar43) {
        do {
          uStackX_9 = SUB81(pcVar40,0);
          if (*(code **)unaff_R14 <= pcVar18) goto code_r0x000140a94f17;
          cVar37 = (char)pcVar10;
          lVar12 = *(longlong *)(unaff_R15 + 8);
          unaff_R13 = pcVar18 + 1;
          *(code **)(unaff_RDI + 0x7140) = unaff_R13;
          pcVar10 = (code *)(ulonglong)(byte)pcVar18[lVar12];
          uVar39 = (byte)pcVar18[lVar12] + 1;
          pcVar40 = (code *)(ulonglong)uVar39;
          unaff_RBP = pcVar10;
          pcVar18 = unaff_R13;
        } while ((byte)uVar39 < 2);
      }
      pcVar10 = unaff_RBP;
      if (cVar37 == -1) {
        *(undefined **)((longlong)ppcVar33 + -8) = &UNK_140a9506d;
        pcVar10 = (code *)pdb_140a94d10(unaff_RBP);
        uStackX_9 = SUB81(pcVar40,0);
        if ((char)pcVar10 == '\f') {
          cVar42 = (code)0x1;
          if (((code *)0xfffffffffffffffd < unaff_R13) ||
             (pcVar10 = unaff_R13 + 2, *(code **)unaff_R14 < pcVar10)) break;
          uVar38 = *(ushort *)(unaff_R13 + *(longlong *)(unaff_R15 + 8));
          *(code **)(unaff_RDI + 0x7140) = pcVar10;
          uVar38 = uVar38 << 8 | uVar38 >> 8;
          *(ushort *)((longlong)ppcVar33 + 0x60) = uVar38;
          if (uVar38 < 2) {
            *(undefined1 **)((longlong)ppcVar33 + 0x30) = (undefined1 *)((longlong)ppcVar33 + 0x60);
            *(code **)((longlong)ppcVar33 + 0x38) = pdb_140f71140;
            uStackX_9 = (code)0x6a;
            UNRECOVERED_JUMPTABLE = (code *)((longlong)ppcVar33 + 0x30);
            *(undefined **)((longlong)ppcVar33 + -8) = &UNK_140a95388;
            pcVar10 = (code *)pdb_140f60760();
            pcVar16 = *(code **)((longlong)ppcVar33 + 0x80);
            cVar42 = (code)0x0;
            unaff_RDI = *(code **)((longlong)ppcVar33 + 0x90);
            pcVar41 = *(code **)((longlong)ppcVar33 + 0x88);
            break;
          }
          pcVar10 = pcVar10 + (ushort)(uVar38 - 2);
          *(code **)(unaff_RDI + 0x7140) = pcVar10;
          iVar7 = 0;
          unaff_R13 = pcVar10;
        }
        else {
          if (3 < iVar7) {
            pcVar16 = unaff_XMM8_Qa;
            pcVar41 = unaff_XMM8_Qb;
            if (unaff_RDI[0x711a] != (code)0x0 || unaff_RDI[0x711b] != (code)0x0) break;
            cVar1 = unaff_RDI[0x7119];
code_r0x000140a950e6:
            uStackX_9 = SUB81(pcVar40,0);
            cVar42 = SUB81(unaff_R12,0);
            pcVar16 = unaff_XMM8_Qa;
            pcVar41 = unaff_XMM8_Qb;
            if (cVar1 != (code)0x0) break;
          }
          bVar6 = (byte)pcVar10;
          *(byte *)((longlong)ppcVar33 + 0x56) = bVar6;
          *(char *)((longlong)ppcVar33 + 0x57) = (char)pcVar40;
          if (bVar6 < 0xb) {
            pcVar16 = (code *)0x1;
            UNRECOVERED_JUMPTABLE =
                 (code *)(&UNK_1430458ec +
                         *(int *)(&UNK_1430458ec + ((ulonglong)pcVar10 & 0xff) * 4));
            goto code_r0x000140a95110;
          }
          pcVar16 = (code *)0x1;
          if (((code *)0xfffffffffffffffd < unaff_R13) ||
             (pcVar40 = unaff_R13 + 2, *(code **)unaff_R14 < pcVar40)) goto code_r0x000140a95436;
          uVar38 = *(ushort *)(unaff_R13 + *(longlong *)(unaff_R15 + 8));
          *(code **)(unaff_RDI + 0x7140) = pcVar40;
          uVar38 = uVar38 << 8 | uVar38 >> 8;
          *(ushort *)((longlong)ppcVar33 + 0x58) = uVar38;
          if (uVar38 < 2) {
            *(undefined1 **)((longlong)ppcVar33 + 0x30) = (undefined1 *)((longlong)ppcVar33 + 0x58);
            *(code **)((longlong)ppcVar33 + 0x38) = pdb_140f71140;
            pcVar40 = (code *)0x0;
            UNRECOVERED_JUMPTABLE = (code *)((longlong)ppcVar33 + 0x30);
            *(undefined **)((longlong)ppcVar33 + -8) = &UNK_140a95429;
            pcVar10 = (code *)pdb_140f60760();
            pcVar16 = (code *)0x0;
            unaff_RDI = *(code **)((longlong)ppcVar33 + 0x70);
            unaff_XMM6_Qa = *(code **)((longlong)ppcVar33 + 0x60);
            unaff_XMM6_Qb = *(code **)((longlong)ppcVar33 + 0x68);
            goto code_r0x000140a95436;
          }
          pcVar40 = pcVar40 + (ushort)(uVar38 - 2);
          *(code **)(unaff_RDI + 0x7140) = pcVar40;
          iVar7 = 0;
          unaff_R13 = pcVar40;
          if (bVar6 == 6) {
            unaff_RDI[0x71be] = (code)0x1;
            *UNRECOVERED_JUMPTABLE_00 = (code)0xd;
            return (byte *)UNRECOVERED_JUMPTABLE_00;
          }
        }
      }
code_r0x000140a94fea:
      uStackX_9 = SUB81(pcVar40,0);
      cVar42 = SUB81(unaff_R12,0);
      unaff_RBX = (code *)(ulonglong)(iVar7 + 1);
      unaff_R14 = unaff_R15 + 0x10;
      pcVar16 = unaff_XMM6_Qa;
      pcVar41 = unaff_XMM6_Qb;
    } while (unaff_R13 < *(code **)(unaff_R15 + 0x10));
code_r0x000140a94f17:
    *UNRECOVERED_JUMPTABLE_00 = cVar42;
    UNRECOVERED_JUMPTABLE_00[1] = uStackX_9;
    *(short *)(UNRECOVERED_JUMPTABLE_00 + 2) = (short)pcVar10;
    *(int *)(UNRECOVERED_JUMPTABLE_00 + 4) = (int)UNRECOVERED_JUMPTABLE;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = pcVar16;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x10) = pcVar41;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x18) = unaff_RDI;
    return (byte *)UNRECOVERED_JUMPTABLE_00;
  case 0x46:
  case 0x4c:
    *pcVar10 = (code)((char)*pcVar10 + bVar6);
    if (param_4 != 0x400) {
      puStack_30 = &UNK_140a954d4;
      pdb_14007ee60();
      unaff_RDI = (code *)0x1c;
      uStackX_9 = (code)0x1;
      puStack_30 = &UNK_140a954e8;
      pcVar10 = (code *)pub_1406abab0(0x1c,1);
      uVar22 = _UNK_1430455d9;
      if (pcVar10 == (code *)0x0) {
        puStack_30 = &UNK_140a955be;
        pdb_142dc7e2a(1,0x1c);
        pcVar40 = (code *)swi(3);
        pbVar13 = (byte *)(*pcVar40)();
        return pbVar13;
      }
      *(ulonglong *)(pcVar10 + 0xc) = CONCAT44(_UNK_1430455d5,_UNK_1430455d1);
      *(undefined8 *)(pcVar10 + 0x14) = uVar22;
      uVar22 = CONCAT44(_UNK_1430455d1,_UNK_1430455cd);
      *(undefined8 *)pcVar10 = _UNK_1430455c5;
      *(undefined8 *)(pcVar10 + 8) = uVar22;
      cVar42 = (code)0x0;
      pcVar16 = _UNK_142f8bc10;
      pcVar41 = pcVar10;
      goto code_r0x000140a94f17;
    }
    if ((pcVar10 < (code *)0xfffffffffffffffe) && (unaff_R13 + 4 <= UNRECOVERED_JUMPTABLE_00)) {
      uVar38 = *(ushort *)(UNRECOVERED_JUMPTABLE + (longlong)pcVar10);
      *(code **)(unaff_RDI + 0x7140) = unaff_R13 + 4;
      pcVar10 = (code *)(ulonglong)(ushort)(uVar38 << 8 | uVar38 >> 8);
      *(code **)(unaff_RDI + 0x7198) = pcVar10;
      *(code **)(unaff_RDI + 0x71a0) = pcVar10;
      ppcVar33 = &pcStack_28;
      goto code_r0x000140a94fda;
    }
code_r0x000140a95436:
    uStackX_9 = SUB81(pcVar40,0);
    cVar42 = SUB81(pcVar16,0);
    pcVar16 = unaff_XMM6_Qa;
    pcVar41 = unaff_XMM6_Qb;
    goto code_r0x000140a94f17;
  case 0x47:
  case 0x48:
code_r0x000140a95110:
                    /* WARNING: Could not recover jumptable at 0x000140a95110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar13 = (byte *)(*UNRECOVERED_JUMPTABLE)(pcVar16);
    return pbVar13;
  case 0x49:
    pcVar40 = (code *)((ulonglong)unaff_RDI & 0xffffffff);
    puStack_30 = &UNK_140a95336;
    pcVar10 = (code *)pdb_141c1fed0();
    goto code_r0x000140a94fcc;
  case 0x4a:
    UNK_1430457dc = (UNK_1430457dc - bVar6) - bVar43;
code_r0x000140a94fcc:
    ppcVar33 = &pcStack_28;
    if (uStackX_8 == (code)0xd) {
code_r0x000140a94fda:
      unaff_R15 = *(code **)(unaff_RDI + 0x7138);
      unaff_R13 = *(code **)(unaff_RDI + 0x7140);
      iVar7 = 0;
      goto code_r0x000140a94fea;
    }
    pcVar10 = (code *)(ulonglong)uStackX_a;
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)CONCAT13(uStackX_f,CONCAT21(uStackX_d,uStackX_c));
    pcVar16 = (code *)CONCAT17(uStackX_17,uStackX_10);
    unaff_RDI = (code *)CONCAT17(uStackX_27,uStackX_20);
    cVar42 = uStackX_8;
    pcVar41 = (code *)CONCAT17(uStackX_1f,uStackX_18);
    goto code_r0x000140a94f17;
  case 0x4b:
    goto code_r0x000140a951e1;
  case 0x4d:
    UNRECOVERED_JUMPTABLE_00[0xf] = (code)((byte)UNRECOVERED_JUMPTABLE_00[0xf] | bVar6);
    uVar38 = CONCAT11(0x1c,(char)unaff_RBX);
    *(int *)(&UNK_143045765 + uVar9) = *(int *)(&UNK_143045765 + uVar9) + -0x430457dc;
    LOCK();
    iVar31 = *(int *)(&UNK_14304584d + uVar9);
    *(int *)(&UNK_14304584d + uVar9) = iVar7;
    pcVar10 = (code *)CONCAT44((int)((ulonglong)pcVar10 >> 0x20),iVar31);
    UNLOCK();
    *pcVar10 = (code)((char)*pcVar10 + (char)iVar31);
    param_6._6_2_ = uVar38 << 8 | uVar38 >> 8;
    unaff_RBX = (code *)CONCAT62(uVar26,param_6._6_2_);
    if (param_6._6_2_ < 2) {
      lVar12 = (longlong)&param_6 + 6;
      uStackX_8 = SUB81(lVar12,0);
      uStackX_9 = SUB81((ulonglong)lVar12 >> 8,0);
      uStackX_a = (ushort)((ulonglong)lVar12 >> 0x10);
      uStackX_c = (undefined1)((ulonglong)lVar12 >> 0x20);
      uStackX_d = (undefined2)((ulonglong)lVar12 >> 0x28);
      uStackX_f = (undefined1)((ulonglong)lVar12 >> 0x38);
      uStackX_10 = 0x140f71140;
      uStackX_17 = 0;
      pcVar40 = (code *)0x0;
      UNRECOVERED_JUMPTABLE = (code *)&uStackX_8;
      puStack_30 = &UNK_140a95555;
      pcVar10 = (code *)pdb_140f60760();
      pcVar16 = (code *)0x0;
      unaff_RDI = param_17;
      unaff_XMM6_Qa = param_15;
      unaff_XMM6_Qb = param_16;
      goto code_r0x000140a95436;
    }
    ppcVar33 = &pcStack_28;
    uVar38 = param_6._6_2_;
    if (5 < param_6._6_2_) {
      pcVar16 = pcVar10 + 5;
      UNRECOVERED_JUMPTABLE = (code *)0xffffffffffffffff;
      if ((code *)0xfffffffffffffffa < pcVar10) {
        pcVar16 = (code *)0xffffffffffffffff;
      }
      ppcVar33 = &pcStack_28;
      if (pcVar16 <= UNRECOVERED_JUMPTABLE_00) {
        param_6._4_1_ = 0;
        param_6._0_2_ = 0;
        param_6._2_2_ = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x5;
        pcVar40 = (code *)&param_6;
        puStack_30 = &UNK_140a951cf;
        lVar12 = pdb_14091b830(unaff_RDI + 0x7138);
        if (lVar12 != 0) {
          uStackX_8 = SUB81(lVar12,0);
          uStackX_9 = SUB81((ulonglong)lVar12 >> 8,0);
          uStackX_a = (ushort)((ulonglong)lVar12 >> 0x10);
          uStackX_c = (undefined1)((ulonglong)lVar12 >> 0x20);
          uStackX_d = (undefined2)((ulonglong)lVar12 >> 0x28);
          uStackX_f = (undefined1)((ulonglong)lVar12 >> 0x38);
          uStackX_10 = SUB87(pcVar40,0);
          uStackX_17 = (undefined1)((ulonglong)pcVar40 >> 0x38);
                    /* WARNING: Subroutine does not return */
          puStack_30 = &UNK_140a955a0;
          pdb_142dc8170(&UNK_143045328,0x2b,&uStackX_8,&UNK_143045308);
        }
        pcStack_28 = (code *)(ulonglong)CONCAT22(param_6._2_2_,(ushort)param_6);
        goto code_r0x000140a951dc;
      }
    }
    goto code_r0x000140a95202;
  case 0x4e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4f:
    return (byte *)((ulonglong)unaff_RBX & 0xffffffff);
  case 0x50:
    *(ulonglong *)(unaff_R13 + 7) =
         *(ulonglong *)(unaff_R13 + 7) ^ (ulonglong)UNRECOVERED_JUMPTABLE_00;
    goto code_r0x000140a951f1;
  case 0x51:
    ppcVar34 = (code **)auStack_20;
code_r0x000140a951dc:
    pcVar16 = (code *)(ulonglong)*(byte *)((longlong)ppcVar34 + 0x5c);
    pcVar10 = pcStack_28;
    ppcVar35 = ppcVar34;
    goto code_r0x000140a951e1;
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
    *pcVar10 = (code)((char)*pcVar10 + bVar6);
    cVar1 = *pcVar10;
    goto code_r0x000140a950e6;
  case 0x5d:
    UNRECOVERED_JUMPTABLE_00[-0x7d] = (code)((char)UNRECOVERED_JUMPTABLE_00[-0x7d] + bVar14);
    *pcVar10 = (code)((char)*pcVar10 + bVar6);
    *unaff_RDI = (code)((char)*unaff_RDI - 0x24);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5e:
    *(int *)(unaff_RBP + 0x1b) = *(int *)(unaff_RBP + 0x1b) << 1;
LAB_140a95650:
    *UNRECOVERED_JUMPTABLE_00 = (code)0x1;
    *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 8) = &UNK_1430454cc;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10) = 0xd;
    return &UNK_1430454cc;
  case 0x5f:
    unaff_RBX[0xf] = (code)((char)unaff_RBX[0xf] + bVar6);
    UNRECOVERED_JUMPTABLE_00[-0x3f] =
         (code)((char)UNRECOVERED_JUMPTABLE_00[-0x3f] + (bVar14 ^ 0x48));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x60:
  case 0x66:
    LOCK();
    uVar2 = *(undefined4 *)(&UNK_14304584d + uVar9);
    *(undefined4 *)(&UNK_14304584d + uVar9) = 0x430457dc;
    pcVar19 = (char *)CONCAT44(1,uVar2);
    UNLOCK();
    *pcVar10 = (code)((char)*pcVar10 + bVar6);
    pcVar40 = UNRECOVERED_JUMPTABLE_00;
code_r0x000140a9594b:
    if ((short)pcVar40 == 0x400) {
      if ((pcVar10 < (code *)0xfffffffffffffffe) && (unaff_R14 + 4 <= unaff_R15)) {
        uVar38 = *(ushort *)(unaff_R13 + (longlong)pcVar10);
        *(code **)(unaff_RDI + 29000) = unaff_R14 + 4;
        uVar9 = (ulonglong)(ushort)(uVar38 << 8 | uVar38 >> 8);
        *(ulonglong *)(unaff_RDI + 0x71a0) = uVar9;
        *(ulonglong *)(unaff_RDI + 0x71a8) = uVar9;
code_r0x000140a959cc:
        unaff_R15 = *(code **)(unaff_RDI + 0x7140);
code_r0x000140a959d3:
        unaff_R14 = *(code **)(unaff_RDI + 29000);
        unaff_RBP = (code *)0x0;
        while( true ) {
          while( true ) {
            do {
              uVar39 = (int)unaff_RBP + 1;
              unaff_RBP = (code *)(ulonglong)uVar39;
              if (unaff_R15 <= unaff_R14) goto LAB_140a95650;
              cVar37 = (char)unaff_R12;
              unaff_R13 = *(code **)(unaff_RDI + 0x7138);
              pcVar40 = unaff_R14 + 1;
              *(code **)(unaff_RDI + 29000) = pcVar40;
              unaff_R12 = (code *)(ulonglong)(byte)unaff_R13[(longlong)unaff_R14];
              bVar43 = 1 < (byte)((char)unaff_R13[(longlong)unaff_R14] + 1U);
              uVar21 = (uint)bVar43;
              unaff_R14 = pcVar40;
              if (cVar37 == -1 && !bVar43) {
                do {
                  if (unaff_R15 <= pcVar40) goto LAB_140a95650;
                  cVar37 = (char)unaff_R12;
                  unaff_R14 = pcVar40 + 1;
                  *(code **)(unaff_RDI + 29000) = unaff_R14;
                  unaff_R12 = (code *)(ulonglong)(byte)unaff_R13[(longlong)pcVar40];
                  uVar21 = (byte)unaff_R13[(longlong)pcVar40] + 1;
                  pcVar40 = unaff_R14;
                } while ((byte)uVar21 < 2);
              }
              pcVar40 = (code *)(ulonglong)uVar21;
            } while (cVar37 != -1);
            puStack_30 = (undefined *)0x140a95724;
            pcVar16 = unaff_R12;
            pcVar10 = (code *)pdb_140a94d10(unaff_R12);
            bVar6 = (byte)pcVar10;
            if (bVar6 != 0xc) break;
code_r0x000140a95728:
            if (((code *)0xfffffffffffffffd < unaff_R14) ||
               (pcVar40 = unaff_R14 + 2, unaff_R15 < pcVar40)) goto LAB_140a95650;
            uVar38 = *(ushort *)(unaff_R13 + (longlong)unaff_R14);
            *(code **)(unaff_RDI + 29000) = pcVar40;
            param_7._0_2_ = uVar38 << 8 | uVar38 >> 8;
            if ((ushort)param_7 < 2) {
              uStackX_8 = SUB81(&param_7,0);
              uStackX_9 = SUB81((ulonglong)&param_7 >> 8,0);
              uStackX_a = (ushort)((ulonglong)&param_7 >> 0x10);
              uStackX_c = (undefined1)((ulonglong)&param_7 >> 0x20);
              uStackX_d = (undefined2)((ulonglong)&param_7 >> 0x28);
              uStackX_f = (undefined1)((ulonglong)&param_7 >> 0x38);
              uStackX_10 = 0x140f71140;
              uStackX_17 = 0;
              puStack_30 = (undefined *)0x140a95a69;
              pdb_140f60760(&param_10,&UNK_14304566a,&uStackX_8);
              uStackX_f = (undefined1)param_10;
              uStackX_10 = (undefined7)((ulonglong)param_10 >> 8);
              uStackX_17 = SUB81(param_11,0);
              *UNRECOVERED_JUMPTABLE_00 = (code)0x0;
              *(ulonglong *)(UNRECOVERED_JUMPTABLE_00 + 1) =
                   CONCAT17(uStackX_f,
                            CONCAT25(uStackX_d,
                                     CONCAT14(uStackX_c,
                                              CONCAT22(uStackX_a,CONCAT11(uStackX_9,uStackX_8)))));
              *(ulonglong *)(UNRECOVERED_JUMPTABLE_00 + 9) = CONCAT17(uStackX_17,uStackX_10);
              *(byte **)(UNRECOVERED_JUMPTABLE_00 + 0x10) = param_11;
              *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x18) = param_12;
              return param_11;
            }
            unaff_R14 = pcVar40 + (ushort)((ushort)param_7 - 2);
            *(code **)(unaff_RDI + 29000) = unaff_R14;
            unaff_RBP = (code *)0x0;
          }
          if ((3 < (int)uVar39) &&
             ((unaff_RDI[0x711a] != (code)0x0 || unaff_RDI[0x711b] != (code)0x0 ||
              (pcVar16 = (code *)0x0, unaff_RDI[0x7119] != (code)0x0)))) {
            *UNRECOVERED_JUMPTABLE_00 = (code)0x1;
            *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 8) = &UNK_143045640;
            *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10) = 0x2a;
            return &UNK_143045640;
          }
          param_5._7_1_ = SUB81(pcVar40,0);
          param_5._6_1_ = bVar6;
          if (bVar6 < 0xb) break;
LAB_140a958cc:
          pcVar19 = (char *)0x1;
          if (((code *)0xfffffffffffffffd < unaff_R14) ||
             (pcVar40 = unaff_R14 + 2, unaff_R15 < pcVar40)) goto LAB_140a95c82;
          uVar38 = *(ushort *)(unaff_R13 + (longlong)unaff_R14);
          *(code **)(unaff_RDI + 29000) = pcVar40;
          param_6._0_2_ = uVar38 << 8 | uVar38 >> 8;
          if ((ushort)param_6 < 2) {
            uStackX_8 = SUB81(&param_6,0);
            uStackX_9 = SUB81((ulonglong)&param_6 >> 8,0);
            uStackX_a = (ushort)((ulonglong)&param_6 >> 0x10);
            uStackX_c = (undefined1)((ulonglong)&param_6 >> 0x20);
            uStackX_d = (undefined2)((ulonglong)&param_6 >> 0x28);
            uStackX_f = (undefined1)((ulonglong)&param_6 >> 0x38);
            uStackX_10 = 0x140f71140;
            uStackX_17 = 0;
            puStack_30 = (undefined *)0x140a95b3d;
            pdb_140f60760(&param_7,&UNK_143045600,&uStackX_8);
            pcVar19 = (char *)0x0;
            unaff_RBX = (code *)CONCAT62(param_7._2_6_,(ushort)param_7);
            unaff_XMM7_Qa = param_8;
            unaff_XMM7_Qb = param_9;
            goto LAB_140a95c82;
          }
          unaff_R14 = pcVar40 + (ushort)((ushort)param_6 - 2);
          *(code **)(unaff_RDI + 29000) = unaff_R14;
          unaff_RBP = (code *)0x0;
          if ((char)pcVar10 == '\x06') {
LAB_140a95b72:
            unaff_RDI[0x71c6] = (code)0x1;
            *UNRECOVERED_JUMPTABLE_00 = (code)0xd;
            return (byte *)pcVar10;
          }
        }
code_r0x000140a957ae:
        pcVar19 = (char *)CONCAT71((int7)((ulonglong)pcVar16 >> 8),1);
        bVar44 = (longlong)
                 (&UNK_143045954 + *(int *)(&UNK_143045954 + ((ulonglong)pcVar10 & 0xff) * 4)) < 0;
        pcVar16 = UNRECOVERED_JUMPTABLE_00;
        pcVar41 = unaff_RDI;
        bVar43 = bVar44;
        iVar7 = (int)&pcStack_28;
        iVar3 = (int)&pcStack_28;
        iVar4 = (int)&pcStack_28;
        iVar5 = (int)&pcStack_28;
        iVar32 = (int)&pcStack_28;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((ulonglong)pcVar10 & 0xff) {
        case 0:
          goto code_r0x000140a957c5;
        case 1:
          puStack_30 = (undefined *)0x140a9599e;
          pdb_141c20950(&uStackX_8);
          goto code_r0x000140a959be;
        case 2:
        case 8:
          lVar12 = (longlong)&param_5 + 6;
          uStackX_8 = SUB81(lVar12,0);
          uStackX_9 = SUB81((ulonglong)lVar12 >> 8,0);
          uStackX_a = (ushort)((ulonglong)lVar12 >> 0x10);
          uStackX_c = (undefined1)((ulonglong)lVar12 >> 0x20);
          uStackX_d = (undefined2)((ulonglong)lVar12 >> 0x28);
          uStackX_f = (undefined1)((ulonglong)lVar12 >> 0x38);
          uStackX_10 = 0x140a93d70;
          uStackX_17 = 0;
          puStack_30 = (undefined *)0x140a95aed;
          pdb_140f60760(&param_16,&UNK_14304557e,&uStackX_8);
          pcVar19 = (char *)0x0;
          unaff_RBX = param_16;
          unaff_XMM7_Qa = param_17;
          unaff_XMM7_Qb = param_18;
          goto LAB_140a95c82;
        case 3:
        case 4:
          goto LAB_140a958cc;
        case 5:
          unaff_RBX = (code *)&UNK_143045568;
          unaff_XMM7_Qa = unaff_XMM6_Qa;
          unaff_XMM7_Qb = unaff_XMM6_Qb;
          goto LAB_140a95c82;
        case 6:
          puStack_30 = (undefined *)0x140a95b68;
          pcVar10 = (code *)pdb_141c23610(&uStackX_8);
          if (uStackX_8 == (code)0xd) goto LAB_140a95b72;
          goto code_r0x000140a95b81;
        case 7:
          puStack_30 = (undefined *)0x140a959ad;
          pdb_141c22560(&uStackX_8);
          goto code_r0x000140a959be;
        case 9:
          if (((code *)0xfffffffffffffffd < unaff_R14) ||
             (pcVar10 = unaff_R14 + 2, unaff_R15 < pcVar10)) goto LAB_140a95c82;
          pcVar40 = (code *)(ulonglong)*(ushort *)(unaff_R13 + (longlong)unaff_R14);
          *(code **)(unaff_RDI + 29000) = pcVar10;
          goto code_r0x000140a9594b;
        case 10:
          switch((ulonglong)pcVar40 & 0xff) {
          case 0:
            pcVar19 = (char *)0x1;
            if (((code *)0xfffffffffffffffd < unaff_R14) ||
               (pcVar10 = unaff_R14 + 2, unaff_R15 < pcVar10)) goto LAB_140a95c82;
            uVar38 = *(ushort *)(unaff_R13 + (longlong)unaff_R14);
            *(code **)(unaff_RDI + 29000) = pcVar10;
            unaff_RBP = (code *)(ulonglong)(ushort)(uVar38 << 8 | uVar38 >> 8);
code_r0x000140a9582b:
            param_6._6_2_ = (ushort)unaff_RBP;
            pcVar18 = pcVar10;
            if (param_6._6_2_ < 2) {
              lVar12 = (longlong)&param_6 + 6;
              uStackX_8 = SUB81(lVar12,0);
              uStackX_9 = SUB81((ulonglong)lVar12 >> 8,0);
              uStackX_a = (ushort)((ulonglong)lVar12 >> 0x10);
              uStackX_c = (undefined1)((ulonglong)lVar12 >> 0x20);
              uStackX_d = (undefined2)((ulonglong)lVar12 >> 0x28);
              uStackX_f = (undefined1)((ulonglong)lVar12 >> 0x38);
              uStackX_10 = 0x140f71140;
              uStackX_17 = 0;
              puStack_30 = (undefined *)0x140a95c68;
              pdb_140f60760(&param_13,&UNK_143045600,&uStackX_8);
              pcVar19 = (char *)0x0;
              unaff_RBX = param_13;
              unaff_XMM7_Qa = param_14;
              unaff_XMM7_Qb = param_15;
              goto LAB_140a95c82;
            }
code_r0x000140a9583d:
            pcVar16 = pcVar18 + 5;
            if ((code *)0xfffffffffffffffa < pcVar18) {
              pcVar16 = (code *)0xffffffffffffffff;
            }
code_r0x000140a9584c:
            uVar38 = (ushort)unaff_RBP;
            if ((pcVar16 <= unaff_R15) && (5 < uVar38)) {
              param_6._4_1_ = 0;
              param_6._0_2_ = 0;
              param_6._2_2_ = 0;
code_r0x000140a95864:
              puVar23 = &param_6;
              puStack_30 = (undefined *)0x140a9587b;
              lVar12 = pdb_14091b8c0(unaff_RDI + 0x7138,puVar23,5);
              if (lVar12 != 0) {
                uStackX_8 = SUB81(lVar12,0);
                uStackX_9 = SUB81((ulonglong)lVar12 >> 8,0);
                uStackX_a = (ushort)((ulonglong)lVar12 >> 0x10);
                uStackX_c = (undefined1)((ulonglong)lVar12 >> 0x20);
                uStackX_d = (undefined2)((ulonglong)lVar12 >> 0x28);
                uStackX_f = (undefined1)((ulonglong)lVar12 >> 0x38);
                uStackX_10 = SUB87(puVar23,0);
                uStackX_17 = (undefined1)((ulonglong)puVar23 >> 0x38);
                    /* WARNING: Subroutine does not return */
                puStack_30 = (undefined *)0x140a95cd3;
                pdb_142dc8170(&UNK_143045328,0x2b,&uStackX_8,&UNK_143045308);
              }
              if (CONCAT14(param_6._4_1_,CONCAT22(param_6._2_2_,(ushort)param_6)) == 0x31495641) {
                unaff_RDI[0x71c8] = (code)0x1;
              }
code_r0x000140a958a4:
              uVar38 = (short)unaff_RBP - 5;
              pcVar10 = *(code **)(unaff_RDI + 29000);
            }
            uVar9 = (ulonglong)(ushort)(uVar38 - 2);
            if (uVar38 < 2) {
              uVar9 = 0;
            }
            *(code **)(unaff_RDI + 29000) = pcVar10 + uVar9;
            break;
          case 1:
            puStack_30 = (undefined *)0x140a959fd;
            pdb_141c1fcf0(&uStackX_8);
            goto code_r0x000140a959be;
          case 2:
            pcVar16 = (code *)&uStackX_8;
code_r0x000140a959e6:
            puStack_30 = (undefined *)0x140a959ee;
            pdb_141c20350(pcVar16);
code_r0x000140a959be:
            if (uStackX_8 != (code)0xd) {
code_r0x000140a95b81:
              pcVar19 = (char *)(ulonglong)(byte)uStackX_8;
              unaff_retaddr = CONCAT13(uStackX_c,CONCAT21(uStackX_a,uStackX_9));
              unaff_retaddr_00 =
                   (undefined3)(CONCAT13(uStackX_f,CONCAT21(uStackX_d,uStackX_c)) >> 8);
              unaff_XMM7_Qa = (code *)CONCAT17(uStackX_1f,uStackX_18);
              unaff_XMM7_Qb = (code *)CONCAT17(uStackX_27,uStackX_20);
              unaff_RBX = (code *)CONCAT17(uStackX_17,uStackX_10);
              goto LAB_140a95c82;
            }
            break;
          default:
            goto LAB_140a958cc;
          case 0xe:
            puStack_30 = (undefined *)0x140a95a0c;
            pdb_141c205d0(&uStackX_8);
            goto code_r0x000140a959be;
          }
          goto code_r0x000140a959cc;
        case 0xb:
          *pcVar10 = (code)((char)*pcVar10 + (char)pcVar10);
code_r0x000140a957d7:
          unaff_RDI[0x71c5] = (code)0x1;
code_r0x000140a959b1:
          pcVar19 = &uStackX_8;
code_r0x000140a959b9:
          puStack_30 = (undefined *)0x140a959be;
          pdb_141c21da0(pcVar19);
          goto code_r0x000140a959be;
        case 0xc:
          goto code_r0x000140a959c4;
        case 0xd:
          pcVar19[-0x77] = pcVar19[-0x77] ^ 1;
          goto code_r0x000140a959b9;
        default:
          *pcVar19 = *pcVar19 + (char)pcVar10;
          goto code_r0x000140a958a4;
        case 0x19:
          goto code_r0x000140a959d3;
        case 0x1a:
        case 0x1b:
        case 0x20:
        case 0x40:
          goto code_r0x000143045954;
        case 0x1c:
        case 0x3f:
        case 0x41:
        case 0x42:
          pcVar40 = unaff_RBP + (longlong)unaff_RDI * 8 + -0x25affc3;
          *pcVar40 = (code)((char)*pcVar40 + 1);
          bVar44 = (char)*pcVar40 < '\0';
          break;
        case 0x1d:
        case 0x1e:
          goto code_r0x000143045956;
        case 0x1f:
          goto code_r0x000143045957;
        case 0x21:
        case 0x26:
          goto code_r0x000143045958;
        case 0x22:
          pcVar40 = unaff_RBP + -0x5afe9503;
          *pcVar40 = (code)((char)*pcVar40 + (char)((ulonglong)pcVar10 >> 8));
          bVar44 = (char)*pcVar40 < '\0';
          iVar32 = (int)&pcStack_28;
          goto code_r0x00014304595f;
        case 0x23:
        case 0x24:
          pcVar41 = unaff_RDI + 4;
          pcVar16 = UNRECOVERED_JUMPTABLE_00 + 4;
          *(int *)unaff_RDI = *(int *)UNRECOVERED_JUMPTABLE_00;
        case 0x25:
          bVar45 = 1;
          break;
        case 0x27:
        case 0x2c:
          break;
        case 0x28:
          goto code_r0x00014304595d;
        case 0x29:
        case 0x2a:
          goto code_r0x00014304595e;
        case 0x2b:
          goto code_r0x00014304595f;
        case 0x2d:
        case 0x32:
          goto code_r0x000143045960;
        case 0x2e:
          goto code_r0x000143045961;
        case 0x2f:
        case 0x30:
          goto code_r0x000143045962;
        case 0x31:
          goto code_r0x000143045963;
        case 0x33:
        case 0x38:
          goto code_r0x000143045964;
        case 0x34:
          goto code_r0x000143045965;
        case 0x35:
        case 0x36:
          goto code_r0x000143045966;
        case 0x37:
          goto code_r0x000143045967;
        case 0x39:
        case 0x3e:
          goto code_r0x000143045968;
        case 0x3a:
          goto code_r0x000143045969;
        case 0x3b:
        case 0x3c:
          *(int *)unaff_RDI = *(int *)UNRECOVERED_JUMPTABLE_00;
        case 0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar31 = (int)&puStack_30;
        puStack_30 = (undefined *)0x1;
code_r0x00014304595e:
        unaff_RDI = pcVar41 + (ulonglong)bVar45 * -8 + 4;
        UNRECOVERED_JUMPTABLE_00 = pcVar16 + (ulonglong)bVar45 * -8 + 4;
        *(int *)pcVar41 = *(int *)pcVar16;
        iVar32 = iVar31;
code_r0x00014304595f:
        bVar45 = 1;
        iVar5 = iVar32;
code_r0x000143045960:
        iVar30 = iVar5;
        pcVar16 = UNRECOVERED_JUMPTABLE_00;
        pcVar41 = unaff_RDI;
        bVar43 = false;
        if (bVar44) {
code_r0x000143045961:
                    /* WARNING: Could not recover jumptable at 0x000143045961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pbVar13 = (byte *)(**(code **)(unaff_RBP + (longlong)unaff_RDI * 8 + -0x25b0088))();
          return pbVar13;
        }
code_r0x000143045962:
        bVar44 = bVar43;
        unaff_RDI = pcVar41 + (ulonglong)bVar45 * -2 + 1;
        UNRECOVERED_JUMPTABLE_00 = pcVar16 + (ulonglong)bVar45 * -2 + 1;
        *pcVar41 = *pcVar16;
        iVar4 = iVar30;
        goto code_r0x000143045963;
      }
    }
    else {
      puStack_30 = (undefined *)0x140a95bf5;
      pdb_14007ee60();
      puStack_30 = (undefined *)0x140a95c09;
      unaff_XMM7_Qa = (code *)pub_1406abab0(0x1c,1);
      uVar22 = _UNK_1430455d9;
      if (unaff_XMM7_Qa == (code *)0x0) {
code_r0x000140a95ce2:
        puStack_30 = (undefined *)0x140a95cf1;
        pdb_142dc7e2a(1,0x1c);
        pcVar40 = (code *)swi(3);
        pbVar13 = (byte *)(*pcVar40)();
        return pbVar13;
      }
      *(ulonglong *)(unaff_XMM7_Qa + 0xc) = CONCAT44(_UNK_1430455d5,_UNK_1430455d1);
      *(undefined8 *)(unaff_XMM7_Qa + 0x14) = uVar22;
      uVar22 = CONCAT44(_UNK_1430455d1,_UNK_1430455cd);
      *(undefined8 *)unaff_XMM7_Qa = _UNK_1430455c5;
      *(undefined8 *)(unaff_XMM7_Qa + 8) = uVar22;
      pcVar19 = (char *)0x0;
      unaff_RBX = (code *)0x1c;
      unaff_XMM7_Qb = _UNK_142f8bc28;
    }
LAB_140a95c82:
    *UNRECOVERED_JUMPTABLE_00 = SUB81(pcVar19,0);
    *(uint *)(UNRECOVERED_JUMPTABLE_00 + 1) = unaff_retaddr;
    *(int *)(UNRECOVERED_JUMPTABLE_00 + 4) =
         CONCAT31(unaff_retaddr_00,(char)(unaff_retaddr >> 0x18));
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = unaff_RBX;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x10) = unaff_XMM7_Qa;
    *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x18) = unaff_XMM7_Qb;
    return (byte *)(ulonglong)unaff_retaddr;
  case 0x61:
  case 0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 99:
    UNK_1430457dc = UNK_1430457dc + bVar24;
    in(uVar20);
    goto code_r0x000140a959d3;
  case 100:
    goto code_r0x000140a959e6;
  case 0x65:
    unaff_RBP = (code *)(ulonglong)(uVar39 << 8 | uVar39 >> 0x18);
    goto code_r0x000140a9582b;
  case 0x67:
    *(int *)(unaff_RDI + 0x143045792) = *(int *)(unaff_RDI + 0x143045792) + iVar7;
    pcVar40 = unaff_RBP + 0x50c115f7d;
    *pcVar40 = (code)((byte)*pcVar40 >> 1 | (char)*pcVar40 << 7);
    *(int *)(unaff_RBX + 2) = *(int *)(unaff_RBX + 2) + (int)unaff_RBX;
    pcVar40 = UNRECOVERED_JUMPTABLE_00;
    goto code_r0x000140a957ae;
  case 0x68:
    goto code_r0x000140a9566d;
  case 0x69:
    (&UNK_1430457a3)[uVar9] = (&UNK_1430457a3)[uVar9] | 0xdc;
    cRam0000000129a95667 = cRam0000000129a95667 + (char)param_4;
    pcVar19 = (char *)((ulonglong)(uint)(iVar7 + *(int *)pcVar10) - 0x75);
    *pcVar19 = *pcVar19 + -0x24;
code_r0x000140a9566d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6a:
    goto code_r0x000140a9584c;
  case 0x6b:
    goto code_r0x000140a9583d;
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
    goto code_r0x000140a95728;
  case 0x77:
    unaff_RBX = (code *)CONCAT62(uVar26,CONCAT11((char)((ulonglong)unaff_RBX >> 8) + bVar6,
                                                 (char)unaff_RBX));
    pcVar19 = (char *)((ulonglong)pcVar10 & 0xffffffffffffff58);
    *pcVar19 = *pcVar19 + (char)pcVar19;
    *pcVar19 = *pcVar19 + (char)pcVar19;
    goto code_r0x000140a95864;
  case 0x78:
  case 0x79:
  case 0x7e:
  case 0x9e:
    goto code_r0x0001430457e4;
  case 0x7a:
  case 0x9d:
  case 0x9f:
  case 0xa0:
    out(uVar20,iVar7);
  case 0x7b:
  case 0x7c:
    pcVar41 = unaff_RDI + 1;
    pcVar40 = UNRECOVERED_JUMPTABLE_00 + 1;
    *unaff_RDI = *UNRECOVERED_JUMPTABLE_00;
code_r0x0001430457df:
    bVar45 = 1;
code_r0x0001430457e0:
    out(uVar20,iVar7);
  case 0x81:
  case 0x82:
code_r0x0001430457e2:
    unaff_RDI = pcVar41 + (ulonglong)bVar45 * -2 + 1;
    UNRECOVERED_JUMPTABLE_00 = pcVar40 + (ulonglong)bVar45 * -2 + 1;
    *pcVar41 = *pcVar40;
code_r0x0001430457e3:
    bVar45 = 1;
code_r0x0001430457e4:
    unaff_RBP = (code *)(ulonglong)(uVar39 - (int)unaff_RDI);
    pcVar40 = UNRECOVERED_JUMPTABLE_00;
    pcVar41 = unaff_RDI;
code_r0x0001430457e6:
    unaff_RDI = pcVar41 + (ulonglong)bVar45 * -2 + 1;
    UNRECOVERED_JUMPTABLE_00 = pcVar40 + (ulonglong)bVar45 * -2 + 1;
    *pcVar41 = *pcVar40;
code_r0x0001430457e7:
    bVar45 = 1;
code_r0x0001430457e8:
    bVar43 = (uint)unaff_RDI < (uint)unaff_RBP;
    pcVar40 = UNRECOVERED_JUMPTABLE_00;
    pcVar41 = unaff_RDI;
code_r0x0001430457ea:
    unaff_RDI = pcVar41 + (ulonglong)bVar45 * -2 + 1;
    UNRECOVERED_JUMPTABLE_00 = pcVar40 + (ulonglong)bVar45 * -2 + 1;
    *pcVar41 = *pcVar40;
code_r0x0001430457eb:
    do {
      bVar45 = 1;
code_r0x0001430457ec:
      uVar39 = (uint)bVar43;
      uVar8 = (uint)pcVar10;
      uVar21 = uVar8 + 0xbf025b11;
      bVar43 = uVar8 < 0x40fda4ef || uVar21 < uVar39;
      bVar46 = SBORROW4(uVar8,0x40fda4ef) != SBORROW4(uVar21,uVar39);
      pcVar10 = (code *)(ulonglong)(uVar21 - uVar39);
      bVar44 = uVar21 - uVar39 == 0;
      pcVar40 = UNRECOVERED_JUMPTABLE_00;
      pcVar41 = unaff_RDI;
code_r0x0001430457f1:
      bVar43 = !bVar43;
code_r0x0001430457f2:
      while( true ) {
        unaff_RDI = pcVar41 + (ulonglong)bVar45 * -2 + 1;
        UNRECOVERED_JUMPTABLE_00 = pcVar40 + (ulonglong)bVar45 * -2 + 1;
        *pcVar41 = *pcVar40;
code_r0x0001430457f3:
        if (bVar43 || bVar44) break;
        pcVar41 = unaff_RDI + -1;
        pcVar40 = UNRECOVERED_JUMPTABLE_00 + -1;
        *unaff_RDI = *UNRECOVERED_JUMPTABLE_00;
        if (bVar46) {
          *pcVar41 = *pcVar40;
          unaff_RDI[-2] = UNRECOVERED_JUMPTABLE_00[-2];
          pcVar40 = (code *)((ulonglong)unaff_RBP & 0xffffffff);
          unaff_RDI[-3] = *pcVar40;
          unaff_RDI[-4] = pcVar40[-1];
          unaff_RDI[-5] = pcVar40[-2];
          unaff_RDI[-6] = pcVar40[-3];
          unaff_RDI[-7] = pcVar40[-4];
          unaff_RDI[-8] = pcVar40[-5];
          unaff_RDI[-9] = pcVar40[-6];
          unaff_RDI[-10] = pcVar40[-7];
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
code_r0x0001430457ef:
        bVar45 = 1;
code_r0x0001430457f0:
        bVar43 = bVar43 == false;
      }
    } while( true );
  case 0x7d:
    goto code_r0x0001430457df;
  case 0x7f:
  case 0x84:
    goto code_r0x0001430457e0;
  case 0x80:
    out(uVar20,iVar7);
    goto code_r0x0001430457e2;
  case 0x83:
    goto code_r0x0001430457e3;
  case 0x85:
  case 0x8a:
    goto code_r0x0001430457e4;
  case 0x86:
    out(uVar20,iVar7);
  case 0x87:
  case 0x88:
    goto code_r0x0001430457e6;
  case 0x89:
    goto code_r0x0001430457e7;
  case 0x8b:
  case 0x90:
    goto code_r0x0001430457e8;
  case 0x8c:
    out(uVar20,iVar7);
  case 0x8d:
  case 0x8e:
    goto code_r0x0001430457ea;
  case 0x8f:
    goto code_r0x0001430457eb;
  case 0x91:
  case 0x96:
    goto code_r0x0001430457ec;
  case 0x92:
    out(uVar20,iVar7);
  case 0x93:
  case 0x94:
    pcVar41 = unaff_RDI + 1;
    pcVar40 = UNRECOVERED_JUMPTABLE_00 + 1;
    *unaff_RDI = *UNRECOVERED_JUMPTABLE_00;
  case 0x95:
    goto code_r0x0001430457ef;
  case 0x97:
  case 0x9c:
    goto code_r0x0001430457f0;
  case 0x98:
    goto code_r0x0001430457f1;
  case 0x99:
  case 0x9a:
    goto code_r0x0001430457f2;
  case 0x9b:
    goto code_r0x0001430457f3;
  }
  puStack_30 = (undefined *)0x140a94734;
  uVar11 = pdb_140dc6290(puVar17,uVar22);
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar13 = (byte *)(**(code **)(*(longlong *)(UNRECOVERED_JUMPTABLE_00 + 8) + 0x18))
                              (*(undefined8 *)UNRECOVERED_JUMPTABLE_00,uVar11,uVar22,
                               *(code **)(*(longlong *)(UNRECOVERED_JUMPTABLE_00 + 8) + 0x18));
  return pbVar13;
code_r0x000140a959c4:
  uVar39 = (uint)pcVar10 | 0x1b5850f;
  *(char *)(ulonglong)uVar39 = *(char *)(ulonglong)uVar39 + (char)uVar39;
  goto code_r0x000140a959cc;
code_r0x000140a957c5:
  if ((byte)pcVar40 < 3) {
    if ((byte)pcVar40 == 2) goto code_r0x000140a957d7;
    goto code_r0x000140a959b1;
  }
  puStack_30 = (undefined *)0x140a95ba6;
  pdb_14007ee60();
  unaff_RBX = (code *)0x18;
  puStack_30 = (undefined *)0x140a95bba;
  unaff_XMM7_Qa = (code *)pub_1406abab0(0x18,1);
  uVar22 = _UNK_143045558;
  if (unaff_XMM7_Qa != (code *)0x0) {
    *(undefined8 *)unaff_XMM7_Qa = _UNK_143045550;
    *(undefined8 *)(unaff_XMM7_Qa + 8) = uVar22;
    *(undefined8 *)(unaff_XMM7_Qa + 0x10) = 0x74616d726f662065;
    pcVar19 = (char *)0x0;
    unaff_XMM7_Qb = _UNK_142f8bc38;
    goto LAB_140a95c82;
  }
  puStack_30 = (undefined *)0x140a95ce2;
  pdb_142dc7e2a(1,0x18);
  goto code_r0x000140a95ce2;
code_r0x000140a951e1:
  sVar25 = (short)unaff_RBX;
  ppcVar36 = ppcVar35;
  if (((longlong)pcVar16 << 0x20 | (ulonglong)pcVar10) == 0x31495641) {
code_r0x000140a951f1:
    sVar25 = (short)unaff_RBX;
    unaff_RDI[0x71c0] = (code)0x1;
  }
  pcVar10 = *(code **)(unaff_RDI + 0x7140);
  ppcVar33 = ppcVar36;
  uVar38 = sVar25 - 5;
code_r0x000140a95202:
  uVar9 = (ulonglong)(ushort)(uVar38 - 2);
  if (uVar38 < 2) {
    uVar9 = 0;
  }
  *(code **)(unaff_RDI + 0x7140) = pcVar10 + uVar9;
  goto code_r0x000140a94fda;
code_r0x000143045954:
  do {
  } while (!SCARRY8((longlong)*(int *)(&UNK_143045954 + ((ulonglong)pcVar10 & 0xff) * 4),0x143045954
                   ));
code_r0x000143045956:
  pcVar41 = unaff_RDI + 1;
  pcVar16 = UNRECOVERED_JUMPTABLE_00 + 1;
  *unaff_RDI = *UNRECOVERED_JUMPTABLE_00;
code_r0x000143045957:
code_r0x000143045958:
  UNRECOVERED_JUMPTABLE_00 = pcVar16;
  unaff_RDI = pcVar41;
code_r0x00014304595d:
  pcVar40 = unaff_RBP + -0x5b008703;
  *(int *)pcVar40 = *(int *)pcVar40 + (int)&pcStack_28;
  bVar44 = *(int *)pcVar40 < 0;
  iVar4 = (int)&pcStack_28;
code_r0x000143045963:
  iVar29 = iVar4;
  bVar45 = 1;
code_r0x000143045964:
  pcVar16 = UNRECOVERED_JUMPTABLE_00;
  pcVar41 = unaff_RDI;
  iVar3 = iVar29;
  if (bVar44) {
code_r0x000143045965:
                    /* WARNING: Could not recover jumptable at 0x000143045965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar13 = (byte *)(**(code **)(unaff_RBP + (longlong)unaff_RDI * 8 + -0x25afe05))();
    return pbVar13;
  }
code_r0x000143045966:
  iVar28 = iVar3;
  unaff_RDI = pcVar41 + (ulonglong)bVar45 * -2 + 1;
  UNRECOVERED_JUMPTABLE_00 = pcVar16 + (ulonglong)bVar45 * -2 + 1;
  *pcVar41 = *pcVar16;
code_r0x000143045967:
  iVar7 = iVar28;
code_r0x000143045968:
  iVar27 = iVar7;
code_r0x000143045969:
  *(int *)(unaff_RBP + -0x5afdf803) = *(int *)(unaff_RBP + -0x5afdf803) + iVar27;
  unaff_RBP[-0x5afe9503] = (code)((char)unaff_RBP[-0x5afe9503] + (char)unaff_R12);
  pcVar40 = (code *)(ulonglong)(uint)((int)unaff_RDI >> 1);
  pcVar10 = pcVar40 + -1;
  *pcVar40 = *UNRECOVERED_JUMPTABLE_00;
  unaff_RBP[(longlong)pcVar10 * 8 + -0x25b017f] =
       (code)((char)unaff_RBP[(longlong)pcVar10 * 8 + -0x25b017f] + 1);
  *(undefined4 *)pcVar10 = *(undefined4 *)(UNRECOVERED_JUMPTABLE_00 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

