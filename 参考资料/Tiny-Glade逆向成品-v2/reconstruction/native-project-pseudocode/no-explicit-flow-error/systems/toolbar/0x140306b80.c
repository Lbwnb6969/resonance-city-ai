// VA 0x140306b80, PDB extent 335 bytes
// toolbar::mei::widgets::impl$27::image<u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::image<u64>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 335 */

undefined8 *
pdb_140306b80(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,undefined4 param_6)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  ulonglong arg1;
  undefined1 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 auStack_50 [4];
  
  uStack_58 = param_3;
  auStack_50[0] = pdb_140315970(&uStack_58);
  uStack_70 = pdb_140315970(auStack_50);
  uStack_68 = CONCAT44(_UNK_142f3b494,_DAT_142f3b490);
  uStack_60 = _UNK_142f3b498;
  uStack_5c = _UNK_142f3b49c;
  uStack_68 = pdb_1400affa0(&uStack_70);
  uStack_70 = *(undefined8 *)(param_2 + 8);
  uVar1 = pdb_1400b0130(&uStack_70);
  pdb_14072caa0(&uStack_70,param_2,uVar1);
  puVar2 = (ulonglong *)pdb_1403059f0(&uStack_70);
  uVar4 = param_5 == 0;
  if (-1 < (longlong)param_5) goto LAB_140306c22;
  uVar1 = 0;
  uVar4 = true;
  while( true ) {
    puVar2 = (ulonglong *)pdb_142dc7e2a(uVar1,param_5);
LAB_140306c22:
    if ((bool)uVar4) break;
    pdb_14007ee60();
    uVar1 = 1;
    pbVar3 = pub_1406abab0(param_5,1);
    uVar4 = pbVar3 == (byte *)0x0;
    if (!(bool)uVar4) {
      pub_142e32760(pbVar3,param_4,param_5);
      arg1 = *puVar2;
      if (arg1 != 0) {
LAB_140306c6a:
        pub_1406abac0((byte *)puVar2[1],arg1,1);
      }
LAB_140306c79:
      *puVar2 = param_5;
      puVar2[1] = (ulonglong)pbVar3;
      puVar2[2] = param_5;
      *(undefined4 *)(puVar2 + 3) = param_6;
      *(undefined1 *)((longlong)puVar2 + 0x1c) = 0;
      param_1[2] = CONCAT44(uStack_5c,uStack_60);
      *param_1 = uStack_70;
      param_1[1] = uStack_68;
      return param_1;
    }
  }
  pbVar3 = (byte *)0x1;
  arg1 = *puVar2;
  if (arg1 == 0) goto LAB_140306c79;
  goto LAB_140306c6a;
}

