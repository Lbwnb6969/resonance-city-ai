// VA 0x140af7580, PDB extent 736 bytes
// country_core::systems::audio::clutter_audio::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/clutter_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140af8178) overlaps instruction at (ram,0x000140af8177)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140af7bdc) */
/* WARNING: Removing unreachable block (ram,0x000140af7c27) */
/* WARNING: Removing unreachable block (ram,0x000140af7bdf) */
/* WARNING: Removing unreachable block (ram,0x000140af7d62) */
/* WARNING: Removing unreachable block (ram,0x000140af7bf3) */
/* WARNING: Removing unreachable block (ram,0x000140af7da1) */
/* WARNING: Removing unreachable block (ram,0x000140af7c12) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::clutter_audio::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/clutter_audio.rs
   Extent: 736 */

uint * pdb_140af7580(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  byte bVar13;
  longlong lVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  undefined1 *puVar20;
  uint *unaff_RBP;
  uint *unaff_RDI;
  longlong lVar21;
  uint *puVar22;
  uint *in_R10;
  uint *in_R11;
  uint *unaff_R12;
  uint *unaff_R13;
  byte unaff_R14B;
  char *unaff_R15;
  bool bVar23;
  undefined1 auStack_58 [32];
  undefined *puStack_38;
  uint *puStack_30;
  uint *puStack_28;
  undefined7 uVar12;
  
  puVar18 = (uint *)auStack_58;
  puVar19 = (uint *)auStack_58;
  puVar20 = auStack_58;
  puVar9 = *(uint **)(param_2 + 10);
  if (*(uint **)(param_2 + 8) <= puVar9) {
LAB_140af75d2:
    puStack_38 = (undefined *)0x5;
LAB_140af75db:
    uVar10 = pdb_142d84ef0(param_2,&puStack_38);
    *(undefined8 *)(param_1 + 2) = uVar10;
    *(char *)param_1 = '\x01';
    return param_1;
  }
  lVar21 = *(longlong *)(param_2 + 6);
  lVar14 = -(longlong)*(uint **)(param_2 + 8);
LAB_140af75ac:
  puVar9 = (uint *)((longlong)puVar9 + 1);
  bVar13 = *(byte *)(lVar21 + -1 + (longlong)puVar9);
  puVar22 = (uint *)(ulonglong)bVar13;
  if ((uint *)0x22 < puVar22) {
LAB_140af7625:
    if (bVar13 != 0x7b) {
      puStack_38 = (undefined *)0xa;
      goto LAB_140af75db;
    }
    puVar16 = param_2 + 0xe;
    *(char *)puVar16 = (char)*puVar16 + -1;
    if ((char)*puVar16 == '\0') {
      puStack_38 = (undefined *)0x18;
      goto LAB_140af75db;
    }
    *(uint **)(param_2 + 10) = puVar9;
    pdb_1416540e0(&puStack_38);
    unaff_RBP = (uint *)((ulonglong)puStack_38 & 0xff);
    puVar17 = (uint *)&UNK_143051d10;
    uVar11 = (ulonglong)*(int *)(&UNK_143051d10 + (longlong)unaff_RBP * 4);
    puVar16 = (uint *)(&UNK_143051d10 + uVar11);
    bVar13 = (byte)puVar16;
    cVar6 = (char)puStack_30;
    iVar7 = (int)puStack_30;
    uVar12 = (undefined7)((ulonglong)puStack_30 >> 8);
    puVar9 = puStack_30;
    puVar15 = puVar16;
    unaff_RDI = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(unaff_RBP) {
    default:
      puStack_30 = (uint *)pdb_141654820(puStack_30);
      if (puStack_30 != (uint *)0x0) goto code_r0x000140af7674;
      *(char *)(param_2 + 0xe) = (char)param_2[0xe] + '\x01';
      *(char *)((longlong)param_1 + 1) = (char)puStack_38;
      uVar11 = *(ulonglong *)(param_2 + 10);
      if (*(ulonglong *)(param_2 + 8) <= uVar11) goto code_r0x000140af76c7;
      goto code_r0x000140af76a1;
    case (uint *)0x27:
code_r0x000140af7674:
      *(uint **)(param_1 + 2) = puStack_30;
      *(char *)param_1 = '\x01';
      *(char *)(param_2 + 0xe) = (char)param_2[0xe] + '\x01';
      return param_1;
    case (uint *)0x28:
      *param_1 = *param_1 + (int)in_R10;
code_r0x000140af77e5:
      *(char *)((longlong)param_1 + 1) = '\x16';
      goto code_r0x000140af76f4;
    case (uint *)0x29:
      *(char *)puStack_30 = (char)*puStack_30 + cVar6;
      goto code_r0x000140af7ab0;
    case (uint *)0x2a:
      if (puVar22 == (uint *)0x0 && (uint)puVar16 == 0x6b63) {
        *(char *)((longlong)puStack_30 + 1) = '\x15';
        goto code_r0x000140af7e2e;
      }
      if (CONCAT11(UNK_143051d19,UNK_143051d18) == 0x706d &&
          CONCAT44(_UNK_143051d14,CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10))) ==
          0x7574536e65646c4f) {
        *(char *)((longlong)puStack_30 + 1) = '\x1d';
        goto code_r0x000140af7e2e;
      }
      if (CONCAT11(UNK_143051d19,UNK_143051d18) == 0x6c6c &&
          CONCAT44(_UNK_143051d14,CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10))) ==
          0x6f52636972626146) {
        *(char *)((longlong)puStack_30 + 1) = '!';
        goto code_r0x000140af7e2e;
      }
      if (CONCAT11(UNK_143051d19,UNK_143051d18) == 0x6c6c &&
          CONCAT44(_UNK_143051d14,CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10))) ==
          0x6174536461657242) {
        *(char *)((longlong)puStack_30 + 1) = '\"';
        goto code_r0x000140af7e2e;
      }
      puVar15 = (uint *)0x6f6f72426b636152;
