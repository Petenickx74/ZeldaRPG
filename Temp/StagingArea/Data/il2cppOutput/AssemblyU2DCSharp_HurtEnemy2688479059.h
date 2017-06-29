#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// PlayerStats
struct PlayerStats_t2629781060;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HurtEnemy
struct  HurtEnemy_t2688479059  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 HurtEnemy::damageToGive
	int32_t ___damageToGive_2;
	// System.Int32 HurtEnemy::currentDamage
	int32_t ___currentDamage_3;
	// UnityEngine.GameObject HurtEnemy::damageBurst
	GameObject_t1756533147 * ___damageBurst_4;
	// UnityEngine.Transform HurtEnemy::hitPoint
	Transform_t3275118058 * ___hitPoint_5;
	// UnityEngine.GameObject HurtEnemy::damageNumber
	GameObject_t1756533147 * ___damageNumber_6;
	// PlayerStats HurtEnemy::thePS
	PlayerStats_t2629781060 * ___thePS_7;

public:
	inline static int32_t get_offset_of_damageToGive_2() { return static_cast<int32_t>(offsetof(HurtEnemy_t2688479059, ___damageToGive_2)); }
	inline int32_t get_damageToGive_2() const { return ___damageToGive_2; }
	inline int32_t* get_address_of_damageToGive_2() { return &___damageToGive_2; }
	inline void set_damageToGive_2(int32_t value)
	{
		___damageToGive_2 = value;
	}

	inline static int32_t get_offset_of_currentDamage_3() { return static_cast<int32_t>(offsetof(HurtEnemy_t2688479059, ___currentDamage_3)); }
	inline int32_t get_currentDamage_3() const { return ___currentDamage_3; }
	inline int32_t* get_address_of_currentDamage_3() { return &___currentDamage_3; }
	inline void set_currentDamage_3(int32_t value)
	{
		___currentDamage_3 = value;
	}

	inline static int32_t get_offset_of_damageBurst_4() { return static_cast<int32_t>(offsetof(HurtEnemy_t2688479059, ___damageBurst_4)); }
	inline GameObject_t1756533147 * get_damageBurst_4() const { return ___damageBurst_4; }
	inline GameObject_t1756533147 ** get_address_of_damageBurst_4() { return &___damageBurst_4; }
	inline void set_damageBurst_4(GameObject_t1756533147 * value)
	{
		___damageBurst_4 = value;
		Il2CppCodeGenWriteBarrier(&___damageBurst_4, value);
	}

	inline static int32_t get_offset_of_hitPoint_5() { return static_cast<int32_t>(offsetof(HurtEnemy_t2688479059, ___hitPoint_5)); }
	inline Transform_t3275118058 * get_hitPoint_5() const { return ___hitPoint_5; }
	inline Transform_t3275118058 ** get_address_of_hitPoint_5() { return &___hitPoint_5; }
	inline void set_hitPoint_5(Transform_t3275118058 * value)
	{
		___hitPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___hitPoint_5, value);
	}

	inline static int32_t get_offset_of_damageNumber_6() { return static_cast<int32_t>(offsetof(HurtEnemy_t2688479059, ___damageNumber_6)); }
	inline GameObject_t1756533147 * get_damageNumber_6() const { return ___damageNumber_6; }
	inline GameObject_t1756533147 ** get_address_of_damageNumber_6() { return &___damageNumber_6; }
	inline void set_damageNumber_6(GameObject_t1756533147 * value)
	{
		___damageNumber_6 = value;
		Il2CppCodeGenWriteBarrier(&___damageNumber_6, value);
	}

	inline static int32_t get_offset_of_thePS_7() { return static_cast<int32_t>(offsetof(HurtEnemy_t2688479059, ___thePS_7)); }
	inline PlayerStats_t2629781060 * get_thePS_7() const { return ___thePS_7; }
	inline PlayerStats_t2629781060 ** get_address_of_thePS_7() { return &___thePS_7; }
	inline void set_thePS_7(PlayerStats_t2629781060 * value)
	{
		___thePS_7 = value;
		Il2CppCodeGenWriteBarrier(&___thePS_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
