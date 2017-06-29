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

// NPCMovement
struct  NPCMovement_t1765980670  : public MonoBehaviour_t1158329972
{
public:
	// System.Single NPCMovement::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Rigidbody2D NPCMovement::myRigidbody
	Rigidbody2D_t502193897 * ___myRigidbody_3;
	// System.Boolean NPCMovement::isWalking
	bool ___isWalking_4;
	// System.Single NPCMovement::walkTime
	float ___walkTime_5;
	// System.Single NPCMovement::walkCounter
	float ___walkCounter_6;
	// System.Single NPCMovement::waitTime
	float ___waitTime_7;
	// System.Single NPCMovement::waitCounter
	float ___waitCounter_8;
	// System.Int32 NPCMovement::WalkDirection
	int32_t ___WalkDirection_9;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_3() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___myRigidbody_3)); }
	inline Rigidbody2D_t502193897 * get_myRigidbody_3() const { return ___myRigidbody_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidbody_3() { return &___myRigidbody_3; }
	inline void set_myRigidbody_3(Rigidbody2D_t502193897 * value)
	{
		___myRigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_3, value);
	}

	inline static int32_t get_offset_of_isWalking_4() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___isWalking_4)); }
	inline bool get_isWalking_4() const { return ___isWalking_4; }
	inline bool* get_address_of_isWalking_4() { return &___isWalking_4; }
	inline void set_isWalking_4(bool value)
	{
		___isWalking_4 = value;
	}

	inline static int32_t get_offset_of_walkTime_5() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___walkTime_5)); }
	inline float get_walkTime_5() const { return ___walkTime_5; }
	inline float* get_address_of_walkTime_5() { return &___walkTime_5; }
	inline void set_walkTime_5(float value)
	{
		___walkTime_5 = value;
	}

	inline static int32_t get_offset_of_walkCounter_6() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___walkCounter_6)); }
	inline float get_walkCounter_6() const { return ___walkCounter_6; }
	inline float* get_address_of_walkCounter_6() { return &___walkCounter_6; }
	inline void set_walkCounter_6(float value)
	{
		___walkCounter_6 = value;
	}

	inline static int32_t get_offset_of_waitTime_7() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___waitTime_7)); }
	inline float get_waitTime_7() const { return ___waitTime_7; }
	inline float* get_address_of_waitTime_7() { return &___waitTime_7; }
	inline void set_waitTime_7(float value)
	{
		___waitTime_7 = value;
	}

	inline static int32_t get_offset_of_waitCounter_8() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___waitCounter_8)); }
	inline float get_waitCounter_8() const { return ___waitCounter_8; }
	inline float* get_address_of_waitCounter_8() { return &___waitCounter_8; }
	inline void set_waitCounter_8(float value)
	{
		___waitCounter_8 = value;
	}

	inline static int32_t get_offset_of_WalkDirection_9() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___WalkDirection_9)); }
	inline int32_t get_WalkDirection_9() const { return ___WalkDirection_9; }
	inline int32_t* get_address_of_WalkDirection_9() { return &___WalkDirection_9; }
	inline void set_WalkDirection_9(int32_t value)
	{
		___WalkDirection_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
