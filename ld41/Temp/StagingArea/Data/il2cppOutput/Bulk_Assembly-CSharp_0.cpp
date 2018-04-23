#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// AddChildren
struct AddChildren_t2206414750;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Component
struct Component_t1923634451;
// CameraMenuScript
struct CameraMenuScript_t3298109984;
// Menu
struct Menu_t2559899777;
// Menu/MenuActivated
struct MenuActivated_t3536968312;
// CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0
struct U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654;
// CameraSizer
struct CameraSizer_t2190550995;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Shader
struct Shader_t4151988712;
// Hangglider
struct Hangglider_t1791610530;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// World
struct World_t3793043157;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// System.Collections.Generic.List`1<Menu/MenuItem>
struct List_1_t2606367753;
// System.String[]
struct StringU5BU5D_t1281789340;
// Menu/MenuListItemSelected
struct MenuListItemSelected_t3871161844;
// UnityEngine.GUIContent
struct GUIContent_t3050628031;
// UnityEngine.GUISkin
struct GUISkin_t1244372282;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// PathfindingImpl
struct PathfindingImpl_t3995530112;
// PathfindingImpl/IsPassable
struct IsPassable_t2551518848;
// PathfindingImpl/MapNode
struct MapNode_t4119234616;
// Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>
struct HeapPriorityQueue_1_t3878471094;
// Priority_Queue.HeapPriorityQueue`1<System.Object>
struct HeapPriorityQueue_1_t2839342642;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// Priority_Queue.PriorityQueueNode
struct PriorityQueueNode_t2831873642;
// PathFindTest
struct PathFindTest_t911201017;
// TileMapScript
struct TileMapScript_t3658915240;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// WorldSegment
struct WorldSegment_t1063874133;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t3069227754;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t57175488;
// WrapObject
struct WrapObject_t681947308;
// PathfindingImpl/MapNode[]
struct MapNodeU5BU5D_t1392113641;
// PathfindingImpl/MapNode[0...,0...]
struct MapNodeU5B0___U2C0___U5D_t1392113642;
// Menu/MenuItem[]
struct MenuItemU5BU5D_t182478402;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2383250302;
// UnityEngine.GUISettings
struct GUISettings_t1774757634;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t3742157810;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t1143955295;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// TileMapScript/MapSquare[0...,0...]
struct MapSquareU5BU2CU5D_t3810414642;

extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisBoxCollider2D_t3581341831_m201509103_RuntimeMethod_var;
extern String_t* _stringLiteral1676118739;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3452614535;
extern const uint32_t AddChildren_Start_m3800148276_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* MenuActivated_t3536968312_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMenu_t2559899777_m266561916_RuntimeMethod_var;
extern const RuntimeMethod* CameraMenuScript_U3CInitWerewolfU3Em__0_m2490717660_RuntimeMethod_var;
extern const RuntimeMethod* CameraMenuScript_U3CInitWerewolfU3Em__1_m152065500_RuntimeMethod_var;
extern String_t* _stringLiteral3883178430;
extern String_t* _stringLiteral1584031102;
extern String_t* _stringLiteral688320075;
extern String_t* _stringLiteral2247504372;
extern String_t* _stringLiteral3597005399;
extern String_t* _stringLiteral1467154390;
extern String_t* _stringLiteral4172988797;
extern String_t* _stringLiteral50526914;
extern const uint32_t CameraMenuScript_InitWerewolf_m800122845_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CameraMenuScript_U3CLoseFizzBuzzU3Em__2_m613105539_RuntimeMethod_var;
extern String_t* _stringLiteral4200262978;
extern String_t* _stringLiteral2768139538;
extern String_t* _stringLiteral2768401686;
extern String_t* _stringLiteral4055262585;
extern String_t* _stringLiteral3452614530;
extern const uint32_t CameraMenuScript_LoseFizzBuzz_m1384135540_MetadataUsageId;
extern RuntimeClass* U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__0_m810346574_RuntimeMethod_var;
extern const RuntimeMethod* U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__1_m810346575_RuntimeMethod_var;
extern const RuntimeMethod* U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__2_m810346576_RuntimeMethod_var;
extern const RuntimeMethod* U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__3_m810346577_RuntimeMethod_var;
extern String_t* _stringLiteral3452614527;
extern String_t* _stringLiteral1591030023;
extern String_t* _stringLiteral1599680907;
extern String_t* _stringLiteral4100531152;
extern const uint32_t CameraMenuScript_PlayFizzBuzz_m3358245412_MetadataUsageId;
extern RuntimeClass* CameraMenuScript_t3298109984_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CameraMenuScript_StartWerewolf_m2799107472_RuntimeMethod_var;
extern const RuntimeMethod* CameraMenuScript_StartFizzBuzz_m1782759753_RuntimeMethod_var;
extern const RuntimeMethod* CameraMenuScript_U3CStartU3Em__3_m1258916514_RuntimeMethod_var;
extern String_t* _stringLiteral1173975892;
extern String_t* _stringLiteral2533438212;
extern const uint32_t CameraMenuScript_Start_m619983585_MetadataUsageId;
extern String_t* _stringLiteral2045068922;
extern const uint32_t CameraMenuScript_U3CStartU3Em__3_m1258916514_MetadataUsageId;
extern RuntimeClass* RenderTexture_t2108887433_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m2650170333_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var;
extern const uint32_t CameraSizer_LightingResize_m1947536732_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisCamera_t4157153871_m1030966160_RuntimeMethod_var;
extern String_t* _stringLiteral3400268715;
extern String_t* _stringLiteral3229710239;
extern String_t* _stringLiteral746088437;
extern const uint32_t CameraSizer_InitLighting_m2372589901_MetadataUsageId;
extern const uint32_t CameraSizer_ResizeCamera_m4265951176_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const uint32_t Hangglider_Start_m61819019_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t Hangglider_FixedUpdate_m3640606711_MetadataUsageId;
extern RuntimeClass* List_1_t2606367753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m497344735_RuntimeMethod_var;
extern const uint32_t Menu__ctor_m1825074274_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3289853881_RuntimeMethod_var;
extern const uint32_t Menu_AddButtonItem_m2135025504_MetadataUsageId;
extern const uint32_t Menu_AddListItem_m3949730316_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m3987431879_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1482221937_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m2380330413_RuntimeMethod_var;
extern const uint32_t Menu_InterpretKeys_m4109317554_MetadataUsageId;
extern RuntimeClass* GUIContent_t3050628031_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3450517398;
extern String_t* _stringLiteral3450517394;
extern String_t* _stringLiteral3451828096;
extern String_t* _stringLiteral3450517396;
extern String_t* _stringLiteral3451697024;
extern const uint32_t Menu_DrawMenuItem_m1045921698_MetadataUsageId;
extern const uint32_t Menu_DrawMenu_m3643787402_MetadataUsageId;
extern const uint32_t Menu_Update_m592513814_MetadataUsageId;
extern const uint32_t Menu_OnGUI_m3438918793_MetadataUsageId;
extern const uint32_t MenuListItemSelected_BeginInvoke_m3125306220_MetadataUsageId;
extern RuntimeClass* MapNodeU5B0___U2C0___U5D_t1392113642_il2cpp_TypeInfo_var;
extern const uint32_t PathfindingImpl__ctor_m2501677692_MetadataUsageId;
extern RuntimeClass* MapNode_t4119234616_il2cpp_TypeInfo_var;
extern const uint32_t PathfindingImpl_InitMap_m3411888308_MetadataUsageId;
extern const RuntimeMethod* HeapPriorityQueue_1_Contains_m65278302_RuntimeMethod_var;
extern const RuntimeMethod* HeapPriorityQueue_1_UpdatePriority_m393398276_RuntimeMethod_var;
extern const RuntimeMethod* HeapPriorityQueue_1_Enqueue_m3210081902_RuntimeMethod_var;
extern const uint32_t PathfindingImpl_SetVals_m3297992557_MetadataUsageId;
extern RuntimeClass* HeapPriorityQueue_1_t3878471094_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern const RuntimeMethod* HeapPriorityQueue_1__ctor_m1012109098_RuntimeMethod_var;
extern const RuntimeMethod* HeapPriorityQueue_1_Dequeue_m1446625078_RuntimeMethod_var;
extern const RuntimeMethod* HeapPriorityQueue_1_get_Count_m1904799400_RuntimeMethod_var;
extern const uint32_t PathfindingImpl_FindPath_m774054529_MetadataUsageId;
extern const uint32_t IsPassable_BeginInvoke_m1057281090_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisTileMapScript_t3658915240_m3027566996_RuntimeMethod_var;
extern String_t* _stringLiteral607137884;
extern String_t* _stringLiteral1086829731;
extern String_t* _stringLiteral3615405208;
extern const uint32_t PathFindTest_Update_m1594519154_MetadataUsageId;
extern String_t* _stringLiteral2344959464;
extern const uint32_t TileMapScript__ctor_m169766251_MetadataUsageId;
extern const uint32_t TileMapScript_GetPath_m1857384162_MetadataUsageId;
extern String_t* _stringLiteral3430022137;
extern const uint32_t TileMapScript_GenerateColliderAt_m1712027877_MetadataUsageId;
extern RuntimeClass* MapSquareU5BU2CU5D_t3810414642_il2cpp_TypeInfo_var;
extern const uint32_t TileMapScript_GenerateMapArrayFromLevelData_m1370785473_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* IsPassable_t2551518848_il2cpp_TypeInfo_var;
extern RuntimeClass* PathfindingImpl_t3995530112_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var;
extern const RuntimeMethod* TileMapScript_CollideAtGrid_m2855697938_RuntimeMethod_var;
extern const uint32_t TileMapScript_GenerateMap_m71397288_MetadataUsageId;
extern String_t* _stringLiteral1940050320;
extern String_t* _stringLiteral668646863;
extern const uint32_t World_GetUpdraughtAtCoord_m2083694645_MetadataUsageId;
extern String_t* _stringLiteral2076741146;
extern const uint32_t World_GetHeightAtX_m4074285094_MetadataUsageId;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern const uint32_t World_CalculateUpdraughts_m1067250568_MetadataUsageId;
extern const uint32_t World_GenerateHeightmap_m1183724432_MetadataUsageId;
extern const uint32_t World_GenerateHeightAtX_m635807593_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWorldSegment_t1063874133_m2218618745_RuntimeMethod_var;
extern const uint32_t World_GenerateWorld_m2153961792_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisParticleSystem_t1800779281_m3884485303_RuntimeMethod_var;
extern const uint32_t World_CreateCloud_m1748687854_MetadataUsageId;
extern RuntimeClass* World_t3793043157_il2cpp_TypeInfo_var;
extern const RuntimeMethod* World_U3CStartU3Em__0_m3761361519_RuntimeMethod_var;
extern String_t* _stringLiteral1433838075;
extern const uint32_t World_Start_m4175979732_MetadataUsageId;
extern RuntimeClass* ParticleU5BU5D_t3069227754_il2cpp_TypeInfo_var;
extern const uint32_t World_UpdateParticles_m1813833926_MetadataUsageId;
extern const uint32_t World_DrawUpdraughts_m3321137354_MetadataUsageId;
extern String_t* _stringLiteral2531813931;
extern const uint32_t World_AddThermal_m4143925271_MetadataUsageId;
extern String_t* _stringLiteral4223207902;
extern const uint32_t World_Update_m3671593747_MetadataUsageId;
extern String_t* _stringLiteral2429840862;
extern const uint32_t World_U3CStartU3Em__0_m3761361519_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisPolygonCollider2D_t57175488_m2113441413_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern const uint32_t WorldSegment_SetHeights_m991205745_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct MapNodeU5B0___U2C0___U5D_t1392113642;
struct Vector2U5BU5D_t1457185986;
struct MapSquareU5BU2CU5D_t3810414642;
struct Vector3U5BU5D_t1718750761;
struct Int32U5BU5D_t385246372;
struct SingleU5BU5D_t1444911251;
struct ParticleU5BU5D_t3069227754;


#ifndef U3CMODULEU3E_T692745540_H
#define U3CMODULEU3E_T692745540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745540 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745540_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CPLAYFIZZBUZZU3EC__ANONSTOREY0_T4212187654_H
#define U3CPLAYFIZZBUZZU3EC__ANONSTOREY0_T4212187654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0
struct  U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654  : public RuntimeObject
{
public:
	// System.Boolean CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::fizz
	bool ___fizz_0;
	// System.Boolean CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::buzz
	bool ___buzz_1;
	// System.Int32 CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::num
	int32_t ___num_2;
	// CameraMenuScript CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::$this
	CameraMenuScript_t3298109984 * ___U24this_3;

public:
	inline static int32_t get_offset_of_fizz_0() { return static_cast<int32_t>(offsetof(U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654, ___fizz_0)); }
	inline bool get_fizz_0() const { return ___fizz_0; }
	inline bool* get_address_of_fizz_0() { return &___fizz_0; }
	inline void set_fizz_0(bool value)
	{
		___fizz_0 = value;
	}

	inline static int32_t get_offset_of_buzz_1() { return static_cast<int32_t>(offsetof(U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654, ___buzz_1)); }
	inline bool get_buzz_1() const { return ___buzz_1; }
	inline bool* get_address_of_buzz_1() { return &___buzz_1; }
	inline void set_buzz_1(bool value)
	{
		___buzz_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654, ___num_2)); }
	inline int32_t get_num_2() const { return ___num_2; }
	inline int32_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int32_t value)
	{
		___num_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654, ___U24this_3)); }
	inline CameraMenuScript_t3298109984 * get_U24this_3() const { return ___U24this_3; }
	inline CameraMenuScript_t3298109984 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(CameraMenuScript_t3298109984 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYFIZZBUZZU3EC__ANONSTOREY0_T4212187654_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef PRIORITYQUEUENODE_T2831873642_H
#define PRIORITYQUEUENODE_T2831873642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Priority_Queue.PriorityQueueNode
struct  PriorityQueueNode_t2831873642  : public RuntimeObject
{
public:
	// System.Double Priority_Queue.PriorityQueueNode::<Priority>k__BackingField
	double ___U3CPriorityU3Ek__BackingField_0;
	// System.Int64 Priority_Queue.PriorityQueueNode::<InsertionIndex>k__BackingField
	int64_t ___U3CInsertionIndexU3Ek__BackingField_1;
	// System.Int32 Priority_Queue.PriorityQueueNode::<QueueIndex>k__BackingField
	int32_t ___U3CQueueIndexU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PriorityQueueNode_t2831873642, ___U3CPriorityU3Ek__BackingField_0)); }
	inline double get_U3CPriorityU3Ek__BackingField_0() const { return ___U3CPriorityU3Ek__BackingField_0; }
	inline double* get_address_of_U3CPriorityU3Ek__BackingField_0() { return &___U3CPriorityU3Ek__BackingField_0; }
	inline void set_U3CPriorityU3Ek__BackingField_0(double value)
	{
		___U3CPriorityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CInsertionIndexU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PriorityQueueNode_t2831873642, ___U3CInsertionIndexU3Ek__BackingField_1)); }
	inline int64_t get_U3CInsertionIndexU3Ek__BackingField_1() const { return ___U3CInsertionIndexU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CInsertionIndexU3Ek__BackingField_1() { return &___U3CInsertionIndexU3Ek__BackingField_1; }
	inline void set_U3CInsertionIndexU3Ek__BackingField_1(int64_t value)
	{
		___U3CInsertionIndexU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CQueueIndexU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PriorityQueueNode_t2831873642, ___U3CQueueIndexU3Ek__BackingField_2)); }
	inline int32_t get_U3CQueueIndexU3Ek__BackingField_2() const { return ___U3CQueueIndexU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CQueueIndexU3Ek__BackingField_2() { return &___U3CQueueIndexU3Ek__BackingField_2; }
	inline void set_U3CQueueIndexU3Ek__BackingField_2(int32_t value)
	{
		___U3CQueueIndexU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIORITYQUEUENODE_T2831873642_H
#ifndef HEAPPRIORITYQUEUE_1_T3878471094_H
#define HEAPPRIORITYQUEUE_1_T3878471094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>
struct  HeapPriorityQueue_1_t3878471094  : public RuntimeObject
{
public:
	// System.Int32 Priority_Queue.HeapPriorityQueue`1::_numNodes
	int32_t ____numNodes_0;
	// T[] Priority_Queue.HeapPriorityQueue`1::_nodes
	MapNodeU5BU5D_t1392113641* ____nodes_1;
	// System.Int64 Priority_Queue.HeapPriorityQueue`1::_numNodesEverEnqueued
	int64_t ____numNodesEverEnqueued_2;

public:
	inline static int32_t get_offset_of__numNodes_0() { return static_cast<int32_t>(offsetof(HeapPriorityQueue_1_t3878471094, ____numNodes_0)); }
	inline int32_t get__numNodes_0() const { return ____numNodes_0; }
	inline int32_t* get_address_of__numNodes_0() { return &____numNodes_0; }
	inline void set__numNodes_0(int32_t value)
	{
		____numNodes_0 = value;
	}

	inline static int32_t get_offset_of__nodes_1() { return static_cast<int32_t>(offsetof(HeapPriorityQueue_1_t3878471094, ____nodes_1)); }
	inline MapNodeU5BU5D_t1392113641* get__nodes_1() const { return ____nodes_1; }
	inline MapNodeU5BU5D_t1392113641** get_address_of__nodes_1() { return &____nodes_1; }
	inline void set__nodes_1(MapNodeU5BU5D_t1392113641* value)
	{
		____nodes_1 = value;
		Il2CppCodeGenWriteBarrier((&____nodes_1), value);
	}

	inline static int32_t get_offset_of__numNodesEverEnqueued_2() { return static_cast<int32_t>(offsetof(HeapPriorityQueue_1_t3878471094, ____numNodesEverEnqueued_2)); }
	inline int64_t get__numNodesEverEnqueued_2() const { return ____numNodesEverEnqueued_2; }
	inline int64_t* get_address_of__numNodesEverEnqueued_2() { return &____numNodesEverEnqueued_2; }
	inline void set__numNodesEverEnqueued_2(int64_t value)
	{
		____numNodesEverEnqueued_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEAPPRIORITYQUEUE_1_T3878471094_H
#ifndef PATHFINDINGIMPL_T3995530112_H
#define PATHFINDINGIMPL_T3995530112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathfindingImpl
struct  PathfindingImpl_t3995530112  : public RuntimeObject
{
public:
	// System.Int32 PathfindingImpl::m_Width
	int32_t ___m_Width_0;
	// System.Int32 PathfindingImpl::m_Height
	int32_t ___m_Height_1;
	// PathfindingImpl/IsPassable PathfindingImpl::m_Unpassable
	IsPassable_t2551518848 * ___m_Unpassable_2;
	// PathfindingImpl/MapNode[0...,0...] PathfindingImpl::m_Map
	MapNodeU5B0___U2C0___U5D_t1392113642* ___m_Map_3;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(PathfindingImpl_t3995530112, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(PathfindingImpl_t3995530112, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_Unpassable_2() { return static_cast<int32_t>(offsetof(PathfindingImpl_t3995530112, ___m_Unpassable_2)); }
	inline IsPassable_t2551518848 * get_m_Unpassable_2() const { return ___m_Unpassable_2; }
	inline IsPassable_t2551518848 ** get_address_of_m_Unpassable_2() { return &___m_Unpassable_2; }
	inline void set_m_Unpassable_2(IsPassable_t2551518848 * value)
	{
		___m_Unpassable_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Unpassable_2), value);
	}

	inline static int32_t get_offset_of_m_Map_3() { return static_cast<int32_t>(offsetof(PathfindingImpl_t3995530112, ___m_Map_3)); }
	inline MapNodeU5B0___U2C0___U5D_t1392113642* get_m_Map_3() const { return ___m_Map_3; }
	inline MapNodeU5B0___U2C0___U5D_t1392113642** get_address_of_m_Map_3() { return &___m_Map_3; }
	inline void set_m_Map_3(MapNodeU5B0___U2C0___U5D_t1392113642* value)
	{
		___m_Map_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Map_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHFINDINGIMPL_T3995530112_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2606367753_H
#define LIST_1_T2606367753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Menu/MenuItem>
struct  List_1_t2606367753  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MenuItemU5BU5D_t182478402* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606367753, ____items_1)); }
	inline MenuItemU5BU5D_t182478402* get__items_1() const { return ____items_1; }
	inline MenuItemU5BU5D_t182478402** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MenuItemU5BU5D_t182478402* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606367753, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606367753, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2606367753_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MenuItemU5BU5D_t182478402* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606367753_StaticFields, ___EmptyArray_4)); }
	inline MenuItemU5BU5D_t182478402* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MenuItemU5BU5D_t182478402** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MenuItemU5BU5D_t182478402* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606367753_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef GUICONTENT_T3050628031_H
#define GUICONTENT_T3050628031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t3050628031  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t3661962703 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Image_1)); }
	inline Texture_t3661962703 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t3661962703 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t3661962703 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t3050628031_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t3050628031 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t3050628031 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t3050628031 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t3050628031 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_Text_3)); }
	inline GUIContent_t3050628031 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t3050628031 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t3050628031 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_Image_4)); }
	inline GUIContent_t3050628031 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t3050628031 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t3050628031 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t3050628031 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t3050628031 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t3050628031 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t3050628031_StaticFields, ___none_6)); }
	inline GUIContent_t3050628031 * get_none_6() const { return ___none_6; }
	inline GUIContent_t3050628031 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t3050628031 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t3050628031_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t3661962703 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t3050628031_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t3661962703 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T3050628031_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef COORD_T2591101271_H
#define COORD_T2591101271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathfindingImpl/coord
struct  coord_t2591101271 
{
public:
	// System.Int32 PathfindingImpl/coord::x
	int32_t ___x_0;
	// System.Int32 PathfindingImpl/coord::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(coord_t2591101271, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(coord_t2591101271, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORD_T2591101271_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef MAPSQUARE_T3390943120_H
#define MAPSQUARE_T3390943120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileMapScript/MapSquare
struct  MapSquare_t3390943120 
{
public:
	// System.Char TileMapScript/MapSquare::RawData
	Il2CppChar ___RawData_0;
	// System.Int32 TileMapScript/MapSquare::TextureNum
	int32_t ___TextureNum_1;
	// System.Boolean TileMapScript/MapSquare::IsWall
	bool ___IsWall_2;
	// System.Boolean TileMapScript/MapSquare::HasCollider
	bool ___HasCollider_3;

public:
	inline static int32_t get_offset_of_RawData_0() { return static_cast<int32_t>(offsetof(MapSquare_t3390943120, ___RawData_0)); }
	inline Il2CppChar get_RawData_0() const { return ___RawData_0; }
	inline Il2CppChar* get_address_of_RawData_0() { return &___RawData_0; }
	inline void set_RawData_0(Il2CppChar value)
	{
		___RawData_0 = value;
	}

	inline static int32_t get_offset_of_TextureNum_1() { return static_cast<int32_t>(offsetof(MapSquare_t3390943120, ___TextureNum_1)); }
	inline int32_t get_TextureNum_1() const { return ___TextureNum_1; }
	inline int32_t* get_address_of_TextureNum_1() { return &___TextureNum_1; }
	inline void set_TextureNum_1(int32_t value)
	{
		___TextureNum_1 = value;
	}

	inline static int32_t get_offset_of_IsWall_2() { return static_cast<int32_t>(offsetof(MapSquare_t3390943120, ___IsWall_2)); }
	inline bool get_IsWall_2() const { return ___IsWall_2; }
	inline bool* get_address_of_IsWall_2() { return &___IsWall_2; }
	inline void set_IsWall_2(bool value)
	{
		___IsWall_2 = value;
	}

	inline static int32_t get_offset_of_HasCollider_3() { return static_cast<int32_t>(offsetof(MapSquare_t3390943120, ___HasCollider_3)); }
	inline bool get_HasCollider_3() const { return ___HasCollider_3; }
	inline bool* get_address_of_HasCollider_3() { return &___HasCollider_3; }
	inline void set_HasCollider_3(bool value)
	{
		___HasCollider_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TileMapScript/MapSquare
struct MapSquare_t3390943120_marshaled_pinvoke
{
	uint8_t ___RawData_0;
	int32_t ___TextureNum_1;
	int32_t ___IsWall_2;
	int32_t ___HasCollider_3;
};
// Native definition for COM marshalling of TileMapScript/MapSquare
struct MapSquare_t3390943120_marshaled_com
{
	uint8_t ___RawData_0;
	int32_t ___TextureNum_1;
	int32_t ___IsWall_2;
	int32_t ___HasCollider_3;
};
#endif // MAPSQUARE_T3390943120_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t96683501* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_5)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T2842956331_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef PARTICLE_T1882894987_H
#define PARTICLE_T1882894987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/Particle
struct  Particle_t1882894987 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t3722313464  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t3722313464  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t3722313464  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t3722313464  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t3722313464  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t3722313464  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t3722313464  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t3722313464  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t2600501292  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_12;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_13;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_Position_0)); }
	inline Vector3_t3722313464  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t3722313464 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t3722313464  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_Velocity_1)); }
	inline Vector3_t3722313464  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t3722313464  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_AnimatedVelocity_2)); }
	inline Vector3_t3722313464  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_t3722313464 * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_t3722313464  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_InitialVelocity_3)); }
	inline Vector3_t3722313464  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_t3722313464 * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_t3722313464  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_AxisOfRotation_4)); }
	inline Vector3_t3722313464  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_t3722313464 * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_t3722313464  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_Rotation_5)); }
	inline Vector3_t3722313464  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_t3722313464 * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_t3722313464  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_AngularVelocity_6)); }
	inline Vector3_t3722313464  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_t3722313464 * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_t3722313464  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_StartSize_7)); }
	inline Vector3_t3722313464  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_t3722313464 * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_t3722313464  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_StartColor_8)); }
	inline Color32_t2600501292  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_t2600501292 * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_t2600501292  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_10() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_Lifetime_10)); }
	inline float get_m_Lifetime_10() const { return ___m_Lifetime_10; }
	inline float* get_address_of_m_Lifetime_10() { return &___m_Lifetime_10; }
	inline void set_m_Lifetime_10(float value)
	{
		___m_Lifetime_10 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_11() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_StartLifetime_11)); }
	inline float get_m_StartLifetime_11() const { return ___m_StartLifetime_11; }
	inline float* get_address_of_m_StartLifetime_11() { return &___m_StartLifetime_11; }
	inline void set_m_StartLifetime_11(float value)
	{
		___m_StartLifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_12() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_EmitAccumulator0_12)); }
	inline float get_m_EmitAccumulator0_12() const { return ___m_EmitAccumulator0_12; }
	inline float* get_address_of_m_EmitAccumulator0_12() { return &___m_EmitAccumulator0_12; }
	inline void set_m_EmitAccumulator0_12(float value)
	{
		___m_EmitAccumulator0_12 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_13() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_EmitAccumulator1_13)); }
	inline float get_m_EmitAccumulator1_13() const { return ___m_EmitAccumulator1_13; }
	inline float* get_address_of_m_EmitAccumulator1_13() { return &___m_EmitAccumulator1_13; }
	inline void set_m_EmitAccumulator1_13(float value)
	{
		___m_EmitAccumulator1_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLE_T1882894987_H
#ifndef MAPNODE_T4119234616_H
#define MAPNODE_T4119234616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathfindingImpl/MapNode
struct  MapNode_t4119234616  : public PriorityQueueNode_t2831873642
{
public:
	// PathfindingImpl/coord PathfindingImpl/MapNode::pos
	coord_t2591101271  ___pos_3;
	// System.Boolean PathfindingImpl/MapNode::passable
	bool ___passable_4;
	// System.Int32 PathfindingImpl/MapNode::f
	int32_t ___f_5;
	// System.Int32 PathfindingImpl/MapNode::g
	int32_t ___g_6;
	// System.Int32 PathfindingImpl/MapNode::h
	int32_t ___h_7;
	// System.Int32 PathfindingImpl/MapNode::count
	int32_t ___count_8;
	// PathfindingImpl/coord PathfindingImpl/MapNode::previous
	coord_t2591101271  ___previous_9;
	// System.Boolean PathfindingImpl/MapNode::closed
	bool ___closed_10;

public:
	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(MapNode_t4119234616, ___pos_3)); }
	inline coord_t2591101271  get_pos_3() const { return ___pos_3; }
	inline coord_t2591101271 * get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(coord_t2591101271  value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_passable_4() { return static_cast<int32_t>(offsetof(MapNode_t4119234616, ___passable_4)); }
	inline bool get_passable_4() const { return ___passable_4; }
	inline bool* get_address_of_passable_4() { return &___passable_4; }
	inline void set_passable_4(bool value)
	{
		___passable_4 = value;
	}

	inline static int32_t get_offset_of_f_5() { return static_cast<int32_t>(offsetof(MapNode_t4119234616, ___f_5)); }
	inline int32_t get_f_5() const { return ___f_5; }
	inline int32_t* get_address_of_f_5() { return &___f_5; }
	inline void set_f_5(int32_t value)
	{
		___f_5 = value;
	}

	inline static int32_t get_offset_of_g_6() { return static_cast<int32_t>(offsetof(MapNode_t4119234616, ___g_6)); }
	inline int32_t get_g_6() const { return ___g_6; }
	inline int32_t* get_address_of_g_6() { return &___g_6; }
	inline void set_g_6(int32_t value)
	{
		___g_6 = value;
	}

	inline static int32_t get_offset_of_h_7() { return static_cast<int32_t>(offsetof(MapNode_t4119234616, ___h_7)); }
	inline int32_t get_h_7() const { return ___h_7; }
	inline int32_t* get_address_of_h_7() { return &___h_7; }
	inline void set_h_7(int32_t value)
	{
		___h_7 = value;
	}

	inline static int32_t get_offset_of_count_8() { return static_cast<int32_t>(offsetof(MapNode_t4119234616, ___count_8)); }
	inline int32_t get_count_8() const { return ___count_8; }
	inline int32_t* get_address_of_count_8() { return &___count_8; }
	inline void set_count_8(int32_t value)
	{
		___count_8 = value;
	}

	inline static int32_t get_offset_of_previous_9() { return static_cast<int32_t>(offsetof(MapNode_t4119234616, ___previous_9)); }
	inline coord_t2591101271  get_previous_9() const { return ___previous_9; }
	inline coord_t2591101271 * get_address_of_previous_9() { return &___previous_9; }
	inline void set_previous_9(coord_t2591101271  value)
	{
		___previous_9 = value;
	}

	inline static int32_t get_offset_of_closed_10() { return static_cast<int32_t>(offsetof(MapNode_t4119234616, ___closed_10)); }
	inline bool get_closed_10() const { return ___closed_10; }
	inline bool* get_address_of_closed_10() { return &___closed_10; }
	inline void set_closed_10(bool value)
	{
		___closed_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPNODE_T4119234616_H
#ifndef MENUITEMTYPE_T674843175_H
#define MENUITEMTYPE_T674843175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu/MenuItemType
struct  MenuItemType_t674843175 
{
public:
	// System.Int32 Menu/MenuItemType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MenuItemType_t674843175, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUITEMTYPE_T674843175_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PRIMITIVETYPE_T3468579401_H
#define PRIMITIVETYPE_T3468579401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t3468579401 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrimitiveType_t3468579401, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPE_T3468579401_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MENUITEM_T1134293011_H
#define MENUITEM_T1134293011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu/MenuItem
struct  MenuItem_t1134293011 
{
public:
	// System.String Menu/MenuItem::Text
	String_t* ___Text_0;
	// Menu/MenuItemType Menu/MenuItem::Type
	int32_t ___Type_1;
	// System.String[] Menu/MenuItem::ListItems
	StringU5BU5D_t1281789340* ___ListItems_2;
	// Menu/MenuActivated Menu/MenuItem::onActivate
	MenuActivated_t3536968312 * ___onActivate_3;
	// Menu/MenuListItemSelected Menu/MenuItem::onItemSelect
	MenuListItemSelected_t3871161844 * ___onItemSelect_4;
	// System.Int32 Menu/MenuItem::SelectedIndex
	int32_t ___SelectedIndex_5;

public:
	inline static int32_t get_offset_of_Text_0() { return static_cast<int32_t>(offsetof(MenuItem_t1134293011, ___Text_0)); }
	inline String_t* get_Text_0() const { return ___Text_0; }
	inline String_t** get_address_of_Text_0() { return &___Text_0; }
	inline void set_Text_0(String_t* value)
	{
		___Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___Text_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(MenuItem_t1134293011, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_ListItems_2() { return static_cast<int32_t>(offsetof(MenuItem_t1134293011, ___ListItems_2)); }
	inline StringU5BU5D_t1281789340* get_ListItems_2() const { return ___ListItems_2; }
	inline StringU5BU5D_t1281789340** get_address_of_ListItems_2() { return &___ListItems_2; }
	inline void set_ListItems_2(StringU5BU5D_t1281789340* value)
	{
		___ListItems_2 = value;
		Il2CppCodeGenWriteBarrier((&___ListItems_2), value);
	}

	inline static int32_t get_offset_of_onActivate_3() { return static_cast<int32_t>(offsetof(MenuItem_t1134293011, ___onActivate_3)); }
	inline MenuActivated_t3536968312 * get_onActivate_3() const { return ___onActivate_3; }
	inline MenuActivated_t3536968312 ** get_address_of_onActivate_3() { return &___onActivate_3; }
	inline void set_onActivate_3(MenuActivated_t3536968312 * value)
	{
		___onActivate_3 = value;
		Il2CppCodeGenWriteBarrier((&___onActivate_3), value);
	}

	inline static int32_t get_offset_of_onItemSelect_4() { return static_cast<int32_t>(offsetof(MenuItem_t1134293011, ___onItemSelect_4)); }
	inline MenuListItemSelected_t3871161844 * get_onItemSelect_4() const { return ___onItemSelect_4; }
	inline MenuListItemSelected_t3871161844 ** get_address_of_onItemSelect_4() { return &___onItemSelect_4; }
	inline void set_onItemSelect_4(MenuListItemSelected_t3871161844 * value)
	{
		___onItemSelect_4 = value;
		Il2CppCodeGenWriteBarrier((&___onItemSelect_4), value);
	}

	inline static int32_t get_offset_of_SelectedIndex_5() { return static_cast<int32_t>(offsetof(MenuItem_t1134293011, ___SelectedIndex_5)); }
	inline int32_t get_SelectedIndex_5() const { return ___SelectedIndex_5; }
	inline int32_t* get_address_of_SelectedIndex_5() { return &___SelectedIndex_5; }
	inline void set_SelectedIndex_5(int32_t value)
	{
		___SelectedIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Menu/MenuItem
struct MenuItem_t1134293011_marshaled_pinvoke
{
	char* ___Text_0;
	int32_t ___Type_1;
	char** ___ListItems_2;
	Il2CppMethodPointer ___onActivate_3;
	Il2CppMethodPointer ___onItemSelect_4;
	int32_t ___SelectedIndex_5;
};
// Native definition for COM marshalling of Menu/MenuItem
struct MenuItem_t1134293011_marshaled_com
{
	Il2CppChar* ___Text_0;
	int32_t ___Type_1;
	Il2CppChar** ___ListItems_2;
	Il2CppMethodPointer ___onActivate_3;
	Il2CppMethodPointer ___onItemSelect_4;
	int32_t ___SelectedIndex_5;
};
#endif // MENUITEM_T1134293011_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef MENUACTIVATED_T3536968312_H
#define MENUACTIVATED_T3536968312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu/MenuActivated
struct  MenuActivated_t3536968312  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUACTIVATED_T3536968312_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef MENULISTITEMSELECTED_T3871161844_H
#define MENULISTITEMSELECTED_T3871161844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu/MenuListItemSelected
struct  MenuListItemSelected_t3871161844  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENULISTITEMSELECTED_T3871161844_H
#ifndef ISPASSABLE_T2551518848_H
#define ISPASSABLE_T2551518848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathfindingImpl/IsPassable
struct  IsPassable_t2551518848  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISPASSABLE_T2551518848_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef GUISKIN_T1244372282_H
#define GUISKIN_T1244372282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t1244372282  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t1956802104 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t3956901511 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t3956901511 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t3956901511 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t3956901511 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t3956901511 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t3956901511 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t3956901511 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t3956901511 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t3956901511 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t3956901511 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t3956901511 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t3956901511 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t3956901511 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t3956901511 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t3956901511 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t3956901511 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t3956901511 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t3956901511 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2383250302* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t1774757634 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t3742157810 * ___m_Styles_26;

public:
	inline static int32_t get_offset_of_m_Font_2() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Font_2)); }
	inline Font_t1956802104 * get_m_Font_2() const { return ___m_Font_2; }
	inline Font_t1956802104 ** get_address_of_m_Font_2() { return &___m_Font_2; }
	inline void set_m_Font_2(Font_t1956802104 * value)
	{
		___m_Font_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_2), value);
	}

	inline static int32_t get_offset_of_m_box_3() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_box_3)); }
	inline GUIStyle_t3956901511 * get_m_box_3() const { return ___m_box_3; }
	inline GUIStyle_t3956901511 ** get_address_of_m_box_3() { return &___m_box_3; }
	inline void set_m_box_3(GUIStyle_t3956901511 * value)
	{
		___m_box_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_3), value);
	}

	inline static int32_t get_offset_of_m_button_4() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_button_4)); }
	inline GUIStyle_t3956901511 * get_m_button_4() const { return ___m_button_4; }
	inline GUIStyle_t3956901511 ** get_address_of_m_button_4() { return &___m_button_4; }
	inline void set_m_button_4(GUIStyle_t3956901511 * value)
	{
		___m_button_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_4), value);
	}

	inline static int32_t get_offset_of_m_toggle_5() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_toggle_5)); }
	inline GUIStyle_t3956901511 * get_m_toggle_5() const { return ___m_toggle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_m_toggle_5() { return &___m_toggle_5; }
	inline void set_m_toggle_5(GUIStyle_t3956901511 * value)
	{
		___m_toggle_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_5), value);
	}

	inline static int32_t get_offset_of_m_label_6() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_label_6)); }
	inline GUIStyle_t3956901511 * get_m_label_6() const { return ___m_label_6; }
	inline GUIStyle_t3956901511 ** get_address_of_m_label_6() { return &___m_label_6; }
	inline void set_m_label_6(GUIStyle_t3956901511 * value)
	{
		___m_label_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_6), value);
	}

	inline static int32_t get_offset_of_m_textField_7() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textField_7)); }
	inline GUIStyle_t3956901511 * get_m_textField_7() const { return ___m_textField_7; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textField_7() { return &___m_textField_7; }
	inline void set_m_textField_7(GUIStyle_t3956901511 * value)
	{
		___m_textField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_7), value);
	}

	inline static int32_t get_offset_of_m_textArea_8() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_textArea_8)); }
	inline GUIStyle_t3956901511 * get_m_textArea_8() const { return ___m_textArea_8; }
	inline GUIStyle_t3956901511 ** get_address_of_m_textArea_8() { return &___m_textArea_8; }
	inline void set_m_textArea_8(GUIStyle_t3956901511 * value)
	{
		___m_textArea_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_8), value);
	}

	inline static int32_t get_offset_of_m_window_9() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_window_9)); }
	inline GUIStyle_t3956901511 * get_m_window_9() const { return ___m_window_9; }
	inline GUIStyle_t3956901511 ** get_address_of_m_window_9() { return &___m_window_9; }
	inline void set_m_window_9(GUIStyle_t3956901511 * value)
	{
		___m_window_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_9), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_10() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSlider_10)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSlider_10() const { return ___m_horizontalSlider_10; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSlider_10() { return &___m_horizontalSlider_10; }
	inline void set_m_horizontalSlider_10(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_10), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_11() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalSliderThumb_11)); }
	inline GUIStyle_t3956901511 * get_m_horizontalSliderThumb_11() const { return ___m_horizontalSliderThumb_11; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalSliderThumb_11() { return &___m_horizontalSliderThumb_11; }
	inline void set_m_horizontalSliderThumb_11(GUIStyle_t3956901511 * value)
	{
		___m_horizontalSliderThumb_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_11), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSlider_12)); }
	inline GUIStyle_t3956901511 * get_m_verticalSlider_12() const { return ___m_verticalSlider_12; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSlider_12() { return &___m_verticalSlider_12; }
	inline void set_m_verticalSlider_12(GUIStyle_t3956901511 * value)
	{
		___m_verticalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalSliderThumb_13)); }
	inline GUIStyle_t3956901511 * get_m_verticalSliderThumb_13() const { return ___m_verticalSliderThumb_13; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalSliderThumb_13() { return &___m_verticalSliderThumb_13; }
	inline void set_m_verticalSliderThumb_13(GUIStyle_t3956901511 * value)
	{
		___m_verticalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_14() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbar_14)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbar_14() const { return ___m_horizontalScrollbar_14; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbar_14() { return &___m_horizontalScrollbar_14; }
	inline void set_m_horizontalScrollbar_14(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarThumb_15)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarThumb_15() const { return ___m_horizontalScrollbarThumb_15; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarThumb_15() { return &___m_horizontalScrollbarThumb_15; }
	inline void set_m_horizontalScrollbarThumb_15(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_16() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarLeftButton_16)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarLeftButton_16() const { return ___m_horizontalScrollbarLeftButton_16; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarLeftButton_16() { return &___m_horizontalScrollbarLeftButton_16; }
	inline void set_m_horizontalScrollbarLeftButton_16(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarLeftButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_17() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_horizontalScrollbarRightButton_17)); }
	inline GUIStyle_t3956901511 * get_m_horizontalScrollbarRightButton_17() const { return ___m_horizontalScrollbarRightButton_17; }
	inline GUIStyle_t3956901511 ** get_address_of_m_horizontalScrollbarRightButton_17() { return &___m_horizontalScrollbarRightButton_17; }
	inline void set_m_horizontalScrollbarRightButton_17(GUIStyle_t3956901511 * value)
	{
		___m_horizontalScrollbarRightButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_17), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbar_18)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbar_18() const { return ___m_verticalScrollbar_18; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbar_18() { return &___m_verticalScrollbar_18; }
	inline void set_m_verticalScrollbar_18(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_18), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarThumb_19)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarThumb_19() const { return ___m_verticalScrollbarThumb_19; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarThumb_19() { return &___m_verticalScrollbarThumb_19; }
	inline void set_m_verticalScrollbarThumb_19(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_20() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarUpButton_20)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarUpButton_20() const { return ___m_verticalScrollbarUpButton_20; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarUpButton_20() { return &___m_verticalScrollbarUpButton_20; }
	inline void set_m_verticalScrollbarUpButton_20(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarUpButton_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_21() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_verticalScrollbarDownButton_21)); }
	inline GUIStyle_t3956901511 * get_m_verticalScrollbarDownButton_21() const { return ___m_verticalScrollbarDownButton_21; }
	inline GUIStyle_t3956901511 ** get_address_of_m_verticalScrollbarDownButton_21() { return &___m_verticalScrollbarDownButton_21; }
	inline void set_m_verticalScrollbarDownButton_21(GUIStyle_t3956901511 * value)
	{
		___m_verticalScrollbarDownButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_21), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_22() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_ScrollView_22)); }
	inline GUIStyle_t3956901511 * get_m_ScrollView_22() const { return ___m_ScrollView_22; }
	inline GUIStyle_t3956901511 ** get_address_of_m_ScrollView_22() { return &___m_ScrollView_22; }
	inline void set_m_ScrollView_22(GUIStyle_t3956901511 * value)
	{
		___m_ScrollView_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_22), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_23() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_CustomStyles_23)); }
	inline GUIStyleU5BU5D_t2383250302* get_m_CustomStyles_23() const { return ___m_CustomStyles_23; }
	inline GUIStyleU5BU5D_t2383250302** get_address_of_m_CustomStyles_23() { return &___m_CustomStyles_23; }
	inline void set_m_CustomStyles_23(GUIStyleU5BU5D_t2383250302* value)
	{
		___m_CustomStyles_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_23), value);
	}

	inline static int32_t get_offset_of_m_Settings_24() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Settings_24)); }
	inline GUISettings_t1774757634 * get_m_Settings_24() const { return ___m_Settings_24; }
	inline GUISettings_t1774757634 ** get_address_of_m_Settings_24() { return &___m_Settings_24; }
	inline void set_m_Settings_24(GUISettings_t1774757634 * value)
	{
		___m_Settings_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_24), value);
	}

	inline static int32_t get_offset_of_m_Styles_26() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282, ___m_Styles_26)); }
	inline Dictionary_2_t3742157810 * get_m_Styles_26() const { return ___m_Styles_26; }
	inline Dictionary_2_t3742157810 ** get_address_of_m_Styles_26() { return &___m_Styles_26; }
	inline void set_m_Styles_26(Dictionary_2_t3742157810 * value)
	{
		___m_Styles_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_26), value);
	}
};

