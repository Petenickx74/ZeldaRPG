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

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.String
struct String_t;
// SFXManager
struct SFXManager_t3589933374;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_2;
	// System.Single PlayerController::currentMoveSpeed
	float ___currentMoveSpeed_3;
	// System.Single PlayerController::diagonalMoveModifier
	float ___diagonalMoveModifier_4;
	// UnityEngine.Animator PlayerController::anim
	Animator_t69676727 * ___anim_5;
	// UnityEngine.Rigidbody2D PlayerController::myRigidbody
	Rigidbody2D_t502193897 * ___myRigidbody_6;
	// System.Boolean PlayerController::playerMoving
	bool ___playerMoving_7;
	// UnityEngine.Vector2 PlayerController::lastMove
	Vector2_t2243707579  ___lastMove_8;
	// System.Boolean PlayerController::attacking
	bool ___attacking_10;
	// System.Single PlayerController::attackTime
	float ___attackTime_11;
	// System.Single PlayerController::attackTimeCounter
	float ___attackTimeCounter_12;
	// System.String PlayerController::startPoint
	String_t* ___startPoint_13;
	// System.Boolean PlayerController::canMove
	bool ___canMove_14;
	// SFXManager PlayerController::sfxMan
	SFXManager_t3589933374 * ___sfxMan_15;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_currentMoveSpeed_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___currentMoveSpeed_3)); }
	inline float get_currentMoveSpeed_3() const { return ___currentMoveSpeed_3; }
	inline float* get_address_of_currentMoveSpeed_3() { return &___currentMoveSpeed_3; }
	inline void set_currentMoveSpeed_3(float value)
	{
		___currentMoveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_diagonalMoveModifier_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___diagonalMoveModifier_4)); }
	inline float get_diagonalMoveModifier_4() const { return ___diagonalMoveModifier_4; }
	inline float* get_address_of_diagonalMoveModifier_4() { return &___diagonalMoveModifier_4; }
	inline void set_diagonalMoveModifier_4(float value)
	{
		___diagonalMoveModifier_4 = value;
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___anim_5)); }
	inline Animator_t69676727 * get_anim_5() const { return ___anim_5; }
	inline Animator_t69676727 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t69676727 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_myRigidbody_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___myRigidbody_6)); }
	inline Rigidbody2D_t502193897 * get_myRigidbody_6() const { return ___myRigidbody_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidbody_6() { return &___myRigidbody_6; }
	inline void set_myRigidbody_6(Rigidbody2D_t502193897 * value)
	{
		___myRigidbody_6 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_6, value);
	}

	inline static int32_t get_offset_of_playerMoving_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerMoving_7)); }
	inline bool get_playerMoving_7() const { return ___playerMoving_7; }
	inline bool* get_address_of_playerMoving_7() { return &___playerMoving_7; }
	inline void set_playerMoving_7(bool value)
	{
		___playerMoving_7 = value;
	}

	inline static int32_t get_offset_of_lastMove_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___lastMove_8)); }
	inline Vector2_t2243707579  get_lastMove_8() const { return ___lastMove_8; }
	inline Vector2_t2243707579 * get_address_of_lastMove_8() { return &___lastMove_8; }
	inline void set_lastMove_8(Vector2_t2243707579  value)
	{
		___lastMove_8 = value;
	}

	inline static int32_t get_offset_of_attacking_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___attacking_10)); }
	inline bool get_attacking_10() const { return ___attacking_10; }
	inline bool* get_address_of_attacking_10() { return &___attacking_10; }
	inline void set_attacking_10(bool value)
	{
		___attacking_10 = value;
	}

	inline static int32_t get_offset_of_attackTime_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___attackTime_11)); }
	inline float get_attackTime_11() const { return ___attackTime_11; }
	inline float* get_address_of_attackTime_11() { return &___attackTime_11; }
	inline void set_attackTime_11(float value)
	{
		___attackTime_11 = value;
	}

	inline static int32_t get_offset_of_attackTimeCounter_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___attackTimeCounter_12)); }
	inline float get_attackTimeCounter_12() const { return ___attackTimeCounter_12; }
	inline float* get_address_of_attackTimeCounter_12() { return &___attackTimeCounter_12; }
	inline void set_attackTimeCounter_12(float value)
	{
		___attackTimeCounter_12 = value;
	}

	inline static int32_t get_offset_of_startPoint_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___startPoint_13)); }
	inline String_t* get_startPoint_13() const { return ___startPoint_13; }
	inline String_t** get_address_of_startPoint_13() { return &___startPoint_13; }
	inline void set_startPoint_13(String_t* value)
	{
		___startPoint_13 = value;
		Il2CppCodeGenWriteBarrier(&___startPoint_13, value);
	}

	inline static int32_t get_offset_of_canMove_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___canMove_14)); }
	inline bool get_canMove_14() const { return ___canMove_14; }
	inline bool* get_address_of_canMove_14() { return &___canMove_14; }
	inline void set_canMove_14(bool value)
	{
		___canMove_14 = value;
	}

	inline static int32_t get_offset_of_sfxMan_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___sfxMan_15)); }
	inline SFXManager_t3589933374 * get_sfxMan_15() const { return ___sfxMan_15; }
	inline SFXManager_t3589933374 ** get_address_of_sfxMan_15() { return &___sfxMan_15; }
	inline void set_sfxMan_15(SFXManager_t3589933374 * value)
	{
		___sfxMan_15 = value;
		Il2CppCodeGenWriteBarrier(&___sfxMan_15, value);
	}
};

struct PlayerController_t4148409433_StaticFields
{
public:
	// System.Boolean PlayerController::playerExists
	bool ___playerExists_9;

public:
	inline static int32_t get_offset_of_playerExists_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433_StaticFields, ___playerExists_9)); }
	inline bool get_playerExists_9() const { return ___playerExists_9; }
	inline bool* get_address_of_playerExists_9() { return &___playerExists_9; }
	inline void set_playerExists_9(bool value)
	{
		___playerExists_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
