// RVA 0x1148620 | FuryStudios.BuildSystem.BuildInfo.DateTimeData$$op_Implicit
// PDB: DateTimeData_op_Implicit_m2DF3839E4E27523052E1CF17CE5D2561351BC65F
// Body: [[11148620, 11148652]]
// Direct callees:
// 106ebae0 DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
// 106ebb00 DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496

DateTimeData_t6375168E2A6054E7BC105D6A52446674D92D6341 * __cdecl
DateTimeData_op_Implicit_m2DF3839E4E27523052E1CF17CE5D2561351BC65F
          (DateTimeData_t6375168E2A6054E7BC105D6A52446674D92D6341 *__return_storage_ptr__,
          DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 param_1,MethodInfo *param_2)

{
  int iVar1;
  long64 lVar2;

  *(undefined4 *)&__return_storage_ptr__->___ticks_0 = 0;
  *(undefined4 *)((int)&__return_storage_ptr__->___ticks_0 + 4) = 0;
  __return_storage_ptr__->___kind_1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  lVar2 = DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
                    ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)&stack0x00000008,
                     (MethodInfo *)0x0);
  __return_storage_ptr__->___ticks_0 = lVar2;
  iVar1 = DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496
                    ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)&stack0x00000008,
                     (MethodInfo *)0x0);
  __return_storage_ptr__->___kind_1 = iVar1;
  return __return_storage_ptr__;
}
