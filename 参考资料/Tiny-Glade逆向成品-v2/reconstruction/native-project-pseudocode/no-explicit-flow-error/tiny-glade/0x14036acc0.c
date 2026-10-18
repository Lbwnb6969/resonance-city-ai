// VA 0x14036acc0, PDB extent 3175 bytes
// tiny_glade::crash_pickup::server::run
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/server.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::crash_pickup::server::run
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/server.rs
   Extent: 3175 */

undefined8 *
pdb_14036acc0(undefined8 *param_1,undefined8 param_2,byte *param_3,ulonglong *param_4,
             ulonglong param_5)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  ulonglong *puVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 uVar9;
  byte *pbStack_550;
  byte *pbStack_548;
  byte *pbStack_540;
  byte *pbStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte *pbStack_88;
  byte *pbStack_80;
  ulonglong *puStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puStack_78 = param_4;
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(0x260,8);
  if (pbStack_50 == (byte *)0x0) {
    uStack_44 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x260);
  }
  pbStack_50[0] = 1;
  pbStack_50[1] = 0;
  pbStack_50[2] = 0;
  pbStack_50[3] = 0;
  pbStack_50[4] = 0;
  pbStack_50[5] = 0;
  pbStack_50[6] = 0;
  pbStack_50[7] = 0;
  pbStack_50[8] = 1;
  pbStack_50[9] = 0;
  pbStack_50[10] = 0;
  pbStack_50[0xb] = 0;
  pbStack_50[0xc] = 0;
  pbStack_50[0xd] = 0;
  pbStack_50[0xe] = 0;
  pbStack_50[0xf] = 0;
  pbStack_50[0x10] = 0;
  pbStack_50[0x18] = 0;
  pbStack_50[0x19] = 0;
  pbStack_50[0x1a] = 0;
  pbStack_50[0x1b] = 0;
  pbStack_50[0x1c] = 0;
  pbStack_50[0x1d] = 0;
  pbStack_50[0x1e] = 0;
  pbStack_50[0x1f] = 0x80;
  pdb_14007ee60();
  pbStack_58 = pub_1406abab0(0x18,8);
  if (pbStack_58 == (byte *)0x0) {
    uStack_45 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  pbStack_58[0] = 1;
  pbStack_58[1] = 0;
  pbStack_58[2] = 0;
  pbStack_58[3] = 0;
  pbStack_58[4] = 0;
  pbStack_58[5] = 0;
  pbStack_58[6] = 0;
  pbStack_58[7] = 0;
  pbStack_58[8] = 1;
  pbStack_58[9] = 0;
  pbStack_58[10] = 0;
  pbStack_58[0xb] = 0;
  pbStack_58[0xc] = 0;
  pbStack_58[0xd] = 0;
  pbStack_58[0xe] = 0;
  pbStack_58[0xf] = 0;
  pbStack_58[0x12] = 2;
  pbStack_58[0x10] = 0;
  pbStack_58[0x11] = 2;
  uStack_41 = 1;
  pbStack_550 = (byte *)pdb_140f4eda0(param_2,param_3);
  pbStack_60 = pbStack_550;
  pdb_140f60120(&uStack_310,param_2,param_3);
  pbStack_68 = uStack_310;
  pbStack_70 = uStack_308;
  uStack_a8 = uStack_300;
  uStack_a0 = (undefined4)uStack_2f8;
  uStack_9c = uStack_2f8._4_4_;
  if (pbStack_60 != (byte *)0x0) {
    uStack_41 = 1;
    pdb_1404b38e0(&pbStack_550);
  }
  uVar7 = pdb_1400ca000(param_2);
  pbVar8 = param_3;
  if ((uVar7 & 1) == 0) {
    uStack_310 = param_3;
    pbVar8 = (byte *)pdb_1407eeb30(&uStack_310,1);
    puVar5 = _DAT_143ca8e90;
    if (pbVar8 == (byte *)0x0) {
      uStack_528 = CONCAT44(uStack_9c,uStack_a0);
      uStack_530 = uStack_a8;
      pbStack_88 = (byte *)*puStack_78;
      pbStack_80 = (byte *)puStack_78[1];
      uStack_c8 = (undefined4)puStack_78[2];
      uStack_c4 = *(undefined4 *)((longlong)puStack_78 + 0x14);
      uStack_c0 = (undefined4)puStack_78[3];
      uStack_bc = *(undefined4 *)((longlong)puStack_78 + 0x1c);
      pbStack_550 = (byte *)0x1;
      pbStack_540 = pbStack_68;
      pbStack_538 = pbStack_70;
      pbStack_548 = param_3;
      if (2 < *_DAT_143ca8e90) {
        uStack_310 = (byte *)0x0;
        uStack_308 = &UNK_142f44078;
        uStack_300 = 0x20;
        uStack_2f8 = 0;
        uStack_2f0 = &UNK_142f4404b;
        uStack_2e8 = (byte *)0x2c;
        uStack_2e0 = 3;
        puStack_2d8 = &UNK_142f44078;
        uStack_2d0 = 0x20;
        uStack_2c8 = 0xd500000001;
        puStack_2c0 = &UNK_142f440e8;
        uStack_2b8 = 0x75;
        uStack_43 = 1;
        pdb_140f332f0(&uStack_47,&uStack_310);
      }
      LOCK();
      lVar1 = *(longlong *)pbStack_50;
      *(longlong *)pbStack_50 = *(longlong *)pbStack_50 + 1;
      UNLOCK();
      if (*(longlong *)pbStack_50 == 0 || SCARRY8(lVar1,1) != *(longlong *)pbStack_50 < 0) {
LAB_14036b492:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      LOCK();
      lVar1 = *(longlong *)pbStack_58;
      *(longlong *)pbStack_58 = *(longlong *)pbStack_58 + 1;
      UNLOCK();
      if (*(longlong *)pbStack_58 == 0 || SCARRY8(lVar1,1) != *(longlong *)pbStack_58 < 0)
      goto LAB_14036b492;
      uStack_300 = CONCAT44(uStack_c4,uStack_c8);
      uStack_2f8 = CONCAT44(uStack_bc,uStack_c0);
      uStack_2f0 = pbStack_50;
      uStack_2e8 = pbStack_58;
      uStack_310 = pbStack_88;
      uStack_308 = pbStack_80;
      pdb_14007ee60();
      pbVar8 = pub_1406abab0(0x30,8);
      if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      *(undefined4 *)(pbVar8 + 0x20) = (undefined4)uStack_2f0;
      *(undefined4 *)(pbVar8 + 0x24) = uStack_2f0._4_4_;
      *(undefined4 *)(pbVar8 + 0x28) = (undefined4)uStack_2e8;
      *(undefined4 *)(pbVar8 + 0x2c) = uStack_2e8._4_4_;
      *(undefined4 *)(pbVar8 + 0x10) = (undefined4)uStack_300;
      *(undefined4 *)(pbVar8 + 0x14) = uStack_300._4_4_;
      *(undefined4 *)(pbVar8 + 0x18) = (undefined4)uStack_2f8;
      *(undefined4 *)(pbVar8 + 0x1c) = uStack_2f8._4_4_;
      *(undefined4 *)pbVar8 = (undefined4)uStack_310;
      *(undefined4 *)(pbVar8 + 4) = uStack_310._4_4_;
      *(undefined4 *)(pbVar8 + 8) = (undefined4)uStack_308;
      *(undefined4 *)(pbVar8 + 0xc) = uStack_308._4_4_;
      uStack_a8 = 0x8000000000000000;
      uStack_42 = 1;
      uVar9 = 0;
      pbStack_60 = pbVar8;
      pdb_140228a00(&uStack_310,&uStack_a8,0);
      pbVar8 = uStack_310;
      if (uStack_310 == (byte *)0x0) {
        uStack_310 = uStack_308;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_142f88ab0,0x16,&uStack_310,&UNK_142f88d08,&UNK_142f88b40,uVar9);
      }
      CloseHandle();
      LOCK();
      *(longlong *)pbVar8 = *(longlong *)pbVar8 + -1;
      UNLOCK();
      if (*(longlong *)pbVar8 == 0) {
        pdb_140f4a410(&uStack_310);
      }
      LOCK();
      *(longlong *)uStack_308 = *(longlong *)uStack_308 + -1;
      UNLOCK();
      if (*(longlong *)uStack_308 == 0) {
        uStack_42 = 1;
        pdb_140f4a2d0(&uStack_308);
      }
      uStack_42 = 0;
      pdb_1407ebf00(&uStack_310,&pbStack_550,pbStack_60,&UNK_142f44128,0x143cb2b9d,param_5 / 1000,
                    ((int)param_5 + (int)(param_5 / 1000) * -1000) * 1000000);
      if (uStack_310 == (byte *)0x6) {
        pbVar8 = (byte *)0xa;
      }
      else {
        uStack_b8 = (undefined4)uStack_2f8;
        uStack_b4 = uStack_2f8._4_4_;
        uStack_b0 = (undefined4)uStack_2f0;
        uStack_ac = uStack_2f0._4_4_;
        pbVar8 = uStack_310;
        unaff_XMM6_Qa = uStack_308;
        unaff_XMM6_Qb = uStack_300;
      }
      uStack_46 = 0;
      pdb_1404bb340(&pbStack_550);
      if ((int)pbVar8 == 10) {
        if (3 < *puVar5) {
          uStack_310 = (byte *)0x0;
          uStack_308 = &UNK_142f44078;
          uStack_300 = 0x20;
          uStack_2f8 = 0;
          uStack_2f0 = &UNK_142f4404b;
          uStack_2e8 = (byte *)0x2c;
          uStack_2e0 = 4;
          puStack_2d8 = &UNK_142f44078;
          uStack_2d0 = 0x20;
          uStack_2c8 = 0xea00000001;
          puStack_2c0 = &UNK_142f4402c;
          uStack_2b8 = 0x3f;
          uStack_41 = 0;
          pdb_140f332f0(&uStack_47,&uStack_310);
        }
        pbVar8 = pbStack_50 + 8;
        LOCK();
        if (*(longlong *)pbVar8 == 1) {
          pbVar8[0] = 0xff;
          pbVar8[1] = 0xff;
          pbVar8[2] = 0xff;
          pbVar8[3] = 0xff;
          pbVar8[4] = 0xff;
          pbVar8[5] = 0xff;
          pbVar8[6] = 0xff;
          pbVar8[7] = 0xff;
        }
        UNLOCK();
        if ((*(longlong *)pbVar8 == 1) &&
           (lVar1 = *(longlong *)pbStack_50, pbVar8 = pbStack_50, pbVar8[8] = 1, pbVar8[9] = 0,
           pbVar8[10] = 0, pbVar8[0xb] = 0, pbVar8[0xc] = 0, pbVar8[0xd] = 0, pbVar8[0xe] = 0,
           pbVar8[0xf] = 0, lVar1 == 1)) {
          pub_142e32760(&uStack_310,pbStack_50 + 0x18,0x248);
          pbVar6 = uStack_310;
          pbVar8[0x18] = 0;
          pbVar8[0x19] = 0;
          pbVar8[0x1a] = 0;
          pbVar8[0x1b] = 0;
          pbVar8[0x1c] = 0;
          pbVar8[0x1d] = 0;
          pbVar8[0x1e] = 0;
          pbVar8[0x1f] = 0x80;
          pbVar8 = pbStack_58 + 8;
          LOCK();
          if (*(longlong *)pbVar8 == 1) {
            pbVar8[0] = 0xff;
            pbVar8[1] = 0xff;
            pbVar8[2] = 0xff;
            pbVar8[3] = 0xff;
            pbVar8[4] = 0xff;
            pbVar8[5] = 0xff;
            pbVar8[6] = 0xff;
            pbVar8[7] = 0xff;
          }
          UNLOCK();
          if ((*(longlong *)pbVar8 == 1) &&
             (lVar1 = *(longlong *)pbStack_58, pbStack_58[8] = 1, pbStack_58[9] = 0,
             pbStack_58[10] = 0, pbStack_58[0xb] = 0, pbStack_58[0xc] = 0, pbStack_58[0xd] = 0,
             pbStack_58[0xe] = 0, pbStack_58[0xf] = 0, lVar1 == 1)) {
            bVar2 = pbStack_58[0x11];
            bVar3 = pbStack_58[0x12];
            pbStack_58[0x11] = 2;
            pbStack_58[0x12] = 2;
            if (!SBORROW8(0,(longlong)uStack_310)) {
              pub_142e32760(&pbStack_550,&uStack_308,0x240);
            }
            *param_1 = pbVar6;
            pub_142e32760(param_1 + 1,&pbStack_550,0x240);
            *(byte *)(param_1 + 0x49) = bVar2;
            *(byte *)((longlong)param_1 + 0x249) = bVar3;
            LOCK();
            *(longlong *)pbStack_58 = *(longlong *)pbStack_58 + -1;
            UNLOCK();
            if (*(longlong *)pbStack_58 == 0) {
              uStack_45 = 0;
              pdb_140315620(&pbStack_58);
            }
            LOCK();
            *(longlong *)pbStack_50 = *(longlong *)pbStack_50 + -1;
            UNLOCK();
            if (*(longlong *)pbStack_50 != 0) {
              return param_1;
            }
            uStack_44 = 0;
            pdb_1403156e0(&pbStack_50);
            return param_1;
          }
          pdb_142dc8110(&UNK_142f440c0,0xd,&UNK_142f440d0);
        }
        else {
          uStack_41 = 0;
          pdb_142dc8110(&UNK_142f44098,0xe,&UNK_142f440a8);
        }
        goto LAB_14036b492;
      }
      goto LAB_14036b35d;
    }
    pdb_1407eed30(&uStack_310);
  }
  if (((ulonglong)pbStack_68 & 0x7fffffffffffffff) != 0) {
    pub_1406abac0(pbStack_70,(ulonglong)pbStack_68,1);
  }
  unaff_XMM6_Qb = 0;
  unaff_XMM6_Qa = pbVar8;
  if (*puStack_78 == 0) {
    pbVar8 = (byte *)0x1;
  }
  else {
    pbVar8 = (byte *)0x1;
    pub_1406abac0((byte *)puStack_78[1],*puStack_78,1);
  }
LAB_14036b35d:
  param_1[2] = unaff_XMM6_Qa;
  param_1[3] = unaff_XMM6_Qb;
  *(undefined4 *)(param_1 + 4) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_b4;
  *(undefined4 *)(param_1 + 5) = uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_ac;
  param_1[1] = pbVar8;
  *param_1 = 0x8000000000000001;
  LOCK();
  *(longlong *)pbStack_58 = *(longlong *)pbStack_58 + -1;
  UNLOCK();
  if (*(longlong *)pbStack_58 == 0) {
    uStack_45 = 0;
    pdb_140315620(&pbStack_58);
  }
  LOCK();
  *(longlong *)pbStack_50 = *(longlong *)pbStack_50 + -1;
  UNLOCK();
  if (*(longlong *)pbStack_50 == 0) {
    uStack_44 = 0;
    pdb_1403156e0(&pbStack_50);
  }
  return param_1;
}

