// VA 0x140a84210, PDB extent 2909 bytes
// country_core::utils::dirty_tiles::DirtyTiles::retain<country_core::resources::world_raster::impl$3::copy_to_staging::closure_env$0<512> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::retain<country_core::resources::world_raster::impl$3::copy_to_staging::closure_env$0<512>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 2909 */

void pdb_140a84210(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte bVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  ulonglong *puVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  undefined4 in_XMM0_Da;
  undefined4 extraout_XMM0_Da;
  ulonglong uStack_80;
  longlong lStack_78;
  
  lVar3 = *param_2;
  uVar4 = param_2[1];
  puVar5 = (ulonglong *)param_2[2];
  uVar6 = param_2[3];
  uVar34 = uVar6 >> 3;
  if (uVar34 < 8) {
LAB_140a8459b:
                    /* WARNING: Could not recover jumptable at 0x000140a845a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1430438f4 + *(int *)(&UNK_1430438f4 + uVar34 * 4)))
              (in_XMM0_Da,&UNK_1430438f4 + *(int *)(&UNK_1430438f4 + uVar34 * 4));
    return;
  }
  lVar7 = param_2[4];
  uVar34 = param_2[6];
  lVar8 = param_2[5];
  uVar39 = uVar6 * 0x5851f42d4c957f2d + 0x6b229c9255586cd1;
  lStack_78 = 0;
  lVar35 = 0;
  do {
    uVar41 = *(ulonglong *)(param_1 + lVar35);
    if (uVar41 != 0) {
      uStack_80 = uVar41;
LAB_140a84339:
      do {
        uVar22 = 0;
        for (uVar37 = uVar41; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x8000000000000000) {
          uVar22 = uVar22 + 1;
        }
        uVar37 = (ulonglong)(uint)((int)uVar22 * 8) | lStack_78 << 0xc;
        uVar42 = uVar4 - uVar37;
        if (uVar4 < uVar37) goto LAB_140a84d58;
        if (uVar42 < 8) {
          pdb_142dc8420(0,8,uVar42,&UNK_143041f50);
LAB_140a84cbe:
          pdb_142dc8420(0x200,0x208);
LAB_140a84cd4:
          pdb_142dc8420(0x400,0x408);
LAB_140a84cea:
          pdb_142dc8420(0x600,0x608);
LAB_140a84d00:
          pdb_142dc8420(0x800,0x808);
LAB_140a84d16:
          pdb_142dc8420(0xa00,0xa08);
LAB_140a84d2c:
          pdb_142dc8420(0xc00,0xc08);
LAB_140a84d42:
          in_XMM0_Da = pdb_142dc8420(0xe00,0xe08);
LAB_140a84d58:
          pdb_142dc8420(in_XMM0_Da,uVar4,uVar4,&UNK_143041f38);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar9 = *(ulonglong *)(lVar3 + uVar37);
        *puVar5 = uVar9;
        if (uVar42 < 0x208) goto LAB_140a84cbe;
        puVar5[1] = *(ulonglong *)(lVar3 + 0x200 + uVar37);
        if (uVar42 < 0x408) goto LAB_140a84cd4;
        puVar5[2] = *(ulonglong *)(lVar3 + 0x400 + uVar37);
        if (uVar42 < 0x608) goto LAB_140a84cea;
        puVar5[3] = *(ulonglong *)(lVar3 + 0x600 + uVar37);
        if (uVar42 < 0x808) goto LAB_140a84d00;
        puVar5[4] = *(ulonglong *)(lVar3 + 0x800 + uVar37);
        if (uVar42 < 0xa08) goto LAB_140a84d16;
        puVar5[5] = *(ulonglong *)(lVar3 + 0xa00 + uVar37);
        if (uVar42 < 0xc08) goto LAB_140a84d2c;
        puVar5[6] = *(ulonglong *)(lVar3 + 0xc00 + uVar37);
        if (uVar42 < 0xe08) goto LAB_140a84d42;
        puVar5[7] = *(ulonglong *)(lVar3 + 0xe00 + uVar37);
        if (uVar6 < 9) {
          if (uVar6 < 2) {
            uVar42 = uVar9 & 0xff;
            uVar37 = uVar42;
            if (uVar6 != 1) {
              uVar42 = 0;
              uVar37 = uVar42;
            }
          }
          else if (uVar6 < 4) {
            uVar42 = (ulonglong)*(byte *)((longlong)puVar5 + (uVar6 - 1));
            uVar37 = uVar9 & 0xffff;
          }
          else {
            uVar42 = (ulonglong)*(uint *)((longlong)puVar5 + (uVar6 - 4));
            uVar37 = uVar9 & 0xffffffff;
          }
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar42 ^ 0xfca4335f3c9b800a;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar37 ^ 0xbe734ee571db45b0;
          auVar14 = auVar15 * auVar20;
LAB_140a844d3:
          uVar37 = auVar14._8_8_ ^ uVar39 ^ auVar14._0_8_;
          uVar37 = uVar37 << 0x17 | uVar37 >> 0x29;
        }
        else {
          if (uVar6 < 0x11) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = *(ulonglong *)((longlong)puVar5 + (uVar6 - 8)) ^ 0xfca4335f3c9b800a;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar9 ^ 0xbe734ee571db45b0;
            auVar14 = auVar14 * auVar19;
            goto LAB_140a844d3;
          }
          auVar12._8_8_ = 0;
          auVar12._0_8_ = *(ulonglong *)((longlong)puVar5 + (uVar6 - 8)) ^ 0xfca4335f3c9b800a;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = *(ulonglong *)((longlong)puVar5 + (uVar6 - 0x10)) ^ 0xbe734ee571db45b0;
          uVar37 = SUB168(auVar12 * auVar17,8) ^ uVar39 ^ SUB168(auVar12 * auVar17,0);
          uVar37 = uVar37 << 0x17 | uVar37 >> 0x29;
          puVar40 = puVar5;
          uVar42 = uVar6;
          do {
            uVar9 = *puVar40;
            puVar1 = puVar40 + 1;
            puVar40 = puVar40 + 2;
            uVar42 = uVar42 - 0x10;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = *puVar1 ^ 0xfca4335f3c9b800a;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar9 ^ 0xbe734ee571db45b0;
            uVar37 = uVar37 + 0xee5497aefccb8a97 ^ SUB168(auVar13 * auVar18,8) ^
                     SUB168(auVar13 * auVar18,0);
            uVar37 = uVar37 << 0x17 | uVar37 >> 0x29;
          } while (0x10 < uVar42);
        }
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar37;
        uVar42 = SUB168(auVar16 * ZEXT816(0xee5497aefccb8a97),8) ^
                 SUB168(auVar16 * ZEXT816(0xee5497aefccb8a97),0);
        bVar21 = (byte)uVar37 & 0x3f;
        uVar38 = (uint)(uVar42 << bVar21) | (uint)(uVar42 >> 0x40 - bVar21);
        uVar42 = uVar22 | lStack_78 << 6;
        uVar37 = *(ulonglong *)(lVar7 + 0x10);
        if (uVar37 <= uVar42) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar42,uVar37,&UNK_1430435a0);
        }
        lVar10 = *(longlong *)(lVar7 + 8);
        if (*(uint *)(lVar10 + uVar42 * 4) == uVar38) {
          uStack_80 = uStack_80 & ~(1L << (uVar22 & 0x3f));
          *(ulonglong *)(param_1 + lVar35) = uStack_80;
          uVar41 = uVar41 & uVar41 - 1;
          if (uVar41 == 0) break;
          goto LAB_140a84339;
        }
        lVar36 = uVar42 * 0x40;
        if (uVar34 < lVar36 + 0x40U) {
          pdb_142dc8420(lVar36,lVar36 + 0x40U,uVar34,&UNK_1430435b8);
LAB_140a84587:
          uVar34 = pdb_142dc85e0(0x40,uVar6,&UNK_1430435d0);
          in_XMM0_Da = extraout_XMM0_Da;
          goto LAB_140a8459b;
        }
        if (uVar6 != 0x40) goto LAB_140a84587;
        in_XMM0_Da = (undefined4)*puVar5;
        uVar23 = *(undefined4 *)((longlong)puVar5 + 4);
        uVar22 = puVar5[1];
        uVar24 = *(undefined4 *)((longlong)puVar5 + 0xc);
        uVar37 = puVar5[2];
        uVar25 = *(undefined4 *)((longlong)puVar5 + 0x14);
        uVar9 = puVar5[3];
        uVar26 = *(undefined4 *)((longlong)puVar5 + 0x1c);
        uVar31 = puVar5[4];
        uVar27 = *(undefined4 *)((longlong)puVar5 + 0x24);
        uVar32 = puVar5[5];
        uVar28 = *(undefined4 *)((longlong)puVar5 + 0x2c);
        uVar29 = *(undefined4 *)((longlong)puVar5 + 0x34);
        uVar33 = puVar5[7];
        uVar30 = *(undefined4 *)((longlong)puVar5 + 0x3c);
        puVar2 = (undefined4 *)(lVar8 + 0x30 + lVar36);
        *puVar2 = (int)puVar5[6];
        puVar2[1] = uVar29;
        puVar2[2] = (int)uVar33;
        puVar2[3] = uVar30;
        puVar2 = (undefined4 *)(lVar8 + 0x20 + lVar36);
        *puVar2 = (int)uVar31;
        puVar2[1] = uVar27;
        puVar2[2] = (int)uVar32;
        puVar2[3] = uVar28;
        puVar2 = (undefined4 *)(lVar8 + 0x10 + lVar36);
        *puVar2 = (int)uVar37;
        puVar2[1] = uVar25;
        puVar2[2] = (int)uVar9;
        puVar2[3] = uVar26;
        puVar2 = (undefined4 *)(lVar8 + lVar36);
        *puVar2 = in_XMM0_Da;
        puVar2[1] = uVar23;
        puVar2[2] = (int)uVar22;
        puVar2[3] = uVar24;
        *(uint *)(lVar10 + uVar42 * 4) = uVar38;
        uVar41 = uVar41 & uVar41 - 1;
      } while (uVar41 != 0);
    }
    lVar35 = lVar35 + 8;
    lStack_78 = lStack_78 + 1;
    if (lVar35 == 0x200) {
      return;
    }
  } while( true );
}

