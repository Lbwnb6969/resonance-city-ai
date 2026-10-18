// VA 0x141b6d620, PDB extent 722 bytes
// country_core::systems::mode_manager::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141b6f9b3) overlaps instruction at (ram,0x000141b6f9b2)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000141b6e8ed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 722 */

float * pdb_141b6d620(float *param_1,float *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  byte bVar7;
  char unaff_00084f00;
  undefined1 *unaff_0008ae00;
  undefined3 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar12;
  uint uVar13;
  byte bVar21;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  float *extraout_RAX;
  float *extraout_RAX_00;
  int *piVar19;
  undefined7 uVar22;
  float *pfVar20;
  float *pfVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  undefined2 uVar26;
  float *pfVar27;
  float *pfVar28;
  float *unaff_RBX;
  float **ppfVar29;
  float **ppfVar30;
  float **ppfVar31;
  float **ppfVar32;
  float **ppfVar33;
  float **ppfVar34;
  float **ppfVar37;
  float **ppfVar38;
  float **ppfVar39;
  float **ppfVar40;
  float **ppfVar41;
  float **ppfVar42;
  float **ppfVar43;
  float **ppfVar44;
  float **ppfVar45;
  float **ppfVar46;
  float **ppfVar47;
  float *unaff_RBP;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar48;
  int iVar49;
  undefined1 (*UNRECOVERED_JUMPTABLE_00) [16];
  byte *pbVar50;
  undefined *in_R10;
  undefined1 (*in_R11) [16];
  longlong unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  undefined8 *unaff_R15;
  bool bVar51;
  bool bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar58 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 in_XMM1_Qa;
  undefined4 uVar59;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined1 unaff_XMM11 [16];
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  ulonglong auStack_a8 [3];
  longlong lStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  float *pfStack_60;
  float *pfStack_58;
  undefined *puStack_50;
  float *pfStack_48;
  ulonglong *puStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  float *pfStack_28;
  float *pfStack_20;
  float fVar11;
  char *pcVar18;
  float **ppfVar35;
  ulonglong *puVar36;
  
  uVar59 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  fVar55 = (float)in_XMM1_Qa;
  fVar53 = unaff_XMM11._0_4_;
  ppfVar30 = &pfStack_58;
  ppfVar31 = &pfStack_58;
  ppfVar33 = &pfStack_58;
  ppfVar34 = &pfStack_58;
  ppfVar35 = &pfStack_58;
  ppfVar38 = &pfStack_58;
  ppfVar39 = &pfStack_58;
  ppfVar40 = &pfStack_58;
  ppfVar41 = &pfStack_58;
  ppfVar45 = &pfStack_58;
  ppfVar42 = &pfStack_58;
  ppfVar46 = &pfStack_58;
  ppfVar47 = &pfStack_58;
  ppfVar29 = &pfStack_58;
  ppfVar37 = &pfStack_58;
  ppfVar43 = &pfStack_58;
  ppfVar32 = &pfStack_58;
  ppfVar44 = &pfStack_58;
  if (*(ulonglong *)(param_2 + 10) < *(ulonglong *)(param_2 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = *(undefined1 (**) [16])(param_2 + 6);
    puVar48 = (undefined *)0x100002600;
    uVar16 = *(ulonglong *)(param_2 + 10);
LAB_141b6d64b:
    uVar15 = uVar16 + 1;
    pbVar50 = (byte *)(ulonglong)(byte)(*UNRECOVERED_JUMPTABLE_00)[uVar16];
    pfVar20 = unaff_RBP;
    pfStack_20 = param_1;
    if (pbVar50 < (byte *)0x23) {
      if ((0x100002600U >> ((ulonglong)pbVar50 & 0x3f) & 1) != 0) goto code_r0x000141b6d65d;
      if (pbVar50 != (byte *)0x22) goto LAB_141b6d6bf;
      pfStack_60 = (float *)0x141b6d69f;
      pfVar27 = param_2;
      auVar56._0_8_ = pdb_141657680(&uStack_30);
      auVar56._8_8_ = extraout_XMM0_Qb;
      fVar54 = (float)auVar56._0_8_;
      pfVar23 = (float *)&UNK_143398200;
      uVar16 = (ulonglong)*(int *)(&UNK_143398200 + ((ulonglong)uStack_30 & 0xff) * 4);
      bVar51 = 0xfffffffebcc67dff < uVar16;
      pfVar17 = (float *)(&UNK_143398200 + uVar16);
      bVar52 = pfVar17 == (float *)0x0;
      bVar9 = (byte)pfVar17;
      fVar11 = SUB84(pfVar17,0);
      uVar26 = SUB82(pfVar27,0);
      pfVar28 = pfVar23;
      ppfVar29 = &pfStack_58;
      ppfVar43 = &pfStack_58;
      ppfVar39 = &pfStack_58;
      ppfVar44 = &pfStack_58;
      ppfVar32 = &pfStack_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((ulonglong)uStack_30 & 0xff) {
      case 0:
        *param_1 = 0.0;
        return param_1;
      case 1:
      case 2:
      case 6:
        puVar48 = &UNK_143323630;
        goto code_r0x000141b6d8a5;
      case 3:
        *param_1 = 4.2039e-45;
        return param_1;
      case 4:
      case 5:
        puVar48 = &UNK_143323610;
code_r0x000141b6d8a5:
        uStack_30 = (float *)CONCAT71(uStack_30._1_7_,0xd);
        pfStack_60 = (float *)0x141b6d8b6;
        pfStack_28 = (float *)pdb_142db90e0(&uStack_30,puVar48,&UNK_143322608);
        goto LAB_141b6d8b6;
      case 7:
        goto LAB_141b6d8b6;
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 9:
        *(int *)(&UNK_143398185 + uVar16) = *(int *)(&UNK_143398185 + uVar16) + -1;
        fRam0000000100002600._0_2_ =
             CONCAT11(fRam0000000100002600._1_1_ >> 4 | fRam0000000100002600._1_1_ << 4,
                      fRam0000000100002600._0_1_);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xb:
        bVar51 = fVar11 == 0.0;
        param_2 = unaff_RBX;
        goto code_r0x000141b6d708;
      case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xe:
        uVar16 = (ulonglong)((int)fVar11 + 1);
        param_2 = pfVar23;
        goto code_r0x000141b6d7c6;
      case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x10:
        pfStack_60 = (float *)0x141b6d96b;
        uVar16 = pdb_142d84ef0(pfVar27,(ulonglong)&uStack_38 & 0xffffffff);
        *(ulonglong *)(param_1 + 2) = uVar16;
        *(byte *)param_1 = 1;
        return param_1;
      case 0x11:
        (&UNK_14339818d)[uVar16] = (&UNK_14339818d)[uVar16];
        ppfVar29 = &pfStack_60;
        pfStack_60 = (float *)&pfStack_58;
        goto code_r0x000141b6da58;
      case 0x12:
        unaff_RBX = pfVar23;
        _UNK_143398228 = fVar11;
        goto code_r0x000141b6da36;
      case 0x13:
        unaff_RBX = (float *)CONCAT71(0x1433982,UNK_1433981ff);
        *(undefined4 *)(&UNK_1433981ff + uVar16) = *(undefined4 *)(&UNK_1433981ff + uVar16);
        goto code_r0x000141b6da44;
      case 0x14:
        bVar51 = false;
        unaff_RBX = pfVar23;
        goto code_r0x000141b6da34;
      case 0x15:
        goto code_r0x000141b6da58;
      case 0x16:
        param_1[2] = fVar11;
        goto code_r0x000141b6da5d;
      case 0x17:
        UNK_143398183 = UNK_143398183 >> 1 | UNK_143398183 << 7;
        *(int *)((longlong)unaff_RBP + -0x26) = *(int *)((longlong)unaff_RBP + -0x26) + (int)param_1
        ;
        goto code_r0x000141b6da4a;
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
        goto code_r0x000141b6d987;
      case 0x1f:
        uVar16 = (ulonglong)*(uint *)(&UNK_143398200 + (longlong)pfVar17 * 4);
        goto code_r0x000141b6d997;
      case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x21:
      case 0x22:
      case 0x24:
        goto code_r0x000141b6e892;
      case 0x23:
        out(*param_1,uVar26);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x25:
        (&UNK_143398201)[uVar16] = 0xd;
        bVar9 = 0;
        goto LAB_141b6e80b;
      case 0x26:
        uVar16 = (ulonglong)uRam00000006501f8a00;
        goto code_r0x000141b6e841;
      case 0x27:
        goto code_r0x000141b6e818;
      case 0x28:
        pfVar28 = pfVar27;
        ppfVar32 = (float **)(unaff_RBP + 2);
        param_1 = pfVar17;
        if (UNK_143398209 == '\0') {
          (&UNK_143398201)[uVar16] = 5;
          uStack_30 = pfVar17;
          goto code_r0x000141b6e908;
        }
        goto code_r0x000141b6e92b;
      case 0x29:
        goto code_r0x000141b6e8f8;
      case 0x2a:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
        return pfVar20;
      case 0x2b:
        goto code_r0x000141b6e92b;
      case 0x2c:
        cRam000000024339a7b6 = cRam000000024339a7b6 + (bVar9 | UNWIND_INFO_143a5c3ec._5_1_);
        UNRECOVERED_JUMPTABLE = (code *)swi(1);
        pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
        return pfVar20;
      case 0x2d:
        goto code_r0x000141b6e916;
      case 0x2e:
        uVar4 = in(uVar26);
        uVar5 = in(uVar26);
        fRam0000000100002600._0_2_ = CONCAT11(uVar5,uVar4);
        out(*param_1,uVar26);
        ppfVar44 = &pfStack_58;
        if ((POPCOUNT((ulonglong)pfVar17 & 0xff) & 1U) != 0) {
          pfVar28 = pfVar27;
          ppfVar40 = &pfStack_58;
          if (*(undefined **)pfVar27 == &UNK_143398200) {
            (&UNK_143398201)[uVar16] = 3;
            uStack_30 = pfVar17;
            goto code_r0x000141b6ea0e;
          }
          goto LAB_141b6ea18;
        }
        goto code_r0x000141b6ea25;
      default:
        if (!bVar51) {
          return pfVar17;
        }
        goto joined_r0x000141b6eb11;
      case 0x30:
        goto code_r0x000141b6ea25;
      case 0x33:
        goto code_r0x000141b6e9dc;
      case 0x34:
        out(*(byte *)param_1,uVar26);
        if (*(undefined **)pfVar27 != &UNK_143398200) goto LAB_141b6ebc7;
        (&UNK_143398201)[uVar16] = 2;
        uStack_30 = pfVar17;
        goto code_r0x000141b6eaac;
      case 0x35:
        ppfVar34 = (float **)&lStack_68;
        pfVar23 = (float *)(ulonglong)(_UNK_143398209 + 0x43398200);
        uStack_30 = pfVar17;
        pfVar28 = pfVar27;
        goto code_r0x000141b6eacd;
      case 0x36:
        if (bVar51) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar51 = false;
        goto code_r0x000141b6e9fc;
      case 0x37:
        goto code_r0x000141b6ea44;
      case 0x39:
        goto code_r0x000141b6ea6f;
      case 0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x41:
        goto code_r0x000141b6eaf8;
      case 0x42:
        return pfVar17;
      case 0x43:
        *(undefined8 *)((ulonglong)_UNK_143398263 - 8) = 0xf0a3348;
        (&UNK_143398183)[uVar16] = (&UNK_143398183)[uVar16];
        uStack_30 = pfVar17;
        if ((CONCAT62((int6)((ulonglong)pfVar27 >> 0x10),CONCAT11(0x52,(char)pfVar27)) | 0x143398200
            ) != 0) goto LAB_141b6ebc7;
        goto code_r0x000141b6eb6f;
      case 0x44:
        out(*param_1,uVar26);
        if (!bVar51) {
          *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
          goto LAB_141b6ebc7;
        }
        if (*(short *)(pfVar27 + 2) != 0x7465 || *pfVar27 != 1.7825662e+19) goto LAB_141b6ebc7;
        goto code_r0x000141b6eb95;
      case 0x45:
joined_r0x000141b6eb11:
        if (bVar52) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar51 = ((uint)pfVar27 | 0x43398200) == 0;
        goto code_r0x000141b6eb16;
      case 0x46:
        goto LAB_141b6ebc7;
      case 0x47:
        goto code_r0x000141b6ec11;
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4e:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
        return pfVar20;
      case 0x4b:
        pbVar50 = (byte *)((longlong)unaff_RBP + -0x47befeb2);
        bVar2 = *pbVar50;
        bVar21 = (byte)((ulonglong)pfVar17 >> 8);
        bVar7 = *pbVar50 - bVar21;
        *pbVar50 = bVar7 - bVar51;
        *pfVar17 = (float)(((int)*pfVar17 - (int)fVar11) - (uint)(bVar2 < bVar21 || bVar7 < bVar51))
        ;
        *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
        goto pdb_140f679a0;
      case 0x4c:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
        return pfVar20;
      case 0x4d:
        pfVar23 = pfVar27;
        goto pdb_140f679a0;
      case 0x4f:
        pfStack_60 = (float *)&UNK_141b6ef5b;
        pfVar20 = (float *)func_0x0001912a40cb();
        goto code_r0x000141b6ef5b;
      case 0x50:
        goto code_r0x000141b6f02a;
      case 0x51:
      case 0x54:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
        goto code_r0x000141b6f002;
      case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x53:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
        return pfVar20;
      case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x5d:
        pfVar28 = pfVar27;
        goto code_r0x000141b6efd5;
      case 0x5e:
      case 0x5f:
        goto code_r0x0001406abac0;
      case 0x60:
        pfStack_28 = (float *)(ulonglong)((uint)pfVar27 << 5);
        ppfVar37 = &pfStack_58;
        goto code_r0x000141b6efef;
      case 0x61:
      case 0x62:
      case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 100:
        goto code_r0x000141b6f6cb;
      case 0x65:
        UNK_1433981b8 = UNK_1433981b8 + bVar9;
        *pfVar17 = (float)((int)*pfVar17 + (int)fVar11);
        *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
        goto code_r0x000141b6f725;
      case 0x66:
        param_1[4] = 1.36318e-41;
        goto code_r0x000141b6f6fb;
      case 0x67:
        if (!bVar52 && -0x143398201 < (longlong)uVar16) goto code_r0x000141b6f71c;
        goto code_r0x000141b6f72c;
      case 0x68:
        if (!bVar52) goto code_r0x000141b6f6fb;
        goto code_r0x000141b6f78f;
      case 0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x6a:
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
        return pfVar20;
      case 0x6b:
        *(byte *)((longlong)unaff_RBP + 0xf) = *(byte *)((longlong)unaff_RBP + 0xf) + bVar9;
        goto code_r0x000141b6f965;
      case 0x6c:
        goto code_r0x000141b6f8b3;
      case 0x6d:
        goto code_r0x000141b6f8fd;
      case 0x6e:
        goto code_r0x000141b6f85d;
      case 0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x70:
        *pfVar17 = (float)((int)*pfVar17 + (int)fVar11);
        *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
        goto code_r0x000141b6f79e;
      case 0x71:
      case 0x75:
        pfStack_60 = (float *)&UNK_141b6f9c6;
        auVar56._0_8_ =
             pub_142e32980(&UNK_143398200,
                           ((unaff_XMM10_Da + unaff_XMM13_Da) - unaff_XMM15_Da) - unaff_XMM14_Da);
        auVar56._8_8_ = extraout_XMM0_Qb_02;
        ppfVar44 = &pfStack_58;
        goto code_r0x000141b6f9c6;
      case 0x72:
        pfStack_28 = (float *)CONCAT44(pfStack_28._4_4_,(int)pfStack_28 + -0x2600);
        pfVar28 = pfVar27;
        goto code_r0x000141b6f83a;
      case 0x73:
        *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
        goto code_r0x000141b6f79e;
      case 0x74:
        pfVar28 = pfVar27;
        ppfVar45 = &pfStack_58;
        goto code_r0x000141b6f83f;
      }
    }
LAB_141b6d6bf:
    if ((*UNRECOVERED_JUMPTABLE_00)[uVar16] != 0x7b) {
      uStack_30 = (float *)0xa;
      goto LAB_141b6d67a;
    }
    pfVar23 = param_2 + 0x12;
    *(byte *)pfVar23 = *(byte *)pfVar23 - 1;
    if (*(byte *)pfVar23 == 0) {
      uStack_30 = (float *)0x18;
      goto LAB_141b6d67a;
    }
    *(ulonglong *)(param_2 + 10) = uVar15;
    pfStack_60 = (float *)0x141b6d6e3;
    auVar56._0_8_ = pdb_141653790(&uStack_30);
    unaff_RBX = pfStack_28;
    auVar56._8_8_ = extraout_XMM0_Qb_00;
    pfVar23 = (float *)&UNK_143398220;
    uVar16 = (ulonglong)*(int *)(&UNK_143398220 + ((ulonglong)uStack_30 & 0xff) * 4);
    pfVar17 = (float *)(&UNK_143398220 + uVar16);
    bVar51 = pfVar17 == (float *)0x0;
    bVar9 = (byte)pfVar17;
    fVar11 = SUB84(pfVar17,0);
    iVar49 = (int)UNRECOVERED_JUMPTABLE_00;
    pfVar28 = pfStack_28;
    pfVar27 = pfStack_28;
    ppfVar45 = &pfStack_58;
    ppfVar40 = &pfStack_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulonglong)uStack_30 & 0xff) {
    case 0:
      pfStack_60 = (float *)0x141b6d705;
      pfVar17 = (float *)pdb_141654940(pfStack_28);
      bVar51 = pfVar17 == (float *)0x0;
code_r0x000141b6d708:
      pfStack_28 = pfVar17;
      if (!bVar51) {
code_r0x000141b6d73a:
        *(float **)(param_1 + 2) = pfStack_28;
        *param_1 = 9.80909e-45;
        *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) + 1;
        return param_1;
      }
      fVar55 = 0.0;
      goto code_r0x000141b6d86b;
    case 1:
      pfStack_60 = (float *)0x141b6d754;
      uVar16 = pdb_14165b3b0(pfStack_28);
      fVar55 = 1.4013e-45;
      if ((uVar16 & 1) != 0) {
        fVar55 = 9.80909e-45;
      }
      goto code_r0x000141b6d776;
    case 2:
      pfStack_60 = (float *)0x141b6d76d;
      uVar12 = pdb_14165b3b0(pfStack_28);
      fVar55 = (float)((uVar12 & 1) * 5 + 2);
code_r0x000141b6d776:
      *(float **)(param_1 + 2) = pfStack_28;
code_r0x000141b6d77a:
      *param_1 = fVar55;
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) + 1;
      if (fVar55 == 9.80909e-45) {
        return param_1;
      }
