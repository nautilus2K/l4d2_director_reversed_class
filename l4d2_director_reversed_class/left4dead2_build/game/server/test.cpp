#include <stdio.h>

int main()
{
	CDirector TheDirector;
	ZombieManager TheZombieManager;
	
	printf("TheDirector::GetCommonInfectedCount() = %d", TheDirector.GetCommonInfectedCount());
		
	return 0;
}

