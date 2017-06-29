#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayerStats
struct PlayerStats_t2629781060;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HurtPlayer
struct  HurtPlayer_t2838002628  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 HurtPlayer::damageToGive
	int32_t ___damageToGive_2;
	// System.Int32 HurtPlayer::currentDamage
	int32_t ___currentDamage_3;
	// PlayerStats HurtPlayer::thePS
	PlayerStats_t2629781060 * ___thePS_4;

public:
	inline static int32_t get_offset_of_damageToGive_2() { return static_cast<int32_t>(offsetof(HurtPlayer_t2838002628, ___damageToGive_2)); }
	inline int32_t get_damageToGive_2() const { return ___damageToGive_2; }
	inline int32_t* get_address_of_damageToGive_2() { return &___damageToGive_2; }
	inline void set_damageToGive_2(int32_t value)
	{
		___damageToGive_2 = value;
	}

	inline static int32_t get_offset_of_currentDamage_3() { return static_cast<int32_t>(offsetof(HurtPlayer_t2838002628, ___currentDamage_3)); }
	inline int32_t get_currentDamage_3() const { return ___currentDamage_3; }
	inline int32_t* get_address_of_currentDamage_3() { return &___currentDamage_3; }
	inline void set_currentDamage_3(int32_t value)
	{
		___currentDamage_3 = value;
	}

	inline static int32_t get_offset_of_thePS_4() { return static_cast<int32_t>(offsetof(HurtPlayer_t2838002628, ___thePS_4)); }
	inline PlayerStats_t2629781060 * get_thePS_4() const { return ___thePS_4; }
	inline PlayerStats_t2629781060 ** get_address_of_thePS_4() { return &___thePS_4; }
	inline void set_thePS_4(PlayerStats_t2629781060 * value)
	{
		___thePS_4 = value;
		Il2CppCodeGenWriteBarrier(&___thePS_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
