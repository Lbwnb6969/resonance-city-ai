// VA 0x141a85660, PDB extent 1575 bytes
// country_core::render::shadowed_buffer::ShadowedBuffer::gpu_flush<country_core::resources::placement_data::PlacementDataSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::shadowed_buffer::ShadowedBuffer::gpu_flush<country_core::resources::placement_data::PlacementDataSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
   Extent: 1575 */

void pdb_141a85660(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  longlong lVar15;
  undefined8 unaff_R14;
  undefined *puVar16;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(ulonglong *)(param_1 + 0x20) < *(ulonglong *)(param_1 + 0x18)) {
    return;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x20);
  uStack_b0 = param_2;
  cVar8 = pdb_140e94b40();
  plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,cVar8);
  if (cVar8 == '\0') {
    uStack_d0 = 0;
  }
  else {
    lVar15 = 0x43;
    lVar9 = pdb_141a87510(0x43);
    puVar16 = &UNK_143382e33;
    if (lVar9 == 1) {
      if (0x43 < param_2) {
LAB_141a85ace:
        pdb_142dc8070(&UNK_143382e33,0x43,0);
LAB_141a85aee:
        pdb_142dc8070(&UNK_143382e33,0x43);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = pdb_141a87510(param_2);
      if ((uVar10 & 1) != 0) {
        if (0x43 < param_2 + 2) goto LAB_141a85aee;
        lVar15 = 0x41 - param_2;
        puVar16 = &UNK_143382e35 + param_2;
      }
    }
    uStack_128 = param_1 + 0x18;
    puVar13 = &UNK_143382d51;
    puVar14 = &UNK_143382d20;
    do {
      bVar2 = puVar13[-1];
      uVar12 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar13[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar13[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar13 + -4;
            puVar13 = puVar13 + -4;
            uVar12 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar13 = puVar13 + -3;
            uVar12 = bVar4 & 0xf;
          }
          uVar12 = bVar3 & 0x3f | uVar12 << 6;
        }
        else {
          puVar13 = puVar13 + -2;
          uVar12 = bVar3 & 0x1f;
        }
        uVar12 = (uint)(bVar2 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_141a857aa;
LAB_141a857c7:
        puVar14 = puVar13 + -0x143382d1f;
        if (puVar14 < (undefined *)0x32) {
          lVar9 = 0x31 - (longlong)puVar14;
          puVar14 = puVar13 + 1;
          goto LAB_141a857ea;
        }
        pdb_142dc8070(&UNK_143382d20,0x31,puVar14,0x31,&UNK_143382ee0);
        goto LAB_141a85ace;
      }
      puVar13 = puVar13 + -1;
      if (uVar12 == 0x5c) goto LAB_141a857c7;
LAB_141a857aa:
      if (uVar12 == 0x2f) goto LAB_141a857c7;
    } while (puVar13 != &UNK_143382d20);
    lVar9 = 0x31;
LAB_141a857ea:
    uStack_120 = pdb_141a87990;
    pdb_140f60760(&uStack_a8,&UNK_143382d51,&uStack_128);
    plVar11 = (longlong *)pdb_140e97000();
    if (((char)plVar11[0xd] != '\x01') &&
       (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0)) {
      pdb_142dc7890(&UNK_143326860);
      goto LAB_141a85aa9;
    }
    if (*plVar11 != 0) {
      pdb_142dc8090(&UNK_143326a50);
      goto LAB_141a85aa9;
    }
    *plVar11 = -1;
    pbVar1 = (byte *)CONCAT44(uStack_9c,uStack_a0);
    plStack_58 = plVar11;
    unaff_R14 = pdb_140e94f10(plVar11 + 1,puVar16,lVar15,puVar14,lVar9,pbVar1,
                              CONCAT44(uStack_94,uStack_98));
    *plStack_58 = *plStack_58 + 1;
    if (uStack_a8 != 0) {
      pub_1406abac0(pbVar1,uStack_a8,1);
    }
    uStack_d0 = 1;
    uStack_c8 = unaff_R14;
  }
  uVar10 = lVar6 + 1;
  if ((uVar10 < uVar5) || (*(ulonglong *)(param_1 + 0x10) < uVar10)) {
    pdb_142dc8420(uVar5,uVar10,*(ulonglong *)(param_1 + 0x10),&UNK_143382d58);
LAB_141a85aa9:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (uVar10 - uVar5 == 0) {
LAB_141a85939:
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((char)plStack_50 == '\0') {
      return;
    }
    plVar11 = (longlong *)pdb_140e97000();
    if (((char)plVar11[0xd] == '\x01') ||
       (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 != (longlong *)0x0)) {
      if (*plVar11 == 0) {
        *plVar11 = -1;
        plStack_50 = plVar11;
        pdb_140e95370(plVar11 + 1,unaff_R14);
        *plStack_50 = *plStack_50 + 1;
        return;
      }
    }
    else {
      pdb_142dc7890(&UNK_143326860);
    }
    pdb_142dc8090(&UNK_143326a50);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 8);
    lVar9 = pdb_140e17350(param_1);
    if (uVar10 * 0x30 <= (ulonglong)*(uint *)(lVar9 + 0x10)) {
      lStack_d8 = (uVar10 - uVar5) * 0x30;
      uStack_e0 = 0;
      pdb_140e55470(&uStack_a8,uStack_b0,param_1,uVar5 * 0x30 + lVar6,lStack_d8,&uStack_e0,1,
                    uVar5 * 0x30);
      if (uStack_a8 != 0xb) {
        uStack_e8 = uStack_60;
        uStack_128 = CONCAT44(uStack_9c,uStack_a0);
        uStack_120 = (code *)CONCAT44(uStack_94,uStack_98);
        uStack_118 = CONCAT44(uStack_8c,uStack_90);
        uStack_110 = CONCAT44(uStack_84,uStack_88);
        uStack_108 = CONCAT44(uStack_7c,uStack_80);
        uStack_100 = CONCAT44(uStack_74,uStack_78);
        uStack_f8 = CONCAT44(uStack_6c,uStack_70);
        uStack_f0 = CONCAT44(uStack_64,uStack_68);
        goto LAB_141a85a51;
      }
      goto LAB_141a85939;
    }
  }
  uStack_a8 = 0xb;
LAB_141a85a51:
  uStack_a0 = (undefined4)uStack_128;
  uStack_9c = uStack_128._4_4_;
  uStack_98 = (undefined4)uStack_120;
  uStack_94 = uStack_120._4_4_;
  uStack_90 = (undefined4)uStack_118;
  uStack_8c = uStack_118._4_4_;
  uStack_88 = (undefined4)uStack_110;
  uStack_84 = uStack_110._4_4_;
  uStack_80 = (undefined4)uStack_108;
  uStack_7c = uStack_108._4_4_;
  uStack_78 = (undefined4)uStack_100;
  uStack_74 = uStack_100._4_4_;
  uStack_70 = (undefined4)uStack_f8;
  uStack_6c = uStack_f8._4_4_;
  uStack_68 = (undefined4)uStack_f0;
  uStack_64 = uStack_f0._4_4_;
  uStack_60 = uStack_e8;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143382e08,0x2b,&uStack_a8,&UNK_143382de8,&UNK_143382d70);
}

