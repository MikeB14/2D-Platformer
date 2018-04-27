#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RBBackground
struct  RBBackground_t1781187456  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RBBackground::ForceMult
	float ___ForceMult_2;
	// UnityEngine.Rigidbody2D RBBackground::rb
	Rigidbody2D_t502193897 * ___rb_3;

public:
	inline static int32_t get_offset_of_ForceMult_2() { return static_cast<int32_t>(offsetof(RBBackground_t1781187456, ___ForceMult_2)); }
	inline float get_ForceMult_2() const { return ___ForceMult_2; }
	inline float* get_address_of_ForceMult_2() { return &___ForceMult_2; }
	inline void set_ForceMult_2(float value)
	{
		___ForceMult_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(RBBackground_t1781187456, ___rb_3)); }
	inline Rigidbody2D_t502193897 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody2D_t502193897 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
