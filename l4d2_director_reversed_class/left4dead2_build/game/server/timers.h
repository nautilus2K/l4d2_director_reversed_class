//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose: 
//
// $NoKeywords: $
//===========================================================================//

#ifndef L4D2SDK_TIMERS_H
#define L4D2SDK_TIMERS_H

#include "network_var.h"

class IntervalTimer 
{
	NetworkVar_iface *vptr;
	float m_timestamp;
};

class CountdownTimer 
{
	NetworkVar_iface *vptr;
	float m_duration;
	float m_timestamp;
};

#endif // L4D2SDK_TIMERS_H
