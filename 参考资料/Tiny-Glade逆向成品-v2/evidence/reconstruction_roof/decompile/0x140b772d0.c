// Matched PDB: country_core::resources::roofs::roof_shape::Roof::profile_curve_normalized
// VA 0x140b772d0, PDB extent 842 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::profile_curve_normalized
   Extent: 842 bytes. No whole-program auto-analysis. */

longlong * pdb_140b772d0(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  fVar4 = *(float *)(param_2 + 0x2c);
  pdb_14007ee60();
  puStack_80 = (undefined4 *)func_0x0001406abab0(0xa0,4);
  if (puStack_80 != (undefined4 *)0x0) {
    fVar4 = (_DAT_142e36f28 - fVar4) * _DAT_142e36f50 + _DAT_142e37838 * fVar4;
    uVar3 = func_0x000142e32ad0(0,fVar4);
    *puStack_80 = 0;
    puStack_80[1] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bee8,fVar4);
    puStack_80[2] = 0x3d579436;
    puStack_80[3] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305beec,fVar4);
    puStack_80[4] = 0x3dd79436;
    puStack_80[5] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bef0,fVar4);
    puStack_80[6] = 0x3e21af28;
    puStack_80[7] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bef4,fVar4);
    puStack_80[8] = 0x3e579436;
    puStack_80[9] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bef8,fVar4);
    puStack_80[10] = 0x3e86bca2;
    puStack_80[0xb] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305befc,fVar4);
    puStack_80[0xc] = 0x3ea1af28;
    puStack_80[0xd] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf00,fVar4);
    puStack_80[0xe] = 0x3ebca1af;
    puStack_80[0xf] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf04,fVar4);
    puStack_80[0x10] = 0x3ed79436;
    puStack_80[0x11] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf08,fVar4);
    puStack_80[0x12] = 0x3ef286bd;
    puStack_80[0x13] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf0c,fVar4);
    puStack_80[0x14] = 0x3f06bca2;
    puStack_80[0x15] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf10,fVar4);
    puStack_80[0x16] = 0x3f1435e5;
    puStack_80[0x17] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf14,fVar4);
    puStack_80[0x18] = 0x3f21af28;
    puStack_80[0x19] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf18,fVar4);
    puStack_80[0x1a] = 0x3f2f286c;
    puStack_80[0x1b] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf1c,fVar4);
    puStack_80[0x1c] = 0x3f3ca1af;
    puStack_80[0x1d] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf20,fVar4);
    puStack_80[0x1e] = 0x3f4a1af3;
    puStack_80[0x1f] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf24,fVar4);
    puStack_80[0x20] = 0x3f579436;
    puStack_80[0x21] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf28,fVar4);
    puStack_80[0x22] = 0x3f650d79;
    puStack_80[0x23] = uVar3;
    uVar3 = func_0x000142e32ad0(_DAT_14305bf2c,fVar4);
    puStack_80[0x24] = 0x3f7286bd;
    puStack_80[0x25] = uVar3;
    *(undefined8 *)(puStack_80 + 0x26) = _DAT_142e37950;
    uStack_88 = 0x14;
    uStack_78 = 0x14;
    pdb_140080c90(&lStack_70,&uStack_88,0);
    if (!SBORROW8(0,lStack_70)) {
      param_1[6] = lStack_40;
      param_1[4] = lStack_50;
      param_1[5] = lStack_48;
      param_1[2] = CONCAT44(uStack_5c,uStack_60);
      param_1[3] = lStack_58;
      *param_1 = lStack_70;
      param_1[1] = CONCAT44(uStack_64,uStack_68);
      return param_1;
    }
    pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_88,&UNK_14335e258,&UNK_14305c388);
  }
  pdb_142dc7e2a(4,0xa0);
  pcVar1 = (code *)swi(3);
  plVar2 = (longlong *)(*pcVar1)();
  return plVar2;
}

