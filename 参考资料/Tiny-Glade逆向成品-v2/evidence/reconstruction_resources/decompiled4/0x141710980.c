// Matched PDB: turbosloth::asset::BuildContext::build<asset_pipe::texture::BuildTextureLayer>
// VA 0x141710980, PDB extent 1195 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: turbosloth::asset::BuildContext::build<asset_pipe::texture::BuildTextureLayer>
   Extent: 1195 bytes. No whole-program auto-analysis. */

undefined8 pdb_141710980(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined **ppuStack_228;
  code *pcStack_220;
  undefined **ppuStack_218;
  code *pcStack_210;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  longlong *plStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puStack_b8 = &UNK_14332b664;
  uStack_b0 = 0x26;
  uStack_32 = 1;
  plStack_40 = param_2;
  lVar2 = pdb_142565cc0(&UNK_14332b664,0x26);
  if (lVar2 == 0) {
    ppuStack_228 = &puStack_b8;
    pcStack_220 = pdb_1402ed400;
    pcStack_210 = pdb_1402ed400;
    uStack_32 = 1;
    ppuStack_218 = ppuStack_228;
    pdb_142dc83d0(&UNK_14332a978,&ppuStack_228,&UNK_14332aa18);
  }
  else {
    uStack_32 = 1;
    pdb_1417ca880(&ppuStack_228);
    uStack_31 = 1;
    pdb_1417ca2e0(&ppuStack_228,plStack_40[8],plStack_40[9]);
    uStack_a8 = (longlong *)CONCAT71(uStack_a8._1_7_,0xff);
    uStack_31 = 1;
    pdb_1417ca2e0(&ppuStack_228,&uStack_a8,1);
    lVar2 = *plStack_40;
    uStack_a8 = (longlong *)(ulonglong)SBORROW8(0,lVar2);
    uStack_31 = 1;
    pdb_1417ca2e0(&ppuStack_228,&uStack_a8,8);
    if (SBORROW8(0,lVar2)) {
      uStack_a8 = (longlong *)plStack_40[2];
      uStack_a0 = (undefined *)plStack_40[3];
      uStack_31 = 1;
      pdb_1417ca2e0(&ppuStack_228,&uStack_a8,0x10);
    }
    else {
      uStack_31 = 1;
      pdb_1417ce070(plStack_40,&ppuStack_228);
    }
    uStack_31 = 1;
    pppuVar5 = &ppuStack_228;
    pdb_140905300(plStack_40 + 4);
    uStack_31 = 1;
    uVar3 = pdb_1417c9b80(&ppuStack_228);
    uStack_31 = 1;
    uVar6 = 0x26;
    uVar3 = pdb_141747730(&UNK_14332b664,0x26,8,uVar3,pppuVar5);
    lStack_58 = plStack_40[8];
    lStack_50 = plStack_40[9];
    uStack_98 = (undefined *)*plStack_40;
    uStack_90 = plStack_40[1];
    uStack_88 = plStack_40[2];
    uStack_80 = plStack_40[3];
    uStack_78 = plStack_40[4];
    uStack_70 = *(uint *)(plStack_40 + 5);
    uStack_6c = *(undefined4 *)((longlong)plStack_40 + 0x2c);
    plStack_68 = (longlong *)plStack_40[6];
    uStack_60 = (undefined4)plStack_40[7];
    uStack_5c = *(undefined4 *)((longlong)plStack_40 + 0x3c);
    uStack_a8 = (longlong *)0x1;
    uStack_a0 = (undefined *)0x1;
    pdb_14007ee60();
    plVar4 = (longlong *)func_0x0001406abab0(0x60,0x10);
    if (plVar4 != (longlong *)0x0) {
      plVar4[10] = lStack_58;
      plVar4[0xb] = lStack_50;
      plVar4[8] = (longlong)plStack_68;
      plVar4[9] = CONCAT44(uStack_5c,uStack_60);
      *(undefined4 *)(plVar4 + 6) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)plVar4 + 0x34) = uStack_78._4_4_;
      *(uint *)(plVar4 + 7) = uStack_70;
      *(undefined4 *)((longlong)plVar4 + 0x3c) = uStack_6c;
      *(undefined4 *)(plVar4 + 4) = (undefined4)uStack_88;
      *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_88._4_4_;
      *(undefined4 *)(plVar4 + 5) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_80._4_4_;
      *(undefined4 *)(plVar4 + 2) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)plVar4 + 0x14) = uStack_98._4_4_;
      *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_90._4_4_;
      *(undefined4 *)plVar4 = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)plVar4 + 4) = uStack_a8._4_4_;
      *(undefined4 *)(plVar4 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = uStack_a0._4_4_;
      uStack_78 = 0;
      uStack_70 = uStack_70 & 0xffffff00;
      plStack_68 = (longlong *)0x0;
      uStack_a0 = &UNK_14332aab0;
      uStack_98 = &UNK_14332b664;
      uStack_90 = 0x26;
      uStack_a8 = plVar4;
      uStack_88 = uVar3;
      uStack_80 = uVar6;
      if (pcStack_220 != (code *)0x0) {
        func_0x0001406abac0(ppuStack_228,pcStack_220,1);
      }
      uVar3 = pdb_1417169b0(&uStack_a8,param_1);
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        *plStack_68 = *plStack_68 + -1;
        UNLOCK();
        if (*plStack_68 == 0) {
          pdb_140dd76c0(&plStack_68);
        }
      }
      LOCK();
      *uStack_a8 = *uStack_a8 + -1;
      UNLOCK();
      if (*uStack_a8 == 0) {
        pdb_140c7a240(&uStack_a8);
      }
      return uVar3;
    }
    pdb_142dc7e11(0x10,0x60);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

