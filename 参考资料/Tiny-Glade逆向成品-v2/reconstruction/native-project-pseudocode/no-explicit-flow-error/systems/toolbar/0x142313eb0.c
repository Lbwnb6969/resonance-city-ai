// VA 0x142313eb0, PDB extent 738 bytes
// ron::de::impl$2::deserialize_seq<toolbar::mei::config::impl$0::deserialize::NodeChildVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_seq<toolbar::mei::config::impl$0::deserialize::NodeChildVisitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 738 */

void pdb_142313eb0(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  byte *pbStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  *(char *)(param_2 + 0x1a) = '\0';
  piVar1 = param_2 + 4;
  cVar3 = pdb_140dce020(piVar1,0x5b);
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 1) = 4;
LAB_142313fb2:
    *param_1 = -0x7fffffffffffffff;
  }
  else {
    if ((char)*param_2 != '\0') {
      if (*(longlong *)(param_2 + 2) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x30;
        goto LAB_142313fb2;
      }
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    uStack_40 = 0x104;
    uStack_3e = 0;
    piStack_48 = param_2;
    pdb_141184320(&uStack_158,&piStack_48);
    lVar2 = CONCAT44(uStack_154,uStack_158);
    uStack_a0 = CONCAT44(uStack_14c,uStack_150);
    pbStack_f0 = pbStack_148;
    lStack_e8 = lStack_140;
    lStack_e0 = lStack_138;
    lStack_d8 = lStack_130;
    lStack_d0 = lStack_128;
    lStack_c8 = lStack_120;
    lStack_c0 = lStack_118;
    lStack_b8 = lStack_110;
    if (lVar2 == -0x7fffffffffffffff) {
      param_1[9] = lStack_110;
      param_1[7] = lStack_120;
      param_1[8] = lStack_118;
      param_1[5] = lStack_130;
      param_1[6] = lStack_128;
      param_1[3] = lStack_140;
      param_1[4] = lStack_138;
      param_1[1] = uStack_a0;
      param_1[2] = (longlong)pbStack_148;
      *param_1 = -0x7fffffffffffffff;
    }
    else {
      if (*param_2 == 1) {
        lVar4 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar4 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar4;
      }
      uStack_198 = (undefined4)lStack_140;
      uStack_194 = (undefined4)((ulonglong)lStack_140 >> 0x20);
      uStack_190 = (undefined4)lStack_138;
      uStack_18c = (undefined4)((ulonglong)lStack_138 >> 0x20);
      uStack_188 = (undefined4)lStack_130;
      uStack_184 = (undefined4)((ulonglong)lStack_130 >> 0x20);
      uStack_180 = (undefined4)lStack_128;
      uStack_17c = (undefined4)((ulonglong)lStack_128 >> 0x20);
      uStack_178 = (undefined4)lStack_120;
      uStack_174 = (undefined4)((ulonglong)lStack_120 >> 0x20);
      uStack_170 = (undefined4)lStack_118;
      uStack_16c = (undefined4)((ulonglong)lStack_118 >> 0x20);
      pbStack_98 = pbStack_148;
      uStack_90 = uStack_198;
      uStack_8c = uStack_194;
      uStack_88 = uStack_190;
      uStack_84 = uStack_18c;
      uStack_80 = uStack_188;
      uStack_7c = uStack_184;
      uStack_78 = uStack_180;
      uStack_74 = uStack_17c;
      uStack_70 = uStack_178;
      uStack_6c = uStack_174;
      uStack_68 = uStack_170;
      uStack_64 = uStack_16c;
      lStack_60 = lStack_110;
      uStack_1b8 = (undefined4)uStack_108;
      uStack_1b4 = (undefined4)((ulonglong)uStack_108 >> 0x20);
      uStack_1b0 = (undefined4)uStack_100;
      uStack_1ac = (undefined4)((ulonglong)uStack_100 >> 0x20);
      uStack_58 = uStack_1b8;
      uStack_54 = uStack_1b4;
      uStack_50 = uStack_1b0;
      uStack_4c = uStack_1ac;
      lStack_a8 = lVar2;
      pdb_140dd4ac0(&uStack_158,piVar1);
      if ((char)uStack_158 == '2') {
        cVar3 = pdb_140dce020(piVar1,0x5d);
        if (cVar3 != '\0') {
          param_1[10] = CONCAT44(uStack_54,uStack_58);
          param_1[0xb] = CONCAT44(uStack_4c,uStack_50);
          param_1[8] = CONCAT44(uStack_64,uStack_68);
          param_1[9] = lStack_60;
          param_1[6] = CONCAT44(uStack_74,uStack_78);
          param_1[7] = CONCAT44(uStack_6c,uStack_70);
          param_1[4] = CONCAT44(uStack_84,uStack_88);
          param_1[5] = CONCAT44(uStack_7c,uStack_80);
          param_1[2] = (longlong)pbStack_98;
          param_1[3] = CONCAT44(uStack_8c,uStack_90);
          *param_1 = lStack_a8;
          param_1[1] = uStack_a0;
          return;
        }
        *(undefined1 *)(param_1 + 1) = 5;
        *param_1 = -0x7fffffffffffffff;
      }
      else {
        param_1[9] = lStack_118;
        param_1[7] = lStack_128;
        param_1[8] = lStack_120;
        param_1[5] = lStack_138;
        param_1[6] = lStack_130;
        param_1[3] = (longlong)pbStack_148;
        param_1[4] = lStack_140;
        *(undefined4 *)(param_1 + 1) = uStack_158;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_154;
        *(undefined4 *)(param_1 + 2) = uStack_150;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_14c;
        *param_1 = -0x7fffffffffffffff;
        lStack_a8 = lVar2;
      }
      if (SBORROW8(0,lStack_a8)) {
        if (uStack_a0 != 0) {
          pub_1406abac0(pbStack_98,uStack_a0,1);
        }
      }
      else {
        pdb_14117cf10(&lStack_a8);
      }
    }
  }
  return;
}