code_r0x000140af7a98:
      puVar9 = puStack_30;
      puVar20 = auStack_58;
      if ((short)puVar17[2] != 0x736d || puVar15 != *(uint **)puVar17) {
LAB_140af7db0:
        *(undefined8 *)(puVar20 + -8) = 0x140af7dce;
        uVar10 = pdb_142d8f140(puVar17,lVar21,&UNK_143051490,0x27);
        *(undefined8 *)(puVar9 + 2) = uVar10;
        *(char *)puVar9 = '\x01';
        return puVar9;
      }
code_r0x000140af7ab0:
      *(char *)((longlong)puStack_30 + 1) = '%';
      goto code_r0x000140af7e2e;
    case (uint *)0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (uint *)0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (uint *)0x2d:
      puVar9 = (uint *)CONCAT71(uVar12,cVar6 + 'A');
      uVar8 = (uint)puVar16 ^ 0x7465;
      param_2 = puVar17;
code_r0x000140af7b3c:
      bVar23 = (int)puVar22 == 0 && uVar8 == 0;
code_r0x000140af7b3f:
      puVar17 = param_2;
      puVar20 = (undefined1 *)puVar18;
      if (bVar23) {
        *(char *)((longlong)puVar9 + 1) = '\x19';
        puStack_30 = puVar9;
        goto code_r0x000140af7e2e;
      }
      goto LAB_140af7db0;
    case (uint *)0x2e:
      *(char *)puStack_30 = (char)*puStack_30 + cVar6;
      if (CONCAT17(UNK_143051d1a,
                   CONCAT16(UNK_143051d19,
                            CONCAT15(UNK_143051d18,CONCAT41(_UNK_143051d14,UNK_143051d13)))) ==
          0x6c6c617453656967 &&
          CONCAT44(_UNK_143051d14,CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10))) ==
          0x7453656967676556) {
        *(char *)((longlong)puStack_30 + 1) = '#';
        goto code_r0x000140af7e2e;
      }
      goto LAB_140af7db0;
    case (uint *)0x2f:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(unaff_RBP) {
      default:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x30:
      case (uint *)0x31:
      case (uint *)0x32:
      case (uint *)0x34:
      case (uint *)0x35:
      case (uint *)0x36:
      case (uint *)0x37:
      case (uint *)0x38:
      case (uint *)0x39:
      case (uint *)0x3a:
      case (uint *)0x3b:
      case (uint *)0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x46:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (uint *)0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    case (uint *)0x30:
    case (uint *)0x31:
    case (uint *)0x32:
    case (uint *)0x34:
    case (uint *)0x35:
    case (uint *)0x36:
    case (uint *)0x37:
    case (uint *)0x38:
    case (uint *)0x39:
    case (uint *)0x3a:
    case (uint *)0x3b:
    case (uint *)0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (uint *)0x33:
      if (0xfffffffebcfae2ef >= uVar11) {
        puVar19 = unaff_RBP + 2;
        if (puVar16 == (uint *)0x0) {
          *(char *)((longlong)puStack_30 + 1) = '\f';
          goto code_r0x000140af7e2e;
        }
        puVar16 = (uint *)(CONCAT44(_UNK_143051d14,
                                    CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10)))
                          ^ 0x73756f6864726942);
      }
      if (UNK_143051d18 == 'e' && puVar16 == (uint *)0x0) {
        *(char *)((longlong)puStack_30 + 1) = '\x14';
      }
      else {
        puVar20 = (undefined1 *)puVar19;
        if (UNK_143051d18 != 'k' ||
            CONCAT44(_UNK_143051d14,CONCAT13(UNK_143051d13,CONCAT21(_UNK_143051d11,UNK_143051d10)))
            != 0x636f526e65646c4f) goto LAB_140af7db0;
        *(char *)((longlong)puStack_30 + 1) = '\x1e';
      }
      goto code_r0x000140af7e2e;
    case (uint *)0x3d:
      *puStack_30 = *puStack_30 + iVar7;
      *(char *)((longlong)puStack_30 + -0x47) = *(char *)((longlong)puStack_30 + -0x47) + bVar13;
      cVar6 = in(0x1d10);
      *(char *)param_2 = cVar6;
      out((char)*param_1,0x1d10);
      out(*(undefined4 *)((longlong)param_1 + 1),0x1d10);
      pbVar1 = (byte *)((ulonglong)*(uint *)((longlong)puStack_30 + 0x33) - 0x7d);
      *pbVar1 = *pbVar1 | (byte)*(uint *)((longlong)puStack_30 + 0x33);
      pcVar5 = (code *)swi(1);
      puVar9 = (uint *)(*pcVar5)();
      return puVar9;
    case (uint *)0x3e:
      goto code_r0x000140af81e5;
    case (uint *)0x3f:
      goto code_r0x000140af82ab;
    case (uint *)0x40:
      *(char *)puStack_30 = (char)*puStack_30 + cVar6;
      *(char *)puVar16 = (char)*puVar16 + '\x1d';
      pbVar1 = (byte *)((longlong)puStack_30 + -0x75);
      *pbVar1 = *pbVar1 >> 4 | *pbVar1 << 4;
      puVar9 = (uint *)((ulonglong)puStack_30 & 0xffffffffffffff28);
