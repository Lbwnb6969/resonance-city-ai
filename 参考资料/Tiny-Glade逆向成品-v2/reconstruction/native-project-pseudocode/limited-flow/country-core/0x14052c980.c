// VA 0x14052c980, PDB extent 370 bytes
// country_core::resources::ui_settings::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014052da21) overlaps instruction at (ram,0x00014052da1f)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::ui_settings::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
   Extent: 370 */

byte * pdb_14052c980(byte *param_1,byte *param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 auVar6 [11];
  undefined1 auVar7 [12];
  undefined1 auVar8 [13];
  undefined1 auVar9 [14];
  longlong lVar10;
  byte *pbVar11;
  undefined *puVar12;
  ulonglong uVar13;
  undefined2 uVar14;
  byte unaff_BL;
  char in_XMM0_Ba;
  char in_XMM0_Bb;
  char in_XMM0_Bc;
  char in_XMM0_Bd;
  char in_XMM0_Be;
  char extraout_XMM0_Be;
  char in_XMM0_Bf;
  char extraout_XMM0_Bf;
  char in_XMM0_Bg;
  char extraout_XMM0_Bg;
  char in_XMM0_Bh;
  char extraout_XMM0_Bh;
  char in_XMM0_Bi;
  char extraout_XMM0_Bi;
  char in_XMM0_Bj;
  char extraout_XMM0_Bj;
  char in_XMM0_Bk;
  char extraout_XMM0_Bk;
  char in_XMM0_Bl;
  char extraout_XMM0_Bl;
  char in_XMM0_Bm;
  char extraout_XMM0_Bm;
  char in_XMM0_Bn;
  char extraout_XMM0_Bn;
  char in_XMM0_Bo;
  char extraout_XMM0_Bo;
  byte in_XMM0_Bp;
  byte extraout_XMM0_Bp;
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar12 = &UNK_142f64eb8;
  lVar10 = (longlong)*(int *)(&UNK_142f64eb8 + (ulonglong)*param_2 * 4);
  pbVar11 = &UNK_142f64eb8 + lVar10;
  uVar14 = SUB82(param_2,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    pdb_140127ae0(&uStack_58,&UNK_142f64cb6,0x10);
    if ((char)uStack_58 != '2') goto code_r0x00014052cabc;
    pdb_1401276c0(&uStack_58,param_3,&UNK_142f64cc6,6);
    goto joined_r0x00014052ca74;
  case 1:
    pdb_140127ae0(&uStack_58,&UNK_142f64cb6,0x10);
    if ((char)uStack_58 != '2') goto code_r0x00014052cabc;
    pdb_1401276c0(&uStack_58,param_3,&UNK_142f64ccc,4);
    goto joined_r0x00014052ca74;
  case 2:
    pdb_140127ae0(&uStack_58,&UNK_142f64cb6,0x10);
    if ((char)uStack_58 != '2') goto code_r0x00014052cabc;
    pdb_1401276c0(&uStack_58,param_3,&UNK_142f64cd0,5);
    goto joined_r0x00014052ca74;
  case 3:
    pdb_140127ae0(&uStack_58,&UNK_142f64cb6,0x10);
    if ((char)uStack_58 != '2') goto code_r0x00014052cabc;
    pdb_1401276c0(&uStack_58,param_3,&UNK_142f64cd5,3);
joined_r0x00014052ca74:
    if ((char)uStack_58 == '2') {
      *param_1 = 0x32;
      return param_1;
    }
code_r0x00014052cabc:
    *(undefined8 *)(param_1 + 0x40) = uStack_18;
    *(undefined8 *)(param_1 + 0x30) = in_stack_ffffffffffffffd8;
    *(undefined8 *)(param_1 + 0x38) = uStack_20;
    *(ulonglong *)(param_1 + 0x20) =
         CONCAT17(uStack_31,
                  CONCAT16(uStack_32,
                           CONCAT15(uStack_33,
                                    CONCAT14(uStack_34,
                                             CONCAT13(uStack_35,
                                                      CONCAT12(uStack_36,
                                                               CONCAT11(uStack_37,uStack_38)))))));
    *(undefined8 *)(param_1 + 0x28) = uStack_30;
    *(undefined8 **)(param_1 + 0x10) = puStack_48;
    *(ulonglong *)(param_1 + 0x18) =
         CONCAT17(uStack_39,
                  CONCAT16(uStack_3a,
                           CONCAT15(uStack_3b,
                                    CONCAT14(uStack_3c,
                                             CONCAT13(uStack_3d,
                                                      CONCAT12(uStack_3e,
                                                               CONCAT11(uStack_3f,uStack_40)))))));
    *(undefined8 *)param_1 = uStack_58;
    *(ulonglong *)(param_1 + 8) = uStack_50;
    return param_1;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00014052cf81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar11 = (byte *)(*(code *)(&UNK_142f64ec8 + iRam000000064ecf89a8))
                                (&UNK_142f64ec8 + iRam000000064ecf89a8);
    return pbVar11;
  case 5:
    if (pbVar11 == (byte *)0x0) {
      pbVar11 = (byte *)pdb_14054abf0(&uStack_50,&UNK_142f64ea0,2,param_3 + 2);
      if (pbVar11 != (byte *)0x0) {
        return pbVar11;
      }
      if ((char)uStack_50 == '\0') {
        pbVar11 = (byte *)pdb_1405432b0(&uStack_50,&UNK_142f64ea2,3,
                                        (undefined1 *)((longlong)param_3 + 0x14));
        if (pbVar11 != (byte *)0x0) {
          return pbVar11;
        }
        if ((char)uStack_50 == '\0') {
          pbVar11 = (byte *)pdb_1405432b0(&uStack_50,&UNK_142f64ea5,8,param_3 + 3);
          if (pbVar11 == (byte *)0x0) {
            if (((uStack_50 & 1) == 0) && (uStack_50._1_1_ != '\0')) {
              pdb_140172c20(*puStack_48,&UNK_142f64c40,1);
            }
            pdb_140172c20(*(undefined8 *)param_1,&UNK_142f64c40,1);
            return (byte *)0x0;
          }
          return pbVar11;
        }
      }
    }
    pbVar11 = (byte *)pdb_142db8610();
    return pbVar11;
  case 6:
    param_3[2] = (longlong)(&UNK_142f64eb9 + lVar10);
    uStack_50 = pdb_14054e5c0(param_1,param_2,&UNK_142f64dc5,6);
    in_XMM0_Be = extraout_XMM0_Be;
    in_XMM0_Bf = extraout_XMM0_Bf;
    in_XMM0_Bg = extraout_XMM0_Bg;
    in_XMM0_Bh = extraout_XMM0_Bh;
    in_XMM0_Bi = extraout_XMM0_Bi;
    in_XMM0_Bj = extraout_XMM0_Bj;
    in_XMM0_Bk = extraout_XMM0_Bk;
    in_XMM0_Bl = extraout_XMM0_Bl;
    in_XMM0_Bm = extraout_XMM0_Bm;
    in_XMM0_Bn = extraout_XMM0_Bn;
    in_XMM0_Bo = extraout_XMM0_Bo;
    in_XMM0_Bp = extraout_XMM0_Bp;
    goto code_r0x00014052cfdf;
  case 7:
    uStack_50 = CONCAT71((int7)((ulonglong)pbVar11 >> 8),(char)pbVar11 + *pbVar11);
code_r0x00014052cfdf:
    if (uStack_50 == 0) {
      lVar10 = param_3[2];
      if (*param_3 == lVar10) {
        uStack_58 = 1;
        pdb_142d7f1b0(param_3,lVar10,1,1);
        lVar10 = param_3[2];
      }
      *(undefined1 *)(param_3[1] + lVar10) = 0x3a;
      lVar10 = lVar10 + 1;
      param_3[2] = lVar10;
      if (*param_3 == lVar10) {
        uStack_58 = 1;
        pdb_142d7f1b0(param_3,lVar10,1,1);
        lVar10 = param_3[2];
      }
      *(undefined1 *)(param_3[1] + lVar10) = 0x7b;
      lVar10 = lVar10 + 1;
      param_3[2] = lVar10;
      if (*param_3 == lVar10) {
        uStack_58 = 1;
        pdb_142d7f1b0(param_3,lVar10,1,1);
        lVar10 = param_3[2];
      }
      *(undefined1 *)(param_3[1] + lVar10) = 0x7d;
      lVar10 = lVar10 + 1;
      param_3[2] = lVar10;
      if (*param_3 == lVar10) {
        uStack_58 = 1;
        pdb_142d7f1b0(param_3,lVar10,1,1);
        lVar10 = param_3[2];
      }
      *(undefined1 *)(param_3[1] + lVar10) = 0x7d;
      param_3[2] = lVar10 + 1;
      return (byte *)0x0;
    }
    uStack_30 = 0xfffffffffffffffe;
    uStack_58 = 1;
    uVar5 = CONCAT13(in_XMM0_Bh,CONCAT12(in_XMM0_Bg,CONCAT11(in_XMM0_Bf,in_XMM0_Be))) ^
            CONCAT13(in_XMM0_Bh,CONCAT12(in_XMM0_Bg,CONCAT11(in_XMM0_Bf,in_XMM0_Be)));
    uStack_3c = (undefined1)uVar5;
    uStack_3b = (undefined1)(uVar5 >> 8);
    uStack_3a = (undefined1)(uVar5 >> 0x10);
    uStack_39 = (undefined1)(uVar5 >> 0x18);
    uVar5 = CONCAT13(in_XMM0_Bl,CONCAT12(in_XMM0_Bk,CONCAT11(in_XMM0_Bj,in_XMM0_Bi))) ^
            CONCAT13(in_XMM0_Bl,CONCAT12(in_XMM0_Bk,CONCAT11(in_XMM0_Bj,in_XMM0_Bi)));
    uStack_38 = (undefined1)uVar5;
    uStack_37 = (undefined1)(uVar5 >> 8);
    uStack_36 = (undefined1)(uVar5 >> 0x10);
    uStack_35 = (undefined1)(uVar5 >> 0x18);
    uVar5 = CONCAT13(in_XMM0_Bp,CONCAT12(in_XMM0_Bo,CONCAT11(in_XMM0_Bn,in_XMM0_Bm))) ^
            CONCAT13(in_XMM0_Bp,CONCAT12(in_XMM0_Bo,CONCAT11(in_XMM0_Bn,in_XMM0_Bm)));
    uStack_34 = (undefined1)uVar5;
    uStack_33 = (undefined1)(uVar5 >> 8);
    uStack_32 = (undefined1)(uVar5 >> 0x10);
    uStack_31 = (undefined1)(uVar5 >> 0x18);
    uStack_40 = 0;
    uStack_3f = 0;
    uStack_3e = 0;
    uStack_3d = 0;
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0x28,8);
    if (pbVar11 != (byte *)0x0) {
      *(ulonglong *)(pbVar11 + 0x20) =
           CONCAT17(uStack_31,
                    CONCAT16(uStack_32,
                             CONCAT15(uStack_33,
                                      CONCAT14(uStack_34,
                                               CONCAT13(uStack_35,
                                                        CONCAT12(uStack_36,
                                                                 CONCAT11(uStack_37,uStack_38)))))))
      ;
      *(undefined8 **)(pbVar11 + 0x10) = puStack_48;
      *(ulonglong *)(pbVar11 + 0x18) =
           CONCAT17(uStack_39,
                    CONCAT16(uStack_3a,
                             CONCAT15(uStack_3b,
                                      CONCAT14(uStack_3c,
                                               CONCAT13(uStack_3d,
                                                        CONCAT12(uStack_3e,
                                                                 CONCAT11(uStack_3f,uStack_40)))))))
      ;
      *(undefined8 *)pbVar11 = uStack_58;
      *(ulonglong *)(pbVar11 + 8) = uStack_50;
      return pbVar11;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  case 8:
    *(int *)pbVar11 = *(int *)pbVar11 + (int)pbVar11;
    (&UNK_142f64e45)[lVar10] = (&UNK_142f64e45)[lVar10] + -0x48;
                    /* WARNING: Could not recover jumptable at 0x00014052da0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar11 = (byte *)(*(code *)(&UNK_142f64eb8 + *(int *)(&UNK_142f64eb8 + (longlong)param_3 * 4)))
                                (&UNK_142f64eb8,param_2,
                                 &UNK_142f64eb8 + *(int *)(&UNK_142f64eb8 + (longlong)param_3 * 4));
    return pbVar11;
  default:
    auVar16[0] = -(in_XMM1[0] == UNK_142f64bf0);
    auVar16[1] = -(in_XMM1[1] == UNK_142f64bf1);
    auVar16[2] = -(in_XMM1[2] == UNK_142f64bf2);
    auVar16[3] = -(in_XMM1[3] == UNK_142f64bf3);
    auVar16[4] = -(in_XMM1[4] == UNK_142f64bf4);
    auVar16[5] = -(in_XMM1[5] == UNK_142f64bf5);
    auVar16[6] = -(in_XMM1[6] == UNK_142f64bf6);
    auVar16[7] = -(in_XMM1[7] == UNK_142f64bf7);
    auVar16[8] = -(in_XMM1[8] == UNK_142f64bf8);
    auVar16[9] = -(in_XMM1[9] == UNK_142f64bf9);
    auVar16[10] = -(in_XMM1[10] == UNK_142f64bfa);
    auVar16[0xb] = -(in_XMM1[0xb] == UNK_142f64bfb);
    auVar16[0xc] = -(in_XMM1[0xc] == UNK_142f64bfc);
    auVar16[0xd] = -(in_XMM1[0xd] == UNK_142f64bfd);
    auVar16[0xe] = -(in_XMM1[0xe] == UNK_142f64bfe);
    auVar16[0xf] = -(in_XMM1[0xf] == UNK_142f64bff);
    auVar2[1] = -(in_XMM0_Bb == UNK_142f64be1);
    auVar2[0] = -(in_XMM0_Ba == UNK_142f64be0);
    auVar2[2] = -(in_XMM0_Bc == UNK_142f64be2);
    auVar2[3] = -(in_XMM0_Bd == UNK_142f64be3);
    auVar2[4] = -(in_XMM0_Be == UNK_142f64be4);
    auVar2[5] = -(in_XMM0_Bf == UNK_142f64be5);
    auVar2[6] = -(in_XMM0_Bg == UNK_142f64be6);
    auVar2[7] = -(in_XMM0_Bh == UNK_142f64be7);
    auVar2[8] = -(in_XMM0_Bi == UNK_142f64be8);
    auVar2[9] = -(in_XMM0_Bj == UNK_142f64be9);
    auVar2[10] = -(in_XMM0_Bk == UNK_142f64bea);
    auVar2[0xb] = -(in_XMM0_Bl == UNK_142f64beb);
    auVar2[0xc] = -(in_XMM0_Bm == UNK_142f64bec);
    auVar2[0xd] = -(in_XMM0_Bn == UNK_142f64bed);
    auVar2[0xe] = -(in_XMM0_Bo == UNK_142f64bee);
    auVar2[0xf] = -(in_XMM0_Bp == UNK_142f64bef);
    auVar16 = auVar16 & auVar2;
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_142f64eb9)[lVar10] = 6;
      goto code_r0x00014052db6d;
    }
    break;
  case 0xc:
    if (SCARRY8(lVar10,0x142f64eb8)) {
      pbVar11 = (byte *)CONCAT62((int6)((ulonglong)pbVar11 >> 0x10),
                                 CONCAT11((char)((ulonglong)pbVar11 >> 8) + param_1[0xf],
                                          (char)pbVar11));
      auVar3[1] = in_XMM0_Bb;
      auVar3[0] = in_XMM0_Ba;
      auVar3[2] = in_XMM0_Bc;
      auVar3[3] = in_XMM0_Bd;
      auVar3[4] = in_XMM0_Be;
      auVar3[5] = in_XMM0_Bf;
      auVar3[6] = in_XMM0_Bg;
      auVar3[7] = in_XMM0_Bh;
      auVar3[8] = in_XMM0_Bi;
      auVar3[9] = in_XMM0_Bj;
      auVar3[10] = in_XMM0_Bk;
      auVar3[0xb] = in_XMM0_Bl;
      auVar3[0xc] = in_XMM0_Bm;
      auVar3[0xd] = in_XMM0_Bn;
      auVar3[0xe] = in_XMM0_Bo;
      auVar3[0xf] = in_XMM0_Bp;
      auVar4[1] = in_XMM0_Bb;
      auVar4[0] = in_XMM0_Ba;
      auVar4[2] = in_XMM0_Bc;
      auVar4[3] = in_XMM0_Bd;
      auVar4[4] = in_XMM0_Be;
      auVar4[5] = in_XMM0_Bf;
      auVar4[6] = in_XMM0_Bg;
      auVar4[7] = in_XMM0_Bh;
      auVar4[8] = in_XMM0_Bi;
      auVar4[9] = in_XMM0_Bj;
      auVar4[10] = in_XMM0_Bk;
      auVar4[0xb] = in_XMM0_Bl;
      auVar4[0xc] = in_XMM0_Bm;
      auVar4[0xd] = in_XMM0_Bn;
      auVar4[0xe] = in_XMM0_Bo;
      auVar4[0xf] = in_XMM0_Bp;
      auVar9[1] = in_XMM0_Bd;
      auVar9[0] = in_XMM0_Bc;
      auVar9[2] = in_XMM0_Be;
      auVar9[3] = in_XMM0_Bf;
      auVar9[4] = in_XMM0_Bg;
      auVar9[5] = in_XMM0_Bh;
      auVar9[6] = in_XMM0_Bi;
      auVar9[7] = in_XMM0_Bj;
      auVar9[8] = in_XMM0_Bk;
      auVar9[9] = in_XMM0_Bl;
      auVar9[10] = in_XMM0_Bm;
      auVar9[0xb] = in_XMM0_Bn;
      auVar9[0xc] = in_XMM0_Bo;
      auVar9[0xd] = in_XMM0_Bp;
      auVar8[1] = in_XMM0_Be;
      auVar8[0] = in_XMM0_Bd;
      auVar8[2] = in_XMM0_Bf;
      auVar8[3] = in_XMM0_Bg;
      auVar8[4] = in_XMM0_Bh;
      auVar8[5] = in_XMM0_Bi;
      auVar8[6] = in_XMM0_Bj;
      auVar8[7] = in_XMM0_Bk;
      auVar8[8] = in_XMM0_Bl;
      auVar8[9] = in_XMM0_Bm;
      auVar8[10] = in_XMM0_Bn;
      auVar8[0xb] = in_XMM0_Bo;
      auVar8[0xc] = in_XMM0_Bp;
      auVar7[1] = in_XMM0_Bf;
      auVar7[0] = in_XMM0_Be;
      auVar7[2] = in_XMM0_Bg;
      auVar7[3] = in_XMM0_Bh;
      auVar7[4] = in_XMM0_Bi;
      auVar7[5] = in_XMM0_Bj;
      auVar7[6] = in_XMM0_Bk;
      auVar7[7] = in_XMM0_Bl;
      auVar7[8] = in_XMM0_Bm;
      auVar7[9] = in_XMM0_Bn;
      auVar7[10] = in_XMM0_Bo;
      auVar7[0xb] = in_XMM0_Bp;
      auVar6[1] = in_XMM0_Bg;
      auVar6[0] = in_XMM0_Bf;
      auVar6[2] = in_XMM0_Bh;
      auVar6[3] = in_XMM0_Bi;
      auVar6[4] = in_XMM0_Bj;
      auVar6[5] = in_XMM0_Bk;
      auVar6[6] = in_XMM0_Bl;
      auVar6[7] = in_XMM0_Bm;
      auVar6[8] = in_XMM0_Bn;
      auVar6[9] = in_XMM0_Bo;
      auVar6[10] = in_XMM0_Bp;
      if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB141(auVar9 >> 7,0) & 1) << 2 |
                   (ushort)(SUB131(auVar8 >> 7,0) & 1) << 3 |
                   (ushort)(SUB121(auVar7 >> 7,0) & 1) << 4 |
                   (ushort)(SUB111(auVar6 >> 7,0) & 1) << 5 |
                   (ushort)((byte)(CONCAT19(in_XMM0_Bp,
                                            CONCAT18(in_XMM0_Bo,
                                                     CONCAT17(in_XMM0_Bn,
                                                              CONCAT16(in_XMM0_Bm,
                                                                       CONCAT15(in_XMM0_Bl,
                                                                                CONCAT14(in_XMM0_Bk,
                                                                                         CONCAT13(
                                                  in_XMM0_Bj,
                                                  CONCAT12(in_XMM0_Bi,
                                                           CONCAT11(in_XMM0_Bh,in_XMM0_Bg)))))))))
                                  >> 7) & 1) << 6 |
                   (ushort)((byte)(CONCAT18(in_XMM0_Bp,
                                            CONCAT17(in_XMM0_Bo,
                                                     CONCAT16(in_XMM0_Bn,
                                                              CONCAT15(in_XMM0_Bm,
                                                                       CONCAT14(in_XMM0_Bl,
                                                                                CONCAT13(in_XMM0_Bk,
                                                                                         CONCAT12(
                                                  in_XMM0_Bj,CONCAT11(in_XMM0_Bi,in_XMM0_Bh))))))))
                                  >> 7) & 1) << 7 |
                   (ushort)((byte)(CONCAT17(in_XMM0_Bp,
                                            CONCAT16(in_XMM0_Bo,
                                                     CONCAT15(in_XMM0_Bn,
                                                              CONCAT14(in_XMM0_Bm,
                                                                       CONCAT13(in_XMM0_Bl,
                                                                                CONCAT12(in_XMM0_Bk,
                                                                                         CONCAT11(
                                                  in_XMM0_Bj,in_XMM0_Bi))))))) >> 7) & 1) << 8 |
                   (ushort)((byte)(CONCAT17(in_XMM0_Bp,
                                            CONCAT16(in_XMM0_Bo,
                                                     CONCAT15(in_XMM0_Bn,
                                                              CONCAT14(in_XMM0_Bm,
                                                                       CONCAT13(in_XMM0_Bl,
                                                                                CONCAT12(in_XMM0_Bk,
                                                                                         CONCAT11(
                                                  in_XMM0_Bj,in_XMM0_Bi))))))) >> 0xf) & 1) << 9 |
                   (ushort)((byte)(CONCAT15(in_XMM0_Bp,
                                            CONCAT14(in_XMM0_Bo,
                                                     CONCAT13(in_XMM0_Bn,
                                                              CONCAT12(in_XMM0_Bm,
                                                                       CONCAT11(in_XMM0_Bl,
                                                                                in_XMM0_Bk))))) >> 7
                                  ) & 1) << 10 |
                   (ushort)((byte)(CONCAT14(in_XMM0_Bp,
                                            CONCAT13(in_XMM0_Bo,
                                                     CONCAT12(in_XMM0_Bn,
                                                              CONCAT11(in_XMM0_Bm,in_XMM0_Bl)))) >>
                                  7) & 1) << 0xb |
                   (ushort)((byte)(CONCAT13(in_XMM0_Bp,
                                            CONCAT12(in_XMM0_Bo,CONCAT11(in_XMM0_Bn,in_XMM0_Bm))) >>
                                  7) & 1) << 0xc |
                   (ushort)((byte)(CONCAT12(in_XMM0_Bp,CONCAT11(in_XMM0_Bo,in_XMM0_Bn)) >> 7) & 1)
                   << 0xd | (ushort)((byte)(CONCAT11(in_XMM0_Bp,in_XMM0_Bo) >> 7) & 1) << 0xe |
                  (ushort)(in_XMM0_Bp >> 7) << 0xf) == 0xffff) {
        pbVar11[1] = 3;
        *pbVar11 = 0x32;
        return pbVar11;
      }
      break;
    }
    (&UNK_142f64e3b)[lVar10] = (&UNK_142f64e3b)[lVar10] | 0xb8;
    while (uVar13 = 0, puVar12 != (undefined *)0x0) {
      puVar12 = puVar12 + -1;
      out(*(undefined4 *)param_1,uVar14);
      param_1 = param_1 + 4;
    }
    goto code_r0x00014052da27;
  case 0xd:
    uVar1 = in(uVar14);
    *(undefined1 *)param_3 = uVar1;
    out(*(undefined4 *)param_1,uVar14);
    uVar13 = *(ulonglong *)(longlong)(int)param_2 ^ 0x142f64eb8;
    param_2 = (byte *)((ulonglong)param_2[8] ^ 0x6f);
code_r0x00014052da27:
    if (param_2 == (byte *)0x0 && uVar13 == 0) {
      (&UNK_142f64eb9)[lVar10] = 4;
      *pbVar11 = 0x32;
      return pbVar11;
    }
    break;
  case 0x10:
    if ((*(ulonglong *)(param_2 + 5) ^ 0x726f737275635f6d | 0x142f64eb8) == 0) {
      (&UNK_142f64eb9)[lVar10] = 5;
      *pbVar11 = 0x32;
      return pbVar11;
    }
    break;
  case 0x11:
    auVar15[1] = in_XMM0_Bb;
    auVar15[0] = in_XMM0_Ba;
    auVar15[2] = in_XMM0_Bc;
    auVar15[3] = in_XMM0_Bd;
    auVar15[4] = in_XMM0_Be;
    auVar15[5] = in_XMM0_Bf;
    auVar15[6] = in_XMM0_Bg;
    auVar15[7] = in_XMM0_Bh;
    auVar15[8] = in_XMM0_Bi;
    auVar15[9] = in_XMM0_Bj;
    auVar15[10] = in_XMM0_Bk;
    auVar15[0xb] = in_XMM0_Bl;
    auVar15[0xc] = in_XMM0_Bm;
    auVar15[0xd] = in_XMM0_Bn;
    auVar15[0xe] = in_XMM0_Bo;
    auVar15[0xf] = in_XMM0_Bp;
    auVar15 = in_XMM1 & auVar15;
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_142f64eb9)[lVar10] = 2;
      *pbVar11 = 0x32;
      return pbVar11;
    }
    break;
  case 0x12:
    if ((*(ulonglong *)(param_2 + 6) ^ 0x746c756d5f657a69 | 0x142f64eb8) == 0) {
      (&UNK_142f64eb9)[lVar10] = 0;
      *pbVar11 = 0x32;
      return pbVar11;
    }
    break;
  case 0x13:
    param_1[-0x3d] = param_1[-0x3d] ^ unaff_BL;
    if (*(short *)(param_2 + 4) == 0x6d6f && *(int *)param_2 == 0x74746f42) {
      _UNK_142f64eb8 = 0x32;
      return &UNK_142f64eb8;
    }
    uStack_58 = 4;
    pdb_142db7e70(&UNK_142f64eb8,param_2,param_3,&UNK_142f64cd8);
    return &UNK_142f64eb8;
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
                    /* WARNING: Could not emulate address calculation at 0x00014052db9a */
                    /* WARNING: Treating indirect jump as call */
    pbVar11 = (byte *)(*(code *)(&UNK_142f64f04 + *(int *)(&UNK_142f64f04 + (longlong)pbVar11 * 4)))
                                ();
    return pbVar11;
  case 0x16:
code_r0x00014052db6d:
    *pbVar11 = 0x32;
    return pbVar11;
  }
  pbVar11[1] = 7;
  *pbVar11 = 0x32;
  return pbVar11;
}

