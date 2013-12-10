/*
 * Emulation.cpp
 *
 *  Created on: Dec 10, 2013
 *      Author: project
 */

#include "CEmulation.h"

CEmulation::CEmulation(): mPhysicalConnectionsHandler(NULL)
{
	try
	{
		InitRealConnections();
	}
	catch(CException & error)
	{

	}
}

CEmulation::~CEmulation()
{
	try{
		if (mPhysicalConnectionsHandler!=NULL)
		{
			delete mPhysicalConnectionsHandler;
		}
	}
	catch (CException & error)
	{

	}
}

void CEmulation::InitRealConnections()
{
	try
	{
		mPhysicalConnectionsHandler = new CPhysicalConnectionsHandler;
		mPhysicalConnectionsHandler->CreatePhyiscalConnections();
	}
	catch(CException & error)
	{

	}
}

void CEmulation::EmulationBuilder()
{
	try
	{

	}
	catch(CException & error)
	{

	}
}

