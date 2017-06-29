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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BatController
struct  BatController_t4129777693  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BatController::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Rigidbody2D BatController::myRigidbody
	Rigidbody2D_t502193897 * ___myRigidbody_3;
	// System.Boolean BatController::moving
	bool ___moving_4;
	// System.Single BatController::timeBetweenMove
	float ___timeBetweenMove_5;
	// System.Single BatController::timeBetweenMoveCounter
	float ___timeBetweenMoveCounter_6;
	// System.Single BatController::timeToMove
	float ___timeToMove_7;
	// System.Single BatController::timeToMoveCounter
	float ___timeToMoveCounter_8;
	// UnityEngine.Vector3 BatController::moveDirection
	Vector3_t2243707580  ___moveDirection_9;
	// System.Single BatController::waitToReload
	float ___waitToReload_10;
	// System.Boolean BatController::reloading
	bool ___reloading_11;
	// UnityEngine.GameObject BatController::thePlayer
	GameObject_t1756533147 * ___thePlayer_12;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_3() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___myRigidbody_3)); }
	inline Rigidbody2D_t502193897 * get_myRigidbody_3() const { return ___myRigidbody_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidbody_3() { return &___myRigidbody_3; }
	inline void set_myRigidbody_3(Rigidbody2D_t502193897 * value)
	{
		___myRigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_3, value);
	}

	inline static int32_t get_offset_of_moving_4() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___moving_4)); }
	inline bool get_moving_4() const { return ___moving_4; }
	inline bool* get_address_of_moving_4() { return &___moving_4; }
	inline void set_moving_4(bool value)
	{
		___moving_4 = value;
	}

	inline static int32_t get_offset_of_timeBetweenMove_5() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___timeBetweenMove_5)); }
	inline float get_timeBetweenMove_5() const { return ___timeBetweenMove_5; }
	inline float* get_address_of_timeBetweenMove_5() { return &___timeBetweenMove_5; }
	inline void set_timeBetweenMove_5(float value)
	{
		___timeBetweenMove_5 = value;
	}

	inline static int32_t get_offset_of_timeBetweenMoveCounter_6() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___timeBetweenMoveCounter_6)); }
	inline float get_timeBetweenMoveCounter_6() const { return ___timeBetweenMoveCounter_6; }
	inline float* get_address_of_timeBetweenMoveCounter_6() { return &___timeBetweenMoveCounter_6; }
	inline void set_timeBetweenMoveCounter_6(float value)
	{
		___timeBetweenMoveCounter_6 = value;
	}

	inline static int32_t get_offset_of_timeToMove_7() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___timeToMove_7)); }
	inline float get_timeToMove_7() const { return ___timeToMove_7; }
	inline float* get_address_of_timeToMove_7() { return &___timeToMove_7; }
	inline void set_timeToMove_7(float value)
	{
		___timeToMove_7 = value;
	}

	inline static int32_t get_offset_of_timeToMoveCounter_8() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___timeToMoveCounter_8)); }
	inline float get_timeToMoveCounter_8() const { return ___timeToMoveCounter_8; }
	inline float* get_address_of_timeToMoveCounter_8() { return &___timeToMoveCounter_8; }
	inline void set_timeToMoveCounter_8(float value)
	{
		___timeToMoveCounter_8 = value;
	}

	inline static int32_t get_offset_of_moveDirection_9() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___moveDirection_9)); }
	inline Vector3_t2243707580  get_moveDirection_9() const { return ___moveDirection_9; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_9() { return &___moveDirection_9; }
	inline void set_moveDirection_9(Vector3_t2243707580  value)
	{
		___moveDirection_9 = value;
	}

	inline static int32_t get_offset_of_waitToReload_10() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___waitToReload_10)); }
	inline float get_waitToReload_10() const { return ___waitToReload_10; }
	inline float* get_address_of_waitToReload_10() { return &___waitToReload_10; }
	inline void set_waitToReload_10(float value)
	{
		___waitToReload_10 = value;
	}

	inline static int32_t get_offset_of_reloading_11() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___reloading_11)); }
	inline bool get_reloading_11() const { return ___reloading_11; }
	inline bool* get_address_of_reloading_11() { return &___reloading_11; }
	inline void set_reloading_11(bool value)
	{
		___reloading_11 = value;
	}

	inline static int32_t get_offset_of_thePlayer_12() { return static_cast<int32_t>(offsetof(BatController_t4129777693, ___thePlayer_12)); }
	inline GameObject_t1756533147 * get_thePlayer_12() const { return ___thePlayer_12; }
	inline GameObject_t1756533147 ** get_address_of_thePlayer_12() { return &___thePlayer_12; }
	inline void set_thePlayer_12(GameObject_t1756533147 * value)
	{
		___thePlayer_12 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
