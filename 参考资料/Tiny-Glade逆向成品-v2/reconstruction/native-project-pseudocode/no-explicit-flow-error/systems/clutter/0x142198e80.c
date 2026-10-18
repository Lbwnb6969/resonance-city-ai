// VA 0x142198e80, PDB extent 329 bytes
// system_clutter::inter_shape_stitches::detect_intra_shape_corners::stitch_kind_for_walls_at_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_clutter::inter_shape_stitches::detect_intra_shape_corners::stitch_kind_for_walls_at_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_shape_stitches/detect_intra_shape_corners.rs
   Extent: 329 */

ulonglong pdb_142198e80(longlong param_1,longlong param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar5;
  
  cVar2 = pdb_1408ff990(param_1 + 0x2a3);
  bVar3 = 2;
  if (cVar2 == '\0') {
    cVar2 = pdb_140901380(param_1 + 0x29f);
    if (cVar2 == '\0') {
      cVar2 = pdb_1408ff980(param_1 + 0x29f);
      fVar5 = extraout_XMM0_Da;
      if (((cVar2 == '\0') || (1 < *(uint *)(param_1 + 600))) ||
         (fVar5 = *(float *)(param_1 + 0x294), fVar5 <= 0.0)) {
        bVar1 = false;
      }
      else {
        fVar5 = (float)pdb_14092f940(param_1);
        bVar1 = true;
      }
      bVar3 = 3;
      if (bVar1) {
        bVar3 = (fVar5 <= param_3) * '\x02' + 1;
      }
      cVar2 = pdb_1408ff990(param_2 + 0x2a3);
      goto joined_r0x000142198ece;
    }
    bVar3 = 0;
  }
  cVar2 = pdb_1408ff990(param_2 + 0x2a3);
joined_r0x000142198ece:
  bVar4 = 2;
  if (cVar2 == '\0') {
    cVar2 = pdb_140901380(param_2 + 0x29f);
    if (cVar2 == '\0') {
      cVar2 = pdb_1408ff980(param_2 + 0x29f);
      fVar5 = extraout_XMM0_Da_00;
      if (((cVar2 == '\0') || (1 < *(uint *)(param_2 + 600))) ||
         (fVar5 = *(float *)(param_2 + 0x294), fVar5 <= 0.0)) {
        bVar1 = false;
      }
      else {
        fVar5 = (float)pdb_14092f940(param_2);
        bVar1 = true;
      }
      bVar4 = 3;
      if (bVar1) {
        bVar4 = (fVar5 <= param_3) * '\x02' + 1;
      }
    }
    else {
      bVar4 = 0;
    }
  }
  return (ulonglong)CONCAT21(CONCAT11(bVar4,bVar3),1 < bVar4 || 1 < bVar3);
}

