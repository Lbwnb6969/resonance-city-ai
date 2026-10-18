// VA 0x140c74050, PDB extent 1535 bytes
// png::decoder::Reader::read_until_image_data<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::decoder::Reader::read_until_image_data<std::io::buffered::bufreader::BufReader<std::fs::File>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1535 */

void pdb_140c74050(char *param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  char *pcVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bVar12;
  char cVar13;
  longlong lVar14;
  byte bVar15;
  int iStack_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  byte bStack_a7;
  char cStack_a6;
  char cStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  char cStack_94;
  byte bStack_93;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (param_3 == '\0') {
    if (SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143073160);
    }
    uVar10 = (*(char *)(param_2 + 0x199) != '\x02') + 1;
    if (*(uint *)(param_2 + 0x2a8) == uVar10) {
      if ((*(char *)(param_2 + 0x199) == '\x02') ||
         (*(int *)(param_2 + 0x2c0) + -1 == *(int *)(param_2 + 0x2ac))) {
        uVar2 = *(undefined8 *)(param_2 + 0x29c);
        uVar3 = *(uint *)(param_2 + 0x29c);
        cVar8 = pdb_140c739f0(param_2);
        cVar13 = (char)uVar10;
        bVar7 = pdb_140c739f0(param_2);
        uVar11 = (ulonglong)uVar3 * *(longlong *)(&UNK_143073768 + (ulonglong)bVar7 * 8);
        bVar7 = (byte)uVar10;
        if (bVar7 != 8) {
          if ((uVar10 & 0xff) == 0x10) {
            uVar11 = uVar11 * 2;
          }
          else {
            if (8 < bVar7) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc84f0(&UNK_143072f88);
            }
            if (uVar11 >> 0x20 == 0) {
              uVar11 = uVar11 & 0xffffffff;
            }
            uVar11 = (uVar11 / (8 / bVar7) + 1) - (ulonglong)(uVar11 % (ulonglong)(8 / bVar7) == 0);
          }
        }
        *(ulonglong *)(param_1 + 8) = uVar11;
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        param_1[0x18] = cVar13;
        param_1[0x19] = cVar8;
        param_1[0] = '\x04';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        return;
      }
    }
    else if (*(uint *)(param_2 + 0x2a8) == 3) {
      param_1[0] = '\x02';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\x01';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      return;
    }
  }
  else {
    if (SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
LAB_140c745d8:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143073090);
    }
    uVar10 = *(uint *)(param_2 + 0x19c);
    uVar3 = *(uint *)(param_2 + 0x1a0);
    uVar11 = param_2;
    bVar7 = pdb_140c739f0(param_2);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (uVar11 & 0xff) * (ulonglong)uVar10 *
                   *(longlong *)(&UNK_143073768 + (ulonglong)bVar7 * 8) + 7 >> 3;
    if (SUB168(auVar5 * ZEXT416(uVar3),8) != 0) {
      param_1[0] = '\x03';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      return;
    }
  }
  plVar1 = (longlong *)(param_2 + 0x80);
  pcStack_68 = param_1;
  do {
    uStack_80 = 0;
    pbStack_78 = (byte *)0x1;
    uStack_70 = 0;
    pdb_140496ca0(&iStack_b0,param_2,&uStack_80);
    if (iStack_b0 == 1) {
      pcStack_68[0x14] = cStack_94;
      *(ulonglong *)(pcStack_68 + 4) = CONCAT44(uStack_a0,uStack_a4);
      *(ulonglong *)(pcStack_68 + 0xc) = CONCAT44(uStack_98,uStack_9c);
      *pcStack_68 = cStack_a8;
      pcStack_68[1] = bStack_a7;
      pcStack_68[2] = cStack_a6;
      pcStack_68[3] = cStack_a5;
      pcStack_68[0x15] = bStack_93;
      *(undefined2 *)(pcStack_68 + 0x16) = uStack_92;
      *(ulonglong *)(pcStack_68 + 0x18) = CONCAT44(uStack_8c,uStack_90);
      if (uStack_80 != 0) {
LAB_140c74322:
        pub_1406abac0(pbStack_78,uStack_80,1);
      }
      return;
    }
    if (bStack_93 == 0xd) {
      pcStack_68[0] = '\x01';
      pcStack_68[1] = '\0';
      pcStack_68[2] = '\0';
      pcStack_68[3] = '\0';
      pcStack_68[4] = '\0';
      pcStack_68[5] = '\0';
      pcStack_68[6] = '\0';
      pcStack_68[7] = '\0';
      pcStack_68[8] = '\x06';
      if (uStack_80 == 0) {
        return;
      }
      goto LAB_140c74322;
    }
    cVar13 = bStack_93 - 2;
    if (bStack_93 < 2) {
      cVar13 = '\x06';
    }
    if (cVar13 == '\x02') {
      if (cStack_a8 == 'I') {
        bVar7 = bStack_a7 ^ 0x44;
      }
      else {
        if (cStack_a8 != 'f') goto LAB_140c74297;
        bVar7 = bStack_a7 ^ 100;
      }
      if (cStack_a5 != 'T' || (cStack_a6 != 'A' || bVar7 != 0)) goto LAB_140c74297;
      if (uStack_80 != 0) {
        pub_1406abac0(pbStack_78,uStack_80,1);
      }
      if (SBORROW8(0,*plVar1)) {
        pcStack_68[0] = '\x01';
        pcStack_68[1] = '\0';
        pcStack_68[2] = '\0';
        pcStack_68[3] = '\0';
        pcStack_68[4] = '\0';
        pcStack_68[5] = '\0';
        pcStack_68[6] = '\0';
        pcStack_68[7] = '\0';
        pcStack_68[8] = '\x04';
        return;
      }
      uVar9 = pdb_140db6cd0(plVar1);
      *(undefined1 *)(param_2 + 0x2c8) = uVar9;
      pdb_140db82a0(&iStack_b0,plVar1);
      pcVar6 = pcStack_68;
      *(undefined4 *)(param_2 + 0x298) = uStack_90;
      *(undefined4 *)(param_2 + 0x29c) = uStack_8c;
      *(undefined4 *)(param_2 + 0x2a0) = uStack_88;
      *(undefined4 *)(param_2 + 0x2a4) = uStack_84;
      *(undefined4 *)(param_2 + 0x288) = uStack_a0;
      *(undefined4 *)(param_2 + 0x28c) = uStack_9c;
      *(undefined4 *)(param_2 + 0x290) = uStack_98;
      *(uint *)(param_2 + 0x294) = CONCAT22(uStack_92,CONCAT11(bStack_93,cStack_94));
      *(int *)(param_2 + 0x278) = iStack_b0;
      *(undefined4 *)(param_2 + 0x27c) = uStack_ac;
      *(uint *)(param_2 + 0x280) =
           CONCAT13(cStack_a5,CONCAT12(cStack_a6,CONCAT11(bStack_a7,cStack_a8)));
      *(undefined4 *)(param_2 + 0x284) = uStack_a4;
      if (!SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
        bVar7 = *(byte *)(param_2 + 0x1a8);
        lVar14 = 4;
        if (4 < *(byte *)(param_2 + 0x1a7)) goto code_r0x000140c7453a;
        uVar10 = *(uint *)(param_2 + 0x2c4);
        lVar4 = *(longlong *)(param_2 + 200);
        bVar12 = (bVar7 == 0x10) * '\b' + 8;
        bVar15 = (byte)uVar10;
        switch(*(byte *)(param_2 + 0x1a7)) {
        case 0:
          if ((bVar15 >> 4 & lVar4 != -0x7fffffffffffffff) == 0) {
            if ((uVar10 & 0x10) != 0) {
              bVar7 = bVar12;
            }
            lVar14 = 1;
            goto code_r0x000140c7453a;
          }
          break;
        case 1:
          goto code_r0x000140c7453a;
        case 2:
          lVar14 = 3;
          if ((bVar15 >> 4 & lVar4 != -0x7fffffffffffffff) == 0) goto code_r0x000140c7453a;
          goto code_r0x000140c74514;
        case 3:
          if ((bVar15 >> 4 & lVar4 != -0x7fffffffffffffff) == 0) {
            uVar10 = uVar10 >> 4 & 1;
            lVar14 = (ulonglong)uVar10 * 2 + 1;
            if (uVar10 != 0) {
              bVar7 = bVar12;
            }
            goto code_r0x000140c7453a;
          }
code_r0x000140c74514:
          lVar14 = 4;
          bVar7 = bVar12;
          goto code_r0x000140c7453a;
        case 4:
          lVar14 = 2;
          if ((uVar10 & 0x10) == 0) goto code_r0x000140c7453a;
        }
        lVar14 = 2;
        bVar7 = bVar12;
code_r0x000140c7453a:
        uVar11 = (ulonglong)bVar7 * lVar14 * (ulonglong)*(uint *)(param_2 + 0x29c) + 7 >> 3;
        if (*(ulonglong *)(param_2 + 0x2b8) < uVar11) {
          pcVar6[0] = '\x03';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          pcVar6[4] = '\0';
          pcVar6[5] = '\0';
          pcVar6[6] = '\0';
          pcVar6[7] = '\0';
          return;
        }
        pdb_140172d20(param_2 + 0x260,uVar11,0);
        pdb_140497e70(&iStack_b0,*(undefined8 *)(param_2 + 0x278));
        if (*(ulonglong *)(param_2 + 0x230) != 0) {
          pub_1406abac0(*(byte **)(param_2 + 0x238),*(ulonglong *)(param_2 + 0x230),1);
        }
        *(ulonglong *)(param_2 + 0x240) = CONCAT44(uStack_9c,uStack_a0);
        *(int *)(param_2 + 0x230) = iStack_b0;
        *(undefined4 *)(param_2 + 0x234) = uStack_ac;
        *(uint *)(param_2 + 0x238) =
             CONCAT13(cStack_a5,CONCAT12(cStack_a6,CONCAT11(bStack_a7,cStack_a8)));
        *(undefined4 *)(param_2 + 0x23c) = uStack_a4;
        pdb_140c73930(pcVar6 + 8,param_2);
        pcVar6[0] = '\x04';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6[4] = '\0';
        pcVar6[5] = '\0';
        pcVar6[6] = '\0';
        pcVar6[7] = '\0';
        return;
      }
      goto LAB_140c745d8;
    }
    if (cVar13 == '\x06') {
      if (SBORROW8(0,*plVar1)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143073090);
      }
      pdb_140db82a0(&iStack_b0,plVar1);
      *(ulonglong *)(param_2 + 0x298) = CONCAT44(uStack_8c,uStack_90);
      *(ulonglong *)(param_2 + 0x2a0) = CONCAT44(uStack_84,uStack_88);
      *(ulonglong *)(param_2 + 0x288) = CONCAT44(uStack_9c,uStack_a0);
      *(ulonglong *)(param_2 + 0x290) =
           CONCAT26(uStack_92,CONCAT15(bStack_93,CONCAT14(cStack_94,uStack_98)));
      *(ulonglong *)(param_2 + 0x278) = CONCAT44(uStack_ac,iStack_b0);
      *(ulonglong *)(param_2 + 0x280) =
           CONCAT44(uStack_a4,CONCAT13(cStack_a5,CONCAT12(cStack_a6,CONCAT11(bStack_a7,cStack_a8))))
      ;
      *(undefined4 *)(param_2 + 0x2a8) = 2;
      *(int *)(param_2 + 0x2ac) = *(int *)(param_2 + 0x2c0);
      *(int *)(param_2 + 0x2c0) = *(int *)(param_2 + 0x2c0) + 1;
    }
LAB_140c74297:
    if (uStack_80 != 0) {
      pub_1406abac0(pbStack_78,uStack_80,1);
    }
  } while( true );
}

