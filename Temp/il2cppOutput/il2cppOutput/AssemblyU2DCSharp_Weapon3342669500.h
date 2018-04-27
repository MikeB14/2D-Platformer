#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Weapon
struct  Weapon_t3342669500  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Weapon::fireRate
	float ___fireRate_2;
	// System.Single Weapon::Damage
	float ___Damage_3;
	// UnityEngine.LayerMask Weapon::whatToHit
	LayerMask_t3188175821  ___whatToHit_4;
	// System.Single Weapon::timeToFire
	float ___timeToFire_5;
	// UnityEngine.Transform Weapon::firePoint
	Transform_t3275118058 * ___firePoint_6;

public:
	inline static int32_t get_offset_of_fireRate_2() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___fireRate_2)); }
	inline float get_fireRate_2() const { return ___fireRate_2; }
	inline float* get_address_of_fireRate_2() { return &___fireRate_2; }
	inline void set_fireRate_2(float value)
	{
		___fireRate_2 = value;
	}

	inline static int32_t get_offset_of_Damage_3() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___Damage_3)); }
	inline float get_Damage_3() const { return ___Damage_3; }
	inline float* get_address_of_Damage_3() { return &___Damage_3; }
	inline void set_Damage_3(float value)
	{
		___Damage_3 = value;
	}

	inline static int32_t get_offset_of_whatToHit_4() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___whatToHit_4)); }
	inline LayerMask_t3188175821  get_whatToHit_4() const { return ___whatToHit_4; }
	inline LayerMask_t3188175821 * get_address_of_whatToHit_4() { return &___whatToHit_4; }
	inline void set_whatToHit_4(LayerMask_t3188175821  value)
	{
		___whatToHit_4 = value;
	}

	inline static int32_t get_offset_of_timeToFire_5() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___timeToFire_5)); }
	inline float get_timeToFire_5() const { return ___timeToFire_5; }
	inline float* get_address_of_timeToFire_5() { return &___timeToFire_5; }
	inline void set_timeToFire_5(float value)
	{
		___timeToFire_5 = value;
	}

	inline static int32_t get_offset_of_firePoint_6() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___firePoint_6)); }
	inline Transform_t3275118058 * get_firePoint_6() const { return ___firePoint_6; }
	inline Transform_t3275118058 ** get_address_of_firePoint_6() { return &___firePoint_6; }
	inline void set_firePoint_6(Transform_t3275118058 * value)
	{
		___firePoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___firePoint_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