struct GUISkin_t1244372282_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t3956901511 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t1143955295 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t1244372282 * ___current_28;

public:
	inline static int32_t get_offset_of_ms_Error_25() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___ms_Error_25)); }
	inline GUIStyle_t3956901511 * get_ms_Error_25() const { return ___ms_Error_25; }
	inline GUIStyle_t3956901511 ** get_address_of_ms_Error_25() { return &___ms_Error_25; }
	inline void set_ms_Error_25(GUIStyle_t3956901511 * value)
	{
		___ms_Error_25 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_25), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_27() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___m_SkinChanged_27)); }
	inline SkinChangedDelegate_t1143955295 * get_m_SkinChanged_27() const { return ___m_SkinChanged_27; }
	inline SkinChangedDelegate_t1143955295 ** get_address_of_m_SkinChanged_27() { return &___m_SkinChanged_27; }
	inline void set_m_SkinChanged_27(SkinChangedDelegate_t1143955295 * value)
	{
		___m_SkinChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_27), value);
	}

	inline static int32_t get_offset_of_current_28() { return static_cast<int32_t>(offsetof(GUISkin_t1244372282_StaticFields, ___current_28)); }
	inline GUISkin_t1244372282 * get_current_28() const { return ___current_28; }
	inline GUISkin_t1244372282 ** get_address_of_current_28() { return &___current_28; }
	inline void set_current_28(GUISkin_t1244372282 * value)
	{
		___current_28 = value;
		Il2CppCodeGenWriteBarrier((&___current_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T1244372282_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef ADDCHILDREN_T2206414750_H
#define ADDCHILDREN_T2206414750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AddChildren
struct  AddChildren_t2206414750  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDCHILDREN_T2206414750_H
#ifndef WORLD_T3793043157_H
#define WORLD_T3793043157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// World
struct  World_t3793043157  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 World::NumberOfSegmentsEachDir
	int32_t ___NumberOfSegmentsEachDir_2;
	// UnityEngine.GameObject World::WorldSegment
	GameObject_t1113636619 * ___WorldSegment_3;
	// UnityEngine.GameObject World::Sky
	GameObject_t1113636619 * ___Sky_4;
	// UnityEngine.GUISkin World::GuiSkin
	GUISkin_t1244372282 * ___GuiSkin_5;
	// UnityEngine.Camera World::mainCamera
	Camera_t4157153871 * ___mainCamera_6;
	// System.Single[] World::m_Heights
	SingleU5BU5D_t1444911251* ___m_Heights_7;
	// System.Single[] World::m_Updraught
	SingleU5BU5D_t1444911251* ___m_Updraught_8;
	// System.Single World::m_ReallyBigMag
	float ___m_ReallyBigMag_9;
	// System.Single World::m_ReallyBigFreq
	float ___m_ReallyBigFreq_10;
	// System.Single World::m_BigMag
	float ___m_BigMag_11;
	// System.Single World::m_BigFreq
	float ___m_BigFreq_12;
	// System.Single World::m_MedMag
	float ___m_MedMag_13;
	// System.Single World::m_MedFreq
	float ___m_MedFreq_14;
	// System.Single World::m_SmallMag
	float ___m_SmallMag_15;
	// System.Single World::m_SmallFreq
	float ___m_SmallFreq_16;
	// Menu World::EndMenu
	Menu_t2559899777 * ___EndMenu_17;

public:
	inline static int32_t get_offset_of_NumberOfSegmentsEachDir_2() { return static_cast<int32_t>(offsetof(World_t3793043157, ___NumberOfSegmentsEachDir_2)); }
	inline int32_t get_NumberOfSegmentsEachDir_2() const { return ___NumberOfSegmentsEachDir_2; }
	inline int32_t* get_address_of_NumberOfSegmentsEachDir_2() { return &___NumberOfSegmentsEachDir_2; }
	inline void set_NumberOfSegmentsEachDir_2(int32_t value)
	{
		___NumberOfSegmentsEachDir_2 = value;
	}

	inline static int32_t get_offset_of_WorldSegment_3() { return static_cast<int32_t>(offsetof(World_t3793043157, ___WorldSegment_3)); }
	inline GameObject_t1113636619 * get_WorldSegment_3() const { return ___WorldSegment_3; }
	inline GameObject_t1113636619 ** get_address_of_WorldSegment_3() { return &___WorldSegment_3; }
	inline void set_WorldSegment_3(GameObject_t1113636619 * value)
	{
		___WorldSegment_3 = value;
		Il2CppCodeGenWriteBarrier((&___WorldSegment_3), value);
	}

	inline static int32_t get_offset_of_Sky_4() { return static_cast<int32_t>(offsetof(World_t3793043157, ___Sky_4)); }
	inline GameObject_t1113636619 * get_Sky_4() const { return ___Sky_4; }
	inline GameObject_t1113636619 ** get_address_of_Sky_4() { return &___Sky_4; }
	inline void set_Sky_4(GameObject_t1113636619 * value)
	{
		___Sky_4 = value;
		Il2CppCodeGenWriteBarrier((&___Sky_4), value);
	}

	inline static int32_t get_offset_of_GuiSkin_5() { return static_cast<int32_t>(offsetof(World_t3793043157, ___GuiSkin_5)); }
	inline GUISkin_t1244372282 * get_GuiSkin_5() const { return ___GuiSkin_5; }
	inline GUISkin_t1244372282 ** get_address_of_GuiSkin_5() { return &___GuiSkin_5; }
	inline void set_GuiSkin_5(GUISkin_t1244372282 * value)
	{
		___GuiSkin_5 = value;
		Il2CppCodeGenWriteBarrier((&___GuiSkin_5), value);
	}

	inline static int32_t get_offset_of_mainCamera_6() { return static_cast<int32_t>(offsetof(World_t3793043157, ___mainCamera_6)); }
	inline Camera_t4157153871 * get_mainCamera_6() const { return ___mainCamera_6; }
	inline Camera_t4157153871 ** get_address_of_mainCamera_6() { return &___mainCamera_6; }
	inline void set_mainCamera_6(Camera_t4157153871 * value)
	{
		___mainCamera_6 = value;
		Il2CppCodeGenWriteBarrier((&___mainCamera_6), value);
	}

	inline static int32_t get_offset_of_m_Heights_7() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_Heights_7)); }
	inline SingleU5BU5D_t1444911251* get_m_Heights_7() const { return ___m_Heights_7; }
	inline SingleU5BU5D_t1444911251** get_address_of_m_Heights_7() { return &___m_Heights_7; }
	inline void set_m_Heights_7(SingleU5BU5D_t1444911251* value)
	{
		___m_Heights_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Heights_7), value);
	}

	inline static int32_t get_offset_of_m_Updraught_8() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_Updraught_8)); }
	inline SingleU5BU5D_t1444911251* get_m_Updraught_8() const { return ___m_Updraught_8; }
	inline SingleU5BU5D_t1444911251** get_address_of_m_Updraught_8() { return &___m_Updraught_8; }
	inline void set_m_Updraught_8(SingleU5BU5D_t1444911251* value)
	{
		___m_Updraught_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Updraught_8), value);
	}

	inline static int32_t get_offset_of_m_ReallyBigMag_9() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_ReallyBigMag_9)); }
	inline float get_m_ReallyBigMag_9() const { return ___m_ReallyBigMag_9; }
	inline float* get_address_of_m_ReallyBigMag_9() { return &___m_ReallyBigMag_9; }
	inline void set_m_ReallyBigMag_9(float value)
	{
		___m_ReallyBigMag_9 = value;
	}

	inline static int32_t get_offset_of_m_ReallyBigFreq_10() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_ReallyBigFreq_10)); }
	inline float get_m_ReallyBigFreq_10() const { return ___m_ReallyBigFreq_10; }
	inline float* get_address_of_m_ReallyBigFreq_10() { return &___m_ReallyBigFreq_10; }
	inline void set_m_ReallyBigFreq_10(float value)
	{
		___m_ReallyBigFreq_10 = value;
	}

	inline static int32_t get_offset_of_m_BigMag_11() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_BigMag_11)); }
	inline float get_m_BigMag_11() const { return ___m_BigMag_11; }
	inline float* get_address_of_m_BigMag_11() { return &___m_BigMag_11; }
	inline void set_m_BigMag_11(float value)
	{
		___m_BigMag_11 = value;
	}

	inline static int32_t get_offset_of_m_BigFreq_12() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_BigFreq_12)); }
	inline float get_m_BigFreq_12() const { return ___m_BigFreq_12; }
	inline float* get_address_of_m_BigFreq_12() { return &___m_BigFreq_12; }
	inline void set_m_BigFreq_12(float value)
	{
		___m_BigFreq_12 = value;
	}

	inline static int32_t get_offset_of_m_MedMag_13() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_MedMag_13)); }
	inline float get_m_MedMag_13() const { return ___m_MedMag_13; }
	inline float* get_address_of_m_MedMag_13() { return &___m_MedMag_13; }
	inline void set_m_MedMag_13(float value)
	{
		___m_MedMag_13 = value;
	}

	inline static int32_t get_offset_of_m_MedFreq_14() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_MedFreq_14)); }
	inline float get_m_MedFreq_14() const { return ___m_MedFreq_14; }
	inline float* get_address_of_m_MedFreq_14() { return &___m_MedFreq_14; }
	inline void set_m_MedFreq_14(float value)
	{
		___m_MedFreq_14 = value;
	}

	inline static int32_t get_offset_of_m_SmallMag_15() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_SmallMag_15)); }
	inline float get_m_SmallMag_15() const { return ___m_SmallMag_15; }
	inline float* get_address_of_m_SmallMag_15() { return &___m_SmallMag_15; }
	inline void set_m_SmallMag_15(float value)
	{
		___m_SmallMag_15 = value;
	}

	inline static int32_t get_offset_of_m_SmallFreq_16() { return static_cast<int32_t>(offsetof(World_t3793043157, ___m_SmallFreq_16)); }
	inline float get_m_SmallFreq_16() const { return ___m_SmallFreq_16; }
	inline float* get_address_of_m_SmallFreq_16() { return &___m_SmallFreq_16; }
	inline void set_m_SmallFreq_16(float value)
	{
		___m_SmallFreq_16 = value;
	}

	inline static int32_t get_offset_of_EndMenu_17() { return static_cast<int32_t>(offsetof(World_t3793043157, ___EndMenu_17)); }
	inline Menu_t2559899777 * get_EndMenu_17() const { return ___EndMenu_17; }
	inline Menu_t2559899777 ** get_address_of_EndMenu_17() { return &___EndMenu_17; }
	inline void set_EndMenu_17(Menu_t2559899777 * value)
	{
		___EndMenu_17 = value;
		Il2CppCodeGenWriteBarrier((&___EndMenu_17), value);
	}
};

