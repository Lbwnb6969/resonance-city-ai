// VA 0x140af72c0, PDB extent 694 bytes
// country_core::systems::audio::clutter_audio::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/clutter_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140af81d2) overlaps instruction at (ram,0x000140af81cf)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140af7bdc) */
/* WARNING: Removing unreachable block (ram,0x000140af7c27) */
/* WARNING: Removing unreachable block (ram,0x000140af7bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::clutter_audio::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/clutter_audio.rs
   Extent: 694 */

ulonglong * pdb_140af72c0(byte *param_1,ulonglong *param_2,undefined8 param_3,ulonglong *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined7 uVar9;
  undefined8 uVar7;
  ulonglong uVar8;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  byte bVar18;
  ulonglong *puVar16;
  ulonglong *puVar17;
  byte *unaff_RBX;
  ulonglong *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  ulonglong *unaff_RBP;
  int iVar41;
  ulonglong *unaff_RSI;
  ulonglong *puVar42;
  ulonglong *unaff_RDI;
  undefined *puVar43;
  ulonglong *in_R10;
  ulonglong *in_R11;
  ulonglong *unaff_R12;
  ulonglong *unaff_R13;
  char cVar44;
  uint uVar45;
  ulonglong unaff_R14;
  uint *unaff_R15;
  bool bVar46;
  ulonglong *in_stack_00000078;
  uint in_stack_00000080;
  byte in_stack_00000088;
  undefined1 auStack_80 [32];
  undefined *puStack_60;
  ulonglong *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_28 [32];
  undefined4 uStack_8;
  
  uVar45 = (uint)unaff_R14;
  cVar44 = (char)unaff_R14;
  puVar27 = (ulonglong *)auStack_28;
  puVar30 = auStack_28;
  puVar29 = auStack_28;
  puVar34 = auStack_28;
  puVar40 = auStack_28;
  puVar37 = auStack_28;
  puVar28 = auStack_28;
  puVar26 = (ulonglong *)auStack_28;
  puVar25 = auStack_28;
  puVar20 = auStack_28;
  puVar24 = auStack_28;
  puVar35 = auStack_28;
  puVar23 = auStack_28;
  puVar38 = auStack_28;
  puVar33 = auStack_28;
  puVar19 = (ulonglong *)auStack_28;
  puVar17 = param_2 + 1;
  puVar43 = &UNK_143051bd4;
  uVar12 = (ulonglong)*(int *)(&UNK_143051bd4 + (ulonglong)*param_1 * 4);
  puVar13 = (ulonglong *)(&UNK_143051bd4 + uVar12);
  bVar46 = puVar13 == (ulonglong *)0x0;
  bVar6 = (byte)param_2;
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  bVar10 = (byte)puVar13;
  uVar11 = (uint)puVar13;
  iVar41 = (int)unaff_RSI;
  bVar18 = (byte)((ulonglong)puVar17 >> 8);
  puVar15 = puVar13;
  puVar32 = auStack_28;
  puVar36 = auStack_28;
  puVar31 = auStack_28;
  puVar21 = auStack_28;
  puVar22 = auStack_28;
  puVar5 = auStack_28;
  puVar42 = unaff_RSI;
  puVar16 = puVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar43 = &UNK_143051340;
    goto code_r0x000140af74ce;
  case 1:
    puVar43 = &UNK_143051349;
    param_4 = (ulonglong *)0x5;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 2:
    puVar43 = &UNK_14305134e;
    param_4 = (ulonglong *)0x7;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 3:
    puVar43 = &UNK_143051355;
    param_4 = (ulonglong *)0xb;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 4:
    puVar43 = &UNK_143051360;
    param_4 = (ulonglong *)0x6;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 5:
    puVar43 = &UNK_143051366;
    param_4 = (ulonglong *)0x4;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 6:
    puVar43 = &UNK_14305136a;
    param_4 = (ulonglong *)0x5;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 7:
    puVar43 = &UNK_14305136f;
    param_4 = (ulonglong *)0x7;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 8:
    puVar43 = &UNK_143051376;
    goto code_r0x000140af74ce;
  case 9:
    puVar43 = &UNK_14305137f;
    param_4 = (ulonglong *)0x6;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 10:
    puVar43 = &UNK_143051385;
    param_4 = (ulonglong *)0x5;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0xb:
    puVar43 = &UNK_14305138a;
    param_4 = (ulonglong *)0x8;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0xc:
    puVar43 = &UNK_143051392;
    goto code_r0x000140af74ce;
  case 0xd:
    puVar43 = &UNK_14305139b;
    param_4 = (ulonglong *)0x6;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0xe:
    puVar43 = &UNK_1430513a1;
    param_4 = (ulonglong *)0x8;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0xf:
    puVar43 = &UNK_1430513a9;
    param_4 = (ulonglong *)0xf;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x10:
    puVar43 = &UNK_1430513b8;
    param_4 = (ulonglong *)0x19;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x11:
    puVar43 = &UNK_1430513d1;
    param_4 = (ulonglong *)0xa;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x12:
    puVar43 = &UNK_1430513db;
    param_4 = (ulonglong *)0x4;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x13:
    puVar43 = &UNK_1430513df;
    param_4 = (ulonglong *)0x5;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x14:
    puVar43 = &UNK_1430513e4;
    goto code_r0x000140af74ce;
  case 0x15:
    puVar43 = &UNK_1430513ed;
    param_4 = (ulonglong *)0xa;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x16:
    puVar43 = &UNK_1430513f7;
    param_4 = (ulonglong *)0x8;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x17:
    puVar43 = &UNK_1430513ff;
    param_4 = (ulonglong *)0x6;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x18:
    puVar43 = &UNK_143051405;
    param_4 = (ulonglong *)0x8;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x19:
    puVar43 = &UNK_14305140d;
    param_4 = (ulonglong *)0x6;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x1a:
    puVar43 = &UNK_143051413;
    param_4 = (ulonglong *)0x7;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x1b:
    puVar43 = &UNK_14305141a;
    param_4 = (ulonglong *)0xf;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x1c:
    puVar43 = &UNK_143051429;
    param_4 = (ulonglong *)0x8;
    break;
  case 0x1d:
    puVar43 = &UNK_143051431;
    goto code_r0x000140af753e;
  case 0x1e:
    puVar43 = &UNK_14305143b;
code_r0x000140af74ce:
    param_4 = (ulonglong *)0x9;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x1f:
    puVar43 = &UNK_143051444;
    param_4 = (ulonglong *)0xf;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x20:
    puVar43 = &UNK_143051453;
    param_4 = (ulonglong *)0x5;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x21:
    puVar43 = &UNK_143051458;
    param_4 = (ulonglong *)0xa;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x22:
    puVar43 = &UNK_143051462;
    param_4 = (ulonglong *)0xa;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x23:
    puVar43 = &UNK_14305146c;
    param_4 = (ulonglong *)0xb;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x24:
    puVar43 = &UNK_143051477;
    param_4 = (ulonglong *)0x7;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x25:
    puVar43 = &UNK_14305147e;
    param_4 = (ulonglong *)0xa;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x26:
    puVar43 = &UNK_143051488;
    param_4 = (ulonglong *)0x8;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x27:
    puVar25 = auStack_80;
    puVar20 = auStack_80;
    puVar26 = (ulonglong *)auStack_80;
    puVar27 = (ulonglong *)auStack_80;
    puVar30 = auStack_80;
    puVar31 = auStack_80;
    puVar32 = auStack_80;
    puVar33 = auStack_80;
    puVar34 = auStack_80;
    puVar35 = auStack_80;
    puVar36 = auStack_80;
    puVar37 = auStack_80;
    puVar38 = auStack_80;
    puVar39 = auStack_80;
    puVar40 = auStack_80;
    puVar28 = auStack_80;
    unaff_RSI = puVar13;
    if ((ulonglong *)param_2[6] < (ulonglong *)param_2[5]) {
      puVar43 = (undefined *)param_2[4];
      lVar14 = -(longlong)param_2[5];
      unaff_RBX = (byte *)0x100002600;
      param_2 = (ulonglong *)param_2[6];
      do {
        param_2 = (ulonglong *)((longlong)param_2 + 1);
        param_4 = (ulonglong *)(ulonglong)(byte)(puVar43 + -1)[(longlong)param_2];
        if ((ulonglong *)0x22 < param_4) {
LAB_140af7625:
          if ((puVar43 + -1)[(longlong)param_2] != 0x7b) {
            puStack_60 = (undefined *)0xa;
            goto LAB_140af75db;
          }
          puVar15 = puVar17 + 7;
          *(byte *)puVar15 = (byte)*puVar15 - 1;
          if ((byte)*puVar15 == 0) {
            puStack_60 = (undefined *)0x18;
            goto LAB_140af75db;
          }
          puVar17[5] = (ulonglong)param_2;
          pdb_1416540e0(&puStack_60);
          unaff_RBP = (ulonglong *)((ulonglong)puStack_60 & 0xff);
          puVar16 = (ulonglong *)&UNK_143051d10;
          uVar8 = (ulonglong)*(int *)(&UNK_143051d10 + (longlong)unaff_RBP * 4);
          unaff_RSI = (ulonglong *)(&UNK_143051d10 + uVar8);
          bVar46 = unaff_RSI == (ulonglong *)0x0;
          bVar6 = (byte)unaff_RSI;
          cVar44 = (char)puStack_58;
          iVar41 = (int)puStack_58;
          uVar9 = (undefined7)((ulonglong)puStack_58 >> 8);
          param_2 = puStack_58;
          puVar15 = unaff_RSI;
          puVar42 = puVar13;
          unaff_RDI = puVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(unaff_RBP) {
          default:
            puVar15 = puStack_58;
            goto code_r0x000140af766a;
          case (ulonglong *)0x27:
            goto code_r0x000140af7674;
          case (ulonglong *)0x28:
            *(uint *)puVar13 = (uint)*puVar13 + (int)in_R10;
            goto code_r0x000140af77e5;
          case (ulonglong *)0x29:
            *(byte *)puStack_58 = (byte)*puStack_58 + cVar44;
            goto code_r0x000140af7ab0;
          case (ulonglong *)0x2a:
            if (param_4 == (ulonglong *)0x0 && (uint)unaff_RSI == 0x6b63) {
              *(byte *)((longlong)puStack_58 + 1) = 0x15;
            }
            else if (_UNK_143051d18 == 0x706d &&
                     CONCAT44(_UNK_143051d14,
                              CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10))) ==
                     0x7574536e65646c4f) {
              *(byte *)((longlong)puStack_58 + 1) = 0x1d;
            }
            else if (_UNK_143051d18 == 0x6c6c &&
                     CONCAT44(_UNK_143051d14,
                              CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10))) ==
                     0x6f52636972626146) {
              *(byte *)((longlong)puStack_58 + 1) = 0x21;
            }
            else {
              if (_UNK_143051d18 != 0x6c6c ||
                  CONCAT44(_UNK_143051d14,
                           CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10))) !=
                  0x6174536461657242) {
                puVar15 = (ulonglong *)0x6f6f72426b636152;
                goto code_r0x000140af7a98;
              }
              *(byte *)((longlong)puStack_58 + 1) = 0x22;
            }
            goto code_r0x000140af7e2e;
          case (ulonglong *)0x2b:
            halt_baddata();
          case (ulonglong *)0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case (ulonglong *)0x2d:
            param_2 = (ulonglong *)CONCAT71(uVar9,cVar44 + 'A');
            puVar15 = (ulonglong *)(ulonglong)((uint)unaff_RSI ^ 0x7465);
            goto code_r0x000140af7b3c;
          case (ulonglong *)0x2e:
            *(byte *)puStack_58 = (byte)*puStack_58 + cVar44;
            if (CONCAT17(UNK_143051d1a,
                         CONCAT25(_UNK_143051d18,CONCAT41(_UNK_143051d14,UNK_143051d13))) !=
                0x6c6c617453656967 ||
                CONCAT44(_UNK_143051d14,
                         CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10))) !=
                0x7453656967676556) goto LAB_140af7db0;
            *(byte *)((longlong)puStack_58 + 1) = 0x23;
            goto code_r0x000140af7e2e;
          case (ulonglong *)0x2f:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(unaff_RBP) {
            default:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x30:
            case (ulonglong *)0x31:
            case (ulonglong *)0x32:
            case (ulonglong *)0x34:
            case (ulonglong *)0x35:
            case (ulonglong *)0x36:
            case (ulonglong *)0x37:
            case (ulonglong *)0x38:
            case (ulonglong *)0x39:
            case (ulonglong *)0x3a:
            case (ulonglong *)0x3b:
            case (ulonglong *)0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case (ulonglong *)0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          case (ulonglong *)0x30:
          case (ulonglong *)0x31:
          case (ulonglong *)0x32:
          case (ulonglong *)0x34:
          case (ulonglong *)0x35:
          case (ulonglong *)0x36:
          case (ulonglong *)0x37:
          case (ulonglong *)0x38:
          case (ulonglong *)0x39:
          case (ulonglong *)0x3a:
          case (ulonglong *)0x3b:
          case (ulonglong *)0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case (ulonglong *)0x33:
            if (0xfffffffebcfae2ef < uVar8) goto code_r0x000140af7c3e;
            puVar27 = unaff_RBP + 1;
            goto code_r0x000140af7c2b;
          case (ulonglong *)0x3d:
            *(uint *)puStack_58 = (uint)*puStack_58 + iVar41;
            *(byte *)((longlong)puStack_58 + -0x47) =
                 *(byte *)((longlong)puStack_58 + -0x47) + bVar6;
            bVar6 = in(0x1d10);
            *(byte *)puVar17 = bVar6;
            out((byte)*puVar13,0x1d10);
            out(*(undefined4 *)(&UNK_143051bd5 + uVar12),0x1d10);
            pbVar1 = (byte *)((ulonglong)*(uint *)((longlong)puStack_58 + 0x33) - 0x7d);
            *pbVar1 = *pbVar1 | (byte)*(uint *)((longlong)puStack_58 + 0x33);
            pcVar3 = (code *)swi(1);
            puVar13 = (ulonglong *)(*pcVar3)();
            return puVar13;
          case (ulonglong *)0x3e:
            goto code_r0x000140af81e5;
          case (ulonglong *)0x3f:
            goto code_r0x000140af82ab;
          case (ulonglong *)0x40:
            *(byte *)puStack_58 = (byte)*puStack_58 + cVar44;
            *(byte *)unaff_RSI = (byte)*unaff_RSI + 0x1d;
            pbVar1 = (byte *)((longlong)puStack_58 + -0x75);
            *pbVar1 = *pbVar1 >> 4 | *pbVar1 << 4;
            param_2 = (ulonglong *)((ulonglong)puStack_58 & 0xffffffffffffff28);
            goto LAB_140af822b;
          case (ulonglong *)0x41:
            return puStack_58;
          case (ulonglong *)0x42:
            param_2 = (ulonglong *)CONCAT71(uVar9,(cVar44 + -0x27) - (0xfffffffebcfae2ef < uVar8));
            unaff_RSI = puVar13;
            goto code_r0x000140af81fb;
          case (ulonglong *)0x43:
            if (unaff_RSI != (ulonglong *)0x1) {
              *(byte *)((longlong)puStack_58 + -0x77) =
                   *(byte *)((longlong)puStack_58 + -0x77) + (char)param_4;
              puStack_60 = &UNK_143051918;
              puVar13 = (ulonglong *)
                        pdb_140f66090((ulonglong)puStack_58 & 0xffffffffffffff30,&UNK_14305193c,0xc,
                                      auStack_50);
              return puVar13;
            }
            puVar16 = (ulonglong *)0x43051908;
            uVar7 = 0xd;
            break;
          case (ulonglong *)0x44:
            pbVar1 = (byte *)((longlong)puStack_58 + -0x73);
            bVar10 = *pbVar1;
            *pbVar1 = *pbVar1 + bVar6;
            puStack_58 = (ulonglong *)(ulonglong)(iVar41 + 0x2559653 + (uint)CARRY1(bVar10,bVar6));
            uVar7 = 0xc;
            break;
          case (ulonglong *)0x45:
            puVar13 = (ulonglong *)
                      CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                               bVar6 + (&UNK_143051ce1)[(longlong)unaff_RSI * 4 + uVar8]);
