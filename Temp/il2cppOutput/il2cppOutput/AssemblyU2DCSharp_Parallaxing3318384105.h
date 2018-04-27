#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Parallaxing
struct  Parallaxing_t3318384105  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] Parallaxing::backgrounds
	TransformU5BU5D_t3764228911* ___backgrounds_2;
	// System.Single[] Parallaxing::parallaxScales
	SingleU5BU5D_t577127397* ___parallaxScales_3;
	// System.Single Parallaxing::smoothing
	float ___smoothing_4;
	// UnityEngine.Transform Parallaxing::cam
	Transform_t3275118058 * ___cam_5;
	// UnityEngine.Vector3 Parallaxing::previousCamPos
	Vector3_t2243707580  ___previousCamPos_6;

public:
	inline static int32_t get_offset_of_backgrounds_2() { return static_cast<int32_t>(offsetof(Parallaxing_t3318384105, ___backgrounds_2)); }
	inline TransformU5BU5D_t3764228911* get_backgrounds_2() const { return ___backgrounds_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_backgrounds_2() { return &___backgrounds_2; }
	inline void set_backgrounds_2(TransformU5BU5D_t3764228911* value)
	{
		___backgrounds_2 = value;
		Il2CppCodeGenWriteBarrier(&___backgrounds_2, value);
	}

	inline static int32_t get_offset_of_parallaxScales_3() { return static_cast<int32_t>(offsetof(Parallaxing_t3318384105, ___parallaxScales_3)); }
	inline SingleU5BU5D_t577127397* get_parallaxScales_3() const { return ___parallaxScales_3; }
	inline SingleU5BU5D_t577127397** get_address_of_parallaxScales_3() { return &___parallaxScales_3; }
	inline void set_parallaxScales_3(SingleU5BU5D_t577127397* value)
	{
		___parallaxScales_3 = value;
		Il2CppCodeGenWriteBarrier(&___parallaxScales_3, value);
	}

	inline static int32_t get_offset_of_smoothing_4() { return static_cast<int32_t>(offsetof(Parallaxing_t3318384105, ___smoothing_4)); }
	inline float get_smoothing_4() const { return ___smoothing_4; }
	inline float* get_address_of_smoothing_4() { return &___smoothing_4; }
	inline void set_smoothing_4(float value)
	{
		___smoothing_4 = value;
	}

	inline static int32_t get_offset_of_cam_5() { return static_cast<int32_t>(offsetof(Parallaxing_t3318384105, ___cam_5)); }
	inline Transform_t3275118058 * get_cam_5() const { return ___cam_5; }
	inline Transform_t3275118058 ** get_address_of_cam_5() { return &___cam_5; }
	inline void set_cam_5(Transform_t3275118058 * value)
	{
		___cam_5 = value;
		Il2CppCodeGenWriteBarrier(&___cam_5, value);
	}

	inline static int32_t get_offset_of_previousCamPos_6() { return static_cast<int32_t>(offsetof(Parallaxing_t3318384105, ___previousCamPos_6)); }
	inline Vector3_t2243707580  get_previousCamPos_6() const { return ___previousCamPos_6; }
	inline Vector3_t2243707580 * get_address_of_previousCamPos_6() { return &___previousCamPos_6; }
	inline void set_previousCamPos_6(Vector3_t2243707580  value)
	{
		___previousCamPos_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
