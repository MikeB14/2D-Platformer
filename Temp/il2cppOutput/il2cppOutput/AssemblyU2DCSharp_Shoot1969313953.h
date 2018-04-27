#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shoot
struct  Shoot_t1969313953  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Shoot::TheLaser
	Transform_t3275118058 * ___TheLaser_2;
	// System.Int32 Shoot::ShootTimer
	int32_t ___ShootTimer_3;
	// System.Boolean Shoot::Fire
	bool ___Fire_4;

public:
	inline static int32_t get_offset_of_TheLaser_2() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___TheLaser_2)); }
	inline Transform_t3275118058 * get_TheLaser_2() const { return ___TheLaser_2; }
	inline Transform_t3275118058 ** get_address_of_TheLaser_2() { return &___TheLaser_2; }
	inline void set_TheLaser_2(Transform_t3275118058 * value)
	{
		___TheLaser_2 = value;
		Il2CppCodeGenWriteBarrier(&___TheLaser_2, value);
	}

	inline static int32_t get_offset_of_ShootTimer_3() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___ShootTimer_3)); }
	inline int32_t get_ShootTimer_3() const { return ___ShootTimer_3; }
	inline int32_t* get_address_of_ShootTimer_3() { return &___ShootTimer_3; }
	inline void set_ShootTimer_3(int32_t value)
	{
		___ShootTimer_3 = value;
	}

	inline static int32_t get_offset_of_Fire_4() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___Fire_4)); }
	inline bool get_Fire_4() const { return ___Fire_4; }
	inline bool* get_address_of_Fire_4() { return &___Fire_4; }
	inline void set_Fire_4(bool value)
	{
		___Fire_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