LAB_140af822b:
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9 = (uint *)0x0;
      puVar15 = puStack_30;
      goto LAB_140af825b;
    case (uint *)0x41:
      return puStack_30;
    case (uint *)0x42:
      puVar9 = (uint *)CONCAT71(uVar12,(cVar6 + -0x27) - (0xfffffffebcfae2ef < uVar11));
      goto code_r0x000140af81fb;
    case (uint *)0x43:
      if (puVar16 != (uint *)0x1) {
        *(char *)((longlong)puStack_30 + -0x77) =
             *(char *)((longlong)puStack_30 + -0x77) + (char)puVar22;
        puStack_38 = &UNK_143051918;
        puVar9 = (uint *)pdb_140f66090((ulonglong)puStack_30 & 0xffffffffffffff30,&UNK_14305193c,0xc
                                       ,&puStack_28);
        return puVar9;
      }
      puVar17 = (uint *)0x43051908;
      uVar10 = 0xd;
      break;
    case (uint *)0x44:
      pbVar1 = (byte *)((longlong)puStack_30 + -0x73);
      bVar4 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar13;
      puStack_30 = (uint *)(ulonglong)(iVar7 + 0x2559653 + (uint)CARRY1(bVar4,bVar13));
      uVar10 = 0xc;
      break;
    case (uint *)0x45:
      puVar9 = (uint *)CONCAT71((int7)((ulonglong)puVar16 >> 8),
                                bVar13 + (&UNK_143051ce1)[(longlong)puVar16 * 4 + uVar11]);
      goto code_r0x000140af8296;
    case (uint *)0x46:
      pbVar1 = (byte *)((longlong)puStack_30 + -0x73);
      bVar4 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar13;
      puStack_30 = (uint *)(ulonglong)(iVar7 + 0x255967c + (uint)CARRY1(bVar4,bVar13));
      uVar10 = 2;
      break;
    case (uint *)0x47:
      goto code_r0x000140af8217;
    }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar9 = (uint *)(**(code **)(*(longlong *)(puStack_30 + 2) + 0x18))
                               (*(undefined8 *)puStack_30,puVar17,uVar10,
                                *(code **)(*(longlong *)(puStack_30 + 2) + 0x18));
    return puVar9;
  }
  if ((0x100002600U >> ((ulonglong)puVar22 & 0x3f) & 1) != 0) goto code_r0x000140af75be;
  if (puVar22 != (uint *)0x22) goto LAB_140af7625;
  pdb_1416570c0(&puStack_38);
  puVar15 = (uint *)&UNK_143051c70;
  uVar11 = (ulonglong)*(int *)(&UNK_143051c70 + ((ulonglong)puStack_38 & 0xff) * 4);
  puVar9 = (uint *)(&UNK_143051c70 + uVar11);
  puVar16 = param_1;
  puVar17 = puVar22;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((ulonglong)puStack_38 & 0xff) {
  case 0:
    *(char *)((longlong)param_1 + 1) = '\0';
    goto code_r0x000140af76f4;
  case 1:
    *(char *)((longlong)param_1 + 1) = '\x01';
    goto code_r0x000140af76f4;
  case 2:
    *(char *)((longlong)param_1 + 1) = '\x02';
    goto code_r0x000140af76f4;
  case 3:
    *(char *)((longlong)param_1 + 1) = '\x03';
    goto code_r0x000140af76f4;
  case 4:
    *(char *)((longlong)param_1 + 1) = '\x04';
    goto code_r0x000140af76f4;
  case 5:
    *(char *)((longlong)param_1 + 1) = '\x05';
    goto code_r0x000140af76f4;
  case 6:
    *(char *)((longlong)param_1 + 1) = '\x06';
    goto code_r0x000140af76f4;
  case 7:
    *(char *)((longlong)param_1 + 1) = '\a';
    goto code_r0x000140af76f4;
  case 8:
    *(char *)((longlong)param_1 + 1) = '\b';
    goto code_r0x000140af76f4;
  case 9:
  case 0x50:
    *(char *)((longlong)param_1 + 1) = '\t';
    goto code_r0x000140af76f4;
  case 10:
    *(char *)((longlong)param_1 + 1) = '\n';
    goto code_r0x000140af76f4;
  case 0xb:
    *(char *)((longlong)param_1 + 1) = '\v';
    goto code_r0x000140af76f4;
  case 0xc:
    *(char *)((longlong)param_1 + 1) = '\f';
    goto code_r0x000140af76f4;
  case 0xd:
    *(char *)((longlong)param_1 + 1) = '\r';
    goto code_r0x000140af76f4;
  case 0xe:
    *(char *)((longlong)param_1 + 1) = '\x0e';
    goto code_r0x000140af76f4;
  case 0xf:
    *(char *)((longlong)param_1 + 1) = '\x0f';
    goto code_r0x000140af76f4;
  case 0x10:
    *(char *)((longlong)param_1 + 1) = '\x10';
    goto code_r0x000140af76f4;
  case 0x11:
    *(char *)((longlong)param_1 + 1) = '\x11';
    goto code_r0x000140af76f4;
  case 0x12:
    *(char *)((longlong)param_1 + 1) = '\x12';
    goto code_r0x000140af76f4;
  case 0x13:
    *(char *)((longlong)param_1 + 1) = '\x13';
    goto code_r0x000140af76f4;
  case 0x14:
    *(char *)((longlong)param_1 + 1) = '\x14';
    goto code_r0x000140af76f4;
  case 0x15:
    *(char *)((longlong)param_1 + 1) = '\x15';
    goto code_r0x000140af76f4;
  case 0x16:
    goto code_r0x000140af77e5;
  case 0x17:
    *(char *)((longlong)param_1 + 1) = '\x17';
    goto code_r0x000140af76f4;
  case 0x18:
    *(char *)((longlong)param_1 + 1) = '\x18';
    goto code_r0x000140af76f4;
  case 0x19:
    *(char *)((longlong)param_1 + 1) = '\x19';
    goto code_r0x000140af76f4;
  case 0x1a:
    *(char *)((longlong)param_1 + 1) = '\x1a';
    goto code_r0x000140af76f4;
  case 0x1b:
    *(char *)((longlong)param_1 + 1) = '\x1b';
    goto code_r0x000140af76f4;
  case 0x1c:
    *(char *)((longlong)param_1 + 1) = '\x1c';
    goto code_r0x000140af76f4;
  case 0x1d:
    *(char *)((longlong)param_1 + 1) = '\x1d';
    goto code_r0x000140af76f4;
  case 0x1e:
    *(char *)((longlong)param_1 + 1) = '\x1e';
    goto code_r0x000140af76f4;
  case 0x1f:
    *(char *)((longlong)param_1 + 1) = '\x1f';
    goto code_r0x000140af76f4;
  case 0x20:
    *(char *)((longlong)param_1 + 1) = ' ';
    goto code_r0x000140af76f4;
  case 0x21:
    *(char *)((longlong)param_1 + 1) = '!';
    goto code_r0x000140af76f4;
  case 0x22:
    *(char *)((longlong)param_1 + 1) = '\"';
    goto code_r0x000140af76f4;
  case 0x23:
    *(char *)((longlong)param_1 + 1) = '#';
    goto code_r0x000140af76f4;
  case 0x24:
    *(char *)((longlong)param_1 + 1) = '$';
    goto code_r0x000140af76f4;
  case 0x25:
    *(char *)((longlong)param_1 + 1) = '%';
    goto code_r0x000140af76f4;
  case 0x26:
    *(char *)((longlong)param_1 + 1) = '&';
    goto code_r0x000140af76f4;
  case 0x27:
    *(uint **)(param_1 + 2) = puStack_30;
    *(char *)param_1 = '\x01';
    return param_1;
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
    *unaff_RDI = *unaff_RDI + (int)lVar21;
    goto code_r0x000140af76f4;
  case 0x55:
    if (0xfffffffebcfae38f < uVar11) {
      puVar18 = unaff_RBP + 2;
      if (puVar9 == (uint *)0x0) {
        (&UNK_143051c71)[uVar11] = 0xd;
        puStack_30 = puVar9;
        break;
      }
      if ((short)param_2[1] == 0x6c65 && *param_2 == 0x72726142) {
        (&UNK_143051c71)[uVar11] = 0x17;
        puStack_30 = puVar9;
        break;
      }
      uVar8 = *param_2 ^ 0x6b736142;
      puVar22 = (uint *)(ulonglong)((ushort)param_2[1] ^ 0x7465);
      goto code_r0x000140af7b3c;
    }
    out(*param_1,(short)param_2);
    puStack_30 = puVar9;
    puVar17 = param_2;
    goto code_r0x000140af7a98;
  case 0x56:
    puStack_30 = (uint *)(ulonglong)((int)puVar9 + 0xb9480000);
    if (*(undefined **)param_2 == &UNK_143051c70) {
      *(char *)((longlong)puStack_30 + 1) = '\v';
    }
    else if (*(longlong *)param_2 == 0x7372657474756853) {
      *(char *)((longlong)puStack_30 + 1) = '\x0e';
    }
    else if (*(longlong *)param_2 == 0x6e67695364616f52) {
      *(char *)((longlong)puStack_30 + 1) = '\x16';
    }
    else if (*(longlong *)param_2 == 0x6b63617473796148) {
      *(char *)((longlong)puStack_30 + 1) = '\x18';
    }
    else if (*(longlong *)param_2 == 0x676f4c6e65646c4f) {
      *(char *)((longlong)puStack_30 + 1) = '\x1c';
    }
    else {
      puVar9 = puStack_30;
      puVar17 = param_2;
      puVar20 = auStack_58;
      if (*(longlong *)param_2 != 0x6c6c6542726f6f44) goto LAB_140af7db0;
      *(char *)((longlong)puStack_30 + 1) = '&';
    }
    break;
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
    *param_1 = *param_1 + 0x2600;
    puStack_30 = puVar9;
    break;
  case 0x5b:
    UNK_143051c79 = UNK_143051c79 + (char)puVar9;
    bVar23 = UNK_143051c79 == '\0';
    puVar18 = unaff_RBP + 2;
    goto code_r0x000140af7b3f;
  case 0x65:
    *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
    puVar17 = param_2;
    puVar20 = auStack_58;
    if ((char)param_2[1] == 'l' && *param_2 == 0x69766e41) {
      (&UNK_143051c71)[uVar11] = 0x20;
      puStack_30 = puVar9;
      break;
    }
    goto LAB_140af7db0;
  case 0x66:
    goto code_r0x000140af8145;
  case 0x67:
    goto code_r0x000140af820b;
  case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x69:
    goto LAB_140af81c0;
  case 0x6a:
    goto code_r0x000140af815e;
  case 0x6b:
    goto LAB_140af823c;
  case 0x6c:
    (&UNK_143051c71)[uVar11] = (&UNK_143051c71)[uVar11] + '&' + (0xfffffffebcfae38f < uVar11);
    goto LAB_140af825b;
  case 0x6d:
    goto code_r0x000140af81f2;
  case 0x6e:
    goto code_r0x000140af826e;
  case 0x6f:
    uVar8 = in(0x48);
    puVar9 = (uint *)(ulonglong)uVar8;
    puVar9[10] = (uint)unaff_RBP;
    param_1 = param_2;
    goto joined_r0x000140af8220;
  }