struct World_t3793043157_StaticFields
{
public:
	// Menu/MenuActivated World::<>f__am$cache0
	MenuActivated_t3536968312 * ___U3CU3Ef__amU24cache0_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_18() { return static_cast<int32_t>(offsetof(World_t3793043157_StaticFields, ___U3CU3Ef__amU24cache0_18)); }
	inline MenuActivated_t3536968312 * get_U3CU3Ef__amU24cache0_18() const { return ___U3CU3Ef__amU24cache0_18; }
	inline MenuActivated_t3536968312 ** get_address_of_U3CU3Ef__amU24cache0_18() { return &___U3CU3Ef__amU24cache0_18; }
	inline void set_U3CU3Ef__amU24cache0_18(MenuActivated_t3536968312 * value)
	{
		___U3CU3Ef__amU24cache0_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLD_T3793043157_H
#ifndef WRAPOBJECT_T681947308_H
#define WRAPOBJECT_T681947308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WrapObject
struct  WrapObject_t681947308  : public MonoBehaviour_t3962482529
{
public:
	// System.Single WrapObject::WorldWidth
	float ___WorldWidth_2;
	// UnityEngine.Camera WrapObject::mainCamera
	Camera_t4157153871 * ___mainCamera_3;

public:
	inline static int32_t get_offset_of_WorldWidth_2() { return static_cast<int32_t>(offsetof(WrapObject_t681947308, ___WorldWidth_2)); }
	inline float get_WorldWidth_2() const { return ___WorldWidth_2; }
	inline float* get_address_of_WorldWidth_2() { return &___WorldWidth_2; }
	inline void set_WorldWidth_2(float value)
	{
		___WorldWidth_2 = value;
	}

	inline static int32_t get_offset_of_mainCamera_3() { return static_cast<int32_t>(offsetof(WrapObject_t681947308, ___mainCamera_3)); }
	inline Camera_t4157153871 * get_mainCamera_3() const { return ___mainCamera_3; }
	inline Camera_t4157153871 ** get_address_of_mainCamera_3() { return &___mainCamera_3; }
	inline void set_mainCamera_3(Camera_t4157153871 * value)
	{
		___mainCamera_3 = value;
		Il2CppCodeGenWriteBarrier((&___mainCamera_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPOBJECT_T681947308_H
#ifndef POLYGONCOLLIDER2D_T57175488_H
#define POLYGONCOLLIDER2D_T57175488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PolygonCollider2D
struct  PolygonCollider2D_t57175488  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYGONCOLLIDER2D_T57175488_H
#ifndef MENU_T2559899777_H
#define MENU_T2559899777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu
struct  Menu_t2559899777  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.KeyCode Menu::UpKey
	int32_t ___UpKey_2;
	// UnityEngine.KeyCode Menu::DownKey
	int32_t ___DownKey_3;
	// UnityEngine.KeyCode Menu::LeftKey
	int32_t ___LeftKey_4;
	// UnityEngine.KeyCode Menu::RightKey
	int32_t ___RightKey_5;
	// UnityEngine.KeyCode Menu::ActionKey
	int32_t ___ActionKey_6;
	// System.Single Menu::MenuTop
	float ___MenuTop_7;
	// System.Single Menu::MenuLeftOffset
	float ___MenuLeftOffset_8;
	// System.Single Menu::LineWidth
	float ___LineWidth_9;
	// UnityEngine.GUISkin Menu::GuiSkin
	GUISkin_t1244372282 * ___GuiSkin_10;
	// System.Collections.Generic.List`1<Menu/MenuItem> Menu::m_menuItems
	List_1_t2606367753 * ___m_menuItems_11;
	// System.Boolean Menu::m_enabled
	bool ___m_enabled_12;
	// System.Boolean Menu::m_beEnabledNextFrame
	bool ___m_beEnabledNextFrame_13;
	// System.Int32 Menu::m_selectedItem
	int32_t ___m_selectedItem_14;

public:
	inline static int32_t get_offset_of_UpKey_2() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___UpKey_2)); }
	inline int32_t get_UpKey_2() const { return ___UpKey_2; }
	inline int32_t* get_address_of_UpKey_2() { return &___UpKey_2; }
	inline void set_UpKey_2(int32_t value)
	{
		___UpKey_2 = value;
	}

	inline static int32_t get_offset_of_DownKey_3() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___DownKey_3)); }
	inline int32_t get_DownKey_3() const { return ___DownKey_3; }
	inline int32_t* get_address_of_DownKey_3() { return &___DownKey_3; }
	inline void set_DownKey_3(int32_t value)
	{
		___DownKey_3 = value;
	}

	inline static int32_t get_offset_of_LeftKey_4() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___LeftKey_4)); }
	inline int32_t get_LeftKey_4() const { return ___LeftKey_4; }
	inline int32_t* get_address_of_LeftKey_4() { return &___LeftKey_4; }
	inline void set_LeftKey_4(int32_t value)
	{
		___LeftKey_4 = value;
	}

	inline static int32_t get_offset_of_RightKey_5() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___RightKey_5)); }
	inline int32_t get_RightKey_5() const { return ___RightKey_5; }
	inline int32_t* get_address_of_RightKey_5() { return &___RightKey_5; }
	inline void set_RightKey_5(int32_t value)
	{
		___RightKey_5 = value;
	}

	inline static int32_t get_offset_of_ActionKey_6() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___ActionKey_6)); }
	inline int32_t get_ActionKey_6() const { return ___ActionKey_6; }
	inline int32_t* get_address_of_ActionKey_6() { return &___ActionKey_6; }
	inline void set_ActionKey_6(int32_t value)
	{
		___ActionKey_6 = value;
	}

	inline static int32_t get_offset_of_MenuTop_7() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___MenuTop_7)); }
	inline float get_MenuTop_7() const { return ___MenuTop_7; }
	inline float* get_address_of_MenuTop_7() { return &___MenuTop_7; }
	inline void set_MenuTop_7(float value)
	{
		___MenuTop_7 = value;
	}

	inline static int32_t get_offset_of_MenuLeftOffset_8() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___MenuLeftOffset_8)); }
	inline float get_MenuLeftOffset_8() const { return ___MenuLeftOffset_8; }
	inline float* get_address_of_MenuLeftOffset_8() { return &___MenuLeftOffset_8; }
	inline void set_MenuLeftOffset_8(float value)
	{
		___MenuLeftOffset_8 = value;
	}

	inline static int32_t get_offset_of_LineWidth_9() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___LineWidth_9)); }
	inline float get_LineWidth_9() const { return ___LineWidth_9; }
	inline float* get_address_of_LineWidth_9() { return &___LineWidth_9; }
	inline void set_LineWidth_9(float value)
	{
		___LineWidth_9 = value;
	}

	inline static int32_t get_offset_of_GuiSkin_10() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___GuiSkin_10)); }
	inline GUISkin_t1244372282 * get_GuiSkin_10() const { return ___GuiSkin_10; }
	inline GUISkin_t1244372282 ** get_address_of_GuiSkin_10() { return &___GuiSkin_10; }
	inline void set_GuiSkin_10(GUISkin_t1244372282 * value)
	{
		___GuiSkin_10 = value;
		Il2CppCodeGenWriteBarrier((&___GuiSkin_10), value);
	}

	inline static int32_t get_offset_of_m_menuItems_11() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___m_menuItems_11)); }
	inline List_1_t2606367753 * get_m_menuItems_11() const { return ___m_menuItems_11; }
	inline List_1_t2606367753 ** get_address_of_m_menuItems_11() { return &___m_menuItems_11; }
	inline void set_m_menuItems_11(List_1_t2606367753 * value)
	{
		___m_menuItems_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_menuItems_11), value);
	}

	inline static int32_t get_offset_of_m_enabled_12() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___m_enabled_12)); }
	inline bool get_m_enabled_12() const { return ___m_enabled_12; }
	inline bool* get_address_of_m_enabled_12() { return &___m_enabled_12; }
	inline void set_m_enabled_12(bool value)
	{
		___m_enabled_12 = value;
	}

	inline static int32_t get_offset_of_m_beEnabledNextFrame_13() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___m_beEnabledNextFrame_13)); }
	inline bool get_m_beEnabledNextFrame_13() const { return ___m_beEnabledNextFrame_13; }
	inline bool* get_address_of_m_beEnabledNextFrame_13() { return &___m_beEnabledNextFrame_13; }
	inline void set_m_beEnabledNextFrame_13(bool value)
	{
		___m_beEnabledNextFrame_13 = value;
	}

	inline static int32_t get_offset_of_m_selectedItem_14() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ___m_selectedItem_14)); }
	inline int32_t get_m_selectedItem_14() const { return ___m_selectedItem_14; }
	inline int32_t* get_address_of_m_selectedItem_14() { return &___m_selectedItem_14; }
	inline void set_m_selectedItem_14(int32_t value)
	{
		___m_selectedItem_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENU_T2559899777_H
#ifndef PATHFINDTEST_T911201017_H
#define PATHFINDTEST_T911201017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathFindTest
struct  PathFindTest_t911201017  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2[] PathFindTest::coords
	Vector2U5BU5D_t1457185986* ___coords_2;
	// System.Single PathFindTest::lastRun
	float ___lastRun_3;
	// System.Int32 PathFindTest::x
	int32_t ___x_4;
	// System.Int32 PathFindTest::y
	int32_t ___y_5;
	// UnityEngine.Vector2 PathFindTest::startpos
	Vector2_t2156229523  ___startpos_6;
	// UnityEngine.Vector2 PathFindTest::endpos
	Vector2_t2156229523  ___endpos_7;

public:
	inline static int32_t get_offset_of_coords_2() { return static_cast<int32_t>(offsetof(PathFindTest_t911201017, ___coords_2)); }
	inline Vector2U5BU5D_t1457185986* get_coords_2() const { return ___coords_2; }
	inline Vector2U5BU5D_t1457185986** get_address_of_coords_2() { return &___coords_2; }
	inline void set_coords_2(Vector2U5BU5D_t1457185986* value)
	{
		___coords_2 = value;
		Il2CppCodeGenWriteBarrier((&___coords_2), value);
	}

	inline static int32_t get_offset_of_lastRun_3() { return static_cast<int32_t>(offsetof(PathFindTest_t911201017, ___lastRun_3)); }
	inline float get_lastRun_3() const { return ___lastRun_3; }
	inline float* get_address_of_lastRun_3() { return &___lastRun_3; }
	inline void set_lastRun_3(float value)
	{
		___lastRun_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(PathFindTest_t911201017, ___x_4)); }
	inline int32_t get_x_4() const { return ___x_4; }
	inline int32_t* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(int32_t value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(PathFindTest_t911201017, ___y_5)); }
	inline int32_t get_y_5() const { return ___y_5; }
	inline int32_t* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(int32_t value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_startpos_6() { return static_cast<int32_t>(offsetof(PathFindTest_t911201017, ___startpos_6)); }
	inline Vector2_t2156229523  get_startpos_6() const { return ___startpos_6; }
	inline Vector2_t2156229523 * get_address_of_startpos_6() { return &___startpos_6; }
	inline void set_startpos_6(Vector2_t2156229523  value)
	{
		___startpos_6 = value;
	}

	inline static int32_t get_offset_of_endpos_7() { return static_cast<int32_t>(offsetof(PathFindTest_t911201017, ___endpos_7)); }
	inline Vector2_t2156229523  get_endpos_7() const { return ___endpos_7; }
	inline Vector2_t2156229523 * get_address_of_endpos_7() { return &___endpos_7; }
	inline void set_endpos_7(Vector2_t2156229523  value)
	{
		___endpos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHFINDTEST_T911201017_H
#ifndef HANGGLIDER_T1791610530_H
#define HANGGLIDER_T1791610530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hangglider
struct  Hangglider_t1791610530  : public MonoBehaviour_t3962482529
{
public:
	// World Hangglider::theWorld
	World_t3793043157 * ___theWorld_2;
	// UnityEngine.Camera Hangglider::m_MainCamera
	Camera_t4157153871 * ___m_MainCamera_3;
	// UnityEngine.Rigidbody2D Hangglider::m_MyBody
	Rigidbody2D_t939494601 * ___m_MyBody_4;
	// System.Single Hangglider::m_Facing
	float ___m_Facing_5;

public:
	inline static int32_t get_offset_of_theWorld_2() { return static_cast<int32_t>(offsetof(Hangglider_t1791610530, ___theWorld_2)); }
	inline World_t3793043157 * get_theWorld_2() const { return ___theWorld_2; }
	inline World_t3793043157 ** get_address_of_theWorld_2() { return &___theWorld_2; }
	inline void set_theWorld_2(World_t3793043157 * value)
	{
		___theWorld_2 = value;
		Il2CppCodeGenWriteBarrier((&___theWorld_2), value);
	}

	inline static int32_t get_offset_of_m_MainCamera_3() { return static_cast<int32_t>(offsetof(Hangglider_t1791610530, ___m_MainCamera_3)); }
	inline Camera_t4157153871 * get_m_MainCamera_3() const { return ___m_MainCamera_3; }
	inline Camera_t4157153871 ** get_address_of_m_MainCamera_3() { return &___m_MainCamera_3; }
	inline void set_m_MainCamera_3(Camera_t4157153871 * value)
	{
		___m_MainCamera_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainCamera_3), value);
	}

	inline static int32_t get_offset_of_m_MyBody_4() { return static_cast<int32_t>(offsetof(Hangglider_t1791610530, ___m_MyBody_4)); }
	inline Rigidbody2D_t939494601 * get_m_MyBody_4() const { return ___m_MyBody_4; }
	inline Rigidbody2D_t939494601 ** get_address_of_m_MyBody_4() { return &___m_MyBody_4; }
	inline void set_m_MyBody_4(Rigidbody2D_t939494601 * value)
	{
		___m_MyBody_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MyBody_4), value);
	}

	inline static int32_t get_offset_of_m_Facing_5() { return static_cast<int32_t>(offsetof(Hangglider_t1791610530, ___m_Facing_5)); }
	inline float get_m_Facing_5() const { return ___m_Facing_5; }
	inline float* get_address_of_m_Facing_5() { return &___m_Facing_5; }
	inline void set_m_Facing_5(float value)
	{
		___m_Facing_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANGGLIDER_T1791610530_H
#ifndef CAMERASIZER_T2190550995_H
#define CAMERASIZER_T2190550995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSizer
struct  CameraSizer_t2190550995  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 CameraSizer::PrevWidth
	int32_t ___PrevWidth_2;
	// System.Int32 CameraSizer::PrevHeight
	int32_t ___PrevHeight_3;
	// System.Single CameraSizer::PrevPPU
	float ___PrevPPU_4;
	// System.Single CameraSizer::PixelsPerUnit
	float ___PixelsPerUnit_5;
	// System.Boolean CameraSizer::Lighting
	bool ___Lighting_6;
	// System.Single CameraSizer::LightTextureScale
	float ___LightTextureScale_7;
	// UnityEngine.Color CameraSizer::AmbientLightColour
	Color_t2555686324  ___AmbientLightColour_8;
	// UnityEngine.GameObject CameraSizer::LightQuad
	GameObject_t1113636619 * ___LightQuad_9;
	// UnityEngine.Camera CameraSizer::LightCamera
	Camera_t4157153871 * ___LightCamera_10;
	// UnityEngine.GameObject CameraSizer::LightCamOb
	GameObject_t1113636619 * ___LightCamOb_11;

public:
	inline static int32_t get_offset_of_PrevWidth_2() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___PrevWidth_2)); }
	inline int32_t get_PrevWidth_2() const { return ___PrevWidth_2; }
	inline int32_t* get_address_of_PrevWidth_2() { return &___PrevWidth_2; }
	inline void set_PrevWidth_2(int32_t value)
	{
		___PrevWidth_2 = value;
	}

	inline static int32_t get_offset_of_PrevHeight_3() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___PrevHeight_3)); }
	inline int32_t get_PrevHeight_3() const { return ___PrevHeight_3; }
	inline int32_t* get_address_of_PrevHeight_3() { return &___PrevHeight_3; }
	inline void set_PrevHeight_3(int32_t value)
	{
		___PrevHeight_3 = value;
	}

	inline static int32_t get_offset_of_PrevPPU_4() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___PrevPPU_4)); }
	inline float get_PrevPPU_4() const { return ___PrevPPU_4; }
	inline float* get_address_of_PrevPPU_4() { return &___PrevPPU_4; }
	inline void set_PrevPPU_4(float value)
	{
		___PrevPPU_4 = value;
	}

	inline static int32_t get_offset_of_PixelsPerUnit_5() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___PixelsPerUnit_5)); }
	inline float get_PixelsPerUnit_5() const { return ___PixelsPerUnit_5; }
	inline float* get_address_of_PixelsPerUnit_5() { return &___PixelsPerUnit_5; }
	inline void set_PixelsPerUnit_5(float value)
	{
		___PixelsPerUnit_5 = value;
	}

	inline static int32_t get_offset_of_Lighting_6() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___Lighting_6)); }
	inline bool get_Lighting_6() const { return ___Lighting_6; }
	inline bool* get_address_of_Lighting_6() { return &___Lighting_6; }
	inline void set_Lighting_6(bool value)
	{
		___Lighting_6 = value;
	}

	inline static int32_t get_offset_of_LightTextureScale_7() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___LightTextureScale_7)); }
	inline float get_LightTextureScale_7() const { return ___LightTextureScale_7; }
	inline float* get_address_of_LightTextureScale_7() { return &___LightTextureScale_7; }
	inline void set_LightTextureScale_7(float value)
	{
		___LightTextureScale_7 = value;
	}

	inline static int32_t get_offset_of_AmbientLightColour_8() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___AmbientLightColour_8)); }
	inline Color_t2555686324  get_AmbientLightColour_8() const { return ___AmbientLightColour_8; }
	inline Color_t2555686324 * get_address_of_AmbientLightColour_8() { return &___AmbientLightColour_8; }
	inline void set_AmbientLightColour_8(Color_t2555686324  value)
	{
		___AmbientLightColour_8 = value;
	}

	inline static int32_t get_offset_of_LightQuad_9() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___LightQuad_9)); }
	inline GameObject_t1113636619 * get_LightQuad_9() const { return ___LightQuad_9; }
	inline GameObject_t1113636619 ** get_address_of_LightQuad_9() { return &___LightQuad_9; }
	inline void set_LightQuad_9(GameObject_t1113636619 * value)
	{
		___LightQuad_9 = value;
		Il2CppCodeGenWriteBarrier((&___LightQuad_9), value);
	}

	inline static int32_t get_offset_of_LightCamera_10() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___LightCamera_10)); }
	inline Camera_t4157153871 * get_LightCamera_10() const { return ___LightCamera_10; }
	inline Camera_t4157153871 ** get_address_of_LightCamera_10() { return &___LightCamera_10; }
	inline void set_LightCamera_10(Camera_t4157153871 * value)
	{
		___LightCamera_10 = value;
		Il2CppCodeGenWriteBarrier((&___LightCamera_10), value);
	}

	inline static int32_t get_offset_of_LightCamOb_11() { return static_cast<int32_t>(offsetof(CameraSizer_t2190550995, ___LightCamOb_11)); }
	inline GameObject_t1113636619 * get_LightCamOb_11() const { return ___LightCamOb_11; }
	inline GameObject_t1113636619 ** get_address_of_LightCamOb_11() { return &___LightCamOb_11; }
	inline void set_LightCamOb_11(GameObject_t1113636619 * value)
	{
		___LightCamOb_11 = value;
		Il2CppCodeGenWriteBarrier((&___LightCamOb_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERASIZER_T2190550995_H
#ifndef WORLDSEGMENT_T1063874133_H
#define WORLDSEGMENT_T1063874133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorldSegment
struct  WorldSegment_t1063874133  : public MonoBehaviour_t3962482529
{
public:
	// System.Single WorldSegment::Segment_Width
	float ___Segment_Width_2;

public:
	inline static int32_t get_offset_of_Segment_Width_2() { return static_cast<int32_t>(offsetof(WorldSegment_t1063874133, ___Segment_Width_2)); }
	inline float get_Segment_Width_2() const { return ___Segment_Width_2; }
	inline float* get_address_of_Segment_Width_2() { return &___Segment_Width_2; }
	inline void set_Segment_Width_2(float value)
	{
		___Segment_Width_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDSEGMENT_T1063874133_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef TILEMAPSCRIPT_T3658915240_H
#define TILEMAPSCRIPT_T3658915240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileMapScript
struct  TileMapScript_t3658915240  : public MonoBehaviour_t3962482529
{
public:
	// TileMapScript/MapSquare[0...,0...] TileMapScript::MapArray
	MapSquareU5BU2CU5D_t3810414642* ___MapArray_2;
	// System.Int32 TileMapScript::Squares_X
	int32_t ___Squares_X_3;
	// System.Int32 TileMapScript::Squares_Y
	int32_t ___Squares_Y_4;
	// System.Int32 TileMapScript::Square_Size
	int32_t ___Square_Size_5;
	// System.Boolean TileMapScript::Invert_Colliders
	bool ___Invert_Colliders_6;
	// System.Single TileMapScript::iotaTL
	float ___iotaTL_7;
	// System.Single TileMapScript::iotaBR
	float ___iotaBR_8;
	// System.String TileMapScript::LevelData
	String_t* ___LevelData_9;
	// PathfindingImpl TileMapScript::pathfinder
	PathfindingImpl_t3995530112 * ___pathfinder_10;

public:
	inline static int32_t get_offset_of_MapArray_2() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___MapArray_2)); }
	inline MapSquareU5BU2CU5D_t3810414642* get_MapArray_2() const { return ___MapArray_2; }
	inline MapSquareU5BU2CU5D_t3810414642** get_address_of_MapArray_2() { return &___MapArray_2; }
	inline void set_MapArray_2(MapSquareU5BU2CU5D_t3810414642* value)
	{
		___MapArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___MapArray_2), value);
	}

	inline static int32_t get_offset_of_Squares_X_3() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___Squares_X_3)); }
	inline int32_t get_Squares_X_3() const { return ___Squares_X_3; }
	inline int32_t* get_address_of_Squares_X_3() { return &___Squares_X_3; }
	inline void set_Squares_X_3(int32_t value)
	{
		___Squares_X_3 = value;
	}

	inline static int32_t get_offset_of_Squares_Y_4() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___Squares_Y_4)); }
	inline int32_t get_Squares_Y_4() const { return ___Squares_Y_4; }
	inline int32_t* get_address_of_Squares_Y_4() { return &___Squares_Y_4; }
	inline void set_Squares_Y_4(int32_t value)
	{
		___Squares_Y_4 = value;
	}

	inline static int32_t get_offset_of_Square_Size_5() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___Square_Size_5)); }
	inline int32_t get_Square_Size_5() const { return ___Square_Size_5; }
	inline int32_t* get_address_of_Square_Size_5() { return &___Square_Size_5; }
	inline void set_Square_Size_5(int32_t value)
	{
		___Square_Size_5 = value;
	}

	inline static int32_t get_offset_of_Invert_Colliders_6() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___Invert_Colliders_6)); }
	inline bool get_Invert_Colliders_6() const { return ___Invert_Colliders_6; }
	inline bool* get_address_of_Invert_Colliders_6() { return &___Invert_Colliders_6; }
	inline void set_Invert_Colliders_6(bool value)
	{
		___Invert_Colliders_6 = value;
	}

	inline static int32_t get_offset_of_iotaTL_7() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___iotaTL_7)); }
	inline float get_iotaTL_7() const { return ___iotaTL_7; }
	inline float* get_address_of_iotaTL_7() { return &___iotaTL_7; }
	inline void set_iotaTL_7(float value)
	{
		___iotaTL_7 = value;
	}

	inline static int32_t get_offset_of_iotaBR_8() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___iotaBR_8)); }
	inline float get_iotaBR_8() const { return ___iotaBR_8; }
	inline float* get_address_of_iotaBR_8() { return &___iotaBR_8; }
	inline void set_iotaBR_8(float value)
	{
		___iotaBR_8 = value;
	}

	inline static int32_t get_offset_of_LevelData_9() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___LevelData_9)); }
	inline String_t* get_LevelData_9() const { return ___LevelData_9; }
	inline String_t** get_address_of_LevelData_9() { return &___LevelData_9; }
	inline void set_LevelData_9(String_t* value)
	{
		___LevelData_9 = value;
		Il2CppCodeGenWriteBarrier((&___LevelData_9), value);
	}

	inline static int32_t get_offset_of_pathfinder_10() { return static_cast<int32_t>(offsetof(TileMapScript_t3658915240, ___pathfinder_10)); }
	inline PathfindingImpl_t3995530112 * get_pathfinder_10() const { return ___pathfinder_10; }
	inline PathfindingImpl_t3995530112 ** get_address_of_pathfinder_10() { return &___pathfinder_10; }
	inline void set_pathfinder_10(PathfindingImpl_t3995530112 * value)
	{
		___pathfinder_10 = value;
		Il2CppCodeGenWriteBarrier((&___pathfinder_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEMAPSCRIPT_T3658915240_H
#ifndef CAMERAMENUSCRIPT_T3298109984_H
#define CAMERAMENUSCRIPT_T3298109984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMenuScript
struct  CameraMenuScript_t3298109984  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUISkin CameraMenuScript::GuiSkin
	GUISkin_t1244372282 * ___GuiSkin_2;
	// Menu CameraMenuScript::MainMenu
	Menu_t2559899777 * ___MainMenu_3;
	// Menu CameraMenuScript::MainMenu2
	Menu_t2559899777 * ___MainMenu2_4;
	// Menu CameraMenuScript::WerewolfMenu
	Menu_t2559899777 * ___WerewolfMenu_5;
	// Menu CameraMenuScript::WerewolfMenu2
	Menu_t2559899777 * ___WerewolfMenu2_6;
	// Menu CameraMenuScript::FizzBuzzEndMenu
	Menu_t2559899777 * ___FizzBuzzEndMenu_7;
	// Menu CameraMenuScript::FizzBuzzCurrent
	Menu_t2559899777 * ___FizzBuzzCurrent_8;

public:
	inline static int32_t get_offset_of_GuiSkin_2() { return static_cast<int32_t>(offsetof(CameraMenuScript_t3298109984, ___GuiSkin_2)); }
	inline GUISkin_t1244372282 * get_GuiSkin_2() const { return ___GuiSkin_2; }
	inline GUISkin_t1244372282 ** get_address_of_GuiSkin_2() { return &___GuiSkin_2; }
	inline void set_GuiSkin_2(GUISkin_t1244372282 * value)
	{
		___GuiSkin_2 = value;
		Il2CppCodeGenWriteBarrier((&___GuiSkin_2), value);
	}

	inline static int32_t get_offset_of_MainMenu_3() { return static_cast<int32_t>(offsetof(CameraMenuScript_t3298109984, ___MainMenu_3)); }
	inline Menu_t2559899777 * get_MainMenu_3() const { return ___MainMenu_3; }
	inline Menu_t2559899777 ** get_address_of_MainMenu_3() { return &___MainMenu_3; }
	inline void set_MainMenu_3(Menu_t2559899777 * value)
	{
		___MainMenu_3 = value;
		Il2CppCodeGenWriteBarrier((&___MainMenu_3), value);
	}

	inline static int32_t get_offset_of_MainMenu2_4() { return static_cast<int32_t>(offsetof(CameraMenuScript_t3298109984, ___MainMenu2_4)); }
	inline Menu_t2559899777 * get_MainMenu2_4() const { return ___MainMenu2_4; }
	inline Menu_t2559899777 ** get_address_of_MainMenu2_4() { return &___MainMenu2_4; }
	inline void set_MainMenu2_4(Menu_t2559899777 * value)
	{
		___MainMenu2_4 = value;
		Il2CppCodeGenWriteBarrier((&___MainMenu2_4), value);
	}

	inline static int32_t get_offset_of_WerewolfMenu_5() { return static_cast<int32_t>(offsetof(CameraMenuScript_t3298109984, ___WerewolfMenu_5)); }
	inline Menu_t2559899777 * get_WerewolfMenu_5() const { return ___WerewolfMenu_5; }
	inline Menu_t2559899777 ** get_address_of_WerewolfMenu_5() { return &___WerewolfMenu_5; }
	inline void set_WerewolfMenu_5(Menu_t2559899777 * value)
	{
		___WerewolfMenu_5 = value;
		Il2CppCodeGenWriteBarrier((&___WerewolfMenu_5), value);
	}

	inline static int32_t get_offset_of_WerewolfMenu2_6() { return static_cast<int32_t>(offsetof(CameraMenuScript_t3298109984, ___WerewolfMenu2_6)); }
	inline Menu_t2559899777 * get_WerewolfMenu2_6() const { return ___WerewolfMenu2_6; }
	inline Menu_t2559899777 ** get_address_of_WerewolfMenu2_6() { return &___WerewolfMenu2_6; }
	inline void set_WerewolfMenu2_6(Menu_t2559899777 * value)
	{
		___WerewolfMenu2_6 = value;
		Il2CppCodeGenWriteBarrier((&___WerewolfMenu2_6), value);
	}

	inline static int32_t get_offset_of_FizzBuzzEndMenu_7() { return static_cast<int32_t>(offsetof(CameraMenuScript_t3298109984, ___FizzBuzzEndMenu_7)); }
	inline Menu_t2559899777 * get_FizzBuzzEndMenu_7() const { return ___FizzBuzzEndMenu_7; }
	inline Menu_t2559899777 ** get_address_of_FizzBuzzEndMenu_7() { return &___FizzBuzzEndMenu_7; }
	inline void set_FizzBuzzEndMenu_7(Menu_t2559899777 * value)
	{
		___FizzBuzzEndMenu_7 = value;
		Il2CppCodeGenWriteBarrier((&___FizzBuzzEndMenu_7), value);
	}

	inline static int32_t get_offset_of_FizzBuzzCurrent_8() { return static_cast<int32_t>(offsetof(CameraMenuScript_t3298109984, ___FizzBuzzCurrent_8)); }
	inline Menu_t2559899777 * get_FizzBuzzCurrent_8() const { return ___FizzBuzzCurrent_8; }
	inline Menu_t2559899777 ** get_address_of_FizzBuzzCurrent_8() { return &___FizzBuzzCurrent_8; }
	inline void set_FizzBuzzCurrent_8(Menu_t2559899777 * value)
	{
		___FizzBuzzCurrent_8 = value;
		Il2CppCodeGenWriteBarrier((&___FizzBuzzCurrent_8), value);
	}
};

struct CameraMenuScript_t3298109984_StaticFields
{
public:
	// Menu/MenuActivated CameraMenuScript::<>f__am$cache0
	MenuActivated_t3536968312 * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(CameraMenuScript_t3298109984_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline MenuActivated_t3536968312 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline MenuActivated_t3536968312 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(MenuActivated_t3536968312 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMENUSCRIPT_T3298109984_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// PathfindingImpl/MapNode[0...,0...]
struct MapNodeU5B0___U2C0___U5D_t1392113642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MapNode_t4119234616 * m_Items[1];

public:
	inline MapNode_t4119234616 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MapNode_t4119234616 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MapNode_t4119234616 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MapNode_t4119234616 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MapNode_t4119234616 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MapNode_t4119234616 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MapNode_t4119234616 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline MapNode_t4119234616 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, MapNode_t4119234616 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MapNode_t4119234616 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline MapNode_t4119234616 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, MapNode_t4119234616 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// TileMapScript/MapSquare[,]
struct MapSquareU5BU2CU5D_t3810414642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MapSquare_t3390943120  m_Items[1];

public:
	inline MapSquare_t3390943120  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MapSquare_t3390943120 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MapSquare_t3390943120  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MapSquare_t3390943120  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MapSquare_t3390943120 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MapSquare_t3390943120  value)
	{
		m_Items[index] = value;
	}
	inline MapSquare_t3390943120  GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline MapSquare_t3390943120 * GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, MapSquare_t3390943120  value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline MapSquare_t3390943120  GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline MapSquare_t3390943120 * GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, MapSquare_t3390943120  value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t3069227754  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Particle_t1882894987  m_Items[1];

public:
	inline Particle_t1882894987  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_t1882894987 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_t1882894987  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_t1882894987  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_t1882894987 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_t1882894987  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m973870487_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Menu/MenuItem>::.ctor()
extern "C"  void List_1__ctor_m497344735_gshared (List_1_t2606367753 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Menu/MenuItem>::Add(!0)
extern "C"  void List_1_Add_m3289853881_gshared (List_1_t2606367753 * __this, MenuItem_t1134293011  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Menu/MenuItem>::get_Count()
extern "C"  int32_t List_1_get_Count_m3987431879_gshared (List_1_t2606367753 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Menu/MenuItem>::get_Item(System.Int32)
extern "C"  MenuItem_t1134293011  List_1_get_Item_m1482221937_gshared (List_1_t2606367753 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Menu/MenuItem>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m2380330413_gshared (List_1_t2606367753 * __this, int32_t p0, MenuItem_t1134293011  p1, const RuntimeMethod* method);
// System.Boolean Priority_Queue.HeapPriorityQueue`1<System.Object>::Contains(T)
extern "C"  bool HeapPriorityQueue_1_Contains_m339996505_gshared (HeapPriorityQueue_1_t2839342642 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Priority_Queue.HeapPriorityQueue`1<System.Object>::UpdatePriority(T,System.Double)
extern "C"  void HeapPriorityQueue_1_UpdatePriority_m3127628512_gshared (HeapPriorityQueue_1_t2839342642 * __this, RuntimeObject * p0, double p1, const RuntimeMethod* method);
// System.Void Priority_Queue.HeapPriorityQueue`1<System.Object>::Enqueue(T,System.Double)
extern "C"  void HeapPriorityQueue_1_Enqueue_m3247907955_gshared (HeapPriorityQueue_1_t2839342642 * __this, RuntimeObject * p0, double p1, const RuntimeMethod* method);
// System.Void Priority_Queue.HeapPriorityQueue`1<System.Object>::.ctor(System.Int32)
extern "C"  void HeapPriorityQueue_1__ctor_m2637808576_gshared (HeapPriorityQueue_1_t2839342642 * __this, int32_t p0, const RuntimeMethod* method);
// T Priority_Queue.HeapPriorityQueue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * HeapPriorityQueue_1_Dequeue_m1678601426_gshared (HeapPriorityQueue_1_t2839342642 * __this, const RuntimeMethod* method);
// System.Int32 Priority_Queue.HeapPriorityQueue`1<System.Object>::get_Count()
extern "C"  int32_t HeapPriorityQueue_1_get_Count_m496407491_gshared (HeapPriorityQueue_1_t2839342642 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor()
extern "C"  void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider2D>()
#define GameObject_AddComponent_TisBoxCollider2D_t3581341831_m201509103(__this, method) ((  BoxCollider2D_t3581341831 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m973870487_gshared)(__this, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
extern "C"  void BoxCollider2D_set_size_m4134815626 (BoxCollider2D_t3581341831 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider2D::set_offset(UnityEngine.Vector2)
extern "C"  void Collider2D_set_offset_m858183860 (Collider2D_t2806799626 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<Menu>()
#define GameObject_AddComponent_TisMenu_t2559899777_m266561916(__this, method) ((  Menu_t2559899777 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m973870487_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu/MenuActivated::.ctor(System.Object,System.IntPtr)
extern "C"  void MenuActivated__ctor_m1325247487 (MenuActivated_t3536968312 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu::AddButtonItem(System.String,Menu/MenuActivated)
extern "C"  void Menu_AddButtonItem_m2135025504 (Menu_t2559899777 * __this, String_t* ___itemText0, MenuActivated_t3536968312 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMenuScript::InitWerewolf()
extern "C"  void CameraMenuScript_InitWerewolf_m800122845 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu::Enable()
extern "C"  void Menu_Enable_m773214881 (Menu_t2559899777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu::Disable()
extern "C"  void Menu_Disable_m1999682007 (Menu_t2559899777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::.ctor()
extern "C"  void U3CPlayFizzBuzzU3Ec__AnonStorey0__ctor_m2486874568 (U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMenuScript::PlayFizzBuzz(System.Int32)
extern "C"  void CameraMenuScript_PlayFizzBuzz_m3358245412 (CameraMenuScript_t3298109984 * __this, int32_t ___num0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMenuScript::LoseFizzBuzz(System.Int32)
extern "C"  void CameraMenuScript_LoseFizzBuzz_m1384135540 (CameraMenuScript_t3298109984 * __this, int32_t ___num0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_gray()
extern "C"  Color_t2555686324  Color_get_gray_m1471337008 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t4157153871_m2650170333(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C"  void Camera_set_orthographicSize_m76971700 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void RenderTexture__ctor_m769234016 (RenderTexture_t2108887433 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(__this, method) ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t340375123 * Renderer_get_sharedMaterial_m1936632411 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C"  void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C"  void Camera_set_backgroundColor_m1332346802 (Camera_t4157153871 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C"  RenderTexture_t2108887433 * Camera_get_targetTexture_m2278634983 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C"  void Camera_set_targetTexture_m3148311140 (Camera_t4157153871 * __this, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Release()
extern "C"  void RenderTexture_Release_m1749927881 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C"  GameObject_t1113636619 * GameObject_CreatePrimitive_m2902598419 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C"  Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
extern "C"  void Material_set_shader_m1402562841 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
#define GameObject_AddComponent_TisCamera_t4157153871_m1030966160(__this, method) ((  Camera_t4157153871 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m973870487_gshared)(__this, method)
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C"  void Camera_set_orthographic_m2855749523 (Camera_t4157153871 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C"  int32_t LayerMask_NameToLayer_m2359665122 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C"  void Camera_set_cullingMask_m1402455777 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m679085748 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSizer::InitLighting()
extern "C"  void CameraSizer_InitLighting_m2372589901 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSizer::ResizeCamera()
extern "C"  void CameraSizer_ResizeCamera_m4265951176 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSizer::LightingResize()
extern "C"  void CameraSizer_LightingResize_m1947536732 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single World::GetUpdraughtAtCoord(System.Single,System.Single)
extern "C"  float World_GetUpdraughtAtCoord_m2083694645 (World_t3793043157 * __this, float ___x0, float ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::GetRelativeVector(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Rigidbody2D_GetRelativeVector_m1392063077 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude()
extern "C"  float Vector2_SqrMagnitude_m2507415696 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C"  float Mathf_Min_m1073399594 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C"  float Mathf_Sign_m3457838305 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C"  Vector2_t2156229523  Vector2_get_normalized_m2683665860 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vector2_Dot_m1554553447 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vector2_SignedAngle_m1664554214 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m3294489634 (RuntimeObject * __this /* static, unused */, float p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m1113499586 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single)
extern "C"  void Rigidbody2D_AddTorque_m1535770154 (Rigidbody2D_t939494601 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C"  bool Debug_get_isDebugBuild_m1389897688 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C"  Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C"  void Debug_DrawLine_m2206927517 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_grey()
extern "C"  Color_t2555686324  Color_get_grey_m3440705476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C"  Color_t2555686324  Color_get_cyan_m765383084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_magenta()
extern "C"  Color_t2555686324  Color_get_magenta_m208363462 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3736388334 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_UnaryNegation_m2172448356 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void World::EndGame()
extern "C"  void World_EndGame_m3361102908 (World_t3793043157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Menu/MenuItem>::.ctor()
#define List_1__ctor_m497344735(__this, method) ((  void (*) (List_1_t2606367753 *, const RuntimeMethod*))List_1__ctor_m497344735_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Menu/MenuItem>::Add(!0)
#define List_1_Add_m3289853881(__this, p0, method) ((  void (*) (List_1_t2606367753 *, MenuItem_t1134293011 , const RuntimeMethod*))List_1_Add_m3289853881_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Menu/MenuItem>::get_Count()
#define List_1_get_Count_m3987431879(__this, method) ((  int32_t (*) (List_1_t2606367753 *, const RuntimeMethod*))List_1_get_Count_m3987431879_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<Menu/MenuItem>::get_Item(System.Int32)
#define List_1_get_Item_m1482221937(__this, p0, method) ((  MenuItem_t1134293011  (*) (List_1_t2606367753 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1482221937_gshared)(__this, p0, method)
// System.Int32 System.Array::GetUpperBound(System.Int32)
extern "C"  int32_t Array_GetUpperBound_m4018715963 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu/MenuListItemSelected::Invoke(System.Int32)
extern "C"  void MenuListItemSelected_Invoke_m3223667935 (MenuListItemSelected_t3871161844 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu/MenuActivated::Invoke()
extern "C"  void MenuActivated_Invoke_m2581278067 (MenuActivated_t3536968312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Menu/MenuItem>::set_Item(System.Int32,!0)
#define List_1_set_Item_m2380330413(__this, p0, p1, method) ((  void (*) (List_1_t2606367753 *, int32_t, MenuItem_t1134293011 , const RuntimeMethod*))List_1_set_Item_m2380330413_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C"  void GUIContent__ctor_m890195579 (GUIContent_t3050628031 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t1244372282 * GUI_get_skin_m1874615010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C"  GUIStyle_t3956901511 * GUISkin_get_label_m1693050720 (GUISkin_t1244372282 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C"  Vector2_t2156229523  GUIStyle_CalcSize_m1046812636 (GUIStyle_t3956901511 * __this, GUIContent_t3050628031 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C"  void GUI_Label_m2546823033 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, GUIContent_t3050628031 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu::DrawMenuItem(System.Int32,System.Single,System.Single)
extern "C"  void Menu_DrawMenuItem_m1045921698 (Menu_t2559899777 * __this, int32_t ___index0, float ___x_centre1, float ___top2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu::InterpretKeys()
extern "C"  void Menu_InterpretKeys_m4109317554 (Menu_t2559899777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m3073574632 (RuntimeObject * __this /* static, unused */, GUISkin_t1244372282 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Menu::DrawMenu()
extern "C"  void Menu_DrawMenu_m3643787402 (Menu_t2559899777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PathfindingImpl::InitMap()
extern "C"  void PathfindingImpl_InitMap_m3411888308 (PathfindingImpl_t3995530112 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PathfindingImpl/MapNode::.ctor()
extern "C"  void MapNode__ctor_m1610211582 (MapNode_t4119234616 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PathfindingImpl/IsPassable::Invoke(System.Int32,System.Int32)
extern "C"  bool IsPassable_Invoke_m187163042 (IsPassable_t2551518848 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 PathfindingImpl::Heuristic(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t PathfindingImpl_Heuristic_m3798890881 (PathfindingImpl_t3995530112 * __this, int32_t ___x0, int32_t ___y1, int32_t ___dest_x2, int32_t ___dest_y3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>::Contains(T)
#define HeapPriorityQueue_1_Contains_m65278302(__this, p0, method) ((  bool (*) (HeapPriorityQueue_1_t3878471094 *, MapNode_t4119234616 *, const RuntimeMethod*))HeapPriorityQueue_1_Contains_m339996505_gshared)(__this, p0, method)
// System.Void Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>::UpdatePriority(T,System.Double)
#define HeapPriorityQueue_1_UpdatePriority_m393398276(__this, p0, p1, method) ((  void (*) (HeapPriorityQueue_1_t3878471094 *, MapNode_t4119234616 *, double, const RuntimeMethod*))HeapPriorityQueue_1_UpdatePriority_m3127628512_gshared)(__this, p0, p1, method)
// System.Void Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>::Enqueue(T,System.Double)
#define HeapPriorityQueue_1_Enqueue_m3210081902(__this, p0, p1, method) ((  void (*) (HeapPriorityQueue_1_t3878471094 *, MapNode_t4119234616 *, double, const RuntimeMethod*))HeapPriorityQueue_1_Enqueue_m3247907955_gshared)(__this, p0, p1, method)
// System.Boolean PathfindingImpl::IsAccessible(System.Int32,System.Int32)
extern "C"  bool PathfindingImpl_IsAccessible_m326040664 (PathfindingImpl_t3995530112 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PathfindingImpl::SetVals(Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,PathfindingImpl/coord,System.Int32,System.Int32)
extern "C"  void PathfindingImpl_SetVals_m3297992557 (PathfindingImpl_t3995530112 * __this, HeapPriorityQueue_1_t3878471094 * ___openQ0, int32_t ___x1, int32_t ___y2, int32_t ___g3, int32_t ___g_inc4, int32_t ___count5, coord_t2591101271  ___prev6, int32_t ___end_x7, int32_t ___end_y8, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PathfindingImpl::ResetMap()
extern "C"  void PathfindingImpl_ResetMap_m1788461447 (PathfindingImpl_t3995530112 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>::.ctor(System.Int32)
#define HeapPriorityQueue_1__ctor_m1012109098(__this, p0, method) ((  void (*) (HeapPriorityQueue_1_t3878471094 *, int32_t, const RuntimeMethod*))HeapPriorityQueue_1__ctor_m2637808576_gshared)(__this, p0, method)
// T Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>::Dequeue()
#define HeapPriorityQueue_1_Dequeue_m1446625078(__this, method) ((  MapNode_t4119234616 * (*) (HeapPriorityQueue_1_t3878471094 *, const RuntimeMethod*))HeapPriorityQueue_1_Dequeue_m1678601426_gshared)(__this, method)
// System.Void PathfindingImpl::ProcessNode(Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>,PathfindingImpl/MapNode,System.Int32,System.Int32)
extern "C"  void PathfindingImpl_ProcessNode_m1871920543 (PathfindingImpl_t3995530112 * __this, HeapPriorityQueue_1_t3878471094 * ___openQ0, MapNode_t4119234616 * ___m1, int32_t ___end_x2, int32_t ___end_y3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>::get_Count()
#define HeapPriorityQueue_1_get_Count_m1904799400(__this, method) ((  int32_t (*) (HeapPriorityQueue_1_t3878471094 *, const RuntimeMethod*))HeapPriorityQueue_1_get_Count_m496407491_gshared)(__this, method)
// System.Void Priority_Queue.PriorityQueueNode::.ctor()
extern "C"  void PriorityQueueNode__ctor_m1266653607 (PriorityQueueNode_t2831873642 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C"  float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<TileMapScript>()
#define Component_GetComponent_TisTileMapScript_t3658915240_m3027566996(__this, method) ((  TileMapScript_t3658915240 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] TileMapScript::GetPath(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2U5BU5D_t1457185986* TileMapScript_GetPath_m1857384162 (TileMapScript_t3658915240 * __this, Vector2_t2156229523  ___start0, Vector2_t2156229523  ___end1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C"  String_t* Vector2_ToString_m1205609053 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
extern "C"  bool Color_op_Equality_m1112359053 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C"  Color_t2555686324  Color_get_blue_m3190273327 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] PathfindingImpl::FindPath(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Vector2U5BU5D_t1457185986* PathfindingImpl_FindPath_m774054529 (PathfindingImpl_t3995530112 * __this, int32_t ___start_x0, int32_t ___start_y1, int32_t ___end_x2, int32_t ___end_y3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean TileMapScript::CollideAtGrid(System.Int32,System.Int32)
extern "C"  bool TileMapScript_CollideAtGrid_m2855697938 (TileMapScript_t3658915240 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] TileMapScript::GetPathGrid(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Vector2U5BU5D_t1457185986* TileMapScript_GetPathGrid_m3441764409 (TileMapScript_t3658915240 * __this, int32_t ___start_x0, int32_t ___start_y1, int32_t ___end_x2, int32_t ___end_y3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapScript::GenerateMap()
extern "C"  void TileMapScript_GenerateMap_m71397288 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean TileMapScript::IsValidCharacter(System.Char)
extern "C"  bool TileMapScript_IsValidCharacter_m737925295 (TileMapScript_t3658915240 * __this, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char TileMapScript::GetNextValidCharacter(System.String,System.Int32&)
extern "C"  Il2CppChar TileMapScript_GetNextValidCharacter_m1861620887 (TileMapScript_t3658915240 * __this, String_t* ___lvlDat0, int32_t* ___startIndex1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 TileMapScript::CharacterToTileIndex(System.Char)
extern "C"  int32_t TileMapScript_CharacterToTileIndex_m2954433516 (TileMapScript_t3658915240 * __this, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C"  Vector3_t3722313464  Transform_get_lossyScale_m465496651 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapScript::GenerateColliderAt(System.Int32,System.Int32)
extern "C"  void TileMapScript_GenerateColliderAt_m1712027877 (TileMapScript_t3658915240 * __this, int32_t ___xMin0, int32_t ___yMin1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapScript::PopulateMapArray()
extern "C"  void TileMapScript_PopulateMapArray_m2552189221 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapScript::DoWallAutotiling()
extern "C"  void TileMapScript_DoWallAutotiling_m297977581 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapScript::GenerateMapArrayFromLevelData()
extern "C"  void TileMapScript_GenerateMapArrayFromLevelData_m1370785473 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapScript::SetSquareTexCoords(UnityEngine.Vector2[],System.Int32,System.Int32)
extern "C"  void TileMapScript_SetSquareTexCoords_m2964746611 (TileMapScript_t3658915240 * __this, Vector2U5BU5D_t1457185986* ___uv0, int32_t ___squareNum1, int32_t ___textureNum2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapScript::GenerateColliders()
extern "C"  void TileMapScript_GenerateColliders_m1019337615 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m332514528 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, method) ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
extern "C"  void MeshFilter_set_mesh_m1415871686 (MeshFilter_t3523625662 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PathfindingImpl/IsPassable::.ctor(System.Object,System.IntPtr)
extern "C"  void IsPassable__ctor_m3154592616 (IsPassable_t2551518848 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PathfindingImpl::.ctor(System.Int32,System.Int32,PathfindingImpl/IsPassable)
extern "C"  void PathfindingImpl__ctor_m2501677692 (PathfindingImpl_t3995530112 * __this, int32_t ___mapWidth0, int32_t ___mapHeight1, IsPassable_t2551518848 * ___unpassabilityFunc2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single World::GenerateHeightAtX(System.Single)
extern "C"  float World_GenerateHeightAtX_m635807593 (World_t3793043157 * __this, float ___x0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void World::CalculateUpdraughts()
extern "C"  void World_CalculateUpdraughts_m1067250568 (World_t3793043157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void World::GenerateHeightmap()
extern "C"  void World_GenerateHeightmap_m1183724432 (World_t3793043157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.GameObject::GetComponent<WorldSegment>()
#define GameObject_GetComponent_TisWorldSegment_t1063874133_m2218618745(__this, method) ((  WorldSegment_t1063874133 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method)
// System.Single World::GetHeight(System.Int32)
extern "C"  float World_GetHeight_m236403873 (World_t3793043157 * __this, int32_t ___x0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WorldSegment::SetHeights(System.Single,System.Single)
extern "C"  void WorldSegment_SetHeights_m991205745 (WorldSegment_t1063874133 * __this, float ___left0, float ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void World::CreateCloud(UnityEngine.Vector3)
extern "C"  void World_CreateCloud_m1748687854 (World_t3793043157 * __this, Vector3_t3722313464  ___pos0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
#define Component_GetComponent_TisParticleSystem_t1800779281_m3884485303(__this, method) ((  ParticleSystem_t1800779281 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern "C"  Color32_t2600501292  Color32_op_Implicit_m2658259763 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32)
extern "C"  void ParticleSystem_Emit_m497964751 (ParticleSystem_t1800779281 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, float p3, Color32_t2600501292  p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void World::GenerateWorld()
extern "C"  void World_GenerateWorld_m2153961792 (World_t3793043157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::get_particleCount()
extern "C"  int32_t ParticleSystem_get_particleCount_m3882194216 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C"  int32_t ParticleSystem_GetParticles_m3661771371 (ParticleSystem_t1800779281 * __this, ParticleU5BU5D_t3069227754* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
extern "C"  Vector3_t3722313464  Particle_get_position_m855792854 (Particle_t1882894987 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single World::ScaleXCoord(System.Single)
extern "C"  float World_ScaleXCoord_m176046694 (World_t3793043157 * __this, float ___x0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C"  void Particle_set_position_m4147191379 (Particle_t1882894987 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_velocity()
extern "C"  Vector3_t3722313464  Particle_get_velocity_m2555333515 (Particle_t1882894987 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
extern "C"  void Particle_set_velocity_m1686335204 (Particle_t1882894987 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
extern "C"  void ParticleSystem_SetParticles_m1018124896 (ParticleSystem_t1800779281 * __this, ParticleU5BU5D_t3069227754* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single World::GetHeightAtX(System.Single)
extern "C"  float World_GetHeightAtX_m4074285094 (World_t3793043157 * __this, float ___x0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Debug_DrawLine_m2464833410 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void World::UpdateParticles(System.Single)
extern "C"  void World_UpdateParticles_m1813833926 (World_t3793043157 * __this, float ___deltaTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void World::DrawUpdraughts()
extern "C"  void World_DrawUpdraughts_m3321137354 (World_t3793043157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void World::AddThermal()
extern "C"  void World_AddThermal_m4143925271 (World_t3793043157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.PolygonCollider2D>()
#define Component_GetComponent_TisPolygonCollider2D_t57175488_m2113441413(__this, method) ((  PolygonCollider2D_t57175488 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.PolygonCollider2D::SetPath(System.Int32,UnityEngine.Vector2[])
extern "C"  void PolygonCollider2D_SetPath_m3164918375 (PolygonCollider2D_t57175488 * __this, int32_t p0, Vector2U5BU5D_t1457185986* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C"  void Transform_Translate_m1810197270 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AddChildren::.ctor()
extern "C"  void AddChildren__ctor_m2867410062 (AddChildren_t2206414750 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AddChildren::Start()
extern "C"  void AddChildren_Start_m3800148276 (AddChildren_t2206414750 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AddChildren_Start_m3800148276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t1113636619 * V_2 = NULL;
	BoxCollider2D_t3581341831 * V_3 = NULL;
	{
		V_0 = (-31.5f);
		goto IL_00c2;
	}

IL_000b:
	{
		V_1 = (-31.5f);
		goto IL_00af;
	}

IL_0016:
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		GameObject_t1113636619 * L_1 = V_2;
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_2, _stringLiteral1676118739);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1676118739);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		float L_4 = V_0;
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		ArrayElementTypeCheck (L_7, _stringLiteral3452614532);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614532);
		ObjectU5BU5D_t2843939325* L_8 = L_7;
		float L_9 = V_1;
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614535);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2971454694(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Object_set_name_m291480324(L_1, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = V_2;
		BoxCollider2D_t3581341831 * L_15 = GameObject_AddComponent_TisBoxCollider2D_t3581341831_m201509103(L_14, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t3581341831_m201509103_RuntimeMethod_var);
		V_3 = L_15;
		BoxCollider2D_t3581341831 * L_16 = V_3;
		Vector2_t2156229523  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector2__ctor_m3970636864((&L_17), (1.0f), (1.0f), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m4134815626(L_16, L_17, /*hidden argument*/NULL);
		BoxCollider2D_t3581341831 * L_18 = V_3;
		float L_19 = V_0;
		float L_20 = V_1;
		Vector2_t2156229523  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector2__ctor_m3970636864((&L_21), L_19, L_20, /*hidden argument*/NULL);
		Collider2D_set_offset_m858183860(L_18, L_21, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_22 = V_2;
		Transform_t3600365921 * L_23 = GameObject_get_transform_m1369836730(L_22, /*hidden argument*/NULL);
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Transform_get_position_m36019626(L_24, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_23, L_25, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_26 = V_2;
		Transform_t3600365921 * L_27 = GameObject_get_transform_m1369836730(L_26, /*hidden argument*/NULL);
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_27, L_28, /*hidden argument*/NULL);
		float L_29 = V_1;
		V_1 = ((float)il2cpp_codegen_add((float)L_29, (float)(1.0f)));
	}

IL_00af:
	{
		float L_30 = V_1;
		if ((((float)L_30) < ((float)(32.5f))))
		{
			goto IL_0016;
		}
	}
	{
		float L_31 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_31, (float)(1.0f)));
	}

IL_00c2:
	{
		float L_32 = V_0;
		if ((((float)L_32) < ((float)(32.5f))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void AddChildren::Update()
extern "C"  void AddChildren_Update_m2797832789 (AddChildren_t2206414750 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMenuScript::.ctor()
extern "C"  void CameraMenuScript__ctor_m4185266575 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::InitWerewolf()
extern "C"  void CameraMenuScript_InitWerewolf_m800122845 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMenuScript_InitWerewolf_m800122845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_1 = L_1;
		Menu_t2559899777 * L_2 = __this->get_WerewolfMenu_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Menu_t2559899777 * L_4 = __this->get_WerewolfMenu_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		Menu_t2559899777 * L_5 = __this->get_WerewolfMenu2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		Menu_t2559899777 * L_7 = __this->get_WerewolfMenu2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Menu_t2559899777 * L_9 = GameObject_AddComponent_TisMenu_t2559899777_m266561916(L_8, /*hidden argument*/GameObject_AddComponent_TisMenu_t2559899777_m266561916_RuntimeMethod_var);
		__this->set_WerewolfMenu_5(L_9);
		Menu_t2559899777 * L_10 = __this->get_WerewolfMenu_5();
		GUISkin_t1244372282 * L_11 = __this->get_GuiSkin_2();
		L_10->set_GuiSkin_10(L_11);
		Menu_t2559899777 * L_12 = __this->get_WerewolfMenu_5();
		L_12->set_MenuTop_7((50.0f));
		Menu_t2559899777 * L_13 = __this->get_WerewolfMenu_5();
		L_13->set_MenuLeftOffset_8((200.0f));
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Menu_t2559899777 * L_15 = GameObject_AddComponent_TisMenu_t2559899777_m266561916(L_14, /*hidden argument*/GameObject_AddComponent_TisMenu_t2559899777_m266561916_RuntimeMethod_var);
		__this->set_WerewolfMenu2_6(L_15);
		Menu_t2559899777 * L_16 = __this->get_WerewolfMenu2_6();
		GUISkin_t1244372282 * L_17 = __this->get_GuiSkin_2();
		L_16->set_GuiSkin_10(L_17);
		Menu_t2559899777 * L_18 = __this->get_WerewolfMenu2_6();
		L_18->set_MenuTop_7((50.0f));
		Menu_t2559899777 * L_19 = __this->get_WerewolfMenu2_6();
		L_19->set_MenuLeftOffset_8((200.0f));
		int32_t L_20 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		V_2 = L_20;
		int32_t L_21 = V_2;
		if (!L_21)
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_00f3;
		}
	}
	{
		goto IL_0104;
	}

IL_00e2:
	{
		V_0 = _stringLiteral3883178430;
		V_1 = _stringLiteral1584031102;
		goto IL_0115;
	}

IL_00f3:
	{
		V_0 = _stringLiteral688320075;
		V_1 = _stringLiteral2247504372;
		goto IL_0115;
	}

IL_0104:
	{
		V_0 = _stringLiteral3597005399;
		V_1 = _stringLiteral2247504372;
		goto IL_0115;
	}

IL_0115:
	{
		Menu_t2559899777 * L_23 = __this->get_WerewolfMenu_5();
		String_t* L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1467154390, L_24, /*hidden argument*/NULL);
		intptr_t L_26 = (intptr_t)CameraMenuScript_U3CInitWerewolfU3Em__0_m2490717660_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_27 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_27, __this, L_26, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_23, L_25, L_27, /*hidden argument*/NULL);
		Menu_t2559899777 * L_28 = __this->get_WerewolfMenu2_6();
		String_t* L_29 = V_1;
		String_t* L_30 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral4172988797, L_29, _stringLiteral50526914, /*hidden argument*/NULL);
		intptr_t L_31 = (intptr_t)CameraMenuScript_U3CInitWerewolfU3Em__1_m152065500_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_32 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_32, __this, L_31, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_28, L_30, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::StartWerewolf()
extern "C"  void CameraMenuScript_StartWerewolf_m2799107472 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	{
		CameraMenuScript_InitWerewolf_m800122845(__this, /*hidden argument*/NULL);
		Menu_t2559899777 * L_0 = __this->get_WerewolfMenu_5();
		Menu_Enable_m773214881(L_0, /*hidden argument*/NULL);
		Menu_t2559899777 * L_1 = __this->get_MainMenu_3();
		Menu_Disable_m1999682007(L_1, /*hidden argument*/NULL);
		Menu_t2559899777 * L_2 = __this->get_MainMenu2_4();
		Menu_Disable_m1999682007(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::LoseFizzBuzz(System.Int32)
extern "C"  void CameraMenuScript_LoseFizzBuzz_m1384135540 (CameraMenuScript_t3298109984 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMenuScript_LoseFizzBuzz_m1384135540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Menu_t2559899777 * L_0 = __this->get_FizzBuzzEndMenu_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Menu_t2559899777 * L_2 = __this->get_FizzBuzzEndMenu_7();
		Menu_Disable_m1999682007(L_2, /*hidden argument*/NULL);
		Menu_t2559899777 * L_3 = __this->get_FizzBuzzEndMenu_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		int32_t L_4 = ___num0;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_4%(int32_t)3))) == ((int32_t)0))? 1 : 0);
		int32_t L_5 = ___num0;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_5%(int32_t)5))) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		V_2 = _stringLiteral4200262978;
		goto IL_0075;
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		int32_t L_9 = ___num0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		V_2 = _stringLiteral2768139538;
	}

IL_0069:
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		V_2 = _stringLiteral2768401686;
	}

IL_0075:
	{
		Menu_t2559899777 * L_15 = __this->get_FizzBuzzCurrent_8();
		Menu_Disable_m1999682007(L_15, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Menu_t2559899777 * L_17 = GameObject_AddComponent_TisMenu_t2559899777_m266561916(L_16, /*hidden argument*/GameObject_AddComponent_TisMenu_t2559899777_m266561916_RuntimeMethod_var);
		__this->set_FizzBuzzEndMenu_7(L_17);
		Menu_t2559899777 * L_18 = __this->get_FizzBuzzEndMenu_7();
		GUISkin_t1244372282 * L_19 = __this->get_GuiSkin_2();
		L_18->set_GuiSkin_10(L_19);
		Menu_t2559899777 * L_20 = __this->get_FizzBuzzEndMenu_7();
		L_20->set_MenuTop_7((50.0f));
		Menu_t2559899777 * L_21 = __this->get_FizzBuzzEndMenu_7();
		L_21->set_MenuLeftOffset_8((200.0f));
		Menu_t2559899777 * L_22 = __this->get_FizzBuzzEndMenu_7();
		String_t* L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral4055262585, L_23, _stringLiteral3452614530, /*hidden argument*/NULL);
		intptr_t L_25 = (intptr_t)CameraMenuScript_U3CLoseFizzBuzzU3Em__2_m613105539_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_26 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_26, __this, L_25, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_22, L_24, L_26, /*hidden argument*/NULL);
		Menu_t2559899777 * L_27 = __this->get_FizzBuzzEndMenu_7();
		Menu_Enable_m773214881(L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::PlayFizzBuzz(System.Int32)
extern "C"  void CameraMenuScript_PlayFizzBuzz_m3358245412 (CameraMenuScript_t3298109984 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMenuScript_PlayFizzBuzz_m3358245412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * V_0 = NULL;
	{
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_0 = (U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 *)il2cpp_codegen_object_new(U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654_il2cpp_TypeInfo_var);
		U3CPlayFizzBuzzU3Ec__AnonStorey0__ctor_m2486874568(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_1 = V_0;
		int32_t L_2 = ___num0;
		L_1->set_num_2(L_2);
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		Menu_t2559899777 * L_4 = __this->get_FizzBuzzCurrent_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		Menu_t2559899777 * L_6 = __this->get_FizzBuzzCurrent_8();
		Menu_Disable_m1999682007(L_6, /*hidden argument*/NULL);
		Menu_t2559899777 * L_7 = __this->get_FizzBuzzCurrent_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_003b:
	{
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Menu_t2559899777 * L_9 = GameObject_AddComponent_TisMenu_t2559899777_m266561916(L_8, /*hidden argument*/GameObject_AddComponent_TisMenu_t2559899777_m266561916_RuntimeMethod_var);
		__this->set_FizzBuzzCurrent_8(L_9);
		Menu_t2559899777 * L_10 = __this->get_FizzBuzzCurrent_8();
		GUISkin_t1244372282 * L_11 = __this->get_GuiSkin_2();
		L_10->set_GuiSkin_10(L_11);
		Menu_t2559899777 * L_12 = __this->get_FizzBuzzCurrent_8();
		L_12->set_MenuTop_7((50.0f));
		Menu_t2559899777 * L_13 = __this->get_FizzBuzzCurrent_8();
		L_13->set_MenuLeftOffset_8((200.0f));
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_14 = V_0;
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_15 = V_0;
		int32_t L_16 = L_15->get_num_2();
		L_14->set_fizz_0((bool)((((int32_t)((int32_t)((int32_t)L_16%(int32_t)3))) == ((int32_t)0))? 1 : 0));
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_17 = V_0;
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_18 = V_0;
		int32_t L_19 = L_18->get_num_2();
		L_17->set_buzz_1((bool)((((int32_t)((int32_t)((int32_t)L_19%(int32_t)5))) == ((int32_t)0))? 1 : 0));
		Menu_t2559899777 * L_20 = __this->get_FizzBuzzCurrent_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_22 = V_0;
		int32_t L_23 = L_22->get_num_2();
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26 = String_Concat_m1715369213(NULL /*static, unused*/, L_21, L_25, _stringLiteral3452614527, /*hidden argument*/NULL);
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_27 = V_0;
		intptr_t L_28 = (intptr_t)U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__0_m810346574_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_29 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_29, L_27, L_28, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_20, L_26, L_29, /*hidden argument*/NULL);
		Menu_t2559899777 * L_30 = __this->get_FizzBuzzCurrent_8();
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_31 = V_0;
		intptr_t L_32 = (intptr_t)U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__1_m810346575_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_33 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_33, L_31, L_32, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_30, _stringLiteral1591030023, L_33, /*hidden argument*/NULL);
		Menu_t2559899777 * L_34 = __this->get_FizzBuzzCurrent_8();
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_35 = V_0;
		intptr_t L_36 = (intptr_t)U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__2_m810346576_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_37 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_37, L_35, L_36, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_34, _stringLiteral1599680907, L_37, /*hidden argument*/NULL);
		Menu_t2559899777 * L_38 = __this->get_FizzBuzzCurrent_8();
		U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * L_39 = V_0;
		intptr_t L_40 = (intptr_t)U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__3_m810346577_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_41 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_41, L_39, L_40, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_38, _stringLiteral4100531152, L_41, /*hidden argument*/NULL);
		Menu_t2559899777 * L_42 = __this->get_FizzBuzzCurrent_8();
		Menu_Enable_m773214881(L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::StartFizzBuzz()
extern "C"  void CameraMenuScript_StartFizzBuzz_m1782759753 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	{
		Menu_t2559899777 * L_0 = __this->get_MainMenu_3();
		Menu_Disable_m1999682007(L_0, /*hidden argument*/NULL);
		Menu_t2559899777 * L_1 = __this->get_MainMenu2_4();
		Menu_Disable_m1999682007(L_1, /*hidden argument*/NULL);
		CameraMenuScript_PlayFizzBuzz_m3358245412(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::Start()
extern "C"  void CameraMenuScript_Start_m619983585 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMenuScript_Start_m619983585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Menu_t2559899777 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Menu_t2559899777 * G_B1_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Menu_t2559899777 * L_1 = GameObject_AddComponent_TisMenu_t2559899777_m266561916(L_0, /*hidden argument*/GameObject_AddComponent_TisMenu_t2559899777_m266561916_RuntimeMethod_var);
		__this->set_MainMenu_3(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Menu_t2559899777 * L_3 = GameObject_AddComponent_TisMenu_t2559899777_m266561916(L_2, /*hidden argument*/GameObject_AddComponent_TisMenu_t2559899777_m266561916_RuntimeMethod_var);
		__this->set_MainMenu2_4(L_3);
		Menu_t2559899777 * L_4 = __this->get_MainMenu_3();
		intptr_t L_5 = (intptr_t)CameraMenuScript_StartWerewolf_m2799107472_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_6 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_6, __this, L_5, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_4, _stringLiteral1173975892, L_6, /*hidden argument*/NULL);
		Menu_t2559899777 * L_7 = __this->get_MainMenu2_4();
		intptr_t L_8 = (intptr_t)CameraMenuScript_StartWerewolf_m2799107472_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_9 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_9, __this, L_8, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_7, _stringLiteral1173975892, L_9, /*hidden argument*/NULL);
		Menu_t2559899777 * L_10 = __this->get_MainMenu_3();
		intptr_t L_11 = (intptr_t)CameraMenuScript_StartFizzBuzz_m1782759753_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_12 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_12, __this, L_11, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_10, _stringLiteral4200262978, L_12, /*hidden argument*/NULL);
		Menu_t2559899777 * L_13 = __this->get_MainMenu2_4();
		intptr_t L_14 = (intptr_t)CameraMenuScript_StartFizzBuzz_m1782759753_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_15 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_15, __this, L_14, /*hidden argument*/NULL);
		Menu_AddButtonItem_m2135025504(L_13, _stringLiteral4200262978, L_15, /*hidden argument*/NULL);
		Menu_t2559899777 * L_16 = __this->get_MainMenu2_4();
		MenuActivated_t3536968312 * L_17 = ((CameraMenuScript_t3298109984_StaticFields*)il2cpp_codegen_static_fields_for(CameraMenuScript_t3298109984_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_9();
		G_B1_0 = _stringLiteral2533438212;
		G_B1_1 = L_16;
		if (L_17)
		{
			G_B2_0 = _stringLiteral2533438212;
			G_B2_1 = L_16;
			goto IL_00b5;
		}
	}
	{
		intptr_t L_18 = (intptr_t)CameraMenuScript_U3CStartU3Em__3_m1258916514_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_19 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_19, NULL, L_18, /*hidden argument*/NULL);
		((CameraMenuScript_t3298109984_StaticFields*)il2cpp_codegen_static_fields_for(CameraMenuScript_t3298109984_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_9(L_19);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_00b5:
	{
		MenuActivated_t3536968312 * L_20 = ((CameraMenuScript_t3298109984_StaticFields*)il2cpp_codegen_static_fields_for(CameraMenuScript_t3298109984_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_9();
		Menu_AddButtonItem_m2135025504(G_B2_1, G_B2_0, L_20, /*hidden argument*/NULL);
		Menu_t2559899777 * L_21 = __this->get_MainMenu_3();
		GUISkin_t1244372282 * L_22 = __this->get_GuiSkin_2();
		L_21->set_GuiSkin_10(L_22);
		Menu_t2559899777 * L_23 = __this->get_MainMenu_3();
		L_23->set_MenuTop_7((50.0f));
		Menu_t2559899777 * L_24 = __this->get_MainMenu_3();
		L_24->set_MenuLeftOffset_8((200.0f));
		Menu_t2559899777 * L_25 = __this->get_MainMenu2_4();
		GUISkin_t1244372282 * L_26 = __this->get_GuiSkin_2();
		L_25->set_GuiSkin_10(L_26);
		Menu_t2559899777 * L_27 = __this->get_MainMenu2_4();
		L_27->set_MenuTop_7((50.0f));
		Menu_t2559899777 * L_28 = __this->get_MainMenu2_4();
		L_28->set_MenuLeftOffset_8((200.0f));
		Menu_t2559899777 * L_29 = __this->get_MainMenu_3();
		Menu_Enable_m773214881(L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::Update()
extern "C"  void CameraMenuScript_Update_m217532755 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CameraMenuScript::<InitWerewolf>m__0()
extern "C"  void CameraMenuScript_U3CInitWerewolfU3Em__0_m2490717660 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	{
		Menu_t2559899777 * L_0 = __this->get_WerewolfMenu_5();
		Menu_Disable_m1999682007(L_0, /*hidden argument*/NULL);
		Menu_t2559899777 * L_1 = __this->get_WerewolfMenu2_6();
		Menu_Enable_m773214881(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::<InitWerewolf>m__1()
extern "C"  void CameraMenuScript_U3CInitWerewolfU3Em__1_m152065500 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	{
		Menu_t2559899777 * L_0 = __this->get_WerewolfMenu2_6();
		Menu_Disable_m1999682007(L_0, /*hidden argument*/NULL);
		Menu_t2559899777 * L_1 = __this->get_MainMenu2_4();
		Menu_Enable_m773214881(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::<LoseFizzBuzz>m__2()
extern "C"  void CameraMenuScript_U3CLoseFizzBuzzU3Em__2_m613105539 (CameraMenuScript_t3298109984 * __this, const RuntimeMethod* method)
{
	{
		Menu_t2559899777 * L_0 = __this->get_FizzBuzzEndMenu_7();
		Menu_Disable_m1999682007(L_0, /*hidden argument*/NULL);
		Menu_t2559899777 * L_1 = __this->get_MainMenu2_4();
		Menu_Enable_m773214881(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript::<Start>m__3()
extern "C"  void CameraMenuScript_U3CStartU3Em__3_m1258916514 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMenuScript_U3CStartU3Em__3_m1258916514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2045068922, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::.ctor()
extern "C"  void U3CPlayFizzBuzzU3Ec__AnonStorey0__ctor_m2486874568 (U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::<>m__0()
extern "C"  void U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__0_m810346574 (U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fizz_0();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = __this->get_buzz_1();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		CameraMenuScript_t3298109984 * L_2 = __this->get_U24this_3();
		int32_t L_3 = __this->get_num_2();
		CameraMenuScript_PlayFizzBuzz_m3358245412(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_002e:
	{
		CameraMenuScript_t3298109984 * L_4 = __this->get_U24this_3();
		int32_t L_5 = __this->get_num_2();
		CameraMenuScript_LoseFizzBuzz_m1384135540(L_4, L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::<>m__1()
extern "C"  void U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__1_m810346575 (U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fizz_0();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = __this->get_buzz_1();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		CameraMenuScript_t3298109984 * L_2 = __this->get_U24this_3();
		int32_t L_3 = __this->get_num_2();
		CameraMenuScript_PlayFizzBuzz_m3358245412(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_002e:
	{
		CameraMenuScript_t3298109984 * L_4 = __this->get_U24this_3();
		int32_t L_5 = __this->get_num_2();
		CameraMenuScript_LoseFizzBuzz_m1384135540(L_4, L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::<>m__2()
extern "C"  void U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__2_m810346576 (U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_buzz_1();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = __this->get_fizz_0();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		CameraMenuScript_t3298109984 * L_2 = __this->get_U24this_3();
		int32_t L_3 = __this->get_num_2();
		CameraMenuScript_PlayFizzBuzz_m3358245412(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_002e:
	{
		CameraMenuScript_t3298109984 * L_4 = __this->get_U24this_3();
		int32_t L_5 = __this->get_num_2();
		CameraMenuScript_LoseFizzBuzz_m1384135540(L_4, L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void CameraMenuScript/<PlayFizzBuzz>c__AnonStorey0::<>m__3()
extern "C"  void U3CPlayFizzBuzzU3Ec__AnonStorey0_U3CU3Em__3_m810346577 (U3CPlayFizzBuzzU3Ec__AnonStorey0_t4212187654 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fizz_0();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = __this->get_buzz_1();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		CameraMenuScript_t3298109984 * L_2 = __this->get_U24this_3();
		int32_t L_3 = __this->get_num_2();
		CameraMenuScript_PlayFizzBuzz_m3358245412(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_002e:
	{
		CameraMenuScript_t3298109984 * L_4 = __this->get_U24this_3();
		int32_t L_5 = __this->get_num_2();
		CameraMenuScript_LoseFizzBuzz_m1384135540(L_4, L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraSizer::.ctor()
extern "C"  void CameraSizer__ctor_m3128899907 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method)
{
	{
		__this->set_PixelsPerUnit_5((100.0f));
		__this->set_Lighting_6((bool)1);
		__this->set_LightTextureScale_7((1.0f));
		Color_t2555686324  L_0 = Color_get_gray_m1471337008(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_AmbientLightColour_8(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSizer::LightingResize()
extern "C"  void CameraSizer_LightingResize_m1947536732 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSizer_LightingResize_m1947536732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RenderTexture_t2108887433 * V_2 = NULL;
	RenderTexture_t2108887433 * V_3 = NULL;
	{
		bool L_0 = __this->get_Lighting_6();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = __this->get_PrevWidth_2();
		int32_t L_2 = __this->get_PrevHeight_3();
		V_0 = ((float)((float)(((float)((float)L_1)))/(float)(((float)((float)L_2)))));
		Camera_t4157153871 * L_3 = __this->get_LightCamera_10();
		Camera_t4157153871 * L_4 = Component_GetComponent_TisCamera_t4157153871_m2650170333(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m2650170333_RuntimeMethod_var);
		float L_5 = Camera_get_orthographicSize_m3903216845(L_4, /*hidden argument*/NULL);
		Camera_set_orthographicSize_m76971700(L_3, L_5, /*hidden argument*/NULL);
		float L_6 = V_0;
		Camera_t4157153871 * L_7 = __this->get_LightCamera_10();
		float L_8 = Camera_get_orthographicSize_m3903216845(L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_9 = __this->get_LightCamera_10();
		float L_10 = Camera_get_orthographicSize_m3903216845(L_9, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((&V_1), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(2.0f))), (float)L_8)), ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_10)), (1.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = __this->get_LightQuad_9();
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = V_1;
		Transform_set_localScale_m3053443106(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_PrevWidth_2();
		float L_15 = __this->get_LightTextureScale_7();
		int32_t L_16 = __this->get_PrevHeight_3();
		float L_17 = __this->get_LightTextureScale_7();
		RenderTexture_t2108887433 * L_18 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m769234016(L_18, (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_14))), (float)L_15))))), (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_16))), (float)L_17))))), 0, /*hidden argument*/NULL);
		V_2 = L_18;
		GameObject_t1113636619 * L_19 = __this->get_LightQuad_9();
		MeshRenderer_t587009260 * L_20 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_19, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		Material_t340375123 * L_21 = Renderer_get_sharedMaterial_m1936632411(L_20, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_22 = V_2;
		Material_set_mainTexture_m544811714(L_21, L_22, /*hidden argument*/NULL);
		Camera_t4157153871 * L_23 = __this->get_LightCamera_10();
		Color_t2555686324  L_24 = __this->get_AmbientLightColour_8();
		Camera_set_backgroundColor_m1332346802(L_23, L_24, /*hidden argument*/NULL);
		Camera_t4157153871 * L_25 = __this->get_LightCamera_10();
		RenderTexture_t2108887433 * L_26 = Camera_get_targetTexture_m2278634983(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		Camera_t4157153871 * L_27 = __this->get_LightCamera_10();
		RenderTexture_t2108887433 * L_28 = V_2;
		Camera_set_targetTexture_m3148311140(L_27, L_28, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_29 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_29, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00ef;
		}
	}
	{
		RenderTexture_t2108887433 * L_31 = V_3;
		RenderTexture_Release_m1749927881(L_31, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_32 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		return;
	}
}
// System.Void CameraSizer::InitLighting()
extern "C"  void CameraSizer_InitLighting_m2372589901 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSizer_InitLighting_m2372589901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_Lighting_6();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = GameObject_CreatePrimitive_m2902598419(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		__this->set_LightQuad_9(L_5);
		GameObject_t1113636619 * L_6 = __this->get_LightQuad_9();
		MeshRenderer_t587009260 * L_7 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		Material_t340375123 * L_8 = Renderer_get_sharedMaterial_m1936632411(L_7, /*hidden argument*/NULL);
		Shader_t4151988712 * L_9 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3400268715, /*hidden argument*/NULL);
		Material_set_shader_m1402562841(L_8, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_10, _stringLiteral3229710239, /*hidden argument*/NULL);
		__this->set_LightCamOb_11(L_10);
		GameObject_t1113636619 * L_11 = __this->get_LightCamOb_11();
		Camera_t4157153871 * L_12 = GameObject_AddComponent_TisCamera_t4157153871_m1030966160(L_11, /*hidden argument*/GameObject_AddComponent_TisCamera_t4157153871_m1030966160_RuntimeMethod_var);
		__this->set_LightCamera_10(L_12);
		Camera_t4157153871 * L_13 = __this->get_LightCamera_10();
		Camera_set_orthographic_m2855749523(L_13, (bool)1, /*hidden argument*/NULL);
		Camera_t4157153871 * L_14 = __this->get_LightCamera_10();
		int32_t L_15 = LayerMask_NameToLayer_m2359665122(NULL /*static, unused*/, _stringLiteral746088437, /*hidden argument*/NULL);
		Camera_set_cullingMask_m1402455777(L_14, ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
		Camera_t4157153871 * L_16 = Component_GetComponent_TisCamera_t4157153871_m2650170333(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m2650170333_RuntimeMethod_var);
		Camera_t4157153871 * L_17 = L_16;
		int32_t L_18 = Camera_get_cullingMask_m679085748(L_17, /*hidden argument*/NULL);
		Camera_t4157153871 * L_19 = __this->get_LightCamera_10();
		int32_t L_20 = Camera_get_cullingMask_m679085748(L_19, /*hidden argument*/NULL);
		Camera_set_cullingMask_m1402455777(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_20)), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_21 = __this->get_LightQuad_9();
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_22, L_23, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_24 = __this->get_LightCamOb_11();
		Transform_t3600365921 * L_25 = GameObject_get_transform_m1369836730(L_24, /*hidden argument*/NULL);
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_25, L_26, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_27 = __this->get_LightQuad_9();
		Transform_t3600365921 * L_28 = GameObject_get_transform_m1369836730(L_27, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = V_0;
		Transform_set_position_m3387557959(L_28, L_29, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_30 = __this->get_LightCamOb_11();
		Transform_t3600365921 * L_31 = GameObject_get_transform_m1369836730(L_30, /*hidden argument*/NULL);
		Vector3_t3722313464  L_32 = V_0;
		Transform_set_position_m3387557959(L_31, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSizer::Start()
extern "C"  void CameraSizer_Start_m4138389895 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method)
{
	{
		CameraSizer_InitLighting_m2372589901(__this, /*hidden argument*/NULL);
		CameraSizer_ResizeCamera_m4265951176(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSizer::ResizeCamera()
extern "C"  void CameraSizer_ResizeCamera_m4265951176 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSizer_ResizeCamera_m4265951176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_PrevWidth_2(L_0);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_PrevHeight_3(L_1);
		float L_2 = __this->get_PixelsPerUnit_5();
		__this->set_PrevPPU_4(L_2);
		Camera_t4157153871 * L_3 = Component_GetComponent_TisCamera_t4157153871_m2650170333(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m2650170333_RuntimeMethod_var);
		int32_t L_4 = __this->get_PrevHeight_3();
		float L_5 = __this->get_PixelsPerUnit_5();
		Camera_set_orthographicSize_m76971700(L_3, ((float)((float)(((float)((float)L_4)))/(float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_5)))), /*hidden argument*/NULL);
		CameraSizer_LightingResize_m1947536732(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSizer::Update()
extern "C"  void CameraSizer_Update_m492141723 (CameraSizer_t2190550995 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_PrevWidth_2();
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_2 = __this->get_PrevHeight_3();
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		float L_4 = __this->get_PixelsPerUnit_5();
		float L_5 = __this->get_PrevPPU_4();
		if ((((float)L_4) == ((float)L_5)))
		{
			goto IL_0037;
		}
	}

IL_0031:
	{
		CameraSizer_ResizeCamera_m4265951176(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hangglider::.ctor()
extern "C"  void Hangglider__ctor_m2037302827 (Hangglider_t1791610530 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Facing_5((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Hangglider::Start()
extern "C"  void Hangglider_Start_m61819019 (Hangglider_t1791610530 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hangglider_Start_m61819019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_MainCamera_3(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_m_MyBody_4(L_1);
		Rigidbody2D_t939494601 * L_2 = __this->get_m_MyBody_4();
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Hangglider::FixedUpdate()
extern "C"  void Hangglider_FixedUpdate_m3640606711 (Hangglider_t1791610530 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hangglider_FixedUpdate_m3640606711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t2156229523  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector2_t2156229523  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector2_t2156229523  V_15;
	memset(&V_15, 0, sizeof(V_15));
	float V_16 = 0.0f;
	bool V_17 = false;
	Vector3_t3722313464  V_18;
	memset(&V_18, 0, sizeof(V_18));
	Vector3_t3722313464  V_19;
	memset(&V_19, 0, sizeof(V_19));
	Vector3_t3722313464  V_20;
	memset(&V_20, 0, sizeof(V_20));
	{
		World_t3793043157 * L_0 = __this->get_theWorld_2();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_0();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_y_1();
		float L_7 = World_GetUpdraughtAtCoord_m2083694645(L_0, L_3, L_6, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)(7.0f), (float)L_7));
		Rigidbody2D_t939494601 * L_8 = __this->get_m_MyBody_4();
		Vector2_t2156229523  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3970636864((&L_9), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t2156229523  L_10 = Rigidbody2D_GetRelativeVector_m1392063077(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Rigidbody2D_t939494601 * L_11 = __this->get_m_MyBody_4();
		float L_12 = __this->get_m_Facing_5();
		Vector2_t2156229523  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m3970636864((&L_13), (0.0f), L_12, /*hidden argument*/NULL);
		Vector2_t2156229523  L_14 = Rigidbody2D_GetRelativeVector_m1392063077(L_11, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		Rigidbody2D_t939494601 * L_15 = __this->get_m_MyBody_4();
		Vector2_t2156229523  L_16 = Rigidbody2D_get_velocity_m366589732(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17 = Vector2_SqrMagnitude_m2507415696((&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Min_m1073399594(NULL /*static, unused*/, (64.0f), L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		float L_19 = (&V_3)->get_x_0();
		float L_20 = Mathf_Sign_m3457838305(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		Vector2_t2156229523  L_21 = V_3;
		Vector2_t2156229523  L_22 = Vector2_get_normalized_m2683665860((&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		float L_23 = Vector2_Dot_m1554553447(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		Vector2_t2156229523  L_24 = V_4;
		Vector2_t2156229523  L_25 = Vector2_get_normalized_m2683665860((&V_5), /*hidden argument*/NULL);
		float L_26 = Vector2_Dot_m1554553447(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		V_9 = L_26;
		Vector2_t2156229523  L_27 = V_3;
		Vector2_t2156229523  L_28 = V_5;
		float L_29 = Vector2_SignedAngle_m1664554214(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		V_10 = L_29;
		V_11 = (0.0f);
		float L_30 = V_8;
		float L_31 = V_6;
		V_11 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), (float)(0.175f)));
		float L_32 = V_9;
		float L_33 = V_6;
		V_12 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((-L_32)), (float)L_33)), (float)(0.25f)));
		float L_34 = V_12;
		Vector2_t2156229523  L_35 = V_4;
		Vector2_t2156229523  L_36 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		V_13 = L_36;
		float L_37 = (&V_3)->get_x_0();
		float L_38 = fabsf(L_37);
		float L_39 = V_0;
		Vector2__ctor_m3970636864((&V_14), (0.0f), ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_40 = V_14;
		float L_41 = V_11;
		Vector2_t2156229523  L_42 = V_4;
		Vector2_t2156229523  L_43 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		Vector2_t2156229523  L_44 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_40, L_43, /*hidden argument*/NULL);
		Vector2_t2156229523  L_45 = V_13;
		Vector2_t2156229523  L_46 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
		V_15 = L_46;
		Rigidbody2D_t939494601 * L_47 = __this->get_m_MyBody_4();
		Vector2_t2156229523  L_48 = V_15;
		Rigidbody2D_AddForce_m1113499586(L_47, L_48, /*hidden argument*/NULL);
		V_16 = (0.0f);
		float L_49 = V_10;
		float L_50 = fabsf(L_49);
		if ((!(((float)L_50) < ((float)(90.0f)))))
		{
			goto IL_01a0;
		}
	}
	{
		float L_51 = V_7;
		if ((!(((float)L_51) == ((float)(-1.0f)))))
		{
			goto IL_0164;
		}
	}
	{
		float L_52 = V_10;
		if ((((float)L_52) > ((float)(0.0f))))
		{
			goto IL_017c;
		}
	}

IL_0164:
	{
		float L_53 = V_7;
		if ((!(((float)L_53) == ((float)(1.0f)))))
		{
			goto IL_01a0;
		}
	}
	{
		float L_54 = V_10;
		if ((!(((float)L_54) < ((float)(0.0f)))))
		{
			goto IL_01a0;
		}
	}

IL_017c:
	{
		float L_55 = V_10;
		float L_56 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_57 = Mathf_Max_m3146388979(NULL /*static, unused*/, (10.0f), L_56, /*hidden argument*/NULL);
		V_16 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_55/(float)(1800.0f))), (float)L_57));
		Rigidbody2D_t939494601 * L_58 = __this->get_m_MyBody_4();
		float L_59 = V_16;
		Rigidbody2D_AddTorque_m1535770154(L_58, L_59, /*hidden argument*/NULL);
	}

IL_01a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		bool L_60 = Debug_get_isDebugBuild_m1389897688(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0390;
		}
	}
	{
		Transform_t3600365921 * L_61 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_62 = Transform_get_position_m36019626(L_61, /*hidden argument*/NULL);
		Transform_t3600365921 * L_63 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_64 = Transform_get_position_m36019626(L_63, /*hidden argument*/NULL);
		float L_65 = (&V_15)->get_x_0();
		float L_66 = (&V_15)->get_y_1();
		Vector3_t3722313464  L_67;
		memset(&L_67, 0, sizeof(L_67));
		Vector3__ctor_m1719387948((&L_67), L_65, L_66, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_68 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_64, L_67, /*hidden argument*/NULL);
		Color_t2555686324  L_69 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_62, L_68, L_69, /*hidden argument*/NULL);
		Transform_t3600365921 * L_70 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_71 = Transform_get_position_m36019626(L_70, /*hidden argument*/NULL);
		Transform_t3600365921 * L_72 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_73 = Transform_get_position_m36019626(L_72, /*hidden argument*/NULL);
		float L_74 = (&V_13)->get_x_0();
		float L_75 = (&V_13)->get_y_1();
		Vector3_t3722313464  L_76;
		memset(&L_76, 0, sizeof(L_76));
		Vector3__ctor_m1719387948((&L_76), L_74, L_75, /*hidden argument*/NULL);
		Vector3_t3722313464  L_77 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_73, L_76, /*hidden argument*/NULL);
		Color_t2555686324  L_78 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_71, L_77, L_78, /*hidden argument*/NULL);
		Transform_t3600365921 * L_79 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_80 = Transform_get_position_m36019626(L_79, /*hidden argument*/NULL);
		Transform_t3600365921 * L_81 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_82 = Transform_get_position_m36019626(L_81, /*hidden argument*/NULL);
		float L_83 = (&V_14)->get_x_0();
		float L_84 = (&V_14)->get_y_1();
		Vector3_t3722313464  L_85;
		memset(&L_85, 0, sizeof(L_85));
		Vector3__ctor_m1719387948((&L_85), L_83, L_84, /*hidden argument*/NULL);
		Vector3_t3722313464  L_86 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_82, L_85, /*hidden argument*/NULL);
		Color_t2555686324  L_87 = Color_get_grey_m3440705476(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_80, L_86, L_87, /*hidden argument*/NULL);
		Transform_t3600365921 * L_88 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_89 = Transform_get_position_m36019626(L_88, /*hidden argument*/NULL);
		Transform_t3600365921 * L_90 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_91 = Transform_get_position_m36019626(L_90, /*hidden argument*/NULL);
		float L_92 = (&V_5)->get_x_0();
		float L_93 = (&V_5)->get_y_1();
		Vector3_t3722313464  L_94;
		memset(&L_94, 0, sizeof(L_94));
		Vector3__ctor_m1719387948((&L_94), L_92, L_93, /*hidden argument*/NULL);
		Vector3_t3722313464  L_95 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_91, L_94, /*hidden argument*/NULL);
		Color_t2555686324  L_96 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_89, L_95, L_96, /*hidden argument*/NULL);
		Transform_t3600365921 * L_97 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_98 = Transform_get_position_m36019626(L_97, /*hidden argument*/NULL);
		Vector3_t3722313464  L_99;
		memset(&L_99, 0, sizeof(L_99));
		Vector3__ctor_m1719387948((&L_99), (0.0f), (-4.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_100 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_98, L_99, /*hidden argument*/NULL);
		Transform_t3600365921 * L_101 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_102 = Transform_get_position_m36019626(L_101, /*hidden argument*/NULL);
		float L_103 = V_16;
		Vector3_t3722313464  L_104;
		memset(&L_104, 0, sizeof(L_104));
		Vector3__ctor_m1719387948((&L_104), L_103, (-4.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_105 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_102, L_104, /*hidden argument*/NULL);
		Color_t2555686324  L_106 = Color_get_cyan_m765383084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_100, L_105, L_106, /*hidden argument*/NULL);
		Transform_t3600365921 * L_107 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_108 = Transform_get_position_m36019626(L_107, /*hidden argument*/NULL);
		Vector3_t3722313464  L_109;
		memset(&L_109, 0, sizeof(L_109));
		Vector3__ctor_m1719387948((&L_109), (0.0f), (-4.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_110 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_108, L_109, /*hidden argument*/NULL);
		Transform_t3600365921 * L_111 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_112 = Transform_get_position_m36019626(L_111, /*hidden argument*/NULL);
		float L_113 = V_10;
		Vector3_t3722313464  L_114;
		memset(&L_114, 0, sizeof(L_114));
		Vector3__ctor_m1719387948((&L_114), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)((float)L_113/(float)(90.0f))), (float)(4.0f))), /*hidden argument*/NULL);
		Vector3_t3722313464  L_115 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_112, L_114, /*hidden argument*/NULL);
		Color_t2555686324  L_116 = Color_get_magenta_m208363462(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_110, L_115, L_116, /*hidden argument*/NULL);
		Transform_t3600365921 * L_117 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_118 = Transform_get_position_m36019626(L_117, /*hidden argument*/NULL);
		Transform_t3600365921 * L_119 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_120 = Transform_get_position_m36019626(L_119, /*hidden argument*/NULL);
		float L_121 = (&V_4)->get_x_0();
		float L_122 = (&V_4)->get_y_1();
		Vector3_t3722313464  L_123;
		memset(&L_123, 0, sizeof(L_123));
		Vector3__ctor_m1719387948((&L_123), L_121, L_122, /*hidden argument*/NULL);
		Vector3_t3722313464  L_124 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_120, L_123, /*hidden argument*/NULL);
		Color_t2555686324  L_125 = Color_get_cyan_m765383084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_118, L_124, L_125, /*hidden argument*/NULL);
		Transform_t3600365921 * L_126 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_127 = Transform_get_position_m36019626(L_126, /*hidden argument*/NULL);
		Transform_t3600365921 * L_128 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_129 = Transform_get_position_m36019626(L_128, /*hidden argument*/NULL);
		float L_130 = (&V_3)->get_x_0();
		float L_131 = (&V_3)->get_y_1();
		Vector3_t3722313464  L_132;
		memset(&L_132, 0, sizeof(L_132));
		Vector3__ctor_m1719387948((&L_132), L_130, L_131, /*hidden argument*/NULL);
		Vector3_t3722313464  L_133 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_129, L_132, /*hidden argument*/NULL);
		Color_t2555686324  L_134 = Color_get_magenta_m208363462(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_127, L_133, L_134, /*hidden argument*/NULL);
	}

IL_0390:
	{
		V_17 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_135 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_135)
		{
			goto IL_03e3;
		}
	}
	{
		V_17 = (bool)1;
		Rigidbody2D_t939494601 * L_136 = __this->get_m_MyBody_4();
		float L_137 = __this->get_m_Facing_5();
		Rigidbody2D_AddTorque_m1535770154(L_136, ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_137)), /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_138 = __this->get_m_MyBody_4();
		Vector2_t2156229523  L_139 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_140 = Vector2_op_UnaryNegation_m2172448356(NULL /*static, unused*/, L_139, /*hidden argument*/NULL);
		Vector2_t2156229523  L_141 = V_3;
		Vector2_t2156229523  L_142 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_140, L_141, /*hidden argument*/NULL);
		Vector2_t2156229523  L_143 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, (3.0f), L_142, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1113499586(L_138, L_143, /*hidden argument*/NULL);
		goto IL_0429;
	}

IL_03e3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_144 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_144)
		{
			goto IL_0429;
		}
	}
	{
		V_17 = (bool)1;
		Rigidbody2D_t939494601 * L_145 = __this->get_m_MyBody_4();
		float L_146 = __this->get_m_Facing_5();
		Rigidbody2D_AddTorque_m1535770154(L_145, ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_146)), /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_147 = __this->get_m_MyBody_4();
		Vector2_t2156229523  L_148 = V_4;
		Vector2_t2156229523  L_149 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_150 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_148, L_149, /*hidden argument*/NULL);
		Vector2_t2156229523  L_151 = Vector2_op_Multiply_m3294489634(NULL /*static, unused*/, (3.0f), L_150, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1113499586(L_147, L_151, /*hidden argument*/NULL);
	}

IL_0429:
	{
		bool L_152 = V_17;
		if (L_152)
		{
			goto IL_04a6;
		}
	}
	{
		float L_153 = V_7;
		float L_154 = __this->get_m_Facing_5();
		if ((((float)L_153) == ((float)L_154)))
		{
			goto IL_04a6;
		}
	}
	{
		float L_155 = V_7;
		float L_156 = (&V_3)->get_x_0();
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_155, (float)L_156))) > ((float)(0.4f)))))
		{
			goto IL_04a6;
		}
	}
	{
		float L_157 = V_7;
		__this->set_m_Facing_5(L_157);
		Transform_t3600365921 * L_158 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_159 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_160 = Transform_get_localScale_m129152068(L_159, /*hidden argument*/NULL);
		V_18 = L_160;
		float L_161 = (&V_18)->get_x_0();
		Transform_t3600365921 * L_162 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_163 = Transform_get_localScale_m129152068(L_162, /*hidden argument*/NULL);
		V_19 = L_163;
		float L_164 = (&V_19)->get_y_1();
		Transform_t3600365921 * L_165 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_166 = Transform_get_localScale_m129152068(L_165, /*hidden argument*/NULL);
		V_20 = L_166;
		float L_167 = (&V_20)->get_z_2();
		Vector3_t3722313464  L_168;
		memset(&L_168, 0, sizeof(L_168));
		Vector3__ctor_m3353183577((&L_168), L_161, ((-L_164)), L_167, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_158, L_168, /*hidden argument*/NULL);
	}

IL_04a6:
	{
		return;
	}
}
// System.Void Hangglider::Update()
extern "C"  void Hangglider_Update_m1429261363 (Hangglider_t1791610530 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Camera_t4157153871 * L_0 = __this->get_m_MainCamera_3();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_0();
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_y_1();
		Camera_t4157153871 * L_8 = __this->get_m_MainCamera_3();
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = (&V_2)->get_z_2();
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), L_4, ((float)il2cpp_codegen_subtract((float)L_7, (float)(5.0f))), L_11, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_1, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Hangglider::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Hangglider_OnCollisionEnter2D_m3011482087 (Hangglider_t1791610530 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	{
		World_t3793043157 * L_0 = __this->get_theWorld_2();
		World_EndGame_m3361102908(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Menu::.ctor()
extern "C"  void Menu__ctor_m1825074274 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu__ctor_m1825074274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_UpKey_2(((int32_t)273));
		__this->set_DownKey_3(((int32_t)274));
		__this->set_LeftKey_4(((int32_t)276));
		__this->set_RightKey_5(((int32_t)275));
		__this->set_ActionKey_6(((int32_t)32));
		__this->set_MenuTop_7((200.0f));
		__this->set_LineWidth_9((50.0f));
		List_1_t2606367753 * L_0 = (List_1_t2606367753 *)il2cpp_codegen_object_new(List_1_t2606367753_il2cpp_TypeInfo_var);
		List_1__ctor_m497344735(L_0, /*hidden argument*/List_1__ctor_m497344735_RuntimeMethod_var);
		__this->set_m_menuItems_11(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::Enable()
extern "C"  void Menu_Enable_m773214881 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_beEnabledNextFrame_13((bool)1);
		return;
	}
}
// System.Void Menu::Disable()
extern "C"  void Menu_Disable_m1999682007 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_beEnabledNextFrame_13((bool)0);
		return;
	}
}
// System.Void Menu::AddButtonItem(System.String,Menu/MenuActivated)
extern "C"  void Menu_AddButtonItem_m2135025504 (Menu_t2559899777 * __this, String_t* ___itemText0, MenuActivated_t3536968312 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_AddButtonItem_m2135025504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MenuItem_t1134293011  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MenuItem_t1134293011 ));
		String_t* L_0 = ___itemText0;
		(&V_0)->set_Text_0(L_0);
		MenuActivated_t3536968312 * L_1 = ___callback1;
		(&V_0)->set_onActivate_3(L_1);
		(&V_0)->set_Type_1(0);
		List_1_t2606367753 * L_2 = __this->get_m_menuItems_11();
		MenuItem_t1134293011  L_3 = V_0;
		List_1_Add_m3289853881(L_2, L_3, /*hidden argument*/List_1_Add_m3289853881_RuntimeMethod_var);
		return;
	}
}
// System.Void Menu::AddListItem(System.String,System.String[],System.Int32,Menu/MenuListItemSelected)
extern "C"  void Menu_AddListItem_m3949730316 (Menu_t2559899777 * __this, String_t* ___itemText0, StringU5BU5D_t1281789340* ___items1, int32_t ___defaultItem2, MenuListItemSelected_t3871161844 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_AddListItem_m3949730316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MenuItem_t1134293011  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MenuItem_t1134293011 ));
		String_t* L_0 = ___itemText0;
		(&V_0)->set_Text_0(L_0);
		MenuListItemSelected_t3871161844 * L_1 = ___callback3;
		(&V_0)->set_onItemSelect_4(L_1);
		(&V_0)->set_Type_1(1);
		StringU5BU5D_t1281789340* L_2 = ___items1;
		(&V_0)->set_ListItems_2(L_2);
		int32_t L_3 = ___defaultItem2;
		(&V_0)->set_SelectedIndex_5(L_3);
		List_1_t2606367753 * L_4 = __this->get_m_menuItems_11();
		MenuItem_t1134293011  L_5 = V_0;
		List_1_Add_m3289853881(L_4, L_5, /*hidden argument*/List_1_Add_m3289853881_RuntimeMethod_var);
		return;
	}
}
// System.Void Menu::InterpretKeys()
extern "C"  void Menu_InterpretKeys_m4109317554 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_InterpretKeys_m4109317554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MenuItem_t1134293011  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_UpKey_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = __this->get_m_selectedItem_14();
		__this->set_m_selectedItem_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		goto IL_0041;
	}

IL_0023:
	{
		int32_t L_3 = __this->get_DownKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_5 = __this->get_m_selectedItem_14();
		__this->set_m_selectedItem_14(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_0041:
	{
		int32_t L_6 = __this->get_m_selectedItem_14();
		List_1_t2606367753 * L_7 = __this->get_m_menuItems_11();
		int32_t L_8 = List_1_get_Count_m3987431879(L_7, /*hidden argument*/List_1_get_Count_m3987431879_RuntimeMethod_var);
		__this->set_m_selectedItem_14(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_8)));
		int32_t L_9 = __this->get_m_selectedItem_14();
		List_1_t2606367753 * L_10 = __this->get_m_menuItems_11();
		int32_t L_11 = List_1_get_Count_m3987431879(L_10, /*hidden argument*/List_1_get_Count_m3987431879_RuntimeMethod_var);
		__this->set_m_selectedItem_14(((int32_t)((int32_t)L_9%(int32_t)L_11)));
		List_1_t2606367753 * L_12 = __this->get_m_menuItems_11();
		int32_t L_13 = __this->get_m_selectedItem_14();
		MenuItem_t1134293011  L_14 = List_1_get_Item_m1482221937(L_12, L_13, /*hidden argument*/List_1_get_Item_m1482221937_RuntimeMethod_var);
		V_0 = L_14;
		int32_t L_15 = (&V_0)->get_Type_1();
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0131;
		}
	}
	{
		V_1 = (bool)0;
		int32_t L_16 = __this->get_LeftKey_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b8;
		}
	}
	{
		MenuItem_t1134293011 * L_18 = (&V_0);
		int32_t L_19 = L_18->get_SelectedIndex_5();
		L_18->set_SelectedIndex_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		V_1 = (bool)1;
		goto IL_00d9;
	}

IL_00b8:
	{
		int32_t L_20 = __this->get_RightKey_5();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_21 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00d9;
		}
	}
	{
		MenuItem_t1134293011 * L_22 = (&V_0);
		int32_t L_23 = L_22->get_SelectedIndex_5();
		L_22->set_SelectedIndex_5(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		V_1 = (bool)1;
	}

IL_00d9:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_012c;
		}
	}
	{
		MenuItem_t1134293011 * L_25 = (&V_0);
		int32_t L_26 = L_25->get_SelectedIndex_5();
		StringU5BU5D_t1281789340* L_27 = (&V_0)->get_ListItems_2();
		int32_t L_28 = Array_GetUpperBound_m4018715963((RuntimeArray *)(RuntimeArray *)L_27, 0, /*hidden argument*/NULL);
		L_25->set_SelectedIndex_5(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)))));
		MenuItem_t1134293011 * L_29 = (&V_0);
		int32_t L_30 = L_29->get_SelectedIndex_5();
		StringU5BU5D_t1281789340* L_31 = (&V_0)->get_ListItems_2();
		int32_t L_32 = Array_GetUpperBound_m4018715963((RuntimeArray *)(RuntimeArray *)L_31, 0, /*hidden argument*/NULL);
		L_29->set_SelectedIndex_5(((int32_t)((int32_t)L_30%(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)))));
		MenuListItemSelected_t3871161844 * L_33 = (&V_0)->get_onItemSelect_4();
		int32_t L_34 = (&V_0)->get_SelectedIndex_5();
		MenuListItemSelected_Invoke_m3223667935(L_33, L_34, /*hidden argument*/NULL);
	}

IL_012c:
	{
		goto IL_014d;
	}

IL_0131:
	{
		int32_t L_35 = __this->get_ActionKey_6();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_36 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_014d;
		}
	}
	{
		MenuActivated_t3536968312 * L_37 = (&V_0)->get_onActivate_3();
		MenuActivated_Invoke_m2581278067(L_37, /*hidden argument*/NULL);
	}

IL_014d:
	{
		List_1_t2606367753 * L_38 = __this->get_m_menuItems_11();
		int32_t L_39 = __this->get_m_selectedItem_14();
		MenuItem_t1134293011  L_40 = V_0;
		List_1_set_Item_m2380330413(L_38, L_39, L_40, /*hidden argument*/List_1_set_Item_m2380330413_RuntimeMethod_var);
		return;
	}
}
// System.Void Menu::DrawMenuItem(System.Int32,System.Single,System.Single)
extern "C"  void Menu_DrawMenuItem_m1045921698 (Menu_t2559899777 * __this, int32_t ___index0, float ___x_centre1, float ___top2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_DrawMenuItem_m1045921698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MenuItem_t1134293011  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	GUIContent_t3050628031 * V_2 = NULL;
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		List_1_t2606367753 * L_0 = __this->get_m_menuItems_11();
		int32_t L_1 = ___index0;
		MenuItem_t1134293011  L_2 = List_1_get_Item_m1482221937(L_0, L_1, /*hidden argument*/List_1_get_Item_m1482221937_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = (&V_0)->get_Text_0();
		V_1 = L_3;
		int32_t L_4 = (&V_0)->get_Type_1();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_5 = V_1;
		StringU5BU5D_t1281789340* L_6 = (&V_0)->get_ListItems_2();
		int32_t L_7 = (&V_0)->get_SelectedIndex_5();
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, L_5, _stringLiteral3450517398, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
	}

IL_003d:
	{
		int32_t L_11 = ___index0;
		int32_t L_12 = __this->get_m_selectedItem_14();
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_13 = (&V_0)->get_Type_1();
		if (L_13)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3450517394, L_14, _stringLiteral3451828096, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_007c;
	}

IL_006b:
	{
		String_t* L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3450517396, L_16, _stringLiteral3451697024, /*hidden argument*/NULL);
		V_1 = L_17;
	}

IL_007c:
	{
		String_t* L_18 = V_1;
		GUIContent_t3050628031 * L_19 = (GUIContent_t3050628031 *)il2cpp_codegen_object_new(GUIContent_t3050628031_il2cpp_TypeInfo_var);
		GUIContent__ctor_m890195579(L_19, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUISkin_t1244372282 * L_20 = GUI_get_skin_m1874615010(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_21 = GUISkin_get_label_m1693050720(L_20, /*hidden argument*/NULL);
		GUIContent_t3050628031 * L_22 = V_2;
		Vector2_t2156229523  L_23 = GUIStyle_CalcSize_m1046812636(L_21, L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		float L_24 = ___x_centre1;
		float L_25 = (&V_3)->get_x_0();
		float L_26 = ___top2;
		float L_27 = (&V_3)->get_x_0();
		float L_28 = (&V_3)->get_y_1();
		Rect_t2360479859  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Rect__ctor_m2614021312((&L_29), ((float)il2cpp_codegen_subtract((float)L_24, (float)((float)((float)L_25/(float)(2.0f))))), L_26, L_27, L_28, /*hidden argument*/NULL);
		GUIContent_t3050628031 * L_30 = V_2;
		GUI_Label_m2546823033(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::DrawMenu()
extern "C"  void Menu_DrawMenu_m3643787402 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_DrawMenu_m3643787402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_MenuLeftOffset_8();
		float L_3 = __this->get_MenuTop_7();
		int32_t L_4 = V_0;
		float L_5 = __this->get_LineWidth_9();
		Menu_DrawMenuItem_m1045921698(__this, L_0, ((float)il2cpp_codegen_add((float)(((float)((float)((int32_t)((int32_t)L_1/(int32_t)2))))), (float)L_2)), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_4))), (float)L_5)))), /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		List_1_t2606367753 * L_8 = __this->get_m_menuItems_11();
		int32_t L_9 = List_1_get_Count_m3987431879(L_8, /*hidden argument*/List_1_get_Count_m3987431879_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Menu::Start()
extern "C"  void Menu_Start_m3708307636 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Menu::Update()
extern "C"  void Menu_Update_m592513814 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_Update_m592513814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_enabled_12();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		List_1_t2606367753 * L_1 = __this->get_m_menuItems_11();
		int32_t L_2 = List_1_get_Count_m3987431879(L_1, /*hidden argument*/List_1_get_Count_m3987431879_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		Menu_InterpretKeys_m4109317554(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		bool L_3 = __this->get_m_beEnabledNextFrame_13();
		__this->set_m_enabled_12(L_3);
		return;
	}
}
// System.Void Menu::OnGUI()
extern "C"  void Menu_OnGUI_m3438918793 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_OnGUI_m3438918793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_enabled_12();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		List_1_t2606367753 * L_1 = __this->get_m_menuItems_11();
		int32_t L_2 = List_1_get_Count_m3987431879(L_1, /*hidden argument*/List_1_get_Count_m3987431879_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		GUISkin_t1244372282 * L_3 = __this->get_GuiSkin_10();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_set_skin_m3073574632(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Menu_DrawMenu_m3643787402(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_MenuActivated_t3536968312 (MenuActivated_t3536968312 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Menu/MenuActivated::.ctor(System.Object,System.IntPtr)
extern "C"  void MenuActivated__ctor_m1325247487 (MenuActivated_t3536968312 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Menu/MenuActivated::Invoke()
extern "C"  void MenuActivated_Invoke_m2581278067 (MenuActivated_t3536968312 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MenuActivated_Invoke_m2581278067((MenuActivated_t3536968312 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Menu/MenuActivated::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MenuActivated_BeginInvoke_m2311136721 (MenuActivated_t3536968312 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Menu/MenuActivated::EndInvoke(System.IAsyncResult)
extern "C"  void MenuActivated_EndInvoke_m2618556169 (MenuActivated_t3536968312 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Menu/MenuItem
extern "C" void MenuItem_t1134293011_marshal_pinvoke(const MenuItem_t1134293011& unmarshaled, MenuItem_t1134293011_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ListItems_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ListItems' of type 'MenuItem'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ListItems_2Exception,NULL);
}
extern "C" void MenuItem_t1134293011_marshal_pinvoke_back(const MenuItem_t1134293011_marshaled_pinvoke& marshaled, MenuItem_t1134293011& unmarshaled)
{
	Exception_t* ___ListItems_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ListItems' of type 'MenuItem'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ListItems_2Exception,NULL);
}
// Conversion method for clean up from marshalling of: Menu/MenuItem
extern "C" void MenuItem_t1134293011_marshal_pinvoke_cleanup(MenuItem_t1134293011_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Menu/MenuItem
extern "C" void MenuItem_t1134293011_marshal_com(const MenuItem_t1134293011& unmarshaled, MenuItem_t1134293011_marshaled_com& marshaled)
{
	Exception_t* ___ListItems_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ListItems' of type 'MenuItem'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ListItems_2Exception,NULL);
}
extern "C" void MenuItem_t1134293011_marshal_com_back(const MenuItem_t1134293011_marshaled_com& marshaled, MenuItem_t1134293011& unmarshaled)
{
	Exception_t* ___ListItems_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ListItems' of type 'MenuItem'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ListItems_2Exception,NULL);
}
// Conversion method for clean up from marshalling of: Menu/MenuItem
extern "C" void MenuItem_t1134293011_marshal_com_cleanup(MenuItem_t1134293011_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_MenuListItemSelected_t3871161844 (MenuListItemSelected_t3871161844 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Menu/MenuListItemSelected::.ctor(System.Object,System.IntPtr)
extern "C"  void MenuListItemSelected__ctor_m3265219191 (MenuListItemSelected_t3871161844 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Menu/MenuListItemSelected::Invoke(System.Int32)
extern "C"  void MenuListItemSelected_Invoke_m3223667935 (MenuListItemSelected_t3871161844 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MenuListItemSelected_Invoke_m3223667935((MenuListItemSelected_t3871161844 *)__this->get_prev_9(), ___index0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___index0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___index0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Menu/MenuListItemSelected::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MenuListItemSelected_BeginInvoke_m3125306220 (MenuListItemSelected_t3871161844 * __this, int32_t ___index0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuListItemSelected_BeginInvoke_m3125306220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Menu/MenuListItemSelected::EndInvoke(System.IAsyncResult)
extern "C"  void MenuListItemSelected_EndInvoke_m458364975 (MenuListItemSelected_t3871161844 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PathfindingImpl::.ctor(System.Int32,System.Int32,PathfindingImpl/IsPassable)
extern "C"  void PathfindingImpl__ctor_m2501677692 (PathfindingImpl_t3995530112 * __this, int32_t ___mapWidth0, int32_t ___mapHeight1, IsPassable_t2551518848 * ___unpassabilityFunc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PathfindingImpl__ctor_m2501677692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___mapWidth0;
		__this->set_m_Width_0(L_0);
		int32_t L_1 = ___mapHeight1;
		__this->set_m_Height_1(L_1);
		int32_t L_2 = ___mapWidth0;
		int32_t L_3 = ___mapHeight1;
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		MapNodeU5B0___U2C0___U5D_t1392113642* L_4 = (MapNodeU5B0___U2C0___U5D_t1392113642*)GenArrayNew(MapNodeU5B0___U2C0___U5D_t1392113642_il2cpp_TypeInfo_var, L_5);
		__this->set_m_Map_3((MapNodeU5B0___U2C0___U5D_t1392113642*)L_4);
		IsPassable_t2551518848 * L_6 = ___unpassabilityFunc2;
		__this->set_m_Unpassable_2(L_6);
		PathfindingImpl_InitMap_m3411888308(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PathfindingImpl::InitMap()
extern "C"  void PathfindingImpl_InitMap_m3411888308 (PathfindingImpl_t3995530112 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PathfindingImpl_InitMap_m3411888308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0054;
	}

IL_000e:
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_0 = __this->get_m_Map_3();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		MapNode_t4119234616 * L_3 = (MapNode_t4119234616 *)il2cpp_codegen_object_new(MapNode_t4119234616_il2cpp_TypeInfo_var);
		MapNode__ctor_m1610211582(L_3, /*hidden argument*/NULL);
		((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_0)->SetAtUnchecked(L_1, L_2, L_3);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_4 = __this->get_m_Map_3();
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		MapNode_t4119234616 * L_7 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_4)->GetAtUnchecked(L_5, L_6);
		coord_t2591101271 * L_8 = L_7->get_address_of_pos_3();
		int32_t L_9 = V_0;
		L_8->set_x_0(L_9);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_10 = __this->get_m_Map_3();
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		MapNode_t4119234616 * L_13 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_10)->GetAtUnchecked(L_11, L_12);
		coord_t2591101271 * L_14 = L_13->get_address_of_pos_3();
		int32_t L_15 = V_1;
		L_14->set_y_1(L_15);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = __this->get_m_Height_1();
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = __this->get_m_Width_0();
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PathfindingImpl::ResetMap()
extern "C"  void PathfindingImpl_ResetMap_m1788461447 (PathfindingImpl_t3995530112 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_00df;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00cf;
	}

IL_000e:
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_0 = __this->get_m_Map_3();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		MapNode_t4119234616 * L_3 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_0)->GetAtUnchecked(L_1, L_2);
		IsPassable_t2551518848 * L_4 = __this->get_m_Unpassable_2();
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		bool L_7 = IsPassable_Invoke_m187163042(L_4, L_5, L_6, /*hidden argument*/NULL);
		L_3->set_passable_4((bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_8 = __this->get_m_Map_3();
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		MapNode_t4119234616 * L_11 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_8)->GetAtUnchecked(L_9, L_10);
		L_11->set_f_5(((int32_t)2147483647LL));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_12 = __this->get_m_Map_3();
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		MapNode_t4119234616 * L_15 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_12)->GetAtUnchecked(L_13, L_14);
		L_15->set_g_6(((int32_t)2147483647LL));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_16 = __this->get_m_Map_3();
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		MapNode_t4119234616 * L_19 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_16)->GetAtUnchecked(L_17, L_18);
		L_19->set_h_7(((int32_t)2147483647LL));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_20 = __this->get_m_Map_3();
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		MapNode_t4119234616 * L_23 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_20)->GetAtUnchecked(L_21, L_22);
		L_23->set_count_8(0);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_24 = __this->get_m_Map_3();
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		MapNode_t4119234616 * L_27 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_24)->GetAtUnchecked(L_25, L_26);
		coord_t2591101271 * L_28 = L_27->get_address_of_previous_9();
		L_28->set_x_0((-1));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_29 = __this->get_m_Map_3();
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		MapNode_t4119234616 * L_32 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_29)->GetAtUnchecked(L_30, L_31);
		coord_t2591101271 * L_33 = L_32->get_address_of_previous_9();
		L_33->set_y_1((-1));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_34 = __this->get_m_Map_3();
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		MapNode_t4119234616 * L_37 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_34)->GetAtUnchecked(L_35, L_36);
		L_37->set_closed_10((bool)0);
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_39 = V_1;
		int32_t L_40 = __this->get_m_Height_1();
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00df:
	{
		int32_t L_42 = V_0;
		int32_t L_43 = __this->get_m_Width_0();
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Int32 PathfindingImpl::Heuristic(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t PathfindingImpl_Heuristic_m3798890881 (PathfindingImpl_t3995530112 * __this, int32_t ___x0, int32_t ___y1, int32_t ___dest_x2, int32_t ___dest_y3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___dest_x2;
		int32_t L_1 = ___x0;
		int32_t L_2 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		int32_t L_3 = ___dest_y3;
		int32_t L_4 = ___y1;
		int32_t L_5 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)));
		return ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_5));
	}
}
// System.Boolean PathfindingImpl::IsAccessible(System.Int32,System.Int32)
extern "C"  bool PathfindingImpl_IsAccessible_m326040664 (PathfindingImpl_t3995530112 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___x0;
		int32_t L_2 = __this->get_m_Width_0();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		return (bool)0;
	}

IL_0015:
	{
		int32_t L_3 = ___y1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = ___y1;
		int32_t L_5 = __this->get_m_Height_1();
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_6 = __this->get_m_Map_3();
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		MapNode_t4119234616 * L_9 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_6)->GetAtUnchecked(L_7, L_8);
		bool L_10 = L_9->get_passable_4();
		return L_10;
	}
}
// System.Void PathfindingImpl::SetVals(Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,PathfindingImpl/coord,System.Int32,System.Int32)
extern "C"  void PathfindingImpl_SetVals_m3297992557 (PathfindingImpl_t3995530112 * __this, HeapPriorityQueue_1_t3878471094 * ___openQ0, int32_t ___x1, int32_t ___y2, int32_t ___g3, int32_t ___g_inc4, int32_t ___count5, coord_t2591101271  ___prev6, int32_t ___end_x7, int32_t ___end_y8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PathfindingImpl_SetVals_m3297992557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_0 = __this->get_m_Map_3();
		int32_t L_1 = ___x1;
		int32_t L_2 = ___y2;
		MapNode_t4119234616 * L_3 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_0)->GetAtUnchecked(L_1, L_2);
		bool L_4 = L_3->get_closed_10();
		if (L_4)
		{
			goto IL_0132;
		}
	}
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_5 = __this->get_m_Map_3();
		int32_t L_6 = ___x1;
		int32_t L_7 = ___y2;
		MapNode_t4119234616 * L_8 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_5)->GetAtUnchecked(L_6, L_7);
		int32_t L_9 = L_8->get_g_6();
		int32_t L_10 = ___g3;
		int32_t L_11 = ___g_inc4;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)))))
		{
			goto IL_0132;
		}
	}
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_12 = __this->get_m_Map_3();
		int32_t L_13 = ___x1;
		int32_t L_14 = ___y2;
		MapNode_t4119234616 * L_15 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_12)->GetAtUnchecked(L_13, L_14);
		int32_t L_16 = ___g3;
		int32_t L_17 = ___g_inc4;
		L_15->set_g_6(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_18 = __this->get_m_Map_3();
		int32_t L_19 = ___x1;
		int32_t L_20 = ___y2;
		MapNode_t4119234616 * L_21 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_18)->GetAtUnchecked(L_19, L_20);
		int32_t L_22 = ___x1;
		int32_t L_23 = ___y2;
		int32_t L_24 = ___end_x7;
		int32_t L_25 = ___end_y8;
		int32_t L_26 = PathfindingImpl_Heuristic_m3798890881(__this, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		L_21->set_h_7(L_26);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_27 = __this->get_m_Map_3();
		int32_t L_28 = ___x1;
		int32_t L_29 = ___y2;
		MapNode_t4119234616 * L_30 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_27)->GetAtUnchecked(L_28, L_29);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_31 = __this->get_m_Map_3();
		int32_t L_32 = ___x1;
		int32_t L_33 = ___y2;
		MapNode_t4119234616 * L_34 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_31)->GetAtUnchecked(L_32, L_33);
		int32_t L_35 = L_34->get_g_6();
		MapNodeU5B0___U2C0___U5D_t1392113642* L_36 = __this->get_m_Map_3();
		int32_t L_37 = ___x1;
		int32_t L_38 = ___y2;
		MapNode_t4119234616 * L_39 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_36)->GetAtUnchecked(L_37, L_38);
		int32_t L_40 = L_39->get_h_7();
		L_30->set_f_5(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_40)));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_41 = __this->get_m_Map_3();
		int32_t L_42 = ___x1;
		int32_t L_43 = ___y2;
		MapNode_t4119234616 * L_44 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_41)->GetAtUnchecked(L_42, L_43);
		int32_t L_45 = ___count5;
		L_44->set_count_8(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)));
		MapNodeU5B0___U2C0___U5D_t1392113642* L_46 = __this->get_m_Map_3();
		int32_t L_47 = ___x1;
		int32_t L_48 = ___y2;
		MapNode_t4119234616 * L_49 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_46)->GetAtUnchecked(L_47, L_48);
		coord_t2591101271  L_50 = ___prev6;
		L_49->set_previous_9(L_50);
		HeapPriorityQueue_1_t3878471094 * L_51 = ___openQ0;
		MapNodeU5B0___U2C0___U5D_t1392113642* L_52 = __this->get_m_Map_3();
		int32_t L_53 = ___x1;
		int32_t L_54 = ___y2;
		MapNode_t4119234616 * L_55 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_52)->GetAtUnchecked(L_53, L_54);
		bool L_56 = HeapPriorityQueue_1_Contains_m65278302(L_51, L_55, /*hidden argument*/HeapPriorityQueue_1_Contains_m65278302_RuntimeMethod_var);
		if (!L_56)
		{
			goto IL_010c;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_57 = ___openQ0;
		MapNodeU5B0___U2C0___U5D_t1392113642* L_58 = __this->get_m_Map_3();
		int32_t L_59 = ___x1;
		int32_t L_60 = ___y2;
		MapNode_t4119234616 * L_61 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_58)->GetAtUnchecked(L_59, L_60);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_62 = __this->get_m_Map_3();
		int32_t L_63 = ___x1;
		int32_t L_64 = ___y2;
		MapNode_t4119234616 * L_65 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_62)->GetAtUnchecked(L_63, L_64);
		int32_t L_66 = L_65->get_f_5();
		HeapPriorityQueue_1_UpdatePriority_m393398276(L_57, L_61, (((double)((double)L_66))), /*hidden argument*/HeapPriorityQueue_1_UpdatePriority_m393398276_RuntimeMethod_var);
		goto IL_0132;
	}

IL_010c:
	{
		HeapPriorityQueue_1_t3878471094 * L_67 = ___openQ0;
		MapNodeU5B0___U2C0___U5D_t1392113642* L_68 = __this->get_m_Map_3();
		int32_t L_69 = ___x1;
		int32_t L_70 = ___y2;
		MapNode_t4119234616 * L_71 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_68)->GetAtUnchecked(L_69, L_70);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_72 = __this->get_m_Map_3();
		int32_t L_73 = ___x1;
		int32_t L_74 = ___y2;
		MapNode_t4119234616 * L_75 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_72)->GetAtUnchecked(L_73, L_74);
		int32_t L_76 = L_75->get_f_5();
		HeapPriorityQueue_1_Enqueue_m3210081902(L_67, L_71, (((double)((double)L_76))), /*hidden argument*/HeapPriorityQueue_1_Enqueue_m3210081902_RuntimeMethod_var);
	}

IL_0132:
	{
		return;
	}
}
// System.Void PathfindingImpl::ProcessNode(Priority_Queue.HeapPriorityQueue`1<PathfindingImpl/MapNode>,PathfindingImpl/MapNode,System.Int32,System.Int32)
extern "C"  void PathfindingImpl_ProcessNode_m1871920543 (PathfindingImpl_t3995530112 * __this, HeapPriorityQueue_1_t3878471094 * ___openQ0, MapNode_t4119234616 * ___m1, int32_t ___end_x2, int32_t ___end_y3, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	{
		MapNode_t4119234616 * L_0 = ___m1;
		coord_t2591101271 * L_1 = L_0->get_address_of_pos_3();
		int32_t L_2 = L_1->get_x_0();
		MapNode_t4119234616 * L_3 = ___m1;
		coord_t2591101271 * L_4 = L_3->get_address_of_pos_3();
		int32_t L_5 = L_4->get_y_1();
		bool L_6 = PathfindingImpl_IsAccessible_m326040664(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MapNode_t4119234616 * L_7 = ___m1;
		coord_t2591101271 * L_8 = L_7->get_address_of_pos_3();
		int32_t L_9 = L_8->get_x_0();
		MapNode_t4119234616 * L_10 = ___m1;
		coord_t2591101271 * L_11 = L_10->get_address_of_pos_3();
		int32_t L_12 = L_11->get_y_1();
		bool L_13 = PathfindingImpl_IsAccessible_m326040664(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		MapNode_t4119234616 * L_14 = ___m1;
		coord_t2591101271 * L_15 = L_14->get_address_of_pos_3();
		int32_t L_16 = L_15->get_x_0();
		MapNode_t4119234616 * L_17 = ___m1;
		coord_t2591101271 * L_18 = L_17->get_address_of_pos_3();
		int32_t L_19 = L_18->get_y_1();
		bool L_20 = PathfindingImpl_IsAccessible_m326040664(__this, L_16, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_20;
		MapNode_t4119234616 * L_21 = ___m1;
		coord_t2591101271 * L_22 = L_21->get_address_of_pos_3();
		int32_t L_23 = L_22->get_x_0();
		MapNode_t4119234616 * L_24 = ___m1;
		coord_t2591101271 * L_25 = L_24->get_address_of_pos_3();
		int32_t L_26 = L_25->get_y_1();
		bool L_27 = PathfindingImpl_IsAccessible_m326040664(__this, L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_27;
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_00aa;
		}
	}
	{
		bool L_29 = V_0;
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		MapNode_t4119234616 * L_30 = ___m1;
		coord_t2591101271 * L_31 = L_30->get_address_of_pos_3();
		int32_t L_32 = L_31->get_x_0();
		MapNode_t4119234616 * L_33 = ___m1;
		coord_t2591101271 * L_34 = L_33->get_address_of_pos_3();
		int32_t L_35 = L_34->get_y_1();
		bool L_36 = PathfindingImpl_IsAccessible_m326040664(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)), /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_36));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B4_0 = 0;
	}

IL_00ab:
	{
		V_4 = (bool)G_B4_0;
		bool L_37 = V_2;
		if (!L_37)
		{
			goto IL_00db;
		}
	}
	{
		bool L_38 = V_1;
		if (!L_38)
		{
			goto IL_00db;
		}
	}
	{
		MapNode_t4119234616 * L_39 = ___m1;
		coord_t2591101271 * L_40 = L_39->get_address_of_pos_3();
		int32_t L_41 = L_40->get_x_0();
		MapNode_t4119234616 * L_42 = ___m1;
		coord_t2591101271 * L_43 = L_42->get_address_of_pos_3();
		int32_t L_44 = L_43->get_y_1();
		bool L_45 = PathfindingImpl_IsAccessible_m326040664(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1)), /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_45));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B8_0 = 0;
	}

IL_00dc:
	{
		V_5 = (bool)G_B8_0;
		bool L_46 = V_3;
		if (!L_46)
		{
			goto IL_010c;
		}
	}
	{
		bool L_47 = V_0;
		if (!L_47)
		{
			goto IL_010c;
		}
	}
	{
		MapNode_t4119234616 * L_48 = ___m1;
		coord_t2591101271 * L_49 = L_48->get_address_of_pos_3();
		int32_t L_50 = L_49->get_x_0();
		MapNode_t4119234616 * L_51 = ___m1;
		coord_t2591101271 * L_52 = L_51->get_address_of_pos_3();
		int32_t L_53 = L_52->get_y_1();
		bool L_54 = PathfindingImpl_IsAccessible_m326040664(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1)), /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_54));
		goto IL_010d;
	}

IL_010c:
	{
		G_B12_0 = 0;
	}

IL_010d:
	{
		V_6 = (bool)G_B12_0;
		bool L_55 = V_3;
		if (!L_55)
		{
			goto IL_013d;
		}
	}
	{
		bool L_56 = V_1;
		if (!L_56)
		{
			goto IL_013d;
		}
	}
	{
		MapNode_t4119234616 * L_57 = ___m1;
		coord_t2591101271 * L_58 = L_57->get_address_of_pos_3();
		int32_t L_59 = L_58->get_x_0();
		MapNode_t4119234616 * L_60 = ___m1;
		coord_t2591101271 * L_61 = L_60->get_address_of_pos_3();
		int32_t L_62 = L_61->get_y_1();
		bool L_63 = PathfindingImpl_IsAccessible_m326040664(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)1)), /*hidden argument*/NULL);
		G_B16_0 = ((int32_t)(L_63));
		goto IL_013e;
	}

IL_013d:
	{
		G_B16_0 = 0;
	}

IL_013e:
	{
		V_7 = (bool)G_B16_0;
		bool L_64 = V_0;
		if (!L_64)
		{
			goto IL_017c;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_65 = ___openQ0;
		MapNode_t4119234616 * L_66 = ___m1;
		coord_t2591101271 * L_67 = L_66->get_address_of_pos_3();
		int32_t L_68 = L_67->get_x_0();
		MapNode_t4119234616 * L_69 = ___m1;
		coord_t2591101271 * L_70 = L_69->get_address_of_pos_3();
		int32_t L_71 = L_70->get_y_1();
		MapNode_t4119234616 * L_72 = ___m1;
		int32_t L_73 = L_72->get_g_6();
		MapNode_t4119234616 * L_74 = ___m1;
		int32_t L_75 = L_74->get_count_8();
		MapNode_t4119234616 * L_76 = ___m1;
		coord_t2591101271  L_77 = L_76->get_pos_3();
		int32_t L_78 = ___end_x2;
		int32_t L_79 = ___end_y3;
		PathfindingImpl_SetVals_m3297992557(__this, L_65, ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)), L_71, L_73, ((int32_t)10), L_75, L_77, L_78, L_79, /*hidden argument*/NULL);
	}

IL_017c:
	{
		bool L_80 = V_1;
		if (!L_80)
		{
			goto IL_01b8;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_81 = ___openQ0;
		MapNode_t4119234616 * L_82 = ___m1;
		coord_t2591101271 * L_83 = L_82->get_address_of_pos_3();
		int32_t L_84 = L_83->get_x_0();
		MapNode_t4119234616 * L_85 = ___m1;
		coord_t2591101271 * L_86 = L_85->get_address_of_pos_3();
		int32_t L_87 = L_86->get_y_1();
		MapNode_t4119234616 * L_88 = ___m1;
		int32_t L_89 = L_88->get_g_6();
		MapNode_t4119234616 * L_90 = ___m1;
		int32_t L_91 = L_90->get_count_8();
		MapNode_t4119234616 * L_92 = ___m1;
		coord_t2591101271  L_93 = L_92->get_pos_3();
		int32_t L_94 = ___end_x2;
		int32_t L_95 = ___end_y3;
		PathfindingImpl_SetVals_m3297992557(__this, L_81, ((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)1)), L_87, L_89, ((int32_t)10), L_91, L_93, L_94, L_95, /*hidden argument*/NULL);
	}

IL_01b8:
	{
		bool L_96 = V_2;
		if (!L_96)
		{
			goto IL_01f4;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_97 = ___openQ0;
		MapNode_t4119234616 * L_98 = ___m1;
		coord_t2591101271 * L_99 = L_98->get_address_of_pos_3();
		int32_t L_100 = L_99->get_x_0();
		MapNode_t4119234616 * L_101 = ___m1;
		coord_t2591101271 * L_102 = L_101->get_address_of_pos_3();
		int32_t L_103 = L_102->get_y_1();
		MapNode_t4119234616 * L_104 = ___m1;
		int32_t L_105 = L_104->get_g_6();
		MapNode_t4119234616 * L_106 = ___m1;
		int32_t L_107 = L_106->get_count_8();
		MapNode_t4119234616 * L_108 = ___m1;
		coord_t2591101271  L_109 = L_108->get_pos_3();
		int32_t L_110 = ___end_x2;
		int32_t L_111 = ___end_y3;
		PathfindingImpl_SetVals_m3297992557(__this, L_97, L_100, ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1)), L_105, ((int32_t)10), L_107, L_109, L_110, L_111, /*hidden argument*/NULL);
	}

IL_01f4:
	{
		bool L_112 = V_3;
		if (!L_112)
		{
			goto IL_0230;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_113 = ___openQ0;
		MapNode_t4119234616 * L_114 = ___m1;
		coord_t2591101271 * L_115 = L_114->get_address_of_pos_3();
		int32_t L_116 = L_115->get_x_0();
		MapNode_t4119234616 * L_117 = ___m1;
		coord_t2591101271 * L_118 = L_117->get_address_of_pos_3();
		int32_t L_119 = L_118->get_y_1();
		MapNode_t4119234616 * L_120 = ___m1;
		int32_t L_121 = L_120->get_g_6();
		MapNode_t4119234616 * L_122 = ___m1;
		int32_t L_123 = L_122->get_count_8();
		MapNode_t4119234616 * L_124 = ___m1;
		coord_t2591101271  L_125 = L_124->get_pos_3();
		int32_t L_126 = ___end_x2;
		int32_t L_127 = ___end_y3;
		PathfindingImpl_SetVals_m3297992557(__this, L_113, L_116, ((int32_t)il2cpp_codegen_subtract((int32_t)L_119, (int32_t)1)), L_121, ((int32_t)10), L_123, L_125, L_126, L_127, /*hidden argument*/NULL);
	}

IL_0230:
	{
		bool L_128 = V_4;
		if (!L_128)
		{
			goto IL_026f;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_129 = ___openQ0;
		MapNode_t4119234616 * L_130 = ___m1;
		coord_t2591101271 * L_131 = L_130->get_address_of_pos_3();
		int32_t L_132 = L_131->get_x_0();
		MapNode_t4119234616 * L_133 = ___m1;
		coord_t2591101271 * L_134 = L_133->get_address_of_pos_3();
		int32_t L_135 = L_134->get_y_1();
		MapNode_t4119234616 * L_136 = ___m1;
		int32_t L_137 = L_136->get_g_6();
		MapNode_t4119234616 * L_138 = ___m1;
		int32_t L_139 = L_138->get_count_8();
		MapNode_t4119234616 * L_140 = ___m1;
		coord_t2591101271  L_141 = L_140->get_pos_3();
		int32_t L_142 = ___end_x2;
		int32_t L_143 = ___end_y3;
		PathfindingImpl_SetVals_m3297992557(__this, L_129, ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1)), L_137, ((int32_t)14), L_139, L_141, L_142, L_143, /*hidden argument*/NULL);
	}

IL_026f:
	{
		bool L_144 = V_5;
		if (!L_144)
		{
			goto IL_02ae;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_145 = ___openQ0;
		MapNode_t4119234616 * L_146 = ___m1;
		coord_t2591101271 * L_147 = L_146->get_address_of_pos_3();
		int32_t L_148 = L_147->get_x_0();
		MapNode_t4119234616 * L_149 = ___m1;
		coord_t2591101271 * L_150 = L_149->get_address_of_pos_3();
		int32_t L_151 = L_150->get_y_1();
		MapNode_t4119234616 * L_152 = ___m1;
		int32_t L_153 = L_152->get_g_6();
		MapNode_t4119234616 * L_154 = ___m1;
		int32_t L_155 = L_154->get_count_8();
		MapNode_t4119234616 * L_156 = ___m1;
		coord_t2591101271  L_157 = L_156->get_pos_3();
		int32_t L_158 = ___end_x2;
		int32_t L_159 = ___end_y3;
		PathfindingImpl_SetVals_m3297992557(__this, L_145, ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1)), L_153, ((int32_t)14), L_155, L_157, L_158, L_159, /*hidden argument*/NULL);
	}

IL_02ae:
	{
		bool L_160 = V_6;
		if (!L_160)
		{
			goto IL_02ed;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_161 = ___openQ0;
		MapNode_t4119234616 * L_162 = ___m1;
		coord_t2591101271 * L_163 = L_162->get_address_of_pos_3();
		int32_t L_164 = L_163->get_x_0();
		MapNode_t4119234616 * L_165 = ___m1;
		coord_t2591101271 * L_166 = L_165->get_address_of_pos_3();
		int32_t L_167 = L_166->get_y_1();
		MapNode_t4119234616 * L_168 = ___m1;
		int32_t L_169 = L_168->get_g_6();
		MapNode_t4119234616 * L_170 = ___m1;
		int32_t L_171 = L_170->get_count_8();
		MapNode_t4119234616 * L_172 = ___m1;
		coord_t2591101271  L_173 = L_172->get_pos_3();
		int32_t L_174 = ___end_x2;
		int32_t L_175 = ___end_y3;
		PathfindingImpl_SetVals_m3297992557(__this, L_161, ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)1)), L_169, ((int32_t)14), L_171, L_173, L_174, L_175, /*hidden argument*/NULL);
	}

IL_02ed:
	{
		bool L_176 = V_7;
		if (!L_176)
		{
			goto IL_032c;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_177 = ___openQ0;
		MapNode_t4119234616 * L_178 = ___m1;
		coord_t2591101271 * L_179 = L_178->get_address_of_pos_3();
		int32_t L_180 = L_179->get_x_0();
		MapNode_t4119234616 * L_181 = ___m1;
		coord_t2591101271 * L_182 = L_181->get_address_of_pos_3();
		int32_t L_183 = L_182->get_y_1();
		MapNode_t4119234616 * L_184 = ___m1;
		int32_t L_185 = L_184->get_g_6();
		MapNode_t4119234616 * L_186 = ___m1;
		int32_t L_187 = L_186->get_count_8();
		MapNode_t4119234616 * L_188 = ___m1;
		coord_t2591101271  L_189 = L_188->get_pos_3();
		int32_t L_190 = ___end_x2;
		int32_t L_191 = ___end_y3;
		PathfindingImpl_SetVals_m3297992557(__this, L_177, ((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_183, (int32_t)1)), L_185, ((int32_t)14), L_187, L_189, L_190, L_191, /*hidden argument*/NULL);
	}

IL_032c:
	{
		return;
	}
}
// UnityEngine.Vector2[] PathfindingImpl::FindPath(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Vector2U5BU5D_t1457185986* PathfindingImpl_FindPath_m774054529 (PathfindingImpl_t3995530112 * __this, int32_t ___start_x0, int32_t ___start_y1, int32_t ___end_x2, int32_t ___end_y3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PathfindingImpl_FindPath_m774054529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HeapPriorityQueue_1_t3878471094 * V_0 = NULL;
	bool V_1 = false;
	MapNode_t4119234616 * V_2 = NULL;
	Vector2U5BU5D_t1457185986* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	MapNode_t4119234616 * V_7 = NULL;
	{
		int32_t L_0 = ___start_x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___start_x0;
		int32_t L_2 = __this->get_m_Width_0();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}

IL_0015:
	{
		int32_t L_3 = ___start_y1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = ___start_y1;
		int32_t L_5 = __this->get_m_Height_1();
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}

IL_002a:
	{
		int32_t L_6 = ___start_x0;
		int32_t L_7 = ___end_x2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_8 = ___start_y1;
		int32_t L_9 = ___end_y3;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003b;
		}
	}
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}

IL_003b:
	{
		PathfindingImpl_ResetMap_m1788461447(__this, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_m_Height_1();
		int32_t L_11 = __this->get_m_Width_0();
		HeapPriorityQueue_1_t3878471094 * L_12 = (HeapPriorityQueue_1_t3878471094 *)il2cpp_codegen_object_new(HeapPriorityQueue_1_t3878471094_il2cpp_TypeInfo_var);
		HeapPriorityQueue_1__ctor_m1012109098(L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/HeapPriorityQueue_1__ctor_m1012109098_RuntimeMethod_var);
		V_0 = L_12;
		V_1 = (bool)0;
		MapNodeU5B0___U2C0___U5D_t1392113642* L_13 = __this->get_m_Map_3();
		int32_t L_14 = ___start_x0;
		int32_t L_15 = ___start_y1;
		MapNode_t4119234616 * L_16 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_13)->GetAtUnchecked(L_14, L_15);
		bool L_17 = L_16->get_passable_4();
		if (!L_17)
		{
			goto IL_0085;
		}
	}
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_18 = __this->get_m_Map_3();
		int32_t L_19 = ___end_x2;
		int32_t L_20 = ___end_y3;
		MapNode_t4119234616 * L_21 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_18)->GetAtUnchecked(L_19, L_20);
		bool L_22 = L_21->get_passable_4();
		if (L_22)
		{
			goto IL_0087;
		}
	}

IL_0085:
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}

IL_0087:
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_23 = __this->get_m_Map_3();
		int32_t L_24 = ___start_x0;
		int32_t L_25 = ___start_y1;
		MapNode_t4119234616 * L_26 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_23)->GetAtUnchecked(L_24, L_25);
		L_26->set_g_6(0);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_27 = __this->get_m_Map_3();
		int32_t L_28 = ___start_x0;
		int32_t L_29 = ___start_y1;
		MapNode_t4119234616 * L_30 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_27)->GetAtUnchecked(L_28, L_29);
		L_30->set_count_8(0);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_31 = __this->get_m_Map_3();
		int32_t L_32 = ___start_x0;
		int32_t L_33 = ___start_y1;
		MapNode_t4119234616 * L_34 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_31)->GetAtUnchecked(L_32, L_33);
		int32_t L_35 = ___start_x0;
		int32_t L_36 = ___start_y1;
		int32_t L_37 = ___end_x2;
		int32_t L_38 = ___end_y3;
		int32_t L_39 = PathfindingImpl_Heuristic_m3798890881(__this, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		L_34->set_h_7(L_39);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_40 = __this->get_m_Map_3();
		int32_t L_41 = ___start_x0;
		int32_t L_42 = ___start_y1;
		MapNode_t4119234616 * L_43 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_40)->GetAtUnchecked(L_41, L_42);
		MapNodeU5B0___U2C0___U5D_t1392113642* L_44 = __this->get_m_Map_3();
		int32_t L_45 = ___start_x0;
		int32_t L_46 = ___start_y1;
		MapNode_t4119234616 * L_47 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_44)->GetAtUnchecked(L_45, L_46);
		int32_t L_48 = L_47->get_h_7();
		L_43->set_f_5(L_48);
		HeapPriorityQueue_1_t3878471094 * L_49 = V_0;
		MapNodeU5B0___U2C0___U5D_t1392113642* L_50 = __this->get_m_Map_3();
		int32_t L_51 = ___start_x0;
		int32_t L_52 = ___start_y1;
		MapNode_t4119234616 * L_53 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_50)->GetAtUnchecked(L_51, L_52);
		HeapPriorityQueue_1_Enqueue_m3210081902(L_49, L_53, (0.0), /*hidden argument*/HeapPriorityQueue_1_Enqueue_m3210081902_RuntimeMethod_var);
	}

IL_010a:
	{
		HeapPriorityQueue_1_t3878471094 * L_54 = V_0;
		MapNode_t4119234616 * L_55 = HeapPriorityQueue_1_Dequeue_m1446625078(L_54, /*hidden argument*/HeapPriorityQueue_1_Dequeue_m1446625078_RuntimeMethod_var);
		V_2 = L_55;
		MapNode_t4119234616 * L_56 = V_2;
		L_56->set_closed_10((bool)1);
		MapNode_t4119234616 * L_57 = V_2;
		coord_t2591101271 * L_58 = L_57->get_address_of_pos_3();
		int32_t L_59 = L_58->get_x_0();
		int32_t L_60 = ___end_x2;
		if ((!(((uint32_t)L_59) == ((uint32_t)L_60))))
		{
			goto IL_0142;
		}
	}
	{
		MapNode_t4119234616 * L_61 = V_2;
		coord_t2591101271 * L_62 = L_61->get_address_of_pos_3();
		int32_t L_63 = L_62->get_y_1();
		int32_t L_64 = ___end_y3;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_0142;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_014d;
	}

IL_0142:
	{
		HeapPriorityQueue_1_t3878471094 * L_65 = V_0;
		MapNode_t4119234616 * L_66 = V_2;
		int32_t L_67 = ___end_x2;
		int32_t L_68 = ___end_y3;
		PathfindingImpl_ProcessNode_m1871920543(__this, L_65, L_66, L_67, L_68, /*hidden argument*/NULL);
	}

IL_014d:
	{
		bool L_69 = V_1;
		if (L_69)
		{
			goto IL_015f;
		}
	}
	{
		HeapPriorityQueue_1_t3878471094 * L_70 = V_0;
		int32_t L_71 = HeapPriorityQueue_1_get_Count_m1904799400(L_70, /*hidden argument*/HeapPriorityQueue_1_get_Count_m1904799400_RuntimeMethod_var);
		if ((((int32_t)L_71) > ((int32_t)0)))
		{
			goto IL_010a;
		}
	}

IL_015f:
	{
		bool L_72 = V_1;
		if (!L_72)
		{
			goto IL_0212;
		}
	}
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_73 = __this->get_m_Map_3();
		int32_t L_74 = ___end_x2;
		int32_t L_75 = ___end_y3;
		MapNode_t4119234616 * L_76 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_73)->GetAtUnchecked(L_74, L_75);
		int32_t L_77 = L_76->get_count_8();
		V_3 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_77));
		int32_t L_78 = ___end_x2;
		V_4 = L_78;
		int32_t L_79 = ___end_y3;
		V_5 = L_79;
		MapNodeU5B0___U2C0___U5D_t1392113642* L_80 = __this->get_m_Map_3();
		int32_t L_81 = ___end_x2;
		int32_t L_82 = ___end_y3;
		MapNode_t4119234616 * L_83 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_80)->GetAtUnchecked(L_81, L_82);
		int32_t L_84 = L_83->get_count_8();
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)1));
		goto IL_0208;
	}

IL_01a1:
	{
		MapNodeU5B0___U2C0___U5D_t1392113642* L_85 = __this->get_m_Map_3();
		int32_t L_86 = V_4;
		int32_t L_87 = V_5;
		MapNode_t4119234616 * L_88 = ((MapNodeU5B0___U2C0___U5D_t1392113642*)(MapNodeU5B0___U2C0___U5D_t1392113642*)L_85)->GetAtUnchecked(L_86, L_87);
		V_7 = L_88;
		Vector2U5BU5D_t1457185986* L_89 = V_3;
		int32_t L_90 = V_6;
		MapNode_t4119234616 * L_91 = V_7;
		coord_t2591101271 * L_92 = L_91->get_address_of_pos_3();
		int32_t L_93 = L_92->get_x_0();
		((L_89)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_90)))->set_x_0((((float)((float)L_93))));
		Vector2U5BU5D_t1457185986* L_94 = V_3;
		int32_t L_95 = V_6;
		MapNode_t4119234616 * L_96 = V_7;
		coord_t2591101271 * L_97 = L_96->get_address_of_pos_3();
		int32_t L_98 = L_97->get_y_1();
		((L_94)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_95)))->set_y_1((((float)((float)L_98))));
		MapNode_t4119234616 * L_99 = V_7;
		coord_t2591101271 * L_100 = L_99->get_address_of_previous_9();
		int32_t L_101 = L_100->get_x_0();
		V_4 = L_101;
		MapNode_t4119234616 * L_102 = V_7;
		coord_t2591101271 * L_103 = L_102->get_address_of_previous_9();
		int32_t L_104 = L_103->get_y_1();
		V_5 = L_104;
		int32_t L_105 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)1));
	}

