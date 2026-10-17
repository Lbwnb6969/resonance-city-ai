// RVA 0x3d5930 | Placemaker.Ui.MenuMusic$$StopPlaying
// PDB: MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
// Body: [[103d5930, 103d595f]]
// Direct callees:
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
          (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *param_1,float param_2,
          MethodInfo *param_3)

{
  float fVar1;

  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0);
  fVar1 = __real_3f800000 / param_2;
  param_1->___targetVolume_5 = 0.0;
  param_1->___speed_6 = fVar1;
  return;
}