code_r0x000140af7e2e:
  *(char *)puStack_30 = '\0';
  return puStack_30;
code_r0x000140af75be:
  *(uint **)(param_2 + 10) = puVar9;
  if ((char *)(lVar14 + (longlong)puVar9) == (char *)0x0) goto LAB_140af75d2;
  goto LAB_140af75ac;
code_r0x000140af76a1:
  uVar11 = uVar11 + 1;
  bVar13 = *(byte *)(*(longlong *)(param_2 + 6) + -1 + uVar11);
  if ((0x20 < (ulonglong)bVar13) || ((0x100002600U >> ((ulonglong)bVar13 & 0x3f) & 1) == 0)) {
    if (bVar13 == 0x7d) {
      *(ulonglong *)(param_2 + 10) = uVar11;
      *(char *)((longlong)param_1 + 1) = (char)puStack_38;
code_r0x000140af76f4:
      cVar6 = '\0';
      goto code_r0x000140af76f6;
    }
    puStack_38 = (undefined *)0xa;
    goto code_r0x000140af76d0;
  }
  *(ulonglong *)(param_2 + 10) = uVar11;
  if (uVar11 == *(ulonglong *)(param_2 + 8)) {
code_r0x000140af76c7:
    puStack_38 = (undefined *)0x3;
code_r0x000140af76d0:
    uVar10 = pdb_142d855a0(param_2,&puStack_38);
    *(undefined8 *)(param_1 + 2) = uVar10;
    cVar6 = '\x01';
code_r0x000140af76f6:
    *(char *)param_1 = cVar6;
    return param_1;
  }
  goto code_r0x000140af76a1;
