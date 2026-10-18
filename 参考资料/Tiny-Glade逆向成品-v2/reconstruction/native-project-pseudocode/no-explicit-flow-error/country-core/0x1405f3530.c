// VA 0x1405f3530, PDB extent 1991 bytes
// country_core::systems::save::save_game::write_json_sections<std::fs::File>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   country_core::systems::save::save_game::write_json_sections<std::fs::File>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 1991 */

undefined8
pdb_1405f3530(undefined1 *param_1,undefined8 *******param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  code cVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *******pppppppuVar8;
  code *pcVar9;
  undefined8 *******pppppppuVar10;
  code *pcVar11;
  undefined8 *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  code *pcStack_88;
  code *pcStack_80;
  undefined1 uStack_71;
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 *******pppppppuStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar1 = param_1 + (longlong)param_2 * 0x28;
  uStack_98 = 0;
  do {
    if (param_1 == puVar1) {
      return uStack_98;
    }
    pppppppuStack_a8 = (undefined8 *******)pdb_140b80f90(param_1);
    pppppppuStack_90 = &pppppppuStack_a8;
    pcStack_88 = pdb_1402ed400;
    pppppppuStack_a0 = param_2;
    pdb_140f60760(&pppppppuStack_70,&UNK_142f74c60,&pppppppuStack_90);
    pppppppuStack_58 = pppppppuStack_70;
    pcStack_50 = pcStack_68;
    pcVar11 = pcStack_68;
    pcVar2 = pcStack_60;
    while (pcVar2 != (code *)0x0) {
      pcVar7 = pcVar11;
      pppppppuStack_70 = (undefined8 *******)pdb_140f5aed0(param_3,pcVar11,pcVar2);
      pcStack_68 = pcVar7;
      if (pppppppuStack_70 == (undefined8 *******)0x1) {
        switch((uint)pcVar7 & 3) {
        case 0:
          cVar3 = pcVar7[0x10];
          break;
        case 1:
          cVar3 = pcVar7[0xf];
          break;
        case 2:
          goto code_r0x0001405f3690;
        case 3:
          cVar3 = SUB81((ulonglong)pcVar7 >> 0x20,0);
          if (0x29 < (uint)((ulonglong)pcVar7 >> 0x20)) {
            cVar3 = (code)0x2a;
          }
        }
        if (cVar3 != (code)0x23) {
code_r0x0001405f3690:
          if (pcVar7 != (code *)0x0) goto code_r0x0001405f3976;
          break;
        }
        pdb_1404b38e0(&pcStack_68);
      }
      else {
        if (pcVar7 == (code *)0x0) {
          pcVar7 = (code *)&UNK_142f52c60;
code_r0x0001405f3976:
          uStack_98 = pdb_142d88fc0(pcVar7);
          goto LAB_1405f3997;
        }
        if (pcVar2 < pcVar7) {
          pdb_142dc8420(pcVar7,pcVar2,pcVar2,&UNK_142f52ce8);
          goto LAB_1405f3adf;
        }
        pcVar11 = pcVar11 + (longlong)pcVar7;
        pcVar2 = pcVar2 + -(longlong)pcVar7;
      }
    }
    pppppppuVar8 = pppppppuStack_58;
    if (pppppppuStack_58 != (undefined8 *******)0x0) {
      pub_1406abac0((byte *)pcStack_50,(ulonglong)pppppppuStack_58,1);
    }
    lVar5 = pdb_140f5aef0(param_3);
    if (lVar5 == 1) {
      pppppppuStack_70 = pppppppuVar8;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f74ec0,0x2b,&pppppppuStack_70,&UNK_142f74ea0,&UNK_142f74c68);
    }
    pppppppuStack_90 = (undefined8 *******)0x0;
    pcStack_88 = (code *)0x1;
    pcStack_80 = (code *)0x0;
    pcStack_60 = (code *)0x60000020;
    pcStack_68 = (code *)&UNK_142f74d90;
    pppppppuStack_70 = &pppppppuStack_90;
    cVar4 = pdb_140de0ce0(param_1 + 8,&pppppppuStack_70);
    pppppppuVar10 = pppppppuStack_90;
    pcVar7 = pcStack_88;
    pcVar11 = pcStack_88;
    pcVar2 = pcStack_80;
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f74dc0,0x37,&uStack_71,&UNK_142f74e80,&UNK_142f74e68);
    }
    while (pcStack_50 = pcVar7, pppppppuStack_58 = pppppppuVar10, pcVar2 != (code *)0x0) {
      pcVar9 = pcVar11;
      pppppppuStack_70 = (undefined8 *******)pdb_140f5aed0(param_3,pcVar11,pcVar2);
      pcStack_68 = pcVar9;
      if (pppppppuStack_70 == (undefined8 *******)0x1) {
        switch((uint)pcVar9 & 3) {
        case 0:
          cVar3 = pcVar9[0x10];
          break;
        case 1:
          cVar3 = pcVar9[0xf];
          break;
        case 2:
          goto code_r0x0001405f37d0;
        case 3:
          cVar3 = SUB81((ulonglong)pcVar9 >> 0x20,0);
          if (0x29 < (uint)((ulonglong)pcVar9 >> 0x20)) {
            cVar3 = (code)0x2a;
          }
        }
        if (cVar3 != (code)0x23) {
code_r0x0001405f37d0:
          if (pcVar9 != (code *)0x0) goto code_r0x0001405f398b;
          break;
        }
        pdb_1404b38e0(&pcStack_68);
        pppppppuVar10 = pppppppuStack_58;
        pcVar7 = pcStack_50;
      }
      else {
        if (pcVar9 == (code *)0x0) {
          pcVar9 = (code *)&UNK_142f52c60;
code_r0x0001405f398b:
          uStack_98 = pdb_142d88fc0(pcVar9);
LAB_1405f3997:
          pcVar11 = pcStack_50;
          pppppppuVar8 = pppppppuStack_58;
          if (pppppppuStack_58 == (undefined8 *******)0x0) {
            return uStack_98;
          }
          goto LAB_1405f39ea;
        }
        if (pcVar2 < pcVar9) {
          pdb_142dc8420(pcVar9,pcVar2,pcVar2,&UNK_142f52ce8);
          goto LAB_1405f3adf;
        }
        pcVar11 = pcVar11 + (longlong)pcVar9;
        pppppppuVar10 = pppppppuStack_58;
        pcVar7 = pcStack_50;
        pcVar2 = pcVar2 + -(longlong)pcVar9;
      }
    }
    if (pppppppuStack_58 != (undefined8 *******)0x0) {
      pub_1406abac0((byte *)pcStack_50,(ulonglong)pppppppuStack_58,1);
    }
    uVar6 = pdb_140b80f80(param_1);
    pdb_140686380(&pppppppuStack_90,&UNK_142f74c80,1,uVar6);
    pppppppuStack_a0 = (undefined8 *******)pdb_140001020;
    pppppppuStack_a8 = &pppppppuStack_90;
    pdb_140f60760(&pppppppuStack_70,&UNK_142f74c81,&pppppppuStack_a8);
    pppppppuStack_58 = pppppppuStack_70;
    pcStack_50 = pcStack_68;
    pcVar11 = pcStack_68;
    pcVar2 = pcStack_60;
    while (pcVar2 != (code *)0x0) {
      pcVar7 = pcVar11;
      pppppppuStack_70 = (undefined8 *******)pdb_140f5aed0(param_3,pcVar11,pcVar2);
      pcStack_68 = pcVar7;
      if (pppppppuStack_70 == (undefined8 *******)0x1) {
        switch((uint)pcVar7 & 3) {
        case 0:
          cVar3 = pcVar7[0x10];
          break;
        case 1:
          cVar3 = pcVar7[0xf];
          break;
        case 2:
          goto code_r0x0001405f3900;
        case 3:
          cVar3 = SUB81((ulonglong)pcVar7 >> 0x20,0);
          if (0x29 < (uint)((ulonglong)pcVar7 >> 0x20)) {
            cVar3 = (code)0x2a;
          }
        }
        if (cVar3 != (code)0x23) {
code_r0x0001405f3900:
          if (pcVar7 != (code *)0x0) {
code_r0x0001405f39b3:
            uStack_98 = pdb_142d88fc0(pcVar7);
            if (pppppppuStack_58 != (undefined8 *******)0x0) {
              pub_1406abac0((byte *)pcStack_50,(ulonglong)pppppppuStack_58,1);
            }
            pcVar11 = pcStack_88;
            pppppppuVar8 = pppppppuStack_90;
            if (pppppppuStack_90 == (undefined8 *******)0x0) {
              return uStack_98;
            }
LAB_1405f39ea:
            pub_1406abac0((byte *)pcVar11,(ulonglong)pppppppuVar8,1);
            return uStack_98;
          }
          break;
        }
        pdb_1404b38e0(&pcStack_68);
      }
      else {
        if (pcVar7 == (code *)0x0) {
          pcVar7 = (code *)&UNK_142f52c60;
          goto code_r0x0001405f39b3;
        }
        if (pcVar2 < pcVar7) {
          pdb_142dc8420(pcVar7,pcVar2,pcVar2,&UNK_142f52ce8);
LAB_1405f3adf:
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        pcVar11 = pcVar11 + (longlong)pcVar7;
        pcVar2 = pcVar2 + -(longlong)pcVar7;
      }
    }
    pppppppuVar10 = pppppppuStack_58;
    if (pppppppuStack_58 != (undefined8 *******)0x0) {
      pub_1406abac0((byte *)pcStack_50,(ulonglong)pppppppuStack_58,1);
    }
    lVar5 = pdb_140f5aef0(param_3);
    if (lVar5 == 1) {
      pppppppuStack_70 = pppppppuVar10;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142f74ec0,0x2b,&pppppppuStack_70,&UNK_142f74ea0,&UNK_142f74c88);
    }
    pdb_1403b1b30(&pppppppuStack_70,param_4,*param_1,pppppppuVar8,pppppppuVar10);
    param_2 = pppppppuStack_90;
    if (pppppppuStack_90 != (undefined8 *******)0x0) {
      pub_1406abac0((byte *)pcStack_88,(ulonglong)pppppppuStack_90,1);
    }
    param_1 = param_1 + 0x28;
  } while( true );
}

