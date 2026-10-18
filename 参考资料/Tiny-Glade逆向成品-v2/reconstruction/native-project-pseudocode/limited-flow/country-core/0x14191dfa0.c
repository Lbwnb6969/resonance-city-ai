// VA 0x14191dfa0, PDB extent 2472 bytes
// country_core::systems::save::save_game::save_session_meta_to_file<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::save_session_meta_to_file<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 2472 */

ulonglong pdb_14191dfa0(ulonglong *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  byte *pbStack_130;
  ulonglong uStack_128;
  undefined1 auStack_120 [8];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong *puStack_e0;
  ulonglong uStack_d8;
  ulonglong *puStack_d0;
  ulonglong *puStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_99;
  ulonglong *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  ulonglong uStack_70;
  ulonglong *puStack_68;
  ulonglong *puStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_f8 = 0;
  uStack_e8 = 0;
  puStack_e0 = param_1;
  pdb_14007ee60();
  puVar4 = (ulonglong *)pub_1406abab0(7,1);
  if (puVar4 == (ulonglong *)0x0) {
    pdb_142dc7e2a(1,7);
    goto LAB_14191e594;
  }
  pbVar10 = (byte *)((longlong)puVar4 + 3);
  pbVar10[0] = 0x73;
  pbVar10[1] = 0x69;
  pbVar10[2] = 0x6f;
  pbVar10[3] = 0x6e;
  *(undefined4 *)puVar4 = 0x73726576;
  uStack_70 = 7;
  puStack_60 = (ulonglong *)0x7;
  puStack_98 = (ulonglong *)CONCAT71(puStack_98._1_7_,2);
  uStack_90 = (ulonglong *)0x0;
  uStack_88 = 1;
  uStack_84 = 0;
  puStack_68 = puVar4;
  pdb_14192b260(&puStack_c8,&uStack_f8,&uStack_70,&puStack_98);
  switch((ulonglong)puStack_c8 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    uVar5 = CONCAT44(uStack_bc,uStack_c0);
    if (uVar5 != 0) {
      pbVar10 = (byte *)CONCAT44(uStack_b4,uStack_b8);
      uVar7 = 1;
code_r0x00014191e0a3:
      pub_1406abac0(pbVar10,uVar5,uVar7);
    }
    break;
  case 4:
    pbStack_58 = (byte *)CONCAT44(uStack_b4,uStack_b8);
    pdb_14098ae50(pbStack_58,CONCAT44(uStack_ac,uStack_b0));
    if (CONCAT44(uStack_bc,uStack_c0) != 0) {
      uVar5 = CONCAT44(uStack_bc,uStack_c0) << 5;
      uVar7 = 8;
      pbVar10 = pbStack_58;
      goto code_r0x00014191e0a3;
    }
    break;
  default:
    pdb_1409a45e0(&uStack_c0);
  }
  pdb_14007ee60();
  puVar4 = (ulonglong *)pub_1406abab0(5,1);
  if (puVar4 == (ulonglong *)0x0) {
    pdb_142dc7e2a(1,5);
LAB_14191e594:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(byte *)((longlong)puVar4 + 4) = 0x65;
  *(undefined4 *)puVar4 = 0x74617473;
  uStack_70 = 5;
  puStack_60 = (ulonglong *)0x5;
  uStack_49 = 1;
  puStack_68 = puVar4;
  pdb_1418c0c70(&puStack_98,param_2);
  if ((char)puStack_98 == '\x06') {
    puStack_c8 = uStack_90;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143358dc0,0x2b,&puStack_c8,&UNK_143358df0,&UNK_143358b38);
  }
  uStack_b8 = uStack_88;
  uStack_b4 = uStack_84;
  uStack_ac = uStack_7c;
  puStack_c8 = puStack_98;
  uStack_c0 = (undefined4)uStack_90;
  uStack_bc = uStack_90._4_4_;
  uStack_49 = 0;
  pdb_14192b260(&puStack_98,&uStack_f8,&uStack_70,&puStack_c8);
  if (((ulonglong)puStack_98 & 0xff) < 7) {
                    /* WARNING: Could not recover jumptable at 0x00014191e155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK_143358f9c +
                      *(int *)(&UNK_143358f9c + ((ulonglong)puStack_98 & 0xff) * 4)))();
    return uVar5;
  }
  pdb_1409a45e0(&uStack_90);
  uStack_118 = (undefined4)uStack_f8;
  uStack_114 = uStack_f8._4_4_;
  uStack_110 = (undefined4)uStack_f0;
  uStack_10c = uStack_f0._4_4_;
  uStack_108 = uStack_e8;
  auStack_120[0] = 5;
  uStack_100 = *puStack_e0;
  pbStack_130 = (byte *)puStack_e0[1];
  uVar5 = puStack_e0[2];
  uVar7 = uVar5;
  uStack_128 = uVar5;
  pbStack_58 = pbStack_130;
  lVar6 = pdb_140f3eaf0(pbStack_130,uVar5);
  if (lVar6 == 0) {
LAB_14191e21a:
    pdb_140f3e750(&puStack_c8,pbStack_58,uVar5,&UNK_143358b50,3);
    uVar7 = CONCAT44(uStack_bc,uStack_c0);
    uVar8 = CONCAT44(uStack_b4,uStack_b8);
    uStack_70 = 0;
    puStack_68 = (ulonglong *)0x1;
    puStack_60 = (ulonglong *)0x0;
    uStack_88 = 0x60000020;
    uStack_84 = 0;
    uStack_90 = (ulonglong *)&UNK_143358cb0;
    uStack_f8 = uVar7;
    uStack_f0 = uVar8;
    puStack_98 = &uStack_70;
    cVar2 = pdb_140de0ce0(auStack_120,&puStack_98);
    puVar4 = puStack_60;
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143358ce0,0x37,&uStack_99,&UNK_143358da0,&UNK_143358d88);
    }
    uStack_d8 = uStack_70;
    puStack_d0 = puStack_68;
    puStack_98 = (ulonglong *)((ulonglong)puStack_98 & 0xffffffff00000000);
    uStack_90 = (ulonglong *)0x0;
    uStack_88 = 7;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_78 = 0;
    uStack_7f = 1;
    uStack_7c = 1;
    uStack_7d = 1;
    uVar8 = pdb_140f4a2a0(&puStack_98,uVar7,uVar8);
    uVar9 = pdb_141707220(uVar8);
    if ((uVar9 & 1) == 0) {
      uStack_70 = uVar7;
      if (puVar4 != (ulonglong *)0x0) {
        puVar12 = puStack_d0;
        do {
          puVar11 = puVar12;
          puStack_98 = (ulonglong *)pdb_140f5aed0(&uStack_70,puVar12,puVar4);
          uStack_90 = puVar11;
          if (puStack_98 == (ulonglong *)0x1) {
            switch((uint)puVar11 & 3) {
            case 0:
              bVar3 = (byte)puVar11[2];
              break;
            case 1:
              bVar3 = *(byte *)((longlong)puVar11 + 0xf);
              break;
            case 2:
              goto LAB_14191e3b2;
            case 3:
              bVar3 = (byte)((ulonglong)puVar11 >> 0x20);
              if (0x29 < (uint)((ulonglong)puVar11 >> 0x20)) {
                bVar3 = 0x2a;
              }
            }
            if (bVar3 != 0x23) goto LAB_14191e3b2;
            pdb_1404b38e0(&uStack_90);
          }
          else {
            if (puVar11 == (ulonglong *)0x0) {
              puVar11 = (ulonglong *)&UNK_143327418;
              goto LAB_14191e3b2;
            }
            if (puVar4 < puVar11) {
              pdb_142dc8420(puVar11,puVar4,puVar4,&UNK_1433274a0);
              goto LAB_14191e594;
            }
            puVar12 = (ulonglong *)((longlong)puVar12 + (longlong)puVar11);
            puVar4 = (ulonglong *)((longlong)puVar4 - (longlong)puVar11);
          }
        } while (puVar4 != (ulonglong *)0x0);
      }
      puVar11 = (ulonglong *)0x0;
LAB_14191e3b2:
      uVar7 = pdb_141706220(puVar11,&uStack_f8);
      if (uVar7 != 0) {
LAB_14191e3e9:
        CloseHandle(uStack_70);
        goto LAB_14191e3f3;
      }
      uVar8 = pdb_140f3f0a0(&uStack_70);
      uVar7 = pdb_141706930(uVar8,&uStack_f8);
      if (uVar7 != 0) goto LAB_14191e3e9;
      CloseHandle(uStack_70);
      if (uStack_d8 != 0) {
        pub_1406abac0((byte *)puStack_d0,uStack_d8,1);
      }
      pbVar10 = (byte *)CONCAT44(uStack_bc,uStack_c0);
      uVar8 = pdb_140f4f450(pbVar10,CONCAT44(uStack_b4,uStack_b8),pbStack_58,uVar5);
      uVar7 = pdb_1417077a0(uVar8,&puStack_c8,&pbStack_130);
      if (uVar7 == 0) {
        if (puStack_c8 != (ulonglong *)0x0) {
          pub_1406abac0(pbVar10,(ulonglong)puStack_c8,1);
        }
        pdb_140a7a6f0(auStack_120);
        uVar7 = 0;
        goto joined_r0x00014191e4e5;
      }
    }
    else {
LAB_14191e3f3:
      if (uStack_d8 != 0) {
        pub_1406abac0((byte *)puStack_d0,uStack_d8,1);
      }
    }
    if (puStack_c8 != (ulonglong *)0x0) {
      pub_1406abac0((byte *)CONCAT44(uStack_bc,uStack_c0),(ulonglong)puStack_c8,1);
    }
  }
  else {
    puStack_98 = (ulonglong *)CONCAT71(puStack_98._1_7_,1);
    lVar6 = pdb_140f46c40(&puStack_98,lVar6,uVar7);
    if (lVar6 == 0) goto LAB_14191e21a;
    uVar7 = pdb_142deaf00(lVar6);
  }
  pdb_1409a45e0(&uStack_118);
joined_r0x00014191e4e5:
  if (uStack_100 != 0) {
    pub_1406abac0(pbStack_58,uStack_100,1);
  }
  return uVar7;
}