IL_0208:
	{
		int32_t L_106 = V_6;
		if ((((int32_t)L_106) >= ((int32_t)0)))
		{
			goto IL_01a1;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_107 = V_3;
		return L_107;
	}

IL_0212:
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  bool DelegatePInvokeWrapper_IsPassable_t2551518848 (IsPassable_t2551518848 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___x0, ___y1);

	return static_cast<bool>(returnValue);
}
// System.Void PathfindingImpl/IsPassable::.ctor(System.Object,System.IntPtr)
extern "C"  void IsPassable__ctor_m3154592616 (IsPassable_t2551518848 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean PathfindingImpl/IsPassable::Invoke(System.Int32,System.Int32)
extern "C"  bool IsPassable_Invoke_m187163042 (IsPassable_t2551518848 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		IsPassable_Invoke_m187163042((IsPassable_t2551518848 *)__this->get_prev_9(), ___x0, ___y1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___x0, ___y1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___x0, ___y1);
					else
						result = GenericVirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___x0, ___y1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___x0, ___y1);
					else
						result = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___x0, ___y1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___x0, ___y1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult PathfindingImpl/IsPassable::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* IsPassable_BeginInvoke_m1057281090 (IsPassable_t2551518848 * __this, int32_t ___x0, int32_t ___y1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IsPassable_BeginInvoke_m1057281090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean PathfindingImpl/IsPassable::EndInvoke(System.IAsyncResult)
extern "C"  bool IsPassable_EndInvoke_m3623404290 (IsPassable_t2551518848 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PathfindingImpl/MapNode::.ctor()
extern "C"  void MapNode__ctor_m1610211582 (MapNode_t4119234616 * __this, const RuntimeMethod* method)
{
	{
		PriorityQueueNode__ctor_m1266653607(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PathFindTest::.ctor()
extern "C"  void PathFindTest__ctor_m2408231166 (PathFindTest_t911201017 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (318.8f), (321.5f), /*hidden argument*/NULL);
		__this->set_startpos_6(L_0);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (491.4f), (40.2f), /*hidden argument*/NULL);
		__this->set_endpos_7(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PathFindTest::Start()
extern "C"  void PathFindTest_Start_m1935324790 (PathFindTest_t911201017 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PathFindTest::Update()
extern "C"  void PathFindTest_Update_m1594519154 (PathFindTest_t911201017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PathFindTest_Update_m1594519154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TileMapScript_t3658915240 * V_0 = NULL;
	bool V_1 = false;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Color_t2555686324  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_017a;
		}
	}
	{
		float L_1 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_lastRun_3();
		if ((!(((float)L_1) > ((float)((float)il2cpp_codegen_add((float)L_2, (float)(0.25f)))))))
		{
			goto IL_017a;
		}
	}
	{
		TileMapScript_t3658915240 * L_3 = Component_GetComponent_TisTileMapScript_t3658915240_m3027566996(__this, /*hidden argument*/Component_GetComponent_TisTileMapScript_t3658915240_m3027566996_RuntimeMethod_var);
		V_0 = L_3;
		Vector2_t2156229523 * L_4 = __this->get_address_of_endpos_7();
		float L_5 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (640.0f), /*hidden argument*/NULL);
		L_4->set_x_0(L_5);
		Vector2_t2156229523 * L_6 = __this->get_address_of_endpos_7();
		float L_7 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (640.0f), /*hidden argument*/NULL);
		L_6->set_y_1(L_7);
		Vector2_t2156229523 * L_8 = __this->get_address_of_startpos_6();
		float L_9 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (640.0f), /*hidden argument*/NULL);
		L_8->set_x_0(L_9);
		Vector2_t2156229523 * L_10 = __this->get_address_of_startpos_6();
		float L_11 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (640.0f), /*hidden argument*/NULL);
		L_10->set_y_1(L_11);
		TileMapScript_t3658915240 * L_12 = V_0;
		Vector2_t2156229523  L_13 = __this->get_startpos_6();
		Vector2_t2156229523  L_14 = __this->get_endpos_7();
		Vector2U5BU5D_t1457185986* L_15 = TileMapScript_GetPath_m1857384162(L_12, L_13, L_14, /*hidden argument*/NULL);
		__this->set_coords_2(L_15);
		StringU5BU5D_t1281789340* L_16 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
		ArrayElementTypeCheck (L_16, _stringLiteral607137884);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral607137884);
		StringU5BU5D_t1281789340* L_17 = L_16;
		Vector2_t2156229523 * L_18 = __this->get_address_of_startpos_6();
		String_t* L_19 = Vector2_ToString_m1205609053(L_18, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t1281789340* L_20 = L_17;
		ArrayElementTypeCheck (L_20, _stringLiteral1086829731);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1086829731);
		StringU5BU5D_t1281789340* L_21 = L_20;
		Vector2_t2156229523 * L_22 = __this->get_address_of_endpos_7();
		String_t* L_23 = Vector2_ToString_m1205609053(L_22, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t1281789340* L_24 = L_21;
		ArrayElementTypeCheck (L_24, _stringLiteral3615405208);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3615405208);
		StringU5BU5D_t1281789340* L_25 = L_24;
		Vector2U5BU5D_t1457185986* L_26 = __this->get_coords_2();
		V_1 = (bool)((((RuntimeObject*)(Vector2U5BU5D_t1457185986*)L_26) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		String_t* L_27 = Boolean_ToString_m2664721875((&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m1809518182(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		float L_29 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastRun_3(L_29);
		Vector2U5BU5D_t1457185986* L_30 = __this->get_coords_2();
		if (L_30)
		{
			goto IL_013b;
		}
	}
	{
		float L_31 = __this->get_lastRun_3();
		__this->set_lastRun_3(((float)il2cpp_codegen_subtract((float)L_31, (float)(0.1f))));
	}

IL_013b:
	{
		int32_t L_32 = __this->get_x_4();
		__this->set_x_4(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)));
		int32_t L_33 = __this->get_x_4();
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)9))))
		{
			goto IL_017a;
		}
	}
	{
		__this->set_x_4(0);
		int32_t L_34 = __this->get_y_5();
		__this->set_y_5(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
		int32_t L_35 = __this->get_y_5();
		__this->set_y_5(((int32_t)((int32_t)L_35%(int32_t)((int32_t)10))));
	}

IL_017a:
	{
		Vector2_t2156229523  L_36 = __this->get_startpos_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_37 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		Vector2_t2156229523  L_38 = __this->get_endpos_7();
		Vector3_t3722313464  L_39 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		Color_t2555686324  L_40 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_37, L_39, L_40, /*hidden argument*/NULL);
		Vector2U5BU5D_t1457185986* L_41 = __this->get_coords_2();
		if (!L_41)
		{
			goto IL_0267;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t3722313464 ));
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t3722313464 ));
		Vector2_t2156229523  L_42 = __this->get_startpos_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_43 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		Color_t2555686324  L_44 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_44;
		V_5 = 0;
		goto IL_0254;
	}

