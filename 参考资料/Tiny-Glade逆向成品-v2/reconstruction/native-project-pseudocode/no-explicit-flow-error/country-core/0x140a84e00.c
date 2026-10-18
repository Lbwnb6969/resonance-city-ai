// VA 0x140a84e00, PDB extent 720 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::contains_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::contains_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 720 */

bool pdb_140a84e00(int *param_1,char *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 in_XMM1_Qa;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar10 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  uVar4 = (undefined4)in_XMM1_Qa;
  piVar1 = param_1 + 1;
  pcVar6 = param_2 + 4;
  if (*param_1 == 1) {
    if (*param_2 == '\0') {
      uVar10 = 0;
      uVar11 = 0;
      uVar4 = pdb_140def2c0(pcVar6,0);
      cVar3 = pdb_140df1700(piVar1,uVar4,CONCAT44(uVar11,uVar10));
      if (cVar3 != '\0') {
        uVar11 = 0;
        uVar4 = _DAT_143043160;
        uVar10 = pdb_140def2c0(pcVar6,_DAT_143043160);
        cVar3 = pdb_140df1700(piVar1,uVar10,CONCAT44(uVar11,uVar4));
        if (cVar3 != '\0') {
          uVar11 = 0;
          uVar4 = _DAT_143011014;
          uVar10 = pdb_140def2c0(pcVar6,_DAT_143011014);
          cVar3 = pdb_140df1700(piVar1,uVar10,CONCAT44(uVar11,uVar4));
          if (cVar3 != '\0') {
            uVar11 = 0;
            uVar4 = _DAT_142e36f50;
            uVar10 = pdb_140def2c0(pcVar6,_DAT_142e36f50);
            cVar3 = pdb_140df1700(piVar1,uVar10,CONCAT44(uVar11,uVar4));
            if (cVar3 != '\0') {
              uVar11 = 0;
              uVar4 = _DAT_143043164;
              uVar10 = pdb_140def2c0(pcVar6,_DAT_143043164);
              cVar3 = pdb_140df1700(piVar1,uVar10,CONCAT44(uVar11,uVar4));
              if (cVar3 != '\0') {
                fVar7 = _DAT_143043168;
                uVar4 = pdb_140def2c0(pcVar6,_DAT_143043168);
                fVar13 = extraout_XMM0_Da_01;
                goto LAB_140a84e98;
              }
            }
          }
        }
      }
    }
    else {
      uVar8 = pdb_140df3e10(pcVar6,0);
      cVar3 = pdb_140df1700(piVar1,(int)uVar8,CONCAT44(uVar10,uVar4));
      if (cVar3 != '\0') {
        uVar9 = pdb_140df3e10(pcVar6,1);
        cVar3 = pdb_140df1700(piVar1,(int)uVar9,uVar8);
        if (cVar3 != '\0') {
          fVar7 = (float)pdb_140df3e10(pcVar6,2);
          cVar3 = pdb_140df1700(piVar1,fVar7,uVar9);
          if (cVar3 != '\0') {
            uVar4 = pdb_140df3e10(pcVar6,3);
            fVar13 = extraout_XMM0_Da;
LAB_140a84e98:
            fVar14 = (float)*(undefined8 *)piVar1;
            fVar15 = (float)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
            fVar17 = (float)((ulonglong)*(undefined8 *)(param_1 + 3) >> 0x20);
            fVar16 = (float)*(undefined8 *)(param_1 + 3);
            uVar8 = *(undefined8 *)(param_1 + 5);
            uVar9 = *(undefined8 *)(param_1 + 5);
            fVar12 = (fVar7 - fVar17) * fVar15 + (fVar13 - fVar16) * fVar14;
            fVar13 = (fVar7 - fVar17) * fVar14 +
                     (fVar13 - fVar16) * (float)((uint)fVar15 ^ _UNK_142e37824);
            auVar2._4_4_ = -(uint)((float)(_UNK_142e37824 ^ (uint)fVar13) <=
                                  ((float)((ulonglong)uVar8 >> 0x20) + 0.0) * _UNK_142e36f44);
            auVar2._0_4_ = -(uint)((float)(_DAT_142e37820 ^ (uint)fVar12) <=
                                  ((float)uVar8 + 0.0) * _DAT_142e36f40);
            auVar2._8_4_ = -(uint)(fVar12 <= ((float)uVar9 + 0.0) * _UNK_142e36f48);
            auVar2._12_4_ =
                 -(uint)(fVar13 <= ((float)((ulonglong)uVar9 >> 0x20) + 0.0) * _UNK_142e36f4c);
            iVar5 = movmskps(uVar4,auVar2);
            return iVar5 == 0xf;
          }
        }
      }
    }
  }
  else if (*param_2 == '\0') {
    uVar10 = 0;
    uVar11 = 0;
    uVar4 = pdb_140def2c0(pcVar6,0);
    cVar3 = pdb_140def450(piVar1,uVar4,CONCAT44(uVar11,uVar10));
    if (cVar3 != '\0') {
      uVar11 = 0;
      uVar4 = _DAT_143043160;
      uVar10 = pdb_140def2c0(pcVar6,_DAT_143043160);
      cVar3 = pdb_140def450(piVar1,uVar10,CONCAT44(uVar11,uVar4));
      if (cVar3 != '\0') {
        uVar11 = 0;
        uVar4 = _DAT_143011014;
        uVar10 = pdb_140def2c0(pcVar6,_DAT_143011014);
        cVar3 = pdb_140def450(piVar1,uVar10,CONCAT44(uVar11,uVar4));
        if (cVar3 != '\0') {
          uVar11 = 0;
          uVar4 = _DAT_142e36f50;
          uVar10 = pdb_140def2c0(pcVar6,_DAT_142e36f50);
          cVar3 = pdb_140def450(piVar1,uVar10,CONCAT44(uVar11,uVar4));
          if (cVar3 != '\0') {
            uVar11 = 0;
            uVar4 = _DAT_143043164;
            uVar10 = pdb_140def2c0(pcVar6,_DAT_143043164);
            cVar3 = pdb_140def450(piVar1,uVar10,CONCAT44(uVar11,uVar4));
            if (cVar3 != '\0') {
              fVar7 = _DAT_143043168;
              pdb_140def2c0(pcVar6,_DAT_143043168);
              fVar13 = extraout_XMM0_Da_02;
              goto LAB_140a84f27;
            }
          }
        }
      }
    }
  }
  else {
    uVar8 = pdb_140df3e10(pcVar6,0);
    cVar3 = pdb_140def450(piVar1,(int)uVar8,CONCAT44(uVar10,uVar4));
    if (cVar3 != '\0') {
      uVar9 = pdb_140df3e10(pcVar6,1);
      cVar3 = pdb_140def450(piVar1,(int)uVar9,uVar8);
      if (cVar3 != '\0') {
        fVar7 = (float)pdb_140df3e10(pcVar6,2);
        cVar3 = pdb_140def450(piVar1,fVar7,uVar9);
        if (cVar3 != '\0') {
          pdb_140df3e10(pcVar6,3);
          fVar13 = extraout_XMM0_Da_00;
LAB_140a84f27:
          fVar13 = fVar13 - (float)*(undefined8 *)piVar1;
          fVar7 = fVar7 - (float)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
          return fVar7 * fVar7 + fVar13 * fVar13 < (float)param_1[3] * (float)param_1[3];
        }
      }
    }
  }
  return false;
}