code_r0x000140af8296:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar39 + -8) = 0x140af829e;
            pdb_142dc81f2(puVar13,param_4);
          case (ulonglong *)0x46:
            pbVar1 = (byte *)((longlong)puStack_58 + -0x73);
            bVar10 = *pbVar1;
            *pbVar1 = *pbVar1 + bVar6;
            puStack_58 = (ulonglong *)(ulonglong)(iVar41 + 0x255967c + (uint)CARRY1(bVar10,bVar6));
            uVar7 = 2;
            break;
          case (ulonglong *)0x47:
            goto code_r0x000140af8217;
          }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar13 = (ulonglong *)
                    (**(code **)(puStack_58[1] + 0x18))
                              (*puStack_58,puVar16,uVar7,*(code **)(puStack_58[1] + 0x18));
          return puVar13;
        }
        if ((0x100002600U >> ((ulonglong)param_4 & 0x3f) & 1) == 0) {
          if (param_4 != (ulonglong *)0x22) goto LAB_140af7625;
          pdb_1416570c0(&puStack_60);
          puVar15 = (ulonglong *)&UNK_143051c70;
          uVar8 = (ulonglong)*(int *)(&UNK_143051c70 + ((ulonglong)puStack_60 & 0xff) * 4);
          param_2 = (ulonglong *)(&UNK_143051c70 + uVar8);
          param_2 = param_2;
          puVar24 = auStack_80;
          puVar23 = auStack_80;
          puVar16 = puVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((ulonglong)puStack_60 & 0xff) {
          case 0:
            (&UNK_143051bd5)[uVar12] = 0;
            goto code_r0x000140af76f4;
          case 1:
            (&UNK_143051bd5)[uVar12] = 1;
            goto code_r0x000140af76f4;
          case 2:
            (&UNK_143051bd5)[uVar12] = 2;
            goto code_r0x000140af76f4;
          case 3:
            goto code_r0x000140af7764;
          case 4:
            (&UNK_143051bd5)[uVar12] = 4;
            goto code_r0x000140af7737;
          case 5:
            (&UNK_143051bd5)[uVar12] = 5;
            goto code_r0x000140af76f4;
          case 6:
            (&UNK_143051bd5)[uVar12] = 6;
            goto code_r0x000140af76f4;
          case 7:
            (&UNK_143051bd5)[uVar12] = 7;
            goto code_r0x000140af76f4;
          case 8:
            (&UNK_143051bd5)[uVar12] = 8;
            goto code_r0x000140af76f4;
          case 9:
          case 0x50:
            goto code_r0x000140af7746;
          case 10:
            (&UNK_143051bd5)[uVar12] = 10;
            goto code_r0x000140af76f4;
          case 0xb:
            (&UNK_143051bd5)[uVar12] = 0xb;
            goto code_r0x000140af76f4;
          case 0xc:
            goto code_r0x000140af7740;
          case 0xd:
            (&UNK_143051bd5)[uVar12] = 0xd;
            goto code_r0x000140af76f4;
          case 0xe:
            (&UNK_143051bd5)[uVar12] = 0xe;
            goto code_r0x000140af76f4;
          case 0xf:
            (&UNK_143051bd5)[uVar12] = 0xf;
            goto code_r0x000140af76f4;
          case 0x10:
            (&UNK_143051bd5)[uVar12] = 0x10;
            goto code_r0x000140af76f4;
          case 0x11:
            (&UNK_143051bd5)[uVar12] = 0x11;
            goto code_r0x000140af76f4;
          case 0x12:
            (&UNK_143051bd5)[uVar12] = 0x12;
            goto code_r0x000140af76f4;
          case 0x13:
            (&UNK_143051bd5)[uVar12] = 0x13;
            goto code_r0x000140af76f4;
          case 0x14:
            (&UNK_143051bd5)[uVar12] = 0x14;
            goto code_r0x000140af76f4;
          case 0x15:
            (&UNK_143051bd5)[uVar12] = 0x15;
            goto code_r0x000140af76f4;
          case 0x16:
code_r0x000140af77e5:
            (&UNK_143051bd5)[uVar12] = 0x16;
            goto code_r0x000140af76f4;
          case 0x17:
            (&UNK_143051bd5)[uVar12] = 0x17;
            goto code_r0x000140af76f4;
          case 0x18:
            goto code_r0x000140af7752;
          case 0x19:
            (&UNK_143051bd5)[uVar12] = 0x19;
            goto code_r0x000140af76f4;
          case 0x1a:
            (&UNK_143051bd5)[uVar12] = 0x1a;
            goto code_r0x000140af76f4;
          case 0x1b:
            (&UNK_143051bd5)[uVar12] = 0x1b;
            goto code_r0x000140af76f4;
          case 0x1c:
            (&UNK_143051bd5)[uVar12] = 0x1c;
            goto code_r0x000140af76f4;
          case 0x1d:
            (&UNK_143051bd5)[uVar12] = 0x1d;
            goto code_r0x000140af76f4;
          case 0x1e:
            (&UNK_143051bd5)[uVar12] = 0x1e;
            goto code_r0x000140af76f4;
          case 0x1f:
            (&UNK_143051bd5)[uVar12] = 0x1f;
            goto code_r0x000140af76f4;
          case 0x20:
            (&UNK_143051bd5)[uVar12] = 0x20;
            goto code_r0x000140af76f4;
          case 0x21:
            goto code_r0x000140af772e;
          case 0x22:
            goto code_r0x000140af771c;
          case 0x23:
            goto code_r0x000140af770a;
          case 0x24:
            (&UNK_143051bd5)[uVar12] = 0x24;
            goto code_r0x000140af76f4;
          case 0x25:
            (&UNK_143051bd5)[uVar12] = 0x25;
            goto code_r0x000140af76f4;
          case 0x26:
            (&UNK_143051bd5)[uVar12] = 0x26;
            goto code_r0x000140af76f4;
          case 0x27:
            *(ulonglong **)(&UNK_143051bdc + uVar12) = puStack_58;
            *(byte *)puVar13 = 1;
            goto LAB_140af76f8;
          default:
            lVar14 = 0x43051c71;
            goto code_r0x000140af75be;
          case 0x4f:
            goto LAB_140af75db;
          case 0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x53:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x54:
            *(uint *)unaff_RDI = (uint)*unaff_RDI + (int)puVar43;
            goto code_r0x000140af76f4;
          case 0x55:
            if (0xfffffffebcfae38f < uVar8) {
              puVar26 = unaff_RBP + 1;
              if (param_2 == (ulonglong *)0x0) {
                (&UNK_143051c71)[uVar8] = 0xd;
                goto code_r0x000140af7e2e;
              }
              uVar11 = (uint)*puVar17 ^ 0x72726142;
              param_4 = (ulonglong *)(ulonglong)(*(ushort *)((longlong)puVar17 + 4) ^ 0x6c65);
              goto code_r0x000140af7b20;
            }
            out((uint)*puVar13,(short)puVar17);
code_r0x000140af7a98:
            uVar12 = (ulonglong)puVar15 ^ *puVar16;
            param_4 = (ulonglong *)(ulonglong)(ushort)puVar16[1];
            break;
          case 0x56:
            param_2 = (ulonglong *)(ulonglong)((int)param_2 + 0xb9480000);
            if ((undefined *)*puVar17 == &UNK_143051c70) {
              *(byte *)((longlong)param_2 + 1) = 0xb;
              goto code_r0x000140af7e2e;
            }
            if (*puVar17 == 0x7372657474756853) {
              *(byte *)((longlong)param_2 + 1) = 0xe;
              goto code_r0x000140af7e2e;
            }
            if (*puVar17 == 0x6e67695364616f52) {
              *(byte *)((longlong)param_2 + 1) = 0x16;
              goto code_r0x000140af7e2e;
            }
            if (*puVar17 == 0x6b63617473796148) {
              *(byte *)((longlong)param_2 + 1) = 0x18;
              goto code_r0x000140af7e2e;
            }
            if (*puVar17 == 0x676f4c6e65646c4f) {
              *(byte *)((longlong)param_2 + 1) = 0x1c;
            }
            else {
              puVar28 = auStack_80;
              if (*puVar17 != 0x6c6c6542726f6f44) goto LAB_140af7db0;
              *(byte *)((longlong)param_2 + 1) = 0x26;
            }
            goto code_r0x000140af7e2e;
          case 0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
            *(uint *)puVar13 = (uint)*puVar13 + 0x2600;
            goto code_r0x000140af7c6f;
          case 0x5b:
            UNK_143051c79 = UNK_143051c79 + (char)param_2;
            puVar26 = unaff_RBP + 1;
            goto code_r0x000140af7b3c;
          case 0x65:
            *(byte *)param_2 = (byte)*param_2 + (char)param_2;
            puVar28 = auStack_80;
            if (*(byte *)((longlong)puVar17 + 4) != 0x6c || (uint)*puVar17 != 0x69766e41)
            goto LAB_140af7db0;
            (&UNK_143051c71)[uVar8] = 0x20;
            goto code_r0x000140af7e2e;
          case 0x66:
            goto code_r0x000140af8145;
          case 0x67:
            goto code_r0x000140af820b;
          case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x69:
            puVar16 = puVar13;
            goto LAB_140af81c0;
          case 0x6a:
            goto code_r0x000140af815e;
          case 0x6b:
            goto LAB_140af823c;
          case 0x6c:
            (&UNK_143051c71)[uVar8] = (&UNK_143051c71)[uVar8] + '&' + (0xfffffffebcfae38f < uVar8);
            goto LAB_140af825b;
          case 0x6d:
            goto code_r0x000140af81f2;
          case 0x6e:
            goto code_r0x000140af826e;
          case 0x6f:
            uVar11 = in(0x48);
            param_2 = (ulonglong *)(ulonglong)uVar11;
            *(uint *)(param_2 + 5) = (uint)unaff_RBP;
            goto code_r0x000140af8172;
          }
          goto code_r0x000140af7aa0;
        }
