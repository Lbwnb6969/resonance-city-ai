// VA 0x1409d2e70, PDB extent 673 bytes
// country_core::render::nani::gpu_world::GpuWorld::apply_grown_capacity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::GpuWorld::apply_grown_capacity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 673 */

void pdb_1409d2e70(longlong *param_1,byte param_2,byte *param_3,byte *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  byte bStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  undefined1 uStack_c1;
  byte *pbStack_c0;
  code *pcStack_b8;
  byte **ppbStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  byte **ppbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  code *pcStack_40;
  byte **ppbStack_38;
  code *pcStack_30;
  byte **ppbStack_28;
  code *pcStack_20;
  
  if (param_4 != param_3) {
    bStack_c3 = param_2;
    pbStack_60 = param_3;
    pbStack_58 = param_4;
    if (2 < *_DAT_143ca8e90) {
      pbStack_48 = &bStack_c3;
      pcStack_40 = pdb_1409d4a30;
      ppbStack_38 = &pbStack_60;
      pcStack_30 = pdb_140f72a40;
      ppbStack_28 = &pbStack_58;
      pcStack_20 = pdb_140f72a40;
      pbStack_c0 = (byte *)0x0;
      pcStack_b8 = (code *)&UNK_14302d52e;
      ppbStack_b0 = (byte **)0x25;
      pcStack_a8 = (code *)0x0;
      puStack_a0 = &UNK_14302d120;
      uStack_98 = 0x30;
      uStack_90 = 3;
      puStack_88 = &UNK_14302d52e;
      uStack_80 = 0x25;
      uStack_78 = 0x2ce00000001;
      puStack_70 = &UNK_14302d6d8;
      ppbStack_68 = &pbStack_48;
      pdb_140f332f0(&uStack_c1,&pbStack_c0);
    }
    uVar2 = (ulonglong)param_2;
    if ((byte *)param_1[uVar2 + 0x24b] != param_4) {
      pbVar4 = (byte *)0x100000;
      bStack_c4 = param_2;
      pbStack_50 = param_4;
      if ((0xfffd1bfU >> (param_2 & 0x1f) & 1) == 0) {
        if ((0x2840U >> (param_2 & 0x1f) & 1) == 0) {
          pbStack_c0 = &bStack_c4;
          pcStack_b8 = pdb_140a593a0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14303d454,&pbStack_c0,&UNK_14303d488);
        }
      }
      else {
        pbVar4 = *(byte **)(&UNK_14302dad0 + uVar2 * 8);
      }
      if (pbVar4 < param_4) {
        pbStack_c0 = &bStack_c4;
        pcStack_b8 = pdb_140a593a0;
        ppbStack_b0 = &pbStack_50;
        pcStack_a8 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14303d4a0,&pbStack_c0,&UNK_14303d4d8);
      }
      bStack_c2 = param_2;
      pbStack_48 = param_4;
      if (((ulonglong)param_4 & 0x3f) != 0) {
        pbStack_c0 = &bStack_c2;
        pcStack_b8 = pdb_140a593a0;
        ppbStack_b0 = &pbStack_48;
        pcStack_a8 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14303d4f0,&pbStack_c0,&UNK_14303d530);
      }
      param_1[uVar2 + 0x24b] = (longlong)param_4;
      *(undefined1 *)(param_1 + 0x26a) = 1;
    }
    lVar3 = param_1[1];
    lVar1 = param_1[2];
    lVar5 = 0;
    do {
      if (lVar1 == lVar5) {
        if (lVar1 == *param_1) {
          pdb_142d7e910(param_1);
          lVar3 = param_1[1];
        }
        *(byte *)(lVar3 + lVar1) = param_2;
        param_1[2] = lVar1 + 1;
        return;
      }
      pbVar4 = (byte *)(lVar3 + lVar5);
      lVar5 = lVar5 + 1;
    } while (*pbVar4 != param_2);
  }
  return;
}

