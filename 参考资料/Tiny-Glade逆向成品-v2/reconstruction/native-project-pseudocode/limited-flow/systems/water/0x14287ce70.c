// VA 0x14287ce70, PDB extent 1585 bytes
// zeno::segment::impl$5::next<core::iter::adapters::copied::Copied<core::slice::iter::Iter<enum2$<zeno::command::Command> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   zeno::segment::impl$5::next<core::iter::adapters::copied::Copied<core::slice::iter::Iter<enum2$<zeno::command::Command>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/lib.rs
   Extent: 1585 */

char * pdb_14287ce70(char *param_1,longlong param_2)

{
  undefined4 *puVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  char cVar9;
  uint *puVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  if (*(char *)(param_2 + 0x235) == '\0') {
    if (*(char *)(param_2 + 0x236) == '\x01') {
      do {
        uVar5 = *(ulonglong *)(param_2 + 0x228);
        if (*(ulonglong *)(param_2 + 0x220) <= uVar5) {
          cVar9 = *(char *)(param_2 + 0x234) + '\x01';
          if (*(char *)(param_2 + 0x234) == -2) {
            cVar9 = '\0';
          }
          *(char *)(param_2 + 0x234) = cVar9;
          puVar6 = *(uint **)(param_2 + 0x200);
          if (puVar6 != *(uint **)(param_2 + 0x208)) {
            *(uint **)(param_2 + 0x200) = puVar6 + 7;
            uVar12 = (undefined4)((ulonglong)*(undefined8 *)(puVar6 + 1) >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014287d02a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pcVar8 = (char *)(*(code *)(&UNK_1435a98f0 +
                                       *(int *)(&UNK_1435a98f0 + (ulonglong)*puVar6 * 4)))
                                       ((int)*(undefined8 *)(param_2 + 0x218),
                                        (int)*(undefined8 *)(puVar6 + 1),CONCAT44(uVar12,uVar12));
            return pcVar8;
          }
          goto LAB_14287d272;
        }
        if (0xf < uVar5) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar5,0x10,&UNK_1435a9858);
        }
        puVar1 = (undefined4 *)(param_2 + uVar5 * 0x20);
        uStack_a8 = *puVar1;
        uStack_a4 = puVar1[1];
        uStack_a0 = puVar1[2];
        uStack_9c = puVar1[3];
        puVar1 = (undefined4 *)(param_2 + 0x10 + uVar5 * 0x20);
        uStack_98 = *puVar1;
        uStack_94 = puVar1[1];
        uStack_90 = puVar1[2];
        uStack_8c = puVar1[3];
        *(ulonglong *)(param_2 + 0x228) = uVar5 + 1;
        pdb_141c70590(param_1,&uStack_a8,*(undefined1 *)(param_2 + 0x234));
      } while (*param_1 == '\x03');
      *(int *)(param_2 + 0x230) = *(int *)(param_2 + 0x230) + 1;
      *(undefined1 *)(param_2 + 0x237) = 0;
      *(ulonglong *)(param_2 + 0x218) = CONCAT44(uStack_8c,uStack_90);
    }
    else {
      cVar4 = *(char *)(param_2 + 0x234);
      cVar9 = cVar4 + '\x01';
      if (cVar4 == -2) {
        cVar9 = '\0';
      }
      *(char *)(param_2 + 0x234) = cVar9;
      puVar6 = *(uint **)(param_2 + 0x200);
      puVar7 = *(uint **)(param_2 + 0x208);
      if (puVar6 != puVar7) {
        fVar11 = (float)*(undefined8 *)(param_2 + 0x218);
        fVar2 = *(float *)(param_2 + 0x21c);
        if ((*(byte *)(param_2 + 0x237) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014287d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar8 = (char *)(*(code *)(&UNK_1435a98d8 +
                                     *(int *)(&UNK_1435a98d8 + (ulonglong)*puVar6 * 4)))
                                     (puVar6,puVar7,*(undefined8 *)(puVar6 + 1),_DAT_142e377e0);
          return pcVar8;
        }
        do {
          puVar10 = puVar6;
          uVar3 = *(undefined8 *)(puVar10 + 1);
          if (*puVar10 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00014287d236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pcVar8 = (char *)(*(code *)(&UNK_1435a98c0 +
                                       *(int *)(&UNK_1435a98c0 + (ulonglong)*puVar10 * 4)))
                                       (puVar10,&UNK_1435a98c0 +
                                                *(int *)(&UNK_1435a98c0 + (ulonglong)*puVar10 * 4));
            return pcVar8;
          }
          if ((_DAT_142e37848 <= (float)((uint)(fVar11 - (float)uVar3) & _DAT_142e377e0)) ||
             (_DAT_142e37848 <=
              (float)((uint)(fVar2 - (float)((ulonglong)uVar3 >> 0x20)) & _DAT_142e377e0))) {
            *(uint **)(param_2 + 0x200) = puVar10 + 7;
            *(int *)(param_2 + 0x230) = *(int *)(param_2 + 0x230) + 1;
            *(undefined8 *)(param_2 + 0x218) = uVar3;
            *(undefined1 *)(param_2 + 0x237) = 0;
            *param_1 = '\0';
            param_1[1] = cVar4;
            *(float *)(param_1 + 4) = fVar11;
            *(float *)(param_1 + 8) = fVar2;
            *(undefined8 *)(param_1 + 0xc) = uVar3;
            return param_1;
          }
          puVar6 = puVar10 + 7;
        } while (puVar10 + 7 != puVar7);
        *(uint **)(param_2 + 0x200) = puVar10 + 7;
      }
LAB_14287d272:
      *param_1 = '\x03';
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x235) = 0;
    *(undefined1 *)(param_2 + 0x237) = 1;
    param_1[0] = '\x02';
    param_1[1] = '\x01';
  }
  return param_1;
}