code_r0x000140af82ab:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(puVar16,puVar17);
code_r0x000140af81e5:
  while( true ) {
    param_2 = puVar17;
    if (param_2 <= unaff_R12) {
      if (puVar15 <= param_2) {
        puVar15 = param_2;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(puVar15);
    }
    in_R11 = (uint *)((longlong)in_R10 + (longlong)unaff_R12);
code_r0x000140af81f2:
    puVar17 = param_2;
    if (puVar22 <= in_R11) break;
code_r0x000140af81fb:
    param_2 = puVar17;
    pcVar2 = (char *)((longlong)unaff_RDI + (longlong)unaff_R12);
    pcVar3 = unaff_R15 + (longlong)unaff_R12;
    unaff_R12 = (uint *)((longlong)unaff_R12 + 1);
    if (*pcVar2 != *pcVar3) {
code_r0x000140af820b:
      unaff_RBP = (uint *)((longlong)unaff_RBP - (longlong)puStack_28);
      *(uint **)(puVar9 + 10) = unaff_RBP;
      puVar17 = param_2;
      param_1 = puStack_28;
code_r0x000140af8217:
      param_2 = puVar17;
joined_r0x000140af8220:
      while( true ) {
        while( true ) {
          if (unaff_R14B == 0) {
            *(uint **)(puVar9 + 0xe) = param_1;
            unaff_R13 = param_1;
          }
          in_R10 = (uint *)((longlong)unaff_RBP - (longlong)param_2);
          if (puVar22 <= in_R10) goto LAB_140af822b;
          if ((0x100002600U >> ((ulonglong)*(byte *)(lVar21 + (longlong)in_R10) & 0x3f) & 1) != 0)
          break;
          *(uint **)(puVar9 + 10) = in_R10;
          unaff_RBP = in_R10;
          param_1 = param_2;
        }
        in_R11 = puVar15;
        if (unaff_R13 < puVar15) {
          in_R11 = unaff_R13;
        }
        if ((unaff_R14B & 1) != 0) {
          in_R11 = puVar15;
        }
        param_1 = (uint *)((longlong)in_R11 + -1);
        if (param_2 <= param_1) break;
        unaff_R12 = (uint *)-(longlong)in_R11;
        unaff_R15 = (char *)((longlong)unaff_RDI + -1) + (longlong)in_R11;
code_r0x000140af8145:
        puVar16 = (uint *)((longlong)in_R11 + (longlong)in_R10);
        puVar17 = puVar22;
        do {
          puVar16 = (uint *)((longlong)puVar16 + -1);
          puVar22 = puVar17;
          if (unaff_R12 == (uint *)0x0) goto LAB_140af81c9;
          if (puVar17 <= puVar16) goto code_r0x000140af82ab;
code_r0x000140af815e:
          cVar6 = *unaff_R15;
          unaff_R12 = (uint *)((longlong)unaff_R12 + 1);
          unaff_R15 = unaff_R15 + -1;
        } while (cVar6 == *(char *)(lVar21 + (longlong)puVar16));
        unaff_RBP = (uint *)((longlong)unaff_RBP + (-(longlong)unaff_R12 - (longlong)puVar15));
        *(uint **)(puVar9 + 10) = unaff_RBP;
        param_1 = param_2;
        puVar22 = puVar17;
      }
LAB_140af81c0:
      if (in_R11 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(param_1);
      }
LAB_140af81c9:
      param_1 = unaff_R13;
      if (unaff_R14B != 0) {
        param_1 = param_2;
      }
      unaff_R15 = (char *)(lVar21 + (longlong)in_R10);
      unaff_R12 = puVar15;
    }
    puVar17 = param_2;
    if (param_1 <= unaff_R12) {
LAB_140af823c:
      *(uint **)(puVar9 + 10) = in_R10;
      if (unaff_R14B == 0) {
        *(uint **)(puVar9 + 0xe) = param_2;
      }
      *(uint **)(puStack_30 + 2) = in_R10;
      *(uint **)(puStack_30 + 4) = unaff_RBP;
      puVar9 = (uint *)0x1;
      puVar15 = puStack_30;
LAB_140af825b:
      *(uint **)puVar15 = puVar9;
code_r0x000140af826e:
      return puVar9;
    }
  }
  puVar9 = (uint *)((longlong)in_R10 + (longlong)puVar15);
  if ((uint *)((longlong)in_R10 + (longlong)puVar15) < puVar22) {
    puVar9 = puVar22;
  }
code_r0x000140af8296:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(puVar9,puVar22);
}

