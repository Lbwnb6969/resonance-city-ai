// VA 0x140a016e0, PDB extent 1463 bytes
// country_core::startup::init_static_render_args::init_static_render_args
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/init_static_render_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::init_static_render_args::init_static_render_args
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/init_static_render_args.rs
   Extent: 1463 */

void pdb_140a016e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar2 = *param_3;
  plVar3 = (longlong *)*param_1;
  lVar4 = *plVar3;
  uVar5 = *param_2;
  lStack_88 = lVar2 + 8;
  puStack_50 = (ulonglong *)plVar3;
  uVar7 = pdb_140df4400(&UNK_143034c5f,10);
  uVar7 = pdb_140a2e580(uVar5,uVar7);
  uVar8 = pdb_140df4400(&UNK_143034c69,0x1b);
  uVar8 = pdb_140a2e580(uVar5,uVar8);
  uStack_e0 = 0x8000000000000000;
  puStack_d8 = &UNK_143034c84;
  uStack_d0 = 0x2c;
  uStack_e8 = 0;
  pdb_14155c010(lVar4 + 0x10,lVar2 + 8,1,&uStack_e8,uVar7,uVar8);
  lVar2 = *plVar3;
  uVar7 = pdb_140df4400(&UNK_143034cb0,0x1e);
  uStack_80 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034cce,0x1e);
  uStack_78 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034cec,0x1c);
  uStack_70 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034d08,0x21);
  uStack_68 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034d29,0x20);
  uStack_60 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034d49,0x20);
  uStack_58 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034d69,0x1e);
  uVar7 = pdb_140a2e580(uVar5,uVar7);
  uVar8 = pdb_140df4400(&UNK_143034d87,0x23);
  uVar8 = pdb_140a2e580(uVar5,uVar8);
  uVar9 = pdb_140df4400(&UNK_143034daa,0x20);
  uVar9 = pdb_140a2e580(uVar5,uVar9);
  uVar10 = pdb_140df4400(&UNK_143034dca,0x20);
  uVar10 = pdb_140a2e580(uVar5,uVar10);
  uVar11 = pdb_140df4400(&UNK_143034dea,0x1e);
  uVar11 = pdb_140a2e580(uVar5,uVar11);
  uVar12 = pdb_140df4400(&UNK_143034e08,0x23);
  uStack_d0 = pdb_140a2e580(uVar5,uVar12);
  uStack_e8 = uStack_80;
  uStack_e0 = uStack_70;
  puStack_d8 = (undefined *)uStack_78;
  uStack_c8 = uStack_68;
  uStack_b8 = uStack_60;
  uStack_b0 = uStack_58;
  uStack_100 = 0x8000000000000000;
  puStack_f8 = &UNK_143034e2b;
  uStack_f0 = 0x36;
  uStack_108 = 0;
  uStack_c0 = uVar7;
  uStack_a8 = uVar8;
  uStack_a0 = uVar11;
  uStack_98 = uVar9;
  uStack_90 = uVar10;
  pdb_14156b320(lVar2 + 0x10,lStack_88,1,&uStack_108,&uStack_e8);
  lVar2 = *puStack_50;
  uVar7 = pdb_140df4400(&UNK_143034e61,0x20);
  uStack_80 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034e81,0x1e);
  uStack_78 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034e9f,0x20);
  uStack_70 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034ebf,0x23);
  uStack_68 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034ee2,0x22);
  uStack_60 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034f04,0x20);
  uStack_58 = pdb_140a2e580(uVar5,uVar7);
  uVar7 = pdb_140df4400(&UNK_143034f24,0x22);
  uVar7 = pdb_140a2e580(uVar5,uVar7);
  uVar8 = pdb_140df4400(&UNK_143034f46,0x25);
  uVar8 = pdb_140a2e580(uVar5,uVar8);
  uVar9 = pdb_140df4400(&UNK_143034f6b,0x22);
  uVar9 = pdb_140a2e580(uVar5,uVar9);
  uVar10 = pdb_140df4400(&UNK_143034f8d,0x20);
  uVar10 = pdb_140a2e580(uVar5,uVar10);
  uVar11 = pdb_140df4400(&UNK_143034fad,0x22);
  uVar11 = pdb_140a2e580(uVar5,uVar11);
  uVar12 = pdb_140df4400(&UNK_143034fcf,0x25);
  puStack_d8 = (undefined *)pdb_140a2e580(uVar5,uVar12);
  lVar4 = lStack_88;
  uStack_e8 = uStack_80;
  uStack_e0 = uStack_70;
  uStack_d0 = uStack_78;
  uStack_c8 = uStack_68;
  uStack_c0 = uStack_60;
  uStack_b0 = uStack_58;
  uStack_100 = 0x8000000000000000;
  puStack_f8 = &UNK_143034ff4;
  uStack_f0 = 0x38;
  uStack_108 = 0;
  uStack_b8 = uVar7;
  uStack_a8 = uVar8;
  uStack_a0 = uVar9;
  uStack_98 = uVar11;
  uStack_90 = uVar10;
  pdb_14156f260(lVar2 + 0x10,lStack_88,1,&uStack_108,&uStack_e8);
  lVar2 = *puStack_50;
  uVar7 = 0;
  puStack_50 = (ulonglong *)pdb_140a2d9d0(uVar5);
  uStack_e0 = 0x8000000000000000;
  puStack_d8 = &UNK_14303502c;
  uStack_d0 = 0x24;
  uStack_e8 = 0;
  pdb_14157f670(lVar2 + 0x10,lVar4,1,&uStack_e8,uVar7);
  puVar6 = puStack_50;
  pdb_140e9a350(puStack_50);
  pdb_140e9a350((ulonglong)puVar6 | 1);
  LOCK();
  uVar1 = *puVar6;
  *puVar6 = *puVar6 - 0x10;
  UNLOCK();
  if ((uVar1 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar6);
  }
  return;
}

