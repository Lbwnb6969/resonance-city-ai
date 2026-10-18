// VA 0x141b29a20, PDB extent 373 bytes
// country_core::systems::audio::elevation_supports_audio::elevation_supports_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/elevation_supports_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::elevation_supports_audio::elevation_supports_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/elevation_supports_audio.rs
   Extent: 373 */

void pdb_141b29a20(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  longlong *unaff_RBP;
  longlong *plVar17;
  longlong *plVar18;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  undefined1 in_XMM1 [16];
  ulonglong auStack_c8 [3];
  longlong lStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  longlong lStack_70;
  undefined *puStack_68;
  ulonglong *puStack_60;
  undefined8 uStack_58;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  char *pcVar10;
  
  puVar16 = auStack_78;
  puVar2 = (ulonglong *)*param_1;
  lVar3 = param_1[1];
  uVar13 = *puVar2;
  uVar19 = 0;
  uVar7 = uVar13 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar7 = uVar19;
  }
  uVar20 = uVar13 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar20 = uVar19;
  }
  plVar11 = (longlong *)(uVar7 * 0x18 + *(longlong *)(lVar3 + 8));
  uVar13 = *(ulonglong *)(lVar3 + 0x10) - uVar7;
  if (*(ulonglong *)(lVar3 + 0x10) < uVar7) {
    plVar11 = (longlong *)0x8;
    uVar13 = uVar19;
  }
  plVar8 = (longlong *)(uVar20 * 0x18 + *(longlong *)(lVar3 + 0x28));
  uVar7 = *(ulonglong *)(lVar3 + 0x30) - uVar20;
  if (*(ulonglong *)(lVar3 + 0x30) < uVar20) {
    plVar8 = (longlong *)0x8;
    uVar7 = uVar19;
  }
  *puVar2 = (*(longlong *)(lVar3 + 0x40) - uVar7) - uVar13;
  plVar1 = plVar11 + uVar13 * 3;
  plVar17 = plVar8 + uVar7 * 3;
  puVar4 = (undefined4 *)*param_2;
LAB_141b29aed:
  if ((plVar11 == (longlong *)0x0) || (plVar11 == plVar1)) {
    if ((plVar8 == (longlong *)0x0) || (plVar8 == plVar17)) {
      return;
    }
    plVar9 = plVar8 + 3;
    plVar11 = (longlong *)0x0;
    plVar12 = plVar8;
  }
  else {
    plVar9 = plVar8;
    plVar12 = plVar11;
    plVar11 = plVar11 + 3;
  }
  *puVar2 = *puVar2 + 1;
  plVar15 = plVar12 + 1;
  plVar18 = (longlong *)
            (&UNK_143392dcc +
            *(int *)(&UNK_143392dcc + (ulonglong)*(byte *)((longlong)plVar12 + 0x14) * 4));
  plVar8 = plVar9;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((longlong)plVar12 + 0x14)) {
  case 0:
    goto LAB_141b29aed;
  case 1:
    puStack_48 = (undefined *)CONCAT44(puStack_48._4_4_,(int)plVar12[2]);
    ppppppuStack_50 = (undefined8 ******)*plVar15;
    uVar6 = 0x26;
    puVar14 = &UNK_143392550;
    break;
  case 2:
    puStack_48 = (undefined *)CONCAT44(puStack_48._4_4_,(int)plVar12[2]);
    ppppppuStack_50 = (undefined8 ******)*plVar15;
    uVar6 = 0x23;
    puVar14 = &UNK_143392576;
    break;
  case 3:
    puStack_48 = (undefined *)CONCAT44(puStack_48._4_4_,(int)plVar12[2]);
    ppppppuStack_50 = (undefined8 ******)*plVar15;
    uVar6 = 0x24;
    puVar14 = &UNK_143392599;
    break;
  case 4:
    goto code_r0x000141b2b292;
  default:
    auVar21 = in_XMM0 & in_XMM1;
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)plVar9 + 1) = '\x01';
      *(char *)plVar9 = '\0';
      return;
    }
    goto LAB_141b2b366;
  case 6:
    out(*puVar4,(short)plVar15);
    if (0xfffffffebcc6d233 <
        (ulonglong)
        (longlong)*(int *)(&UNK_143392dcc + (ulonglong)*(byte *)((longlong)plVar12 + 0x14) * 4)) {
      *(char *)((longlong)plVar17 + 0x32) =
           *(char *)((longlong)plVar17 + 0x32) + (char)((ulonglong)plVar15 >> 8);
      *(char *)((longlong)plVar9 + 1) = '\x02';
      *(char *)plVar9 = '\0';
      return;
    }
    if ((int)plVar15 == 0 && (int)plVar11 == 0) {
      *(char *)((longlong)plVar9 + 1) = '\0';
      *(char *)plVar9 = '\0';
      return;
    }
    goto LAB_141b2b366;
  case 8:
    cVar5 = (char)plVar9 + -0x78;
    pcVar10 = (char *)CONCAT71((int7)((ulonglong)plVar9 >> 8),cVar5);
    *pcVar10 = *pcVar10 + cVar5;
    return;
  case 0xc:
    *(char *)plVar9 = (char)*plVar9 + (char)plVar9;
    if (plVar15 == (longlong *)0x0 && plVar11 == (longlong *)0x0) {
      *(char *)((longlong)plVar9 + 1) = '\x05';
      *(char *)plVar9 = '\0';
      return;
    }
