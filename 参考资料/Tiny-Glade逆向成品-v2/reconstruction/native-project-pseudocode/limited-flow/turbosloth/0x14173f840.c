// VA 0x14173f840, PDB extent 646 bytes
// turbosloth::asset::impl$24::run::async_block$0<asset_pipe::texture::TextureAssetList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset_pipe::texture::TextureAssetList> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000141740459) overlaps instruction at (ram,0x000141740456)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<asset_pipe::texture::TextureAssetList,enum2$<core::convert::Infallible>,turbosloth::asset::StoreAssetRecipe<asset_pipe::texture::TextureAssetList>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 646 */

undefined8 * pdb_14173f840(undefined8 *param_1,longlong *param_2)

{
  undefined *puVar1;
  undefined *arg0;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  longlong unaff_RBX;
  undefined8 *puVar15;
  undefined4 unaff_EDI;
  longlong *plVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  longlong lStackX_18;
  longlong lStackX_20;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  undefined8 in_stack_00000048;
  longlong in_stack_00000050;
  char cStack0000000000000058;
  char cStack0000000000000059;
  char cStack000000000000005a;
  char cStack000000000000005b;
  char cStack000000000000005c;
  char cStack000000000000005d;
  char cStack000000000000005e;
  char cStack000000000000005f;
  char cStack0000000000000060;
  char cStack0000000000000061;
  char cStack0000000000000062;
  char cStack0000000000000063;
  char cStack0000000000000064;
  char cStack0000000000000065;
  char cStack0000000000000066;
  char cStack0000000000000067;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  ulonglong in_stack_00000098;
  byte *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  longlong *in_stack_000000b8;
  undefined *in_stack_000000c0;
  ulonglong in_stack_000000c8;
  byte *in_stack_000000d0;
  longlong in_stack_000000d8;
  longlong *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  char cStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 in_stack_000001d0;
  undefined4 uStack00000000000001d4;
  longlong *in_stack_000001e8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined *puStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined *puStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined *puStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  undefined *puStack_60;
  longlong lStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  
  puVar15 = (undefined8 *)auStack_e8;
  uStack_28 = 0xfffffffffffffffe;
  lVar10 = (longlong)*(int *)(&UNK_14332bdc8 + (ulonglong)*(byte *)(param_2 + 0xf) * 4);
  bVar17 = &UNK_14332bdc8 + lVar10 == (undefined *)0x0;
  plStack_38 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0xf)) {
  case 0:
    lStack_a8 = param_2[2];
    lStack_b8 = *param_2;
    puStack_b0 = (undefined *)param_2[1];
    uStack_a0 = (undefined4)param_2[3];
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_98 = (undefined4)param_2[4];
    uStack_94 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_90 = (undefined4)param_2[5];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_88 = (undefined4)param_2[6];
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[7] = lStack_b8;
    param_2[8] = (longlong)puStack_b0;
    param_2[0xb] = param_2[4];
    param_2[0xc] = param_2[5];
    param_2[0xd] = param_2[6];
    param_2[9] = lStack_a8;
    param_2[10] = param_2[3];
    *(undefined1 *)(param_2 + 0xe) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    uStack_f0 = 0x14173f9ef;
    pdb_142dc8570(&UNK_14332ba20);
  case 2:
                    /* WARNING: Subroutine does not return */
    uStack_f0 = 0x14173f9e3;
    pdb_142dc8590(&UNK_14332ba20);
  case 3:
    plStack_40 = param_2 + 7;
    if ((char)param_2[0xe] != '\0') {
      plStack_30 = plStack_40;
      if ((char)param_2[0xe] != '\x01') {
                    /* WARNING: Subroutine does not return */
        uStack_f0 = 0x14173fa03;
        pdb_142dc8590(&UNK_14332bb50);
      }
                    /* WARNING: Subroutine does not return */
      uStack_f0 = 0x14173f9d4;
      pdb_142dc8570(&UNK_14332bb50);
    }
    break;
  case 4:
    in_stack_000001e8 = param_2;
                    /* WARNING: Could not emulate address calculation at 0x00014173fb02 */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (undefined8 *)
              (*(code *)(&UNK_14332bdc8 +
                        *(int *)(&UNK_14332bdc8 + (longlong)(&UNK_14332bdc8 + lVar10) * 4)))();
    return puVar11;
  case 5:
    *(int *)(lVar10 + 0xd07af1b3) = *(int *)(lVar10 + 0xd07af1b3) + (int)param_2;
                    /* WARNING: Subroutine does not return */
    uStack_f0 = 0x14173fcd6;
    pdb_142dc8590();
  case 6:
    (&UNK_14332bd55)[lVar10] = (&UNK_14332bd55)[lVar10] + -0x38;
                    /* WARNING: Subroutine does not return */
    uStack_f0 = 0x14173fcc7;
    pdb_142dc8570();
  case 7:
    uStack_f0 = 0x14173fb5f;
    pub_142e32760(&UNK_14332bdc8,unaff_EDI);
    *(undefined1 *)(unaff_RBX + 0x1d0) = 0;
    lVar10 = *(longlong *)(unaff_RBX + 0xe8);
    uStack_f0 = 0x14173fba5;
    pub_142e32760(&stack0x000000e0,unaff_RBX + 0xf0,0xc0);
    in_stack_000001b8 = *(undefined8 *)(unaff_RBX + 0x1b0);
    in_stack_000001c0 = *(undefined8 *)(unaff_RBX + 0x1b8);
    in_stack_000001c8 = *(undefined4 *)(unaff_RBX + 0x1c0);
    uStack00000000000001cc = *(undefined4 *)(unaff_RBX + 0x1c4);
    in_stack_000001d0 = *(undefined4 *)(unaff_RBX + 0x1c8);
    uStack00000000000001d4 = *(undefined4 *)(unaff_RBX + 0x1cc);
    uStack_f0 = 0x14173fbcd;
    pdb_14098a860(&stack0x000001b8);
    uStack_f0 = 0x14173fbe4;
    pub_142e32760(&puStack_c8,&stack0x000000e0,0xc0);
    lVar4 = (longlong)in_stack_000001e8;
    *(undefined1 *)((longlong)in_stack_000001e8 + 0x1d0) = 1;
    if (SBORROW8(0,lVar10)) {
      *param_1 = 2;
      uVar7 = 3;
    }
    else {
      uStack_f0 = 0x14173fc1b;
      pub_142e32760(&stack0x000000f8,&puStack_c8,0xc0);
      in_stack_000000e0 = (longlong *)0x1;
      in_stack_000000e8 = 1;
      uStack_f0 = 0x14173fc3d;
      _cStack00000000000000f0 = lVar10;
      pdb_14007ee60();
      uStack_f0 = 0x14173fc4c;
      pbVar12 = pub_1406abab0(0xd8,8);
      if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        uStack_f0 = 0x14173fca5;
        pdb_142dc7e11(8,0xd8);
      }
      uStack_f0 = 0x14173fc69;
      pub_142e32760(pbVar12,&stack0x000000e0,0xd8);
      *param_1 = 0;
      param_1[1] = pbVar12;
      param_1[2] = &UNK_14332bab8;
      uVar7 = 1;
    }
    *(undefined1 *)(lVar4 + 0x1d8) = uVar7;
    return param_1;
  case 8:
    in_stack_000000e0 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x11]) {
    case '\0':
      lStackX_18 = *param_2;
      lStackX_20 = param_2[1];
      lStack_58 = param_2[4];
      puStack_50 = (undefined *)param_2[5];
      lStack_48 = param_2[6];
      plStack_40 = (longlong *)param_2[7];
      uStack_f0 = 0x14173fe55;
      pdb_141748860(&stack0x00000058,&lStackX_18,&lStack_58);
      lStack_b8 = (longlong)_cStack0000000000000058;
      puStack_b0 = _cStack0000000000000060;
      lStack_a8 = _uStack0000000000000068;
      uStack_a0 = uStack0000000000000070;
      uStack_9c = uStack0000000000000074;
      uStack_98 = uStack0000000000000078;
      uStack_94 = uStack000000000000007c;
      uStack_90 = uStack0000000000000080;
      uStack_8c = uStack0000000000000084;
      uStack_88 = uStack0000000000000088;
      uStack_84 = uStack000000000000008c;
      uStack_80 = uStack0000000000000090;
      uStack_7c = uStack0000000000000094;
      puStack_78 = (undefined *)in_stack_00000098;
      in_stack_000000e0[0x10] = in_stack_00000098;
      *(undefined4 *)(in_stack_000000e0 + 0xe) = uStack0000000000000088;
      *(undefined4 *)((longlong)in_stack_000000e0 + 0x74) = uStack000000000000008c;
      *(undefined4 *)(in_stack_000000e0 + 0xf) = uStack0000000000000090;
      *(undefined4 *)((longlong)in_stack_000000e0 + 0x7c) = uStack0000000000000094;
      *(undefined4 *)(in_stack_000000e0 + 0xc) = uStack0000000000000078;
      *(undefined4 *)((longlong)in_stack_000000e0 + 100) = uStack000000000000007c;
      *(undefined4 *)(in_stack_000000e0 + 0xd) = uStack0000000000000080;
      *(undefined4 *)((longlong)in_stack_000000e0 + 0x6c) = uStack0000000000000084;
      *(undefined4 *)(in_stack_000000e0 + 10) = uStack0000000000000068;
      *(undefined4 *)((longlong)in_stack_000000e0 + 0x54) = uStack000000000000006c;
      *(undefined4 *)(in_stack_000000e0 + 0xb) = uStack0000000000000070;
      *(undefined4 *)((longlong)in_stack_000000e0 + 0x5c) = uStack0000000000000074;
      in_stack_000000e0[8] = (longlong)_cStack0000000000000058;
      in_stack_000000e0[9] = (longlong)_cStack0000000000000060;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      uStack_f0 = 0x141740485;
      pdb_142dc8570(&UNK_14332ba20);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      uStack_f0 = 0x141740479;
      pdb_142dc8590(&UNK_14332ba20);
    }
    if ((char)in_stack_000000e0[0x10] == '\0') {
      in_stack_000000c8 = in_stack_000000e0[8];
      in_stack_000000d0 = (byte *)in_stack_000000e0[9];
      puVar1 = (undefined *)in_stack_000000e0[10];
      lStackX_18 = in_stack_000000e0[0xc];
      lStackX_20 = in_stack_000000e0[0xd];
      uStack_f0 = 0x14173ff09;
      pdb_141c2f360(&stack0x00000058,lStackX_18 + 0x10,in_stack_000000d0,puVar1);
      arg0 = in_stack_000000c0;
      plVar16 = in_stack_000000b8;
      uVar6 = in_stack_000000b0;
      uVar5 = in_stack_000000a8;
      pbVar12 = in_stack_000000a0;
      uVar2 = in_stack_00000098;
      uVar14 = uStack0000000000000090;
      lVar10 = _uStack0000000000000068;
      lVar4 = lStackX_20;
      auVar18[0] = -(cStack0000000000000058 == DAT_142f5c7c0);
      auVar18[1] = -(cStack0000000000000059 == UNK_142f5c7c1);
      auVar18[2] = -(cStack000000000000005a == UNK_142f5c7c2);
      auVar18[3] = -(cStack000000000000005b == UNK_142f5c7c3);
      auVar18[4] = -(cStack000000000000005c == UNK_142f5c7c4);
      auVar18[5] = -(cStack000000000000005d == UNK_142f5c7c5);
      auVar18[6] = -(cStack000000000000005e == UNK_142f5c7c6);
      auVar18[7] = -(cStack000000000000005f == UNK_142f5c7c7);
      auVar18[8] = -(cStack0000000000000060 == UNK_142f5c7c8);
      auVar18[9] = -(cStack0000000000000061 == UNK_142f5c7c9);
      auVar18[10] = -(cStack0000000000000062 == UNK_142f5c7ca);
      auVar18[0xb] = -(cStack0000000000000063 == UNK_142f5c7cb);
      auVar18[0xc] = -(cStack0000000000000064 == UNK_142f5c7cc);
      auVar18[0xd] = -(cStack0000000000000065 == UNK_142f5c7cd);
      auVar18[0xe] = -(cStack0000000000000066 == UNK_142f5c7ce);
      auVar18[0xf] = -(cStack0000000000000067 == UNK_142f5c7cf);
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
        uStack_f0 = 0x14173ff38;
        pdb_14098a860(&lStackX_18);
        if (in_stack_000000c8 != 0) {
          uStack_f0 = 0x14173ff57;
          pub_1406abac0(in_stack_000000d0,in_stack_000000c8,1);
        }
        *(undefined1 *)(in_stack_000000e0 + 0x10) = 1;
code_r0x000141740265:
        plVar16 = in_stack_000000e0;
        uStack_f0 = 0x141740271;
        _cStack0000000000000058 = (longlong *)lVar10;
        pdb_14007ee60();
        uStack_f0 = 0x141740280;
        pbVar12 = pub_1406abab0(8,8);
        if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          uStack_f0 = 0x141740363;
          pdb_142dc7e11(8,8);
        }
        *(longlong *)pbVar12 = lVar10;
        uRam000000004332bdc8 = 1;
        puRam000000004332bdd8 = &UNK_1430712c0;
      }
      else {
        plStack_30 = (longlong *)_uStack0000000000000080;
        uStack_28 = _uStack0000000000000088;
        plStack_40 = (longlong *)_uStack0000000000000070;
        plStack_38 = _uStack0000000000000078;
        lStack_58 = (longlong)_cStack0000000000000058;
        puStack_50 = _cStack0000000000000060;
        lStack_48 = _uStack0000000000000068;
        if (lStackX_20 == 0) {
          uVar14 = (undefined4)CONCAT71((int7)((ulonglong)_cStack0000000000000060 >> 8),1);
        }
        else {
          lVar10 = lStackX_20 + 0x38;
          LOCK();
          bVar17 = *(char *)(lStackX_20 + 0x38) == '\0';
          if (bVar17) {
            *(char *)(lStackX_20 + 0x38) = '\x01';
          }
          UNLOCK();
          if (!bVar17) {
            _cStack00000000000000f0 = CONCAT16(1,_cStack00000000000000f0);
            _cStack00000000000000f0 = CONCAT17(1,_cStack00000000000000f0);
            uStack_f0 = 0x1417403b0;
            pdb_142dc6be0(lVar10);
          }
          puVar3 = _DAT_143ca8f38;
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            uVar9 = 0;
            cVar8 = *(char *)(lVar4 + 0x39);
          }
          else {
            _cStack00000000000000f0 = CONCAT16(1,_cStack00000000000000f0);
            _cStack00000000000000f0 = CONCAT17(1,_cStack00000000000000f0);
            uStack_f0 = 0x1417403c9;
            uVar9 = pdb_142dc79e0();
            uVar9 = uVar9 ^ 1;
            cVar8 = *(char *)(lVar4 + 0x39);
          }
          if (cVar8 != '\0') {
            uVar2 = (ulonglong)_cStack0000000000000060 >> 8;
            _cStack0000000000000060 = (undefined *)CONCAT71((int7)uVar2,(char)uVar9);
            puStack_c8 = &UNK_14332bae8;
                    /* WARNING: Subroutine does not return */
            uStack_f0 = 0x141740410;
            _cStack0000000000000058 = (longlong *)lVar10;
            pdb_142dc8170(&UNK_14332b8d0,0x2b,&stack0x00000058,&UNK_14332b940);
          }
          uStack00000000000000f4 = (undefined4)(_cStack00000000000000f0 >> 0x20);
          _cStack00000000000000f0 = CONCAT44(uStack00000000000000f4,uVar9);
          uStack_f0 = 0x141740071;
          _cStack0000000000000058 = (longlong *)lStack_58;
          _cStack0000000000000060 = puStack_50;
          _uStack0000000000000068 = lStack_48;
          _uStack0000000000000070 = (longlong)plStack_40;
          _uStack0000000000000078 = plStack_38;
          _uStack0000000000000080 = (byte *)plStack_30;
          _uStack0000000000000088 = (undefined *)uStack_28;
          uStack0000000000000090 = uVar14;
          in_stack_00000098 = uVar2;
          in_stack_000000a0 = pbVar12;
          in_stack_000000a8 = uVar5;
          in_stack_000000b0 = uVar6;
          in_stack_000000d8 = lVar10;
          pdb_1417b89d0(lVar4 + 0x40,&stack0x00000058);
          if ((cStack00000000000000f0 == '\0') && ((*puVar3 & 0x7fffffffffffffff) != 0)) {
            _cStack00000000000000f0 = CONCAT16(1,(int6)_cStack00000000000000f0);
            _cStack00000000000000f0 = (ulonglong)_cStack00000000000000f0;
            uStack_f0 = 0x141740438;
            cVar8 = pdb_142dc79e0();
            if (cVar8 == '\0') {
              *(undefined1 *)(lVar4 + 0x39) = 1;
            }
          }
          uVar14 = 0;
          LOCK();
          cVar8 = *(char *)(lVar4 + 0x38);
          *(char *)(lVar4 + 0x38) = '\0';
          UNLOCK();
          if (cVar8 == '\x02') {
            _cStack00000000000000f0 = CONCAT16(1,(int6)_cStack00000000000000f0);
            _cStack00000000000000f0 = (ulonglong)_cStack00000000000000f0;
            uStack_f0 = 0x1417400af;
            pdb_142dc6ca0();
            uVar14 = 0;
          }
        }
        _cStack00000000000000f0 = CONCAT44(uStack00000000000000f4,uVar14);
        pbStack_68 = in_stack_000000d0;
        in_stack_00000038 = 0;
        in_stack_00000040 = 1;
        in_stack_00000048 = 0;
        _uStack0000000000000068 = 0x60000020;
        _cStack0000000000000058 = &stack0x00000038;
        _cStack0000000000000060 = &UNK_14332b508;
        uStack_f0 = 0x141740122;
        puStack_60 = puVar1;
        cVar8 = pdb_140f58310(&pbStack_68,&stack0x00000058);
        uVar5 = in_stack_00000048;
        if (cVar8 != '\0') {
          puStack_c8 = &UNK_14332b5e0;
                    /* WARNING: Subroutine does not return */
          uStack_f0 = 0x141740394;
          pdb_142dc8170(&UNK_14332b538,0x37,(longlong)&stack0x000000e8 + 7,&UNK_14332b890);
        }
        in_stack_000000d8 = in_stack_00000038;
        if (plVar16 == (longlong *)0x0) {
          pbVar13 = (byte *)0x0;
          arg0 = puVar1;
          lVar10 = in_stack_00000040;
        }
        else {
          _cStack0000000000000058 = plVar16;
          _cStack0000000000000060 = arg0;
          in_stack_00000050 = in_stack_00000040;
          if (arg0 == (undefined *)0x0) {
            pbVar13 = (byte *)0x1;
          }
          else {
            uStack_f0 = 0x141740173;
            pdb_14007ee60();
            uStack_f0 = 0x141740180;
            pbVar13 = pub_1406abab0((ulonglong)arg0,1);
            if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              uStack_f0 = 0x141740195;
              pdb_142dc7e11(1,arg0);
            }
          }
          uStack_f0 = 0x1417401bf;
          pub_142e32760(pbVar13,plVar16 + 2,arg0);
          LOCK();
          *_cStack0000000000000058 = *_cStack0000000000000058 + -1;
          UNLOCK();
          if (*_cStack0000000000000058 == 0) {
            uStack_f0 = 0x1417401d8;
            pdb_1406ed6a0(&stack0x00000058);
          }
          lVar10 = in_stack_00000050;
        }
        if ((cStack00000000000000f0 != '\0') && (uVar2 != 0)) {
          uStack_f0 = 0x141740201;
          pub_1406abac0(pbVar12,uVar2,1);
        }
        uStack_f0 = 0x14174020e;
        pdb_14098a860(&lStackX_18);
        lVar4 = in_stack_000000d8;
        if (in_stack_000000c8 != 0) {
          uStack_f0 = 0x141740234;
          pub_1406abac0(in_stack_000000d0,in_stack_000000c8,1);
        }
        plVar16 = in_stack_000000e0;
        *(undefined1 *)(in_stack_000000e0 + 0x10) = 1;
        if (SBORROW8(0,lVar4)) goto code_r0x000141740265;
        if (lVar4 == -0x7fffffffffffffff) {
          uRam000000004332bdc8 = 2;
          uVar7 = 3;
          goto code_r0x0001417402a5;
        }
        _cStack0000000000000058 = (longlong *)0x1;
        _cStack0000000000000060 = (undefined *)0x1;
        _uStack0000000000000068 = lVar4;
        _uStack0000000000000078 = (longlong *)uVar5;
        uStack_f0 = 0x141740301;
        _uStack0000000000000070 = lVar10;
        _uStack0000000000000080 = pbVar13;
        _uStack0000000000000088 = arg0;
        pdb_14007ee60();
        uStack_f0 = 0x141740310;
        pbVar12 = pub_1406abab0(0x38,8);
        if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          uStack_f0 = 0x141740422;
          pdb_142dc7e11(8,0x38);
        }
        *(undefined **)(pbVar12 + 0x30) = _uStack0000000000000088;
        *(longlong **)(pbVar12 + 0x20) = _uStack0000000000000078;
        *(byte **)(pbVar12 + 0x28) = _uStack0000000000000080;
        *(longlong *)(pbVar12 + 0x10) = _uStack0000000000000068;
        *(longlong *)(pbVar12 + 0x18) = _uStack0000000000000070;
        *(longlong **)pbVar12 = _cStack0000000000000058;
        *(undefined **)(pbVar12 + 8) = _cStack0000000000000060;
        puRam000000004332bdd8 = &UNK_14332ba38;
        uRam000000004332bdc8 = 0;
      }
      uVar7 = 1;
      in_stack_000000e0 = plVar16;
      pbRam000000004332bdd0 = pbVar12;
