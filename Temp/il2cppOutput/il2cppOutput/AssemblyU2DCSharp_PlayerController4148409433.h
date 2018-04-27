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

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.SphereCollider
struct SphereCollider_t1662511355;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask PlayerController::groundLayers
	LayerMask_t3188175821  ___groundLayers_2;
	// System.Single PlayerController::speed
	float ___speed_3;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_4;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t4233889191 * ___rb_5;
	// UnityEngine.SphereCollider PlayerController::col
	SphereCollider_t1662511355 * ___col_6;

public:
	inline static int32_t get_offset_of_groundLayers_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___groundLayers_2)); }
	inline LayerMask_t3188175821  get_groundLayers_2() const { return ___groundLayers_2; }
	inline LayerMask_t3188175821 * get_address_of_groundLayers_2() { return &___groundLayers_2; }
	inline void set_groundLayers_2(LayerMask_t3188175821  value)
	{
		___groundLayers_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_jumpForce_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___jumpForce_4)); }
	inline float get_jumpForce_4() const { return ___jumpForce_4; }
	inline float* get_address_of_jumpForce_4() { return &___jumpForce_4; }
	inline void set_jumpForce_4(float value)
	{
		___jumpForce_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rb_5)); }
	inline Rigidbody_t4233889191 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t4233889191 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}

	inline static int32_t get_offset_of_col_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___col_6)); }
	inline SphereCollider_t1662511355 * get_col_6() const { return ___col_6; }
	inline SphereCollider_t1662511355 ** get_address_of_col_6() { return &___col_6; }
	inline void set_col_6(SphereCollider_t1662511355 * value)
	{
		___col_6 = value;
		Il2CppCodeGenWriteBarrier(&___col_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