code_r0x000140af75be:
        puVar17[5] = (ulonglong)param_2;
      } while ((byte *)(lVar14 + (longlong)param_2) != (byte *)0x0);
    }
    puStack_60 = (undefined *)0x5;
LAB_140af75db:
    uVar7 = pdb_142d84ef0(puVar17,&puStack_60);
    *(undefined8 *)(&UNK_143051bdc + uVar12) = uVar7;
    *(byte *)puVar13 = 1;
    goto LAB_140af76f8;
  case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x29:
    puVar13 = (ulonglong *)(ulonglong)(uVar11 + 1);
    goto code_r0x000140af76be;
  case 0x2a:
    uStack_8 = 3;
    goto code_r0x000140af76d0;
  case 0x2b:
    goto code_r0x000140af769e;
  case 0x2c:
    goto LAB_140af76f8;
  case 0x2d:
    *(int *)unaff_RBX = *(int *)unaff_RBX + (int)in_R11;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x2e:
code_r0x000140af76ce:
    *(byte *)param_2 = (byte)*param_2 + (char)param_2;
    puVar38 = auStack_28;
    goto code_r0x000140af76d0;
  case 0x2f:
code_r0x000140af772e:
    *(byte *)((longlong)unaff_RSI + 1) = 0x21;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x30:
  case 0x77:
    *(byte *)((longlong)unaff_RDI + 0x35) = *(byte *)((longlong)unaff_RDI + 0x35) & bVar18;
    puVar35 = auStack_28;
    goto code_r0x000140af76ad;
  case 0x31:
    pcVar3 = (code *)swi(3);
    puVar13 = (ulonglong *)(*pcVar3)();
    return puVar13;
  case 0x32:
    param_2 = (ulonglong *)(ulonglong)*(uint *)(&UNK_143051bec + uVar12);
    goto code_r0x000140af7697;
  case 0x33:
    goto code_r0x000140af76a1;
  case 0x34:
