// VA 0x142b1f5b0, PDB extent 3146 bytes
// country_core::utils::dirty_tiles::DirtyTiles::retain<country_core::resources::world_raster::impl$3::copy_to_staging::closure_env$0<512> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::retain<country_core::resources::world_raster::impl$3::copy_to_staging::closure_env$0<512>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 3146 */

void pdb_142b1f5b0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte bVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar36;
  ulonglong uStack_a0;
  longlong lStack_98;
  ulonglong uStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar3 = param_2[1];
  puVar4 = (ulonglong *)param_2[2];
  uVar5 = param_2[3];
  uVar27 = uVar5 >> 3;
  if (uVar27 < 8) {
LAB_142b1f97f:
                    /* WARNING: Could not recover jumptable at 0x000142b1f98d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143669540 + *(int *)(&UNK_143669540 + uVar27 * 4)))
              (&UNK_143669540,&UNK_143669540 + *(int *)(&UNK_143669540 + uVar27 * 4));
    return;
  }
  lVar6 = param_2[4];
  uVar27 = param_2[6];
  lStack_58 = param_2[5];
  lStack_98 = 0;
  lVar28 = 0;
  lStack_60 = param_1;
  lStack_50 = *param_2;
  do {
    uVar35 = *(ulonglong *)(param_1 + lVar28);
    if (uVar35 != 0) {
      uStack_48 = lStack_98 << 0x20;
      uStack_a0 = uVar35;
LAB_142b1f691:
      do {
        uVar20 = 0;
        for (uVar31 = uVar35; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x8000000000000000) {
          uVar20 = uVar20 + 1;
        }
        uVar26 = pdb_140c6c1a0(uVar20 | uStack_48);
        uVar31 = (ulonglong)((uVar26 & 0xffffffc0) * 0x40 + (uVar26 & 0x3f) * 8);
        uVar34 = uVar3 - uVar31;
        uVar36 = extraout_XMM0_Da;
        if (uVar3 < uVar31) goto LAB_142b201e7;
        if (uVar34 < 8) {
          pdb_142dc8420(0,8,uVar34,&UNK_1435a9238);
LAB_142b20148:
          pdb_142dc8420(0x200,0x208);
LAB_142b2015e:
          pdb_142dc8420(0x400,0x408);
LAB_142b20174:
          pdb_142dc8420(0x600,0x608);
LAB_142b2018a:
          pdb_142dc8420(0x800,0x808);
LAB_142b201a0:
          pdb_142dc8420(0xa00,0xa08);
LAB_142b201b6:
          pdb_142dc8420(0xc00,0xc08);
LAB_142b201cc:
          uVar36 = pdb_142dc8420(0xe00,0xe08);
LAB_142b201e7:
          pdb_142dc8420(uVar36,uVar3,uVar3,&UNK_1435a9220);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *puVar4 = *(ulonglong *)(lStack_50 + uVar31);
        if (uVar34 < 0x208) goto LAB_142b20148;
        puVar4[1] = *(ulonglong *)(lStack_50 + 0x200 + uVar31);
        if (uVar34 < 0x408) goto LAB_142b2015e;
        puVar4[2] = *(ulonglong *)(lStack_50 + 0x400 + uVar31);
        if (uVar34 < 0x608) goto LAB_142b20174;
        puVar4[3] = *(ulonglong *)(lStack_50 + 0x600 + uVar31);
        if (uVar34 < 0x808) goto LAB_142b2018a;
        puVar4[4] = *(ulonglong *)(lStack_50 + 0x800 + uVar31);
        if (uVar34 < 0xa08) goto LAB_142b201a0;
        puVar4[5] = *(ulonglong *)(lStack_50 + 0xa00 + uVar31);
        if (uVar34 < 0xc08) goto LAB_142b201b6;
        puVar4[6] = *(ulonglong *)(lStack_50 + 0xc00 + uVar31);
        if (uVar34 < 0xe08) goto LAB_142b201cc;
        puVar4[7] = *(ulonglong *)(lStack_50 + 0xe00 + uVar31);
        pdb_140c44b30(&uStack_80);
        lVar30 = (lStack_70 + uVar5) * 0x5851f42d4c957f2d;
        if (uVar5 < 9) {
          if (uVar5 < 2) {
            if (uVar5 == 1) {
              uVar34 = (ulonglong)(byte)*puVar4;
              uVar31 = uVar34;
            }
            else {
              uVar31 = 0;
              uVar34 = 0;
            }
          }
          else if (uVar5 < 4) {
            uVar34 = (ulonglong)*(byte *)((longlong)puVar4 + (uVar5 - 1));
            uVar31 = (ulonglong)(ushort)*puVar4;
          }
          else {
            uVar34 = (ulonglong)*(uint *)((longlong)puVar4 + (uVar5 - 4));
            uVar31 = (ulonglong)(uint)*puVar4;
          }
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar34 ^ uStack_78;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar31 ^ uStack_80;
          uVar31 = lVar30 + uStack_68 ^ SUB168(auVar12 * auVar17,8) ^ SUB168(auVar12 * auVar17,0);
LAB_142b1f8c8:
          uVar31 = uVar31 << 0x17 | uVar31 >> 0x29;
        }
        else {
          if (uVar5 < 0x11) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uStack_78 ^ *(ulonglong *)((longlong)puVar4 + (uVar5 - 8));
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uStack_80 ^ *puVar4;
            uVar31 = lVar30 + uStack_68 ^ SUB168(auVar11 * auVar16,8) ^ SUB168(auVar11 * auVar16,0);
            goto LAB_142b1f8c8;
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = *(ulonglong *)((longlong)puVar4 + (uVar5 - 8)) ^ uStack_78;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = *(ulonglong *)((longlong)puVar4 + (uVar5 - 0x10)) ^ uStack_80;
          uVar31 = lVar30 + uStack_68 ^ SUB168(auVar9 * auVar14,8) ^ SUB168(auVar9 * auVar14,0);
          uVar31 = uVar31 << 0x17 | uVar31 >> 0x29;
          puVar33 = puVar4;
          uVar34 = uVar5;
          do {
            uVar7 = *puVar33;
            puVar1 = puVar33 + 1;
            puVar33 = puVar33 + 2;
            uVar34 = uVar34 - 0x10;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = *puVar1 ^ uStack_78;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar7 ^ uStack_80;
            uVar31 = uVar31 + uStack_68 ^ SUB168(auVar10 * auVar15,8) ^ SUB168(auVar10 * auVar15,0);
            uVar31 = uVar31 << 0x17 | uVar31 >> 0x29;
            param_1 = lStack_60;
          } while (0x10 < uVar34);
        }
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar31;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uStack_68;
        uVar34 = SUB168(auVar13 * auVar18,8) ^ SUB168(auVar13 * auVar18,0);
        bVar19 = (byte)uVar31 & 0x3f;
        uVar32 = (uint)(uVar34 << bVar19) | (uint)(uVar34 >> 0x40 - bVar19);
        uVar34 = (ulonglong)uVar26;
        uVar31 = *(ulonglong *)(lVar6 + 0x10);
        if (uVar31 <= uVar34) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar34,uVar31,&UNK_1436694f8);
        }
        lVar30 = *(longlong *)(lVar6 + 8);
        if (*(uint *)(lVar30 + uVar34 * 4) == uVar32) {
          uStack_a0 = uStack_a0 & ~(1L << (uVar20 & 0x3f));
          *(ulonglong *)(param_1 + lVar28) = uStack_a0;
          uVar35 = uVar35 & uVar35 - 1;
          if (uVar35 == 0) break;
          goto LAB_142b1f691;
        }
        lVar29 = uVar34 * 0x40;
        if (uVar27 < lVar29 + 0x40U) {
          pdb_142dc8420(lVar29,lVar29 + 0x40U,uVar27,&UNK_143669510);
LAB_142b1f96b:
          uVar27 = pdb_142dc85e0(0x40,uVar5,&UNK_143669528);
          goto LAB_142b1f97f;
        }
        if (uVar5 != 0x40) goto LAB_142b1f96b;
        uVar24 = *puVar4;
        uVar26 = *(uint *)((longlong)puVar4 + 4);
        uVar25 = puVar4[1];
        uVar21 = *(uint *)((longlong)puVar4 + 0xc);
        uVar20 = puVar4[2];
        uVar31 = puVar4[3];
        uVar7 = puVar4[4];
        uVar22 = puVar4[5];
        uVar23 = puVar4[7];
        puVar33 = (ulonglong *)(lStack_58 + 0x30 + lVar29);
        *puVar33 = puVar4[6];
        puVar33[1] = uVar23;
        puVar33 = (ulonglong *)(lStack_58 + 0x20 + lVar29);
        *puVar33 = uVar7;
        puVar33[1] = uVar22;
        puVar33 = (ulonglong *)(lStack_58 + 0x10 + lVar29);
        *puVar33 = uVar20;
        puVar33[1] = uVar31;
        puVar2 = (uint *)(lStack_58 + lVar29);
        *puVar2 = (uint)uVar24;
        puVar2[1] = uVar26;
        puVar2[2] = (uint)uVar25;
        puVar2[3] = uVar21;
        *(uint *)(lVar30 + uVar34 * 4) = uVar32;
        uVar35 = uVar35 & uVar35 - 1;
      } while (uVar35 != 0);
    }
    lVar28 = lVar28 + 8;
    lStack_98 = lStack_98 + 1;
    if (lVar28 == 0x200) {
      return;
    }
  } while( true );
}

