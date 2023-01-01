//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose: 
//
// $NoKeywords: $
//===========================================================================//

#ifndef _INCLUDE_DIRECTOR_VTABLES_H_
#define _INCLUDE_DIRECTOR_VTABLES_H_

#include "game_events.h"
#include "terror_player.h"

class CDirectorItemManager;
class CDirectorItemManager_vtable
{
	void (* Reset)(CDirectorItemManager*); 
	void (* OnBeginChangeLevel)(CDirectorItemManager*); 
	void (* OnMapLoaded)(CDirectorItemManager*); 
};

class CDirectorMusicBanks;
class CDirectorMusicBanks_vtable
{
	void (* OnBeginTransition)(CDirectorMusicBanks*,bool); 
	void (* OnRoundStart)(CDirectorMusicBanks*); 
	void (* OnServerShutdown)(CDirectorMusicBanks*); 
};

class CDirectorSessionManager;
class CDirectorSessionManager_vtable
{
	void (* OnServerShutdown)(CDirectorSessionManager*);
	void (* OnMapLoaded)(CDirectorSessionManager*);
	bool (* UpdateSession)(CDirectorSessionManager*);
	void (* UpdateTeamReadiness)(CDirectorSessionManager*);
	void (* OnBeginChangeLevel)(CDirectorSessionManager*);
	void (* OnGameplayStart)(CDirectorSessionManager*);
	void (* OnFirstSurvivorLeftSafeArea)(CDirectorSessionManager*, CTerrorPlayer*);
	void (* OnPlayerFullyConnected)(CDirectorSessionManager*, CTerrorPlayer*);
	void (* OnPlayerDisconnected)(CDirectorSessionManager*, CTerrorPlayer*);
	int  (* DrawDebug)(CDirectorSessionManager*, int);
};

class CDirectorVersusMode;
class CDirectorVersusMode_vtable
{
	bool (* ShouldReselectCustomFinale)(CDirectorVersusMode*); 
	bool (* SurvivorsCanLevelChange)(CDirectorVersusMode*); 
};

class CDirector;
class CDirector_vtable
{
	void (* CDirector_dtor1)(CDirector*); 
	void (* CDirector_dtor0)(CDirector*); 
	IGameEventListener2_iface IGameEventListener2;
	void (* OnBeginChangeLevel)(CDirector*);
	void (* Reset)(CDirector*);
	void (* UpdateTempo)(CDirector*);
	void (* OnMapLoaded)(CDirector*);
	void (* OnRoundStart)(CDirector*);
	void (* OnServerShutdown)(CDirector*);
	void (* OnBeginTransition)(CDirector*, bool);
	void (* OnGameplayStart)(CDirector*);
	int	 (* GetMaxPlayerZombies)(CDirector*);
	bool (* IsClassAllowed)(CDirector*, ZombieClassType);
	void (* OnPlayerDisconnected)(CDirector*, CTerrorPlayer *);
	bool (* SurvivorsCanLevelChange)(CDirector*);
	void (* OnRestartMap)(CDirector*);
	bool (* ShouldLockTempo)(CDirector*);
	void (* InitScripts)(CDirector*);
	void (* OnForcedRestart)(CDirector*);
	void (* CheckForSurvivorsLeavingSafeArea)(CDirector*);
	void (* OnTeamsReady)(CDirector*);
	void (* UpdateSpecialSpawns)(CDirector*);
	bool (* ShouldAllowSpecialSpawns)(CDirector*);
	void (* ShuffleThreatRoster)(CDirector*, ZombieClassType);
	bool (* ShouldReselectCustomFinale)(CDirector*);
	bool (* ShouldShowCredits)(CDirector*);
	void (* DiscardOrphanInfected)(CDirector*);
	int  (* GetBaseSpecialLimit)(CDirector*, ZombieClassType);
	int  (* GetDominatorLimit)(CDirector*);
	int  (* DrawDebug)(CDirector*, int);
};

#endif // _INCLUDE_DIRECTOR_VTABLES_H_