code_r0x000141b6d78b:
      uVar15 = *(ulonglong *)(param_2 + 8);
      uVar16 = *(ulonglong *)(param_2 + 10);
      if (uVar16 < uVar15) goto code_r0x000141b6d79c;
      goto code_r0x000141b6d884;
    case 3:
      pfStack_60 = (float *)0x141b6d72e;
      pfStack_28 = (float *)pdb_141654940(pfStack_28);
      if (pfStack_28 != (float *)0x0) goto code_r0x000141b6d73a;
      fVar55 = 4.2039e-45;
code_r0x000141b6d86b:
      *param_1 = fVar55;
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) + 1;
      uVar15 = *(ulonglong *)(param_2 + 8);
      uVar16 = *(ulonglong *)(param_2 + 10);
      if (uVar15 <= uVar16) goto code_r0x000141b6d884;
code_r0x000141b6d79c:
      UNRECOVERED_JUMPTABLE_00 = *(undefined1 (**) [16])(param_2 + 6);
      uVar16 = uVar16 + 1;
      pfVar27 = (float *)-uVar15;
      goto code_r0x000141b6d7a6;
    case 4:
      pfStack_60 = (float *)0x141b6d81d;
      pdb_141654a60(param_1,pfStack_28,&UNK_143397e50,1);
      goto code_r0x000141b6d834;
    case 5:
      pfStack_60 = (float *)0x141b6d834;
      pdb_141655660(param_1,pfStack_28,&UNK_143397e50,1);
