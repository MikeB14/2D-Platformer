#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3675451859.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2691167515;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.Joystick
struct  Joystick_t2144252492  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_2;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_3;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_5;
	// UnityEngine.Transform UnityStandardAssets.CrossPlatformInput.Joystick::TheLaser
	Transform_t3275118058 * ___TheLaser_6;
	// UnityEngine.GameObject UnityStandardAssets.CrossPlatformInput.Joystick::SpawnPoint
	GameObject_t1756533147 * ___SpawnPoint_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t2243707580  ___m_StartPos_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_9;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_t2691167515 * ___m_HorizontalVirtualAxis_11;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_t2691167515 * ___m_VerticalVirtualAxis_12;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___MovementRange_2)); }
	inline int32_t get_MovementRange_2() const { return ___MovementRange_2; }
	inline int32_t* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(int32_t value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_axesToUse_3() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___axesToUse_3)); }
	inline int32_t get_axesToUse_3() const { return ___axesToUse_3; }
	inline int32_t* get_address_of_axesToUse_3() { return &___axesToUse_3; }
	inline void set_axesToUse_3(int32_t value)
	{
		___axesToUse_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_4, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_5, value);
	}

	inline static int32_t get_offset_of_TheLaser_6() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___TheLaser_6)); }
	inline Transform_t3275118058 * get_TheLaser_6() const { return ___TheLaser_6; }
	inline Transform_t3275118058 ** get_address_of_TheLaser_6() { return &___TheLaser_6; }
	inline void set_TheLaser_6(Transform_t3275118058 * value)
	{
		___TheLaser_6 = value;
		Il2CppCodeGenWriteBarrier(&___TheLaser_6, value);
	}

	inline static int32_t get_offset_of_SpawnPoint_7() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___SpawnPoint_7)); }
	inline GameObject_t1756533147 * get_SpawnPoint_7() const { return ___SpawnPoint_7; }
	inline GameObject_t1756533147 ** get_address_of_SpawnPoint_7() { return &___SpawnPoint_7; }
	inline void set_SpawnPoint_7(GameObject_t1756533147 * value)
	{
		___SpawnPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___SpawnPoint_7, value);
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_StartPos_8)); }
	inline Vector3_t2243707580  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t2243707580 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t2243707580  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_UseX_9() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_UseX_9)); }
	inline bool get_m_UseX_9() const { return ___m_UseX_9; }
	inline bool* get_address_of_m_UseX_9() { return &___m_UseX_9; }
	inline void set_m_UseX_9(bool value)
	{
		___m_UseX_9 = value;
	}

	inline static int32_t get_offset_of_m_UseY_10() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_UseY_10)); }
	inline bool get_m_UseY_10() const { return ___m_UseY_10; }
	inline bool* get_address_of_m_UseY_10() { return &___m_UseY_10; }
	inline void set_m_UseY_10(bool value)
	{
		___m_UseY_10 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_11() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_HorizontalVirtualAxis_11)); }
	inline VirtualAxis_t2691167515 * get_m_HorizontalVirtualAxis_11() const { return ___m_HorizontalVirtualAxis_11; }
	inline VirtualAxis_t2691167515 ** get_address_of_m_HorizontalVirtualAxis_11() { return &___m_HorizontalVirtualAxis_11; }
	inline void set_m_HorizontalVirtualAxis_11(VirtualAxis_t2691167515 * value)
	{
		___m_HorizontalVirtualAxis_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_HorizontalVirtualAxis_11, value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_12() { return static_cast<int32_t>(offsetof(Joystick_t2144252492, ___m_VerticalVirtualAxis_12)); }
	inline VirtualAxis_t2691167515 * get_m_VerticalVirtualAxis_12() const { return ___m_VerticalVirtualAxis_12; }
	inline VirtualAxis_t2691167515 ** get_address_of_m_VerticalVirtualAxis_12() { return &___m_VerticalVirtualAxis_12; }
	inline void set_m_VerticalVirtualAxis_12(VirtualAxis_t2691167515 * value)
	{
		___m_VerticalVirtualAxis_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalVirtualAxis_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
