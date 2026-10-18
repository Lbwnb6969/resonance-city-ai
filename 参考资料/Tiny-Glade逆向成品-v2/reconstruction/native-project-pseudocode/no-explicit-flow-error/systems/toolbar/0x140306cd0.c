// VA 0x140306cd0, PDB extent 336 bytes
// toolbar::mei::widgets::impl$27::image<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::image<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 336 */

undefined8 *
pdb_140306cd0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,undefined4 param_7)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  ulonglong arg1;
  undefined1 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_50 = pdb_14072aeb0(&uStack_48);
  uStack_68 = pdb_140315970(&uStack_50);
  uStack_60 = CONCAT44(_UNK_142f3b494,_DAT_142f3b490);
  uStack_58 = _UNK_142f3b498;
  uStack_54 = _UNK_142f3b49c;
  uStack_60 = pdb_1400affa0(&uStack_68);
  uStack_68 = *(undefined8 *)(param_2 + 8);
  uVar1 = pdb_1400b0130(&uStack_68);
  pdb_14072caa0(&uStack_68,param_2,uVar1);
  puVar2 = (ulonglong *)pdb_1403059f0(&uStack_68);
  uVar4 = param_6 == 0;
  if (-1 < (longlong)param_6) goto LAB_140306d72;
  uVar1 = 0;
  uVar4 = true;
  while( true ) {
    puVar2 = (ulonglong *)pdb_142dc7e2a(uVar1,param_6);
LAB_140306d72:
    if ((bool)uVar4) break;
    pdb_14007ee60();
    uVar1 = 1;
    pbVar3 = pub_1406abab0(param_6,1);
    uVar4 = pbVar3 == (byte *)0x0;
    if (!(bool)uVar4) {
      pub_142e32760(pbVar3,param_5,param_6);
      arg1 = *puVar2;
      if (arg1 != 0) {
LAB_140306dbf:
        pub_1406abac0((byte *)puVar2[1],arg1,1);
      }
LAB_140306dce:
      *puVar2 = param_6;
      puVar2[1] = (ulonglong)pbVar3;
      puVar2[2] = param_6;
      *(undefined4 *)(puVar2 + 3) = param_7;
      *(undefined1 *)((longlong)puVar2 + 0x1c) = 0;
      param_1[2] = CONCAT44(uStack_54,uStack_58);
      *param_1 = uStack_68;
      param_1[1] = uStack_60;
      return param_1;
    }
  }
  pbVar3 = (byte *)0x1;
  arg1 = *puVar2;
  if (arg1 == 0) goto LAB_140306dce;
  goto LAB_140306dbf;
}