code_r0x000141b6d834:
      fVar55 = *param_1;
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) + 1;
      if (fVar55 == 9.80909e-45) {
        return param_1;
      }
      goto code_r0x000141b6d78b;
    case 6:
      pfStack_60 = (float *)0x141b6d7ee;
      pdb_14164eb50(&uStack_30);
      if ((int)uStack_30 == 1) {
        *(float **)(param_1 + 2) = pfStack_28;
        fVar55 = 9.80909e-45;
      }
      else {
        param_1[1] = uStack_30._4_4_;
        fVar55 = 8.40779e-45;
      }
      goto code_r0x000141b6d77a;
    case 7:
      goto code_r0x000141b6d73a;
    case 8:
      (&UNK_1433981ad)[uVar16] = (&UNK_1433981ad)[uVar16] + -0x20;
      pfStack_60 = (float *)0x141b6d987;
      pdb_141657790();
code_r0x000141b6d987:
      pfVar23 = (float *)&UNK_143398240;
      uVar16 = (ulonglong)*(int *)(&UNK_143398240 + (uStack_38 & 0xff) * 4);
code_r0x000141b6d997:
                    /* WARNING: Could not recover jumptable at 0x000141b6d99a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar20 = (float *)(*(code *)(uVar16 + (longlong)pfVar23))();
      return pfVar20;
    case 9:
      param_2[unaff_R13 * 2] = (float)((int)param_2[unaff_R13 * 2] + iVar49);
    case 0xd:
      *pfStack_28 = (float)((int)*pfStack_28 + iVar49);
      goto code_r0x000141b6daa2;
    case 10:
      pfVar17 = (float *)((ulonglong)pfVar17 & 0xffffffffffffff82);
      if ((POPCOUNT(bVar9 & 0x82) & 1U) != 0) {
        *(byte *)((longlong)param_1 + 1) = 3;
        goto code_r0x000141b6daa2;
      }
      *(int *)((longlong)pfVar17 + -0x77) = *(int *)((longlong)pfVar17 + -0x77) + 0x43398220;
      *(byte *)((longlong)pfVar17 + 0x413feb01) =
           *(byte *)((longlong)pfVar17 + 0x413feb01) | (byte)unaff_R14;
      goto code_r0x000141b6da65;
    case 0xb:
      goto code_r0x000141b6da5d;
    case 0xc:
      *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
      goto code_r0x000141b6da58;
    case 0xe:
      *param_2 = (float)((int)*param_2 + iVar49);
      goto code_r0x000141b6daa2;
    case 0xf:
      goto code_r0x000141b6da63;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      if ((POPCOUNT((ulonglong)pfVar17 & 0xff) & 1U) == 0) {
        *pfVar17 = (float)((int)*pfVar17 + (int)fVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pfStack_28[10] = fVar11;
    case 0x17:
      goto code_r0x000141b6d9b4;
    case 0x18:
      param_1[2] = 185.5083;
      bVar9 = 1;
LAB_141b6e80b:
      *(byte *)pfVar17 = bVar9;
    case 0x1d:
code_r0x000141b6e818:
      return pfVar17;
    case 0x19:
    case 0x1a:
    case 0x1c:
      bVar51 = CONCAT13(UNK_14339822c,_UNK_143398229) == -0x43398220;
      ppfVar30 = (float **)(unaff_RBP + 2);
      uStack_30 = pfVar17;
      goto code_r0x000141b6e8b6;
    case 0x1b:
      UNK_1433981a3 = UNK_1433981a3 | 0x20;
      UNRECOVERED_JUMPTABLE = (code *)swi(1);
      pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
      return pfVar20;
    case 0x1e:
      goto code_r0x000141b6e85e;
    case 0x1f:
      goto code_r0x000141b6e83d;
    case 0x20:
      goto code_r0x000141b6e8f6;
    case 0x21:
      _UNK_1433981d9 = _UNK_1433981d9 + (int)fVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x22:
      goto code_r0x000141b6e971;
    case 0x23:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
      return pfVar20;
    case 0x24:
      if (*pfStack_28 == 1.1430647e+27) {
        (&UNK_143398221)[uVar16] = 1;
        uStack_30 = pfVar17;
        goto code_r0x000141b6ea0e;
      }
      if (*pfStack_28 == 4.61621e+24) {
        (&UNK_143398221)[uVar16] = 2;
        uStack_30 = pfVar17;
        goto code_r0x000141b6ea0e;
      }
      uStack_30 = pfVar17;
      ppfVar40 = &pfStack_58;
      if (*pfStack_28 != 6.772068e+22) goto LAB_141b6ea18;
      goto code_r0x000141b6e9b0;
    case 0x25:
      goto code_r0x000141b6e936;
    case 0x26:
      out(*(byte *)param_1,(short)pfStack_28);
code_r0x000141b6e9dc:
      pfVar28 = pfVar27;
      uStack_30 = pfVar17;
      uVar12 = (uint)pfVar23;
      iVar49 = (int)pbVar50;
      *(byte *)uStack_30 = *(byte *)uStack_30 + (char)uStack_30;
      goto code_r0x000141b6e9de;
    default:
      uVar16 = *(ulonglong *)pfStack_28 ^ 0x143398220;
      UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x65686361635f6e6f;
      goto code_r0x000141b6eb43;
    case 0x28:
      return pfVar17;
    case 0x2b:
code_r0x000141b6e9fc:
      pfVar28 = pfVar27;
      ppfVar40 = &pfStack_58;
      if (bVar51) {
        *(byte *)((longlong)pfVar17 + 1) = 4;
        uStack_30 = pfVar17;
        goto code_r0x000141b6ea0e;
      }
      goto LAB_141b6ea18;
    case 0x2c:
      if ((*(ulonglong *)((longlong)pfStack_28 + 3) ^ 0x65686361635f6863 | 0x143398220) != 0)
      goto LAB_141b6ebc7;
      pfVar23 = (float *)&UNK_143398201;
      (&UNK_143398221)[uVar16] = 1;
      goto code_r0x000141b6eacd;
    case 0x2d:
      if (bVar51) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(byte *)(pfStack_28 + 1) == 0x68 && *pfStack_28 == 185.5083) {
        (&UNK_143398221)[uVar16] = 1;
code_r0x000141b6eaf8:
        *(byte *)pfVar17 = 0;
        return pfVar17;
      }
      goto LAB_141b6ebc7;
    case 0x2e:
      goto LAB_141b6ea18;
    case 0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x31:
      goto code_r0x000141b6ea8d;
    case 0x38:
      goto code_r0x000141b6eb06;
    case 0x39:
      fRam0000000100002600 = fVar11;
      *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
      cRam0000000144820a24 = cRam0000000144820a24 + (char)((ulonglong)pfStack_28 >> 8);
      uStack_30 = pfVar17;
      goto code_r0x000141b6eb21;
    case 0x3a:
      uStack_30 = (float *)(ulonglong)((int)fVar11 + 0x1419269);
      auVar3._4_4_ = uVar59;
      auVar3._0_4_ = fVar55;
      auVar3._8_4_ = in_XMM1_Dc;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar56 = auVar56 & auVar3;
      goto code_r0x000141b6ebbb;
    case 0x3b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3c:
      *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
code_r0x000141b6eb95:
      *(byte *)((longlong)pfVar17 + 1) = 5;
      *(byte *)pfVar17 = 0;
      return pfVar17;
    case 0x3d:
      uVar16 = CONCAT71(0x1433982,UNK_1433981d8 | 0x20);
      *(undefined8 *)((ulonglong)*(uint *)(uVar16 + 99) - 8) = 0xffffffffc8814965;
      pfVar17 = (float *)((ulonglong)pfVar17 | 6);
      *(byte *)pfVar17 = *(byte *)pfVar17 + (char)pfVar17;
code_r0x000141b6eb43:
      if (UNRECOVERED_JUMPTABLE_00 == *(undefined1 (**) [16])((longlong)pfStack_28 + 6) &&
          uVar16 == 0) {
        *(byte *)((longlong)pfVar17 + 1) = 2;
        *(byte *)pfVar17 = 0;
        return pfVar17;
      }
      goto LAB_141b6ebc7;
    case 0x3e:
      goto code_r0x000141b6ebe7;
    case 0x3f:
      pfVar17 = (float *)((ulonglong)pfVar17 & 0xffffffffffffff28);
      goto code_r0x000141b6ec11;
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x46:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
      return pfVar20;
    case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x44:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
      return pfVar20;
    case 0x45:
      pfVar23 = pfStack_28;
      goto pdb_140f679a0;
    case 0x47:
      UNK_1433981ab = (UNK_1433981ab + -0x20) - (0xfffffffebcc67ddf < uVar16);
      (&UNK_1433981a9)[uVar16] = (&UNK_1433981a9)[uVar16] & 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x48:
      goto code_r0x000141b6f04a;
    case 0x49:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
      goto code_r0x000141b6f022;
    case 0x4a:
      *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
      *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
      pfStack_48 = pfStack_28;
      goto code_r0x000141b6efd5;
    case 0x4b:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
      return pfVar20;
    case 0x4d:
      out(0x4d,bVar9);
      pfVar28 = (float *)0x43398220;
      in_R10 = (undefined *)((ulonglong)in_R10 >> 0x20);
      in_R11 = (undefined1 (*) [16])0x0;
      param_1 = (float *)(ulonglong)((int)pbVar50 - 1);
      puVar48 = &UNK_143398378;
      goto code_r0x000141b6f0bd;
    case 0x55:
      *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
      goto code_r0x000141b6efef;
    case 0x56:
    case 0x57:
      pfVar20 = *(float **)(unaff_RBP + -6);
      if (SBORROW8(0,(longlong)pfStack_28)) {
        return pfVar20;
      }
      if (pfStack_28 == (float *)0x0) {
        return pfVar20;
      }
code_r0x000141b6ef5b:
      pfVar23 = *(float **)(pfVar20 + 2);
      UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x1;
      goto code_r0x0001406abac0;
    case 0x58:
      uStack_30 = pfVar17;
      unaff_RBX = param_2;
      goto code_r0x000141b6f00c;
    case 0x59:
    case 0x5a:
    case 0x5b:
      pfStack_60 = (float *)&UNK_141b6ef8d;
      uStack_30 = (float *)func_0x000152077ad5();
      pfVar28 = pfStack_28;
      goto code_r0x000141b6ef8d;
    case 0x5c:
      puVar48 = (undefined *)0x2601;
      goto code_r0x000141b6f6fb;
    case 0x5d:
      goto code_r0x000141b6f74d;
    case 0x5e:
      pfVar17 = (float *)((ulonglong)pfVar17 & 0xffffffffffffff20);
      *pfVar17 = (float)((int)*pfVar17 + (int)pfVar17);
code_r0x000141b6f72c:
      *(byte *)pfVar17 = *(byte *)pfVar17 + (char)pfVar17;
      goto code_r0x000141b6f725;
    case 0x5f:
      goto code_r0x000141b6f73a;
    case 0x60:
      param_1 = pfStack_58;
      goto code_r0x000141b6f6fb;
    case 0x61:
      piVar19 = (int *)((ulonglong)pfVar17 & 0xffffffffffffff20);
      *piVar19 = *piVar19 + (int)piVar19;
      *(char *)piVar19 = (char)*piVar19 + (char)piVar19;
      goto code_r0x000141b6f76f;
    case 0x62:
      ppfVar40 = &pfStack_58;
      goto code_r0x000141b6f814;
    case 99:
      *(int *)(&UNK_143398283 + uVar16) = *(int *)(&UNK_143398283 + uVar16) + 0x43398220;
      goto code_r0x000141b6f965;
    case 100:
      fVar53 = (float)auVar56._0_8_ + (float)auVar56._0_8_;
      ppfVar42 = &pfStack_58;
      goto code_r0x000141b6f8ce;
    case 0x65:
      ppfVar43 = &pfStack_58;
      goto code_r0x000141b6f913;
    case 0x66:
      goto code_r0x000141b6f87d;
    case 0x67:
      goto code_r0x000141b6fa02;
    case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x69:
      if (!bVar51) {
        ppfVar44 = &pfStack_58;
      }
      goto code_r0x000141b6f9c6;
    case 0x6a:
      ppfVar45 = &pfStack_58;
      goto code_r0x000141b6f83f;
    case 0x6b:
      UNK_143398220 = UNK_143398220 & bVar9;
      *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
      UNK_1433981d8 = UNK_1433981d8 + bVar9;
      *pfVar17 = (float)((int)*pfVar17 + (int)fVar11);
      *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
      pfStack_60 = (float *)&UNK_141b6f7d8;
      pdb_142d7f1b0(param_1,0x100002600);
      uVar16 = *(ulonglong *)(param_1 + 4);
      *(undefined1 *)(*(ulonglong *)(param_1 + 2) + uVar16) = 10;
      puVar48 = (undefined *)(uVar16 + 1);
      *(undefined **)(param_1 + 4) = puVar48;
      if (unaff_R12 == 0) goto code_r0x000141b6f642;
      uVar16 = unaff_R15[2];
      if (uVar16 == 0) {
        *(undefined **)(param_1 + 4) = puVar48;
code_r0x000141b6f71c:
        if (*(undefined **)param_1 == puVar48) goto code_r0x000141b6f725;
      }
      else {
        uVar14 = unaff_R15[1];
        do {
          if (*(ulonglong *)param_1 - (longlong)puVar48 < uVar16) {
            uStack_38 = 1;
            pfStack_60 = (float *)&UNK_141b6f638;
            pdb_142d7f1b0(param_1,puVar48,uVar16,1);
            puVar48 = *(undefined **)(param_1 + 4);
          }
          pfStack_60 = (float *)&UNK_141b6f60d;
          pub_142e32760(puVar48 + *(ulonglong *)(param_1 + 2),uVar14,uVar16);
          puVar48 = puVar48 + uVar16;
          *(undefined **)(param_1 + 4) = puVar48;
          unaff_R12 = unaff_R12 + -1;
        } while (unaff_R12 != 0);
code_r0x000141b6f642:
        if (*(undefined **)param_1 == puVar48) {
code_r0x000141b6f725:
          uStack_38 = 1;
code_r0x000141b6f73a:
          pfStack_60 = (float *)&UNK_141b6f745;
          pdb_142d7f1b0(param_1,puVar48);
          puVar48 = *(undefined **)(param_1 + 4);
        }
      }
code_r0x000141b6f64b:
      puVar48[*(ulonglong *)(param_1 + 2)] = 0x7d;
      *(undefined **)(param_1 + 4) = puVar48 + 1;
      *(undefined1 *)(unaff_R15 + 4) = 1;
      param_1 = (float *)*unaff_R15;
      unaff_R12 = unaff_R15[3] + -1;
      unaff_R15[3] = unaff_R12;
      puVar48 = *(undefined **)(param_1 + 4);
      if (*(undefined **)param_1 == puVar48) {
        uStack_38 = 1;
code_r0x000141b6f76f:
        pfStack_60 = (float *)&UNK_141b6f786;
        pdb_142d7f1b0(param_1,puVar48,1,1);
        puVar48 = *(undefined **)(param_1 + 4);
      }
      puVar48[*(ulonglong *)(param_1 + 2)] = 10;
      puVar48 = puVar48 + 1;
      *(undefined **)(param_1 + 4) = puVar48;
      if (unaff_R12 != 0) {
        unaff_RBX = (float *)unaff_R15[2];
        if (unaff_RBX == (float *)0x0) {
          *(undefined **)(param_1 + 4) = puVar48;
        }
        else {
          unaff_R14 = unaff_R15[1];
          do {
            if ((float *)(*(ulonglong *)param_1 - (longlong)puVar48) < unaff_RBX) {
code_r0x000141b6f6cb:
              uStack_38 = 1;
              pfStack_60 = (float *)&UNK_141b6f6e8;
              pdb_142d7f1b0(param_1,puVar48,unaff_RBX,1);
              puVar48 = *(undefined **)(param_1 + 4);
            }
            pfStack_60 = (float *)&UNK_141b6f6bd;
            pub_142e32760(puVar48 + *(ulonglong *)(param_1 + 2),unaff_R14,unaff_RBX);
            puVar48 = puVar48 + (longlong)unaff_RBX;
            *(undefined **)(param_1 + 4) = puVar48;
            unaff_R12 = unaff_R12 + -1;
          } while (unaff_R12 != 0);
        }
      }
      if (*(undefined **)param_1 == puVar48) {
code_r0x000141b6f78f:
        uStack_38 = 1;
code_r0x000141b6f79e:
        pfStack_60 = (float *)&UNK_141b6f7af;
        pdb_142d7f1b0(param_1,puVar48);
        puVar48 = *(undefined **)(param_1 + 4);
      }
code_r0x000141b6f6fb:
      pfVar20 = *(float **)(param_1 + 2);
      *(undefined1 *)((longlong)pfVar20 + (longlong)puVar48) = 0x7d;
      *(undefined **)(param_1 + 4) = puVar48 + 1;
      return pfVar20;
    case 0x6c:
code_r0x000141b6f85d:
      if (pfVar23 == (float *)0x1) {
        pfVar23 = (float *)0x0;
        pfVar28 = (float *)((ulonglong)pfVar27 & 0xff);
        ppfVar45 = &pfStack_58;
        goto code_r0x000141b6f83f;
      }
      puVar48 = (undefined *)0x1300;
      ppfVar41 = &pfStack_58;
      fVar55 = unaff_XMM9_Da;
      goto code_r0x000141b6f871;
    case 0x6d:
      ppfVar44 = &pfStack_58;
code_r0x000141b6f9c6:
      ppfVar45 = ppfVar44;
      pfVar23 = param_1;
      unaff_XMM11 = auVar56;
code_r0x000141b6f9ed:
      goto code_r0x000141b6fbe6;
    }
  }
LAB_141b6d671:
  uStack_30 = (float *)0x5;
LAB_141b6d67a:
  pfStack_60 = (float *)0x141b6d68a;
  pfStack_28 = (float *)pdb_142d84ef0(param_2,&uStack_30);
  goto LAB_141b6d8b6;
code_r0x000141b6d65d:
  *(ulonglong *)(param_2 + 10) = uVar15;
  uVar16 = uVar15;
  if (uVar15 == *(ulonglong *)(param_2 + 8)) goto LAB_141b6d671;
  goto LAB_141b6d64b;
code_r0x000141b6fa13:
  ppfVar45 = ppfVar46;
code_r0x000141b6fa02:
  *pfVar17 = (float)((int)*pfVar17 + (int)pfVar17);
  *(byte *)((longlong)pfVar23 + 0xf) = *(byte *)((longlong)pfVar23 + 0xf) + (char)pfVar17;
  auVar58._4_12_ = auVar56._4_12_;
  auVar58._0_4_ = (auVar56._0_4_ * unaff_XMM7_Da - unaff_XMM9_Da * unaff_XMM12_Da) * _DAT_142e37890;
  *(undefined **)((longlong)ppfVar45 + -8) = &UNK_141b6fa3a;
  uVar14 = pub_142e32980(auVar58._0_8_,
                         ((unaff_XMM13_Da - unaff_XMM10_Da) - unaff_XMM15_Da) + unaff_XMM14_Da);
  unaff_XMM11._8_4_ = (int)extraout_XMM0_Qb_03;
  unaff_XMM11._0_8_ = uVar14;
  unaff_XMM11._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
  goto code_r0x000141b6fa43;
code_r0x000141b6da65:
  if ((int)pbVar50 == 0x7d) {
    *(float **)(pfVar23 + 10) = pfVar17;
code_r0x000141b6daa2:
    bVar9 = 0;
    goto code_r0x000141b6daa4;
  }
  uStack_38 = 10;
  ppfVar29 = &pfStack_58;
  goto code_r0x000141b6da58;
code_r0x000141b6d9b4:
  UNK_143398220 = UNK_143398220 | bVar9;
  *(byte *)pfVar17 = *(byte *)pfVar17 + bVar9;
  *(float **)(pfStack_28 + 10) = pfVar17;
  pfStack_60 = (float *)0x141b6d9c9;
  auVar56._0_8_ = pdb_141653ab0(&uStack_38);
  iVar49 = (int)pbVar50;
  auVar56._8_8_ = extraout_XMM0_Qb_01;
  unaff_RBP = (float *)(uStack_38 & 0xff);
  pfVar28 = (float *)&UNK_143398260;
  uVar16 = (ulonglong)*(int *)(&UNK_143398260 + (longlong)unaff_RBP * 4);
  bVar51 = 0xfffffffebcc67d9f < uVar16;
  pfVar23 = (float *)(&UNK_143398260 + uVar16);
  bVar52 = pfVar23 != (float *)0x0;
  uVar12 = (uint)pfVar23;
  cVar10 = (char)uStack_30;
  uVar13 = (uint)uStack_30;
  uVar8 = fRam0000000100002600._1_3_;
  pfVar17 = uStack_30;
  param_2 = unaff_RBX;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(unaff_RBP) {
  case (float *)0x0:
  case (float *)0x1:
  case (float *)0x2:
  case (float *)0x3:
  case (float *)0x4:
  case (float *)0x5:
  case (float *)0x6:
    pfStack_60 = (float *)0x141b6d9ef;
    uStack_30 = (float *)pdb_141654940(uStack_30);
    if (uStack_30 != (float *)0x0) goto code_r0x000141b6d9f4;
    *(byte *)(unaff_RBX + 0x12) = *(byte *)(unaff_RBX + 0x12) + 1;
    *(byte *)((longlong)param_1 + 1) = (byte)uStack_38;
    if (*(ulonglong *)(unaff_RBX + 8) <= *(ulonglong *)(unaff_RBX + 10)) goto code_r0x000141b6da4a;
    UNRECOVERED_JUMPTABLE_00 = *(undefined1 (**) [16])(unaff_RBX + 6);
    pfVar17 = (float *)(*(ulonglong *)(unaff_RBX + 10) + 1);
    pfVar27 = (float *)-*(ulonglong *)(unaff_RBX + 8);
    goto code_r0x000141b6da24;
  case (float *)0x7:
code_r0x000141b6d9f4:
    *(float **)(param_1 + 2) = uStack_30;
    *(byte *)param_1 = 1;
    *(byte *)(unaff_RBX + 0x12) = *(byte *)(unaff_RBX + 0x12) + 1;
    return param_1;
  case (float *)0x8:
    param_1 = (float *)((ulonglong)pfVar23 & 0xffffffff);
    pfVar23 = (float *)(UNRECOVERED_JUMPTABLE_00[-1] + 0xc);
    if (pfVar23 < (float *)0x8) {
      pbVar50 = &UNK_143398280;
code_r0x000141b6e83d:
      uVar16 = (ulonglong)*(int *)(pbVar50 + (longlong)pfVar23 * 4);
code_r0x000141b6e841:
                    /* WARNING: Could not recover jumptable at 0x000141b6e844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar20 = (float *)(*(code *)(pbVar50 + uVar16))(pbVar50 + uVar16);
      return pfVar20;
    }
    break;
  case (float *)0x9:
  case (float *)0xa:
  case (float *)0xc:
    pfVar17 = (float *)(ulonglong)(uVar13 + *(int *)(&UNK_143398269 + uVar16));
    bVar51 = uVar13 + *(int *)(&UNK_143398269 + uVar16) == 0;
    ppfVar31 = (float **)(unaff_RBP + 2);
code_r0x000141b6e8f6:
    ppfVar32 = ppfVar31;
    param_1 = pfVar17;
    if (bVar51) {
code_r0x000141b6e8f8:
      *(byte *)((longlong)pfVar17 + 1) = 6;
      uStack_30 = pfVar17;
      goto code_r0x000141b6e908;
    }
    break;
  case (float *)0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0xd:
    uVar4 = in(0x8260);
    uVar5 = in(0x8260);
    fRam0000000100002600._0_2_ = CONCAT11(uVar5,uVar4);
    if (cRam0000000100002661 == '`') {
      *(byte *)((longlong)uStack_30 + 1) = 1;
code_r0x000141b6e908:
      *(byte *)uStack_30 = 0;
      return uStack_30;
    }
code_r0x000141b6e85e:
    uStack_30 = pfVar17;
    ppfVar32 = &pfStack_58;
    param_1 = uStack_30;
    if (*pfVar28 == 2.8267477e+23) {
      *(byte *)((longlong)uStack_30 + 1) = 2;
      goto code_r0x000141b6e908;
    }
    break;
  case (float *)0xe:
    uVar4 = in(0x8260);
    fRam0000000100002600 = (float)CONCAT31(uVar8,uVar4);
    if (bVar52) {
code_r0x000141b6e916:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar51 = CONCAT26(_UNK_143398269,CONCAT15(UNK_143398268,CONCAT14(UNK_143398267,_UNK_143398263)))
             == 0x72657474756c436f &&
             CONCAT17(UNK_143398267,CONCAT43(_UNK_143398263,CONCAT12(UNK_143398262,_UNK_143398260)))
             == 0;
code_r0x000141b6e8b6:
    ppfVar32 = ppfVar30;
    param_1 = uStack_30;
    if (bVar51) {
      *(byte *)((longlong)uStack_30 + 1) = 4;
      goto code_r0x000141b6e908;
    }
    break;
  case (float *)0xf:
    uVar4 = in(0x8260);
    fRam0000000100002600 = (float)CONCAT31(uVar8,uVar4);
    if (bVar51) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
      return pfVar20;
    }
    if (bVar52) {
      out(*param_1,0x8260);
      uVar12 = *(int *)((longlong)uStack_30 + 0x33) * -0x48f0bbf6;
      pbVar50 = (byte *)((ulonglong)uVar12 - 0x7f);
      *pbVar50 = *pbVar50 | (byte)uVar12;
      UNRECOVERED_JUMPTABLE = (code *)swi(1);
      pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
      return pfVar20;
    }
    ppfVar32 = &pfStack_58;
    param_1 = uStack_30;
    if (UNK_143398268 == 'p' && CONCAT13(UNK_143398263,CONCAT12(UNK_143398262,_UNK_143398260)) == 0)
    {
code_r0x000141b6e892:
      *(byte *)((longlong)pfVar17 + 1) = 3;
      uStack_30 = pfVar17;
      goto code_r0x000141b6e908;
    }
    break;
  case (float *)0x10:
    goto code_r0x000141b6e936;
  case (float *)0x11:
    ppfVar40 = &pfStack_58;
    if (UNRECOVERED_JUMPTABLE_00[-1] + 0xd < (undefined1 *)0x6) {
      pbVar50 = &UNK_1433982a0;
      pfVar23 = (float *)(longlong)
                         *(int *)(&UNK_1433982a0 +
                                 (longlong)(UNRECOVERED_JUMPTABLE_00[-1] + 0xd) * 4);
code_r0x000141b6e971:
                    /* WARNING: Could not recover jumptable at 0x000141b6e974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar20 = (float *)(*(code *)((longlong)pfVar23 + (longlong)pbVar50))
                                   ((code *)((longlong)pfVar23 + (longlong)pbVar50));
      return pfVar20;
    }
    goto LAB_141b6ea18;
  case (float *)0x12:
    ppfVar40 = &pfStack_58;
    if ((&UNK_1433982c5)[(longlong)param_1 * 2] == '`') {
code_r0x000141b6e9b0:
      *(byte *)((longlong)uStack_30 + 1) = 6;
      goto code_r0x000141b6ea0e;
    }
    goto LAB_141b6ea18;
  case (float *)0x13:
    ppfVar33 = (float **)(unaff_RBP + 2);
  case (float *)0x15:
    ppfVar40 = ppfVar33;
    if (UNK_143398262 == 'l' && _UNK_143398260 == 0x6c41) {
      *(byte *)((longlong)uStack_30 + 1) = 0;
code_r0x000141b6ea0e:
      *(byte *)uStack_30 = 0;
      return uStack_30;
    }
    goto LAB_141b6ea18;
  case (float *)0x14:
    uVar12 = uVar12 ^ 0x6e65;
code_r0x000141b6e9de:
    pfVar17 = uStack_30;
    ppfVar40 = &pfStack_58;
    if (iVar49 == 0 && uVar12 == 0) {
      *(byte *)((longlong)uStack_30 + 1) = 5;
      goto code_r0x000141b6ea0e;
    }
    goto LAB_141b6ea18;
  case (float *)0x16:
    pfVar17 = (float *)(ulonglong)(uVar13 + 0x1829301 + (uint)bVar51);
    ppfVar40 = &pfStack_58;
LAB_141b6ea18:
    in_R10 = &UNK_143397d20;
    pfVar27 = pfVar28;
    ppfVar44 = ppfVar40;
code_r0x000141b6ea25:
    *(undefined8 *)((longlong)ppfVar44 + -8) = 0x141b6ea36;
    pfVar23 = (float *)pdb_142d8f140(pfVar27,UNRECOVERED_JUMPTABLE_00,in_R10);
    uStack_30 = pfVar17;
    param_1 = pfVar17;
code_r0x000141b6ea3c:
    *(float **)(param_1 + 2) = pfVar23;
    *(byte *)uStack_30 = 1;
    pfVar17 = uStack_30;
code_r0x000141b6ea44:
    return pfVar17;
  default:
code_r0x000141b6eb6f:
    pfVar23 = (float *)0x0;
  case (float *)0x2d:
    *(byte *)((longlong)uStack_30 + 1) = (byte)pfVar23;
    *(byte *)uStack_30 = 0;
    return uStack_30;
  case (float *)0x18:
    if (!bVar52) {
      pfVar23 = (float *)0x0;
code_r0x000141b6ea8d:
      *(byte *)((longlong)pfVar17 + 1) = (byte)pfVar23;
      *(byte *)pfVar17 = 0;
      return pfVar17;
    }
    goto LAB_141b6ebc7;
  case (float *)0x1b:
    goto code_r0x000141b6ea3c;
  case (float *)0x1c:
    pfVar23 = (float *)(ulonglong)
                       (CONCAT13(UNK_143398263,CONCAT12(UNK_143398262,_UNK_143398260)) ^ 0x63746970)
    ;
code_r0x000141b6eb06:
    bVar51 = pfVar28[2] == 7.2715853e+31 && pfVar23 == *(float **)pfVar28;
code_r0x000141b6eb16:
    if (bVar51) {
      *(byte *)((longlong)pfVar17 + 1) = 4;
      uStack_30 = pfVar17;
      goto code_r0x000141b6eb21;
    }
    goto LAB_141b6ebc7;
  case (float *)0x1d:
    *(byte *)uStack_30 = *(byte *)uStack_30 + cVar10;
code_r0x000141b6eb21:
    *(byte *)uStack_30 = 0;
    return uStack_30;
  case (float *)0x1e:
    if (uVar13 < 0x13) {
      UNRECOVERED_JUMPTABLE_00 =
           (undefined1 (*) [16])
           (&UNK_1433982b8 + *(int *)(&UNK_1433982b8 + (longlong)UNRECOVERED_JUMPTABLE_00 * 4));
code_r0x000141b6ea6f:
                    /* WARNING: Could not recover jumptable at 0x000141b6ea6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar20 = (float *)(*(code *)UNRECOVERED_JUMPTABLE_00)();
      return pfVar20;
    }
    goto LAB_141b6ebc7;
  case (float *)0x1f:
    *uStack_30 = (float)((int)*uStack_30 + uVar13);
    *(char *)(uVar16 + 0x144820a62) = *(char *)(uVar16 + 0x144820a62) + -0x7e;
code_r0x000141b6eaac:
    *(byte *)uStack_30 = 0;
    return uStack_30;
  case (float *)0x21:
code_r0x000141b6eacd:
    unaff_00084f00 = '\x13';
    ppfVar35 = (float **)((longlong)ppfVar34 + -8);
    unaff_0008ae00 = (undefined1 *)((longlong)ppfVar34 + -8);
    puVar36 = (ulonglong *)((longlong)ppfVar34 + -8);
    *(float **)((longlong)ppfVar34 + -8) = unaff_RBP;
    cVar10 = '\x12';
    do {
      unaff_RBP = unaff_RBP + -2;
      puVar36 = puVar36 + -1;
      *puVar36 = *(ulonglong *)unaff_RBP;
      cVar10 = cVar10 + -1;
      pfVar17 = uStack_30;
      pfStack_28 = pfVar28;
    } while ('\0' < cVar10);
code_r0x000141b6eacd:
    *(undefined1 **)((longlong)ppfVar35 + (ulonglong)(byte)(unaff_00084f00 - 1) * -8 + -8) =
         unaff_0008ae00;
    *(byte *)pfVar17 = *(byte *)pfVar17 + (char)pfVar17;
    *(byte *)((longlong)pfVar23 + 0x1488801) =
         *(byte *)((longlong)pfVar23 + 0x1488801) + (char)((ulonglong)pfStack_28 >> 8);
    *(byte *)pfVar17 = 0;
    return pfVar17;
  case (float *)0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x2a:
    *(uint *)(&UNK_1433982c3 + uVar16) = *(int *)(&UNK_1433982c3 + uVar16) + uVar12;
code_r0x000141b6ebe7:
                    /* WARNING: Could not recover jumptable at 0x000141b6ebfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar20 = (float *)(*(code *)(&UNK_143398304 +
                                 *(int *)(&UNK_143398304 + (ulonglong)**(uint **)pfVar23 * 4)))
                                 (*(uint **)pfVar23,
                                  &UNK_143398304 +
                                  *(int *)(&UNK_143398304 + (ulonglong)**(uint **)pfVar23 * 4));
    return pfVar20;
  case (float *)0x2b:
code_r0x000141b6ebbb:
    pfVar17 = uStack_30;
    if ((ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) == 0xffff) {
      *(byte *)((longlong)uStack_30 + 1) = 3;
      *(byte *)uStack_30 = 0;
      return uStack_30;
    }
LAB_141b6ebc7:
    *(byte *)((longlong)pfVar17 + 1) = 6;
    *(byte *)pfVar17 = 0;
    return pfVar17;
  case (float *)0x2c:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
    return pfVar20;
  case (float *)0x2e:
    pfVar17 = (float *)((ulonglong)uStack_30 & 0xffffffffffffff30);
code_r0x000141b6ec11:
    puVar1 = (uint *)((longlong)pfVar17 +
                     (ulonglong)*(uint *)((longlong)unaff_RBP + -0x7cb700c1) * 2);
    *puVar1 = *puVar1 << 9 | *puVar1 >> 0x17;
    pfStack_28 = (float *)&UNK_143397f50;
    uStack_30 = (float *)&stack0xffffffffffffffe8;
    uStack_38 = 0xc;
    pfStack_60 = (float *)&UNK_141b6ec59;
    pfVar20 = (float *)pdb_140f66e50((ulonglong)pfVar17 & 0xffffffffffffff40,&UNK_143397c81,0xb,
                                     &UNK_143397c8c);
    return pfVar20;
  case (float *)0x2f:
    pfStack_60 = (float *)&UNK_141b6ecc5;
    pfVar20 = (float *)pdb_140f66090((ulonglong)uStack_30 & 0xffffffffffffff20,&UNK_143397c74,4,
                                     &stack0xffffffffffffffe8);
    return pfVar20;
  case (float *)0x30:
  case (float *)0x31:
  case (float *)0x32:
  case (float *)0x36:
    *uStack_30 = (float)((int)*uStack_30 + uVar13);
    *(byte *)uStack_30 = *(byte *)uStack_30 + cVar10;
    *(byte *)uStack_30 = *(byte *)uStack_30 + cVar10;
  case (float *)0x35:
    *(byte *)(uStack_30 + 0x1d704e52) = *(byte *)(uStack_30 + 0x1d704e52) + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x33:
    fRam0000000100002600._0_2_ =
         CONCAT11(*(byte *)((longlong)param_1 + 1),fRam0000000100002600._0_1_);
    puVar36 = (ulonglong *)(&UNK_143398218 + uVar16);
    uVar16 = *puVar36;
    *puVar36 = (ulonglong)(*UNRECOVERED_JUMPTABLE_00 + *puVar36);
    cVar10 = cVar10 + *(byte *)uStack_30 + CARRY8(uVar16,(ulonglong)UNRECOVERED_JUMPTABLE_00);
    pcVar18 = (char *)CONCAT71((int7)((ulonglong)uStack_30 >> 8),cVar10);
    *pcVar18 = *pcVar18 + cVar10;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar20 = (float *)(**(code **)(*(ulonglong *)(pfVar23 + 2) + 0x18))(*(ulonglong *)pfVar23);
    return pfVar20;
  case (float *)0x34:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
    return pfVar20;
  case (float *)0x37:
    *(byte *)uStack_30 = *(byte *)uStack_30 << 3 | (byte)(CONCAT11(bVar51,*(byte *)uStack_30) >> 6);
    plVar24 = (longlong *)((ulonglong)uStack_30 & 0xffffffff);
    pfStack_28 = (float *)0x100002600;
    uStack_30 = unaff_RBX;
    uStack_38 = 0xfffffffffffffffe;
    lVar6 = *plVar24;
    if (lVar6 == 0) {
      lStack_68 = 0;
    }
    else {
      lStack_90 = plVar24[1];
      lStack_68 = plVar24[2];
      auStack_a8[1] = 0;
      uStack_80 = 0;
      auStack_a8[2] = lVar6;
      lStack_78 = lVar6;
      lStack_70 = lStack_90;
    }
    auStack_a8[0] = (ulonglong)(lVar6 != 0);
    uStack_88 = auStack_a8[0];
    pdb_14192c4b0(&pfStack_60,auStack_a8);
    if (pfStack_60 != (float *)0x0) {
      do {
        pfStack_48 = pfStack_60 + (longlong)puStack_50 * 8;
        puStack_40 = auStack_a8;
        if (*(ulonglong *)(pfStack_60 + (longlong)puStack_50 * 6 + 0x5a) != 0) {
          pub_1406abac0(*(byte **)(pfStack_60 + (longlong)puStack_50 * 6 + 0x5c),
                        *(ulonglong *)(pfStack_60 + (longlong)puStack_50 * 6 + 0x5a),1);
        }
        pdb_140966d70(&pfStack_48);
        pdb_14192c4b0(&pfStack_60,auStack_a8);
      } while (pfStack_60 != (float *)0x0);
    }
    return (float *)0x0;
  case (float *)0x38:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)(uint)((int)param_1 + (int)unaff_RBX);
    goto code_r0x000141b6f08c;
  case (float *)0x39:
  case (float *)0x3c:
  case (float *)0x3e:
  case (float *)0x3f:
  case (float *)0x40:
  case (float *)0x41:
  case (float *)0x42:
  case (float *)0x43:
  case (float *)0x44:
    bVar9 = *(byte *)pfVar23;
    if (0xe < (ulonglong)bVar9) {
      puVar25 = (undefined1 *)0x0;
      do {
        if (puVar25[0x143398260] == bVar9) {
          return (float *)0x1;
        }
        bVar51 = UNRECOVERED_JUMPTABLE_00[-2] + 8 != puVar25;
        puVar25 = puVar25 + 0x18;
      } while (bVar51);
      return (float *)0x0;
    }
    pfVar23 = *(float **)(&UNK_143398270 + uVar16);
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_14339833c + *(int *)(&UNK_14339833c + (ulonglong)bVar9 * 4));
code_r0x000141b6f08c:
                    /* WARNING: Could not recover jumptable at 0x000141b6f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)(pfVar23);
    return pfVar20;
  case (float *)0x3a:
code_r0x000141b6f00c:
    *(byte *)uStack_30 = *(byte *)uStack_30 + (char)uStack_30;
    *(byte *)uStack_30 = *(byte *)uStack_30 + (char)uStack_30;
    pfVar27 = pfVar28;
code_r0x000141b6f002:
    *(byte *)((longlong)unaff_RBP + -0x3d) =
         *(byte *)((longlong)unaff_RBP + -0x3d) & (byte)unaff_RBX;
    ppfVar38 = (float **)&uStack_80;
    pfVar20 = pfVar27 + 0x10;
    pfVar17 = *(float **)(pfVar27 + 0xc);
    pfStack_60 = unaff_RBP;
    pfStack_48 = pfVar27;
code_r0x000141b6f022:
    pfVar17 = (float *)((longlong)pfVar17 * 2);
    ppfVar39 = ppfVar38;
    unaff_RBP = pfVar20;
code_r0x000141b6f02a:
    if (pfVar17 == (float *)0x0) {
      return (float *)0x0;
    }
    uStack_30 = *(float **)(unaff_RBP + -6);
  case (float *)0x45:
    pbVar50 = *(byte **)(uStack_30 + 2);
    uVar16 = *(ulonglong *)(unaff_RBP + -4);
    *(undefined **)((longlong)ppfVar39 + -8) = &UNK_141b6f046;
    pub_1406abac0(pbVar50,uVar16,1);
    return extraout_RAX_00;
  case (float *)0x3b:
    *(byte *)uStack_30 = *(byte *)uStack_30 + cVar10;
    while( true ) {
      do {
        in_R11 = (undefined1 (*) [16])(in_R11[1] + 8);
        if (UNRECOVERED_JUMPTABLE_00 == in_R11) {
          return (float *)0x0;
        }
code_r0x000141b6f0bd:
      } while ((*(byte *)((longlong)pfVar28 + (longlong)in_R11) != 0) ||
              (*(int *)((longlong)(pfVar28 + 2) + (longlong)in_R11) != (int)pbVar50));
code_r0x000141b6f0cb:
      if (5 < (uint)param_1) break;
      switch(puVar48 + *(int *)(puVar48 + (longlong)param_1 * 4)) {
      case (undefined *)0x141b6f0a5:
        if (*(float **)((longlong)(pfVar28 + 4) + (longlong)in_R11) == pfVar23) {
          return (float *)0x1;
        }
        break;
      case (undefined *)0x141b6f0df:
        if (*(int *)((longlong)(pfVar28 + 3) + (longlong)in_R11) == (int)in_R10) {
          return (float *)0x1;
        }
        break;
      case (undefined *)0x141b6f162:
        return (float *)0x1;
      }
    }
    return (float *)0x1;
  case (float *)0x3d:
    goto code_r0x000141b6f0cb;
  case (float *)0x46:
  case (float *)0x47:
code_r0x000141b6ef8d:
    if (pfVar28 == (float *)0x0) {
      return uStack_30;
    }
    UNRECOVERED_JUMPTABLE_00 = (undefined1 (*) [16])0x8;
    pfVar23 = *(float **)(unaff_RBP + -4);
code_r0x0001406abac0:
    if ((undefined1 (*) [16])0x10 < UNRECOVERED_JUMPTABLE_00) {
      pfVar23 = *(float **)(pfVar23 + -2);
    }
    puStack_50 = &UNK_140f3c37e;
    uVar14 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar20 = (float *)HeapFree(uVar14,0,pfVar23);
    return pfVar20;
  case (float *)0x48:
code_r0x000141b6f04a:
    *(byte *)((longlong)unaff_RBP + -0x3d) = *(byte *)((longlong)unaff_RBP + -0x3d) & (byte)param_2;
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
    return pfVar20;
  case (float *)0x49:
  case (float *)0x4a:
  case (float *)0x4b:
    pfStack_48 = pfVar28;
code_r0x000141b6efd5:
    ppfVar37 = (float **)&uStack_80;
    pfVar20 = *(float **)(pfVar28 + 10);
    if (*(longlong *)(pfVar20 + 4) != 0) {
      pfStack_28 = (float *)(*(longlong *)(pfVar20 + 4) << 5);
      pfVar20 = pfVar28 + 0x10;
      pfStack_60 = unaff_RBP;
code_r0x000141b6efef:
      pbVar50 = *(byte **)(pfVar20 + -4);
      *(undefined **)((longlong)ppfVar37 + -8) = &UNK_141b6effe;
      pub_1406abac0(pbVar50,(ulonglong)pfStack_28,8);
      pfVar20 = extraout_RAX;
    }
    return pfVar20;
  case (float *)0x4c:
    puVar48 = (undefined *)0x67304c00;
    pbVar50 = (byte *)((longlong)uStack_30 + -0x75);
    iVar49 = *(int *)pbVar50;
    *(uint *)pbVar50 = *(int *)pbVar50 + uVar12;
    if (*(int *)pbVar50 == 0 || SCARRY4(iVar49,uVar12) != *(int *)pbVar50 < 0) {
      UNK_143623c61 = cVar10;
      *(byte *)uStack_30 = *(byte *)uStack_30 + cVar10;
code_r0x000141b6f74d:
      *(int *)((longlong)pfVar17 + -0x73) = *(int *)((longlong)pfVar17 + -0x73) + -1;
                    /* WARNING: Subroutine does not return */
      pfStack_60 = (float *)&UNK_141b6f766;
      pdb_142dc83b0(pfVar23,0x28,&UNK_143398010);
    }
    goto code_r0x000141b6f64b;
  case (float *)0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x4e:
    uStack_38 = CONCAT44(uStack_38._4_4_,1);
    goto code_r0x000141b6f76f;
  case (float *)0x4f:
    *(byte *)((longlong)uStack_30 + -0x77) = *(byte *)((longlong)uStack_30 + -0x77) + (char)pfVar23;
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pfVar20 = (float *)(*UNRECOVERED_JUMPTABLE)();
    return pfVar20;
  case (float *)0x50:
    pbVar50 = (byte *)((longlong)unaff_RBP + (longlong)pfVar23 * 4 + 5);
    *(uint *)pbVar50 = *(int *)pbVar50 + uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x51:
    goto code_r0x000141b6f79e;
  case (float *)0x52:
    ppfVar45 = &pfStack_58;
    goto code_r0x000141b6f83f;
  case (float *)0x53:
    ppfVar44 = &pfStack_58;
    goto code_r0x000141b6f9c6;
  case (float *)0x54:
    goto code_r0x000141b6f913;
  case (float *)0x55:
    goto code_r0x000141b6fb77;
  case (float *)0x56:
    goto code_r0x000141b6f8bd;
  case (float *)0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x58:
    in(0x8260);
    ppfVar40 = &pfStack_60;
    pfStack_60 = unaff_RBP;
    goto code_r0x000141b6f814;
  case (float *)0x59:
    goto code_r0x000141b6fa13;
  case (float *)0x5a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (float *)0x5b:
    *(char *)(uVar16 + 0x24339a889) = *(char *)(uVar16 + 0x24339a889) + cVar10;
    cVar10 = cRam24ac290f44000000;
    uVar22 = (undefined7)(CONCAT62((int6)((ulonglong)uStack_30 >> 0x10),0x2400) >> 8);
    pcVar18 = (char *)CONCAT71(uVar22,cRam24ac290f44000000);
    *pcVar18 = *pcVar18 + cRam24ac290f44000000;
    *(char *)(uVar16 + 0x24339a889) = *(char *)(uVar16 + 0x24339a889) + cVar10;
    fRam0000000100002600 = (float)CONCAT31(fRam0000000100002600._1_3_,*(byte *)param_1);
    pcVar18 = (char *)(CONCAT71(uVar22,cVar10) & 0xffffffffffffff80);
    *pcVar18 = *pcVar18 + (char)pcVar18;
    *(char *)(uVar16 + 0x24339a88a) = *(char *)(uVar16 + 0x24339a88a) + (char)pcVar18;
    ppfVar40 = (float **)puRam000000000000b024;
