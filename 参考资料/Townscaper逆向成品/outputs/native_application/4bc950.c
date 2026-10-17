// RVA 0x4bc950 | CornerImage$$set_sprite
// PDB: CornerImage_set_sprite_m62E9E624CFF1C5F4B3E7174D179B10635D98F7D3
// Body: [[104bc950, 104bc9ca]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90

void __cdecl
CornerImage_set_sprite_m62E9E624CFF1C5F4B3E7174D179B10635D98F7D3
          (CornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2 *param_1,
          Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *param_2,MethodInfo *param_3)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  bool bVar2;

  if (DAT_1151d0f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151d0f7 = '\x01';
  }
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->____sprite_36;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                    (pOVar1,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                     (MethodInfo *)0x0);
  if (bVar2) {
    param_1->____sprite_36 = param_2;
    (**(code **)(param_1->_padding_ + 0x18c))(param_1,*(undefined4 *)(param_1->_padding_ + 400));
  }
  return;
}
