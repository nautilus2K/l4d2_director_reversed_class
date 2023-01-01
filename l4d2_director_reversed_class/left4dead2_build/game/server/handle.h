6//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose: 
//
// $NoKeywords: $
//===========================================================================//

#ifndef _INCLUDE_HANDLE_H_
#define _INCLUDE_HANDLE_H_

struct IHandleEntity_iface //class?
{
	void * SetRefEHandle;
	void * GetRefEHandle;
};

class CBaseHandle_vtable
{
	void * dtor1;
	void * dtor0;
	IHandleEntity_iface IHandleEntity;
};

class CHandle
{
	CBaseHandle_vtable * vptr;
	unsigned long m_Index;
};

#endif // _INCLUDE_MISC_H_
