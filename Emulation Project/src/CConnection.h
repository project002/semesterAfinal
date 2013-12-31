/*
 * Connection.h
 *
 *  Created on: Dec 31, 2013
 *      Author: root
 */

#ifndef CCONNECTION_H_
#define CCONNECTION_H_
#include "BasicIncludes.h"
class CConnection
{
public:
	CConnection();
	virtual  Crafter::Packet* GetPacket();
	//TODO: get table in sub classes - physical connections will return addresses according to the DHCP availability table
	// and virtual connections will return according to XML
	virtual void GetTable(){throw(CException("Impolement get table in connections"));}virtual ~CConnection();
protected:
	int mSocket;
	//TODO: hold table of "connections" to computers by IP
};

#endif /* CCONNECTION_H_ */