code_r0x000140af770a:
    *(byte *)((longlong)unaff_RSI + 1) = 0x23;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x35:
    puVar23 = &stack0xffffffffffffffd0;
    *(byte *)((longlong)param_2 + -0x75) = *(byte *)((longlong)param_2 + -0x75) & bVar10;
    UNK_143051c0d = UNK_143051c0d - (char)param_4;
    unaff_RBX[0x30] = unaff_RBX[0x30] << 1;
code_r0x000140af7697:
    puVar43 = (undefined *)puVar13[3];
    param_2 = (ulonglong *)((longlong)param_2 + 1);
    puVar36 = puVar23;
code_r0x000140af769e:
    puVar17 = (ulonglong *)-(longlong)puVar17;
    puVar35 = puVar36;
code_r0x000140af76a1:
    do {
      param_4 = (ulonglong *)(ulonglong)(byte)(puVar43 + -1)[(longlong)param_2];
      uVar11 = (uint)(byte)(puVar43 + -1)[(longlong)param_2];
      if ((ulonglong *)0x20 < param_4) {
code_r0x000140af76e2:
        bVar46 = uVar11 == 0x7d;
        puVar31 = puVar35;
        goto code_r0x000140af76e6;
      }
code_r0x000140af76ad:
      uVar11 = (uint)param_4;
      if (((ulonglong)unaff_RBX >> ((ulonglong)param_4 & 0x3f) & 1) == 0) goto code_r0x000140af76e2;
      puVar13[5] = (ulonglong)param_2;
      param_4 = (ulonglong *)((byte *)((longlong)puVar17 + (longlong)param_2) + 1);
      puVar33 = puVar35;
code_r0x000140af76be:
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      puVar24 = puVar33;
code_r0x000140af76c1:
      puVar35 = puVar24;
      puVar23 = puVar24;
    } while (param_4 != (ulonglong *)0x1);