code_r0x000141b6f814:
    *(float *)((longlong)ppfVar40 + 0x80) = unaff_XMM12_Da;
    *(float *)((longlong)ppfVar40 + 0x84) = unaff_XMM12_Db;
    *(undefined4 *)((longlong)ppfVar40 + 0x88) = unaff_XMM12_Dc;
    *(float *)((longlong)ppfVar40 + 0x8c) = unaff_XMM12_Dd;
    *(undefined1 (*) [16])((longlong)ppfVar40 + 0x70) = unaff_XMM11;
    *(float *)((longlong)ppfVar40 + 0x60) = unaff_XMM10_Da;
    *(undefined4 *)((longlong)ppfVar40 + 100) = unaff_XMM10_Db;
    *(undefined4 *)((longlong)ppfVar40 + 0x68) = unaff_XMM10_Dc;
    *(undefined4 *)((longlong)ppfVar40 + 0x6c) = unaff_XMM10_Dd;
    *(float *)((longlong)ppfVar40 + 0x50) = unaff_XMM9_Da;
    *(undefined4 *)((longlong)ppfVar40 + 0x54) = unaff_XMM9_Db;
    *(undefined4 *)((longlong)ppfVar40 + 0x58) = unaff_XMM9_Dc;
    *(undefined4 *)((longlong)ppfVar40 + 0x5c) = unaff_XMM9_Dd;
    *(float *)((longlong)ppfVar40 + 0x40) = unaff_XMM8_Da;
    *(undefined4 *)((longlong)ppfVar40 + 0x44) = unaff_XMM8_Db;
    *(undefined4 *)((longlong)ppfVar40 + 0x48) = unaff_XMM8_Dc;
    *(undefined4 *)((longlong)ppfVar40 + 0x4c) = unaff_XMM8_Dd;
    *(float *)((longlong)ppfVar40 + 0x30) = unaff_XMM7_Da;
    *(undefined4 *)((longlong)ppfVar40 + 0x34) = unaff_XMM7_Db;
    *(undefined4 *)((longlong)ppfVar40 + 0x38) = unaff_XMM7_Dc;
    *(undefined4 *)((longlong)ppfVar40 + 0x3c) = unaff_XMM7_Dd;
