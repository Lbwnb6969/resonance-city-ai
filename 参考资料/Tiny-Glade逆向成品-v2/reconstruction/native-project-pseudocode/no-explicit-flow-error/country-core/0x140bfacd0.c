// VA 0x140bfacd0, PDB extent 692 bytes
// country_core::systems::paths::draw_path::DrawState::update_bounded_by_glade
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::paths::draw_path::DrawState::update_bounded_by_glade
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/draw_path.rs
   Extent: 692 */

char pdb_140bfacd0(char *param_1,byte param_2,uint *param_3,int *param_4,longlong *param_5,
                  longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int *piStack_60;
  
  if (DAT_143cb2d0c == '\0') {
    uVar4 = *(undefined8 *)param_3;
    fVar13 = (float)((ulonglong)uVar4 >> 0x20);
    iVar1 = *param_4;
    piStack_60 = param_4;
    if (iVar1 == 1) {
      cVar8 = pdb_140df1700();
    }
    else {
      cVar8 = pdb_140def450(param_4 + 1,uVar4,fVar13);
    }
    cVar10 = '\x01';
    if (cVar8 == '\0') {
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      lVar2 = *param_5;
      lVar3 = *(longlong *)(lVar2 + 0x30);
      uVar5 = *(undefined8 *)(lVar2 + 0x40);
      if (lVar3 == *(longlong *)(lVar2 + 0x20)) {
        pdb_142d7e8a0(lVar2 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar3 * 8) = uVar5;
      *(longlong *)(lVar2 + 0x30) = lVar3 + 1;
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
      cVar10 = '\0';
      if ((param_2 != 2) && (1 < (byte)(*param_1 - 1U))) {
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        lVar2 = *param_6;
        lVar3 = *(longlong *)(lVar2 + 0x30);
        uVar5 = *(undefined8 *)(lVar2 + 0x40);
        if (lVar3 == *(longlong *)(lVar2 + 0x20)) {
          pdb_142d7e8a0(lVar2 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar3 * 8) = uVar5;
        *(longlong *)(lVar2 + 0x30) = lVar3 + 1;
        *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
        cVar10 = '\0';
      }
    }
    uVar11 = 3;
    if (1 < param_2) {
      uVar11 = (uint)(byte)(param_2 - 2);
    }
    cVar8 = '\x01';
    if (uVar11 - 1 < 2) {
      if ((byte)(*param_1 - 1U) < 2) {
        *param_1 = '\x02';
        if ((char)iVar1 == '\0') {
          fVar12 = (float)*(undefined8 *)(piStack_60 + 1) - (float)uVar4;
          fVar13 = (float)((ulonglong)*(undefined8 *)(piStack_60 + 1) >> 0x20) - fVar13;
          cVar8 = '\x01';
          cVar10 = '\x03';
          if (SQRT(fVar13 * fVar13 + fVar12 * fVar12) <= (float)piStack_60[3] + (float)piStack_60[3]
             ) {
            return '\x01';
          }
        }
        else {
          uVar5 = *(undefined8 *)(param_4 + 5);
          lStack_88 = *(longlong *)(param_4 + 1);
          uStack_80 = *(undefined8 *)(param_4 + 3);
          uStack_78._0_4_ = (undefined4)uVar5;
          uStack_78._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uVar6 = uStack_78._4_4_;
          uVar7 = (undefined4)uStack_78;
          uStack_78 = uVar5;
          cVar9 = pdb_140df24f0(&lStack_88,uVar4,fVar13,uVar7,uVar6);
          cVar8 = '\x01';
          cVar10 = '\x03';
          if (cVar9 != '\0') {
            return '\x01';
          }
        }
      }
      goto LAB_140bfaf39;
    }
    if (uVar11 == 0) {
      cVar10 = '\0';
      goto LAB_140bfaf39;
    }
  }
  else {
    uStack_80 = *(undefined8 *)(param_3 + 1);
    uStack_78 = CONCAT44(uStack_78._4_4_,param_3[3]);
    lStack_88 = (ulonglong)*param_3 << 0x20;
    cVar8 = pdb_140b404c0(param_4,&lStack_88);
    if (cVar8 == '\0') {
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      lVar2 = *param_5;
      lVar3 = *(longlong *)(lVar2 + 0x30);
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
      if (lVar3 == *(longlong *)(lVar2 + 0x20)) {
        cVar8 = '\0';
        pdb_142d7e8a0(lVar2 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar3 * 8) = uVar4;
      *(longlong *)(lVar2 + 0x30) = lVar3 + 1;
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
      if (param_2 != 2) {
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        lVar2 = *param_6;
        lVar3 = *(longlong *)(lVar2 + 0x30);
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        if (lVar3 == *(longlong *)(lVar2 + 0x20)) {
          pdb_142d7e8a0(lVar2 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar3 * 8) = uVar4;
        *(longlong *)(lVar2 + 0x30) = lVar3 + 1;
        *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
      }
    }
    uVar11 = 3;
    if (1 < param_2) {
      uVar11 = (uint)(byte)(param_2 - 2);
    }
    if (uVar11 - 1 < 2) {
      cVar10 = '\x02';
      if (1 < (byte)(*param_1 - 1U)) {
        cVar10 = cVar8;
      }
      goto LAB_140bfaf39;
    }
    cVar10 = '\0';
    if (uVar11 == 0) goto LAB_140bfaf39;
  }
  cVar10 = ((byte)(*param_1 - 1U) < 2) * '\x03';
LAB_140bfaf39:
  *param_1 = cVar10;
  return cVar8;
}

