// VA 0x14014d390, PDB extent 453 bytes
// country_core::game_config::serialize_optional<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > >,country_core::systems::main_camera::CameraRotationPivot>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014014e352) overlaps instruction at (ram,0x00014014e351)
    */
/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure:
   country_core::game_config::serialize_optional<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > >,country_core::systems::main_camera::CameraRotationPivot>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 453 */

int * pdb_14014d390(undefined8 *param_1,ulonglong *param_2,char *param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char unaff_00084f00;
  undefined1 *unaff_0008ae00;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  char cVar11;
  ulonglong uVar8;
  int *piVar9;
  undefined7 uVar12;
  char *pcVar10;
  uint uVar14;
  undefined *puVar15;
  undefined2 uVar16;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar18;
  undefined8 *unaff_RBP;
  undefined4 *puVar19;
  bool bVar20;
  bool bVar21;
  unkbyte10 in_ST0;
  undefined1 in_XMM0 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_80;
  undefined1 *in_stack_ffffffffffffff88;
  char cStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  int *piStack_18;
  undefined6 uVar13;
  char cVar17;
  
  puVar15 = &UNK_142e4a3f4;
  uVar8 = (ulonglong)*(int *)(&UNK_142e4a3f4 + (ulonglong)(byte)*param_2 * 4);
  bVar20 = 0xfffffffebd1b5c0b < uVar8;
  piVar9 = (int *)(&UNK_142e4a3f4 + uVar8);
  bVar21 = piVar9 == (int *)0x0;
  bVar6 = (byte)piVar9;
  cVar11 = (char)((ulonglong)piVar9 >> 8);
  uVar13 = (undefined6)((ulonglong)piVar9 >> 0x10);
  uVar12 = (undefined7)((ulonglong)piVar9 >> 8);
  cVar17 = (char)((ulonglong)param_2 >> 8);
  uVar16 = SUB82(param_2,0);
  bVar5 = in_XMM0[0xf];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)*param_2) {
  case 0:
    uStack_80 = 0x14014d3c6;
    pdb_140127ae0(&cStack_58,&UNK_142e4a187,0x13);
    if (cStack_58 != '2') goto code_r0x00014014d509;
    puVar15 = &UNK_142e4a19a;
    goto code_r0x00014014d431;
  case 1:
    uStack_80 = 0x14014d496;
    pdb_140127ae0(&cStack_58,&UNK_142e4a187,0x13);
    if (cStack_58 != '2') goto code_r0x00014014d509;
    puVar15 = &UNK_142e4a1a5;
    goto code_r0x00014014d4a4;
  case 2:
    uStack_80 = 0x14014d41f;
    pdb_140127ae0(&cStack_58,&UNK_142e4a187,0x13);
    if (cStack_58 != '2') goto code_r0x00014014d509;
    puVar15 = &UNK_142e4a1b8;
code_r0x00014014d431:
    uStack_80 = 0x14014d444;
    piVar9 = (int *)pdb_1401276c0(&cStack_58,param_3,puVar15,0xb);
joined_r0x00014014d4bc:
    if (cStack_58 == '2') {
      *(undefined1 *)param_1 = 0x32;
      return piVar9;
    }
code_r0x00014014d509:
    param_1[8] = piStack_18;
    param_1[6] = uStack_28;
    param_1[7] = uStack_20;
    param_1[4] = uStack_38;
    param_1[5] = uStack_30;
    param_1[2] = uStack_48;
    param_1[3] = uStack_40;
    *param_1 = CONCAT71(uStack_57,cStack_58);
    param_1[1] = uStack_50;
    return piStack_18;
  case 3:
    uStack_80 = 0x14014d46b;
    pdb_140127ae0(&cStack_58,&UNK_142e4a187,0x13);
    if (cStack_58 != '2') goto code_r0x00014014d509;
    puVar15 = &UNK_142e4a1c3;
code_r0x00014014d4a4:
    uStack_80 = 0x14014d4b7;
    piVar9 = (int *)pdb_1401276c0(&cStack_58,param_3,puVar15,0x13);
    goto joined_r0x00014014d4bc;
  case 4:
    uStack_80 = 0x14014d3f1;
    pdb_140127ae0(&cStack_58,&UNK_142e4a187,0x13);
    if (cStack_58 != '2') goto code_r0x00014014d509;
    puVar15 = &UNK_142e4a1d6;
    goto code_r0x00014014d4e5;
  case 5:
    uStack_80 = 0x14014d4d7;
    pdb_140127ae0(&cStack_58,&UNK_142e4a187,0x13);
    if (cStack_58 != '2') goto code_r0x00014014d509;
    puVar15 = &UNK_142e4a1e3;
code_r0x00014014d4e5:
    uStack_80 = 0x14014d4f8;
    piVar9 = (int *)pdb_1401276c0(&cStack_58,param_3,puVar15,0xd);
    goto joined_r0x00014014d4bc;
  case 6:
    uStack_80 = 0x14014d554;
    pdb_142dc8110(&UNK_142e49eb0,0x20,&UNK_142e49ef8);
    pcVar4 = (code *)swi(3);
    piVar9 = (int *)(*pcVar4)();
    return piVar9;
  case 7:
    UNK_142e4a377 = UNK_142e4a377 + -1;
    pcVar10 = (char *)((ulonglong)piVar9 | 0xf);
    param_2 = (ulonglong *)((ulonglong)param_2 & 0xffffffff);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    pcVar10[-0x73] = pcVar10[-0x73] + -0xc;
    param_3 = (char *)(longlong)*(int *)(&UNK_142e4a3f4 + (longlong)param_3 * 4);
    goto code_r0x00014014e05c;
  case 8:
    if (bVar20 || bVar21) {
      uVar3 = (longlong)*(int *)(uVar8 + 0x3c8adec0f) * 0x69b8490a;
      puVar19 = (undefined4 *)(uVar3 & 0xffffffff);
      bVar20 = (longlong)(int)uVar3 != uVar3;
      if (!bVar21) {
        uVar1 = in(uVar16);
        *in_stack_ffffffffffffff88 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x00014014e10a;
    }
    goto code_r0x00014014e10d;
  case 9:
code_r0x00014014e05c:
                    /* WARNING: Could not recover jumptable at 0x00014014e05f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(*(code *)(param_3 + 0x142e4a3f4))(&UNK_142e4a3f4,param_2,param_3 + 0x142e4a3f4)
    ;
    return piVar9;
  case 10:
    bVar6 = bVar6 | UNK_1434a08e5;
    *param_3 = *param_3 + -0xc;
    return (int *)CONCAT71(uVar12,bVar6 + *(char *)(CONCAT62(unaff_0000001a,
                                                             CONCAT11(unaff_BH,unaff_BL)) +
                                                   0x96676f2));
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    puVar19 = (undefined4 *)((longlong)param_1 + 1);
    out(*(undefined1 *)param_1,uVar16);
code_r0x00014014e10a:
    param_1 = (undefined8 *)(puVar19 + 1);
    out(*puVar19,uVar16);
    if (bVar20 || bVar21) {
      if ((uint)*param_2 == 0x6f6d6564) {
        (&UNK_142e4a3f5)[uVar8] = 6;
        *(char *)piVar9 = '2';
        return piVar9;
      }
      goto LAB_14014e29d;
    }
code_r0x00014014e10d:
    puVar15 = (undefined *)(*param_2 ^ 0x142e4a3f4);
    if (*(longlong *)((longlong)param_2 + 5) == 0x656469727265766f && puVar15 == (undefined *)0x0) {
code_r0x00014014e12c:
      (&UNK_142e4a3f5)[uVar8] = 5;
      *(char *)piVar9 = '2';
      return piVar9;
    }
    goto LAB_14014e123;
  case 0x12:
    uVar14 = (uint)*param_2 ^ 0x69647561;
    puVar15 = (undefined *)(ulonglong)uVar14;
    if (*(byte *)((longlong)param_2 + 4) == 0x6f && uVar14 == 0) {
      (&UNK_142e4a3f5)[uVar8] = 1;
      *(char *)piVar9 = '2';
      return piVar9;
    }
    goto LAB_14014e123;
  case 0x13:
    uVar2 = in(uVar16);
    *(undefined4 *)param_3 = uVar2;
    if (cVar11 == param_3[0x61]) {
      puVar15 = (undefined *)0x4;
      goto code_r0x00014014e137;
    }
    if ((uint)*param_2 == 0x676e616c) goto code_r0x00014014e12c;
LAB_14014e123:
    puVar15 = (undefined *)CONCAT71((int7)((ulonglong)puVar15 >> 8),6);
    (&UNK_142e4a3f5)[uVar8] = 6;
code_r0x00014014e122:
    *(uint *)(puVar15 + 0x1488806) = *(uint *)(puVar15 + 0x1488806) | (uint)param_1;
    *(char *)piVar9 = '2';
    return piVar9;
  case 0x14:
    goto code_r0x00014014e122;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1d:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
    LOCK();
    *(int *)(uVar8 + 0x285c947e8) = (int)param_3;
    UNLOCK();
    *(byte *)piVar9 = (char)*piVar9 + bVar6;
                    /* WARNING: Could not recover jumptable at 0x00014014e16f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(*(code *)(&UNK_142e4a444 + *(int *)(&UNK_142e4a444 + (longlong)param_3 * 4)))
                              (&UNK_142e4a444,param_2,
                               &UNK_142e4a444 + *(int *)(&UNK_142e4a444 + (longlong)param_3 * 4));
    return piVar9;
  case 0x1c:
    cVar11 = in(uVar16);
    *param_3 = cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
    if (!bVar21) {
      cVar11 = cVar11 + *(char *)((longlong)param_1 + 0xf);
      piVar9 = (int *)CONCAT62(uVar13,CONCAT11(cVar11,bVar6));
      if (cVar11 != '\0') {
        piVar9 = (int *)CONCAT62(uVar13,CONCAT11(cVar11 + *(char *)((longlong)param_1 + 0xf),bVar6))
        ;
      }
    }
    if ((ushort)((ushort)(SUB161(in_XMM0 >> 7,0) & 1) | (ushort)(SUB161(in_XMM0 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM0 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM0 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM0 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM0 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM0 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM0 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM0 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM0 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM0 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM0 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM0 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM0 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM0 >> 0x77,0) & 1) << 0xe | (ushort)(bVar5 >> 7) << 0xf) ==
        0xffff) {
      *(char *)((longlong)piVar9 + 1) = '\a';
      *(char *)piVar9 = '2';
      return piVar9;
    }
    goto LAB_14014e29d;
  case 0x1f:
    piVar9 = (int *)CONCAT71(uVar12,bVar6 ^ unaff_BL);
    if ((uint)param_2[1] == 0x656d6f63 && *param_2 == 0x6c65775f70696b73) {
      *(char *)((longlong)piVar9 + 1) = '\x05';
      *(char *)piVar9 = '2';
      return piVar9;
    }
    goto LAB_14014e29d;
  case 0x20:
code_r0x00014014e137:
    (&UNK_142e4a3f5)[uVar8] = (char)puVar15;
    *(char *)piVar9 = '2';
    return piVar9;
  case 0x25:
    out(*(undefined4 *)param_1,uVar16);
    cVar11 = cVar11 + *(char *)((longlong)param_1 + 0x13);
    piVar9 = (int *)CONCAT62(uVar13,CONCAT11(cVar11,bVar6));
    if (cVar11 == '\0') {
      uVar8 = (ulonglong)in_ST0;
      if ((byte)((byte)(uVar8 >> 7) & 1 | ((byte)(uVar8 >> 0xf) & 1) << 1 |
                 ((byte)(uVar8 >> 0x17) & 1) << 2 | ((byte)(uVar8 >> 0x1f) & 1) << 3 |
                 ((byte)(uVar8 >> 0x27) & 1) << 4 | ((byte)(uVar8 >> 0x2f) & 1) << 5 |
                 ((byte)(uVar8 >> 0x37) & 1) << 6 | (byte)((unkuint10)in_ST0 >> 0x38) & 0x80) !=
          0xffff) goto LAB_14014e29d;
      puVar15 = (undefined *)0x2;
      *(char *)((longlong)piVar9 + 1) = '\x02';
    }
    else {
      uVar7 = CONCAT11(cVar11 + *(char *)((longlong)param_1 + 0x13),bVar6);
      piVar9 = (int *)CONCAT71((int7)(CONCAT62(uVar13,uVar7) >> 8),
                               *(undefined1 *)
                                (CONCAT62(unaff_0000001a,CONCAT11(0xcf,unaff_BL)) +
                                ((ulonglong)uVar7 & 0xff)));
      unaff_00084f00 = '\x1f';
      unaff_0008ae00 = &stack0xffffffffffffff88;
      puVar18 = (undefined8 *)&stack0xffffffffffffff88;
      cVar11 = '\x1e';
      do {
        unaff_RBP = unaff_RBP + -1;
        puVar18 = puVar18 + -1;
        *puVar18 = *unaff_RBP;
        cVar11 = cVar11 + -1;
      } while ('\0' < cVar11);
    }
    (&uStack_80)[-(ulonglong)(byte)(unaff_00084f00 - 1)] = unaff_0008ae00;
    *piVar9 = *piVar9 + 1;
    *param_3 = *param_3 + (char)puVar15;
    *(char *)piVar9 = (char)*piVar9 + (char)piVar9;
    puVar15[0x1488802] = puVar15[0x1488802] + cVar17;
    *(char *)piVar9 = '2';
    return piVar9;
  case 0x26:
    if (bVar20) {
      piVar9 = (int *)(ulonglong)((uint)piVar9 ^ *(uint *)((longlong)param_2 + 6));
      if (((ulonglong)param_3 | 0x142e4a3f4) == 0) {
        *(char *)((longlong)piVar9 + 1) = '\x01';
        *(char *)piVar9 = '2';
        return piVar9;
      }
    }
    else if (((ulonglong)param_3 | 0x142e4a3f4) == 0) {
      (&UNK_142e4a3f5)[uVar8] = 3;
      *(char *)piVar9 = '2';
      return piVar9;
    }
LAB_14014e29d:
    *(char *)((longlong)piVar9 + 1) = '\b';
    *(char *)piVar9 = '2';
    return piVar9;
  case 0x27:
    (&UNK_142e4a377)[uVar8] = (&UNK_142e4a377)[uVar8] | 0xf4;
    if (((ulonglong)param_2 | 0x142e4a3f4) == 0) {
      (&UNK_142e4a3f5)[uVar8] = 9;
      *(char *)piVar9 = '2';
      return piVar9;
    }
    break;
  default:
    if ((ushort)((ushort)(SUB161(in_XMM0 >> 7,0) & 1) | (ushort)(SUB161(in_XMM0 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM0 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM0 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM0 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM0 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM0 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM0 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM0 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM0 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM0 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM0 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM0 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM0 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM0 >> 0x77,0) & 1) << 0xe | (ushort)(bVar5 >> 7) << 0xf) ==
        0xffff) {
      (&UNK_142e4a3f5)[uVar8] = 1;
      *(char *)piVar9 = '2';
      return piVar9;
    }
    auVar26[0] = -(*(byte *)((longlong)param_2 + 5) == UNK_142e499f0);
    auVar26[1] = -(*(byte *)((longlong)param_2 + 6) == UNK_142e499f1);
    auVar26[2] = -(*(byte *)((longlong)param_2 + 7) == UNK_142e499f2);
    auVar26[3] = -((byte)param_2[1] == UNK_142e499f3);
    auVar26[4] = -(*(byte *)((longlong)param_2 + 9) == UNK_142e499f4);
    auVar26[5] = -(*(byte *)((longlong)param_2 + 10) == UNK_142e499f5);
    auVar26[6] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_142e499f6);
    auVar26[7] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_142e499f7);
    auVar26[8] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_142e499f8);
    auVar26[9] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_142e499f9);
    auVar26[10] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_142e499fa);
    auVar26[0xb] = -((byte)param_2[2] == UNK_142e499fb);
    auVar26[0xc] = -(*(byte *)((longlong)param_2 + 0x11) == UNK_142e499fc);
    auVar26[0xd] = -(*(byte *)((longlong)param_2 + 0x12) == UNK_142e499fd);
    auVar26[0xe] = -(*(byte *)((longlong)param_2 + 0x13) == UNK_142e499fe);
    auVar26[0xf] = -(*(byte *)((longlong)param_2 + 0x14) == UNK_142e499ff);
    auVar23[0] = -((byte)*param_2 == UNK_142e49a00);
    auVar23[1] = -(*(byte *)((longlong)param_2 + 1) == UNK_142e49a01);
    auVar23[2] = -(*(byte *)((longlong)param_2 + 2) == UNK_142e49a02);
    auVar23[3] = -(*(byte *)((longlong)param_2 + 3) == UNK_142e49a03);
    auVar23[4] = -(*(byte *)((longlong)param_2 + 4) == UNK_142e49a04);
    auVar23[5] = -(*(byte *)((longlong)param_2 + 5) == UNK_142e49a05);
    auVar23[6] = -(*(byte *)((longlong)param_2 + 6) == UNK_142e49a06);
    auVar23[7] = -(*(byte *)((longlong)param_2 + 7) == UNK_142e49a07);
    auVar23[8] = -((byte)param_2[1] == UNK_142e49a08);
    auVar23[9] = -(*(byte *)((longlong)param_2 + 9) == UNK_142e49a09);
    auVar23[10] = -(*(byte *)((longlong)param_2 + 10) == UNK_142e49a0a);
    auVar23[0xb] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_142e49a0b);
    auVar23[0xc] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_142e49a0c);
    auVar23[0xd] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_142e49a0d);
    auVar23[0xe] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_142e49a0e);
    auVar23[0xf] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_142e49a0f);
    auVar23 = auVar23 & auVar26;
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_142e4a3f5)[uVar8] = 4;
      *(char *)piVar9 = '2';
      return piVar9;
    }
    auVar27[0] = -(*(byte *)((longlong)param_2 + 5) == UNK_142e49a10);
    auVar27[1] = -(*(byte *)((longlong)param_2 + 6) == UNK_142e49a11);
    auVar27[2] = -(*(byte *)((longlong)param_2 + 7) == UNK_142e49a12);
    auVar27[3] = -((byte)param_2[1] == UNK_142e49a13);
    auVar27[4] = -(*(byte *)((longlong)param_2 + 9) == UNK_142e49a14);
    auVar27[5] = -(*(byte *)((longlong)param_2 + 10) == UNK_142e49a15);
    auVar27[6] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_142e49a16);
    auVar27[7] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_142e49a17);
    auVar27[8] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_142e49a18);
    auVar27[9] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_142e49a19);
    auVar27[10] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_142e49a1a);
    auVar27[0xb] = -((byte)param_2[2] == UNK_142e49a1b);
    auVar27[0xc] = -(*(byte *)((longlong)param_2 + 0x11) == UNK_142e49a1c);
    auVar27[0xd] = -(*(byte *)((longlong)param_2 + 0x12) == UNK_142e49a1d);
    auVar27[0xe] = -(*(byte *)((longlong)param_2 + 0x13) == UNK_142e49a1e);
    auVar27[0xf] = -(*(byte *)((longlong)param_2 + 0x14) == UNK_142e49a1f);
    auVar24[0] = -((byte)*param_2 == UNK_142e49a20);
    auVar24[1] = -(*(byte *)((longlong)param_2 + 1) == UNK_142e49a21);
    auVar24[2] = -(*(byte *)((longlong)param_2 + 2) == UNK_142e49a22);
    auVar24[3] = -(*(byte *)((longlong)param_2 + 3) == UNK_142e49a23);
    auVar24[4] = -(*(byte *)((longlong)param_2 + 4) == UNK_142e49a24);
    auVar24[5] = -(*(byte *)((longlong)param_2 + 5) == UNK_142e49a25);
    auVar24[6] = -(*(byte *)((longlong)param_2 + 6) == UNK_142e49a26);
    auVar24[7] = -(*(byte *)((longlong)param_2 + 7) == UNK_142e49a27);
    auVar24[8] = -((byte)param_2[1] == UNK_142e49a28);
    auVar24[9] = -(*(byte *)((longlong)param_2 + 9) == UNK_142e49a29);
    auVar24[10] = -(*(byte *)((longlong)param_2 + 10) == UNK_142e49a2a);
    auVar24[0xb] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_142e49a2b);
    auVar24[0xc] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_142e49a2c);
    auVar24[0xd] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_142e49a2d);
    auVar24[0xe] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_142e49a2e);
    auVar24[0xf] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_142e49a2f);
    auVar24 = auVar24 & auVar27;
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_142e4a3f5)[uVar8] = 0xc;
      *(char *)piVar9 = '2';
      return piVar9;
    }
    break;
  case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2e:
    piVar9 = (int *)CONCAT71(uVar12,bVar6 ^ unaff_BL);
    if ((short)param_2[1] == 0x766f && *param_2 == 0x665f6172656d6163) {
      *(char *)((longlong)piVar9 + 1) = '\b';
      *(char *)piVar9 = '2';
      return piVar9;
    }
    break;
  case 0x32:
    if ((&stack0x00000000 != (undefined1 *)0x78 || *(longlong *)((longlong)param_1 + 0xf) != 0) &&
       (cVar11 = cVar11 + *(char *)((longlong)param_1 + 0xf),
       piVar9 = (int *)CONCAT62(uVar13,CONCAT11(cVar11,bVar6)), cVar11 != '\0')) {
      *(char *)((longlong)unaff_RBP + 0xf6602cf) =
           *(char *)((longlong)unaff_RBP + 0xf6602cf) + '\x01';
    }
    if ((ushort)((ushort)(SUB161(in_XMM0 >> 7,0) & 1) | (ushort)(SUB161(in_XMM0 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM0 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM0 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM0 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM0 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM0 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM0 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM0 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM0 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM0 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM0 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM0 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM0 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM0 >> 0x77,0) & 1) << 0xe | (ushort)(bVar5 >> 7) << 0xf) ==
        0xffff) {
      *(char *)((longlong)piVar9 + 1) = '\0';
      *(char *)piVar9 = '2';
      return piVar9;
    }
    break;
  case 0x35:
    pcVar4 = (code *)swi(3);
    piVar9 = (int *)(*pcVar4)();
    return piVar9;
  case 0x36:
    if (-1 < (longlong)piVar9) {
      if (param_4 == 0 && param_3 == (char *)0x0) {
        (&UNK_142e4a3f5)[uVar8] = 2;
        *(char *)piVar9 = '2';
        return piVar9;
      }
      if (*(longlong *)((longlong)param_2 + 7) == 0x795f747265766e69 &&
          (ulonglong)(*(uint *)((longlong)param_2 + 7) ^ 0x42e4a3f4) == *param_2) {
        (&UNK_142e4a3f5)[uVar8] = 3;
        *(char *)piVar9 = '2';
        return piVar9;
      }
      break;
    }
    goto code_r0x00014014e370;
  case 0x38:
    piVar9 = (int *)CONCAT71(uVar12,bVar6 ^ unaff_BL);
    uVar8 = param_2[2];
    auVar25[0] = -((char)uVar8 == UNK_142e49960);
    auVar25[1] = -((char)(uVar8 >> 8) == UNK_142e49961);
    auVar25[2] = -((char)(uVar8 >> 0x10) == UNK_142e49962);
    auVar25[3] = -((char)(uVar8 >> 0x18) == UNK_142e49963);
    auVar25[4] = -((char)(uVar8 >> 0x20) == UNK_142e49964);
    auVar25[5] = -((char)(uVar8 >> 0x28) == UNK_142e49965);
    auVar25[6] = -((char)(uVar8 >> 0x30) == UNK_142e49966);
    auVar25[7] = -((char)(uVar8 >> 0x38) == UNK_142e49967);
    auVar25[8] = -(UNK_142e49968 == '\0');
    auVar25[9] = -(UNK_142e49969 == '\0');
    auVar25[10] = -(UNK_142e4996a == '\0');
    auVar25[0xb] = -(UNK_142e4996b == '\0');
    auVar25[0xc] = -(UNK_142e4996c == '\0');
    auVar25[0xd] = -(UNK_142e4996d == '\0');
    auVar25[0xe] = -(UNK_142e4996e == '\0');
    auVar25[0xf] = -(UNK_142e4996f == '\0');
    auVar22[0] = -((byte)*param_2 == UNK_142e49970);
    auVar22[1] = -(*(byte *)((longlong)param_2 + 1) == UNK_142e49971);
    auVar22[2] = -(*(byte *)((longlong)param_2 + 2) == UNK_142e49972);
    auVar22[3] = -(*(byte *)((longlong)param_2 + 3) == UNK_142e49973);
    auVar22[4] = -(*(byte *)((longlong)param_2 + 4) == UNK_142e49974);
    auVar22[5] = -(*(byte *)((longlong)param_2 + 5) == UNK_142e49975);
    auVar22[6] = -(*(byte *)((longlong)param_2 + 6) == UNK_142e49976);
    auVar22[7] = -(*(byte *)((longlong)param_2 + 7) == UNK_142e49977);
    auVar22[8] = -((byte)param_2[1] == UNK_142e49978);
    auVar22[9] = -(*(byte *)((longlong)param_2 + 9) == UNK_142e49979);
    auVar22[10] = -(*(byte *)((longlong)param_2 + 10) == UNK_142e4997a);
    auVar22[0xb] = -(*(byte *)((longlong)param_2 + 0xb) == UNK_142e4997b);
    auVar22[0xc] = -(*(byte *)((longlong)param_2 + 0xc) == UNK_142e4997c);
    auVar22[0xd] = -(*(byte *)((longlong)param_2 + 0xd) == UNK_142e4997d);
    auVar22[0xe] = -(*(byte *)((longlong)param_2 + 0xe) == UNK_142e4997e);
    auVar22[0xf] = -(*(byte *)((longlong)param_2 + 0xf) == UNK_142e4997f);
    in_XMM0 = auVar22 & auVar25;
code_r0x00014014e370:
    if ((ushort)((ushort)(SUB161(in_XMM0 >> 7,0) & 1) | (ushort)(SUB161(in_XMM0 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM0 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM0 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM0 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM0 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM0 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM0 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM0 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM0 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM0 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM0 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM0 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM0 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM0 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(in_XMM0[0xf] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)piVar9 + 1) = '\a';
      *(char *)piVar9 = '2';
      return piVar9;
    }
    break;
  case 0x3b:
    *(byte *)piVar9 = (char)*piVar9 + bVar6;
    cRam00000001442d2bfe = cRam00000001442d2bfe + cVar17;
    *(char *)piVar9 = '2';
    return piVar9;
  }
  *(char *)((longlong)piVar9 + 1) = '\r';
  *(char *)piVar9 = '2';
  return piVar9;
}

