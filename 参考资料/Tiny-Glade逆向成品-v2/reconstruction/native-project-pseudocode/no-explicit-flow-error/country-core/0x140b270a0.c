// VA 0x140b270a0, PDB extent 1619 bytes
// country_core::systems::steam::workshop_publish::start_upload
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::steam::workshop_publish::start_upload
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 1619 */

void pdb_140b270a0(longlong param_1,byte *param_2,ulonglong *param_3,longlong param_4,
                  undefined8 param_5,char param_6,undefined1 param_7)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong uStack_a8;
  byte *pbStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lStack_70 = param_4;
  pdb_140f60be0(&uStack_68,param_4 + 0x10);
  uStack_78 = uStack_58;
  uVar6 = *param_3;
  uVar8 = 5;
  if ((longlong)uVar6 < 0) {
    uVar8 = uVar6 ^ 0x8000000000000000;
  }
  uStack_88 = uStack_68;
  uStack_80 = uStack_60;
  lVar10 = 8;
  if (3 < uVar8 - 1) {
    if (uVar8 == 0) goto LAB_140b2713c;
    lVar10 = 0x18;
    if (uVar6 != 0) {
      pub_1406abac0((byte *)param_3[1],uVar6,1);
    }
  }
  if (*(ulonglong *)((longlong)param_3 + lVar10) != 0) {
    pub_1406abac0(*(byte **)((longlong)param_3 + lVar10 + 8),
                  *(ulonglong *)((longlong)param_3 + lVar10),1);
  }