IL_01d0:
	{
		Vector2U5BU5D_t1457185986* L_45 = __this->get_coords_2();
		int32_t L_46 = V_5;
		float L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->get_x_0();
		(&V_2)->set_x_0(L_47);
		Vector2U5BU5D_t1457185986* L_48 = __this->get_coords_2();
		int32_t L_49 = V_5;
		float L_50 = ((L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_49)))->get_y_1();
		(&V_2)->set_y_1(L_50);
		Vector3_t3722313464  L_51 = V_2;
		Vector3_t3722313464  L_52 = V_3;
		Color_t2555686324  L_53 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_51, L_52, L_53, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = V_2;
		V_3 = L_54;
		Color_t2555686324  L_55 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_56 = V_4;
		bool L_57 = Color_op_Equality_m1112359053(NULL /*static, unused*/, L_55, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_022a;
		}
	}
	{
		Color_t2555686324  L_58 = Color_get_blue_m3190273327(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_58;
		goto IL_024e;
	}

IL_022a:
	{
		Color_t2555686324  L_59 = Color_get_blue_m3190273327(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_60 = V_4;
		bool L_61 = Color_op_Equality_m1112359053(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0247;
		}
	}
	{
		Color_t2555686324  L_62 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_62;
		goto IL_024e;
	}

IL_0247:
	{
		Color_t2555686324  L_63 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_63;
	}

IL_024e:
	{
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0254:
	{
		int32_t L_65 = V_5;
		Vector2U5BU5D_t1457185986* L_66 = __this->get_coords_2();
		int32_t L_67 = Array_GetUpperBound_m4018715963((RuntimeArray *)(RuntimeArray *)L_66, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_65) <= ((int32_t)L_67)))
		{
			goto IL_01d0;
		}
	}

IL_0267:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Priority_Queue.PriorityQueueNode::.ctor()
extern "C"  void PriorityQueueNode__ctor_m1266653607 (PriorityQueueNode_t2831873642 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double Priority_Queue.PriorityQueueNode::get_Priority()
extern "C"  double PriorityQueueNode_get_Priority_m2098689831 (PriorityQueueNode_t2831873642 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CPriorityU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Priority_Queue.PriorityQueueNode::set_Priority(System.Double)
extern "C"  void PriorityQueueNode_set_Priority_m116938520 (PriorityQueueNode_t2831873642 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CPriorityU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int64 Priority_Queue.PriorityQueueNode::get_InsertionIndex()
extern "C"  int64_t PriorityQueueNode_get_InsertionIndex_m147378084 (PriorityQueueNode_t2831873642 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CInsertionIndexU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Priority_Queue.PriorityQueueNode::set_InsertionIndex(System.Int64)
extern "C"  void PriorityQueueNode_set_InsertionIndex_m1376767080 (PriorityQueueNode_t2831873642 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CInsertionIndexU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Priority_Queue.PriorityQueueNode::get_QueueIndex()
extern "C"  int32_t PriorityQueueNode_get_QueueIndex_m4173798125 (PriorityQueueNode_t2831873642 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CQueueIndexU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Priority_Queue.PriorityQueueNode::set_QueueIndex(System.Int32)
extern "C"  void PriorityQueueNode_set_QueueIndex_m1513352611 (PriorityQueueNode_t2831873642 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CQueueIndexU3Ek__BackingField_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileMapScript::.ctor()
extern "C"  void TileMapScript__ctor_m169766251 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMapScript__ctor_m169766251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_Squares_X_3(((int32_t)10));
		__this->set_Squares_Y_4(((int32_t)10));
		__this->set_Square_Size_5(((int32_t)64));
		__this->set_LevelData_9(_stringLiteral2344959464);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2[] TileMapScript::GetPathGrid(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Vector2U5BU5D_t1457185986* TileMapScript_GetPathGrid_m3441764409 (TileMapScript_t3658915240 * __this, int32_t ___start_x0, int32_t ___start_y1, int32_t ___end_x2, int32_t ___end_y3, const RuntimeMethod* method)
{
	{
		PathfindingImpl_t3995530112 * L_0 = __this->get_pathfinder_10();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}

IL_000d:
	{
		PathfindingImpl_t3995530112 * L_1 = __this->get_pathfinder_10();
		int32_t L_2 = ___start_x0;
		int32_t L_3 = ___start_y1;
		int32_t L_4 = ___end_x2;
		int32_t L_5 = ___end_y3;
		Vector2U5BU5D_t1457185986* L_6 = PathfindingImpl_FindPath_m774054529(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2[] TileMapScript::GetPath(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2U5BU5D_t1457185986* TileMapScript_GetPath_m1857384162 (TileMapScript_t3658915240 * __this, Vector2_t2156229523  ___start0, Vector2_t2156229523  ___end1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMapScript_GetPath_m1857384162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2U5BU5D_t1457185986* V_4 = NULL;
	Vector2U5BU5D_t1457185986* V_5 = NULL;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		float L_0 = (&___start0)->get_x_0();
		int32_t L_1 = __this->get_Square_Size_5();
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)L_0)))/(int32_t)L_1));
		float L_2 = (&___start0)->get_y_1();
		int32_t L_3 = __this->get_Square_Size_5();
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)L_2)))/(int32_t)L_3));
		float L_4 = (&___end1)->get_x_0();
		int32_t L_5 = __this->get_Square_Size_5();
		V_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)L_4)))/(int32_t)L_5));
		float L_6 = (&___end1)->get_y_1();
		int32_t L_7 = __this->get_Square_Size_5();
		V_3 = ((int32_t)((int32_t)(((int32_t)((int32_t)L_6)))/(int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		bool L_14 = TileMapScript_CollideAtGrid_m2855697938(__this, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}

IL_005d:
	{
		V_4 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)1));
		Vector2U5BU5D_t1457185986* L_15 = V_4;
		Vector2_t2156229523  L_16 = ___end1;
		*(Vector2_t2156229523 *)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_16;
		Vector2U5BU5D_t1457185986* L_17 = V_4;
		return L_17;
	}

