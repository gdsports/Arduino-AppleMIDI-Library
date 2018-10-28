/*!
 *  @file		IRtpMidi.h
 *  Project		Arduino AppleMIDI Library
 *	@brief		RtpMIDI Library for the Arduino
 *  @author		lathoub, hackmancoltaire
 *  License		Code is open source so please feel free to do anything you want with it; you buy me a beer if you use this and we meet someday (Beerware license).
 */

#pragma once

#include "utility/AppleMidi_Defs.h"

BEGIN_APPLEMIDI_NAMESPACE

class IRtpMidi
{
public:
	virtual void OnNoteOn(void* sender, DataByte, DataByte, DataByte) = 0;
	virtual void OnNoteOff(void* sender, DataByte, DataByte, DataByte) = 0;
	virtual void OnPolyPressure(void* sender, DataByte, DataByte, DataByte) = 0;
	virtual void OnChannelPressure(void* sender, DataByte, DataByte) = 0;
	virtual void OnPitchBendChange(void* sender, DataByte, int) = 0;
	virtual void OnProgramChange(void* sender, DataByte, DataByte) = 0;
	virtual void OnControlChange(void* sender, DataByte, DataByte, DataByte) = 0;
	virtual void OnTimeCodeQuarterFrame(void* sender, DataByte) = 0;
	virtual void OnSongSelect(void* sender, DataByte) = 0;
	virtual void OnSongPosition(void* sender, unsigned short) = 0;
	virtual void OnTuneRequest(void* sender) = 0;
	virtual void OnClock(void* sender) = 0;
	virtual void OnStart(void* sender) = 0;
	virtual void OnContinue(void* sender) = 0;
	virtual void OnStop(void* sender) = 0;
	virtual void OnActiveSensing(void* sender) = 0;
	virtual void OnReset(void* sender) = 0;
	virtual void OnSysEx(void* sender, const byte* data, uint16_t size) = 0;
};

END_APPLEMIDI_NAMESPACE