code_r0x000140af76c7:
    *(undefined8 *)(puVar23 + 0x20) = 3;
    puVar38 = puVar23;
code_r0x000140af76d0:
    puVar17 = (ulonglong *)(puVar38 + 0x20);
code_r0x000140af76d5:
    *(undefined8 *)(puVar38 + -8) = 0x140af76da;
    uVar12 = pdb_142d855a0(puVar13,puVar17);
    unaff_RSI[1] = uVar12;
    bVar6 = 1;
    goto code_r0x000140af76f6;
  case 0x36:
    goto code_r0x000140af76c1;
  case 0x37:
    goto code_r0x000140af7686;
  case 0x38:
    goto code_r0x000140af76e6;
  case 0x39:
code_r0x000140af771c:
    *(byte *)((longlong)unaff_RSI + 1) = 0x22;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x3a:
code_r0x000140af7764:
    *(byte *)((longlong)unaff_RSI + 1) = 3;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x3b:
    *(byte *)(param_2 + -0xf) = (byte)param_2[-0xf] - bVar6;
    out((byte)*unaff_RSI,(short)puVar17);
    *(uint *)puVar13 = (uint)*puVar13 + (int)(ulonglong *)((longlong)unaff_RSI + 1);
    *(byte *)((longlong)param_2 + -0xf76b7fa) = *(byte *)((longlong)param_2 + -0xf76b7fa);
    unaff_RSI = (ulonglong *)((longlong)unaff_RSI + 1);
    goto LAB_140af76f8;
  case 0x3c:
    goto code_r0x000140af7701;
  case 0x3d:
    *(uint *)puVar13 = (uint)*puVar13 + (int)in_R11;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3f:
    pbVar1 = (byte *)((longlong)unaff_RBP + (longlong)puVar13 * 4 + 0xc);
    *pbVar1 = *pbVar1 - bVar10;
    puVar13 = (ulonglong *)
              CONCAT71((int7)((ulonglong)puVar13 >> 8),bVar10 + (&UNK_143051bd3)[uVar12]);
    *(undefined4 *)((longlong)param_2 + -1) = *(undefined4 *)((longlong)param_2 + -1);
    puVar24 = auStack_28;
    goto code_r0x000140af76c1;
  case 0x40:
    return param_2;
  case 0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x42:
    unaff_RSI = (ulonglong *)(ulonglong)(uint)(iVar41 + (int)unaff_RDI);
    puVar21 = auStack_28;
    if ((char)((char)in_R11 - (char)unaff_R13) < '\0') {
      param_2 = (ulonglong *)
                (ulonglong)
                (uint)((int)(int *)((ulonglong)param_2 & 0xffffffffffffff20) +
                      *(int *)((ulonglong)param_2 & 0xffffffffffffff20));
      goto code_r0x000140af76ce;
    }
  case 0x49:
code_r0x000140af7680:
    puVar13 = unaff_RDI;
    *(byte *)(puVar13 + 7) = (byte)puVar13[7] + 1;
    puVar22 = puVar21;
    unaff_RDI = puVar13;
code_r0x000140af7686:
    *(byte *)((longlong)unaff_RSI + 1) = (byte)unaff_RBP;
    puVar17 = (ulonglong *)unaff_RDI[4];
    param_2 = (ulonglong *)unaff_RDI[5];
    puVar5 = puVar22;
code_r0x000140af7692:
    puVar23 = puVar5;
    if (param_2 < puVar17) goto code_r0x000140af7697;
    goto code_r0x000140af76c7;
  case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x45:
code_r0x000140af7737:
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x46:
    *(byte *)((longlong)param_2 + 0x4114eb01) = *(byte *)((longlong)param_2 + 0x4114eb01) | bVar18;
    bVar46 = uVar11 == 0x7d;
    puVar31 = auStack_28;
code_r0x000140af76e6:
    if (!bVar46) {
      *(undefined8 *)(puVar31 + 0x20) = 10;
      puVar38 = puVar31;
      goto code_r0x000140af76d0;
    }
    puVar13[5] = (ulonglong)param_2;
    *(byte *)((longlong)unaff_RSI + 1) = (byte)unaff_RBP;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x47:
code_r0x000140af7740:
    *(byte *)((longlong)unaff_RSI + 1) = 0xc;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  case 0x48:
    goto code_r0x000140af7692;
  case 0x4a:
    *(byte *)((longlong)param_2 + -0x7b) = *(byte *)((longlong)param_2 + -0x7b) + bVar10;
    (&stack0x00000020)[(longlong)puVar13] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
    goto code_r0x000140af7674;
  case 0x4c:
    puVar15 = (ulonglong *)((ulonglong)param_2 & 0xffffffff);
    puVar13 = unaff_RSI;
    puVar17 = unaff_RDI;
code_r0x000140af766a:
    *(undefined8 *)(puVar20 + -8) = 0x140af766f;
    param_2 = (ulonglong *)pdb_141654820(puVar15);
    puVar21 = puVar20;
    puVar42 = puVar13;
    unaff_RSI = puVar13;
    unaff_RDI = puVar17;
    if (param_2 == (ulonglong *)0x0) goto code_r0x000140af7680;
    goto code_r0x000140af7674;
  case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4e:
code_r0x000140af7752:
    *(byte *)((longlong)unaff_RSI + 1) = 0x18;
    puVar13 = unaff_RSI;
    goto code_r0x000140af76f4;
  default:
    puVar19 = (ulonglong *)&stack0xffffffffffffffd0;
    bVar6 = bVar6 + (&UNK_143051b8d)[uVar12];
    param_2 = (ulonglong *)CONCAT71(uVar9,bVar6);
    *(byte *)param_2 = (byte)*param_2 | bVar6;
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    break;
  case 0x76:
    param_2 = (ulonglong *)0x43051431;
code_r0x000140af753e:
    param_4 = (ulonglong *)0xa;
    puVar19 = (ulonglong *)auStack_28;
    break;
  case 0x78:
    *(char *)(uVar12 + 0x1967d8b16) =
         *(char *)(uVar12 + 0x1967d8b16) + (char)((ulonglong)unaff_RBX >> 8);
    if (*(int *)((longlong)param_2 + 0xb) == 0x6b636153 && uVar11 == (uint)*puVar17) {
      *(byte *)((longlong)param_2 + 1) = 2;
    }
    else if (*(int *)((longlong)param_2 + 0xb) == 0x746f5079 && (uint)*puVar17 == 0x79616c43) {
      *(byte *)((longlong)param_2 + 1) = 7;
    }
    else if (*(int *)((longlong)param_2 + 0xb) == 0x6e696b70 && (uint)*puVar17 == 0x706d7550) {
      *(byte *)((longlong)param_2 + 1) = 0x1a;
    }
    else {
      puVar28 = auStack_28;
      if (*(int *)((longlong)param_2 + 0xb) != 0x68736946 || (uint)*puVar17 != 0x46786f42)
      goto LAB_140af7db0;
      *(byte *)((longlong)param_2 + 1) = 0x24;
    }
    goto code_r0x000140af7e2e;
  case 0x79:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7a:
    iRam0000000140aec68e = iRam0000000140aec68e + (int)in_R10;
    iRam0000000140aebd97 = iRam0000000140aebd97 + (int)param_4;
    puVar13 = (ulonglong *)(ulonglong)(iVar41 + 3);
    *(uint *)puVar13 = (uint)*puVar13 + 0x43051bd4;
    goto code_r0x000140af76f4;
  case 0x7b:
    *unaff_RBX = *unaff_RBX & bVar6;
    *(byte *)param_2 = (byte)*param_2 + bVar6;
    *(byte *)((longlong)param_2 + -0x73) = *(byte *)((longlong)param_2 + -0x73) + bVar10;
    puVar38 = &stack0xffffffffffffffd0;
    goto code_r0x000140af76d5;
  case 0x7c:
    pcVar3 = (code *)swi(1);
    puVar13 = (ulonglong *)(*pcVar3)();
    return puVar13;
  case 0x7d:
    puVar13 = (ulonglong *)(ulonglong)(iVar41 + 1);
    *(uint *)unaff_RDI = (uint)*unaff_RDI + (int)in_R10;
    goto code_r0x000140af76f4;
  case 0x7e:
code_r0x000140af7746:
    *(byte *)((longlong)unaff_RSI + 1) = 9;
    puVar13 = unaff_RSI;
code_r0x000140af76f4:
    bVar6 = 0;
    unaff_RSI = puVar13;
code_r0x000140af76f6:
    *(byte *)unaff_RSI = bVar6;
LAB_140af76f8:
    param_2 = unaff_RSI;
code_r0x000140af7701:
    return param_2;
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
    puVar43 = &UNK_143051bd4;
    if ((byte)param_2[2] == 0x74 && *puVar17 == 0x73654e7364726942) {
      *(byte *)((longlong)param_2 + 1) = 0;
    }
    else if ((byte)param_2[2] == 0x74 && *puVar17 == 0x6f507265776f6c46) {
      *(byte *)((longlong)param_2 + 1) = 8;
    }
    else {
      bVar46 = (byte)param_2[2] == 0x6b && *puVar17 == 0x726f666863746950;
code_r0x000140af7c2b:
      if (bVar46) {
        *(byte *)((longlong)param_2 + 1) = 0xc;
      }
      else {
        unaff_RSI = (ulonglong *)(*puVar16 ^ 0x73756f6864726942);
code_r0x000140af7c3e:
        if ((byte)puVar16[1] == 0x65 && unaff_RSI == (ulonglong *)0x0) {
          *(byte *)((longlong)param_2 + 1) = 0x14;
        }
        else {
          puVar28 = (undefined1 *)puVar27;
          if ((byte)puVar16[1] != 0x6b || *puVar16 != 0x636f526e65646c4f) goto LAB_140af7db0;
code_r0x000140af7c6f:
          *(byte *)((longlong)param_2 + 1) = 0x1e;
        }
      }
    }
    goto code_r0x000140af7e2e;
  case 0x82:
    uVar12 = (ulonglong)(ushort)param_2[2];
code_r0x000140af7aa0:
    puVar28 = puVar25;
    if (param_4 != (ulonglong *)0x736d || uVar12 != 0) {
LAB_140af7db0:
      *(undefined8 *)(puVar28 + -8) = 0x140af7dce;
      uVar12 = pdb_142d8f140(puVar16,puVar43,&UNK_143051490,0x27);
      param_2[1] = uVar12;
      *(byte *)param_2 = 1;
      return param_2;
    }