IL_0076:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		int32_t L_21 = V_3;
		Vector2U5BU5D_t1457185986* L_22 = TileMapScript_GetPathGrid_m3441764409(__this, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		Vector2U5BU5D_t1457185986* L_23 = V_5;
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return (Vector2U5BU5D_t1457185986*)NULL;
	}

IL_008b:
	{
		Vector2_t2156229523  L_24 = ___start0;
		V_6 = L_24;
		Vector2_t2156229523 * L_25 = (&V_6);
		float L_26 = L_25->get_x_0();
		int32_t L_27 = __this->get_Square_Size_5();
		L_25->set_x_0((fmodf(L_26, (((float)((float)L_27))))));
		Vector2_t2156229523 * L_28 = (&V_6);
		float L_29 = L_28->get_y_1();
		int32_t L_30 = __this->get_Square_Size_5();
		L_28->set_y_1((fmodf(L_29, (((float)((float)L_30))))));
		Vector2_t2156229523  L_31 = ___end1;
		V_7 = L_31;
		Vector2_t2156229523 * L_32 = (&V_7);
		float L_33 = L_32->get_x_0();
		int32_t L_34 = __this->get_Square_Size_5();
		L_32->set_x_0((fmodf(L_33, (((float)((float)L_34))))));
		Vector2_t2156229523 * L_35 = (&V_7);
		float L_36 = L_35->get_y_1();
		int32_t L_37 = __this->get_Square_Size_5();
		L_35->set_y_1((fmodf(L_36, (((float)((float)L_37))))));
		Vector2_t2156229523  L_38 = V_7;
		Vector2_t2156229523  L_39 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_40 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		Vector2U5BU5D_t1457185986* L_41 = V_5;
		int32_t L_42 = Array_GetUpperBound_m4018715963((RuntimeArray *)(RuntimeArray *)L_41, 0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_43 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_40, (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1))))), /*hidden argument*/NULL);
		V_7 = L_43;
		V_8 = 0;
		goto IL_014e;
	}

