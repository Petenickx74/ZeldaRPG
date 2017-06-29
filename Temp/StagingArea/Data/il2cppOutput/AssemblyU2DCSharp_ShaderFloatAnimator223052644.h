#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShaderFloatAnimator
struct  ShaderFloatAnimator_t223052644  : public MonoBehaviour_t1158329972
{
public:
	// System.String ShaderFloatAnimator::_shaderVariable
	String_t* ____shaderVariable_2;
	// System.Single ShaderFloatAnimator::_value
	float ____value_3;
	// UnityEngine.Material ShaderFloatAnimator::_material
	Material_t193706927 * ____material_4;
	// System.Int32 ShaderFloatAnimator::_shaderVariableId
	int32_t ____shaderVariableId_5;

public:
	inline static int32_t get_offset_of__shaderVariable_2() { return static_cast<int32_t>(offsetof(ShaderFloatAnimator_t223052644, ____shaderVariable_2)); }
	inline String_t* get__shaderVariable_2() const { return ____shaderVariable_2; }
	inline String_t** get_address_of__shaderVariable_2() { return &____shaderVariable_2; }
	inline void set__shaderVariable_2(String_t* value)
	{
		____shaderVariable_2 = value;
		Il2CppCodeGenWriteBarrier(&____shaderVariable_2, value);
	}

	inline static int32_t get_offset_of__value_3() { return static_cast<int32_t>(offsetof(ShaderFloatAnimator_t223052644, ____value_3)); }
	inline float get__value_3() const { return ____value_3; }
	inline float* get_address_of__value_3() { return &____value_3; }
	inline void set__value_3(float value)
	{
		____value_3 = value;
	}

	inline static int32_t get_offset_of__material_4() { return static_cast<int32_t>(offsetof(ShaderFloatAnimator_t223052644, ____material_4)); }
	inline Material_t193706927 * get__material_4() const { return ____material_4; }
	inline Material_t193706927 ** get_address_of__material_4() { return &____material_4; }
	inline void set__material_4(Material_t193706927 * value)
	{
		____material_4 = value;
		Il2CppCodeGenWriteBarrier(&____material_4, value);
	}

	inline static int32_t get_offset_of__shaderVariableId_5() { return static_cast<int32_t>(offsetof(ShaderFloatAnimator_t223052644, ____shaderVariableId_5)); }
	inline int32_t get__shaderVariableId_5() const { return ____shaderVariableId_5; }
	inline int32_t* get_address_of__shaderVariableId_5() { return &____shaderVariableId_5; }
	inline void set__shaderVariableId_5(int32_t value)
	{
		____shaderVariableId_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
