#ifndef CREATION_SAFE_MATH
#define CREATION_SAFE_MATH
vec2 safe_normalize(vec2 v) { return v / max(length(v), 0.0001); }
vec3 safe_normalize(vec3 v) { return v / max(length(v), 0.0001); }
#endif
