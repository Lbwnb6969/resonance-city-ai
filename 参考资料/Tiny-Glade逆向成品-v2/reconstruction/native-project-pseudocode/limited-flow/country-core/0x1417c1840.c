// VA 0x1417c1840, PDB extent 368 bytes
// country_core::resources::walls::decorator::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143337718) overlaps instruction at (ram,0x000143337717)
    */
/* WARNING: Removing unreachable block (ram,0x0001417c1ff6) */
/* WARNING: Removing unreachable block (ram,0x0001417c1ecd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 368 */

int * pdb_1417c1840(int *param_1,ulonglong *param_2,char *param_3,char *param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  int *extraout_RAX;
  undefined8 uVar10;
  int *extraout_RAX_00;
  int *extraout_RAX_01;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char cVar15;
  byte bVar17;
  undefined6 uVar18;
  ulonglong *puVar16;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  ulonglong *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulonglong *unaff_RBP;
  ulonglong uVar24;
  undefined1 *unaff_RDI;
  int *piVar25;
  ulonglong in_R10;
  char *pcVar26;
  ulonglong in_R11;
  bool bVar27;
  bool bVar28;
  undefined1 auStack_a0 [32];
  undefined1 auStack_78 [4];
  ushort auStack_74 [6];
  ulonglong *puStack_68;
  undefined8 uStack_58;
  char cStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  char cStack_28;
  undefined4 uStack_27;
  uint uStack_23;
  undefined4 uStack_1f;
  undefined4 uStack_1b;
  undefined3 uStack_17;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar20 = auStack_78;
  puVar22 = auStack_78;
  puVar23 = auStack_78;
  pdb_141be54d0(&uStack_30);
  if (cStack_28 == '\a') goto code_r0x0001417c1861;
  uVar5 = CONCAT31(uStack_17,uStack_1b._3_1_);
  uStack_3c = uStack_14;
  uStack_38 = uStack_10;
  uStack_34 = uStack_c;
  uStack_4f = uStack_27;
  uStack_4b = uStack_23;
  uStack_47 = uStack_1f;
  uStack_43 = uStack_1b;
  cStack_50 = cStack_28;
  puVar12 = (ulonglong *)&UNK_143337718;
  uVar8 = (ulonglong)*(int *)(&UNK_143337718 + (uStack_30 & 0xff) * 4);
  piVar9 = (int *)(&UNK_143337718 + uVar8);
  bVar28 = piVar9 == (int *)0x0;
  bVar27 = (POPCOUNT((ulonglong)piVar9 & 0xff) & 1U) == 0;
  cVar6 = (char)piVar9;
  cVar15 = (char)param_2;
  uVar18 = (undefined6)((ulonglong)param_2 >> 0x10);
  puVar16 = puVar12;
  puVar19 = (ulonglong *)auStack_78;
  puVar21 = auStack_78;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_30 & 0xff) {
  case 0:
    uStack_30 = pdb_140de26b0(&cStack_50);
    if (uStack_30 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 1:
    uStack_30 = pdb_140de26b0(&cStack_50);
    if (uStack_30 == 0) {
      param_1[0] = 1;
      param_1[1] = 0;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 2:
    uStack_30 = pdb_140de26b0(&cStack_50);
    if (uStack_30 == 0) {
      param_1[0] = 2;
      param_1[1] = 0;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 3:
    uStack_30 = pdb_140de26b0(&cStack_50);
    if (uStack_30 == 0) {
      param_1[0] = 3;
      param_1[1] = 0;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 4:
    uStack_30 = pdb_140de26b0(&cStack_50);
    if (uStack_30 == 0) {
      param_1[0] = 4;
      param_1[1] = 0;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 5:
    uStack_30 = pdb_140de26b0(&cStack_50);
    if (uStack_30 == 0) {
      param_1[0] = 5;
      param_1[1] = 0;
      return param_1;
    }
    goto code_r0x0001417c1861;
  case 6:
    pdb_141bebeb0(param_1,&cStack_50,&UNK_143336d88,1);
    return param_1;
  case 7:
    uStack_30 = pdb_140de26b0(&cStack_50);
    if (uStack_30 == 0) {
      param_1[0] = 7;
      param_1[1] = 0;
      return param_1;
    }
code_r0x0001417c1861:
    *(ulonglong *)(param_1 + 2) = uStack_30;
    param_1[0] = 8;
    param_1[1] = 0;
    return param_1;
  case 8:
    piVar9 = (int *)0x43337718;
    puVar12 = (ulonglong *)(param_3 + -4);
    puVar16 = param_2;
    puVar19 = (ulonglong *)auStack_78;
    if (puVar12 < (ulonglong *)0xa) {
      param_4 = &UNK_143337738;
      goto code_r0x0001417c1a7d;
    }
    break;
  case 9:
  case 0xc:
  case 0xe:
  case 0xf:
    UNK_143337721 = UNK_143337721 + cVar6;
    puVar16 = param_2;
    puVar19 = unaff_RBP + 1;
    if (UNK_143337721 == '\0') {
      (&UNK_143337719)[uVar8] = 7;
code_r0x0001417c1b84:
      puVar12 = (ulonglong *)0x0;
code_r0x0001417c1b86:
      *(char *)piVar9 = (char)puVar12;
      return piVar9;
    }
    break;
  case 10:
    puVar16 = param_2;
    puVar19 = (ulonglong *)auStack_78;
    if (0xfffffffebccc88e7 < uVar8 || bVar28) {
      uVar2 = in((short)param_2);
      *unaff_RDI = uVar2;
      pbVar3 = (byte *)((ulonglong)(uint)(*(int *)(&UNK_14333774b + uVar8) * -0x49f0bbf6) - 0x7d);
      *pbVar3 = *pbVar3 | (byte)(*(int *)(&UNK_14333774b + uVar8) * -0x49f0bbf6);
      pcVar4 = (code *)swi(1);
      piVar9 = (int *)(*pcVar4)();
      return piVar9;
    }
    break;
  case 0xb:
    puVar16 = param_2;
    puVar19 = (ulonglong *)auStack_78;
    if ((*(ulonglong *)((longlong)param_2 + 5) ^ 0x776f646e69576567 | 0x143337718) == 0) {
      (&UNK_143337719)[uVar8] = 0;
      goto code_r0x0001417c1b84;
    }
    break;
  case 0xd:
    out(*param_1,(short)param_2);
    if (bVar28) goto code_r0x0001417c1b86;
    puVar16 = param_2;
    puVar19 = (ulonglong *)
              (ulonglong)
              (uint)(*(int *)(CONCAT44(unaff_0000001c,
                                       CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) + 0x57)
                    * 0xa334869);
    if (((ulonglong)(uint)param_2[1] ^ 0x776f646e | 0x143337718) == 0) {
      (&UNK_143337719)[uVar8] = 1;
      goto code_r0x0001417c1b84;
    }
    break;
  case 0x10:
    *(char *)piVar9 = (char)*piVar9 + cVar6;
    puVar16 = param_2;
    puVar19 = (ulonglong *)auStack_78;
    if (*(int *)((longlong)param_2 + 3) == 0x72657474 && (int)*param_2 == 0x74756c43) {
      (&UNK_143337719)[uVar8] = 6;
      goto code_r0x0001417c1b84;
    }
    break;
  case 0x11:
code_r0x0001417c1a7d:
                    /* WARNING: Could not recover jumptable at 0x0001417c1a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(*(code *)(param_4 + *(int *)(param_4 + (longlong)puVar12 * 4)))
                              (param_4 + *(int *)(param_4 + (longlong)puVar12 * 4));
    return piVar9;
  case 0x12:
    break;
  case 0x13:
    if (bVar28) {
      if (((int)param_2 != 0) && ((char)*param_2 != '\x12')) {
code_r0x0001417c1c24:
        uVar10 = pdb_142deedc0(param_2,(longlong)&uStack_4b + 2,&UNK_143396738);
        *(undefined8 *)(param_1 + 2) = uVar10;
        *param_1 = 1;
        return param_1;
      }
      uVar10 = 0x200000000;
    }
    else {
      *(char *)((longlong)(unaff_RBP + -0x10) + (longlong)piVar9) = '\0';
      if (cVar15 != (char)*param_2) goto code_r0x0001417c1c24;
      uVar10 = 0x300000000;
    }
    *(undefined8 *)param_1 = uVar10;
    return param_1;
  case 0x14:
    goto code_r0x0001417c1bba;
  case 0x15:
                    /* WARNING: Could not emulate address calculation at 0x0001417c1be3 */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(*(code *)(&UNK_143337760 + *(int *)(&UNK_143337760 + (longlong)piVar9 * 4)))
                              (&UNK_143337760,CONCAT31(uStack_17,uStack_1b._3_1_));
    return piVar9;
  case 0x16:
    uVar10 = pdb_142deedc0(param_2,(longlong)&uStack_43 + 2);
    *(undefined8 *)(param_1 + 2) = uVar10;
    *param_1 = 2;
    return param_1;
  case 0x17:
    puVar21 = auStack_78;
    if (((bVar28) && (puVar21 = auStack_78, *(char *)((longlong)param_2 + 4) == 'a')) &&
       ((puVar21 = auStack_78, *(char *)((longlong)param_2 + 5) == 'd' &&
        (puVar21 = auStack_78, *(char *)((longlong)param_2 + 6) == 'e')))) {
code_r0x0001417c1eb6:
      puVar21 = auStack_78;
      if ((*(char *)((longlong)param_2 + 7) == 'S') &&
         (puVar21 = auStack_78, (char)param_2[1] == 'h')) {
code_r0x0001417c1eca:
        puVar21 = puVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
        if ((*(char *)((longlong)param_2 + 9) == 'a') &&
           ((*(char *)((longlong)param_2 + 10) == 'p' && (*(char *)((longlong)param_2 + 0xb) == 'e')
            ))) {
code_r0x0001417c1ee0:
          *(undefined2 *)param_1 = 0x200;
          return param_1;
        }
      }
    }
    goto LAB_1417c1f58;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
    return param_1;
  case 0x20:
    pcVar4 = (code *)swi(3);
    piVar9 = (int *)(*pcVar4)();
    return piVar9;
  case 0x22:
    if (bVar27) {
      *(char *)(uVar8 + 0x152867e92) = *(char *)(uVar8 + 0x152867e92) + cVar6;
      if ((POPCOUNT(*(uint *)(uVar8 + 0xc3337718) &
                    CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & 0xff) & 1U) != 0) {
        puVar20 = &stack0xffffffffffffff80;
        *(char *)piVar9 = (char)*piVar9 + cVar6;
        goto code_r0x0001417c1eca;
      }
      bVar17 = (byte)((ulonglong)param_2 >> 8) | (&UNK_14333778d)[uVar8];
      pcVar26 = (char *)CONCAT62(uVar18,CONCAT11(bVar17,cVar15));
      if ((char)bVar17 < '\x01') {
        *(char *)piVar9 = (char)*piVar9 + cVar6;
        puVar21 = auStack_78;
        if (pcVar26[1] == 'o') {
          *(undefined2 *)param_1 = 0;
          return param_1;
        }
      }
      else if ((POPCOUNT(bVar17) & 1U) == 0) {
        *(char *)piVar9 = (char)*piVar9 + cVar6;
        puVar21 = auStack_78;
        if (((*pcVar26 == 'Y') && (puVar21 = auStack_78, pcVar26[1] == 'e')) &&
           (puVar21 = auStack_78, pcVar26[2] == 's')) {
          *(undefined2 *)param_1 = 0x100;
          return param_1;
        }
      }
      else {
        puVar21 = auStack_78;
        if (bVar17 == 0) goto code_r0x0001417c1ee0;
      }
    }
    else {
      puVar21 = auStack_78;
      if (bVar28) goto code_r0x0001417c1eb6;
    }
LAB_1417c1f58:
    *(undefined8 *)(puVar21 + -8) = 0x1417c1f61;
    pdb_140f35800(unaff_RBP + -4);
    unaff_RBP[-1] = unaff_RBP[-3];
code_r0x0001417c1f7a:
    puVar22 = puVar21;
    *(undefined8 *)(puVar22 + -8) = 0x1417c1f7f;
    uVar10 = pdb_142d8f140();
    *(undefined8 *)(param_1 + 2) = uVar10;
    *(undefined1 *)param_1 = 1;
code_r0x0001417c1f87:
    uVar8 = unaff_RBP[-4];
    if (0 < (longlong)uVar8) {
      pbVar3 = (byte *)unaff_RBP[-1];
      *(undefined8 *)(puVar22 + -8) = 0x1417c1f9f;
      pub_1406abac0(pbVar3,uVar8,1);
    }
    return param_1;
  case 0x23:
    goto code_r0x0001417c1f7a;
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2e:
    uVar10 = pdb_142d8f140(param_2,param_3,&UNK_1433368f0,4);
    *(undefined8 *)(&UNK_143337720 + uVar8) = uVar10;
    *(char *)piVar9 = '\x01';
    return piVar9;
  case 0x2d:
    goto code_r0x0001417c1f87;
  case 0x2f:
    if (0 < (longlong)unaff_RBP[-4]) {
      pub_1406abac0((byte *)unaff_RBP[-1],unaff_RBP[-4],1);
      piVar9 = extraout_RAX;
    }
    return piVar9;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x36:
    *piVar9 = *piVar9 + (int)piVar9;
    *(char *)piVar9 = (char)*piVar9 + cVar6;
    *(char *)piVar9 = (char)*piVar9 + cVar6;
  case 0x35:
    *(char *)(uVar8 + 0x1b8f4b060) = *(char *)(uVar8 + 0x1b8f4b060) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x33:
    param_4 = (char *)CONCAT62(uVar18,CONCAT11(0xb8,cVar15));
    param_2 = puVar12;
    goto pdb_140f679a0;
  case 0x34:
    pcVar4 = (code *)swi(3);
    piVar9 = (int *)(*pcVar4)();
    return piVar9;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
  case 0x45:
    return piVar9;
  case 0x48:
    puVar23 = auStack_a0;
    unaff_RBP = param_2 + 8;
    piVar9 = (int *)(param_2[6] * 2);
    goto code_r0x0001417c2e2a;
  case 0x4a:
    *param_3 = *param_3 + (char)param_3;
    *(char *)piVar9 = (char)*piVar9 + cVar6;
code_r0x0001417c2e2a:
    piVar25 = (int *)0x0;
    if (piVar9 != (int *)0x0) {
      pbVar3 = *(byte **)(unaff_RBP[-3] + 8);
      uVar8 = unaff_RBP[-2];
      *(undefined **)(puVar23 + -8) = &UNK_1417c2e46;
      pub_1406abac0(pbVar3,uVar8,1);
      piVar25 = extraout_RAX_01;
    }
    return piVar25;
  case 0x4b:
    piVar9 = (int *)param_2[5];
    if (*(longlong *)(piVar9 + 4) != 0) {
      puStack_68 = param_2;
      pub_1406abac0((byte *)param_2[6],*(longlong *)(piVar9 + 4) << 5,8);
      piVar9 = extraout_RAX_00;
    }
    return piVar9;
  case 0x4c:
    puVar1 = (uint *)(&UNK_1433376eb + uVar8);
    *puVar1 = *puVar1 >> 6 | *puVar1 << 0x1a;
    in_R11 = (in_R11 | (ulonglong)param_1) << ((char)param_3 * '\b' & 0x3fU) | param_2[7];
    param_2[7] = in_R11;
  case 0x4e:
    if (in_R10 < 5) {
      uVar13 = param_2[3] ^ in_R11;
      uVar8 = param_2[2];
      uVar11 = *param_2 + uVar8;
      uVar24 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar11;
      uVar14 = (uVar13 << 0x10 | uVar13 >> 0x30) ^ param_2[1] + uVar13;
      uVar13 = param_2[1] + uVar13 + uVar24;
      uVar8 = (uVar11 << 0x20 | uVar11 >> 0x20) + uVar14;
      param_2[2] = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar13;
      param_2[3] = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar8;
      param_2[1] = uVar13 << 0x20 | uVar13 >> 0x20;
      *param_2 = uVar8 ^ in_R11;
      if (param_3 == (char *)0x8) {
        piVar25 = (int *)0x4;
        in_R10 = 0;
        piVar9 = (int *)0x4;
      }
      else {
        piVar25 = (int *)(param_3 + -4);
        piVar9 = (int *)0x0;
        param_4 = (char *)0x0;
        if ((int *)0x1 < piVar25) {
          param_4 = (char *)(ulonglong)*(ushort *)((longlong)auStack_74 + in_R10);
          piVar9 = (int *)0x2;
        }
      }
      if (piVar9 < piVar25) {
        pcVar26 = (char *)(in_R10 + (longlong)piVar9);
        uVar7 = (int)piVar9 << 3;
        piVar9 = (int *)(ulonglong)uVar7;
        param_4 = (char *)((ulonglong)param_4 |
                          (ulonglong)*(byte *)((longlong)auStack_74 + (longlong)pcVar26) <<
                          (sbyte)uVar7);
      }
      param_2[7] = (ulonglong)param_4;
    }
    else {
      piVar25 = (int *)(param_3 + 4);
    }
    param_2[8] = (ulonglong)piVar25;
    return piVar9;
  case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x50:
    *(int *)((longlong)unaff_RBP + 0x31) = *(int *)((longlong)unaff_RBP + 0x31) + 1;
    if (1 < CONCAT71(0x1433377,*(byte *)((longlong)unaff_RBP + 0x50ccddca1) & 0x18)) {
      param_4 = param_3;
    }
    puVar16 = (ulonglong *)&UNK_143337848;
    param_3 = (char *)(longlong)*(int *)(&UNK_143337848 + (longlong)param_4 * 4);
    puVar12 = param_2;
    goto code_r0x0001417c32e8;
  case 0x51:
    piVar9 = (int *)pdb_140f66090(&UNK_143337718,&UNK_143336a6b,5,(longlong)&uStack_4b + 3);
    return piVar9;
  case 0x52:
    goto code_r0x0001417c337c;
  case 0x53:
    uStack_58 = CONCAT44(uStack_58._4_4_,(int)piVar9);
    piVar9 = (int *)pdb_140f66090(&UNK_143337718,&UNK_143336a64,7,(longlong)&uStack_4b + 3);
    return piVar9;
  case 0x54:
    *(int *)((longlong)param_1 + 99) = *(int *)((longlong)param_1 + 99) + 0x43337718;
    puVar16 = param_2;
code_r0x0001417c32e8:
                    /* WARNING: Could not recover jumptable at 0x0001417c32eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(*(code *)(param_3 + (longlong)puVar16))
                              (puVar12,uVar5,param_3 + (longlong)puVar16);
    return piVar9;
  case 0x55:
    return piVar9;
  case 0x56:
code_r0x0001417c337c:
    piVar9 = (int *)pdb_140f66090(&UNK_143337718,uVar5,4,(longlong)&uStack_4b + 3);
    return piVar9;
  case 0x57:
    if (bVar27) {
      piVar9 = (int *)(**(code **)(uVar8 + 0x17bf7fa60))();
    }
    return piVar9;
  case 0x58:
    cStack_50 = (char)((ulonglong)&uStack_38 & 0xffffffff);
    uStack_4f = (undefined4)(((ulonglong)&uStack_38 & 0xffffffff) >> 8);
    uStack_4b = uStack_23 & 0xff000000;
    uStack_58 = 2;
  case 0x5c:
    piVar9 = (int *)pdb_140f66e50(piVar9,uVar5,7,&UNK_143336b06);
    return piVar9;
  case 0x59:
    piVar9 = (int *)pdb_140f66090(piVar9,uVar5,0xe);
    return piVar9;
  case 0x5a:
    goto pdb_140f679a0;
  case 0x5b:
    param_4 = (char *)((ulonglong)piVar9 & 0xffffffff);
    param_2 = puVar12;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(**(code **)(param_2[1] + 0x18))(*param_2,param_4);
    return piVar9;
  case 0x5d:
    pcVar4 = (code *)swi(3);
    piVar9 = (int *)(*pcVar4)();
    return piVar9;
  case 0x5e:
    pcVar4 = (code *)swi(3);
    piVar9 = (int *)(*pcVar4)();
    return piVar9;
  case 0x5f:
  case 0x60:
  case 0x61:
    uRam00000000e5637560 = (undefined1)((ulonglong)piVar9 >> 8);
    param_1 = (int *)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + '\x01');
    piVar9 = (int *)(ulonglong)uRama1a7fe48a1e9fe48;
    *(char *)((longlong)param_2 + -0x5e) = *(char *)((longlong)param_2 + -0x5e) + '\x01';
    *(char *)((longlong)unaff_RBP + -0x5e) = *(char *)((longlong)unaff_RBP + -0x5e) + '\x01';
    *(char *)param_2 = (char)*param_2 + -1;
  case 0x62:
  case 99:
  case 100:
  case 0x65:
    *(char *)((longlong)piVar9 + 0x2ffe48a1) = *(char *)((longlong)piVar9 + 0x2ffe48a1) + -1;
    uRama20cfe48a275fe48 = SUB81(piVar9,0);
    uRama1e9fe48a1c6fe48 = uRama20cfe48a275fe48;
    unaff_RDI[0x52fe48a1] = unaff_RDI[0x52fe48a1] + '\x01';
    *(char *)((longlong)param_1 + -0x5d) = *(char *)((longlong)param_1 + -0x5d) + -1;
    *(char *)(param_1 + -0x17) = (char)param_1[-0x17] + '\x01';
    *(char *)((longlong)piVar9 + 0x56fe48a3) = *(char *)((longlong)piVar9 + 0x56fe48a3) + '\x01';
    *unaff_RDI = (char)*param_1;
    *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         '\x01';
    unaff_RDI[1] = *(undefined1 *)((longlong)param_1 + 1);
    *(char *)((longlong)param_1 + -0x5a) = *(char *)((longlong)param_1 + -0x5a) + '\x01';
    *(char *)((longlong)param_1 + -0x5a) = *(char *)((longlong)param_1 + -0x5a) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)((longlong)puVar19 + -8) = 0x1417c1bac;
  uVar10 = pdb_142d8f140(puVar16);
  *(undefined8 *)(piVar9 + 2) = uVar10;
  *(char *)piVar9 = '\x01';
code_r0x0001417c1bba:
  return piVar9;
}

