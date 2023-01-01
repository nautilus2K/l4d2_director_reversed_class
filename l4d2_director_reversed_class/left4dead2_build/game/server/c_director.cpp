//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose: 
//
// $NoKeywords: $
//===========================================================================//

//One of the options for registering console commands.
CON_COMMAND(director_start, "")
{
	
}

CON_COMMAND(director_stop, "")
{
	
}

ConVar *director_debug = NULL;

void CDirector::ClearCachedBotQueries();
{
	
}

void CDirector::ForceNextStage();
{
	
}

float CDirector::GetAveragedSurvivorSpan();
{
	return m_fAvgSurvivorSpan;
}

float CDirector::GetAveragedSurvivorSpeed();
{
	return m_fAvgSurvivorSpeed;
}

int CDirector::GetCommonInfectedCount();
{
	
}

float CDirector::GetFurthestSurvivorFlow();
{
	return m_fFurthestSurvivorFlow;
}

std::string CDirector::GetGameMode()
{
	
}

float CDirector::GetHoldoutCooldownEndTime()
{
	
}

int CDirector::GetPendingMobCount()
{
	
}

bool CDirector::HasAnySurvivorLeftSafeArea()
{
	return m_bHasSurvivorLeftSafeArea;
}

bool CDirector::IsAnySurvivorInCombat()
{
	
}

bool CDirector::IsPlayingOnConsole() //???
{
	
}

bool CDirector::IsSinglePlayerGame();
{
	
}

bool CDirector::IsTankInPlay()
{
	
}

void CDirector::L4D1SurvivorGiveItem()
{
	
}

void CDirector::PlayMegaMobWarningSounds()
{
	
}

void CDirector::ResetMobTime()
{
	
}

void CDirector::ResetSpecialTimers()
{
	
}

void CDirector::SetHoldoutCooldownEndTime( float time )
{
	
}

void CDirector::UserDefinedEvent1()
{
	
}

void CDirector::UserDefinedEvent2()
{
	
}

void CDirector::UserDefinedEvent3()
{
	
}

void CDirector::UserDefinedEvent4()
{
	
}

ConVar director_debug("director_debug", "0", FCVAR_CHEAT);

