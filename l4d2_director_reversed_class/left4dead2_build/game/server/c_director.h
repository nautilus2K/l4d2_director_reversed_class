//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose: 
//
// $NoKeywords: $
//===========================================================================//

#ifndef C_DIRECTOR_H
#define C_DIRECTOR_H

#include <cbase.h>
#include <c_baseentity.h>
#include <string>

class CDirector : public C_BasePlayer
{
	virtual void 			ClearCachedBotQueries();
	virtual void			ForceNextStage();
	virtual float			GetAveragedSurvivorSpan();
	virtual float			GetAveragedSurvivorSpeed();
	virtual int				GetCommonInfectedCount();
	virtual float			GetFurthestSurvivorFlow();
	virtual std::string		GetGameMode();
	virtual float			GetHoldoutCooldownEndTime();
	virtual int				GetPendingMobCount();
	virtual bool			HasAnySurvivorLeftSafeArea();
	virtual bool			IsAnySurvivorInCombat();
	virtual bool			IsPlayingOnConsole(); //???
	virtual bool			IsSinglePlayerGame();
	virtual bool			IsTankInPlay();
	virtual void			L4D1SurvivorGiveItem();
	virtual void			PlayMegaMobWarningSounds();
	virtual void			ResetMobTime();
	virtual void			ResetSpecialTimers();
	virtual void			SetHoldoutCooldownEndTime( float time );
	virtual void			UserDefinedEvent1();
	virtual void			UserDefinedEvent2();
	virtual void			UserDefinedEvent3();
	virtual void			UserDefinedEvent4();
};

#endif