LAB_140b2713c:
  *param_3 = 0x8000000000000003;
  param_3[1] = (ulonglong)uStack_88;
  param_3[2] = uStack_80;
  param_3[3] = uStack_78;
  param_3[4] = 0;
  param_3[5] = 0;
  uVar6 = pub_142e32030();
  LOCK();
  lVar10 = *(longlong *)param_2;
  *(longlong *)param_2 = *(longlong *)param_2 + 1;
  UNLOCK();
  if (*(longlong *)param_2 != 0 && SCARRY8(lVar10,1) == *(longlong *)param_2 < 0) {
    pbStack_98 = param_2;
    uStack_90 = uVar6;
    uVar7 = pub_142e31f10();
    lVar2 = lStack_70;
    LOCK();
    lVar10 = *(longlong *)param_2;
    *(longlong *)param_2 = *(longlong *)param_2 + 1;
    UNLOCK();
    if (*(longlong *)param_2 != 0 && SCARRY8(lVar10,1) == *(longlong *)param_2 < 0) {
      pbStack_d0 = param_2;
      uStack_c8 = uVar7;
      uVar5 = pub_142e32000(uVar7);
      uVar6 = uStack_90;
      uVar8 = pub_142e32190(uStack_90,uVar5,param_5);
      LOCK();
      lVar10 = *(longlong *)pbStack_98;
      *(longlong *)pbStack_98 = *(longlong *)pbStack_98 + 1;
      UNLOCK();
      if (*(longlong *)pbStack_98 != 0 && SCARRY8(lVar10,1) == *(longlong *)pbStack_98 < 0) {
        uStack_60 = uVar6;
        uStack_68 = pbStack_98;
        uStack_58 = uVar8;
        pdb_141a56800(&uStack_88,&uStack_68,*(undefined8 *)(lVar2 + 0x50),
                      *(undefined8 *)(lVar2 + 0x58));
        pdb_141a56b30(&uStack_b8,&uStack_88,*(undefined8 *)(lVar2 + 0x70),
                      *(undefined8 *)(lVar2 + 0x78));
        uStack_42 = 1;
        pdb_1415e5b10(&uStack_68,lVar2 + 0xa0);
        uStack_42 = 0;
        pdb_141a572d0(&uStack_88,&uStack_b8,&uStack_68,0);
        lVar10 = lStack_70;
        puVar9 = &uStack_88;
        pdb_141a57180(&uStack_68,&uStack_88,&UNK_143056ce0,6);
        uStack_43 = 1;
        uVar7 = pdb_14043b7e0(lVar10 + 0x88);
        uStack_43 = 0;
        pdb_141a56e60(&uStack_b8,&uStack_68,&UNK_143056ce0,6,uVar7,puVar9);
        LOCK();
        *(longlong *)pbStack_d0 = *(longlong *)pbStack_d0 + -1;
        UNLOCK();
        if (*(longlong *)pbStack_d0 == 0) {
          pdb_140cb1c10(&pbStack_d0);
        }
        LOCK();
        *(longlong *)pbStack_98 = *(longlong *)pbStack_98 + -1;
        UNLOCK();
        if (*(longlong *)pbStack_98 == 0) {
          uStack_41 = 1;
          pdb_140cb1c10(&pbStack_98);
        }
        if (param_6 != '\0') {
          uStack_58 = uStack_a8;
          uStack_68 = (byte *)CONCAT44(uStack_b4,uStack_b8);
          uStack_60 = CONCAT44(uStack_ac,uStack_b0);
          uStack_41 = 0;
          pdb_141a574b0(&uStack_88,&uStack_68,*(undefined8 *)(lStack_70 + 0x18),
                        *(undefined8 *)(lStack_70 + 0x20));
          cVar4 = pub_142e321a0(uStack_80,uStack_78,2);
          if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14337e4b8,0x69,&UNK_14337e528);
          }
          uStack_a8 = uStack_78;
          uStack_b8 = (undefined4)uStack_88;
          uStack_b4 = uStack_88._4_4_;
          uStack_b0 = (undefined4)uStack_80;
          uStack_ac = uStack_80._4_4_;
        }
        pdb_14007ee60();
        pbStack_c0 = pub_1406abab0(0x28,8);
        uVar6 = uStack_a8;
        if (pbStack_c0 == (byte *)0x0) {
          uStack_41 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x28);
        }
        pbStack_c0[0] = 1;
        pbStack_c0[1] = 0;
        pbStack_c0[2] = 0;
        pbStack_c0[3] = 0;
        pbStack_c0[4] = 0;
        pbStack_c0[5] = 0;
        pbStack_c0[6] = 0;
        pbStack_c0[7] = 0;
        pbStack_c0[8] = 1;
        pbStack_c0[9] = 0;
        pbStack_c0[10] = 0;
        pbStack_c0[0xb] = 0;
        pbStack_c0[0xc] = 0;
        pbStack_c0[0xd] = 0;
        pbStack_c0[0xe] = 0;
        pbStack_c0[0xf] = 0;
        pbStack_c0[0x10] = 0;
        pbStack_c0[0x20] = 3;
        LOCK();
        lVar10 = *(longlong *)pbStack_c0;
        *(longlong *)pbStack_c0 = *(longlong *)pbStack_c0 + 1;
        UNLOCK();
        uStack_88 = pbStack_c0;
        if (*(longlong *)pbStack_c0 != 0 && SCARRY8(lVar10,1) == *(longlong *)pbStack_c0 < 0) {
          uStack_68 = (byte *)CONCAT44(uStack_b4,uStack_b8);
          uStack_60 = CONCAT44(uStack_ac,uStack_b0);
          uVar3 = uStack_60;
          uStack_58 = uStack_a8;
          uVar7 = pub_142e321b0(uStack_60,uStack_a8,0);
          pdb_140a63df0(&uStack_68,uVar7,0xd4c,pbStack_c0);
          uVar7 = uStack_68;
          pub_142e32760(param_1,lStack_70,0xb8);
          *(char *)(param_1 + 0xd8) = param_6;
          *(undefined1 *)(param_1 + 0xd9) = param_7;
          *(undefined8 *)(param_1 + 0xb8) = uVar7;
          *(undefined8 *)(param_1 + 0xc0) = uVar3;
          *(ulonglong *)(param_1 + 200) = uVar6;
          *(byte **)(param_1 + 0xd0) = pbStack_c0;
          return;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