IL_0108:
	{
		Vector2U5BU5D_t1457185986* L_44 = V_5;
		int32_t L_45 = V_8;
		Vector2U5BU5D_t1457185986* L_46 = V_5;
		int32_t L_47 = V_8;
		int32_t L_48 = __this->get_Square_Size_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_49 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, (*(Vector2_t2156229523 *)((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))), (((float)((float)L_48))), /*hidden argument*/NULL);
		Vector2_t2156229523  L_50 = V_6;
		Vector2_t2156229523  L_51 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		Vector2_t2156229523  L_52 = V_7;
		int32_t L_53 = V_8;
		Vector2_t2156229523  L_54 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_52, (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1))))), /*hidden argument*/NULL);
		Vector2_t2156229523  L_55 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_51, L_54, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45))) = L_55;
		int32_t L_56 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_014e:
	{
		int32_t L_57 = V_8;
		Vector2U5BU5D_t1457185986* L_58 = V_5;
		int32_t L_59 = Array_GetUpperBound_m4018715963((RuntimeArray *)(RuntimeArray *)L_58, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_0108;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_60 = V_5;
		Vector2U5BU5D_t1457185986* L_61 = V_5;
		int32_t L_62 = Array_GetUpperBound_m4018715963((RuntimeArray *)(RuntimeArray *)L_61, 0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_63 = ___end1;
		*(Vector2_t2156229523 *)((L_60)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62))) = L_63;
		Vector2U5BU5D_t1457185986* L_64 = V_5;
		return L_64;
	}
}
// System.Void TileMapScript::Start()
extern "C"  void TileMapScript_Start_m1608257877 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method)
{
	{
		TileMapScript_GenerateMap_m71397288(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TileMapScript::IsValidCharacter(System.Char)
extern "C"  bool TileMapScript_IsValidCharacter_m737925295 (TileMapScript_t3658915240 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	int32_t G_B6_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0027;
		}
	}

IL_0010:
	{
		Il2CppChar L_2 = ___c0;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0027;
		}
	}

IL_0020:
	{
		Il2CppChar L_4 = ___c0;
		G_B6_0 = ((((int32_t)L_4) == ((int32_t)((int32_t)88)))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B6_0 = 1;
	}

IL_0028:
	{
		return (bool)G_B6_0;
	}
}
// System.Int32 TileMapScript::CharacterToTileIndex(System.Char)
extern "C"  int32_t TileMapScript_CharacterToTileIndex_m2954433516 (TileMapScript_t3658915240 * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
	}

IL_0015:
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)70))))
		{
			goto IL_002d;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)10), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)65)))));
	}

IL_002d:
	{
		Il2CppChar L_6 = ___c0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0038;
		}
	}
	{
		return ((int32_t)16);
	}

IL_0038:
	{
		return 0;
	}
}
// System.Char TileMapScript::GetNextValidCharacter(System.String,System.Int32&)
extern "C"  Il2CppChar TileMapScript_GetNextValidCharacter_m1861620887 (TileMapScript_t3658915240 * __this, String_t* ___lvlDat0, int32_t* ___startIndex1, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___startIndex1;
		int32_t* L_1 = ___startIndex1;
		*((int32_t*)(L_0)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_1)), (int32_t)1));
		goto IL_0011;
	}

IL_000b:
	{
		int32_t* L_2 = ___startIndex1;
		int32_t* L_3 = ___startIndex1;
		*((int32_t*)(L_2)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_3)), (int32_t)1));
	}

IL_0011:
	{
		int32_t* L_4 = ___startIndex1;
		String_t* L_5 = ___lvlDat0;
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_4))) >= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_7 = ___lvlDat0;
		int32_t* L_8 = ___startIndex1;
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, (*((int32_t*)L_8)), /*hidden argument*/NULL);
		bool L_10 = TileMapScript_IsValidCharacter_m737925295(__this, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_000b;
		}
	}

IL_0031:
	{
		int32_t* L_11 = ___startIndex1;
		String_t* L_12 = ___lvlDat0;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_11))) < ((int32_t)L_13)))
		{
			goto IL_0041;
		}
	}
	{
		return ((int32_t)48);
	}

IL_0041:
	{
		String_t* L_14 = ___lvlDat0;
		int32_t* L_15 = ___startIndex1;
		Il2CppChar L_16 = String_get_Chars_m2986988803(L_14, (*((int32_t*)L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void TileMapScript::PopulateMapArray()
extern "C"  void TileMapScript_PopulateMapArray_m2552189221 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_00a9;
	}

IL_0009:
	{
		V_2 = 0;
		goto IL_0099;
	}

IL_0010:
	{
		MapSquareU5BU2CU5D_t3810414642* L_0 = __this->get_MapArray_2();
		int32_t L_1 = V_2;
		int32_t L_2 = V_1;
		MapSquare_t3390943120 * L_3 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_0)->GetAddressAtUnchecked(L_1, L_2);
		String_t* L_4 = __this->get_LevelData_9();
		Il2CppChar L_5 = TileMapScript_GetNextValidCharacter_m1861620887(__this, L_4, (&V_0), /*hidden argument*/NULL);
		L_3->set_RawData_0(L_5);
		MapSquareU5BU2CU5D_t3810414642* L_6 = __this->get_MapArray_2();
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		MapSquare_t3390943120 * L_9 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_6)->GetAddressAtUnchecked(L_7, L_8);
		MapSquareU5BU2CU5D_t3810414642* L_10 = __this->get_MapArray_2();
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		MapSquare_t3390943120 * L_13 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_10)->GetAddressAtUnchecked(L_11, L_12);
		Il2CppChar L_14 = L_13->get_RawData_0();
		int32_t L_15 = TileMapScript_CharacterToTileIndex_m2954433516(__this, L_14, /*hidden argument*/NULL);
		L_9->set_TextureNum_1(L_15);
		MapSquareU5BU2CU5D_t3810414642* L_16 = __this->get_MapArray_2();
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		MapSquare_t3390943120 * L_19 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_16)->GetAddressAtUnchecked(L_17, L_18);
		MapSquareU5BU2CU5D_t3810414642* L_20 = __this->get_MapArray_2();
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		MapSquare_t3390943120 * L_23 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_20)->GetAddressAtUnchecked(L_21, L_22);
		int32_t L_24 = L_23->get_TextureNum_1();
		L_19->set_IsWall_2((bool)((((int32_t)((int32_t)16)) == ((int32_t)L_24))? 1 : 0));
		MapSquareU5BU2CU5D_t3810414642* L_25 = __this->get_MapArray_2();
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		MapSquare_t3390943120 * L_28 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_25)->GetAddressAtUnchecked(L_26, L_27);
		L_28->set_HasCollider_3((bool)0);
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = __this->get_Squares_X_3();
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00a9:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->get_Squares_Y_4();
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
// System.Void TileMapScript::DoWallAutotiling()
extern "C"  void TileMapScript_DoWallAutotiling_m297977581 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_00f3;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00e3;
	}

IL_000e:
	{
		V_2 = 0;
		MapSquareU5BU2CU5D_t3810414642* L_0 = __this->get_MapArray_2();
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		MapSquare_t3390943120 * L_3 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_0)->GetAddressAtUnchecked(L_1, L_2);
		bool L_4 = L_3->get_IsWall_2();
		if (!L_4)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_Squares_Y_4();
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))))
		{
			goto IL_0052;
		}
	}
	{
		MapSquareU5BU2CU5D_t3810414642* L_7 = __this->get_MapArray_2();
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		MapSquare_t3390943120 * L_10 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_7)->GetAddressAtUnchecked(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		bool L_11 = L_10->get_IsWall_2();
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)4));
	}

IL_0052:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = __this->get_Squares_X_3();
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))))
		{
			goto IL_007d;
		}
	}
	{
		MapSquareU5BU2CU5D_t3810414642* L_15 = __this->get_MapArray_2();
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		MapSquare_t3390943120 * L_18 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_15)->GetAddressAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), L_17);
		bool L_19 = L_18->get_IsWall_2();
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2));
	}

IL_007d:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		MapSquareU5BU2CU5D_t3810414642* L_22 = __this->get_MapArray_2();
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		MapSquare_t3390943120 * L_25 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_22)->GetAddressAtUnchecked(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
		bool L_26 = L_25->get_IsWall_2();
		if (!L_26)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a1:
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		MapSquareU5BU2CU5D_t3810414642* L_29 = __this->get_MapArray_2();
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		MapSquare_t3390943120 * L_32 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_29)->GetAddressAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)), L_31);
		bool L_33 = L_32->get_IsWall_2();
		if (!L_33)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)8));
	}

IL_00c5:
	{
		MapSquareU5BU2CU5D_t3810414642* L_35 = __this->get_MapArray_2();
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		MapSquare_t3390943120 * L_38 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_35)->GetAddressAtUnchecked(L_36, L_37);
		MapSquare_t3390943120 * L_39 = L_38;
		int32_t L_40 = L_39->get_TextureNum_1();
		int32_t L_41 = V_2;
		L_39->set_TextureNum_1(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41)));
	}

IL_00df:
	{
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00e3:
	{
		int32_t L_43 = V_1;
		int32_t L_44 = __this->get_Squares_X_3();
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00f3:
	{
		int32_t L_46 = V_0;
		int32_t L_47 = __this->get_Squares_Y_4();
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean TileMapScript::CollideAtGrid(System.Int32,System.Int32)
extern "C"  bool TileMapScript_CollideAtGrid_m2855697938 (TileMapScript_t3658915240 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_Invert_Colliders_6();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		MapSquareU5BU2CU5D_t3810414642* L_1 = __this->get_MapArray_2();
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		MapSquare_t3390943120 * L_4 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_1)->GetAddressAtUnchecked(L_2, L_3);
		bool L_5 = L_4->get_IsWall_2();
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		MapSquareU5BU2CU5D_t3810414642* L_6 = __this->get_MapArray_2();
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		MapSquare_t3390943120 * L_9 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_6)->GetAddressAtUnchecked(L_7, L_8);
		bool L_10 = L_9->get_IsWall_2();
		return L_10;
	}
}
// System.Void TileMapScript::GenerateColliderAt(System.Int32,System.Int32)
extern "C"  void TileMapScript_GenerateColliderAt_m1712027877 (TileMapScript_t3658915240 * __this, int32_t ___xMin0, int32_t ___yMin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMapScript_GenerateColliderAt_m1712027877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	GameObject_t1113636619 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	BoxCollider2D_t3581341831 * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___xMin0;
		V_0 = L_0;
		int32_t L_1 = ___yMin1;
		V_1 = L_1;
		goto IL_000d;
	}

IL_0009:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_000d:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_Squares_X_3();
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___yMin1;
		bool L_7 = TileMapScript_CollideAtGrid_m2855697938(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		MapSquareU5BU2CU5D_t3810414642* L_8 = __this->get_MapArray_2();
		int32_t L_9 = V_0;
		int32_t L_10 = ___yMin1;
		MapSquare_t3390943120 * L_11 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_8)->GetAddressAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), L_10);
		bool L_12 = L_11->get_HasCollider_3();
		if (!L_12)
		{
			goto IL_0009;
		}
	}

IL_0043:
	{
		V_2 = (bool)1;
		goto IL_0094;
	}

IL_004a:
	{
		int32_t L_13 = ___xMin0;
		V_3 = L_13;
		goto IL_0083;
	}

IL_0051:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		bool L_16 = TileMapScript_CollideAtGrid_m2855697938(__this, L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		MapSquareU5BU2CU5D_t3810414642* L_17 = __this->get_MapArray_2();
		int32_t L_18 = V_3;
		int32_t L_19 = V_1;
		MapSquare_t3390943120 * L_20 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_17)->GetAddressAtUnchecked(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
		bool L_21 = L_20->get_HasCollider_3();
		if (!L_21)
		{
			goto IL_007f;
		}
	}

IL_0079:
	{
		V_2 = (bool)0;
		int32_t L_22 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_0051;
		}
	}
	{
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0094:
	{
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->get_Squares_Y_4();
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)))))
		{
			goto IL_004a;
		}
	}

IL_00a8:
	{
		GameObject_t1113636619 * L_31 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_31, /*hidden argument*/NULL);
		V_4 = L_31;
		GameObject_t1113636619 * L_32 = V_4;
		ObjectU5BU5D_t2843939325* L_33 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		ArrayElementTypeCheck (L_33, _stringLiteral1676118739);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1676118739);
		ObjectU5BU5D_t2843939325* L_34 = L_33;
		int32_t L_35 = ___xMin0;
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_36);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_37);
		ObjectU5BU5D_t2843939325* L_38 = L_34;
		ArrayElementTypeCheck (L_38, _stringLiteral3452614532);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614532);
		ObjectU5BU5D_t2843939325* L_39 = L_38;
		int32_t L_40 = ___yMin1;
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_41);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_42);
		ObjectU5BU5D_t2843939325* L_43 = L_39;
		ArrayElementTypeCheck (L_43, _stringLiteral3430022137);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3430022137);
		ObjectU5BU5D_t2843939325* L_44 = L_43;
		int32_t L_45 = V_0;
		int32_t L_46 = L_45;
		RuntimeObject * L_47 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_46);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_47);
		ObjectU5BU5D_t2843939325* L_48 = L_44;
		ArrayElementTypeCheck (L_48, _stringLiteral3452614532);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3452614532);
		ObjectU5BU5D_t2843939325* L_49 = L_48;
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		RuntimeObject * L_52 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_51);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_52);
		ObjectU5BU5D_t2843939325* L_53 = L_49;
		ArrayElementTypeCheck (L_53, _stringLiteral3452614535);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_54 = String_Concat_m2971454694(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		Object_set_name_m291480324(L_32, L_54, /*hidden argument*/NULL);
		int32_t L_55 = V_0;
		int32_t L_56 = ___xMin0;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)L_56)), (int32_t)1));
		int32_t L_57 = V_1;
		int32_t L_58 = ___yMin1;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)L_58)), (int32_t)1));
		int32_t L_59 = V_5;
		int32_t L_60 = __this->get_Square_Size_5();
		V_7 = (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_59, (int32_t)L_60)))));
		int32_t L_61 = V_6;
		int32_t L_62 = __this->get_Square_Size_5();
		V_8 = (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_61, (int32_t)L_62)))));
		GameObject_t1113636619 * L_63 = V_4;
		BoxCollider2D_t3581341831 * L_64 = GameObject_AddComponent_TisBoxCollider2D_t3581341831_m201509103(L_63, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t3581341831_m201509103_RuntimeMethod_var);
		V_9 = L_64;
		BoxCollider2D_t3581341831 * L_65 = V_9;
		float L_66 = V_7;
		float L_67 = V_8;
		Vector2_t2156229523  L_68;
		memset(&L_68, 0, sizeof(L_68));
		Vector2__ctor_m3970636864((&L_68), L_66, L_67, /*hidden argument*/NULL);
		BoxCollider2D_set_size_m4134815626(L_65, L_68, /*hidden argument*/NULL);
		BoxCollider2D_t3581341831 * L_69 = V_9;
		int32_t L_70 = ___xMin0;
		int32_t L_71 = __this->get_Square_Size_5();
		float L_72 = V_7;
		int32_t L_73 = ___yMin1;
		int32_t L_74 = __this->get_Square_Size_5();
		float L_75 = V_8;
		Vector2_t2156229523  L_76;
		memset(&L_76, 0, sizeof(L_76));
		Vector2__ctor_m3970636864((&L_76), ((float)il2cpp_codegen_add((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_70, (int32_t)L_71))))), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_72)))), ((float)il2cpp_codegen_add((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_73, (int32_t)L_74))))), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_75)))), /*hidden argument*/NULL);
		Collider2D_set_offset_m858183860(L_69, L_76, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_77 = V_4;
		Transform_t3600365921 * L_78 = GameObject_get_transform_m1369836730(L_77, /*hidden argument*/NULL);
		Transform_t3600365921 * L_79 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_80 = Transform_get_position_m36019626(L_79, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_78, L_80, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_81 = V_4;
		Transform_t3600365921 * L_82 = GameObject_get_transform_m1369836730(L_81, /*hidden argument*/NULL);
		Transform_t3600365921 * L_83 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_84 = Transform_get_rotation_m3502953881(L_83, /*hidden argument*/NULL);
		Transform_set_rotation_m3524318132(L_82, L_84, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_85 = V_4;
		Transform_t3600365921 * L_86 = GameObject_get_transform_m1369836730(L_85, /*hidden argument*/NULL);
		Transform_t3600365921 * L_87 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_88 = Transform_get_lossyScale_m465496651(L_87, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_86, L_88, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_89 = V_4;
		Transform_t3600365921 * L_90 = GameObject_get_transform_m1369836730(L_89, /*hidden argument*/NULL);
		Transform_t3600365921 * L_91 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_90, L_91, /*hidden argument*/NULL);
		int32_t L_92 = ___yMin1;
		V_10 = L_92;
		goto IL_020d;
	}

IL_01dc:
	{
		int32_t L_93 = ___xMin0;
		V_11 = L_93;
		goto IL_01ff;
	}

IL_01e4:
	{
		MapSquareU5BU2CU5D_t3810414642* L_94 = __this->get_MapArray_2();
		int32_t L_95 = V_11;
		int32_t L_96 = V_10;
		MapSquare_t3390943120 * L_97 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_94)->GetAddressAtUnchecked(L_95, L_96);
		L_97->set_HasCollider_3((bool)1);
		int32_t L_98 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
	}

IL_01ff:
	{
		int32_t L_99 = V_11;
		int32_t L_100 = V_0;
		if ((((int32_t)L_99) <= ((int32_t)L_100)))
		{
			goto IL_01e4;
		}
	}
	{
		int32_t L_101 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_020d:
	{
		int32_t L_102 = V_10;
		int32_t L_103 = V_1;
		if ((((int32_t)L_102) <= ((int32_t)L_103)))
		{
			goto IL_01dc;
		}
	}
	{
		return;
	}
}
// System.Void TileMapScript::GenerateColliders()
extern "C"  void TileMapScript_GenerateColliders_m1019337615 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_004e;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_003e;
	}

IL_000e:
	{
		int32_t L_0 = V_1;
		int32_t L_1 = V_0;
		bool L_2 = TileMapScript_CollideAtGrid_m2855697938(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		MapSquareU5BU2CU5D_t3810414642* L_3 = __this->get_MapArray_2();
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		MapSquare_t3390943120 * L_6 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_3)->GetAddressAtUnchecked(L_4, L_5);
		bool L_7 = L_6->get_HasCollider_3();
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		TileMapScript_GenerateColliderAt_m1712027877(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_Squares_X_3();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->get_Squares_Y_4();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TileMapScript::GenerateMapArrayFromLevelData()
extern "C"  void TileMapScript_GenerateMapArrayFromLevelData_m1370785473 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMapScript_GenerateMapArrayFromLevelData_m1370785473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_Squares_X_3();
		int32_t L_1 = __this->get_Squares_Y_4();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		MapSquareU5BU2CU5D_t3810414642* L_2 = (MapSquareU5BU2CU5D_t3810414642*)GenArrayNew(MapSquareU5BU2CU5D_t3810414642_il2cpp_TypeInfo_var, L_3);
		__this->set_MapArray_2((MapSquareU5BU2CU5D_t3810414642*)L_2);
		TileMapScript_PopulateMapArray_m2552189221(__this, /*hidden argument*/NULL);
		TileMapScript_DoWallAutotiling_m297977581(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TileMapScript::SetSquareTexCoords(UnityEngine.Vector2[],System.Int32,System.Int32)
extern "C"  void TileMapScript_SetSquareTexCoords_m2964746611 (TileMapScript_t3658915240 * __this, Vector2U5BU5D_t1457185986* ___uv0, int32_t ___squareNum1, int32_t ___textureNum2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = (0.25f);
		V_1 = (0.125f);
		int32_t L_0 = ___textureNum2;
		V_2 = ((int32_t)((int32_t)L_0%(int32_t)4));
		int32_t L_1 = ___textureNum2;
		V_3 = ((int32_t)((int32_t)L_1/(int32_t)4));
		Vector2U5BU5D_t1457185986* L_2 = ___uv0;
		int32_t L_3 = ___squareNum1;
		int32_t L_4 = V_2;
		float L_5 = V_0;
		float L_6 = __this->get_iotaTL_7();
		int32_t L_7 = V_3;
		float L_8 = V_1;
		float L_9 = __this->get_iotaTL_7();
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_4))), (float)L_5)), (float)L_6)), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_7))), (float)L_8)))), (float)L_9)), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)4))))) = L_10;
		Vector2U5BU5D_t1457185986* L_11 = ___uv0;
		int32_t L_12 = ___squareNum1;
		int32_t L_13 = V_2;
		float L_14 = V_0;
		float L_15 = __this->get_iotaBR_8();
		int32_t L_16 = V_3;
		float L_17 = V_1;
		float L_18 = __this->get_iotaTL_7();
		Vector2_t2156229523  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector2__ctor_m3970636864((&L_19), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1))))), (float)L_14)), (float)L_15)), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_16))), (float)L_17)))), (float)L_18)), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)4)), (int32_t)1))))) = L_19;
		Vector2U5BU5D_t1457185986* L_20 = ___uv0;
		int32_t L_21 = ___squareNum1;
		int32_t L_22 = V_2;
		float L_23 = V_0;
		float L_24 = __this->get_iotaTL_7();
		int32_t L_25 = V_3;
		float L_26 = V_1;
		float L_27 = __this->get_iotaBR_8();
		Vector2_t2156229523  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector2__ctor_m3970636864((&L_28), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_22))), (float)L_23)), (float)L_24)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1))))), (float)L_26)))), (float)L_27)), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)4)), (int32_t)2))))) = L_28;
		Vector2U5BU5D_t1457185986* L_29 = ___uv0;
		int32_t L_30 = ___squareNum1;
		int32_t L_31 = V_2;
		float L_32 = V_0;
		float L_33 = __this->get_iotaBR_8();
		int32_t L_34 = V_3;
		float L_35 = V_1;
		float L_36 = __this->get_iotaBR_8();
		Vector2_t2156229523  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector2__ctor_m3970636864((&L_37), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))))), (float)L_32)), (float)L_33)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))))), (float)L_35)))), (float)L_36)), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)4)), (int32_t)3))))) = L_37;
		return;
	}
}
// System.Void TileMapScript::GenerateMap()
extern "C"  void TileMapScript_GenerateMap_m71397288 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMapScript_GenerateMap_m71397288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3U5BU5D_t1718750761* V_6 = NULL;
	Vector3U5BU5D_t1718750761* V_7 = NULL;
	Vector2U5BU5D_t1457185986* V_8 = NULL;
	Int32U5BU5D_t385246372* V_9 = NULL;
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Mesh_t3648964284 * V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_4 = V_0;
			GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			RuntimeObject* L_6 = V_1;
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_9;
			if (!L_9)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			RuntimeObject* L_10 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		TileMapScript_GenerateMapArrayFromLevelData_m1370785473(__this, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_Squares_X_3();
		int32_t L_12 = __this->get_Squares_Y_4();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12));
		int32_t L_13 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_13));
		int32_t L_14 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_14));
		int32_t L_15 = V_4;
		V_6 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_15));
		int32_t L_16 = V_4;
		V_7 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_16));
		int32_t L_17 = V_4;
		V_8 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_17));
		int32_t L_18 = V_5;
		V_9 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_18));
		Vector3__ctor_m3353183577((&V_10), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		V_11 = 0;
		V_12 = 0;
		goto IL_025e;
	}

IL_00af:
	{
		V_13 = 0;
		goto IL_024b;
	}

IL_00b7:
	{
		Vector3U5BU5D_t1718750761* L_19 = V_6;
		int32_t L_20 = V_11;
		int32_t L_21 = V_13;
		int32_t L_22 = __this->get_Square_Size_5();
		int32_t L_23 = V_12;
		int32_t L_24 = __this->get_Square_Size_5();
		Vector3_t3722313464  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector3__ctor_m3353183577((&L_25), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)L_22))))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)L_24))))), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)4))))) = L_25;
		Vector3U5BU5D_t1718750761* L_26 = V_6;
		int32_t L_27 = V_11;
		int32_t L_28 = V_13;
		int32_t L_29 = __this->get_Square_Size_5();
		int32_t L_30 = V_12;
		int32_t L_31 = __this->get_Square_Size_5();
		Vector3_t3722313464  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector3__ctor_m3353183577((&L_32), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), (int32_t)L_29))))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)L_31))))), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)4)), (int32_t)1))))) = L_32;
		Vector3U5BU5D_t1718750761* L_33 = V_6;
		int32_t L_34 = V_11;
		int32_t L_35 = V_13;
		int32_t L_36 = __this->get_Square_Size_5();
		int32_t L_37 = V_12;
		int32_t L_38 = __this->get_Square_Size_5();
		Vector3_t3722313464  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Vector3__ctor_m3353183577((&L_39), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_35, (int32_t)L_36))))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)), (int32_t)L_38))))), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)4)), (int32_t)2))))) = L_39;
		Vector3U5BU5D_t1718750761* L_40 = V_6;
		int32_t L_41 = V_11;
		int32_t L_42 = V_13;
		int32_t L_43 = __this->get_Square_Size_5();
		int32_t L_44 = V_12;
		int32_t L_45 = __this->get_Square_Size_5();
		Vector3_t3722313464  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Vector3__ctor_m3353183577((&L_46), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)), (int32_t)L_43))))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1)), (int32_t)L_45))))), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)4)), (int32_t)3))))) = L_46;
		Int32U5BU5D_t385246372* L_47 = V_9;
		int32_t L_48 = V_11;
		int32_t L_49 = V_11;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_48, (int32_t)6))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_49, (int32_t)4)));
		Int32U5BU5D_t385246372* L_50 = V_9;
		int32_t L_51 = V_11;
		int32_t L_52 = V_11;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_51, (int32_t)6)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_52, (int32_t)4)), (int32_t)2)));
		Int32U5BU5D_t385246372* L_53 = V_9;
		int32_t L_54 = V_11;
		int32_t L_55 = V_11;
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)6)), (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_55, (int32_t)4)), (int32_t)1)));
		Int32U5BU5D_t385246372* L_56 = V_9;
		int32_t L_57 = V_11;
		int32_t L_58 = V_11;
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_57, (int32_t)6)), (int32_t)3))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_58, (int32_t)4)), (int32_t)1)));
		Int32U5BU5D_t385246372* L_59 = V_9;
		int32_t L_60 = V_11;
		int32_t L_61 = V_11;
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_60, (int32_t)6)), (int32_t)4))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_61, (int32_t)4)), (int32_t)2)));
		Int32U5BU5D_t385246372* L_62 = V_9;
		int32_t L_63 = V_11;
		int32_t L_64 = V_11;
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_63, (int32_t)6)), (int32_t)5))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_64, (int32_t)4)), (int32_t)3)));
		Vector3U5BU5D_t1718750761* L_65 = V_7;
		int32_t L_66 = V_11;
		Vector3_t3722313464  L_67 = V_10;
		*(Vector3_t3722313464 *)((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_66, (int32_t)4))))) = L_67;
		Vector3U5BU5D_t1718750761* L_68 = V_7;
		int32_t L_69 = V_11;
		Vector3_t3722313464  L_70 = V_10;
		*(Vector3_t3722313464 *)((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_69, (int32_t)4)), (int32_t)1))))) = L_70;
		Vector3U5BU5D_t1718750761* L_71 = V_7;
		int32_t L_72 = V_11;
		Vector3_t3722313464  L_73 = V_10;
		*(Vector3_t3722313464 *)((L_71)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_72, (int32_t)4)), (int32_t)2))))) = L_73;
		Vector3U5BU5D_t1718750761* L_74 = V_7;
		int32_t L_75 = V_11;
		Vector3_t3722313464  L_76 = V_10;
		*(Vector3_t3722313464 *)((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_75, (int32_t)4)), (int32_t)3))))) = L_76;
		Vector2U5BU5D_t1457185986* L_77 = V_8;
		int32_t L_78 = V_11;
		MapSquareU5BU2CU5D_t3810414642* L_79 = __this->get_MapArray_2();
		int32_t L_80 = V_13;
		int32_t L_81 = V_12;
		MapSquare_t3390943120 * L_82 = ((MapSquareU5BU2CU5D_t3810414642*)(MapSquareU5BU2CU5D_t3810414642*)L_79)->GetAddressAtUnchecked(L_80, L_81);
		int32_t L_83 = L_82->get_TextureNum_1();
		TileMapScript_SetSquareTexCoords_m2964746611(__this, L_77, L_78, L_83, /*hidden argument*/NULL);
		int32_t L_84 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		int32_t L_85 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_024b:
	{
		int32_t L_86 = V_13;
		int32_t L_87 = __this->get_Squares_X_3();
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_88 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
	}

IL_025e:
	{
		int32_t L_89 = V_12;
		int32_t L_90 = __this->get_Squares_Y_4();
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_00af;
		}
	}
	{
		TileMapScript_GenerateColliders_m1019337615(__this, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_91 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_91, /*hidden argument*/NULL);
		V_14 = L_91;
		Mesh_t3648964284 * L_92 = V_14;
		Vector3U5BU5D_t1718750761* L_93 = V_6;
		Mesh_set_vertices_m2084450642(L_92, L_93, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_94 = V_14;
		Int32U5BU5D_t385246372* L_95 = V_9;
		Mesh_set_triangles_m255556250(L_94, L_95, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_96 = V_14;
		Vector3U5BU5D_t1718750761* L_97 = V_7;
		Mesh_set_normals_m332514528(L_96, L_97, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_98 = V_14;
		Vector2U5BU5D_t1457185986* L_99 = V_8;
		Mesh_set_uv_m1258646872(L_98, L_99, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_100 = Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var);
		Mesh_t3648964284 * L_101 = V_14;
		MeshFilter_set_mesh_m1415871686(L_100, L_101, /*hidden argument*/NULL);
		int32_t L_102 = __this->get_Squares_X_3();
		int32_t L_103 = __this->get_Squares_Y_4();
		intptr_t L_104 = (intptr_t)TileMapScript_CollideAtGrid_m2855697938_RuntimeMethod_var;
		IsPassable_t2551518848 * L_105 = (IsPassable_t2551518848 *)il2cpp_codegen_object_new(IsPassable_t2551518848_il2cpp_TypeInfo_var);
		IsPassable__ctor_m3154592616(L_105, __this, L_104, /*hidden argument*/NULL);
		PathfindingImpl_t3995530112 * L_106 = (PathfindingImpl_t3995530112 *)il2cpp_codegen_object_new(PathfindingImpl_t3995530112_il2cpp_TypeInfo_var);
		PathfindingImpl__ctor_m2501677692(L_106, L_102, L_103, L_105, /*hidden argument*/NULL);
		__this->set_pathfinder_10(L_106);
		return;
	}
}
// System.Void TileMapScript::Update()
extern "C"  void TileMapScript_Update_m2258419300 (TileMapScript_t3658915240 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TileMapScript/MapSquare
extern "C" void MapSquare_t3390943120_marshal_pinvoke(const MapSquare_t3390943120& unmarshaled, MapSquare_t3390943120_marshaled_pinvoke& marshaled)
{
	marshaled.___RawData_0 = static_cast<uint8_t>(unmarshaled.get_RawData_0());
	marshaled.___TextureNum_1 = unmarshaled.get_TextureNum_1();
	marshaled.___IsWall_2 = static_cast<int32_t>(unmarshaled.get_IsWall_2());
	marshaled.___HasCollider_3 = static_cast<int32_t>(unmarshaled.get_HasCollider_3());
}
extern "C" void MapSquare_t3390943120_marshal_pinvoke_back(const MapSquare_t3390943120_marshaled_pinvoke& marshaled, MapSquare_t3390943120& unmarshaled)
{
	Il2CppChar unmarshaled_RawData_temp_0 = 0x0;
	unmarshaled_RawData_temp_0 = static_cast<Il2CppChar>(marshaled.___RawData_0);
	unmarshaled.set_RawData_0(unmarshaled_RawData_temp_0);
	int32_t unmarshaled_TextureNum_temp_1 = 0;
	unmarshaled_TextureNum_temp_1 = marshaled.___TextureNum_1;
	unmarshaled.set_TextureNum_1(unmarshaled_TextureNum_temp_1);
	bool unmarshaled_IsWall_temp_2 = false;
	unmarshaled_IsWall_temp_2 = static_cast<bool>(marshaled.___IsWall_2);
	unmarshaled.set_IsWall_2(unmarshaled_IsWall_temp_2);
	bool unmarshaled_HasCollider_temp_3 = false;
	unmarshaled_HasCollider_temp_3 = static_cast<bool>(marshaled.___HasCollider_3);
	unmarshaled.set_HasCollider_3(unmarshaled_HasCollider_temp_3);
}
// Conversion method for clean up from marshalling of: TileMapScript/MapSquare
extern "C" void MapSquare_t3390943120_marshal_pinvoke_cleanup(MapSquare_t3390943120_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TileMapScript/MapSquare
extern "C" void MapSquare_t3390943120_marshal_com(const MapSquare_t3390943120& unmarshaled, MapSquare_t3390943120_marshaled_com& marshaled)
{
	marshaled.___RawData_0 = static_cast<uint8_t>(unmarshaled.get_RawData_0());
	marshaled.___TextureNum_1 = unmarshaled.get_TextureNum_1();
	marshaled.___IsWall_2 = static_cast<int32_t>(unmarshaled.get_IsWall_2());
	marshaled.___HasCollider_3 = static_cast<int32_t>(unmarshaled.get_HasCollider_3());
}
extern "C" void MapSquare_t3390943120_marshal_com_back(const MapSquare_t3390943120_marshaled_com& marshaled, MapSquare_t3390943120& unmarshaled)
{
	Il2CppChar unmarshaled_RawData_temp_0 = 0x0;
	unmarshaled_RawData_temp_0 = static_cast<Il2CppChar>(marshaled.___RawData_0);
	unmarshaled.set_RawData_0(unmarshaled_RawData_temp_0);
	int32_t unmarshaled_TextureNum_temp_1 = 0;
	unmarshaled_TextureNum_temp_1 = marshaled.___TextureNum_1;
	unmarshaled.set_TextureNum_1(unmarshaled_TextureNum_temp_1);
	bool unmarshaled_IsWall_temp_2 = false;
	unmarshaled_IsWall_temp_2 = static_cast<bool>(marshaled.___IsWall_2);
	unmarshaled.set_IsWall_2(unmarshaled_IsWall_temp_2);
	bool unmarshaled_HasCollider_temp_3 = false;
	unmarshaled_HasCollider_temp_3 = static_cast<bool>(marshaled.___HasCollider_3);
	unmarshaled.set_HasCollider_3(unmarshaled_HasCollider_temp_3);
}
// Conversion method for clean up from marshalling of: TileMapScript/MapSquare
extern "C" void MapSquare_t3390943120_marshal_com_cleanup(MapSquare_t3390943120_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void World::.ctor()
extern "C"  void World__ctor_m228699686 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	{
		__this->set_NumberOfSegmentsEachDir_2(((int32_t)300));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single World::ScaleXCoord(System.Single)
extern "C"  float World_ScaleXCoord_m176046694 (World_t3793043157 * __this, float ___x0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		float L_0 = ___x0;
		V_0 = L_0;
		float L_1 = ___x0;
		Camera_t4157153871 * L_2 = __this->get_mainCamera_6();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_x_0();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_5));
		int32_t L_6 = __this->get_NumberOfSegmentsEachDir_2();
		V_3 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_6))), (float)(2.0f)));
		goto IL_0038;
	}

IL_0030:
	{
		float L_7 = V_0;
		float L_8 = V_3;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
		float L_9 = V_1;
		float L_10 = V_3;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_10));
	}

