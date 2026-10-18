// VA 0x140c74650, PDB extent 1118 bytes
// png::decoder::Reader::next_raw_interlaced_row<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::decoder::Reader::next_raw_interlaced_row<std::io::buffered::bufreader::BufReader<std::fs::File>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1118 */

void pdb_140c74650(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  char unaff_R14B;
  char cVar10;
  byte *pbVar11;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  char cStack_6b;
  undefined2 uStack_6a;
  ulonglong uStack_68;
  
  bVar1 = *(byte *)(param_2 + 0x2c8);
  if (*(int *)(param_2 + 0x280) == 1) {
    unaff_R14B = *(char *)(param_2 + 0x298);
    pdb_140db6630(&iStack_88,param_2 + 0x284);
    if ((char)iStack_88 != '\0') {
      if (SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
LAB_140c74a2b:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143073090);
      }
      uStack_8c = uStack_84;
      cVar10 = (char)uStack_80;
      uStack_90 = uStack_7c;
      uVar3 = pdb_140db6d50(param_2 + 0x80);
      uVar2 = 1;
      if (unaff_R14B != cVar10) {
        *(undefined8 *)(param_2 + 0x240) = 0;
        if (uVar3 == 0) {
          lVar9 = 0;
          unaff_R14B = cVar10;
          goto LAB_140c74762;
        }
        if (*(ulonglong *)(param_2 + 0x230) < uVar3) goto LAB_140c74a48;
        lVar9 = 0;
        puVar8 = *(undefined1 **)(param_2 + 0x238);
        puVar7 = puVar8;
        if (uVar3 == 1) goto LAB_140c74757;
        goto LAB_140c74740;
      }
LAB_140c74769:
      do {
        uVar5 = *(ulonglong *)(param_2 + 600);
        uVar6 = *(ulonglong *)(param_2 + 0x2b0);
        if (uVar5 - uVar6 < uVar3) {
          do {
            if (*(char *)(param_2 + 0x2a4) != '\0') {
              param_1[1] = 1;
              *(undefined1 *)(param_1 + 2) = 0x1c;
              *param_1 = 1;
              return;
            }
            if (uVar6 != 0) {
              lVar9 = uVar5 - uVar6;
              if (uVar5 < uVar6) {
                pdb_142dc8420(0,uVar6,uVar5,&UNK_14338aa00);
                goto LAB_140c74a05;
              }
              *(undefined8 *)(param_2 + 600) = 0;
              if (lVar9 != 0) {
                pub_142e32770(*(longlong *)(param_2 + 0x250),uVar6 + *(longlong *)(param_2 + 0x250),
                              lVar9);
                *(longlong *)(param_2 + 600) = lVar9;
              }
              *(undefined8 *)(param_2 + 0x2b0) = 0;
            }
            pdb_140496ca0(&iStack_88,param_2,param_2 + 0x248);
            if (iStack_88 == 1) {
              *(ulonglong *)((longlong)param_1 + 0x15) = CONCAT53(uStack_70,uStack_73);
              param_1[1] = CONCAT44(uStack_7c,uStack_80);
              param_1[2] = CONCAT35(uStack_73,uStack_78);
              *(char *)((longlong)param_1 + 0x1d) = cStack_6b;
              *(undefined2 *)((longlong)param_1 + 0x1e) = uStack_6a;
              goto LAB_140c74943;
            }
            if (cStack_6b == '\r') {
              if (*(longlong *)(param_2 + 600) != 0) {
                param_1[1] = 1;
                *(undefined1 *)(param_1 + 2) = 3;
                *param_1 = 1;
                return;
              }
              goto LAB_140c7496f;
            }
            if (cStack_6b == '\n') {
              *(undefined1 *)(param_2 + 0x2a4) = 1;
            }
            uVar5 = *(ulonglong *)(param_2 + 600);
            uVar6 = *(ulonglong *)(param_2 + 0x2b0);
          } while (uVar5 - uVar6 < uVar3);
        }
        if (uVar5 < uVar6) {
LAB_140c74a05:
          pdb_142dc8420(uVar6,uVar5);
LAB_140c74a17:
          pdb_142dc8420(1,uVar3);
          goto LAB_140c74a2b;
        }
        if (uVar6 == uVar5) goto LAB_140c74a9d;
        pbVar11 = (byte *)(*(longlong *)(param_2 + 0x250) + uVar6);
        if (4 < *pbVar11) {
          *(ulonglong *)(param_2 + 0x2b0) = uVar6 + uVar3;
          bVar1 = *pbVar11;
          param_1[1] = 1;
          *(undefined1 *)(param_1 + 2) = 0x18;
          *(byte *)((longlong)param_1 + 0x11) = bVar1;
          *param_1 = 1;
          return;
        }
        if ((uVar3 == 0) || (*(ulonglong *)(param_2 + 0x240) < uVar3)) goto LAB_140c74a17;
        lVar9 = uVar3 - 1;
        uVar5 = (ulonglong)bVar1;
        lVar4 = pdb_140db7e30(*pbVar11,(ulonglong)bVar1,*(longlong *)(param_2 + 0x238) + 1,lVar9,
                              pbVar11 + 1,lVar9);
        if (lVar4 != 0) {
          param_1[1] = 1;
          *(undefined1 *)(param_1 + 2) = 0x1d;
          param_1[3] = lVar4;
          uStack_68 = uVar5;
LAB_140c74943:
          param_1[4] = uStack_68;
          *param_1 = 1;
          return;
        }
        if (uVar3 <= *(ulonglong *)(param_2 + 0x240)) goto code_r0x000140c7499e;
        pdb_142dc8420(0,uVar3,*(ulonglong *)(param_2 + 0x240),&UNK_1430731a8);
        cVar10 = unaff_R14B;
LAB_140c74a48:
        pdb_142d7f1b0(param_2 + 0x230,0,uVar3,1,1);
        lVar9 = *(longlong *)(param_2 + 0x240);
        puVar8 = *(undefined1 **)(param_2 + 0x238) + lVar9;
        puVar7 = *(undefined1 **)(param_2 + 0x238);
        if (uVar3 != 1) {
LAB_140c74740:
          pub_142e32780(puVar8,0,uVar3 - 1);
          lVar9 = lVar9 + uVar3 + -1;
          puVar8 = puVar7 + lVar9;
        }
LAB_140c74757:
        *puVar8 = 0;
        lVar9 = lVar9 + 1;
        unaff_R14B = cVar10;
LAB_140c74762:
        *(longlong *)(param_2 + 0x240) = lVar9;
      } while( true );
    }
  }
  else if (*(uint *)(param_2 + 0x284) < *(uint *)(param_2 + 0x288)) {
    *(uint *)(param_2 + 0x284) = *(uint *)(param_2 + 0x284) + 1;
    uVar3 = *(ulonglong *)(param_2 + 0x278);
    uVar2 = 0;
    goto LAB_140c74769;
  }
LAB_140c7496f:
  *(undefined1 *)(param_1 + 3) = 2;
  goto LAB_140c74973;
code_r0x000140c7499e:
  pub_142e32760(*(undefined8 *)(param_2 + 0x238),pbVar11,uVar3);
  *(longlong *)(param_2 + 0x2b0) = *(longlong *)(param_2 + 0x2b0) + uVar3;
  if (*(ulonglong *)(param_2 + 0x240) < uVar3) {
    pdb_142dc8420(1,uVar3,*(ulonglong *)(param_2 + 0x240),&UNK_143073190);
LAB_140c74a9d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143073178);
  }
  param_1[1] = *(longlong *)(param_2 + 0x238) + 1;
  param_1[2] = lVar9;
  *(undefined1 *)(param_1 + 3) = uVar2;
  *(char *)((longlong)param_1 + 0x19) = unaff_R14B;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_8c;
  *(undefined4 *)(param_1 + 4) = uStack_90;
LAB_140c74973:
  *param_1 = 0;
  return;
}

