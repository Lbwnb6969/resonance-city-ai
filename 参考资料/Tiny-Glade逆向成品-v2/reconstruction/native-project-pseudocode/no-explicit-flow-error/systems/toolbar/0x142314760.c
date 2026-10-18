// VA 0x142314760, PDB extent 476 bytes
// ron::de::impl$2::deserialize_seq<serde_core::de::impls::impl$19::deserialize::VecVisitor<enum2$<toolbar::mei::config::NodeLayoutConfigAttrib> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_seq<serde_core::de::impls::impl$19::deserialize::VecVisitor<enum2$<toolbar::mei::config::NodeLayoutConfigAttrib>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 476 */

char * pdb_142314760(char *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int *piStack_90;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  *(char *)(param_2 + 0x1a) = '\0';
  piVar1 = param_2 + 4;
  cVar3 = pdb_140dce020(piVar1,0x5b);
  if (cVar3 == '\0') {
    *param_1 = '\x04';
  }
  else {
    if ((char)*param_2 != '\0') {
      if (*(longlong *)(param_2 + 2) == 0) {
        *param_1 = '0';
        return param_1;
      }
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    uStack_88 = 0x104;
    uStack_86 = 0;
    piStack_90 = param_2;
    pdb_1429b4520(&uStack_80,&piStack_90);
    uVar2 = uStack_68;
    if ((char)uStack_80 == '2') {
      if (*param_2 == 1) {
        lVar4 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar4 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar4;
      }
      lStack_30 = lStack_78;
      pbStack_38 = pbStack_70;
      pdb_140dd4ac0(&uStack_80,piVar1);
      if ((char)uStack_80 == '2') {
        cVar3 = pdb_140dce020(piVar1,0x5d);
        if (cVar3 != '\0') {
          *(longlong *)(param_1 + 8) = lStack_30;
          *(byte **)(param_1 + 0x10) = pbStack_38;
          *(undefined8 *)(param_1 + 0x18) = uVar2;
          *param_1 = '2';
          return param_1;
        }
        *param_1 = '\x05';
      }
      else {
        *(undefined8 *)(param_1 + 0x40) = uStack_40;
        *(undefined8 *)(param_1 + 0x30) = uStack_50;
        *(undefined8 *)(param_1 + 0x38) = uStack_48;
        *(undefined8 *)(param_1 + 0x20) = uStack_60;
        *(undefined8 *)(param_1 + 0x28) = uStack_58;
        *(byte **)(param_1 + 0x10) = pbStack_70;
        *(undefined8 *)(param_1 + 0x18) = uStack_68;
        *(ulonglong *)param_1 = CONCAT44(uStack_7c,uStack_80);
        *(longlong *)(param_1 + 8) = lStack_78;
      }
      if (lStack_30 != 0) {
        pub_1406abac0(pbStack_38,lStack_30 << 5,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = uStack_7c;
      *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_7c,uStack_80._1_3_);
      *(undefined8 *)(param_1 + 0x20) = uStack_60;
      *(undefined8 *)(param_1 + 0x28) = uStack_58;
      *(undefined8 *)(param_1 + 0x30) = uStack_50;
      *(undefined8 *)(param_1 + 0x38) = uStack_48;
      *(undefined8 *)(param_1 + 0x40) = uStack_40;
      *(longlong *)(param_1 + 8) = lStack_78;
      *(byte **)(param_1 + 0x10) = pbStack_70;
      *(undefined8 *)(param_1 + 0x18) = uStack_68;
      *param_1 = (char)uStack_80;
    }
  }
  return param_1;
}

