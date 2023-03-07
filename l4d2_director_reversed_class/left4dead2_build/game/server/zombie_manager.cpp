//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose: 
//
// $NoKeywords: $
//===========================================================================//

void __thiscall ZombieManager::SpawnMegaMob(void (__thiscall ***this)(int, int))
{
    void (__thiscall ***v1)(int, int); // edi
    double v2; // st7
    float v3; // ST10_4
    float v4; // [esp+14h] [ebp-4h]

    v1 = this;

    v4 = RandomFloat(2.0, 4.0);
	this->m_flMegaMobSpawnTime = Countdown::Now() + RandomFloat(2.0, 4.0);

	//Setting the timer time and duration
    if ( *((float *)v1 + 14) != v2 )
    {
        (*v1[12])((int)(v1 + 12), (int)(v1 + 14));
        v3 = v2;
        *((float *)v1 + 14) = v3;
    }
    if ( *((float *)v1 + 13) != v4 )
    {
        (*v1[12])((int)(v1 + 12), (int)(v1 + 13));
        *((float *)v1 + 13) = v4;
    }
}

void __thiscall ZombieManager::StartFrame(ZombieManager a1);
{
	if (this->m_bSpawnMegaMobWave)
	{
		if (this->m_flMegaMobSpawnTime != -1 && this->m_flMegaMobSpawnTime <= CountdownTimer::Now())
		{
			ZombieManager::SpawnMob(this, CDirector::GetMegaMobSize(TheDirector));
		}
	}
	else 
	{
		//Spawn pending mobs
	}
}

void __thiscall ZombieManager::ClearPendingMobCount(ZombieManager a1);
{
	m_nPendingMobCount = 0;
}

void __thiscall ZombieManager::ClearPendingMobCount2(ZombieManager a1)
{
	m_nPendingMobCount = 0;
	UTIL_LogPrintf( "%3.2f: ZombieManager::ClearPendingMobCount2: m_nPendingMobCount was cleared!", *(float *)(gpGlobals + 12) );
}

