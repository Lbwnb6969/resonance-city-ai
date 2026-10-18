// VA 0x1417f4760, PDB extent 759 bytes
// turbosloth::store::AssetStore::name_asset<asset_pipe::texture::TextureAssetList,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::store::AssetStore::name_asset<asset_pipe::texture::TextureAssetList,ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 759 */

undefined8
pdb_1417f4760(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  bool bVar9;
  int *piStack_b8;
  byte bStack_b0;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  int *piStack_78;
  byte bStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  piVar1 = (int *)(param_1 + 0x110);
  LOCK();
  bVar9 = *(int *)(param_1 + 0x110) == 0;
  if (bVar9) {
    *(int *)(param_1 + 0x110) = 0x3fffffff;
  }
  UNLOCK();
  if (!bVar9) {
    pdb_142dc6e70(piVar1);
  }
  puVar8 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    cVar5 = *(char *)(param_1 + 0x118);
  }
  else {
    bVar4 = pdb_142dc79e0();
    bVar4 = bVar4 ^ 1;
    cVar5 = *(char *)(param_1 + 0x118);
  }
  if (cVar5 != '\0') {
    piStack_b8 = piVar1;
    bStack_b0 = bVar4;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14333e4d0,0x2b,&piStack_b8,&UNK_14333e520,&UNK_14333dde0);
  }
  piStack_78 = piVar1;
  bStack_70 = bVar4;
  pdb_14071be20(&uStack_68,param_2,param_3);
  uVar6 = pdb_14043b7e0(&uStack_68);
  if ((longlong)param_2 < 0) {
    uVar7 = 0;
LAB_1417f47f2:
    pdb_142dc7e2a(uVar7,param_2);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_2 == 0) {
    pbStack_88 = (byte *)0x1;
  }
  else {
    uStack_50 = param_4;
    pdb_14007ee60();
    uVar7 = 1;
    pbStack_88 = pub_1406abab0(param_2,1);
    if (pbStack_88 == (byte *)0x0) goto LAB_1417f47f2;
    pub_142e32760(pbStack_88,uVar6,param_2);
    param_4 = uStack_50;
    puVar8 = _DAT_143ca8f38;
  }
  uStack_90 = param_2;
  uStack_80 = param_2;
  pdb_1417ba8a0(&piStack_b8,param_1 + 0x120,&uStack_90,param_4,param_5);
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_60,uStack_68,1);
  }
  if (((bVar4 == 0) && ((*puVar8 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -0x3fffffff;
  UNLOCK();
  if (0x3fffffff < iVar2 + 0xc0000001U) {
    pdb_142dc6fa0(piVar1);
  }
  return 0;
}

