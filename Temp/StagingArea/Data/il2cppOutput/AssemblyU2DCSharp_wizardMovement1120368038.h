#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// DialogueManager
struct DialogueManager_t3878200441;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wizardMovement
struct  wizardMovement_t1120368038  : public MonoBehaviour_t1158329972
{
public:
	// System.Single wizardMovement::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Vector2 wizardMovement::minWalkPoint
	Vector2_t2243707579  ___minWalkPoint_3;
	// UnityEngine.Vector2 wizardMovement::maxWalkPoint
	Vector2_t2243707579  ___maxWalkPoint_4;
	// UnityEngine.Rigidbody2D wizardMovement::myRigidbody
	Rigidbody2D_t502193897 * ___myRigidbody_5;
	// System.Boolean wizardMovement::isWalking
	bool ___isWalking_6;
	// System.Single wizardMovement::walkTime
	float ___walkTime_7;
	// System.Single wizardMovement::walkCounter
	float ___walkCounter_8;
	// System.Single wizardMovement::waitTime
	float ___waitTime_9;
	// System.Single wizardMovement::waitCounter
	float ___waitCounter_10;
	// System.Int32 wizardMovement::WalkDirection
	int32_t ___WalkDirection_11;
	// UnityEngine.Collider2D wizardMovement::walkZone
	Collider2D_t646061738 * ___walkZone_12;
	// System.Boolean wizardMovement::hasWalkZone
	bool ___hasWalkZone_13;
	// System.Boolean wizardMovement::canMove
	bool ___canMove_14;
	// DialogueManager wizardMovement::theDM
	DialogueManager_t3878200441 * ___theDM_15;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_minWalkPoint_3() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___minWalkPoint_3)); }
	inline Vector2_t2243707579  get_minWalkPoint_3() const { return ___minWalkPoint_3; }
	inline Vector2_t2243707579 * get_address_of_minWalkPoint_3() { return &___minWalkPoint_3; }
	inline void set_minWalkPoint_3(Vector2_t2243707579  value)
	{
		___minWalkPoint_3 = value;
	}

	inline static int32_t get_offset_of_maxWalkPoint_4() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___maxWalkPoint_4)); }
	inline Vector2_t2243707579  get_maxWalkPoint_4() const { return ___maxWalkPoint_4; }
	inline Vector2_t2243707579 * get_address_of_maxWalkPoint_4() { return &___maxWalkPoint_4; }
	inline void set_maxWalkPoint_4(Vector2_t2243707579  value)
	{
		___maxWalkPoint_4 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_5() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___myRigidbody_5)); }
	inline Rigidbody2D_t502193897 * get_myRigidbody_5() const { return ___myRigidbody_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidbody_5() { return &___myRigidbody_5; }
	inline void set_myRigidbody_5(Rigidbody2D_t502193897 * value)
	{
		___myRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_5, value);
	}

	inline static int32_t get_offset_of_isWalking_6() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___isWalking_6)); }
	inline bool get_isWalking_6() const { return ___isWalking_6; }
	inline bool* get_address_of_isWalking_6() { return &___isWalking_6; }
	inline void set_isWalking_6(bool value)
	{
		___isWalking_6 = value;
	}

	inline static int32_t get_offset_of_walkTime_7() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___walkTime_7)); }
	inline float get_walkTime_7() const { return ___walkTime_7; }
	inline float* get_address_of_walkTime_7() { return &___walkTime_7; }
	inline void set_walkTime_7(float value)
	{
		___walkTime_7 = value;
	}

	inline static int32_t get_offset_of_walkCounter_8() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___walkCounter_8)); }
	inline float get_walkCounter_8() const { return ___walkCounter_8; }
	inline float* get_address_of_walkCounter_8() { return &___walkCounter_8; }
	inline void set_walkCounter_8(float value)
	{
		___walkCounter_8 = value;
	}

	inline static int32_t get_offset_of_waitTime_9() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___waitTime_9)); }
	inline float get_waitTime_9() const { return ___waitTime_9; }
	inline float* get_address_of_waitTime_9() { return &___waitTime_9; }
	inline void set_waitTime_9(float value)
	{
		___waitTime_9 = value;
	}

	inline static int32_t get_offset_of_waitCounter_10() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___waitCounter_10)); }
	inline float get_waitCounter_10() const { return ___waitCounter_10; }
	inline float* get_address_of_waitCounter_10() { return &___waitCounter_10; }
	inline void set_waitCounter_10(float value)
	{
		___waitCounter_10 = value;
	}

	inline static int32_t get_offset_of_WalkDirection_11() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___WalkDirection_11)); }
	inline int32_t get_WalkDirection_11() const { return ___WalkDirection_11; }
	inline int32_t* get_address_of_WalkDirection_11() { return &___WalkDirection_11; }
	inline void set_WalkDirection_11(int32_t value)
	{
		___WalkDirection_11 = value;
	}

	inline static int32_t get_offset_of_walkZone_12() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___walkZone_12)); }
	inline Collider2D_t646061738 * get_walkZone_12() const { return ___walkZone_12; }
	inline Collider2D_t646061738 ** get_address_of_walkZone_12() { return &___walkZone_12; }
	inline void set_walkZone_12(Collider2D_t646061738 * value)
	{
		___walkZone_12 = value;
		Il2CppCodeGenWriteBarrier(&___walkZone_12, value);
	}

	inline static int32_t get_offset_of_hasWalkZone_13() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___hasWalkZone_13)); }
	inline bool get_hasWalkZone_13() const { return ___hasWalkZone_13; }
	inline bool* get_address_of_hasWalkZone_13() { return &___hasWalkZone_13; }
	inline void set_hasWalkZone_13(bool value)
	{
		___hasWalkZone_13 = value;
	}

	inline static int32_t get_offset_of_canMove_14() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___canMove_14)); }
	inline bool get_canMove_14() const { return ___canMove_14; }
	inline bool* get_address_of_canMove_14() { return &___canMove_14; }
	inline void set_canMove_14(bool value)
	{
		___canMove_14 = value;
	}

	inline static int32_t get_offset_of_theDM_15() { return static_cast<int32_t>(offsetof(wizardMovement_t1120368038, ___theDM_15)); }
	inline DialogueManager_t3878200441 * get_theDM_15() const { return ___theDM_15; }
	inline DialogueManager_t3878200441 ** get_address_of_theDM_15() { return &___theDM_15; }
	inline void set_theDM_15(DialogueManager_t3878200441 * value)
	{
		___theDM_15 = value;
		Il2CppCodeGenWriteBarrier(&___theDM_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
