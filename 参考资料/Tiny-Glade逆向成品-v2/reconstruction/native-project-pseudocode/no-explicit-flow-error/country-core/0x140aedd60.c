// VA 0x140aedd60, PDB extent 3063 bytes
// country_core::systems::audio::music::music_system::music_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::music::music_system::music_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_system.rs
   Extent: 3063 */

void pdb_140aedd60(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6,longlong *param_7,undefined8 param_8,
                  longlong *param_9,longlong *param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  int *unaff_RBX;
  longlong lVar14;
  undefined *puVar15;
  uint *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar7 = pdb_140e94b40();
  if (cVar7 == '\0') goto LAB_140aedf3a;
  puVar15 = &UNK_143050501;
  lVar14 = 0x45;
  uVar13 = 0x45;
  lVar8 = pdb_140aef6f0(&UNK_143050501);
  if (lVar8 == 1) {
    if (0x45 < uVar13) {
LAB_140aee66e:
      pdb_142dc8070(&UNK_143050501,0x45,0);
LAB_140aee68e:
      pdb_142dc8070(&UNK_143050501,0x45);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar15 = &UNK_143050501;
    uVar9 = pdb_140aef6f0(&UNK_143050501);
    if ((uVar9 & 1) != 0) {
      if (0x45 < uVar13 + 2) goto LAB_140aee68e;
      lVar14 = 0x43 - uVar13;
      puVar15 = &UNK_143050503 + uVar13;
    }
  }
  puVar10 = &UNK_143050327;
  puVar16 = (uint *)&UNK_1430502ec;
  do {
    pbVar1 = puVar10 + -1;
    uVar12 = (uint)(char)*pbVar1;
    if ((int)uVar12 < 0) {
      bVar3 = puVar10[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar10[-3];
        if ((char)bVar4 < -0x40) {
          pbVar2 = puVar10 + -4;
          puVar10 = puVar10 + -4;
          uVar12 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar10 = puVar10 + -3;
          uVar12 = bVar4 & 0xf;
        }
        uVar12 = bVar3 & 0x3f | uVar12 << 6;
      }
      else {
        puVar10 = puVar10 + -2;
        uVar12 = bVar3 & 0x1f;
      }
      uVar12 = (uint)(*pbVar1 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_140aede99;
LAB_140aedeb5:
      if (puVar10 + -0x1430502eb < (undefined *)0x3c) {
        unaff_RBX = (int *)(0x3a - (longlong)(puVar10 + -0x1430502ec));
        puVar16 = (uint *)(puVar10 + 1);
        goto LAB_140aeded8;
      }
      pdb_142dc8070(&UNK_1430502ec,0x3b,puVar10 + -0x1430502eb,0x3b,&UNK_1430505e0);
      goto LAB_140aee66e;
    }
    puVar10 = puVar10 + -1;
    if (uVar12 == 0x5c) goto LAB_140aedeb5;
LAB_140aede99:
    if (uVar12 == 0x2f) goto LAB_140aedeb5;
  } while (puVar10 != &UNK_1430502ec);
  unaff_RBX = (int *)0x3b;
LAB_140aeded8:
  plVar11 = (longlong *)pdb_140e97000();
  if ((char)plVar11[0xd] != '\x01') goto LAB_140aee4e9;
  do {
    if (*plVar11 == 0) {
      *plVar11 = -1;
      uStack_c8 = pdb_140e94f10(plVar11 + 1,puVar15,lVar14,puVar16,unaff_RBX,1,0);
      *plVar11 = *plVar11 + 1;
LAB_140aedf3a:
      uVar12 = *(uint *)((longlong)param_3 + 0x1c);
      puVar15 = (undefined *)(ulonglong)uVar12;
      puVar16 = (uint *)param_3[2];
      *puVar16 = uVar12;
      fVar18 = _DAT_142e36f28;
      param_3 = (longlong *)*param_3;
      lVar14 = *param_7;
      cVar5 = *(char *)*param_1;
      fVar17 = *(float *)(lVar14 + 0x28) / _DAT_142e3793c + *(float *)((longlong)param_3 + 0x1c4);
      fVar19 = 0.0;
      if (0.0 <= fVar17) {
        fVar19 = fVar17;
      }
      fVar17 = _DAT_142e36f28;
      if (fVar19 <= _DAT_142e36f28) {
        fVar17 = fVar19;
      }
      *(float *)((longlong)param_3 + 0x1c4) = fVar17;
      if ((fVar17 < _DAT_14300a420) || (_DAT_142e37ae4 <= fVar17)) {
        if ((_DAT_14304fd60 <= fVar17) && (fVar17 <= _DAT_142e36f50)) {
          if (fVar17 <= _DAT_14304fd6c) {
            fVar17 = _DAT_14304fd6c;
          }
          goto LAB_140aedff1;
        }
        if ((_DAT_14304fd64 <= fVar17) && (fVar17 <= _DAT_142f95160)) {
          if (fVar17 <= _DAT_14304fd68) {
            fVar17 = _DAT_14304fd68;
          }
          goto LAB_140aedff1;
        }
      }
      else {
        if (fVar17 <= _DAT_14304fd70) {
          fVar17 = _DAT_14304fd70;
        }
LAB_140aedff1:
        *(float *)((longlong)param_3 + 0x1c4) = fVar17;
      }
      if (cVar5 != '\x10') {
        fVar18 = fVar17;
      }
      fVar18 = (float)pdb_140de93b0(*(undefined4 *)(param_3 + 0x38),fVar18);
      fVar18 = (float)(~-(uint)(_DAT_143020f30 < fVar18) & (uint)fVar18 |
                      (uint)_DAT_142e36f28 & -(uint)(_DAT_143020f30 < fVar18));
      *(float *)(param_3 + 0x38) = fVar18;
      if ((((_DAT_14300a420 <= fVar18) && (fVar19 = _DAT_14304fd70, fVar18 < _DAT_142e37ae4)) ||
          ((_DAT_14304fd60 <= fVar18 && (fVar19 = _DAT_14304fd6c, fVar18 <= _DAT_142e36f50)))) ||
         ((_DAT_14304fd64 <= fVar18 && (fVar19 = _DAT_14304fd68, fVar18 <= _DAT_142f95160)))) {
        *(float *)(param_3 + 0x38) = fVar19;
      }
      param_2 = (longlong *)*param_2;
      lVar8 = *param_2;
      if (*(char *)(*param_6 + 0xd0) == '\0') {
        if (lVar8 != 0) {
          pdb_140a8aa00(lVar8 + 0x10,&UNK_143050327,0xd);
        }
      }
      else if (lVar8 != 0) {
        pdb_140a8aa00(lVar8 + 0x10,&UNK_143050327,0xd);
      }
      fVar18 = *(float *)(lVar14 + 0x28);
      *puVar16 = uVar12;
      fVar18 = fVar18 + *(float *)(param_3 + 0x39);
      fVar19 = 0.0;
      if (0.0 <= fVar18) {
        fVar19 = fVar18;
      }
      fVar18 = _DAT_142e3c670;
      if (fVar19 <= _DAT_142e3c670) {
        fVar18 = fVar19;
      }
      *(float *)(param_3 + 0x39) = fVar18;
      if (*param_2 != 0) {
        pdb_140a8aa00(*param_2 + 0x10,&UNK_143050334,0xc);
      }
      lVar8 = 4;
      if (1 < *(ulonglong *)*param_4) {
        lVar8 = *(ulonglong *)*param_4 - 2;
      }
      *puVar16 = uVar12;
      if ((lVar8 == 9) || (lVar8 == 0)) {
        pdb_140ad8ae0(param_3);
        if (*(char *)(*param_9 + 1) == '\0') {
          *puVar16 = uVar12;
          pdb_140ad8090(param_3);
        }
        else {
          cVar5 = *(char *)(*param_10 + 9);
          *puVar16 = uVar12;
          if (cVar5 == '\x02') {
            pdb_140a8a6f0(param_3 + 0xe);
            if ((*(int *)(param_3 + 0x14) == 1) &&
               (pdb_141808d70(&uStack_80,param_3 + 0x15,1),
               CONCAT44(uStack_7c,uStack_80) != -0x7ffffffffffffffc)) {
              uStack_88 = uStack_50;
              uStack_98 = uStack_60;
              uStack_94 = uStack_5c;
              uStack_90 = uStack_58;
              uStack_8c = uStack_54;
              uStack_a8 = uStack_70;
              uStack_a4 = uStack_6c;
              uStack_a0 = uStack_68;
              uStack_9c = uStack_64;
              uStack_b8 = uStack_80;
              uStack_b4 = uStack_7c;
              uStack_b0 = uStack_78;
              uStack_ac = uStack_74;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143044570,0x2b,&uStack_b8,&UNK_143044530,&UNK_143043d48);
            }
          }
          else {
            pdb_140a8a6f0(param_3 + 0x14);
            if ((*(int *)(param_3 + 0xe) == 1) &&
               (pdb_141808d70(&uStack_80,param_3 + 0xf,1),
               CONCAT44(uStack_7c,uStack_80) != -0x7ffffffffffffffc)) {
              uStack_88 = uStack_50;
              uStack_98 = uStack_60;
              uStack_94 = uStack_5c;
              uStack_90 = uStack_58;
              uStack_8c = uStack_54;
              uStack_a8 = uStack_70;
              uStack_a4 = uStack_6c;
              uStack_a0 = uStack_68;
              uStack_9c = uStack_64;
              uStack_b8 = uStack_80;
              uStack_b4 = uStack_7c;
              uStack_b0 = uStack_78;
              uStack_ac = uStack_74;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143044570,0x2b,&uStack_b8,&UNK_143044530,&UNK_143043d48);
            }
          }
        }
        if ((*(int *)(param_3 + 0x2c) == 1) &&
           (pdb_141807e40(&uStack_80,param_3 + 0x2d,1),
           CONCAT44(uStack_7c,uStack_80) != -0x7ffffffffffffffc)) goto LAB_140aee519;
        if (*(int *)(param_3 + 0x32) == 1) {
          param_3 = param_3 + 0x33;
          pdb_141808d70(&uStack_80,param_3,0);
          if (CONCAT44(uStack_7c,uStack_80) != -0x7ffffffffffffffc) {
            uStack_88 = uStack_50;
            uStack_98 = uStack_60;
            uStack_94 = uStack_5c;
            uStack_90 = uStack_58;
            uStack_8c = uStack_54;
            uStack_a8 = uStack_70;
            uStack_a4 = uStack_6c;
            uStack_a0 = uStack_68;
            uStack_9c = uStack_64;
            uStack_b8 = uStack_80;
            uStack_b4 = uStack_7c;
            uStack_b0 = uStack_78;
            uStack_ac = uStack_74;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143044570,0x2b,&uStack_b8,&UNK_143044530,&UNK_143043d90);
          }
        }
      }
      else {
        pdb_140ad8940(param_3);
        *puVar16 = uVar12;
        pdb_140ad8090(param_3);
        if (*(char *)((longlong)param_3 + 0x1cc) == '\x05') {
          if ((*(int *)(param_3 + 0x32) == 1) &&
             (pdb_141808d70(&uStack_80,param_3 + 0x33,0),
             CONCAT44(uStack_7c,uStack_80) != -0x7ffffffffffffffc)) {
            uStack_88 = uStack_50;
            uStack_98 = uStack_60;
            uStack_94 = uStack_5c;
            uStack_90 = uStack_58;
            uStack_8c = uStack_54;
            uStack_a8 = uStack_70;
            uStack_a4 = uStack_6c;
            uStack_a0 = uStack_68;
            uStack_9c = uStack_64;
            uStack_b8 = uStack_80;
            uStack_b4 = uStack_7c;
            uStack_b0 = uStack_78;
            uStack_ac = uStack_74;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143044570,0x2b,&uStack_b8,&UNK_143044530,&UNK_143043d90);
          }
        }
        else {
          pdb_140a8a6f0();
        }
        if (*param_2 != 0) {
          pdb_140a8aa00(*param_2 + 0x10,&UNK_143050340,0x10);
        }
        unaff_RBX = (int *)(param_3 + 0x2c);
        pdb_140a8a6f0(unaff_RBX);
        if (*unaff_RBX == 1) {
          param_3 = param_3 + 0x2d;
          pdb_141807b50(&uStack_80,param_3);
          lVar14 = -0x7ffffffffffffffc;
          if (CONCAT44(uStack_7c,uStack_80) != -0x7ffffffffffffffc) {
            uStack_88 = uStack_50;
            uStack_98 = uStack_60;
            uStack_94 = uStack_5c;
            uStack_90 = uStack_58;
            uStack_8c = uStack_54;
            uStack_a8 = uStack_70;
            uStack_a4 = uStack_6c;
            uStack_a0 = uStack_68;
            uStack_9c = uStack_64;
            uStack_b8 = uStack_80;
            uStack_b4 = uStack_7c;
            uStack_b0 = uStack_78;
            uStack_ac = uStack_74;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143044570,0x2b,&uStack_b8,&UNK_143044530,&UNK_143043df0);
          }
          if ((((char)uStack_78 == '\x01') && (*unaff_RBX == 1)) &&
             (pdb_141807e40(&uStack_80,param_3,0),
             CONCAT44(uStack_7c,uStack_80) != -0x7ffffffffffffffc)) {
            uStack_88 = uStack_50;
            uStack_98 = uStack_60;
            uStack_94 = uStack_5c;
            uStack_90 = uStack_58;
            uStack_8c = uStack_54;
            uStack_a8 = uStack_70;
            uStack_a4 = uStack_6c;
            uStack_a0 = uStack_68;
            uStack_9c = uStack_64;
            uStack_b8 = uStack_80;
            uStack_b4 = uStack_7c;
            uStack_b0 = uStack_78;
            uStack_ac = uStack_74;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143044570,0x2b,&uStack_b8,&UNK_143044530,&UNK_143043dd8);
          }
        }
      }
      if (cVar7 == '\0') {
        return;
      }
      plVar11 = (longlong *)pdb_140e97000();
      if (((char)plVar11[0xd] != '\x01') &&
         (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0)) break;
      if (*plVar11 == 0) {
        *plVar11 = -1;
        pdb_140e95370(plVar11 + 1,uStack_c8);
        *plVar11 = *plVar11 + 1;
        return;
      }
    }
    plVar11 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140aee4e9:
    plVar11 = (longlong *)pdb_142d8ec20(plVar11,0);
  } while (plVar11 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140aee519:
  uStack_88 = uStack_50;
  uStack_98 = uStack_60;
  uStack_94 = uStack_5c;
  uStack_90 = uStack_58;
  uStack_8c = uStack_54;
  uStack_a8 = uStack_70;
  uStack_a4 = uStack_6c;
  uStack_a0 = uStack_68;
  uStack_9c = uStack_64;
  uStack_b8 = uStack_80;
  uStack_b4 = uStack_7c;
  uStack_b0 = uStack_78;
  uStack_ac = uStack_74;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143044570,0x2b,&uStack_b8,&UNK_143044530,&UNK_143043da8);
}

