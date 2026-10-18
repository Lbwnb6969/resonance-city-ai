// VA 0x140142590, PDB extent 446 bytes
// country_core::render::render_config::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142e480b9) overlaps instruction at (ram,0x000142e480b8)
    */
/* WARNING: Removing unreachable block (ram,0x000140142cf5) */
/* WARNING: Removing unreachable block (ram,0x000140142c18) */
/* WARNING: Removing unreachable block (ram,0x000140143331) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 446 */

float * pdb_140142590(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                     ulonglong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     undefined1 param_13 [16],undefined8 param_14,undefined8 param_15,
                     undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19
                     )

{
  byte *pbVar1;
  code cVar2;
  code cVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined7 uVar12;
  char *pcVar10;
  undefined *puVar11;
  ushort uVar13;
  code *pcVar14;
  byte bVar15;
  undefined *unaff_RBX;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined8 *unaff_RBP;
  uint uVar19;
  undefined8 unaff_RSI;
  longlong lVar20;
  longlong unaff_RDI;
  code *UNRECOVERED_JUMPTABLE_00;
  longlong in_R9;
  longlong in_R10;
  longlong lVar21;
  float *pfVar22;
  code *in_R11;
  float *unaff_R14;
  bool bVar23;
  ulonglong in_MM0;
  uint uVar24;
  uint uVar25;
  char cVar26;
  undefined8 uVar27;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  undefined1 in_XMM0 [16];
  char cVar48;
  char cVar56;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar57;
  undefined1 in_XMM1 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 unaff_retaddr;
  undefined4 uStackX_8;
  undefined4 uStackX_10;
  undefined4 uStackX_18;
  undefined4 uStackX_20;
  undefined1 auStack_83e8 [33608];
  undefined1 *puStack_a0;
  undefined8 uStack_88;
  undefined1 auStack_78 [32];
  ulonglong uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  char cStack_20;
  char cStack_1f;
  undefined2 uStack_1e;
  float fStack_1c;
  char cStack_18;
  undefined7 uStack_17;
  
  fVar57 = (float)((ulonglong)param_4 >> 0x20);
  fVar64 = (float)param_4;
  fVar63 = (float)((ulonglong)param_3 >> 0x20);
  fVar62 = (float)param_3;
  uVar27 = in_XMM0._0_8_;
  puVar18 = auStack_78;
  pcVar14 = (code *)&UNK_142e480b8;
  uVar8 = (ulonglong)*(int *)(&UNK_142e480b8 + (ulonglong)*(byte *)param_2 * 4);
  pfVar9 = (float *)(&UNK_142e480b8 + uVar8);
  bVar23 = pfVar9 == (float *)0x0;
  bVar5 = (byte)pfVar9;
  uVar24 = (uint)pfVar9;
  uVar12 = (undefined7)((ulonglong)pfVar9 >> 8);
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar26 = in_XMM0[0];
  fVar65 = in_XMM0._0_4_;
  fVar66 = in_XMM0._4_4_;
  bVar15 = (byte)unaff_RBX;
  cVar42 = in_XMM0[1];
  cVar44 = in_XMM0[3];
  cVar46 = in_XMM0[5];
  cVar48 = in_XMM0[7];
  cVar50 = in_XMM0[9];
  cVar52 = in_XMM0[0xb];
  cVar54 = in_XMM0[0xd];
  cVar43 = in_XMM0[2];
  cVar45 = in_XMM0[4];
  cVar47 = in_XMM0[6];
  cVar49 = in_XMM0[8];
  cVar51 = in_XMM0[10];
  cVar53 = in_XMM0[0xc];
  cVar55 = in_XMM0[0xe];
  cVar56 = in_XMM0[0xf];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)param_2) {
  case 0:
    pdb_140127ae0(&uStack_58,&UNK_142e47ea8,0xf);
    if ((char)uStack_58 != '2') goto code_r0x000140142718;
    pdb_1401276c0(&uStack_58,UNRECOVERED_JUMPTABLE_00,&UNK_142e47eb7,0x10);
    goto joined_r0x00014014263c;
  case 1:
    pdb_140127ae0(&uStack_58,&UNK_142e47ea8,0xf);
    if ((char)uStack_58 != '2') goto code_r0x000140142718;
    pdb_1401276c0(&uStack_58,UNRECOVERED_JUMPTABLE_00,&UNK_142e47ec7,0xb);
    goto joined_r0x00014014263c;
  case 2:
    pdb_140127ae0(&uStack_58,&UNK_142e47ea8,0xf);
    if ((char)uStack_58 != '2') goto code_r0x000140142718;
    pdb_1401276c0(&uStack_58,UNRECOVERED_JUMPTABLE_00,&UNK_142e47ed2,8);
    goto joined_r0x00014014263c;
  case 3:
    pdb_140127ae0(&uStack_58,&UNK_142e47ea8,0xf);
    if ((char)uStack_58 != '2') goto code_r0x000140142718;
    pdb_1401276c0(&uStack_58,UNRECOVERED_JUMPTABLE_00,&UNK_142e47eda,7);
    goto joined_r0x00014014263c;
  case 4:
    pdb_140127ae0(&uStack_58,&UNK_142e47ea8,0xf);
    if ((char)uStack_58 != '2') goto code_r0x000140142718;
    pdb_1401276c0(&uStack_58,UNRECOVERED_JUMPTABLE_00,&UNK_142e47ee1,0xc);
joined_r0x00014014263c:
    if ((char)uStack_58 == '2') {
      *(char *)param_1 = '2';
      return param_1;
    }
code_r0x000140142718:
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_17,cStack_18);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(fStack_24,fStack_28);
    *(ulonglong *)(param_1 + 0xe) =
         CONCAT44(fStack_1c,CONCAT22(uStack_1e,CONCAT11(cStack_1f,cStack_20)));
    *(ulonglong *)(param_1 + 8) = CONCAT44(fStack_34,fStack_38);
    *(ulonglong *)(param_1 + 10) = CONCAT44(fStack_2c,fStack_30);
    *(undefined8 *)(param_1 + 4) = uStack_48;
    *(undefined8 *)(param_1 + 6) = uStack_40;
    *(ulonglong *)param_1 = uStack_58;
    *(longlong *)(param_1 + 2) = lStack_50;
    return param_1;
  case 5:
    *(byte *)pfVar9 = *(byte *)pfVar9 + bVar5;
    (&UNK_142e48045)[uVar8] = (&UNK_142e48045)[uVar8] + -0x48;
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(&UNK_142e480b8 + *(int *)(&UNK_142e480b8 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)
                 );
  case 0xe:
                    /* WARNING: Could not recover jumptable at 0x000140142bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar9 = (float *)(*UNRECOVERED_JUMPTABLE_00)(&UNK_142e480b8,param_2,UNRECOVERED_JUMPTABLE_00);
    return pfVar9;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x10:
    auVar28[0] = -(cVar26 == UNK_142e478d0);
    auVar28[1] = -(cVar42 == UNK_142e478d1);
    auVar28[2] = -(cVar43 == UNK_142e478d2);
    auVar28[3] = -(cVar44 == UNK_142e478d3);
    auVar28[4] = -(cVar45 == UNK_142e478d4);
    auVar28[5] = -(cVar46 == UNK_142e478d5);
    auVar28[6] = -(cVar47 == UNK_142e478d6);
    auVar28[7] = -(cVar48 == UNK_142e478d7);
    auVar28[8] = -(cVar49 == UNK_142e478d8);
    auVar28[9] = -(cVar50 == UNK_142e478d9);
    auVar28[10] = -(cVar51 == UNK_142e478da);
    auVar28[0xb] = -(cVar52 == UNK_142e478db);
    auVar28[0xc] = -(cVar53 == UNK_142e478dc);
    auVar28[0xd] = -(cVar54 == UNK_142e478dd);
    auVar28[0xe] = -(cVar55 == UNK_142e478de);
    auVar28[0xf] = -(cVar56 == UNK_142e478df);
    uVar13 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
    goto joined_r0x000140142c6c;
  case 0xd:
    if ((POPCOUNT((ulonglong)pfVar9 & 0xff) & 1U) != 0) {
      if (((ulonglong)UNRECOVERED_JUMPTABLE_00 ^ *(ulonglong *)((longlong)param_2 + 5) | 0x142e480b8
          ) == 0) {
        (&UNK_142e480b9)[uVar8] = 2;
        *(byte *)pfVar9 = 0x32;
        return pfVar9;
      }
      goto LAB_140142c39;
    }
  case 0x13:
    auVar58[0] = -(in_XMM1[0] == UNK_142e478c0);
    auVar58[1] = -(in_XMM1[1] == UNK_142e478c1);
    auVar58[2] = -(in_XMM1[2] == UNK_142e478c2);
    auVar58[3] = -(in_XMM1[3] == UNK_142e478c3);
    auVar58[4] = -(in_XMM1[4] == UNK_142e478c4);
    auVar58[5] = -(in_XMM1[5] == UNK_142e478c5);
    auVar58[6] = -(in_XMM1[6] == UNK_142e478c6);
    auVar58[7] = -(in_XMM1[7] == UNK_142e478c7);
    auVar58[8] = -(in_XMM1[8] == UNK_142e478c8);
    auVar58[9] = -(in_XMM1[9] == UNK_142e478c9);
    auVar58[10] = -(in_XMM1[10] == UNK_142e478ca);
    auVar58[0xb] = -(in_XMM1[0xb] == UNK_142e478cb);
    auVar58[0xc] = -(in_XMM1[0xc] == UNK_142e478cc);
    auVar58[0xd] = -(in_XMM1[0xd] == UNK_142e478cd);
    auVar58[0xe] = -(in_XMM1[0xe] == UNK_142e478ce);
    auVar58[0xf] = -(in_XMM1[0xf] == UNK_142e478cf);
    auVar58 = auVar58 & in_XMM0;
    uVar13 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar58[0xf] >> 7) << 0xf;
joined_r0x000140142c6c:
    if (uVar13 == 0xffff) {
      (&UNK_142e480b9)[uVar8] = 1;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
LAB_140142c39:
    (&UNK_142e480b9)[uVar8] = 3;
    *(byte *)pfVar9 = 0x32;
    return pfVar9;
  case 0x11:
    goto LAB_140142c39;
  case 0x12:
    uVar13 = (ushort)(byte)((byte)(in_MM0 >> 7) & 1 | ((byte)(in_MM0 >> 0xf) & 1) << 1 |
                            ((byte)(in_MM0 >> 0x17) & 1) << 2 | ((byte)(in_MM0 >> 0x1f) & 1) << 3 |
                            ((byte)(in_MM0 >> 0x27) & 1) << 4 | ((byte)(in_MM0 >> 0x2f) & 1) << 5 |
                            ((byte)(in_MM0 >> 0x37) & 1) << 6 | (byte)(in_MM0 >> 0x38) & 0x80);
    goto joined_r0x000140142c6c;
  default:
    *(char *)param_2 = *(char *)param_2 << 1 | *(char *)param_2 < '\0';
    auVar29[0] = -(cVar26 == UNK_142e478f0);
    auVar29[1] = -(cVar42 == UNK_142e478f1);
    auVar29[2] = -(cVar43 == UNK_142e478f2);
    auVar29[3] = -(cVar44 == UNK_142e478f3);
    auVar29[4] = -(cVar45 == UNK_142e478f4);
    auVar29[5] = -(cVar46 == UNK_142e478f5);
    auVar29[6] = -(cVar47 == UNK_142e478f6);
    auVar29[7] = -(cVar48 == UNK_142e478f7);
    auVar29[8] = -(cVar49 == UNK_142e478f8);
    auVar29[9] = -(cVar50 == UNK_142e478f9);
    auVar29[10] = -(cVar51 == UNK_142e478fa);
    auVar29[0xb] = -(cVar52 == UNK_142e478fb);
    auVar29[0xc] = -(cVar53 == UNK_142e478fc);
    auVar29[0xd] = -(cVar54 == UNK_142e478fd);
    auVar29[0xe] = -(cVar55 == UNK_142e478fe);
    auVar29[0xf] = -(cVar56 == UNK_142e478ff);
    auVar29 = auVar29 & in_XMM1;
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_142e480b9)[uVar8] = 4;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    goto LAB_140142db5;
  case 0x16:
    goto LAB_140142db5;
  case 0x1d:
    pcVar14 = (code *)swi(3);
    pfVar9 = (float *)(*pcVar14)();
    return pfVar9;
  case 0x1f:
    pfVar9 = (float *)CONCAT62((int6)((ulonglong)pfVar9 >> 0x10),
                               CONCAT11((char)((ulonglong)pfVar9 >> 8) +
                                        *(char *)((longlong)param_1 + 0xf),bVar5));
    auVar61 = in_XMM0 & in_XMM1;
    if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) == 0xffff) {
      *(byte *)((longlong)pfVar9 + 1) = 1;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    goto LAB_140142db5;
  case 0x21:
    lVar20 = CONCAT71(0x142e480,(byte)*UNRECOVERED_JUMPTABLE_00 | 0xb8);
    (&UNK_142e48039)[uVar8] = (&UNK_142e48039)[uVar8] | (byte)*UNRECOVERED_JUMPTABLE_00 | 0xb8;
    while (lVar20 != 0) {
      lVar20 = lVar20 + -1;
      out(*(char *)param_1,(short)param_2);
      param_1 = (float *)((longlong)param_1 + 1);
    }
    *(byte *)pfVar9 = *(byte *)pfVar9 + bVar5;
    if (param_2 == (float *)0x0) {
      (&UNK_142e480b9)[uVar8] = 0;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
LAB_140142db5:
    *(byte *)((longlong)pfVar9 + 1) = 6;
    *(byte *)pfVar9 = 0x32;
    return pfVar9;
  case 0x26:
    uVar24 = uVar24 + CONCAT13(UNK_142e480c4,_UNK_142e480c1);
    pfVar9 = (float *)(ulonglong)uVar24;
    puVar17 = (undefined8 *)&stack0xffffffffffffff80;
    cVar26 = '\x18';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar17 = puVar17 + -1;
      *puVar17 = *unaff_RBP;
      cVar26 = cVar26 + -1;
    } while ('\0' < cVar26);
    *(char *)pfVar9 = *(char *)pfVar9 + (char)uVar24;
    cRam00000001442d08bd = cRam00000001442d08bd + cVar6;
    *(char *)pfVar9 = '2';
    return pfVar9;
  case 0x27:
    return (float *)&UNK_142e480b8;
  case 0x28:
  case 0x2f:
  case 0x31:
  case 0x35:
  case 0x38:
  case 0x3a:
    if (((uint)param_2 | 0x42e480b8) == 0) {
      (&UNK_142e480b9)[uVar8] = 4;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    break;
  case 0x29:
    pfVar9 = (float *)CONCAT71(uVar12,unaff_RBX[(ulonglong)pfVar9 & 0xff]);
    puVar17 = (undefined8 *)&stack0xffffffffffffff80;
    cVar6 = '\x1e';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar17 = puVar17 + -1;
      *puVar17 = *unaff_RBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    *pfVar9 = (float)((int)*pfVar9 + 1);
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
    in_XMM1[0] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a60);
    in_XMM1[1] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a61);
    in_XMM1[2] = -(*(char *)(param_2 + 2) == UNK_142e47a62);
    in_XMM1[3] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a63);
    in_XMM1[4] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a64);
    in_XMM1[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a65);
    in_XMM1[6] = -(*(char *)(param_2 + 3) == UNK_142e47a66);
    in_XMM1[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a67);
    in_XMM1[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a68);
    in_XMM1[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a69);
    in_XMM1[10] = -(*(char *)(param_2 + 4) == UNK_142e47a6a);
    in_XMM1[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47a6b);
    in_XMM1[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47a6c);
    in_XMM1[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47a6d);
    in_XMM1[0xe] = -(*(char *)(param_2 + 5) == UNK_142e47a6e);
    in_XMM1[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e47a6f);
    in_XMM0[0] = -(cVar26 == UNK_142e47a70);
    in_XMM0[1] = -(cVar42 == UNK_142e47a71);
    in_XMM0[2] = -(cVar43 == UNK_142e47a72);
    in_XMM0[3] = -(cVar44 == UNK_142e47a73);
    in_XMM0[4] = -(cVar45 == UNK_142e47a74);
    in_XMM0[5] = -(cVar46 == UNK_142e47a75);
    in_XMM0[6] = -(cVar47 == UNK_142e47a76);
    in_XMM0[7] = -(cVar48 == UNK_142e47a77);
    in_XMM0[8] = -(cVar49 == UNK_142e47a78);
    in_XMM0[9] = -(cVar50 == UNK_142e47a79);
    in_XMM0[10] = -(cVar51 == UNK_142e47a7a);
    in_XMM0[0xb] = -(cVar52 == UNK_142e47a7b);
    in_XMM0[0xc] = -(cVar53 == UNK_142e47a7c);
    in_XMM0[0xd] = -(cVar54 == UNK_142e47a7d);
    in_XMM0[0xe] = -(cVar55 == UNK_142e47a7e);
    in_XMM0[0xf] = -(cVar56 == UNK_142e47a7f);
  case 0x2e:
    auVar61 = in_XMM0 & in_XMM1;
    if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) == 0xffff) {
      *(byte *)((longlong)pfVar9 + 1) = 5;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    in_XMM1[0] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a80);
    in_XMM1[1] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a81);
    in_XMM1[2] = -(*(char *)(param_2 + 2) == UNK_142e47a82);
    in_XMM1[3] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a83);
    in_XMM1[4] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a84);
    in_XMM1[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a85);
    in_XMM1[6] = -(*(char *)(param_2 + 3) == UNK_142e47a86);
    in_XMM1[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a87);
    in_XMM1[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a88);
    in_XMM1[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a89);
    in_XMM1[10] = -(*(char *)(param_2 + 4) == UNK_142e47a8a);
    in_XMM1[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47a8b);
    in_XMM1[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47a8c);
    in_XMM1[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47a8d);
    in_XMM1[0xe] = -(*(char *)(param_2 + 5) == UNK_142e47a8e);
    in_XMM1[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e47a8f);
    in_XMM0[0] = -(*(char *)param_2 == UNK_142e47a90);
    in_XMM0[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47a91);
    in_XMM0[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47a92);
    in_XMM0[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47a93);
    in_XMM0[4] = -(*(char *)(param_2 + 1) == UNK_142e47a94);
    in_XMM0[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47a95);
    in_XMM0[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47a96);
    in_XMM0[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47a97);
    in_XMM0[8] = -(*(char *)(param_2 + 2) == UNK_142e47a98);
    in_XMM0[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47a99);
    in_XMM0[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47a9a);
    in_XMM0[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47a9b);
    in_XMM0[0xc] = -(*(char *)(param_2 + 3) == UNK_142e47a9c);
    in_XMM0[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47a9d);
    in_XMM0[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47a9e);
    in_XMM0[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47a9f);
    goto code_r0x0001401430a2;
  case 0x2a:
    (&UNK_142e480b9)[uVar8] = 0xb8;
    *(byte *)pfVar9 = 0x32;
    return pfVar9;
  case 0x2b:
    *pfVar9 = (float)((int)*pfVar9 + 1);
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
    auVar32[0] = -(cVar26 == UNK_142e47ac0);
    auVar32[1] = -(cVar42 == UNK_142e47ac1);
    auVar32[2] = -(cVar43 == UNK_142e47ac2);
    auVar32[3] = -(cVar44 == UNK_142e47ac3);
    auVar32[4] = -(cVar45 == UNK_142e47ac4);
    auVar32[5] = -(cVar46 == UNK_142e47ac5);
    auVar32[6] = -(cVar47 == UNK_142e47ac6);
    auVar32[7] = -(cVar48 == UNK_142e47ac7);
    auVar32[8] = -(cVar49 == UNK_142e47ac8);
    auVar32[9] = -(cVar50 == UNK_142e47ac9);
    auVar32[10] = -(cVar51 == UNK_142e47aca);
    auVar32[0xb] = -(cVar52 == UNK_142e47acb);
    auVar32[0xc] = -(cVar53 == UNK_142e47acc);
    auVar32[0xd] = -(cVar54 == UNK_142e47acd);
    auVar32[0xe] = -(cVar55 == UNK_142e47ace);
    auVar32[0xf] = -(cVar56 == UNK_142e47acf);
    if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf
                ) == 0xffff) {
      (&UNK_142e480b9)[uVar8] = 9;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    auVar33[0] = -(*(char *)param_2 == UNK_142e47ad0);
    auVar33[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47ad1);
    auVar33[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47ad2);
    auVar33[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47ad3);
    auVar33[4] = -(*(char *)(param_2 + 1) == UNK_142e47ad4);
    auVar33[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47ad5);
    auVar33[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47ad6);
    auVar33[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47ad7);
    auVar33[8] = -(*(char *)(param_2 + 2) == UNK_142e47ad8);
    auVar33[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47ad9);
    auVar33[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47ada);
    auVar33[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47adb);
    auVar33[0xc] = -(*(char *)(param_2 + 3) == UNK_142e47adc);
    auVar33[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47add);
    auVar33[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47ade);
    auVar33[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47adf);
    if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf
                ) == 0xffff) {
      (&UNK_142e480b9)[uVar8] = 0xc;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    auVar34[0] = -(*(char *)param_2 == UNK_142e47ae0);
    auVar34[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47ae1);
    auVar34[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47ae2);
    auVar34[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47ae3);
    auVar34[4] = -(*(char *)(param_2 + 1) == UNK_142e47ae4);
    auVar34[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47ae5);
    auVar34[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47ae6);
    auVar34[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47ae7);
    auVar34[8] = -(*(char *)(param_2 + 2) == UNK_142e47ae8);
    auVar34[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47ae9);
    auVar34[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47aea);
    auVar34[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47aeb);
    auVar34[0xc] = -(*(char *)(param_2 + 3) == UNK_142e47aec);
    auVar34[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47aed);
    auVar34[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47aee);
    auVar34[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47aef);
    pcVar14 = (code *)(ulonglong)
                      (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar34[0xf] >> 7) << 0xf);
  case 0x2c:
    if ((int)pcVar14 == 0xffff) {
      (&UNK_142e480b9)[uVar8] = 0x14;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    break;
  case 0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x30:
    goto code_r0x0001401430a2;
  case 0x32:
    iVar7 = CONCAT13(UNK_142e480c4,_UNK_142e480c1);
    puVar17 = (undefined8 *)&stack0xffffffffffffff80;
    cVar26 = '\x1c';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar17 = puVar17 + -1;
      *puVar17 = *unaff_RBP;
      cVar26 = cVar26 + -1;
    } while ('\0' < cVar26);
    *(byte *)pfVar9 = *(byte *)pfVar9 + bVar5;
    pcVar10 = (char *)((ulonglong)(iVar7 + 0x42e480b8) + 0x1488817);
    *pcVar10 = *pcVar10 + cVar6;
    *(byte *)pfVar9 = 0x32;
    return pfVar9;
  case 0x33:
    pfVar9 = (float *)(ulonglong)(uVar24 + 0x2d04820);
    auVar61 = in_XMM0 & in_XMM1;
    if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) == 0xffff) {
      *(byte *)((longlong)pfVar9 + 1) = 0xe;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    break;
  case 0x34:
                    /* WARNING: Could not recover jumptable at 0x000140142e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar9 = (float *)(*(code *)(&UNK_142e480b8 +
                                *(int *)(&UNK_142e480b8 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4)))
                                (&UNK_142e480b8,param_2,
                                 &UNK_142e480b8 +
                                 *(int *)(&UNK_142e480b8 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4));
    return pfVar9;
  case 0x36:
    auVar30[0] = -(cVar26 == UNK_142e47af0);
    auVar30[1] = -(cVar42 == UNK_142e47af1);
    auVar30[2] = -(cVar43 == UNK_142e47af2);
    auVar30[3] = -(cVar44 == UNK_142e47af3);
    auVar30[4] = -(cVar45 == UNK_142e47af4);
    auVar30[5] = -(cVar46 == UNK_142e47af5);
    auVar30[6] = -(cVar47 == UNK_142e47af6);
    auVar30[7] = -(cVar48 == UNK_142e47af7);
    auVar30[8] = -(cVar49 == UNK_142e47af8);
    auVar30[9] = -(cVar50 == UNK_142e47af9);
    auVar30[10] = -(cVar51 == UNK_142e47afa);
    auVar30[0xb] = -(cVar52 == UNK_142e47afb);
    auVar30[0xc] = -(cVar53 == UNK_142e47afc);
    auVar30[0xd] = -(cVar54 == UNK_142e47afd);
    auVar30[0xe] = -(cVar55 == UNK_142e47afe);
    auVar30[0xf] = -(cVar56 == UNK_142e47aff);
    auVar30 = auVar30 & in_XMM1;
    if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_142e480b9)[uVar8] = 2;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    break;
  case 0x37:
    *(char *)param_2 = *(char *)param_2 + cVar6;
    return pfVar9;
  case 0x39:
    uStack_58 = 4;
    pdb_142db7e70(&UNK_142e480b8,param_2,UNRECOVERED_JUMPTABLE_00,&UNK_142e47e68);
    return (float *)&UNK_142e480b8;
  case 0x3b:
    if (*(longlong *)((longlong)param_2 + 6) == 0x65646f6d5f676e69 &&
        *(undefined **)param_2 == &UNK_142e480b8) {
      (&UNK_142e480b9)[uVar8] = 8;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    break;
  case 0x3c:
    auVar60[0] = -(*(char *)((longlong)param_2 + 3) == UNK_142e479c0);
    auVar60[1] = -(*(char *)(param_2 + 1) == UNK_142e479c1);
    auVar60[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142e479c2);
    auVar60[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142e479c3);
    auVar60[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142e479c4);
    auVar60[5] = -(*(char *)(param_2 + 2) == UNK_142e479c5);
    auVar60[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142e479c6);
    auVar60[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142e479c7);
    auVar60[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e479c8);
    auVar60[9] = -(*(char *)(param_2 + 3) == UNK_142e479c9);
    auVar60[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e479ca);
    auVar60[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e479cb);
    auVar60[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e479cc);
    auVar60[0xd] = -(*(char *)(param_2 + 4) == UNK_142e479cd);
    auVar60[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e479ce);
    auVar60[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e479cf);
    auVar35[0] = -(cVar26 == UNK_142e479d0);
    auVar35[1] = -(cVar42 == UNK_142e479d1);
    auVar35[2] = -(cVar43 == UNK_142e479d2);
    auVar35[3] = -(cVar44 == UNK_142e479d3);
    auVar35[4] = -(cVar45 == UNK_142e479d4);
    auVar35[5] = -(cVar46 == UNK_142e479d5);
    auVar35[6] = -(cVar47 == UNK_142e479d6);
    auVar35[7] = -(cVar48 == UNK_142e479d7);
    auVar35[8] = -(cVar49 == UNK_142e479d8);
    auVar35[9] = -(cVar50 == UNK_142e479d9);
    auVar35[10] = -(cVar51 == UNK_142e479da);
    auVar35[0xb] = -(cVar52 == UNK_142e479db);
    auVar35[0xc] = -(cVar53 == UNK_142e479dc);
    auVar35[0xd] = -(cVar54 == UNK_142e479dd);
    auVar35[0xe] = -(cVar55 == UNK_142e479de);
    auVar35[0xf] = -(cVar56 == UNK_142e479df);
    auVar35 = auVar35 & auVar60;
    bVar23 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) == 0xffff;
  case 0x40:
    if (bVar23) {
      (&UNK_142e480b9)[uVar8] = 0x13;
      *(byte *)pfVar9 = 0x32;
      return pfVar9;
    }
    break;
  case 0x3d:
    pfVar9 = (float *)CONCAT71(uVar12,bVar5 ^ bVar15);
    *(undefined1 *)((longlong)pfVar9 + 1) = 0;
    *(undefined1 *)pfVar9 = 0x32;
    return pfVar9;
  case 0x3e:
  case 0x3f:
  case 0x42:
  case 0x43:
  case 0x44:
    *(char *)param_2 = *(char *)param_2 + cVar6;
    return (float *)((ulonglong)pfVar9 | 0x88);
  case 0x41:
    *(char *)param_2 = *(char *)param_2 + cVar6;
    return pfVar9;
  case 0x45:
    break;
  case 0x46:
                    /* WARNING: Could not recover jumptable at 0x000140143381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar9 = (float *)(*(code *)(*(int *)(in_R9 + (longlong)pfVar9 * 4) + in_R9))();
    return pfVar9;
  case 0x47:
  case 0x48:
  case 0x4b:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
                    /* WARNING: Could not recover jumptable at 0x00014014348f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar9 = (float *)(*UNRECOVERED_JUMPTABLE_00)();
    return pfVar9;
  case 0x49:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4a:
    *param_2 = (float)((int)*param_2 + (int)param_1);
    pfVar9 = (float *)(ulonglong)(*(int *)(&UNK_142e48041 + uVar8) + 0x42e480b8);
    puStack_a0 = &stack0xffffffffffffff80;
    puVar17 = (undefined8 *)&stack0xffffffffffffff80;
    cVar6 = '\x03';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar17 = puVar17 + -1;
      *puVar17 = *unaff_RBP;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
    puVar18 = auStack_83e8;
    *(byte *)((longlong)param_1 + -0x3d) = *(byte *)((longlong)param_1 + -0x3d) ^ bVar15;
    if (*(longlong *)((longlong)param_2 + 3) == 0x65636e616d726f66 &&
        *(longlong *)param_2 == 0x616d726f66726550) {
      *(undefined2 *)pfVar9 = 0x132;
      return pfVar9;
    }
    goto LAB_140143446;
  case 0x4c:
    pfVar9 = (float *)(ulonglong)(uVar24 | 0x42e480b8);
    if ((uVar24 | 0x42e480b8) == 0) {
      uRam0000000000000000 = 0x432;
      return (float *)0x0;
    }
LAB_140143446:
    *(undefined8 *)(puVar18 + 0x20) = 5;
    *(undefined8 *)(puVar18 + -8) = 0x14014345e;
    pdb_142db7e70(pfVar9,param_2,UNRECOVERED_JUMPTABLE_00,&UNK_142e47ef0);
code_r0x000140143466:
    return pfVar9;
  case 0x51:
    goto code_r0x000140143466;
  case 0x52:
    return pfVar9;
  case 0x53:
    *pfVar9 = (float)((int)*pfVar9 + uVar24);
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
    *pfVar9 = (float)((int)*pfVar9 + uVar24);
    if (*(float *)(&UNK_142e480e4 + uVar8) != param_2[0xb]) {
      return (float *)0x0;
    }
    if (NAN(*(float *)(&UNK_142e480e4 + uVar8)) || NAN(param_2[0xb])) {
      return (float *)0x0;
    }
    cVar6 = pdb_140143ed0(&UNK_142e480e8 + uVar8,param_2 + 0xc);
    if (cVar6 == '\0') {
      return (float *)0x0;
    }
    if (param_1[0x14] != 1.4013e-45) {
      return (float *)(ulonglong)((byte)UNRECOVERED_JUMPTABLE_00[0x50] ^ 1);
    }
    if (UNRECOVERED_JUMPTABLE_00[0x50] == (code)0x0) {
      return (float *)0x0;
    }
    bVar23 = *(float *)(UNRECOVERED_JUMPTABLE_00 + 0x54) == param_1[0x15];
    goto code_r0x000140143b06;
  case 0x54:
    if ((_UNK_142e480cc == param_2[5]) && (!NAN(_UNK_142e480cc) && !NAN(param_2[5]))) {
      if ((_UNK_142e480d0 == param_2[6]) && (!NAN(_UNK_142e480d0) && !NAN(param_2[6]))) {
        if ((_UNK_142e480d4 == param_2[7]) && (!NAN(_UNK_142e480d4) && !NAN(param_2[7]))) {
          return (float *)CONCAT71(uVar12,1);
        }
      }
    }
    return (float *)0x0;
  case 0x55:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
    if ((_UNK_142e480c8 != param_2[4]) || (NAN(_UNK_142e480c8) || NAN(param_2[4]))) {
      return (float *)0x0;
    }
    bVar23 = param_2[5] == _UNK_142e480cc;
code_r0x000140143b06:
    return (float *)(ulonglong)(-(uint)bVar23 & 1);
  case 0x56:
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
    *(byte *)(param_2 + 4) = *(char *)(param_2 + 4) - bVar5;
    auVar36._4_4_ = -(uint)(fVar66 == _UNK_142e480cc);
    auVar36._0_4_ = -(uint)(fVar65 == _UNK_142e480c8);
    auVar36._8_4_ = -(uint)(in_XMM0._8_4_ == _UNK_142e480d0);
    auVar36._12_4_ = -(uint)(in_XMM0._12_4_ == _UNK_142e480d4);
    iVar7 = movmskps((int)in_R9,auVar36);
    if (iVar7 != 0xf) {
      return (float *)0x0;
    }
    auVar37._4_4_ = -(uint)(param_2[9] == _UNK_142e480dc);
    auVar37._0_4_ = -(uint)(param_2[8] == _UNK_142e480d8);
    auVar37._8_4_ = -(uint)(param_2[10] == _UNK_142e480e0);
    auVar37._12_4_ = -(uint)(param_2[0xb] == _UNK_142e480e4);
    iVar7 = movmskps(0xf,auVar37);
    if (iVar7 != 0xf) {
      return (float *)0x0;
    }
    auVar38._4_4_ = -(uint)(param_2[0xd] == _UNK_142e480ec);
    auVar38._0_4_ = -(uint)(param_2[0xc] == _UNK_142e480e8);
    auVar38._8_4_ = -(uint)(param_2[0xe] == _UNK_142e480f0);
    auVar38._12_4_ = -(uint)(param_2[0xf] == _UNK_142e480f4);
    iVar7 = movmskps(0xf,auVar38);
    if (iVar7 != 0xf) {
      return (float *)0x0;
    }
    auVar39._4_4_ = -(uint)(param_2[0x11] == _UNK_142e480fc);
    auVar39._0_4_ = -(uint)(param_2[0x10] == _UNK_142e480f8);
    auVar39._8_4_ = -(uint)(param_2[0x12] == _UNK_142e48100);
    auVar39._12_4_ = -(uint)(param_2[0x13] == _UNK_142e48104);
    iVar7 = movmskps(0xf,auVar39);
    if (iVar7 != 0xf) {
      return (float *)0x0;
    }
    uVar25 = *_UNK_142e48108 - 3;
    if (*_UNK_142e48108 < 3) {
      uVar25 = uVar24;
    }
    uVar19 = **(uint **)(param_2 + 0x14) - 3;
    if (**(uint **)(param_2 + 0x14) < 3) {
      uVar19 = uVar24;
    }
    if (uVar25 != uVar19) {
      return (float *)0x0;
    }
    goto code_r0x000140143fa3;
  case 0x57:
    uVar25 = (int)_UNK_142e480b8 - 3;
    if ((uint)_UNK_142e480b8 < 3) {
      uVar25 = 4;
    }
    uVar24 = (int)*param_2 - 3;
    if ((uint)*param_2 < 3) {
      uVar24 = 4;
    }
    if (uVar25 != uVar24) {
      return (float *)0x0;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_142e48210;
code_r0x000140143fa3:
                    /* WARNING: Could not recover jumptable at 0x000140143fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar9 = (float *)(*(UNRECOVERED_JUMPTABLE_00 +
                        *(int *)(UNRECOVERED_JUMPTABLE_00 + (ulonglong)uVar25 * 4)))();
    return pfVar9;
  case 0x58:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
    pcVar10 = (char *)((ulonglong)pfVar9 & 0xffffffffffffffa0);
    *pcVar10 = *pcVar10 + (char)pcVar10;
    cVar2 = *UNRECOVERED_JUMPTABLE_00;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
    cStack_18 = cStack_18 + (char)pcVar10 + (0x47 < (byte)cVar2);
code_r0x000140144a03:
    param_9 = CONCAT44(fStack_34,fStack_38);
    param_10 = CONCAT44(fStack_2c,fStack_30);
    param_11 = CONCAT44(fStack_24,fStack_28);
    param_12 = CONCAT44(fStack_1c,CONCAT22(uStack_1e,CONCAT11(cStack_1f,cStack_20)));
    param_7 = uStack_48;
    param_8 = uStack_40;
    param_5 = uStack_58;
    param_6 = lStack_50;
    in_XMM0._1_7_ = uStack_17;
    in_XMM0[0] = cStack_18;
    in_XMM0._8_8_ = unaff_RDI;
    param_18 = uStackX_18;
    param_19 = uStackX_20;
    param_16 = uStackX_8;
    param_17 = uStackX_10;
    param_14 = unaff_RSI;
    param_15 = unaff_retaddr;
    goto code_r0x000140144a69;
  case 0x5a:
    while( true ) {
      fVar64 = *(float *)(in_R10 + 4 + (longlong)in_R11 * 8);
      pfVar22 = (float *)(in_R9 + 4 + (longlong)in_R11 * 8);
      if (fVar64 != *pfVar22) {
        return pfVar9;
      }
      if (NAN(fVar64) || NAN(*pfVar22)) {
        return pfVar9;
      }
      in_R11 = in_R11 + 1;
      if (UNRECOVERED_JUMPTABLE_00 == in_R11) break;
code_r0x000140144484:
      fVar64 = *(float *)(in_R10 + (longlong)in_R11 * 8);
      pfVar9 = (float *)0x0;
      pfVar22 = (float *)(in_R9 + (longlong)in_R11 * 8);
      if (fVar64 != *pfVar22) {
        return (float *)0x0;
      }
      if (NAN(fVar64) || NAN(*pfVar22)) {
        return (float *)0x0;
      }
    }
    goto code_r0x0001401444be;
  case 0x5b:
    pcVar14 = UNRECOVERED_JUMPTABLE_00 + 0x3b;
    cVar2 = *pcVar14;
    cVar3 = *pcVar14;
    *pcVar14 = (code)(((char)cVar3 + 0x48U) - (0xfffffffebd1b7f47 < uVar8));
    *UNRECOVERED_JUMPTABLE_00 =
         (code)(((char)*UNRECOVERED_JUMPTABLE_00 + 'H') -
               ((byte)cVar2 < 0xb8 || (byte)((char)cVar3 + 0x48U) < (0xfffffffebd1b7f47 < uVar8)));
    *(byte *)pfVar9 = *(byte *)pfVar9 + bVar5;
    if (pfVar9 != (float *)0x0) {
      pfVar22 = (float *)0x0;
      do {
        if (*(byte *)(CONCAT44(_UNK_142e480cc,_UNK_142e480c8) + (longlong)pfVar22) !=
            *(byte *)(*(longlong *)(param_2 + 4) + (longlong)pfVar22)) {
          return (float *)0x0;
        }
        pfVar22 = (float *)((longlong)pfVar22 + 1);
      } while (pfVar9 != pfVar22);
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)CONCAT44(_UNK_142e480ec,_UNK_142e480e8);
    if (UNRECOVERED_JUMPTABLE_00 != *(code **)(param_2 + 0xc)) {
      return (float *)0x0;
    }
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      in_R9 = *(longlong *)(param_2 + 10);
      in_R10 = CONCAT44(_UNK_142e480e4,_UNK_142e480e0);
      in_R11 = (code *)0x0;
      goto code_r0x000140144484;
    }
code_r0x0001401444be:
    if (_UNK_142e480f0 != param_2[0xe]) {
      return (float *)0x0;
    }
    if (NAN(_UNK_142e480f0) || NAN(param_2[0xe])) {
      return (float *)0x0;
    }
    if (_UNK_142e480f4 != param_2[0xf]) {
      return (float *)0x0;
    }
    if (NAN(_UNK_142e480f4) || NAN(param_2[0xf])) {
      return (float *)0x0;
    }
    if (_UNK_142e480f8 != param_2[0x10]) {
      return (float *)0x0;
    }
    if (NAN(_UNK_142e480f8) || NAN(param_2[0x10])) {
      return (float *)0x0;
    }
    if (_UNK_142e480fc != param_2[0x11]) {
      return (float *)0x0;
    }
    if (NAN(_UNK_142e480fc) || NAN(param_2[0x11])) {
      return (float *)0x0;
    }
    if (UNK_142e48198 != *(char *)(param_2 + 0x38)) {
      return (float *)0x0;
    }
    if (UNK_142e48199 != *(char *)((longlong)param_2 + 0xe1)) {
      return (float *)0x0;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_142e480b8;
    cVar6 = pdb_140143a70(&UNK_142e48140,param_2 + 0x22);
    if (cVar6 == '\0') {
      return (float *)0x0;
    }
    param_1 = param_2;
    if (UNK_142e4819a != *(char *)((longlong)param_2 + 0xe2)) {
      return (float *)0x0;
    }
pdb_140143de0:
    pcVar14 = UNRECOVERED_JUMPTABLE_00 + 0x48;
    param_2 = param_1 + 0x12;
    if (*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x78) != param_1[0x1e]) {
      return (float *)0x0;
    }
    if (NAN(*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x78)) || NAN(param_1[0x1e])) {
      return (float *)0x0;
    }
    if (*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x7c) != param_1[0x1f]) {
      return (float *)0x0;
    }
    if (NAN(*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x7c)) || NAN(param_1[0x1f])) {
      return (float *)0x0;
    }
    if (UNRECOVERED_JUMPTABLE_00[0x80] != *(code *)(param_1 + 0x20)) {
      return (float *)0x0;
    }
    if (UNRECOVERED_JUMPTABLE_00[0x81] != *(code *)((longlong)param_1 + 0x81)) {
      return (float *)0x0;
    }
    lVar20 = *(longlong *)param_2;
    pfVar9 = (float *)CONCAT71((int7)((ulonglong)-lVar20 >> 8),
                               SBORROW8(0,lVar20) && SBORROW8(0,*(longlong *)pcVar14));
    if (SBORROW8(0,*(longlong *)pcVar14)) {
      return pfVar9;
    }
    if (lVar20 == -0x8000000000000000) {
      return pfVar9;
    }
    bVar23 = NAN(*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x68)) || NAN(param_1[0x1a]);
    if (*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x68) != param_1[0x1a]) {
      return (float *)0x0;
    }
code_r0x000140143e5f:
    if (!bVar23) {
      if (((*(float *)(pcVar14 + 0x28) == param_2[10]) &&
          (!NAN(*(float *)(pcVar14 + 0x28)) && !NAN(param_2[10]))) &&
         (lVar20 = *(longlong *)(pcVar14 + 0x10), lVar20 == *(longlong *)(param_2 + 4))) {
        if (lVar20 != 0) {
          lVar21 = 0;
          do {
            fVar64 = *(float *)(*(longlong *)(pcVar14 + 8) + lVar21 * 4);
            pfVar9 = (float *)(*(longlong *)(param_2 + 2) + lVar21 * 4);
            if (fVar64 != *pfVar9) {
              return (float *)0x0;
            }
            if (NAN(fVar64) || NAN(*pfVar9)) {
              return (float *)0x0;
            }
            lVar21 = lVar21 + 1;
          } while (lVar20 != lVar21);
        }
        if ((*(float *)(pcVar14 + 0x24) == param_2[9]) &&
           (!NAN(*(float *)(pcVar14 + 0x24)) && !NAN(param_2[9]))) {
          return (float *)CONCAT71((int7)((ulonglong)*(longlong *)(pcVar14 + 0x18) >> 8),
                                   *(longlong *)(pcVar14 + 0x18) == *(longlong *)(param_2 + 6));
        }
      }
    }
    return (float *)0x0;
  case 0x5c:
    if (!bVar23) {
      return (float *)0x0;
    }
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      puVar11 = &UNK_142e480c8;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x1) {
        if (_UNK_142e480d8 != param_2[8]) {
          return (float *)0x0;
        }
        bVar23 = _UNK_142e480dc == param_2[9];
        goto code_r0x000140144b0c;
      }
      goto code_r0x0001401445e6;
    }
    unaff_RBX = &UNK_142e480b8;
    uVar27 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 6);
    pdb_140f3ddd0(&uStack_58,CONCAT44(_UNK_142e480cc,_UNK_142e480c8),
                  CONCAT44(_UNK_142e480d4,_UNK_142e480d0));
    pdb_140f3ddd0(&cStack_18,uVar27,uVar4);
    unaff_R14 = param_2;
    if (((((lStack_50 != unaff_RDI) || (cStack_20 != (char)uStackX_20)) || (cStack_1f != '\x02')) ||
        ((uStackX_20._1_1_ != '\x02' || ((byte)unaff_RSI < 3 != (byte)uStack_48 < 3)))) ||
       (iVar7 = pub_142e32750(uStack_58,CONCAT71(uStack_17,cStack_18)), iVar7 != 0))
    goto code_r0x000140144a03;
    goto code_r0x000140144a8e;
  case 0x5d:
    goto pdb_140143de0;
  case 0x5e:
    *UNRECOVERED_JUMPTABLE_00 = (code)((byte)*UNRECOVERED_JUMPTABLE_00 & 0xb8);
    pbVar1 = (byte *)((longlong)unaff_RBP + 0x59);
    *pbVar1 = *pbVar1 & (byte)param_1;
    bVar23 = (POPCOUNT(*pbVar1) & 1U) == 0;
    goto code_r0x000140143e5f;
  case 0x5f:
    pcVar14 = (code *)swi(3);
    pfVar9 = (float *)(*pcVar14)();
    return pfVar9;
  case 0x60:
    *(uint *)((longlong)unaff_RBP + 0x31) = *(uint *)((longlong)unaff_RBP + 0x31) | uVar24;
    *(undefined1 *)((longlong)unaff_RBP + 0x39) = *(undefined1 *)((longlong)unaff_RBP + 0x39);
    return pfVar9;
  case 0x61:
    cVar2 = *UNRECOVERED_JUMPTABLE_00;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
    if (*UNRECOVERED_JUMPTABLE_00 == (code)0x0 ||
        SCARRY1((char)cVar2,-0x48) != (char)*UNRECOVERED_JUMPTABLE_00 < '\0') {
code_r0x0001401442ea:
      if (param_1[0x1c] != *(float *)(UNRECOVERED_JUMPTABLE_00 + 0x70)) {
        return (float *)0x0;
      }
      if (NAN(param_1[0x1c]) || NAN(*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x70))) {
        return (float *)0x0;
      }
    }
    else {
      if (*UNRECOVERED_JUMPTABLE_00 == (code)0x0 ||
          SCARRY1((char)cVar2,-0x48) != (char)*UNRECOVERED_JUMPTABLE_00 < '\0') {
code_r0x0001401442bd:
        *(byte *)pfVar9 = *(byte *)pfVar9 | bVar5;
        if (param_1[0x1a] != *(float *)(UNRECOVERED_JUMPTABLE_00 + 0x68)) {
          return (float *)0x0;
        }
        if (NAN(param_1[0x1a]) || NAN(*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x68))) {
          return (float *)0x0;
        }
code_r0x0001401442d5:
        if (param_1[0x1b] != *(float *)(UNRECOVERED_JUMPTABLE_00 + 0x6c)) {
          return (float *)0x0;
        }
        if (NAN(param_1[0x1b]) || NAN(*(float *)(UNRECOVERED_JUMPTABLE_00 + 0x6c))) {
          return (float *)0x0;
        }
        goto code_r0x0001401442ea;
      }
      *(byte *)pfVar9 = *(byte *)pfVar9 | bVar5;
      bVar23 = SCARRY1((char)*UNRECOVERED_JUMPTABLE_00,-0x48);
      *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
      if (bVar23 == (char)*UNRECOVERED_JUMPTABLE_00 < '\0') {
        if (bVar23 == (char)*UNRECOVERED_JUMPTABLE_00 < '\0') goto code_r0x0001401442bd;
        goto code_r0x0001401442d5;
      }
      if ((bVar23) && (*UNRECOVERED_JUMPTABLE_00 == (code)0x0)) {
        *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
      }
    }
    bVar23 = *(float *)(UNRECOVERED_JUMPTABLE_00 + 0x74) == param_1[0x1d];
    goto code_r0x000140144aea;
  case 0x62:
    *(byte *)pfVar9 = *(byte *)pfVar9 + bVar5;
code_r0x000140144a69:
    param_13 = in_XMM0;
    cVar6 = pdb_14057d6e0(&param_5,param_13);
    param_2 = unaff_R14;
code_r0x000140144a86:
    if (cVar6 != '\0') {
code_r0x000140144a8e:
      unaff_R14 = param_2;
      if (unaff_RBX[0x40] == *(char *)(param_2 + 0x10)) {
code_r0x000140144a9c:
        if ((*(float *)(unaff_RBX + 0x30) == unaff_R14[0xc]) &&
           (!NAN(*(float *)(unaff_RBX + 0x30)) && !NAN(unaff_R14[0xc]))) {
          if ((*(float *)(unaff_RBX + 0x34) == unaff_R14[0xd]) &&
             (!NAN(*(float *)(unaff_RBX + 0x34)) && !NAN(unaff_R14[0xd]))) {
            if ((*(float *)(unaff_RBX + 0x38) == unaff_R14[0xe]) &&
               (!NAN(*(float *)(unaff_RBX + 0x38)) && !NAN(unaff_R14[0xe]))) {
              bVar23 = unaff_R14[0xf] == *(float *)(unaff_RBX + 0x3c);
code_r0x000140144aea:
              return (float *)(ulonglong)(-(uint)bVar23 & 1);
            }
          }
        }
      }
    }
    return (float *)0x0;
  case 99:
    pfVar9 = (float *)CONCAT71(uVar12,bVar5 + *(byte *)pfVar9);
    fVar64 = param_2[0x13];
    if (*(char *)((longlong)param_2 + 0x7e) != '\0') {
      if (*(char *)((longlong)param_2 + 0x7e) == '\x02') {
        fVar64 = fVar64 - param_2[0x15];
      }
      else {
        fVar64 = fVar64 + param_2[0x15] * _DAT_142e36f38;
      }
    }
    fVar62 = in_XMM1._0_4_ + _DAT_142e36f38 * fVar65 + _UNK_142e47be0;
    fVar64 = fVar64 + _UNK_142e47be4;
    fVar65 = fVar65 + _UNK_142e47be8;
    fVar66 = fVar66 + _UNK_142e47bec;
    goto code_r0x000140144e6e;
  case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
    pcVar14 = (code *)swi(1);
    pfVar9 = (float *)(*pcVar14)();
    return pfVar9;
  case 0x66:
    unaff_RBX = (undefined *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar15 + cVar6);
    goto code_r0x000140144a9c;
  case 0x67:
    *(char *)param_2 = *(char *)param_2 << 1 | *(char *)param_2 < '\0';
  case 0x6d:
    *(byte *)pfVar9 = *(byte *)pfVar9 + bVar5;
    auVar61 = minps(ZEXT816(0),in_XMM0);
    fVar62 = (float)(-(uint)!NAN(fVar65) & auVar61._0_4_);
    fVar63 = (float)(-(uint)!NAN(fVar66) & auVar61._4_4_);
    fVar64 = param_2[0x44];
    in_XMM1._0_4_ = fVar64 * _UNK_142e47bd0;
    in_XMM1._4_4_ = fVar64 * _UNK_142e47bd4;
    in_XMM1._8_4_ = fVar64 * _UNK_142e47bd8;
    in_XMM1._12_4_ = fVar64 * _UNK_142e47bdc;
    fVar64 = param_2[0x31];
    fVar57 = param_2[0x32];
    in_XMM3_Dc = param_2[0x33];
    in_XMM3_Dd = param_2[0x34];
    uVar27 = CONCAT44((uint)fVar66 & _UNK_142e377e4,(uint)fVar65 & _DAT_142e377e0);
code_r0x000140144c70:
    fVar62 = ((fVar62 + fVar64) - in_XMM1._0_4_) + _UNK_142e47bc0;
    fVar64 = ((fVar63 + fVar57) - in_XMM1._4_4_) + _UNK_142e47bc4;
    fVar65 = (float)uVar27 + in_XMM3_Dc + in_XMM1._8_4_ + _UNK_142e47bc8;
    fVar66 = (float)((ulonglong)uVar27 >> 0x20) + in_XMM3_Dd + in_XMM1._12_4_ + _UNK_142e47bcc;
code_r0x000140144e6e:
    *pfVar9 = fVar62;
    pfVar9[1] = fVar64;
    pfVar9[2] = fVar65;
    pfVar9[3] = fVar66;
    return pfVar9;
  case 0x68:
    *(byte *)pfVar9 = *(byte *)pfVar9 + bVar5;
    *UNRECOVERED_JUMPTABLE_00 = (code)((char)*UNRECOVERED_JUMPTABLE_00 + -0x48);
    pfVar9 = (float *)(ulonglong)(uVar24 + 0x2cf2b70);
    goto code_r0x000140144c70;
  case 0x69:
    if ((_UNK_142e480d0 == param_2[6]) && (!NAN(_UNK_142e480d0) && !NAN(param_2[6]))) {
      if ((_UNK_142e480b8 == *param_2) && (!NAN(_UNK_142e480b8) && !NAN(*param_2))) {
        if ((_UNK_142e480bc == param_2[1]) && (!NAN(_UNK_142e480bc) && !NAN(param_2[1]))) {
          if ((_UNK_142e480c0 == param_2[2]) && (!NAN(_UNK_142e480c0) && !NAN(param_2[2]))) {
            if ((_UNK_142e480c4 == param_2[3]) && (!NAN(_UNK_142e480c4) && !NAN(param_2[3]))) {
              if ((_UNK_142e480c8 == param_2[4]) && (!NAN(_UNK_142e480c8) && !NAN(param_2[4]))) {
                return (float *)(ulonglong)(-(uint)(param_2[5] == _UNK_142e480cc) & 1);
              }
            }
          }
        }
      }
    }
    return (float *)0x0;
  case 0x6a:
    if (!SCARRY8(uVar8,0x142e480b8)) {
      return pfVar9;
    }
    pdb_140144ba0(UNRECOVERED_JUMPTABLE_00,UNRECOVERED_JUMPTABLE_00);
    uStack_58 = *(ulonglong *)(param_2 + 4);
    lStack_50 = *(longlong *)(param_2 + 6);
    uStack_48 = *(undefined8 *)(param_2 + 8);
    uStack_40 = *(undefined8 *)(param_2 + 10);
    fStack_38 = param_2[0xc];
    fStack_34 = param_2[0xd];
    fStack_30 = param_2[0xe];
    fStack_2c = param_2[0xf];
    fStack_28 = param_2[0x10];
    fStack_24 = param_2[0x11];
    fVar64 = param_2[0x12];
    fStack_1c = param_2[0x13];
    cStack_20 = SUB41(fVar64,0);
    cStack_1f = (char)((uint)fVar64 >> 8);
    uStack_1e = (undefined2)((uint)fVar64 >> 0x10);
    pdb_1406eddc0((float *)((ulonglong)pfVar9 & 0xffffffff),UNRECOVERED_JUMPTABLE_00,&uStack_58);
    return (float *)((ulonglong)pfVar9 & 0xffffffff);
  case 0x6b:
    puVar11 = (undefined *)((ulonglong)pfVar9 & 0xffffffffffffff44);
    bVar23 = SUB84(puVar11,0) == param_2[9];
code_r0x000140144b0c:
    if (!bVar23) {
      return (float *)0x0;
    }
code_r0x0001401445e6:
    unaff_RBX = &UNK_142e480b8;
    cVar6 = pdb_1406edb90(puVar11,param_2 + 4);
    goto code_r0x000140144a86;
  case 0x6c:
    uVar16 = (ulonglong)(uint)param_2[6];
    if (uVar16 == 0) {
      pfVar9[0] = 0.0;
      pfVar9[1] = 0.0;
      *(undefined8 *)(&UNK_142e480c0 + uVar8) = 0;
      return pfVar9;
    }
    lVar20 = *(longlong *)(param_2 + 4);
    auVar61 = ZEXT816(0);
    fVar64 = 0.0;
    fVar57 = 0.0;
    fVar65 = 0.0;
    fVar66 = 0.0;
    do {
      pdb_140144ba0(&uStack_58,lVar20);
      auVar68._0_4_ = fVar64 + auVar61._0_4_;
      auVar68._4_4_ = fVar57 + auVar61._4_4_;
      auVar68._8_4_ = fVar65 + auVar61._8_4_;
      auVar68._12_4_ = fVar66 + auVar61._12_4_;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uStack_58;
      fVar64 = (float)(uStack_58 >> 0x20);
      fVar57 = (float)lStack_50 + (float)uStack_58;
      fVar65 = (float)((ulonglong)lStack_50 >> 0x20) + fVar64;
      auVar41._4_4_ = fVar65;
      auVar41._0_4_ = fVar57;
      auVar40 = minps(auVar40,auVar61);
      uVar24 = -(uint)NAN(auVar61._0_4_);
      uVar25 = -(uint)NAN(auVar61._4_4_);
      auVar67._0_4_ = ~uVar24 & auVar40._0_4_;
      auVar67._4_4_ = ~uVar25 & auVar40._4_4_;
      auVar67._8_4_ = ~-(uint)NAN(auVar61._8_4_) & auVar40._8_4_;
      auVar67._12_4_ = ~-(uint)NAN(auVar61._12_4_) & auVar40._12_4_;
      auVar61._4_4_ = (uint)fVar64 & uVar25;
      auVar61._0_4_ = (uint)(float)uStack_58 & uVar24;
      auVar61._8_8_ = 0;
      auVar61 = auVar67 | auVar61;
      auVar41._8_8_ = 0;
      auVar40 = maxps(auVar41,auVar68);
      fVar64 = (float)(~-(uint)NAN(auVar68._0_4_) & auVar40._0_4_ |
                      (uint)fVar57 & -(uint)NAN(auVar68._0_4_)) - auVar61._0_4_;
      fVar57 = (float)(~-(uint)NAN(auVar68._4_4_) & auVar40._4_4_ |
                      (uint)fVar65 & -(uint)NAN(auVar68._4_4_)) - auVar61._4_4_;
      fVar65 = (float)(~-(uint)NAN(auVar68._8_4_) & auVar40._8_4_) - auVar61._8_4_;
      fVar66 = (float)(~-(uint)NAN(auVar68._12_4_) & auVar40._12_4_) - auVar61._12_4_;
      lVar20 = lVar20 + 0x120;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    *(longlong *)pfVar9 = auVar61._0_8_;
    *(float *)(&UNK_142e480c0 + uVar8) = fVar64;
    *(float *)(&UNK_142e480c4 + uVar8) = fVar57;
    return pfVar9;
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x72:
    *UNRECOVERED_JUMPTABLE_00 = *(code *)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_1401432f2:
  *(byte *)((longlong)pfVar9 + 1) = 0x18;
  *(byte *)pfVar9 = 0x32;
  return pfVar9;
code_r0x0001401430a2:
  auVar61 = in_XMM0 & in_XMM1;
  if (((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) == 0xffff) ||
     (auVar59[0] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47aa0),
     auVar59[1] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47aa1),
     auVar59[2] = -(*(char *)(param_2 + 2) == UNK_142e47aa2),
     auVar59[3] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47aa3),
     auVar59[4] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47aa4),
     auVar59[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47aa5),
     auVar59[6] = -(*(char *)(param_2 + 3) == UNK_142e47aa6),
     auVar59[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47aa7),
     auVar59[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47aa8),
     auVar59[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47aa9),
     auVar59[10] = -(*(char *)(param_2 + 4) == UNK_142e47aaa),
     auVar59[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47aab),
     auVar59[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47aac),
     auVar59[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47aad),
     auVar59[0xe] = -(*(char *)(param_2 + 5) == UNK_142e47aae),
     auVar59[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e47aaf),
     auVar31[0] = -(*(char *)param_2 == UNK_142e47ab0),
     auVar31[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47ab1),
     auVar31[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47ab2),
     auVar31[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47ab3),
     auVar31[4] = -(*(char *)(param_2 + 1) == UNK_142e47ab4),
     auVar31[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47ab5),
     auVar31[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47ab6),
     auVar31[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47ab7),
     auVar31[8] = -(*(char *)(param_2 + 2) == UNK_142e47ab8),
     auVar31[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47ab9),
     auVar31[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47aba),
     auVar31[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47abb),
     auVar31[0xc] = -(*(char *)(param_2 + 3) == UNK_142e47abc),
     auVar31[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47abd),
     auVar31[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47abe),
     auVar31[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47abf),
     auVar31 = auVar31 & auVar59,
     (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff)) {
    *(byte *)((longlong)pfVar9 + 1) = 0x16;
    *(byte *)pfVar9 = 0x32;
    return pfVar9;
  }
  goto LAB_1401432f2;
}

