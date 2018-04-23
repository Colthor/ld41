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


// System.Void
struct Void_t1185182177;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GUISkin
struct GUISkin_t1244372282;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// Menu
struct Menu_t2559899777;
// Menu/MenuActivated
struct MenuActivated_t3536968312;
// TileMapScript/MapSquare[0...,0...]
struct MapSquareU5BU2CU5D_t3810414642;
// System.String
struct String_t;
// PathfindingImpl
struct PathfindingImpl_t3995530112;




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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (TileMapScript_t3658915240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1500[9] = 
{
	TileMapScript_t3658915240::get_offset_of_MapArray_2(),
	TileMapScript_t3658915240::get_offset_of_Squares_X_3(),
	TileMapScript_t3658915240::get_offset_of_Squares_Y_4(),
	TileMapScript_t3658915240::get_offset_of_Square_Size_5(),
	TileMapScript_t3658915240::get_offset_of_Invert_Colliders_6(),
	TileMapScript_t3658915240::get_offset_of_iotaTL_7(),
	TileMapScript_t3658915240::get_offset_of_iotaBR_8(),
	TileMapScript_t3658915240::get_offset_of_LevelData_9(),
	TileMapScript_t3658915240::get_offset_of_pathfinder_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (MapSquare_t3390943120)+ sizeof (RuntimeObject), sizeof(MapSquare_t3390943120_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1501[4] = 
{
	MapSquare_t3390943120::get_offset_of_RawData_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MapSquare_t3390943120::get_offset_of_TextureNum_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MapSquare_t3390943120::get_offset_of_IsWall_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MapSquare_t3390943120::get_offset_of_HasCollider_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (World_t3793043157), -1, sizeof(World_t3793043157_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1502[17] = 
{
	World_t3793043157::get_offset_of_NumberOfSegmentsEachDir_2(),
	World_t3793043157::get_offset_of_WorldSegment_3(),
	World_t3793043157::get_offset_of_Sky_4(),
	World_t3793043157::get_offset_of_GuiSkin_5(),
	World_t3793043157::get_offset_of_mainCamera_6(),
	World_t3793043157::get_offset_of_m_Heights_7(),
	World_t3793043157::get_offset_of_m_Updraught_8(),
	World_t3793043157::get_offset_of_m_ReallyBigMag_9(),
	World_t3793043157::get_offset_of_m_ReallyBigFreq_10(),
	World_t3793043157::get_offset_of_m_BigMag_11(),
	World_t3793043157::get_offset_of_m_BigFreq_12(),
	World_t3793043157::get_offset_of_m_MedMag_13(),
	World_t3793043157::get_offset_of_m_MedFreq_14(),
	World_t3793043157::get_offset_of_m_SmallMag_15(),
	World_t3793043157::get_offset_of_m_SmallFreq_16(),
	World_t3793043157::get_offset_of_EndMenu_17(),
	World_t3793043157_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (WorldSegment_t1063874133), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1503[1] = 
{
	WorldSegment_t1063874133::get_offset_of_Segment_Width_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (WrapObject_t681947308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1504[2] = 
{
	WrapObject_t681947308::get_offset_of_WorldWidth_2(),
	WrapObject_t681947308::get_offset_of_mainCamera_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