LAB_141b2b366:
    *(char *)((longlong)plVar9 + 1) = '\x06';
    *(char *)plVar9 = '\0';
    return;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x16:
    goto code_r0x000141b2ba9a;
  case 0x13:
    plVar17 = (longlong *)((ulonglong)&stack0xffffffffffffffc8 & 0xffffffff);
    plVar17[-1] = -2;
    if (*plVar11 == -0x7fffffffffffffff) {
      switch((char)plVar11[1]) {
      case '\0':
      case '\x01':
      case '\x02':
      case '\x06':
        goto code_r0x000141b2bada;
      case '\x03':
        plVar15 = (longlong *)plVar11[2];
        if (plVar15 == (longlong *)0x0) {
          return;
        }
        plVar11 = (longlong *)plVar11[3];
        plVar18 = (longlong *)0x1;
        puVar16 = &stack0xffffffffffffffd0;
        goto code_r0x0001406abac0;
      case '\x04':
        uVar13 = plVar11[3];
        break;
      default:
        puStack_48 = &UNK_143392dcc;
        uStack_58 = 0xfffffffffffffffe;
        lVar3 = plVar11[2];
        if (lVar3 == 0) {
          lStack_88 = 0;
        }
        else {
          lStack_b0 = plVar11[3];
          lStack_88 = plVar11[4];
          auStack_c8[1] = 0;
          uStack_a0 = 0;
          auStack_c8[2] = lVar3;
          lStack_98 = lVar3;
          lStack_90 = lStack_b0;
        }
        auStack_c8[0] = (ulonglong)(lVar3 != 0);
        uStack_a8 = auStack_c8[0];
        ppppppuStack_50 = &ppppppuStack_50;
        pdb_14192c4b0(&puStack_80,auStack_c8);
        if (puStack_80 != (undefined *)0x0) {
          do {
            puStack_68 = puStack_80 + lStack_70 * 0x20;
            puStack_60 = auStack_c8;
            if (*(ulonglong *)(puStack_80 + lStack_70 * 0x18 + 0x168) != 0) {
              pub_1406abac0(*(byte **)(puStack_80 + lStack_70 * 0x18 + 0x170),
                            *(ulonglong *)(puStack_80 + lStack_70 * 0x18 + 0x168),1);
            }
            pdb_140966d70(&puStack_68);
            pdb_14192c4b0(&puStack_80,auStack_c8);
          } while (puStack_80 != (undefined *)0x0);
        }
        return;
      }
      goto code_r0x000141b2baa3;
    }
    plVar17[-2] = *plVar11;
    plVar17[-3] = (longlong)plVar11;
    puStack_80 = &UNK_141b2ba78;
    pdb_1409a45e0(plVar11 + 3);
    plVar15 = (longlong *)plVar17[-2];
    if (SBORROW8(0,(longlong)plVar15)) {
      return;
    }
    if (plVar15 == (longlong *)0x0) {
      return;
    }
    plVar11 = *(longlong **)(plVar17[-3] + 8);
    plVar18 = (longlong *)0x1;
    puVar16 = &stack0xffffffffffffffd0;
    plVar17 = unaff_RBP;
    goto code_r0x000141b2ba9a;
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    uVar13 = (ulonglong)*(uint *)(plVar9 + 3);
    plVar11 = plVar18;
code_r0x000141b2baa3:
    lVar3 = plVar11[4];
    plVar17[-2] = uVar13;
    plVar17[-3] = (longlong)plVar11;
    puStack_80 = &UNK_141b2bab4;
    pdb_14098ae50(uVar13,lVar3);
    if (*(longlong *)(plVar17[-3] + 0x10) == 0) {
code_r0x000141b2bada:
      return;
    }
    plVar15 = (longlong *)(*(longlong *)(plVar17[-3] + 0x10) << 5);
    plVar18 = (longlong *)0x8;
    plVar11 = (longlong *)plVar17[-2];
    puVar16 = &stack0xffffffffffffffd0;
    goto code_r0x0001406abac0;
  case 0x17:
  case 0x18:
    *(uint *)((longlong)plVar17 + 0x79) = *(uint *)((longlong)plVar17 + 0x79) & (uint)plVar17;
    pcVar10 = (char *)((longlong)plVar9 + 0x6d);
    *pcVar10 = *pcVar10 + '\x01';
    do {
    } while (-1 < *pcVar10);
    in((short)plVar15);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puStack_80 = (undefined *)0x141b29ae7;
  in_XMM0._0_8_ = pdb_140abb950(puVar4,puVar14,uVar6,&ppppppuStack_50);
  in_XMM0._8_8_ = extraout_XMM0_Qb;
  goto LAB_141b29aed;
code_r0x000141b2b292:
  UNRECOVERED_JUMPTABLE =
       (code *)((longlong)*(int *)((longlong)plVar18 * 4 + 0x43392ddc) + 0x43392ddc);
                    /* WARNING: Could not emulate address calculation at 0x000141b2b298 */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x43392ddc,plVar15,UNRECOVERED_JUMPTABLE);
  return;
code_r0x000141b2ba9a:
  unaff_RBP = plVar17;
code_r0x0001406abac0:
  *(longlong **)(puVar16 + -8) = unaff_RBP;
  *(undefined4 **)(puVar16 + -0x10) = puVar4;
  plVar8 = plVar11;
  if ((longlong *)0x10 < plVar18) {
    plVar8 = (longlong *)plVar11[-1];
  }
  *(undefined **)(puVar16 + -0x40) = &UNK_140f3c37e;
  uVar6 = GetProcessHeap(plVar11,plVar15);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar6,0,plVar8);
  return;
}