code_r0x000140af7ab0:
    *(byte *)((longlong)param_2 + 1) = 0x25;
    goto code_r0x000140af7e2e;
  case 0x8c:
    if (uVar12 < 0xfffffffebcfae42c) {
      param_2 = (ulonglong *)
                CONCAT71(uVar9,(bVar6 | ((byte *)((longlong)unaff_RDI + -0x49))[(longlong)puVar13])
                               + 0x41);
      uVar11 = uVar11 ^ 0x6c65;
code_r0x000140af7b20:
      if ((int)param_4 == 0 && uVar11 == 0) {
        *(byte *)((longlong)param_2 + 1) = 0x17;
        goto code_r0x000140af7e2e;
      }
      puVar15 = (ulonglong *)(ulonglong)((uint)*puVar17 ^ 0x6b736142);
      param_4 = (ulonglong *)(ulonglong)(*(ushort *)((longlong)puVar17 + 4) ^ 0x7465);
      puVar16 = puVar17;
code_r0x000140af7b3c:
      puVar28 = (undefined1 *)puVar26;
      if ((int)param_4 != 0 || (int)puVar15 != 0) goto LAB_140af7db0;
    }
    else {
      *(uint *)puVar13 = (uint)*puVar13 + (int)unaff_RBX;
    }
    *(byte *)((longlong)param_2 + 1) = 0x19;
code_r0x000140af7e2e:
    *(byte *)param_2 = 0;
    return param_2;
  case 0x8d:
    puVar17 = (ulonglong *)(ulonglong)in_stack_00000080;
    unaff_RBP = (ulonglong *)param_2[5];
    in_R10 = (ulonglong *)((longlong)unaff_RBP - (longlong)puVar17);
    if (param_4 <= in_R10) {
LAB_140af822b:
      param_2[5] = 0;
      param_2 = (ulonglong *)0x0;
      puVar15 = *(ulonglong **)(puVar37 + 0x28);
      goto LAB_140af825b;
    }
    unaff_R15 = (uint *)(ulonglong)in_stack_00000088;
    unaff_RBX = (byte *)param_2[3];
    puVar13 = (ulonglong *)param_2[1];
    unaff_RDI = in_stack_00000078;
    goto code_r0x000140af80e5;
  case 0x8e:
    puVar32 = &stack0xffffffffffffffd0;
    unaff_RBP = (ulonglong *)(ulonglong)((uint)unaff_RBP - uVar11);
    goto code_r0x000140af8172;
  case 0x8f:
    goto code_r0x000140af80f4;
  case 0x90:
    *(uint *)((byte *)((longlong)unaff_RDI + 0x45) + (longlong)puVar13) =
         *(int *)((byte *)((longlong)unaff_RDI + 0x45) + (longlong)puVar13) + uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x91:
    ((byte *)((longlong)unaff_RDI + -0x4a))[(longlong)puVar13] =
         ((byte *)((longlong)unaff_RDI + -0x4a))[(longlong)puVar13] + bVar6;
    *(byte *)((longlong)param_2 + -0x75) = *(byte *)((longlong)param_2 + -0x75) + bVar10;
    pbVar1 = (byte *)((longlong)param_2 + -0x75);
    bVar6 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar10;
    param_2 = puRam000000000000a024;
    puVar29 = (undefined1 *)0xa02c;
    *(byte *)((longlong)puRam000000000000a024 + -0x75) =
         (*(byte *)((longlong)puRam000000000000a024 + -0x75) - bVar10) - CARRY1(bVar6,bVar10);
    unaff_RBX[(longlong)puVar13 * 4 + 0x58] = unaff_RBX[(longlong)puVar13 * 4 + 0x58] | bVar10;
    goto code_r0x000140af80df;
  case 0x92:
    goto LAB_140af81a0;
  case 0x93:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x94:
    puVar16 = param_4;
    goto code_r0x000140af8155;
  case 0x95:
    unaff_R15 = (uint *)((longlong)in_R10 + 0x143051bd4);
    puStack_58 = param_2;
    unaff_R12 = puVar13;
    goto LAB_140af81e0;
  case 0x96:
    unaff_RBX[(longlong)puVar13 * 4 + 0x58] = unaff_RBX[(longlong)puVar13 * 4 + 0x58] | bVar10;
code_r0x000140af80df:
    (&UNK_143051c30)[(longlong)puVar13 * 4 + uVar12] =
         (&UNK_143051c30)[(longlong)puVar13 * 4 + uVar12] + bVar10;
    param_2 = (ulonglong *)((ulonglong)param_2 & 0xffffffffffffff30);
    puVar28 = puVar29;
code_r0x000140af80e5:
    unaff_R13 = (ulonglong *)param_2[7];
    puVar15 = puVar13;
    puVar30 = puVar28;
    goto LAB_140af8106;
  }
  puVar19[-1] = 0x140af74dc;
  uVar12 = pdb_14054e5c0(param_2,puVar17,puVar43,param_4);
  if (uVar12 == 0) {
    return (ulonglong *)0x0;
  }
  puVar19[4] = (ulonglong)unaff_RBP;
  puVar19[3] = 0xfffffffffffffffe;
  puVar19[-2] = 1;
  puVar19[-1] = uVar12;
  puVar19[1] = 0;
  puVar19[2] = 0;
  puVar19[-7] = (ulonglong)&UNK_142db8fda;
  pdb_14007ee60();
  puVar19[-7] = (ulonglong)&UNK_142db8fe9;
  puVar13 = (ulonglong *)pub_1406abab0(0x28,8);
  if (puVar13 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
    puVar19[-7] = (ulonglong)&UNK_142db901a;
    pdb_142dc7e11(8,0x28);
  }
  puVar13[4] = puVar19[2];
  uVar12 = puVar19[-2];
  uVar8 = puVar19[-1];
  uVar4 = puVar19[1];
  puVar13[2] = *puVar19;
  puVar13[3] = uVar4;
  *puVar13 = uVar12;
  puVar13[1] = uVar8;
  return puVar13;
code_r0x000140af7674:
  puVar42[1] = (ulonglong)param_2;
  *(byte *)puVar42 = 1;
  *(byte *)(unaff_RDI + 7) = (byte)unaff_RDI[7] + 1;
  unaff_RSI = puVar42;
  goto LAB_140af76f8;
