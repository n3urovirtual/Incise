#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile_Internal(System.String,System.UInt32,System.UInt64)
extern void AssetBundle_LoadFromFile_Internal_m27AD5A25C493DDF033E2C0EB8B5E73D1A498D3D9 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
extern void AssetBundle_LoadFromFile_m326379558FA2CA731C294D5F9905EA3EAE3B5E52 (void);
// 0x00000004 System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66 (void);
// 0x00000005 System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
extern void AssetBundle_GetAllScenePaths_mFE0D5927A3BEEC04BDB62FA436FA9051299B7BC6 (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	AssetBundle__ctor_mCE6DB7758AAD0EDDB044FC67C5BC7EC987BF3F71,
	AssetBundle_LoadFromFile_Internal_m27AD5A25C493DDF033E2C0EB8B5E73D1A498D3D9,
	AssetBundle_LoadFromFile_m326379558FA2CA731C294D5F9905EA3EAE3B5E52,
	AssetBundle_Unload_m0DEBACB284F6CECA8DF21486D1BBE1189F6A5D66,
	AssetBundle_GetAllScenePaths_mFE0D5927A3BEEC04BDB62FA436FA9051299B7BC6,
};
static const int32_t s_InvokerIndices[5] = 
{
	2508,
	3184,
	3883,
	2025,
	2462,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AssetBundleModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_AssetBundleModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