IL_0038:
	{
		float L_11 = V_1;
		float L_12 = V_3;
		if ((((float)L_11) > ((float)((float)((float)L_12/(float)(2.0f))))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0052;
	}

IL_004a:
	{
		float L_13 = V_0;
		float L_14 = V_3;
		V_0 = ((float)il2cpp_codegen_add((float)L_13, (float)L_14));
		float L_15 = V_1;
		float L_16 = V_3;
		V_1 = ((float)il2cpp_codegen_add((float)L_15, (float)L_16));
	}

IL_0052:
	{
		float L_17 = V_1;
		float L_18 = V_3;
		if ((((float)L_17) < ((float)((float)((float)((-L_18))/(float)(2.0f))))))
		{
			goto IL_004a;
		}
	}
	{
		float L_19 = V_0;
		return L_19;
	}
}
// System.Single World::GetUpdraughtAtCoord(System.Single,System.Single)
extern "C"  float World_GetUpdraughtAtCoord_m2083694645 (World_t3793043157 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_GetUpdraughtAtCoord_m2083694645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		float L_0 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Min_m1073399594(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1000.0f), (float)((float)il2cpp_codegen_subtract((float)L_0, (float)(100.0f))))), (float)(0.001f))), /*hidden argument*/NULL);
		float L_2 = Mathf_Max_m3146388979(NULL /*static, unused*/, (1.0f), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ___x0;
		V_1 = L_3;
		float L_4 = V_1;
		int32_t L_5 = __this->get_NumberOfSegmentsEachDir_2();
		int32_t L_6 = __this->get_NumberOfSegmentsEachDir_2();
		V_1 = (fmodf(((float)il2cpp_codegen_add((float)L_4, (float)(((float)((float)L_5))))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)))))));
		float L_7 = V_1;
		V_2 = (((int32_t)((int32_t)L_7)));
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_9 = V_2;
		int32_t L_10 = __this->get_NumberOfSegmentsEachDir_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2))));
	}

IL_0053:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13 = __this->get_NumberOfSegmentsEachDir_2();
		if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)2)))))
		{
			goto IL_00a0;
		}
	}

IL_0068:
	{
		ObjectU5BU5D_t2843939325* L_14 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_14, _stringLiteral1940050320);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1940050320);
		ObjectU5BU5D_t2843939325* L_15 = L_14;
		float L_16 = ___x0;
		float L_17 = L_16;
		RuntimeObject * L_18 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_17);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_t2843939325* L_19 = L_15;
		ArrayElementTypeCheck (L_19, _stringLiteral668646863);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral668646863);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m2971454694(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		return (0.0f);
	}

IL_00a0:
	{
		float L_25 = V_0;
		SingleU5BU5D_t1444911251* L_26 = __this->get_m_Updraught_8();
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		float L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_25, (float)(2.0f))), (float)L_29));
	}
}
// System.Single World::GetHeightAtX(System.Single)
extern "C"  float World_GetHeightAtX_m4074285094 (World_t3793043157 * __this, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_GetHeightAtX_m4074285094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		float L_0 = ___x0;
		V_0 = L_0;
		float L_1 = V_0;
		int32_t L_2 = __this->get_NumberOfSegmentsEachDir_2();
		int32_t L_3 = __this->get_NumberOfSegmentsEachDir_2();
		V_0 = (fmodf(((float)il2cpp_codegen_add((float)L_1, (float)(((float)((float)L_2))))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2)))))));
		float L_4 = V_0;
		V_1 = (((int32_t)((int32_t)L_4)));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_NumberOfSegmentsEachDir_2();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)2))));
	}

IL_002b:
	{
		float L_8 = V_0;
		float L_9 = V_0;
		V_2 = ((float)il2cpp_codegen_subtract((float)L_8, (float)(((float)((float)(((int32_t)((int32_t)L_9))))))));
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_NumberOfSegmentsEachDir_2();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)2)))))
		{
			goto IL_0081;
		}
	}

IL_0046:
	{
		ObjectU5BU5D_t2843939325* L_13 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_13, _stringLiteral2076741146);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2076741146);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		float L_15 = ___x0;
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_16);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		ObjectU5BU5D_t2843939325* L_18 = L_14;
		ArrayElementTypeCheck (L_18, _stringLiteral668646863);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral668646863);
		ObjectU5BU5D_t2843939325* L_19 = L_18;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_21);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m2971454694(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		SingleU5BU5D_t1444911251* L_24 = __this->get_m_Heights_7();
		int32_t L_25 = 0;
		float L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		return L_26;
	}

IL_0081:
	{
		float L_27 = V_2;
		SingleU5BU5D_t1444911251* L_28 = __this->get_m_Heights_7();
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		float L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		float L_32 = V_2;
		SingleU5BU5D_t1444911251* L_33 = __this->get_m_Heights_7();
		int32_t L_34 = V_1;
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		float L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_27)), (float)L_31)), (float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_36))));
	}
}
// System.Void World::CalculateUpdraughts()
extern "C"  void World_CalculateUpdraughts_m1067250568 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_CalculateUpdraughts_m1067250568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_NumberOfSegmentsEachDir_2();
		__this->set_m_Updraught_8(((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2)))));
		V_0 = 0;
		goto IL_0048;
	}

IL_001a:
	{
		SingleU5BU5D_t1444911251* L_1 = __this->get_m_Updraught_8();
		int32_t L_2 = V_0;
		SingleU5BU5D_t1444911251* L_3 = __this->get_m_Heights_7();
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		float L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		SingleU5BU5D_t1444911251* L_7 = __this->get_m_Heights_7();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_11 = tanf(((float)il2cpp_codegen_subtract((float)L_6, (float)L_10)));
		float L_12 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), L_11, /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (float)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->get_NumberOfSegmentsEachDir_2();
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void World::GenerateHeightmap()
extern "C"  void World_GenerateHeightmap_m1183724432 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_GenerateHeightmap_m1183724432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_NumberOfSegmentsEachDir_2();
		__this->set_m_Heights_7(((SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2)), (int32_t)1)))));
		float L_1 = Random_Range_m2202990745(NULL /*static, unused*/, (5.5f), (10.25f), /*hidden argument*/NULL);
		__this->set_m_ReallyBigMag_9(L_1);
		float L_2 = Random_Range_m2202990745(NULL /*static, unused*/, (90.0f), (133.0f), /*hidden argument*/NULL);
		__this->set_m_ReallyBigFreq_10(L_2);
		float L_3 = Random_Range_m2202990745(NULL /*static, unused*/, (5.5f), (10.25f), /*hidden argument*/NULL);
		__this->set_m_BigMag_11(L_3);
		float L_4 = Random_Range_m2202990745(NULL /*static, unused*/, (43.0f), (63.0f), /*hidden argument*/NULL);
		__this->set_m_BigFreq_12(L_4);
		float L_5 = Random_Range_m2202990745(NULL /*static, unused*/, (2.5f), (4.25f), /*hidden argument*/NULL);
		__this->set_m_MedMag_13(L_5);
		float L_6 = Random_Range_m2202990745(NULL /*static, unused*/, (12.0f), (20.0f), /*hidden argument*/NULL);
		__this->set_m_MedFreq_14(L_6);
		float L_7 = Random_Range_m2202990745(NULL /*static, unused*/, (0.95f), (1.95f), /*hidden argument*/NULL);
		__this->set_m_SmallMag_15(L_7);
		float L_8 = Random_Range_m2202990745(NULL /*static, unused*/, (5.0f), (9.0f), /*hidden argument*/NULL);
		__this->set_m_SmallFreq_16(L_8);
		V_0 = 0;
		goto IL_00df;
	}

IL_00c4:
	{
		SingleU5BU5D_t1444911251* L_9 = __this->get_m_Heights_7();
		int32_t L_10 = V_0;
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_NumberOfSegmentsEachDir_2();
		float L_13 = World_GenerateHeightAtX_m635807593(__this, (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12))))), /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (float)L_13);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_00df:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = __this->get_NumberOfSegmentsEachDir_2();
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)), (int32_t)1)))))
		{
			goto IL_00c4;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_17 = __this->get_m_Heights_7();
		int32_t L_18 = __this->get_NumberOfSegmentsEachDir_2();
		int32_t L_19 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)2));
		float L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		SingleU5BU5D_t1444911251* L_21 = __this->get_m_Heights_7();
		int32_t L_22 = 0;
		float L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = ((float)il2cpp_codegen_multiply((float)(0.5f), (float)((float)il2cpp_codegen_add((float)L_20, (float)L_23))));
		V_2 = 0;
		goto IL_0168;
	}

IL_0115:
	{
		int32_t L_24 = V_2;
		V_3 = ((float)((float)(((float)((float)L_24)))/(float)(60.0f)));
		SingleU5BU5D_t1444911251* L_25 = __this->get_m_Heights_7();
		int32_t L_26 = V_2;
		float L_27 = V_3;
		SingleU5BU5D_t1444911251* L_28 = __this->get_m_Heights_7();
		int32_t L_29 = V_2;
		int32_t L_30 = L_29;
		float L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		float L_32 = V_3;
		float L_33 = V_1;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_31)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_32)), (float)L_33)))));
		int32_t L_34 = __this->get_NumberOfSegmentsEachDir_2();
		int32_t L_35 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)2)), (int32_t)L_35));
		SingleU5BU5D_t1444911251* L_36 = __this->get_m_Heights_7();
		int32_t L_37 = V_4;
		float L_38 = V_3;
		SingleU5BU5D_t1444911251* L_39 = __this->get_m_Heights_7();
		int32_t L_40 = V_4;
		int32_t L_41 = L_40;
		float L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		float L_43 = V_3;
		float L_44 = V_1;
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_38, (float)L_42)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_43)), (float)L_44)))));
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0168:
	{
		int32_t L_46 = V_2;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)61))))
		{
			goto IL_0115;
		}
	}
	{
		World_CalculateUpdraughts_m1067250568(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single World::GenerateHeightAtX(System.Single)
extern "C"  float World_GenerateHeightAtX_m635807593 (World_t3793043157 * __this, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_GenerateHeightAtX_m635807593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_m_ReallyBigMag_9();
		float L_1 = ___x0;
		float L_2 = __this->get_m_ReallyBigFreq_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = cosf(((float)((float)L_1/(float)L_2)));
		float L_4 = __this->get_m_BigMag_11();
		float L_5 = ___x0;
		float L_6 = __this->get_m_BigFreq_12();
		float L_7 = sinf(((float)((float)L_5/(float)L_6)));
		float L_8 = __this->get_m_MedMag_13();
		float L_9 = ___x0;
		float L_10 = __this->get_m_MedFreq_14();
		float L_11 = cosf(((float)((float)L_9/(float)L_10)));
		float L_12 = __this->get_m_SmallMag_15();
		float L_13 = ___x0;
		float L_14 = __this->get_m_SmallFreq_16();
		float L_15 = sinf(((float)((float)L_13/(float)L_14)));
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_11)))), (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_15))));
	}
}
// System.Single World::GetHeight(System.Int32)
extern "C"  float World_GetHeight_m236403873 (World_t3793043157 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t1444911251* L_0 = __this->get_m_Heights_7();
		int32_t L_1 = ___x0;
		int32_t L_2 = __this->get_NumberOfSegmentsEachDir_2();
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		float L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void World::GenerateWorld()
extern "C"  void World_GenerateWorld_m2153961792 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_GenerateWorld_m2153961792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WorldSegment_t1063874133 * V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		World_GenerateHeightmap_m1183724432(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_NumberOfSegmentsEachDir_2();
		V_0 = ((-L_0));
		goto IL_0054;
	}

IL_0013:
	{
		GameObject_t1113636619 * L_1 = __this->get_WorldSegment_3();
		int32_t L_2 = V_0;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (((float)((float)L_2))), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_5 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_1, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		WorldSegment_t1063874133 * L_6 = GameObject_GetComponent_TisWorldSegment_t1063874133_m2218618745(L_5, /*hidden argument*/GameObject_GetComponent_TisWorldSegment_t1063874133_m2218618745_RuntimeMethod_var);
		V_1 = L_6;
		WorldSegment_t1063874133 * L_7 = V_1;
		int32_t L_8 = V_0;
		float L_9 = World_GetHeight_m236403873(__this, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		float L_11 = World_GetHeight_m236403873(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		WorldSegment_SetHeights_m991205745(L_7, L_9, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0054:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->get_NumberOfSegmentsEachDir_2();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = 0;
		goto IL_009f;
	}

IL_0067:
	{
		float L_15 = Random_Range_m2202990745(NULL /*static, unused*/, (-1.0f), (1.0f), /*hidden argument*/NULL);
		int32_t L_16 = __this->get_NumberOfSegmentsEachDir_2();
		float L_17 = Random_Range_m2202990745(NULL /*static, unused*/, (17.0f), (40.0f), /*hidden argument*/NULL);
		Vector3__ctor_m1719387948((&V_3), ((float)il2cpp_codegen_multiply((float)L_15, (float)(((float)((float)L_16))))), L_17, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_3;
		World_CreateCloud_m1748687854(__this, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_009f:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)25))))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Void World::CreateCloud(UnityEngine.Vector3)
extern "C"  void World_CreateCloud_m1748687854 (World_t3793043157 * __this, Vector3_t3722313464  ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_CreateCloud_m1748687854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Color_t2555686324  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		float L_0 = Random_Range_m2202990745(NULL /*static, unused*/, (0.5f), (1.5f), /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((&V_0), ((-L_0)), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_00ee;
	}

IL_0028:
	{
		float L_1 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (6.28318548f), /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = Random_Range_m2202990745(NULL /*static, unused*/, (0.05f), (1.0f), /*hidden argument*/NULL);
		V_3 = L_2;
		Vector3_t3722313464  L_3 = ___pos0;
		float L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = sinf(L_4);
		float L_6 = V_3;
		float L_7 = V_2;
		float L_8 = cosf(L_7);
		float L_9 = V_3;
		Vector3_t3722313464  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m3353183577((&L_10), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(1.9f), (float)L_5)), (float)L_6)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(1.3f), (float)L_8)), (float)L_9)), (-5.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = Random_Range_m2202990745(NULL /*static, unused*/, (1.2f), (2.0f), /*hidden argument*/NULL);
		V_5 = L_12;
		float L_13 = Random_Range_m2202990745(NULL /*static, unused*/, (0.5f), (1.0f), /*hidden argument*/NULL);
		V_6 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(0.5f)));
		float L_14 = Random_Range_m2202990745(NULL /*static, unused*/, (0.5f), (0.9f), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_multiply((float)L_14, (float)(0.5f)));
		float L_15 = V_6;
		float L_16 = V_6;
		float L_17 = V_6;
		float L_18 = V_7;
		Color__ctor_m2943235014((&V_8), L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_19 = Component_GetComponent_TisParticleSystem_t1800779281_m3884485303(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t1800779281_m3884485303_RuntimeMethod_var);
		Vector3_t3722313464  L_20 = V_4;
		Vector3_t3722313464  L_21 = V_0;
		float L_22 = V_5;
		float L_23 = Random_Range_m2202990745(NULL /*static, unused*/, (100.0f), (200.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_24 = V_8;
		Color32_t2600501292  L_25 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		ParticleSystem_Emit_m497964751(L_19, L_20, L_21, L_22, L_23, L_25, /*hidden argument*/NULL);
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00ee:
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)25))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}
}
// System.Void World::Start()
extern "C"  void World_Start_m4175979732 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_Start_m4175979732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Menu_t2559899777 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Menu_t2559899777 * G_B1_1 = NULL;
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mainCamera_6(L_0);
		World_GenerateWorld_m2153961792(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Menu_t2559899777 * L_2 = GameObject_AddComponent_TisMenu_t2559899777_m266561916(L_1, /*hidden argument*/GameObject_AddComponent_TisMenu_t2559899777_m266561916_RuntimeMethod_var);
		__this->set_EndMenu_17(L_2);
		Menu_t2559899777 * L_3 = __this->get_EndMenu_17();
		GUISkin_t1244372282 * L_4 = __this->get_GuiSkin_5();
		L_3->set_GuiSkin_10(L_4);
		Menu_t2559899777 * L_5 = __this->get_EndMenu_17();
		L_5->set_MenuTop_7((500.0f));
		Menu_t2559899777 * L_6 = __this->get_EndMenu_17();
		MenuActivated_t3536968312 * L_7 = ((World_t3793043157_StaticFields*)il2cpp_codegen_static_fields_for(World_t3793043157_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_18();
		G_B1_0 = _stringLiteral1433838075;
		G_B1_1 = L_6;
		if (L_7)
		{
			G_B2_0 = _stringLiteral1433838075;
			G_B2_1 = L_6;
			goto IL_0066;
		}
	}
	{
		intptr_t L_8 = (intptr_t)World_U3CStartU3Em__0_m3761361519_RuntimeMethod_var;
		MenuActivated_t3536968312 * L_9 = (MenuActivated_t3536968312 *)il2cpp_codegen_object_new(MenuActivated_t3536968312_il2cpp_TypeInfo_var);
		MenuActivated__ctor_m1325247487(L_9, NULL, L_8, /*hidden argument*/NULL);
		((World_t3793043157_StaticFields*)il2cpp_codegen_static_fields_for(World_t3793043157_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_18(L_9);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0066:
	{
		MenuActivated_t3536968312 * L_10 = ((World_t3793043157_StaticFields*)il2cpp_codegen_static_fields_for(World_t3793043157_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_18();
		Menu_AddButtonItem_m2135025504(G_B2_1, G_B2_0, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void World::UpdateParticles(System.Single)
extern "C"  void World_UpdateParticles_m1813833926 (World_t3793043157 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_UpdateParticles_m1813833926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystem_t1800779281 * V_0 = NULL;
	ParticleU5BU5D_t3069227754* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_t3722313464  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector3_t3722313464  V_15;
	memset(&V_15, 0, sizeof(V_15));
	{
		ParticleSystem_t1800779281 * L_0 = Component_GetComponent_TisParticleSystem_t1800779281_m3884485303(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t1800779281_m3884485303_RuntimeMethod_var);
		V_0 = L_0;
		ParticleSystem_t1800779281 * L_1 = V_0;
		int32_t L_2 = ParticleSystem_get_particleCount_m3882194216(L_1, /*hidden argument*/NULL);
		V_1 = ((ParticleU5BU5D_t3069227754*)SZArrayNew(ParticleU5BU5D_t3069227754_il2cpp_TypeInfo_var, (uint32_t)L_2));
		ParticleSystem_t1800779281 * L_3 = V_0;
		ParticleU5BU5D_t3069227754* L_4 = V_1;
		int32_t L_5 = ParticleSystem_GetParticles_m3661771371(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_014f;
	}

IL_0022:
	{
		ParticleU5BU5D_t3069227754* L_6 = V_1;
		int32_t L_7 = V_3;
		Vector3_t3722313464  L_8 = Particle_get_position_m855792854(((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		V_5 = L_8;
		float L_9 = (&V_5)->get_x_0();
		float L_10 = World_ScaleXCoord_m176046694(__this, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = V_4;
		ParticleU5BU5D_t3069227754* L_12 = V_1;
		int32_t L_13 = V_3;
		Vector3_t3722313464  L_14 = Particle_get_position_m855792854(((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13))), /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = (&V_6)->get_x_0();
		if ((((float)L_11) == ((float)L_15)))
		{
			goto IL_0098;
		}
	}
	{
		ParticleU5BU5D_t3069227754* L_16 = V_1;
		int32_t L_17 = V_3;
		float L_18 = V_4;
		ParticleU5BU5D_t3069227754* L_19 = V_1;
		int32_t L_20 = V_3;
		Vector3_t3722313464  L_21 = Particle_get_position_m855792854(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), /*hidden argument*/NULL);
		V_7 = L_21;
		float L_22 = (&V_7)->get_y_1();
		ParticleU5BU5D_t3069227754* L_23 = V_1;
		int32_t L_24 = V_3;
		Vector3_t3722313464  L_25 = Particle_get_position_m855792854(((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), /*hidden argument*/NULL);
		V_8 = L_25;
		float L_26 = (&V_8)->get_z_2();
		Vector3_t3722313464  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m3353183577((&L_27), L_18, L_22, L_26, /*hidden argument*/NULL);
		Particle_set_position_m4147191379(((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17))), L_27, /*hidden argument*/NULL);
	}

IL_0098:
	{
		float L_28 = V_4;
		ParticleU5BU5D_t3069227754* L_29 = V_1;
		int32_t L_30 = V_3;
		Vector3_t3722313464  L_31 = Particle_get_position_m855792854(((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30))), /*hidden argument*/NULL);
		V_10 = L_31;
		float L_32 = (&V_10)->get_y_1();
		float L_33 = World_GetUpdraughtAtCoord_m2083694645(__this, L_28, L_32, /*hidden argument*/NULL);
		V_9 = L_33;
		ParticleU5BU5D_t3069227754* L_34 = V_1;
		int32_t L_35 = V_3;
		Vector3_t3722313464  L_36 = Particle_get_velocity_m2555333515(((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35))), /*hidden argument*/NULL);
		V_11 = L_36;
		float L_37 = (&V_11)->get_x_0();
		if ((!(((float)L_37) == ((float)(0.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		float L_38 = V_9;
		ParticleU5BU5D_t3069227754* L_39 = V_1;
		int32_t L_40 = V_3;
		Vector3_t3722313464  L_41 = Particle_get_velocity_m2555333515(((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40))), /*hidden argument*/NULL);
		V_12 = L_41;
		float L_42 = (&V_12)->get_y_1();
		float L_43 = ___deltaTime0;
		V_9 = ((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_add((float)L_42, (float)L_43))));
	}

IL_00f2:
	{
		float L_44 = V_9;
		ParticleU5BU5D_t3069227754* L_45 = V_1;
		int32_t L_46 = V_3;
		Vector3_t3722313464  L_47 = Particle_get_velocity_m2555333515(((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46))), /*hidden argument*/NULL);
		V_13 = L_47;
		float L_48 = (&V_13)->get_y_1();
		if ((((float)L_44) == ((float)L_48)))
		{
			goto IL_014b;
		}
	}
	{
		ParticleU5BU5D_t3069227754* L_49 = V_1;
		int32_t L_50 = V_3;
		ParticleU5BU5D_t3069227754* L_51 = V_1;
		int32_t L_52 = V_3;
		Vector3_t3722313464  L_53 = Particle_get_velocity_m2555333515(((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52))), /*hidden argument*/NULL);
		V_14 = L_53;
		float L_54 = (&V_14)->get_x_0();
		float L_55 = V_9;
		ParticleU5BU5D_t3069227754* L_56 = V_1;
		int32_t L_57 = V_3;
		Vector3_t3722313464  L_58 = Particle_get_velocity_m2555333515(((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57))), /*hidden argument*/NULL);
		V_15 = L_58;
		float L_59 = (&V_15)->get_z_2();
		Vector3_t3722313464  L_60;
		memset(&L_60, 0, sizeof(L_60));
		Vector3__ctor_m3353183577((&L_60), L_54, L_55, L_59, /*hidden argument*/NULL);
		Particle_set_velocity_m1686335204(((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50))), L_60, /*hidden argument*/NULL);
	}

IL_014b:
	{
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_014f:
	{
		int32_t L_62 = V_3;
		int32_t L_63 = V_2;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_0022;
		}
	}
	{
		ParticleSystem_t1800779281 * L_64 = V_0;
		ParticleU5BU5D_t3069227754* L_65 = V_1;
		int32_t L_66 = V_2;
		ParticleSystem_SetParticles_m1018124896(L_64, L_65, L_66, /*hidden argument*/NULL);
		return;
	}
}
// System.Void World::DrawUpdraughts()
extern "C"  void World_DrawUpdraughts_m3321137354 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_DrawUpdraughts_m3321137354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Camera_t4157153871 * L_0 = __this->get_mainCamera_6();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_0();
		int32_t L_4 = __this->get_NumberOfSegmentsEachDir_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)(((float)((float)L_4)))));
		goto IL_005e;
	}

IL_0026:
	{
		float L_5 = V_0;
		float L_6 = World_GetHeightAtX_m4074285094(__this, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = V_2;
		float L_8 = V_0;
		float L_9 = World_GetUpdraughtAtCoord_m2083694645(__this, L_8, (0.0f), /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_add((float)L_7, (float)((float)il2cpp_codegen_multiply((float)(20.0f), (float)L_9))));
		float L_10 = V_0;
		float L_11 = V_2;
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m1719387948((&L_12), L_10, L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		float L_14 = V_3;
		Vector3_t3722313464  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m1719387948((&L_15), L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		float L_16 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_16, (float)(1.0f)));
	}

IL_005e:
	{
		float L_17 = V_0;
		Camera_t4157153871 * L_18 = __this->get_mainCamera_6();
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = (&V_4)->get_x_0();
		int32_t L_22 = __this->get_NumberOfSegmentsEachDir_2();
		if ((((float)L_17) < ((float)((float)il2cpp_codegen_add((float)L_21, (float)(((float)((float)L_22))))))))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}
}
// System.Void World::EndGame()
extern "C"  void World_EndGame_m3361102908 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	{
		Menu_t2559899777 * L_0 = __this->get_EndMenu_17();
		Menu_Enable_m773214881(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void World::AddThermal()
extern "C"  void World_AddThermal_m4143925271 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_AddThermal_m4143925271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Color_t2555686324  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Camera_t4157153871 * L_0 = __this->get_mainCamera_6();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_0();
		float L_4 = Random_Range_m2202990745(NULL /*static, unused*/, (-20.0f), (20.0f), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_3, (float)L_4));
		float L_5 = V_0;
		float L_6 = World_GetUpdraughtAtCoord_m2083694645(__this, L_5, (0.0f), /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = V_2;
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = World_GetHeightAtX_m4074285094(__this, L_9, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((&V_3), L_8, ((float)il2cpp_codegen_subtract((float)L_10, (float)(2.5f))), (5.0f), /*hidden argument*/NULL);
		float L_11 = V_2;
		Vector3__ctor_m3353183577((&V_4), (0.0f), ((float)il2cpp_codegen_multiply((float)L_11, (float)(1.0f))), (0.0f), /*hidden argument*/NULL);
		float L_12 = Random_Range_m2202990745(NULL /*static, unused*/, (0.5f), (1.0f), /*hidden argument*/NULL);
		V_5 = ((float)il2cpp_codegen_multiply((float)L_12, (float)(0.5f)));
		float L_13 = Random_Range_m2202990745(NULL /*static, unused*/, (0.5f), (0.9f), /*hidden argument*/NULL);
		V_6 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(0.4f)));
		float L_14 = V_5;
		float L_15 = V_5;
		float L_16 = V_5;
		float L_17 = V_6;
		Color__ctor_m2943235014((&V_7), L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_18 = Component_GetComponent_TisParticleSystem_t1800779281_m3884485303(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t1800779281_m3884485303_RuntimeMethod_var);
		Vector3_t3722313464  L_19 = V_3;
		Vector3_t3722313464  L_20 = V_4;
		Color_t2555686324  L_21 = V_7;
		Color32_t2600501292  L_22 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		ParticleSystem_Emit_m497964751(L_18, L_19, L_20, (0.5f), (1.0f), L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = V_3;
		Vector3_t3722313464  L_24 = L_23;
		RuntimeObject * L_25 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2531813931, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		return;
	}
}
// System.Void World::Update()
extern "C"  void World_Update_m3671593747 (World_t3793043157 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_Update_m3671593747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		GameObject_t1113636619 * L_0 = __this->get_Sky_4();
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = __this->get_mainCamera_6();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_0();
		GameObject_t1113636619 * L_6 = __this->get_Sky_4();
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = (&V_1)->get_y_1();
		GameObject_t1113636619 * L_10 = __this->get_Sky_4();
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		float L_13 = (&V_2)->get_z_2();
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), L_5, L_9, L_13, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_1, L_14, /*hidden argument*/NULL);
		float L_15 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		World_UpdateParticles_m1813833926(__this, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		bool L_16 = Debug_get_isDebugBuild_m1389897688(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		World_DrawUpdraughts_m3321137354(__this, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_17 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)1000), /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00eb;
		}
	}
	{
		Camera_t4157153871 * L_18 = __this->get_mainCamera_6();
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = (&V_4)->get_x_0();
		float L_22 = Random_Range_m2202990745(NULL /*static, unused*/, (0.5f), (1.5f), /*hidden argument*/NULL);
		int32_t L_23 = __this->get_NumberOfSegmentsEachDir_2();
		float L_24 = Random_Range_m2202990745(NULL /*static, unused*/, (17.0f), (40.0f), /*hidden argument*/NULL);
		Vector3__ctor_m1719387948((&V_3), ((float)il2cpp_codegen_add((float)L_21, (float)((float)il2cpp_codegen_multiply((float)L_22, (float)(((float)((float)L_23))))))), L_24, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = V_3;
		World_CreateCloud_m1748687854(__this, L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_26 = V_3;
		Vector3_t3722313464  L_27 = L_26;
		RuntimeObject * L_28 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_27);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral4223207902, L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
	}

IL_00eb:
	{
		int32_t L_30 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)50), /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00fe;
		}
	}
	{
		World_AddThermal_m4143925271(__this, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		return;
	}
}
// System.Void World::<Start>m__0()
extern "C"  void World_U3CStartU3Em__0_m3761361519 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_U3CStartU3Em__0_m3761361519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2429840862, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WorldSegment::.ctor()
extern "C"  void WorldSegment__ctor_m972241666 (WorldSegment_t1063874133 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Segment_Width_2((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldSegment::SetHeights(System.Single,System.Single)
extern "C"  void WorldSegment_SetHeights_m991205745 (WorldSegment_t1063874133 * __this, float ___left0, float ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldSegment_SetHeights_m991205745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	float V_3 = 0.0f;
	Color_t2555686324  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Int32U5BU5D_t385246372* V_5 = NULL;
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Mesh_t3648964284 * V_7 = NULL;
	{
		V_0 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)5));
		V_1 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4));
		V_2 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_0 = ___right1;
		float L_1 = ___left0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = tanf(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		V_3 = ((float)il2cpp_codegen_add((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)(0.6f), (float)L_2))));
		float L_3 = V_3;
		Color__ctor_m286683560((&V_4), (0.0f), L_3, (0.0f), /*hidden argument*/NULL);
		V_5 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)6));
		Vector3__ctor_m3353183577((&V_6), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_4 = V_1;
		float L_5 = __this->get_Segment_Width_2();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), ((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_5)), (-100.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_6;
		Vector3U5BU5D_t1718750761* L_7 = V_1;
		float L_8 = __this->get_Segment_Width_2();
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_8)), (-100.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_9;
		Vector3U5BU5D_t1718750761* L_10 = V_1;
		float L_11 = __this->get_Segment_Width_2();
		float L_12 = ___left0;
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), ((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_11)), L_12, (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_13;
		Vector3U5BU5D_t1718750761* L_14 = V_1;
		float L_15 = __this->get_Segment_Width_2();
		float L_16 = ___right1;
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_15)), L_16, (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))) = L_17;
		Int32U5BU5D_t385246372* L_18 = V_5;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t385246372* L_19 = V_5;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		Int32U5BU5D_t385246372* L_20 = V_5;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		Int32U5BU5D_t385246372* L_21 = V_5;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)1);
		Int32U5BU5D_t385246372* L_22 = V_5;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)2);
		Int32U5BU5D_t385246372* L_23 = V_5;
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (int32_t)3);
		Vector3U5BU5D_t1718750761* L_24 = V_2;
		Vector3_t3722313464  L_25 = V_6;
		*(Vector3_t3722313464 *)((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_25;
		Vector3U5BU5D_t1718750761* L_26 = V_2;
		Vector3_t3722313464  L_27 = V_6;
		*(Vector3_t3722313464 *)((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_27;
		Vector3U5BU5D_t1718750761* L_28 = V_2;
		Vector3_t3722313464  L_29 = V_6;
		*(Vector3_t3722313464 *)((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_29;
		Vector3U5BU5D_t1718750761* L_30 = V_2;
		Vector3_t3722313464  L_31 = V_6;
		*(Vector3_t3722313464 *)((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))) = L_31;
		Mesh_t3648964284 * L_32 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_32, /*hidden argument*/NULL);
		V_7 = L_32;
		Mesh_t3648964284 * L_33 = V_7;
		Vector3U5BU5D_t1718750761* L_34 = V_1;
		Mesh_set_vertices_m2084450642(L_33, L_34, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_35 = V_7;
		Int32U5BU5D_t385246372* L_36 = V_5;
		Mesh_set_triangles_m255556250(L_35, L_36, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_37 = V_7;
		Vector3U5BU5D_t1718750761* L_38 = V_2;
		Mesh_set_normals_m332514528(L_37, L_38, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_39 = Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var);
		Mesh_t3648964284 * L_40 = V_7;
		MeshFilter_set_mesh_m1415871686(L_39, L_40, /*hidden argument*/NULL);
		Vector2U5BU5D_t1457185986* L_41 = V_0;
		float L_42 = __this->get_Segment_Width_2();
		Vector2_t2156229523  L_43;
		memset(&L_43, 0, sizeof(L_43));
		Vector2__ctor_m3970636864((&L_43), ((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_42)), (-100.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_43;
		Vector2U5BU5D_t1457185986* L_44 = V_0;
		float L_45 = __this->get_Segment_Width_2();
		Vector2_t2156229523  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Vector2__ctor_m3970636864((&L_46), ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_45)), (-100.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_46;
		Vector2U5BU5D_t1457185986* L_47 = V_0;
		float L_48 = __this->get_Segment_Width_2();
		float L_49 = ___right1;
		Vector2_t2156229523  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector2__ctor_m3970636864((&L_50), ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_48)), L_49, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_50;
		Vector2U5BU5D_t1457185986* L_51 = V_0;
		float L_52 = __this->get_Segment_Width_2();
		float L_53 = ___left0;
		Vector2_t2156229523  L_54;
		memset(&L_54, 0, sizeof(L_54));
		Vector2__ctor_m3970636864((&L_54), ((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_52)), L_53, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))) = L_54;
		Vector2U5BU5D_t1457185986* L_55 = V_0;
		float L_56 = __this->get_Segment_Width_2();
		Vector2_t2156229523  L_57;
		memset(&L_57, 0, sizeof(L_57));
		Vector2__ctor_m3970636864((&L_57), ((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_56)), (-100.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_55)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))) = L_57;
		PolygonCollider2D_t57175488 * L_58 = Component_GetComponent_TisPolygonCollider2D_t57175488_m2113441413(__this, /*hidden argument*/Component_GetComponent_TisPolygonCollider2D_t57175488_m2113441413_RuntimeMethod_var);
		Vector2U5BU5D_t1457185986* L_59 = V_0;
		PolygonCollider2D_SetPath_m3164918375(L_58, 0, L_59, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_60 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		Material_t340375123 * L_61 = Renderer_get_material_m4171603682(L_60, /*hidden argument*/NULL);
		Color_t2555686324  L_62 = V_4;
		Material_set_color_m1794818007(L_61, L_62, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldSegment::Start()
extern "C"  void WorldSegment_Start_m993340276 (WorldSegment_t1063874133 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WorldSegment::Update()
extern "C"  void WorldSegment_Update_m1409196886 (WorldSegment_t1063874133 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WrapObject::.ctor()
extern "C"  void WrapObject__ctor_m4048224838 (WrapObject_t681947308 * __this, const RuntimeMethod* method)
{
	{
		__this->set_WorldWidth_2((600.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WrapObject::Start()
extern "C"  void WrapObject_Start_m2745063844 (WrapObject_t681947308 * __this, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mainCamera_3(L_0);
		return;
	}
}
// System.Void WrapObject::Update()
extern "C"  void WrapObject_Update_m2092970138 (WrapObject_t681947308 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_0();
		Camera_t4157153871 * L_3 = __this->get_mainCamera_3();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_6));
		float L_7 = V_0;
		float L_8 = __this->get_WorldWidth_2();
		if ((!(((float)L_7) > ((float)((float)((float)L_8/(float)(2.0f)))))))
		{
			goto IL_0065;
		}
	}
	{
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_10 = __this->get_WorldWidth_2();
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), ((-L_10)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_Translate_m1810197270(L_9, L_11, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0065:
	{
		float L_12 = V_0;
		float L_13 = __this->get_WorldWidth_2();
		if ((!(((float)L_12) < ((float)((float)((float)((-L_13))/(float)(2.0f)))))))
		{
			goto IL_0098;
		}
	}
	{
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_15 = __this->get_WorldWidth_2();
		Vector3_t3722313464  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m3353183577((&L_16), L_15, (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_Translate_m1810197270(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0098:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
