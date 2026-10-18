// VA 0x14089e6a0, PDB extent 717 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::find_best_neighbor_alignments
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::find_best_neighbor_alignments
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 717 */

longlong * pdb_14089e6a0(longlong *param_1,undefined4 *param_2,longlong param_3,byte param_4)

{
  char *pcVar1;
  float fVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  float fVar8;
  char *pcVar9;
  ulonglong uVar10;
  float fVar12;
  float fVar13;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_9c;
  longlong lStack_98;
  byte *pbStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined7 uVar11;
  
  fVar8 = _DAT_142fa5b20;
  uStack_80 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    lStack_98 = 0;
    pbStack_90 = (byte *)0x4;
    lStack_88 = 0;
    pcVar3 = *(char **)(param_2 + 4);
    lVar4 = *(longlong *)(param_2 + 6);
    pcVar9 = pcVar3;
    fVar12 = _DAT_142f6e3d8;
    while (pcVar9 != pcVar3 + lVar4 * 0x18) {
      uVar11 = (undefined7)((ulonglong)pcVar9 >> 8);
      uVar10 = CONCAT71(uVar11,1);
      if (*pcVar9 != '\0') {
        if (*pcVar9 != '\x01') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143013770,0x28,&UNK_143013950);
        }
        uVar10 = CONCAT71(uVar11,((float)((ulonglong)*(undefined8 *)(pcVar9 + 0xc) >> 0x20) *
                                  (float)*(undefined8 *)(pcVar9 + 4) <=
                                 (float)*(undefined8 *)(pcVar9 + 0xc) *
                                 (float)((ulonglong)*(undefined8 *)(pcVar9 + 4) >> 0x20)) * '\x02' +
                                 '\x02');
      }
      fVar2 = *(float *)(pcVar9 + 0x14);
      pdb_14089e6a0(&uStack_c8,param_2 + 8,param_3 + -1,
                    CONCAT71((int7)((uVar10 & 0xffffffff) >> 8),
                             (byte)(uVar10 & 0xffffffff) | param_4));
      fVar13 = 0.0;
      if (((byte)uVar10 & param_4) != 0) {
        fVar13 = fVar8;
      }
      pcVar1 = pcVar9 + 0x18;
      lVar5 = CONCAT44(uStack_c4,uStack_c8);
      pbVar6 = (byte *)CONCAT44(uStack_bc,uStack_c0);
      fVar13 = fVar2 + fStack_b0 + fVar13;
      if (fVar12 < fVar13) {
        lVar7 = CONCAT44(uStack_b4,uStack_b8);
        if (lStack_98 != 0) {
          pub_1406abac0(pbStack_90,lStack_98 * 0x18,4);
        }
        uStack_9c = *param_2;
        uStack_b8 = *(undefined4 *)(pcVar9 + 0x10);
        uStack_c8 = *(undefined4 *)pcVar9;
        uStack_c4 = *(undefined4 *)(pcVar9 + 4);
        uStack_c0 = *(undefined4 *)(pcVar9 + 8);
        uStack_bc = *(undefined4 *)(pcVar9 + 0xc);
        lStack_98 = lVar5;
        pbStack_90 = pbVar6;
        lStack_88 = lVar7;
        if (lVar7 == lVar5) {
          pdb_142d89250(&lStack_98);
        }
        pbVar6 = pbStack_90;
        if (lVar7 != 0) {
          pub_142e32770(pbStack_90 + 0x18,pbStack_90,lVar7 * 0x18);
        }
        *(undefined4 *)pbVar6 = uStack_9c;
        *(undefined4 *)(pbVar6 + 4) = uStack_c8;
        *(undefined4 *)(pbVar6 + 8) = uStack_c4;
        *(undefined4 *)(pbVar6 + 0xc) = uStack_c0;
        *(undefined4 *)(pbVar6 + 0x10) = uStack_bc;
        *(undefined4 *)(pbVar6 + 0x14) = uStack_b8;
        lStack_88 = lVar7 + 1;
        pcVar9 = pcVar1;
        fVar12 = fVar13;
      }
      else {
        pcVar9 = pcVar1;
        if (lVar5 != 0) {
          pub_1406abac0(pbVar6,lVar5 * 0x18,4);
        }
      }
    }
    param_1[2] = lStack_88;
    *param_1 = lStack_98;
    param_1[1] = (longlong)pbStack_90;
    *(float *)(param_1 + 3) = fVar12;
  }
  return param_1;
}

