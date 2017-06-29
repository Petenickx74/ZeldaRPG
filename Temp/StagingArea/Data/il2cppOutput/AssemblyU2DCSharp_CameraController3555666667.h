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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraController::followTarget
	GameObject_t1756533147 * ___followTarget_2;
	// UnityEngine.Vector3 CameraController::targetPos
	Vector3_t2243707580  ___targetPos_3;
	// System.Single CameraController::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.BoxCollider2D CameraController::boundBox
	BoxCollider2D_t948534547 * ___boundBox_6;
	// UnityEngine.Vector3 CameraController::minBounds
	Vector3_t2243707580  ___minBounds_7;
	// UnityEngine.Vector3 CameraController::maxBounds
	Vector3_t2243707580  ___maxBounds_8;
	// UnityEngine.Camera CameraController::theCamera
	Camera_t189460977 * ___theCamera_9;
	// System.Single CameraController::halfHeight
	float ___halfHeight_10;
	// System.Single CameraController::halfWidth
	float ___halfWidth_11;

public:
	inline static int32_t get_offset_of_followTarget_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___followTarget_2)); }
	inline GameObject_t1756533147 * get_followTarget_2() const { return ___followTarget_2; }
	inline GameObject_t1756533147 ** get_address_of_followTarget_2() { return &___followTarget_2; }
	inline void set_followTarget_2(GameObject_t1756533147 * value)
	{
		___followTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___followTarget_2, value);
	}

	inline static int32_t get_offset_of_targetPos_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___targetPos_3)); }
	inline Vector3_t2243707580  get_targetPos_3() const { return ___targetPos_3; }
	inline Vector3_t2243707580 * get_address_of_targetPos_3() { return &___targetPos_3; }
	inline void set_targetPos_3(Vector3_t2243707580  value)
	{
		___targetPos_3 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_boundBox_6() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___boundBox_6)); }
	inline BoxCollider2D_t948534547 * get_boundBox_6() const { return ___boundBox_6; }
	inline BoxCollider2D_t948534547 ** get_address_of_boundBox_6() { return &___boundBox_6; }
	inline void set_boundBox_6(BoxCollider2D_t948534547 * value)
	{
		___boundBox_6 = value;
		Il2CppCodeGenWriteBarrier(&___boundBox_6, value);
	}

	inline static int32_t get_offset_of_minBounds_7() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___minBounds_7)); }
	inline Vector3_t2243707580  get_minBounds_7() const { return ___minBounds_7; }
	inline Vector3_t2243707580 * get_address_of_minBounds_7() { return &___minBounds_7; }
	inline void set_minBounds_7(Vector3_t2243707580  value)
	{
		___minBounds_7 = value;
	}

	inline static int32_t get_offset_of_maxBounds_8() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___maxBounds_8)); }
	inline Vector3_t2243707580  get_maxBounds_8() const { return ___maxBounds_8; }
	inline Vector3_t2243707580 * get_address_of_maxBounds_8() { return &___maxBounds_8; }
	inline void set_maxBounds_8(Vector3_t2243707580  value)
	{
		___maxBounds_8 = value;
	}

	inline static int32_t get_offset_of_theCamera_9() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___theCamera_9)); }
	inline Camera_t189460977 * get_theCamera_9() const { return ___theCamera_9; }
	inline Camera_t189460977 ** get_address_of_theCamera_9() { return &___theCamera_9; }
	inline void set_theCamera_9(Camera_t189460977 * value)
	{
		___theCamera_9 = value;
		Il2CppCodeGenWriteBarrier(&___theCamera_9, value);
	}

	inline static int32_t get_offset_of_halfHeight_10() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___halfHeight_10)); }
	inline float get_halfHeight_10() const { return ___halfHeight_10; }
	inline float* get_address_of_halfHeight_10() { return &___halfHeight_10; }
	inline void set_halfHeight_10(float value)
	{
		___halfHeight_10 = value;
	}

	inline static int32_t get_offset_of_halfWidth_11() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___halfWidth_11)); }
	inline float get_halfWidth_11() const { return ___halfWidth_11; }
	inline float* get_address_of_halfWidth_11() { return &___halfWidth_11; }
	inline void set_halfWidth_11(float value)
	{
		___halfWidth_11 = value;
	}
};

struct CameraController_t3555666667_StaticFields
{
public:
	// System.Boolean CameraController::cameraExists
	bool ___cameraExists_5;

public:
	inline static int32_t get_offset_of_cameraExists_5() { return static_cast<int32_t>(offsetof(CameraController_t3555666667_StaticFields, ___cameraExists_5)); }
	inline bool get_cameraExists_5() const { return ___cameraExists_5; }
	inline bool* get_address_of_cameraExists_5() { return &___cameraExists_5; }
	inline void set_cameraExists_5(bool value)
	{
		___cameraExists_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
