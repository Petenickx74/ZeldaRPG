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

// PlayerController
struct PlayerController_t4148409433;
// CameraController
struct CameraController_t3555666667;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerStartPoint
struct  PlayerStartPoint_t2946039437  : public MonoBehaviour_t1158329972
{
public:
	// PlayerController PlayerStartPoint::thePlayer
	PlayerController_t4148409433 * ___thePlayer_2;
	// CameraController PlayerStartPoint::theCamera
	CameraController_t3555666667 * ___theCamera_3;
	// UnityEngine.Vector2 PlayerStartPoint::startDirection
	Vector2_t2243707579  ___startDirection_4;
	// System.String PlayerStartPoint::pointName
	String_t* ___pointName_5;

public:
	inline static int32_t get_offset_of_thePlayer_2() { return static_cast<int32_t>(offsetof(PlayerStartPoint_t2946039437, ___thePlayer_2)); }
	inline PlayerController_t4148409433 * get_thePlayer_2() const { return ___thePlayer_2; }
	inline PlayerController_t4148409433 ** get_address_of_thePlayer_2() { return &___thePlayer_2; }
	inline void set_thePlayer_2(PlayerController_t4148409433 * value)
	{
		___thePlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_2, value);
	}

	inline static int32_t get_offset_of_theCamera_3() { return static_cast<int32_t>(offsetof(PlayerStartPoint_t2946039437, ___theCamera_3)); }
	inline CameraController_t3555666667 * get_theCamera_3() const { return ___theCamera_3; }
	inline CameraController_t3555666667 ** get_address_of_theCamera_3() { return &___theCamera_3; }
	inline void set_theCamera_3(CameraController_t3555666667 * value)
	{
		___theCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___theCamera_3, value);
	}

	inline static int32_t get_offset_of_startDirection_4() { return static_cast<int32_t>(offsetof(PlayerStartPoint_t2946039437, ___startDirection_4)); }
	inline Vector2_t2243707579  get_startDirection_4() const { return ___startDirection_4; }
	inline Vector2_t2243707579 * get_address_of_startDirection_4() { return &___startDirection_4; }
	inline void set_startDirection_4(Vector2_t2243707579  value)
	{
		___startDirection_4 = value;
	}

	inline static int32_t get_offset_of_pointName_5() { return static_cast<int32_t>(offsetof(PlayerStartPoint_t2946039437, ___pointName_5)); }
	inline String_t* get_pointName_5() const { return ___pointName_5; }
	inline String_t** get_address_of_pointName_5() { return &___pointName_5; }
	inline void set_pointName_5(String_t* value)
	{
		___pointName_5 = value;
		Il2CppCodeGenWriteBarrier(&___pointName_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
