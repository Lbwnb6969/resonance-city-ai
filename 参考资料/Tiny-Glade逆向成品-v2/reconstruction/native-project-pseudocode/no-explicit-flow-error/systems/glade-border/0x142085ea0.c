// VA 0x142085ea0, PDB extent 813 bytes
// system_glade_border::display_glade_border::display_glade_border::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/glade-border/src/display_glade_border.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_glade_border::display_glade_border::display_glade_border::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/glade-border/src/display_glade_border.rs
   Extent: 813 */

undefined8 *
pdb_142085ea0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong arg0;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  ulonglong uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  ulonglong uStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  arg0 = uVar3 * 0xc;
  if (uVar3 == 0) {
    pbStack_50 = (byte *)0x4;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 8);
    pdb_14007ee60();
    pbStack_50 = pub_1406abab0(arg0,4);
    fVar7 = _UNK_14344ee84;
    fVar6 = _DAT_14344ee80;
    if (pbStack_50 == (byte *)0x0) {
      pdb_142dc7e2a(4,arg0);
      pcVar5 = (code *)swi(3);
      puVar8 = (undefined8 *)(*pcVar5)();
      return puVar8;
    }
    if (uVar3 == 1) {
      uVar10 = 0;
    }
    else {
      lVar9 = 0x14;
      uVar10 = 0;
      do {
        uVar1 = *(undefined4 *)(lVar4 + -0xc + lVar9);
        uVar2 = *(undefined8 *)(lVar4 + -0x14 + lVar9);
        *(ulonglong *)(pbStack_50 + lVar9 + -0x14) =
             CONCAT44((float)((ulonglong)uVar2 >> 0x20) + fVar7,(float)uVar2 + fVar6);
        *(undefined4 *)(pbStack_50 + lVar9 + -0xc) = uVar1;
        uVar1 = *(undefined4 *)(lVar4 + lVar9);
        uVar2 = *(undefined8 *)(lVar4 + -8 + lVar9);
        *(ulonglong *)(pbStack_50 + lVar9 + -8) =
             CONCAT44((float)((ulonglong)uVar2 >> 0x20) + fVar7,(float)uVar2 + fVar6);
        *(undefined4 *)(pbStack_50 + lVar9) = uVar1;
        uVar10 = uVar10 + 2;
        lVar9 = lVar9 + 0x18;
      } while ((uVar3 & 0xfffffffffffffffe) != uVar10);
      if ((uVar3 & 1) == 0) goto LAB_142085faf;
    }
    lVar9 = uVar10 * 0xc;
    uVar1 = *(undefined4 *)(lVar4 + 8 + lVar9);
    *(ulonglong *)(pbStack_50 + lVar9) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + lVar9) >> 0x20) + _UNK_14344ee84,
                  (float)*(undefined8 *)(lVar4 + lVar9) + _DAT_14344ee80);
    *(undefined4 *)(pbStack_50 + lVar9 + 8) = uVar1;
  }
LAB_142085faf:
  uStack_68 = arg0;
  pdb_14007ee60();
  pbStack_58 = pub_1406abab0(8,8);
  uStack_60 = uVar3;
  if (pbStack_58 != (byte *)0x0) {
    uStack_f8 = (ulonglong)_DAT_142e36f28;
    uStack_f0 = (byte *)((ulonglong)uStack_f0._4_4_ << 0x20);
    uStack_41 = 1;
    pdb_1415e43a0(&uStack_188,&uStack_f8,uVar3);
    uStack_f8 = uStack_60;
    uStack_f0 = pbStack_50;
    uStack_e8 = uStack_60;
    uStack_e0 = uStack_188;
    uStack_dc = uStack_184;
    uStack_d8 = uStack_180;
    uStack_d4 = uStack_17c;
    uStack_d0 = uStack_178;
    uStack_41 = 0;
    pdb_1409bb100(&uStack_188,&uStack_f8);
    uStack_41 = 0;
    pdb_1409bafc0(&uStack_f8,&uStack_188,0);
    uStack_41 = 0;
    pdb_1409bb0b0(&uStack_188,&uStack_f8,0);
    uStack_41 = 0;
    pdb_1409baf90(&uStack_f8,&uStack_188,_DAT_142e3788c);
    uStack_41 = 0;
    pdb_1409bba50(&uStack_188,&uStack_f8,param_3,param_4,param_5);
    *(ulonglong *)pbStack_58 = CONCAT44(uStack_184,uStack_188);
    *param_1 = 1;
    param_1[1] = pbStack_58;
    param_1[2] = 1;
    return param_1;
  }
  uStack_42 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