code_r0x000140af8145:
  do {
    puVar13 = (ulonglong *)((longlong)in_R11 + (longlong)in_R10);
    puVar33 = puVar30;
    do {
      unaff_RSI = (ulonglong *)((longlong)puVar13 + -1);
      puVar13 = puVar15;
      puVar40 = puVar33;
      puVar16 = param_4;
      if (unaff_R12 == (ulonglong *)0x0) goto LAB_140af81c9;
code_r0x000140af8155:
      puVar31 = puVar40;
      puVar13 = unaff_RSI;
      param_4 = puVar16;
      if (puVar16 <= unaff_RSI) goto code_r0x000140af82ab;
code_r0x000140af815e:
      uVar45 = (uint)unaff_R14;
      uVar11 = *unaff_R15;
      unaff_R12 = (ulonglong *)((longlong)unaff_R12 + 1);
      unaff_R15 = (uint *)((longlong)unaff_R15 + -1);
      puVar32 = puVar31;
      puVar33 = puVar31;
    } while ((byte)uVar11 == puVar43[(longlong)puVar13]);
code_r0x000140af8172:
    unaff_RBP = (ulonglong *)((longlong)unaff_RBP + (-(longlong)unaff_R12 - (longlong)puVar15));
    param_2[5] = (ulonglong)unaff_RBP;
    cVar44 = (char)uVar45;
    unaff_RSI = puVar15;
    puVar16 = puVar17;
    puVar13 = puVar17;
    puVar36 = puVar32;
    puVar17 = unaff_RDI;
    while( true ) {
      unaff_R15 = (uint *)(ulonglong)uVar45;
      puVar15 = unaff_RSI;
      unaff_RSI = puVar13;
      puVar37 = puVar36;
      unaff_RDI = puVar17;
      while( true ) {
        puVar17 = puVar16;
        if (cVar44 == '\0') {
          param_2[7] = (ulonglong)unaff_RSI;
          puVar32 = puVar37;
          in_R10 = unaff_RBP;
code_r0x000140af80f4:
          unaff_RBP = in_R10;
          puVar37 = puVar32;
          unaff_R13 = unaff_RSI;
        }
        in_R10 = (ulonglong *)((longlong)unaff_RBP - (longlong)puVar17);
        puVar30 = puVar37;
        if (param_4 <= in_R10) goto LAB_140af822b;
LAB_140af8106:
        if (((ulonglong)unaff_RBX >> ((ulonglong)(byte)puVar43[(longlong)in_R10] & 0x3f) & 1) != 0)
        break;
LAB_140af81a0:
        param_2[5] = (ulonglong)in_R10;
        cVar44 = (char)unaff_R15;
        unaff_RBP = in_R10;
        puVar16 = puVar17;
        unaff_RSI = puVar17;
        puVar37 = puVar30;
      }
      in_R11 = puVar15;
      if (unaff_R13 < puVar15) {
        in_R11 = unaff_R13;
      }
      unaff_R14 = (ulonglong)unaff_R15 & 0xffffffff;
      if (((ulonglong)unaff_R15 & 1) != 0) {
        in_R11 = puVar15;
      }
      puVar33 = puVar30;
      puVar16 = (ulonglong *)((longlong)in_R11 + -1);
      if ((ulonglong *)((longlong)in_R11 + -1) < puVar17) break;
LAB_140af81c0:
      puVar13 = puVar15;
      if (in_R11 != (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar33 + -8) = 0x140af82bf;
        pdb_142dc81f2(puVar16);
      }
LAB_140af81c9:
      unaff_RSI = unaff_R13;
      if ((char)unaff_R14 != '\0') {
        unaff_RSI = puVar17;
      }
      unaff_R15 = (uint *)(puVar43 + (longlong)in_R10);
      puStack_58 = param_2;
      puVar34 = puVar33;
      unaff_R12 = puVar13;
LAB_140af81e0:
      do {
        cVar44 = (char)unaff_R14;
        param_2 = puStack_58;
        puVar15 = puVar13;
        puVar16 = puVar17;
        puVar38 = puVar34;
        puVar13 = unaff_RSI;
        if (unaff_RSI <= unaff_R12) goto LAB_140af823c;
code_r0x000140af81e5:
        puVar17 = puVar16;
        if (puVar17 <= unaff_R12) {
          if (puVar15 <= puVar17) {
            puVar15 = puVar17;
          }
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar34 + -8) = 0x140af8282;
          pdb_142dc81f2(puVar15);
        }
        in_R11 = (ulonglong *)((longlong)in_R10 + (longlong)unaff_R12);
        param_2 = puStack_58;
        puVar24 = puVar34;
code_r0x000140af81f2:
        puVar39 = puVar24;
        puVar16 = puVar17;
        puVar35 = puVar39;
        unaff_RSI = puVar13;
        if (param_4 <= in_R11) {
          puVar13 = (ulonglong *)((longlong)in_R10 + (longlong)puVar15);
          if ((ulonglong *)((longlong)in_R10 + (longlong)puVar15) < param_4) {
            puVar13 = param_4;
          }
          goto code_r0x000140af8296;
        }
code_r0x000140af81fb:
        puVar17 = puVar16;
        uVar45 = (uint)unaff_R14;
        pbVar1 = (byte *)((longlong)unaff_RDI + (longlong)unaff_R12);
        pbVar2 = (byte *)((longlong)unaff_R15 + (longlong)unaff_R12);
        puStack_58 = param_2;
        puVar13 = puVar15;
        puVar23 = puVar35;
        puVar34 = puVar35;
        unaff_R12 = (ulonglong *)((longlong)unaff_R12 + 1);
      } while (*pbVar1 == *pbVar2);
code_r0x000140af820b:
      puVar36 = puVar23;
      puStack_58 = param_2;
      puVar13 = *(ulonglong **)(puVar36 + 0x30);
      unaff_RBP = (ulonglong *)((longlong)unaff_RBP - (longlong)puVar13);
      puStack_58[5] = (ulonglong)unaff_RBP;
      unaff_RSI = puVar15;
      puVar16 = puVar17;
      puVar17 = unaff_RDI;
code_r0x000140af8217:
      cVar44 = (char)uVar45;
      param_2 = puStack_58;
    }
    unaff_R12 = (ulonglong *)-(longlong)in_R11;
    unaff_R15 = (uint *)((byte *)((longlong)unaff_RDI + -1) + (longlong)in_R11);
  } while( true );
code_r0x000140af82ab:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar40 + -8) = 0x140af82b0;
  pdb_142dc81f2(unaff_RSI,puVar16);
LAB_140af823c:
  param_2[5] = (ulonglong)in_R10;
  if (cVar44 == '\0') {
    param_2[7] = (ulonglong)puVar17;
  }
  puVar15 = *(ulonglong **)(puVar38 + 0x28);
  puVar15[1] = (ulonglong)in_R10;
  puVar15[2] = (ulonglong)unaff_RBP;
  param_2 = (ulonglong *)0x1;
LAB_140af825b:
  *puVar15 = (ulonglong)param_2;
code_r0x000140af826e:
  return param_2;
}