code_r0x000141b6f83a:
    *(float *)((longlong)ppfVar40 + 0x20) = unaff_XMM6_Da;
    *(undefined4 *)((longlong)ppfVar40 + 0x24) = unaff_XMM6_Db;
    *(undefined4 *)((longlong)ppfVar40 + 0x28) = unaff_XMM6_Dc;
    *(undefined4 *)((longlong)ppfVar40 + 0x2c) = unaff_XMM6_Dd;
    ppfVar45 = ppfVar40;
code_r0x000141b6f83f:
    auVar3 = *UNRECOVERED_JUMPTABLE_00;
    unaff_XMM12_Da = auVar3._0_4_;
    unaff_XMM8_Da = auVar3._4_4_;
    unaff_XMM12_Dc = auVar3._8_4_;
    unaff_XMM9_Da = auVar3._12_4_;
    unaff_XMM7_Da = *(float *)(*UNRECOVERED_JUMPTABLE_00 + 8);
    puVar48 = (undefined *)((ulonglong)pfVar28 & 0xff);
    iVar49 = *(int *)(&UNK_143398390 + (longlong)puVar48 * 4);
    ppfVar44 = ppfVar45;
    ppfVar42 = ppfVar45;
    ppfVar41 = ppfVar45;
    param_1 = pfVar23;
    fVar55 = unaff_XMM9_Da;
    unaff_XMM12_Db = unaff_XMM8_Da;
    unaff_XMM12_Dd = unaff_XMM9_Da;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(puVar48) {
    case (undefined *)0x0:
code_r0x000141b6f871:
      auVar57._4_4_ = unaff_XMM12_Db;
      auVar57._0_4_ = unaff_XMM12_Da;
      auVar57._8_4_ = unaff_XMM12_Dc;
      auVar57._12_4_ = unaff_XMM12_Dd;
      auVar56._4_12_ = auVar57._4_12_;
      auVar56._0_4_ = unaff_XMM12_Da * unaff_XMM7_Da;
code_r0x000141b6f87d:
      fVar53 = auVar56._0_4_;
      fVar55 = fVar55 * unaff_XMM8_Da;
      ppfVar45 = ppfVar41;
      goto code_r0x000141b6f8e9;
    case (undefined *)0x1:
code_r0x000141b6f8bd:
      fVar55 = unaff_XMM8_Da * unaff_XMM7_Da;
      fVar53 = unaff_XMM9_Da * unaff_XMM12_Da;
      goto code_r0x000141b6f8ce;
    case (undefined *)0x2:
code_r0x000141b6f897:
      fVar53 = unaff_XMM8_Da * unaff_XMM7_Da;
      fVar55 = unaff_XMM9_Da * unaff_XMM12_Da;
      goto code_r0x000141b6f8e9;
    case (undefined *)0x3:
      fVar55 = unaff_XMM12_Da * unaff_XMM8_Da;
code_r0x000141b6f8b3:
      fVar53 = unaff_XMM9_Da * unaff_XMM7_Da;
      ppfVar42 = ppfVar45;
      goto code_r0x000141b6f8ce;
    case (undefined *)0x4:
      fVar55 = unaff_XMM12_Da * unaff_XMM7_Da;
      fVar53 = unaff_XMM9_Da * unaff_XMM8_Da;
code_r0x000141b6f8ce:
      fVar54 = fVar53 + fVar55 + fVar53 + fVar55;
      ppfVar43 = ppfVar42;
      fVar55 = _DAT_142e36f34;
      goto code_r0x000141b6f8fd;
    case (undefined *)0x5:
      fVar53 = unaff_XMM12_Da * unaff_XMM8_Da;
      fVar55 = unaff_XMM9_Da * unaff_XMM7_Da;
code_r0x000141b6f8e9:
      fVar54 = (fVar53 - fVar55) * _DAT_142e37890;
      ppfVar43 = ppfVar45;
      fVar55 = _DAT_142e36f34;
code_r0x000141b6f8fd:
      if (fVar55 <= fVar54) {
        fVar55 = fVar54;
      }
      fVar53 = _DAT_142e36f28;
      if (fVar55 <= _DAT_142e36f28) {
        fVar53 = fVar55;
      }
code_r0x000141b6f913:
      *(undefined **)((longlong)ppfVar43 + -8) = &UNK_141b6f918;
      pub_142e32960();
      if (_DAT_143058d40 < (float)(_DAT_142e377e0 & (uint)fVar53)) {
code_r0x000141b6f92f:
                    /* WARNING: Could not recover jumptable at 0x000141b6f952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar20 = (float *)(*(code *)(&UNK_1433983c0 +
                                     *(int *)(&UNK_1433983c0 + (longlong)puVar48 * 4)))
                                     (&UNK_1433983c0 +
                                      *(int *)(&UNK_1433983c0 + (longlong)puVar48 * 4));
        return pfVar20;
      }
code_r0x000141b6f965:
                    /* WARNING: Could not recover jumptable at 0x000141b6f993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar20 = (float *)(*(code *)(&UNK_1433983a8 +
                                   *(int *)(&UNK_1433983a8 + (longlong)puVar48 * 4)))
                                   (&UNK_1433983a8 +
                                    *(int *)(&UNK_1433983a8 + (longlong)puVar48 * 4));
      return pfVar20;
    case (undefined *)0x6:
      goto code_r0x000141b6f965;
    case (undefined *)0x7:
      break;
    case (undefined *)0x8:
code_r0x000141b6fa43:
      pfVar23 = param_1;
      break;
    case (undefined *)0x9:
      break;
    case (undefined *)0xa:
      goto code_r0x000141b6f9ed;
    case (undefined *)0xb:
      *(int *)(&UNK_14339839f + iVar49) = *(int *)(&UNK_14339839f + iVar49) + 0x43398390;
      pfVar23 = (float *)(&UNK_143398390 + iVar49);
      ppfVar47 = ppfVar45;
code_r0x000141b6fb77:
      *(undefined **)((longlong)ppfVar47 + -8) = &UNK_141b6fb80;
      fVar55 = (float)pub_142e32980(pfVar23,unaff_XMM9_Da);
      fVar53 = fVar53 * fVar55;
      fVar55 = 0.0;
      goto code_r0x000141b6fbef;
    case (undefined *)0xc:
      *(float ***)((longlong)ppfVar45 + -8) = ppfVar45;
      return (float *)&UNK_143398390;
    case (undefined *)0xd:
      break;
    case (undefined *)0xe:
      goto code_r0x000141b6f9c6;
    case (undefined *)0xf:
      *(int *)((longlong)pfVar23 + 0x36) = *(int *)((longlong)pfVar23 + 0x36) + (int)pfVar23;
      goto code_r0x000141b6f92f;
    case (undefined *)0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined *)0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000141b6fbe6:
    fVar53 = unaff_XMM11._0_4_;
    *(undefined **)((longlong)ppfVar45 + -8) = &UNK_141b6fbef;
    fVar55 = (float)pub_142e32980();
    param_1 = pfVar23;
code_r0x000141b6fbef:
    *param_1 = fVar53;
    param_1[1] = unaff_XMM6_Da;
    param_1[2] = fVar55;
    return param_1;
  case (float *)0x5c:
    ppfVar45 = (float **)&puStack_50;
    pbVar50 = (byte *)((longlong)pfStack_58 + 0xf);
    pbVar50[0] = 0x28;
    pbVar50[1] = 0xc9;
    pbVar50[2] = 0xf3;
    pbVar50[3] = 0x41;
    goto code_r0x000141b6f897;
  case (float *)0x5d:
    ppfVar46 = (float **)&puStack_50;
    pbVar50 = (byte *)((longlong)pfStack_58 + 0xf);
    pbVar50[0] = 0x28;
    pbVar50[1] = 0xc9;
    pbVar50[2] = 0xf3;
    pbVar50[3] = 0x41;
    pfVar23 = pfStack_58;
    goto code_r0x000141b6fa13;
  }
code_r0x000141b6e92b:
  *(undefined8 *)((longlong)ppfVar32 + -8) = 0x141b6e930;
  pfVar23 = (float *)pdb_142d8f140(pfVar28);
  pfVar17 = param_1;
code_r0x000141b6e936:
  *(float **)(param_1 + 2) = pfVar23;
  *(byte *)pfVar17 = 1;
  return pfVar17;
  while( true ) {
    *(ulonglong *)(param_2 + 10) = uVar16;
    pbVar50 = (byte *)((longlong)pfVar27 + uVar16 + 1);
    uVar16 = uVar16 + 1;
code_r0x000141b6d7c6:
    if (pbVar50 == (byte *)0x1) break;
code_r0x000141b6d7a6:
    bVar9 = UNRECOVERED_JUMPTABLE_00[-1][uVar16 + 0xf];
    if ((0x20 < (ulonglong)bVar9) || ((0x100002600U >> ((ulonglong)bVar9 & 0x3f) & 1) == 0)) {
      if (bVar9 == 0x7d) {
        *(ulonglong *)(param_2 + 10) = uVar16;
        return param_1;
      }
      uStack_30 = (float *)0xa;
      goto code_r0x000141b6d88d;
    }
  }
code_r0x000141b6d884:
  uStack_30 = (float *)0x3;
code_r0x000141b6d88d:
  pfStack_60 = (float *)0x141b6d897;
  pfStack_28 = (float *)pdb_142d855a0(param_2,&uStack_30);
LAB_141b6d8b6:
  *(float **)(param_1 + 2) = pfStack_28;
  *param_1 = 9.80909e-45;
  return param_1;
  while( true ) {
    bVar51 = (0x100002600U >> ((ulonglong)pbVar50 & 0x3f) & 1) != 0;
code_r0x000141b6da34:
    pfVar23 = unaff_RBX;
    if (!bVar51) goto code_r0x000141b6da65;
code_r0x000141b6da36:
    *(float **)(unaff_RBX + 10) = pfVar17;
    pbVar50 = (byte *)((longlong)pfVar27 + (longlong)pfVar17) + 1;
    pfVar17 = (float *)((longlong)pfVar17 + 1);
code_r0x000141b6da44:
    if (pbVar50 == (byte *)0x1) break;
code_r0x000141b6da24:
    pbVar50 = (byte *)(ulonglong)(byte)(UNRECOVERED_JUMPTABLE_00[-1] + 0xf)[(longlong)pfVar17];
    pfVar23 = unaff_RBX;
    if ((byte *)0x20 < pbVar50) goto code_r0x000141b6da65;
  }
code_r0x000141b6da4a:
  uStack_38 = 3;
  ppfVar29 = &pfStack_58;
code_r0x000141b6da58:
  *(undefined8 *)((longlong)ppfVar29 + -8) = 0x141b6da5d;
  pfVar17 = (float *)pdb_142d855a0();
code_r0x000141b6da5d:
  *(float **)(param_1 + 2) = pfVar17;
  pfVar17 = (float *)0x1;
code_r0x000141b6da63:
  bVar9 = (byte)pfVar17;
code_r0x000141b6daa4:
  *(byte *)param_1 = bVar9;
  return param_1;
}

