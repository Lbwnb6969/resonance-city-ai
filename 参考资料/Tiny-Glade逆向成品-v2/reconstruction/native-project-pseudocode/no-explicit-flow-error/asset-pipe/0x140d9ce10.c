// VA 0x140d9ce10, PDB extent 544 bytes
// asset_pipe::texture::resolve_opts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture::resolve_opts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture.rs
   Extent: 544 */

undefined4 * pdb_140d9ce10(undefined4 *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if (SBORROW8(0,*(longlong *)(param_2 + 0x38))) {
    lVar11 = *(longlong *)(param_2 + 0x28);
    if (lVar11 == 0) {
      puVar8 = &UNK_1431e60cf;
      uVar9 = 0x1b;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x20);
      cVar2 = *(char *)(lVar7 + 0x34);
      iVar6 = *(int *)(lVar7 + 0x2c);
      cVar3 = *(char *)(lVar7 + 0x37);
      cVar4 = *(char *)(lVar7 + 0x35);
      cVar5 = *(char *)(lVar7 + 0x36);
      if ((*(uint *)(lVar7 + 0x20) & 1) == 0) {
        if (iVar6 == 2) {
          lVar11 = lVar11 * 0x50;
          lVar10 = lVar7;
          do {
            if (lVar11 == 0) goto LAB_140d9cfed;
            if (((*(char *)(lVar10 + 0x20) != '\0') || (*(char *)(lVar10 + 0x34) != cVar2)) ||
               ((*(int *)(lVar10 + 0x2c) != 2 ||
                (((*(int *)(lVar10 + 0x30) != *(int *)(lVar7 + 0x30) ||
                  (*(char *)(lVar10 + 0x37) != cVar3)) || (*(char *)(lVar10 + 0x35) != cVar4))))))
            break;
            lVar11 = lVar11 + -0x50;
            pcVar1 = (char *)(lVar10 + 0x36);
            lVar10 = lVar10 + 0x50;
          } while (*pcVar1 == cVar5);
        }
        else {
          lVar11 = lVar11 * 0x50;
          lVar10 = lVar7;
          do {
            if (lVar11 == 0) goto LAB_140d9cfed;
            if ((((*(char *)(lVar10 + 0x20) != '\0') || (*(char *)(lVar10 + 0x34) != cVar2)) ||
                (*(int *)(lVar10 + 0x2c) != iVar6)) ||
               ((*(char *)(lVar10 + 0x37) != cVar3 || (*(char *)(lVar10 + 0x35) != cVar4)))) break;
            lVar11 = lVar11 + -0x50;
            pcVar1 = (char *)(lVar10 + 0x36);
            lVar10 = lVar10 + 0x50;
          } while (*pcVar1 == cVar5);
        }
      }
      else if (iVar6 == 2) {
        lVar11 = lVar11 * 0x50;
        lVar10 = lVar7;
        do {
          if (lVar11 == 0) goto LAB_140d9cfed;
          if (((((*(int *)(lVar10 + 0x20) != 1) ||
                (*(longlong *)(lVar10 + 0x24) != *(longlong *)(lVar7 + 0x24))) ||
               (*(char *)(lVar10 + 0x34) != cVar2)) ||
              ((*(int *)(lVar10 + 0x2c) != 2 || (*(int *)(lVar10 + 0x30) != *(int *)(lVar7 + 0x30)))
              )) || ((*(char *)(lVar10 + 0x37) != cVar3 || (*(char *)(lVar10 + 0x35) != cVar4))))
          break;
          lVar11 = lVar11 + -0x50;
          pcVar1 = (char *)(lVar10 + 0x36);
          lVar10 = lVar10 + 0x50;
        } while (*pcVar1 == cVar5);
      }
      else {
        lVar11 = lVar11 * 0x50;
        lVar10 = lVar7;
        do {
          if (lVar11 == 0) goto LAB_140d9cfed;
          if ((((*(int *)(lVar10 + 0x20) != 1) ||
               (*(longlong *)(lVar10 + 0x24) != *(longlong *)(lVar7 + 0x24))) ||
              ((*(char *)(lVar10 + 0x34) != cVar2 ||
               ((*(int *)(lVar10 + 0x2c) != iVar6 || (*(char *)(lVar10 + 0x37) != cVar3)))))) ||
             (*(char *)(lVar10 + 0x35) != cVar4)) break;
          lVar11 = lVar11 + -0x50;
          pcVar1 = (char *)(lVar10 + 0x36);
          lVar10 = lVar10 + 0x50;
        } while (*pcVar1 == cVar5);
      }
      puVar8 = &UNK_1431e6078;
      uVar9 = 0x57;
    }
    uVar9 = pdb_142dff660(puVar8,uVar9);
    *(undefined8 *)(param_1 + 2) = uVar9;
    *param_1 = 2;
    return param_1;
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x30);
  uVar12 = *(undefined4 *)(param_2 + 0x20);
  uVar13 = *(undefined4 *)(param_2 + 0x24);
  uVar14 = *(undefined4 *)(param_2 + 0x28);
  uVar15 = *(undefined4 *)(param_2 + 0x2c);
LAB_140d9cffc:
  *param_1 = uVar12;
  param_1[1] = uVar13;
  param_1[2] = uVar14;
  param_1[3] = uVar15;
  return param_1;
LAB_140d9cfed:
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar7 + 0x30);
  uVar12 = *(undefined4 *)(lVar7 + 0x20);
  uVar13 = *(undefined4 *)(lVar7 + 0x24);
  uVar14 = *(undefined4 *)(lVar7 + 0x28);
  uVar15 = *(undefined4 *)(lVar7 + 0x2c);
  goto LAB_140d9cffc;
}

