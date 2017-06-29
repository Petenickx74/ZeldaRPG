#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicController
struct  MusicController_t4192593383  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource[] MusicController::musicTracks
	AudioSourceU5BU5D_t1873220070* ___musicTracks_3;
	// System.Int32 MusicController::currentTrack
	int32_t ___currentTrack_4;
	// System.Boolean MusicController::musicCanPlay
	bool ___musicCanPlay_5;

public:
	inline static int32_t get_offset_of_musicTracks_3() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___musicTracks_3)); }
	inline AudioSourceU5BU5D_t1873220070* get_musicTracks_3() const { return ___musicTracks_3; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_musicTracks_3() { return &___musicTracks_3; }
	inline void set_musicTracks_3(AudioSourceU5BU5D_t1873220070* value)
	{
		___musicTracks_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicTracks_3, value);
	}

	inline static int32_t get_offset_of_currentTrack_4() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___currentTrack_4)); }
	inline int32_t get_currentTrack_4() const { return ___currentTrack_4; }
	inline int32_t* get_address_of_currentTrack_4() { return &___currentTrack_4; }
	inline void set_currentTrack_4(int32_t value)
	{
		___currentTrack_4 = value;
	}

	inline static int32_t get_offset_of_musicCanPlay_5() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___musicCanPlay_5)); }
	inline bool get_musicCanPlay_5() const { return ___musicCanPlay_5; }
	inline bool* get_address_of_musicCanPlay_5() { return &___musicCanPlay_5; }
	inline void set_musicCanPlay_5(bool value)
	{
		___musicCanPlay_5 = value;
	}
};

struct MusicController_t4192593383_StaticFields
{
public:
	// System.Boolean MusicController::mcExists
	bool ___mcExists_2;

public:
	inline static int32_t get_offset_of_mcExists_2() { return static_cast<int32_t>(offsetof(MusicController_t4192593383_StaticFields, ___mcExists_2)); }
	inline bool get_mcExists_2() const { return ___mcExists_2; }
	inline bool* get_address_of_mcExists_2() { return &___mcExists_2; }
	inline void set_mcExists_2(bool value)
	{
		___mcExists_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
