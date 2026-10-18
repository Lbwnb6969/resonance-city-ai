// VA 0x140b27930, PDB extent 2367 bytes
// country_core::systems::steam::workshop_publish::copy_mod_contents
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::steam::workshop_publish::copy_mod_contents
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 2367 */

longlong pdb_140b27930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      char param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  longlong *plVar33;
  longlong lVar34;
  ulonglong uVar35;
  byte *pbVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iStack_7f8;
  undefined4 uStack_7f4;
  longlong *plStack_7f0;
  ulonglong uStack_7e8;
  undefined1 auStack_7e0 [600];
  longlong lStack_588;
  longlong *plStack_580;
  longlong *aplStack_578 [76];
  longlong *plStack_318;
  ulonglong uStack_310;
  undefined1 auStack_308 [31];
  byte bStack_2e9;
  byte *pbStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  byte *pbStack_b0;
  longlong lStack_a8;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  ulonglong uStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  
  uStack_70 = 0xfffffffffffffffe;
  iStack_7f8 = CONCAT31(iStack_7f8._1_3_,1);
  lVar34 = pdb_140f46c40(&iStack_7f8,param_3,param_4);
  if (lVar34 != 0) {
    pbStack_b0 = (byte *)0x142deaf2d;
    pdb_140f3f5b0(&uStack_88);
    pbStack_48 = pbStack_78;
    uStack_58 = uStack_88;
    uStack_50 = uStack_80;
    pbStack_b0 = (byte *)0x142deaf56;
    lVar34 = pdb_142de94e0(lVar34,&uStack_58);
    return lVar34;
  }
  pdb_140f4f710(&iStack_7f8,param_1,param_2);
  plVar33 = plStack_7f0;
  lVar34 = CONCAT44(uStack_7f4,iStack_7f8);
  if (lVar34 == 2) {
    lVar34 = pdb_142deaf00(plStack_7f0);
  }
  else {
    pub_142e32760(aplStack_578,&uStack_7e8,0x260);
    bVar32 = UNK_143056a0f;
    bVar31 = UNK_143056a0e;
    bVar30 = UNK_143056a0d;
    bVar29 = UNK_143056a0c;
    bVar28 = UNK_143056a0b;
    bVar27 = UNK_143056a0a;
    bVar26 = UNK_143056a09;
    bVar25 = UNK_143056a08;
    bVar24 = UNK_143056a07;
    bVar23 = UNK_143056a06;
    bVar22 = UNK_143056a05;
    bVar21 = UNK_143056a04;
    bVar20 = UNK_143056a03;
    bVar19 = UNK_143056a02;
    bVar18 = UNK_143056a01;
    bVar17 = DAT_143056a00;
    bVar16 = UNK_1430569ff;
    bVar15 = UNK_1430569fe;
    bVar14 = UNK_1430569fd;
    bVar13 = UNK_1430569fc;
    bVar12 = UNK_1430569fb;
    bVar11 = UNK_1430569fa;
    bVar10 = UNK_1430569f9;
    bVar9 = UNK_1430569f8;
    bVar8 = UNK_1430569f7;
    bVar7 = UNK_1430569f6;
    bVar6 = UNK_1430569f5;
    bVar5 = UNK_1430569f4;
    bVar4 = UNK_1430569f3;
    bVar3 = UNK_1430569f2;
    bVar2 = UNK_1430569f1;
    bVar1 = DAT_1430569f0;
    plStack_580 = plVar33;
    lStack_588 = lVar34;
    while (pdb_140f59fa0(&iStack_7f8,&lStack_588), uVar35 = uStack_7e8, plVar33 = plStack_7f0,
          iStack_7f8 == 1) {
      if (plStack_7f0 == (longlong *)0x0) {
        lVar34 = pdb_142deaf00(uStack_7e8);
        goto LAB_140b27e43;
      }
      pub_142e32760(auStack_308,auStack_7e0,0x248);
      plStack_318 = plVar33;
      uStack_310 = uVar35;
      pdb_140f46c20(&uStack_98,&plStack_318);
      if ((uStack_88 != 0) && (pbVar36 = pbStack_90, *pbStack_90 == 0x2e))
      goto joined_r0x000140b27d7e;
      if (uStack_98 != 0) {
        pub_1406abac0(pbStack_90,uStack_98,1);
      }
      if (param_5 == '\0') {
LAB_140b27b8f:
        pdb_140f46c20(&uStack_98,&plStack_318);
        pbStack_78 = pbStack_90;
        uVar35 = uStack_88;
        pdb_140f3e9e0(&cStack_b8,param_3,param_4,pbStack_90,uStack_88);
        if (uStack_98 != 0) {
          pub_1406abac0(pbStack_78,uStack_98,1);
        }
        if (((uStack_310 & 0x10) == 0) || ((uStack_310 & 0x400) != 0 && (bStack_2e9 & 0x20) != 0)) {
          pdb_140f46b10(&uStack_98,&plStack_318);
          pbStack_c0 = pbStack_90;
          pbStack_78 = pbStack_b0;
          uVar35 = uStack_88;
          lVar34 = pdb_140f4f180(pbStack_90,uStack_88,pbStack_b0,lStack_a8);
          if (uStack_98 != 0) {
            pub_1406abac0(pbStack_c0,uStack_98,1);
          }
          pbVar36 = pbStack_78;
          if (lVar34 == 1) {
            lVar34 = pdb_142deaf00(uVar35);
            pbVar36 = pbStack_78;
            goto LAB_140b27e0f;
          }
        }
        else {
          pdb_140f46b10(&uStack_98,&plStack_318);
          pbVar36 = pbStack_b0;
          pbStack_78 = pbStack_90;
          lVar34 = pdb_140b27930(pbStack_90,uStack_88,pbStack_b0,lStack_a8,
                                 uVar35 & 0xffffffffffffff00);
          if (lVar34 != 0) {
            if (uStack_98 != 0) {
              pub_1406abac0(pbStack_78,uStack_98,1);
            }
LAB_140b27e0f:
            if (CONCAT71(uStack_b7,cStack_b8) != 0) {
              pub_1406abac0(pbVar36,CONCAT71(uStack_b7,cStack_b8),1);
            }
            LOCK();
            *plStack_318 = *plStack_318 + -1;
            UNLOCK();
            if (*plStack_318 == 0) {
              pdb_140cd0de0(&plStack_318);
            }
LAB_140b27e43:
            if (lStack_588 != 0) {
              pdb_140f590a0(&plStack_580);
            }
            LOCK();
            *aplStack_578[0] = *aplStack_578[0] + -1;
            UNLOCK();
            if (*aplStack_578[0] != 0) {
              return lVar34;
            }
            pdb_140cd0de0(aplStack_578);
            return lVar34;
          }
          if (uStack_98 != 0) {
            pub_1406abac0(pbStack_78,uStack_98,1);
          }
        }
        if (CONCAT71(uStack_b7,cStack_b8) != 0) {
          pub_1406abac0(pbVar36,CONCAT71(uStack_b7,cStack_b8),1);
        }
        LOCK();
        *plStack_318 = *plStack_318 + -1;
        UNLOCK();
        if (*plStack_318 == 0) {
          pdb_140cd0de0(&plStack_318);
        }
      }
      else {
        pdb_140f46c20(&uStack_98,&plStack_318);
        pbStack_78 = pbStack_90;
        pdb_140f69110(&cStack_b8,pbStack_90,uStack_88);
        if (cStack_b8 != '\0') {
LAB_140b27b70:
          if (uStack_98 != 0) {
            pub_1406abac0(pbStack_78,uStack_98,1);
          }
          goto LAB_140b27b8f;
        }
        pbVar36 = pbStack_78;
        if (lStack_a8 == 0x13) {
          auVar37[0] = -(*pbStack_b0 == bVar17);
          auVar37[1] = -(pbStack_b0[1] == bVar18);
          auVar37[2] = -(pbStack_b0[2] == bVar19);
          auVar37[3] = -(pbStack_b0[3] == bVar20);
          auVar37[4] = -(pbStack_b0[4] == bVar21);
          auVar37[5] = -(pbStack_b0[5] == bVar22);
          auVar37[6] = -(pbStack_b0[6] == bVar23);
          auVar37[7] = -(pbStack_b0[7] == bVar24);
          auVar37[8] = -(pbStack_b0[8] == bVar25);
          auVar37[9] = -(pbStack_b0[9] == bVar26);
          auVar37[10] = -(pbStack_b0[10] == bVar27);
          auVar37[0xb] = -(pbStack_b0[0xb] == bVar28);
          auVar37[0xc] = -(pbStack_b0[0xc] == bVar29);
          auVar37[0xd] = -(pbStack_b0[0xd] == bVar30);
          auVar37[0xe] = -(pbStack_b0[0xe] == bVar31);
          auVar37[0xf] = -(pbStack_b0[0xf] == bVar32);
          auVar38[0] = -(pbStack_b0[3] == bVar1);
          auVar38[1] = -(pbStack_b0[4] == bVar2);
          auVar38[2] = -(pbStack_b0[5] == bVar3);
          auVar38[3] = -(pbStack_b0[6] == bVar4);
          auVar38[4] = -(pbStack_b0[7] == bVar5);
          auVar38[5] = -(pbStack_b0[8] == bVar6);
          auVar38[6] = -(pbStack_b0[9] == bVar7);
          auVar38[7] = -(pbStack_b0[10] == bVar8);
          auVar38[8] = -(pbStack_b0[0xb] == bVar9);
          auVar38[9] = -(pbStack_b0[0xc] == bVar10);
          auVar38[10] = -(pbStack_b0[0xd] == bVar11);
          auVar38[0xb] = -(pbStack_b0[0xe] == bVar12);
          auVar38[0xc] = -(pbStack_b0[0xf] == bVar13);
          auVar38[0xd] = -(pbStack_b0[0x10] == bVar14);
          auVar38[0xe] = -(pbStack_b0[0x11] == bVar15);
          auVar38[0xf] = -(pbStack_b0[0x12] == bVar16);
          auVar38 = auVar38 & auVar37;
          if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff)
          goto joined_r0x000140b27d7e;
          goto LAB_140b27b70;
        }
        if ((lStack_a8 != 0xd) ||
           (*(longlong *)(pbStack_b0 + 5) != 0x6e6f736a2e706f68 ||
            *(longlong *)pbStack_b0 != 0x706f68736b726f77)) goto LAB_140b27b70;
joined_r0x000140b27d7e:
        if (uStack_98 != 0) {
          pub_1406abac0(pbVar36,uStack_98,1);
        }
        LOCK();
        *plStack_318 = *plStack_318 + -1;
        UNLOCK();
        if (*plStack_318 == 0) {
          pdb_140cd0de0(&plStack_318);
        }
      }
    }
    if (lStack_588 != 0) {
      pdb_140f590a0(&plStack_580);
    }
    LOCK();
    *aplStack_578[0] = *aplStack_578[0] + -1;
    UNLOCK();
    if (*aplStack_578[0] == 0) {
      pdb_140cd0de0(aplStack_578);
    }
    lVar34 = 0;
  }
  return lVar34;
}

