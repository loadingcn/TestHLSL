#include "DXUT.h"

extern IDirect3D9* g_pD3D;
extern IDirect3DDevice9* g_pDevice;

#define ANIMATION 
//#define SIMPLE_RENDER

#ifdef ANIMATION
#define NONINDEXED
//#define INDEXED
//#define SOFTWARE
#endif

#define MIN(x,y) ((x)>(y)?(y):(x))