// VA 0x142d57ee0, PDB extent 702 bytes
// zeno::stroke::StrokerStorage::collect<enum2$<zeno::stroke::SmallBuf<enum2$<zeno::segment::Segment> > >,zeno::segment::Segments<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<enum2$<zeno::command::Command> > >,zeno::path_data::apply::closure_env$0<ref$<ref$<slice2$<enum2$<zeno::command::Command> > > >,enum2$<zeno::style::Style>,zeno::geometry::BoundsBuilder> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zeno::stroke::StrokerStorage::collect<enum2$<zeno::stroke::SmallBuf<enum2$<zeno::segment::Segment>
   > 
   >,zeno::segment::Segments<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<enum2$<zeno::command::Command>
   > >,zeno::path_data::apply::closure_env$0<ref$<ref$<slice2$<enum2$<zeno::command::Command> > >
   >,enum2$<zeno::style::Style>,zeno::geometry::BoundsBuilder> > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/lib.rs
   Extent: 702 */

ulonglong pdb_142d57ee0(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 uStack_a3;
  undefined4 uStack_9f;
  undefined4 uStack_9b;
  undefined4 uStack_97;
  undefined4 uStack_90;
  byte bStack_84;
  byte bStack_83;
  undefined4 uStack_82;
  undefined4 uStack_7e;
  undefined4 uStack_7a;
  undefined4 uStack_76;
  undefined4 uStack_72;
  undefined4 uStack_6e;
  undefined4 uStack_6a;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcVar7 = param_1 + 0x1200;
  if (*param_1 == '\x03') {
    pcVar7 = param_1 + 0x18;
  }
  pcVar7[0] = '\0';
  pcVar7[1] = '\0';
  pcVar7[2] = '\0';
  pcVar7[3] = '\0';
  pcVar7[4] = '\0';
  pcVar7[5] = '\0';
  pcVar7[6] = '\0';
  pcVar7[7] = '\0';
  pdb_14287c7a0(&bStack_84);
  if (bStack_84 == 3) {
    uVar10 = 0;
  }
  else {
    do {
      bVar6 = bStack_83;
      bVar5 = bStack_84;
      uVar10 = (uint)bStack_83;
      if (bStack_84 == 2) goto LAB_142d58114;
      if (*param_1 == '\x03') {
        lVar3 = *(longlong *)(param_1 + 0x18);
        if (lVar3 == *(longlong *)(param_1 + 8)) {
          pdb_142d91b00(param_1 + 8);
        }
        lVar2 = *(longlong *)(param_1 + 0x10);
        *(byte *)(lVar2 + lVar3 * 0x24) = bVar5;
        *(byte *)(lVar2 + 1 + lVar3 * 0x24) = bVar6;
        puVar1 = (undefined4 *)(lVar2 + 2 + lVar3 * 0x24);
        *puVar1 = uStack_82;
        puVar1[1] = uStack_7e;
        puVar1[2] = uStack_7a;
        puVar1[3] = uStack_76;
        puVar1 = (undefined4 *)(lVar2 + 0x12 + lVar3 * 0x24);
        *puVar1 = uStack_72;
        puVar1[1] = uStack_6e;
        puVar1[2] = uStack_6a;
        puVar1[3] = uStack_66;
        *(undefined2 *)(lVar2 + 0x22 + lVar3 * 0x24) = uStack_62;
        *(longlong *)(param_1 + 0x18) = lVar3 + 1;
      }
      else {
        uVar9 = *(ulonglong *)(param_1 + 0x1200);
        if (uVar9 == 0x80) {
          pdb_14007ee60();
          pbVar8 = pub_1406abab0(0x1200,4);
          if (pbVar8 == (byte *)0x0) {
            pdb_142dc7e2a(4,0x1200);
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          uStack_60 = 0x80;
          pbStack_58 = pbVar8;
          pub_142e32760(pbVar8,param_1,0x1200);
          uStack_50 = 0x80;
          pdb_142d91b00(&uStack_60);
          pbVar8 = pbStack_58;
          pbStack_58[0x1200] = bVar5;
          pbStack_58[0x1201] = bVar6;
          *(undefined2 *)(pbStack_58 + 0x1222) = uStack_62;
          *(ulonglong *)(pbStack_58 + 0x1212) = CONCAT44(uStack_6e,uStack_72);
          *(ulonglong *)(pbStack_58 + 0x121a) = CONCAT44(uStack_66,uStack_6a);
          *(ulonglong *)(pbStack_58 + 0x1202) = CONCAT44(uStack_7e,uStack_82);
          *(ulonglong *)(pbStack_58 + 0x120a) = CONCAT44(uStack_76,uStack_7a);
          uStack_50 = 0x81;
          uStack_9f._3_1_ = (undefined1)uStack_60;
          uStack_9b = (undefined4)((ulonglong)uStack_60 >> 8);
          uStack_97._0_3_ = (undefined3)((ulonglong)uStack_60 >> 0x28);
          uStack_97._3_1_ = SUB81(pbStack_58,0);
          uStack_90 = (undefined4)((ulonglong)pbStack_58 >> 0x20);
          if ((*param_1 == '\x03') && (*(longlong *)(param_1 + 8) != 0)) {
            pub_1406abac0(*(byte **)(param_1 + 0x10),*(longlong *)(param_1 + 8) * 0x24,4);
          }
          *param_1 = '\x03';
          *(int *)(param_1 + 0x10) = (int)pbVar8;
          *(undefined4 *)(param_1 + 0x14) = uStack_90;
          param_1[0x18] = -0x7f;
          param_1[0x19] = '\0';
          param_1[0x1a] = '\0';
          param_1[0x1b] = '\0';
          param_1[0x1c] = '\0';
          param_1[0x1d] = '\0';
          param_1[0x1e] = '\0';
          param_1[0x1f] = '\0';
          *(undefined4 *)(param_1 + 1) = uStack_a3;
          *(undefined4 *)(param_1 + 5) = uStack_9f;
          *(undefined4 *)(param_1 + 9) = uStack_9b;
          *(undefined4 *)(param_1 + 0xd) = uStack_97;
        }
        else {
          if (0x7f < uVar9) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar9,0x80,&UNK_1436d9e48);
          }
          param_1[uVar9 * 0x24] = bStack_84;
          param_1[uVar9 * 0x24 + 1] = bStack_83;
          pcVar7 = param_1 + uVar9 * 0x24 + 2;
          *(undefined4 *)pcVar7 = uStack_82;
          *(undefined4 *)(pcVar7 + 4) = uStack_7e;
          *(undefined4 *)(pcVar7 + 8) = uStack_7a;
          *(undefined4 *)(pcVar7 + 0xc) = uStack_76;
          pcVar7 = param_1 + uVar9 * 0x24 + 0x12;
          *(undefined4 *)pcVar7 = uStack_72;
          *(undefined4 *)(pcVar7 + 4) = uStack_6e;
          *(undefined4 *)(pcVar7 + 8) = uStack_6a;
          *(undefined4 *)(pcVar7 + 0xc) = uStack_66;
          *(undefined2 *)(param_1 + uVar9 * 0x24 + 0x22) = uStack_62;
          *(longlong *)(param_1 + 0x1200) = *(longlong *)(param_1 + 0x1200) + 1;
        }
      }
      pdb_14287c7a0(&bStack_84,param_2);
    } while (bStack_84 != 3);
    uVar10 = 0;
  }
LAB_142d58114:
  return (ulonglong)uVar10;
}

