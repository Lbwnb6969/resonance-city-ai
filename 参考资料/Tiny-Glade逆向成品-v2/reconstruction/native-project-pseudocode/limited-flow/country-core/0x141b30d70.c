// VA 0x141b30d70, PDB extent 267 bytes
// country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141b314f0) overlaps instruction at (ram,0x000141b314ed)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Removing unreachable block (ram,0x000141b31238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::roof_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
   Extent: 267 */

char * pdb_141b30d70(char *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined7 uVar11;
  longlong lVar10;
  undefined *puVar12;
  ulonglong uVar13;
  ushort uVar14;
  undefined8 *puVar15;
  undefined8 *unaff_RBP;
  uint *unaff_RDI;
  code *UNRECOVERED_JUMPTABLE;
  longlong in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 in_XMM1 [16];
  undefined *puStack_88;
  undefined *puStack_70;
  byte abStack_30 [8];
  undefined8 uStack_28;
  undefined1 auStack_20 [16];
  ulonglong *puStack_10;
  
  pdb_141be75c0(abStack_30);
  if (abStack_30[0] == 5) {
    *(undefined8 *)(param_1 + 8) = uStack_28;
    *param_1 = '\x05';
    return param_1;
  }
  puVar12 = &UNK_143393b1c;
  uVar8 = (ulonglong)*(int *)(&UNK_143393b1c + (ulonglong)(uint)abStack_30[0] * 4);
  bVar16 = 0xfffffffebcc6c4e3 < uVar8;
  bVar18 = SCARRY8(uVar8,0x143393b1c);
  pcVar9 = &UNK_143393b1c + uVar8;
  bVar17 = pcVar9 == (char *)0x0;
  cVar5 = (char)pcVar9;
  uVar11 = (undefined7)((ulonglong)pcVar9 >> 8);
  uVar14 = (ushort)puStack_10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(abStack_30[0]) {
  case 6:
    if (((uint)param_3 ^ *(uint *)((longlong)puStack_10 + 3) | 0x43393b1c) == 0) {
      (&UNK_143393b1d)[uVar8] = 1;
      *pcVar9 = '\0';
      return pcVar9;
    }
    break;
  case 7:
    if ((*(byte *)((longlong)puStack_10 + 4) ^ 0x78 | 0x43393b1c) == 0) {
      (&UNK_143393b1d)[uVar8] = 2;
      *pcVar9 = '\0';
      return pcVar9;
    }
    break;
  case 8:
    if ((char)puStack_10[1] == 's' && (uint)*puStack_10 == 0x43393b1c) {
      (&UNK_143393b1d)[uVar8] = 3;
      *pcVar9 = '\0';
      return pcVar9;
    }
    break;
  case 9:
    return (char *)CONCAT71(uVar11,cVar5 + -0x7f);
  case 10:
    return pcVar9;
  case 0xb:
    if (!bVar17) {
      if (bVar18) {
        cRam000000014481c325 = cRam000000014481c325 + (char)((ulonglong)puStack_10 >> 8);
code_r0x000141b3111d:
        *pcVar9 = '\0';
        return pcVar9;
      }
      if (*(longlong *)((longlong)puStack_10 + 6) == 0x74657366666f5f70 &&
          (undefined *)*puStack_10 == &UNK_143393b1c) {
        (&UNK_143393b1d)[uVar8] = 8;
        *pcVar9 = '\0';
        return pcVar9;
      }
      goto LAB_141b3121d;
    }
    uVar13 = *puStack_10 ^ 0x7069745f76657270;
    goto code_r0x000141b3112e;
  case 0xc:
    if (bVar16 || bVar17) {
      *pcVar9 = *pcVar9 + cVar5;
      goto code_r0x000141b31179;
    }
    if (bVar17) goto code_r0x000141b31192;
    if (bVar18) {
      if (!bVar16) goto code_r0x000141b31177;
      puVar12 = (undefined *)0x666f72705f77656e;
      goto code_r0x000141b311e2;
    }
    uVar13 = (ulonglong)((uint)*puStack_10 ^ 0x43393b1c);
code_r0x000141b3112e:
    if (*(longlong *)((longlong)puStack_10 + 7) == 0x74657366666f5f70 && uVar13 == 0) {
      (&UNK_143393b1d)[uVar8] = 3;
      *pcVar9 = '\0';
      return pcVar9;
    }
LAB_141b3121d:
    (&UNK_143393b1d)[uVar8] = 0xb;
    *pcVar9 = '\0';
    return pcVar9;
  case 0xd:
    *pcVar9 = *pcVar9 + cVar5;
code_r0x000141b31192:
    if ((short)puStack_10[1] == 0x7468 && *puStack_10 == 0x676965685f77656e) {
      (&UNK_143393b1d)[uVar8] = 6;
      *pcVar9 = '\0';
      return pcVar9;
    }
    goto LAB_141b3121d;
  case 0xe:
    if (bVar18) {
      return pcVar9;
    }
    out(*(undefined4 *)param_1,uVar14);
    uVar13 = *puStack_10 ^ 0x5f77656e;
    goto code_r0x000141b311e5;
  case 0xf:
    puVar15 = (undefined8 *)&stack0xffffffffffffff80;
    cVar5 = '\x10';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar15 = puVar15 + -1;
      *puVar15 = *unaff_RBP;
      cVar5 = cVar5 + -1;
    } while ('\0' < cVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    LOCK();
    UNLOCK();
    UNK_143393b1c = cVar5;
                    /* WARNING: Could not recover jumptable at 0x000141b3108f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar9 = (char *)(*(code *)(&UNK_143393b1c + *(int *)(&UNK_143393b1c + param_3 * 4)))
                               (&UNK_143393b1c,puStack_10,
                                &UNK_143393b1c + *(int *)(&UNK_143393b1c + param_3 * 4));
    return pcVar9;
  case 0x11:
    pbVar1 = &UNK_143393ad5 + uVar8;
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + 0x1c;
    out(*param_1,uVar14);
    if (bVar2 < 0xe4 && *pbVar1 != 0) {
      UNK_143393a9d = UNK_143393a9d | 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar2 < 0xe4) {
      if ((char)puStack_10[1] == 'e' &&
          *(undefined **)(in_FS_OFFSET + (int)puStack_10) == &UNK_143393b1c) {
        (&UNK_143393b1d)[uVar8] = 9;
        goto code_r0x000141b3111d;
      }
      goto LAB_141b3121d;
    }
    bVar16 = false;
    puVar12 = (undefined *)0x76657270;
code_r0x000141b31177:
    if (!bVar16) {
code_r0x000141b31179:
      if ((short)puStack_10[1] == 0x6567 &&
          puVar12 == *(undefined **)(in_FS_OFFSET + (longlong)puStack_10)) {
        (&UNK_143393b1d)[uVar8] = 4;
        *pcVar9 = '\0';
        return pcVar9;
      }
      goto code_r0x000141b31192;
    }
code_r0x000141b311e2:
    uVar13 = (ulonglong)puVar12 ^ *puStack_10;
code_r0x000141b311e5:
    if (*(longlong *)((longlong)puStack_10 + 3) == 0x656c69666f72705f && uVar13 == 0) {
      (&UNK_143393b1d)[uVar8] = 7;
      *pcVar9 = '\0';
      return pcVar9;
    }
    goto LAB_141b3121d;
  case 0x12:
    (&UNK_143393b1d)[uVar8] = 0x1c;
    *pcVar9 = '\0';
    return pcVar9;
  default:
    bVar16 = (*(ulonglong *)((longlong)puStack_10 + 7) ^ 0x656c7974735f666f | 0x143393b1c) == 0;
    goto code_r0x000141b312fc;
  case 0x14:
    if (*(short *)((longlong)puStack_10 + 4) == 0x736d && (uint)*puStack_10 == 0x61726170)
    goto code_r0x000141b3133c;
    goto LAB_141b31333;
  case 0x16:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pcVar9 = (char *)(*UNRECOVERED_JUMPTABLE)();
    return pcVar9;
  case 0x1b:
    *pcVar9 = *pcVar9 + cVar5;
    pbVar1 = &UNK_143393ad5 + uVar8;
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + 0x1c;
    if (0xe3 < bVar2 || *pbVar1 == 0) {
      uVar3 = in(uVar14);
      *(undefined1 *)unaff_RDI = uVar3;
      uVar3 = in(uVar14);
      *(undefined1 *)((longlong)unaff_RDI + 1) = uVar3;
      (&UNK_143393a9d)[uVar8] = (&UNK_143393a9d)[uVar8] | 0x1c;
      (&UNK_143393b25)[uVar8] = (&UNK_143393b25)[uVar8] + '\x1c';
      return pcVar9;
    }
    auStack_20[0] = -((char)*puStack_10 == UNK_143392e70);
    auStack_20[1] = -(*(char *)((longlong)puStack_10 + 1) == UNK_143392e71);
    auStack_20[2] = -(*(char *)((longlong)puStack_10 + 2) == UNK_143392e72);
    auStack_20[3] = -(*(char *)((longlong)puStack_10 + 3) == UNK_143392e73);
    auStack_20[4] = -(*(char *)((longlong)puStack_10 + 4) == UNK_143392e74);
    auStack_20[5] = -(*(char *)((longlong)puStack_10 + 5) == UNK_143392e75);
    auStack_20[6] = -(*(char *)((longlong)puStack_10 + 6) == UNK_143392e76);
    auStack_20[7] = -(*(char *)((longlong)puStack_10 + 7) == UNK_143392e77);
    auStack_20[8] = -((char)puStack_10[1] == UNK_143392e78);
    auStack_20[9] = -(*(char *)((longlong)puStack_10 + 9) == UNK_143392e79);
    auStack_20[10] = -(*(char *)((longlong)puStack_10 + 10) == UNK_143392e7a);
    auStack_20[0xb] = -(*(char *)((longlong)puStack_10 + 0xb) == UNK_143392e7b);
    auStack_20[0xc] = -(*(char *)((longlong)puStack_10 + 0xc) == UNK_143392e7c);
    auStack_20[0xd] = -(*(char *)((longlong)puStack_10 + 0xd) == UNK_143392e7d);
    auStack_20[0xe] = -(*(char *)((longlong)puStack_10 + 0xe) == UNK_143392e7e);
    auStack_20[0xf] = -(*(char *)((longlong)puStack_10 + 0xf) == UNK_143392e7f);
    in_XMM1[0] = -((char)puStack_10[2] == UNK_143388380);
    in_XMM1[1] = -(UNK_143388381 == '\0');
    in_XMM1[2] = -(UNK_143388382 == '\0');
    in_XMM1[3] = -(UNK_143388383 == '\0');
    in_XMM1[4] = -(UNK_143388384 == '\0');
    in_XMM1[5] = -(UNK_143388385 == '\0');
    in_XMM1[6] = -(UNK_143388386 == '\0');
    in_XMM1[7] = -(UNK_143388387 == '\0');
    in_XMM1[8] = -(UNK_143388388 == '\0');
    in_XMM1[9] = -(UNK_143388389 == '\0');
    in_XMM1[10] = -(UNK_14338838a == '\0');
    in_XMM1[0xb] = -(UNK_14338838b == '\0');
    in_XMM1[0xc] = -(UNK_14338838c == '\0');
    in_XMM1[0xd] = -(UNK_14338838d == '\0');
    in_XMM1[0xe] = -(UNK_14338838e == '\0');
    in_XMM1[0xf] = -(UNK_14338838f == '\0');
    goto code_r0x000141b31323;
  case 0x1d:
    (&UNK_143393b1d)[uVar8] = 0x1c;
    *pcVar9 = '\0';
    return pcVar9;
  case 0x1e:
    uVar6 = (uint)pcVar9 | 0x43393b1c;
    pcVar9 = (char *)(ulonglong)uVar6;
    bVar16 = uVar6 == 0;
code_r0x000141b312fc:
    if (bVar16) {
      pcVar9[1] = '\x03';
      *pcVar9 = '\0';
      return pcVar9;
    }
LAB_141b31333:
    pcVar9[1] = '\x04';
    *pcVar9 = '\0';
    return pcVar9;
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x25:
  case 0x26:
    if ((short)puStack_10[1] == 0x7865 && (uint)*puStack_10 == 0x43393b1c) {
      (&UNK_143393b1d)[uVar8] = 0;
      *pcVar9 = '\0';
      return pcVar9;
    }
    (&UNK_143393b1d)[uVar8] = 4;
    *pcVar9 = '\0';
    return pcVar9;
  case 0x20:
    *pcVar9 = *pcVar9 + cVar5;
    goto code_r0x000141b3133c;
  case 0x22:
code_r0x000141b31323:
    in_XMM1 = in_XMM1 & auStack_20;
    if ((ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) | (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000141b3133c:
      (&UNK_143393b1d)[uVar8] = 1;
      *pcVar9 = '\0';
      return pcVar9;
    }
    goto LAB_141b31333;
  case 0x24:
    *unaff_RDI = *unaff_RDI | 0x43393b1c;
    LOCK();
    *(int *)(param_1 + 0x48000000) = (int)param_1;
    UNLOCK();
    UNRECOVERED_JUMPTABLE = (code *)((longlong)*(int *)(param_3 * 4 + 0x43393b94) + 0x43393b94);
                    /* WARNING: Could not recover jumptable at 0x000141b3136f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar9 = (char *)(*UNRECOVERED_JUMPTABLE)(0x43393b94,puStack_10,UNRECOVERED_JUMPTABLE);
    return pcVar9;
  case 0x27:
    uVar6 = in(uVar14);
    *unaff_RDI = uVar6;
    UNK_143393b1c = UNK_143393b1c + '\x1c';
    return pcVar9;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2e:
    LOCK();
    lVar10 = CONCAT71(uVar11,UNK_143393b1c);
    UNLOCK();
    UNK_143393b1c = cVar5;
                    /* WARNING: Could not emulate address calculation at 0x000141b314ed */
                    /* WARNING: Treating indirect jump as call */
    pcVar9 = (char *)(*(code *)(&UNK_143393b1c + *(int *)(&UNK_143393b1c + lVar10 * 4)))();
    return pcVar9;
  case 0x2b:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar9 = (char *)(**(code **)(_UNK_143393b24 + 0x18))
                               (CONCAT71(_UNK_143393b1d,UNK_143393b1c),
                                uVar14 ^ *(ushort *)(&UNK_143393b1d + uVar8),0x14,
                                *(code **)(_UNK_143393b24 + 0x18));
    return pcVar9;
  case 0x2c:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pcVar9 = (char *)(*UNRECOVERED_JUMPTABLE)();
    return pcVar9;
  case 0x2d:
    *(uint *)(&UNK_143393b1d + uVar8) = *(uint *)(&UNK_143393b1d + uVar8) | 0x49e0ffc8;
    if (*(int *)(&UNK_143393b2c + uVar8) != 0) {
      uVar4 = *(undefined8 *)(param_3 + 0x18);
      puStack_70 = &UNK_140f3c37e;
      uVar7 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar9 = (char *)HeapFree(uVar7,0,uVar4);
      return pcVar9;
    }
    return pcVar9;
  }
  (&UNK_143393b1d)[uVar8] = 4;
  *pcVar9 = '\0';
  return pcVar9;
}

