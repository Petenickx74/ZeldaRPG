#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloatingNumbers
struct  FloatingNumbers_t2360166876  : public MonoBehaviour_t1158329972
{
public:
	// System.Single FloatingNumbers::moveSpeed
	float ___moveSpeed_2;
	// System.Int32 FloatingNumbers::damageNumber
	int32_t ___damageNumber_3;
	// UnityEngine.UI.Text FloatingNumbers::displayNumber
	Text_t356221433 * ___displayNumber_4;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(FloatingNumbers_t2360166876, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_damageNumber_3() { return static_cast<int32_t>(offsetof(FloatingNumbers_t2360166876, ___damageNumber_3)); }
	inline int32_t get_damageNumber_3() const { return ___damageNumber_3; }
	inline int32_t* get_address_of_damageNumber_3() { return &___damageNumber_3; }
	inline void set_damageNumber_3(int32_t value)
	{
		___damageNumber_3 = value;
	}

	inline static int32_t get_offset_of_displayNumber_4() { return static_cast<int32_t>(offsetof(FloatingNumbers_t2360166876, ___displayNumber_4)); }
	inline Text_t356221433 * get_displayNumber_4() const { return ___displayNumber_4; }
	inline Text_t356221433 ** get_address_of_displayNumber_4() { return &___displayNumber_4; }
	inline void set_displayNumber_4(Text_t356221433 * value)
	{
		___displayNumber_4 = value;
		Il2CppCodeGenWriteBarrier(&___displayNumber_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
