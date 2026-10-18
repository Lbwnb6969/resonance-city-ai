// VA 0x142312950, PDB extent 1042 bytes
// ron::de::impl$2::deserialize_map<toolbar::mei::config::impl$0::deserialize::NodeChildVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_map<toolbar::mei::config::impl$0::deserialize::NodeChildVisitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 1042 */

void pdb_142312950(longlong *param_1,int *param_2)

{
  int *piVar1;
  undefined8 ******ppppppuVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
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
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined *puStack_f8;
  byte *pbStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  int *piStack_b0;
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined8 *****pppppuStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  *(char *)(param_2 + 0x1a) = '\0';
  pppppuStack_a0 = (undefined8 *****)0x0;
  pbStack_98 = (byte *)0x1;
  pbStack_90 = (byte *)0x0;
  pbStack_148 = (byte *)0x60000020;
  uStack_158 = &pppppuStack_a0;
  uStack_150 = &UNK_1434d8f30;
  cVar3 = pdb_140f679a0(&uStack_158,&UNK_142fa7248,0x10);
  if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1434d8f60,0x37,&uStack_39,&UNK_1434d9020,&UNK_1434d9008);
  }
  if (pbStack_90 < 7) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(pbStack_98 + 3) == 0x20746375 && *(int *)pbStack_98 == 0x75727473;
  }
  if (pppppuStack_a0 != (undefined8 *****)0x0) {
    pub_1406abac0(pbStack_98,(ulonglong)pppppuStack_a0,1);
  }
  piVar1 = param_2 + 4;
  cVar3 = pdb_140dce020(piVar1,0x7b);
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 1) = 0x11;
LAB_142312b01:
    *param_1 = -0x7fffffffffffffff;
  }
  else {
    if ((char)*param_2 != '\0') {
      if (*(longlong *)(param_2 + 2) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x30;
        goto LAB_142312b01;
      }
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
    }
    uStack_a7 = 1;
    piStack_b0 = param_2;
    uStack_a8 = bVar5;
    pdb_141183ef0(&uStack_158,&piStack_b0);
    ppppppuVar2 = uStack_158;
    puStack_f8 = uStack_150;
    pbStack_f0 = pbStack_148;
    lStack_e8 = lStack_140;
    lStack_e0 = lStack_138;
    lStack_d8 = lStack_130;
    lStack_d0 = lStack_128;
    lStack_c8 = lStack_120;
    lStack_c0 = lStack_118;
    lStack_b8 = lStack_110;
    if (uStack_158 == (undefined8 ******)0x8000000000000001) {
      param_1[9] = lStack_110;
      param_1[7] = lStack_120;
      param_1[8] = lStack_118;
      param_1[5] = lStack_130;
      param_1[6] = lStack_128;
      param_1[3] = lStack_140;
      param_1[4] = lStack_138;
      param_1[1] = (longlong)uStack_150;
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
      pppppuStack_a0 = uStack_158;
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
      pbStack_98 = uStack_150;
      pbStack_90 = pbStack_148;
      uStack_88 = uStack_198;
      uStack_84 = uStack_194;
      uStack_80 = uStack_190;
      uStack_7c = uStack_18c;
      uStack_78 = uStack_188;
      uStack_74 = uStack_184;
      uStack_70 = uStack_180;
      uStack_6c = uStack_17c;
      uStack_68 = uStack_178;
      uStack_64 = uStack_174;
      uStack_60 = uStack_170;
      uStack_5c = uStack_16c;
      lStack_58 = lStack_110;
      uStack_1b8 = (undefined4)uStack_108;
      uStack_1b4 = (undefined4)((ulonglong)uStack_108 >> 0x20);
      uStack_1b0 = (undefined4)uStack_100;
      uStack_1ac = (undefined4)((ulonglong)uStack_100 >> 0x20);
      uStack_50 = uStack_1b8;
      uStack_4c = uStack_1b4;
      uStack_48 = uStack_1b0;
      uStack_44 = uStack_1ac;
      pdb_140dd4ac0(&uStack_158,piVar1);
      if ((char)uStack_158 == '2') {
        cVar3 = pdb_140dce020(piVar1,0x7d);
        if (cVar3 != '\0') {
          param_1[10] = CONCAT44(uStack_4c,uStack_50);
          param_1[0xb] = CONCAT44(uStack_44,uStack_48);
          param_1[8] = CONCAT44(uStack_5c,uStack_60);
          param_1[9] = lStack_58;
          param_1[6] = CONCAT44(uStack_6c,uStack_70);
          param_1[7] = CONCAT44(uStack_64,uStack_68);
          param_1[4] = CONCAT44(uStack_7c,uStack_80);
          param_1[5] = CONCAT44(uStack_74,uStack_78);
          param_1[2] = (longlong)pbStack_90;
          param_1[3] = CONCAT44(uStack_84,uStack_88);
          *param_1 = (longlong)pppppuStack_a0;
          param_1[1] = (longlong)pbStack_98;
          return;
        }
        *(undefined1 *)(param_1 + 1) = 0x13;
        *param_1 = -0x7fffffffffffffff;
        ppppppuVar2 = (undefined8 ******)pppppuStack_a0;
      }
      else {
        param_1[9] = lStack_118;
        param_1[7] = lStack_128;
        param_1[8] = lStack_120;
        param_1[5] = lStack_138;
        param_1[6] = lStack_130;
        param_1[3] = (longlong)pbStack_148;
        param_1[4] = lStack_140;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_158;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_158._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_150;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_150._4_4_;
        *param_1 = -0x7fffffffffffffff;
      }
      if (SBORROW8(0,(longlong)ppppppuVar2)) {
        if (pbStack_98 != (undefined *)0x0) {
          pub_1406abac0(pbStack_90,(ulonglong)pbStack_98,1);
        }
      }
      else {
        pdb_14117cf10(&pppppuStack_a0);
      }
    }
  }
  return;
}