code_r0x0001417402a5:
      *(undefined1 *)(in_stack_000000e0 + 0x11) = uVar7;
      return (undefined8 *)0x4332bdc8;
    }
    bVar17 = (char)in_stack_000000e0[0x10] == '\x01';
  case 10:
    if (bVar17) {
                    /* WARNING: Subroutine does not return */
      uStack_f0 = 0x14174045b;
      pdb_142dc8570(&UNK_14332bb00);
    }
code_r0x00014174045e:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)puVar15 + -8) = 0x14174046a;
    pdb_142dc8590(&UNK_14332bb00);
  case 9:
    puVar15 = &uStack_f0;
    uStack_f0 = 0xdeb9001;
    goto code_r0x00014174045e;
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plStack_30 = param_2 + 7;
  lVar10 = *plStack_30;
  puStack_78 = (undefined *)param_2[8];
  lStack_70 = param_2[9];
  pbStack_68 = (byte *)param_2[10];
  puStack_60 = (undefined *)param_2[0xb];
  lStack_58 = param_2[0xc];
  puStack_50 = (undefined *)param_2[0xd];
  uStack_f0 = 0x14173f90f;
  pdb_14098a860(&pbStack_68);
  plVar16 = plStack_38;
  puStack_c8 = puStack_78;
  lStack_c0 = lStack_70;
  *(undefined1 *)(plStack_38 + 0xe) = 1;
  if (SBORROW8(0,lVar10)) {
    *param_1 = 2;
    uVar7 = 3;
  }
  else {
    puStack_50 = puStack_78;
    lStack_48 = lStack_70;
    pbStack_68 = (byte *)0x1;
    puStack_60 = (undefined *)0x1;
    uStack_f0 = 0x14173f954;
    lStack_58 = lVar10;
    pdb_14007ee60();
    uStack_f0 = 0x14173f963;
    pbVar12 = pub_1406abab0(0x28,8);
    if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      uStack_f0 = 0x14173f9b8;
      pdb_142dc7e11(8,0x28);
    }
    *(longlong *)(pbVar12 + 0x20) = lStack_48;
    *(longlong *)(pbVar12 + 0x10) = lStack_58;
    *(undefined **)(pbVar12 + 0x18) = puStack_50;
    *(byte **)pbVar12 = pbStack_68;
    *(undefined **)(pbVar12 + 8) = puStack_60;
    *param_1 = 0;
    param_1[1] = pbVar12;
    param_1[2] = &UNK_14332ba58;
    uVar7 = 1;
  }
  *(undefined1 *)(plVar16 + 0xf) = uVar7;
  return param_1;
}

