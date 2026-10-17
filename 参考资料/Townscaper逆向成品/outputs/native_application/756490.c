// RVA 0x756490 | Placemaker.Props.PropCollider$$Collides
// PDB: PropCollider_Collides_m736D18A1FAA8067236338BD0A73DC6AF47B1BA80
// Body: [[10756490, 107564e5]]
// Direct callees:

bool __cdecl
PropCollider_Collides_m736D18A1FAA8067236338BD0A73DC6AF47B1BA80
          (uchar param_1,uchar param_2,MethodInfo *param_3)

{
  byte bVar1;
  bool bVar2;

  do {
    bVar1 = param_1;
    param_1 = param_2;
    param_2 = bVar1;
  } while (param_1 < bVar1);
  switch(bVar1) {
  case 0:
    if (param_1 == 0) {
      return true;
    }
    if (param_1 == 2) {
      return true;
    }
    return param_1 == 5;
  case 1:
    bVar2 = param_1 == 1;
    break;
  default:
    goto switchD_107564a5_caseD_2;
  case 3:
    bVar2 = param_1 == 3;
    break;
  case 4:
    bVar2 = param_1 == 4;
    break;
  case 5:
    bVar2 = param_1 == 5;
  }
  if (bVar2) {
    return true;
  }
switchD_107564a5_caseD_2:
  return false;
}
