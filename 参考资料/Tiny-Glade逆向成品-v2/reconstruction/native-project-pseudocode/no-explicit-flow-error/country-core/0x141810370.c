// VA 0x141810370, PDB extent 456 bytes
// ron::de::impl$2::deserialize_seq<serde_core::de::impls::impl$19::deserialize::VecVisitor<u8> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_seq<serde_core::de::impls::impl$19::deserialize::VecVisitor<u8> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 456 */

void pdb_141810370(char *param_1,int *param_2)

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
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
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
        return;
      }
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    uStack_88 = 0x104;
    uStack_86 = 0;
    piStack_90 = param_2;
    pdb_141ad5ba0(&uStack_80,&piStack_90);
    uVar2 = uStack_68;
    if ((char)uStack_80 == '2') {
      if (*param_2 == 1) {
        lVar4 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar4 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar4;
      }
      uStack_30 = uStack_78;
      pbStack_38 = pbStack_70;
      pdb_140dd4ac0(&uStack_80,piVar1);
      if ((char)uStack_80 == '2') {
        cVar3 = pdb_140dce020(piVar1,0x5d);
        if (cVar3 != '\0') {
          *(ulonglong *)(param_1 + 8) = uStack_30;
          *(byte **)(param_1 + 0x10) = pbStack_38;
          *(undefined8 *)(param_1 + 0x18) = uVar2;
          *param_1 = '2';
          return;
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
        *(ulonglong *)(param_1 + 8) = uStack_78;
      }
      if (uStack_30 != 0) {
        pub_1406abac0(pbStack_38,uStack_30,1);
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
      *(ulonglong *)(param_1 + 8) = uStack_78;
      *(byte **)(param_1 + 0x10) = pbStack_70;
      *(undefined8 *)(param_1 + 0x18) = uStack_68;
      *param_1 = (char)uStack_80;
    }
  }
  return;
}

