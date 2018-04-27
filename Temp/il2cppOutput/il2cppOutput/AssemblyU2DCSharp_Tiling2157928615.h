#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiling
struct  Tiling_t2157928615  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Tiling::offsetX
	int32_t ___offsetX_2;
	// System.Boolean Tiling::hasARightBuddy
	bool ___hasARightBuddy_3;
	// System.Boolean Tiling::hasALeftBuddy
	bool ___hasALeftBuddy_4;
	// System.Boolean Tiling::reverseScale
	bool ___reverseScale_5;
	// System.Single Tiling::spriteWidth
	float ___spriteWidth_6;
	// UnityEngine.Camera Tiling::cam
	Camera_t189460977 * ___cam_7;
	// UnityEngine.Transform Tiling::myTransform
	Transform_t3275118058 * ___myTransform_8;

public:
	inline static int32_t get_offset_of_offsetX_2() { return static_cast<int32_t>(offsetof(Tiling_t2157928615, ___offsetX_2)); }
	inline int32_t get_offsetX_2() const { return ___offsetX_2; }
	inline int32_t* get_address_of_offsetX_2() { return &___offsetX_2; }
	inline void set_offsetX_2(int32_t value)
	{
		___offsetX_2 = value;
	}

	inline static int32_t get_offset_of_hasARightBuddy_3() { return static_cast<int32_t>(offsetof(Tiling_t2157928615, ___hasARightBuddy_3)); }
	inline bool get_hasARightBuddy_3() const { return ___hasARightBuddy_3; }
	inline bool* get_address_of_hasARightBuddy_3() { return &___hasARightBuddy_3; }
	inline void set_hasARightBuddy_3(bool value)
	{
		___hasARightBuddy_3 = value;
	}

	inline static int32_t get_offset_of_hasALeftBuddy_4() { return static_cast<int32_t>(offsetof(Tiling_t2157928615, ___hasALeftBuddy_4)); }
	inline bool get_hasALeftBuddy_4() const { return ___hasALeftBuddy_4; }
	inline bool* get_address_of_hasALeftBuddy_4() { return &___hasALeftBuddy_4; }
	inline void set_hasALeftBuddy_4(bool value)
	{
		___hasALeftBuddy_4 = value;
	}

	inline static int32_t get_offset_of_reverseScale_5() { return static_cast<int32_t>(offsetof(Tiling_t2157928615, ___reverseScale_5)); }
	inline bool get_reverseScale_5() const { return ___reverseScale_5; }
	inline bool* get_address_of_reverseScale_5() { return &___reverseScale_5; }
	inline void set_reverseScale_5(bool value)
	{
		___reverseScale_5 = value;
	}

	inline static int32_t get_offset_of_spriteWidth_6() { return static_cast<int32_t>(offsetof(Tiling_t2157928615, ___spriteWidth_6)); }
	inline float get_spriteWidth_6() const { return ___spriteWidth_6; }
	inline float* get_address_of_spriteWidth_6() { return &___spriteWidth_6; }
	inline void set_spriteWidth_6(float value)
	{
		___spriteWidth_6 = value;
	}

	inline static int32_t get_offset_of_cam_7() { return static_cast<int32_t>(offsetof(Tiling_t2157928615, ___cam_7)); }
	inline Camera_t189460977 * get_cam_7() const { return ___cam_7; }
	inline Camera_t189460977 ** get_address_of_cam_7() { return &___cam_7; }
	inline void set_cam_7(Camera_t189460977 * value)
	{
		___cam_7 = value;
		Il2CppCodeGenWriteBarrier(&___cam_7, value);
	}

	inline static int32_t get_offset_of_myTransform_8() { return static_cast<int32_t>(offsetof(Tiling_t2157928615, ___myTransform_8)); }
	inline Transform_t3275118058 * get_myTransform_8() const { return ___myTransform_8; }
	inline Transform_t3275118058 ** get_address_of_myTransform_8() { return &___myTransform_8; }
	inline void set_myTransform_8(Transform_t3275118058 * value)
	{
		___myTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___myTransform_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
