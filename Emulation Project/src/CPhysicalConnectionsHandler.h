/*
 * CPhysicalConnectionsHandler.h
 *
 *  Created on: Dec 10, 2013
 *      Author: project
 */

#ifndef CPHYSICALCONNECTIONSHANDLER_H_
#define CPHYSICALCONNECTIONSHANDLER_H_
#include "BasicIncludes.h"
#include "CPhysicalConnection.h"
/**
 * The class handles the physical connections of the device,
 * including opening sockets, connecting, and closing.
 */
class CPhysicalConnectionsHandler
{
public:
	CPhysicalConnectionsHandler();
	virtual ~CPhysicalConnectionsHandler();
	void CreatePhyiscalConnections();
	 CPhysicalConnection const * GetPhysicalConnectionByName(const char * InterfaceName) ;
private: // Private Functions

private: // Private Members
	vector<CPhysicalConnection *>  mPhysicalConnections;
};

#endif /* CPHYSICALCONNECTIONSHANDLER_H_ */
