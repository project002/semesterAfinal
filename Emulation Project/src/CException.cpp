/* * CException.cpp
 *
 *  Created on: Dec 10, 2013
 *      Author: project
 */

#include "CException.h"

CException::CException()
{
	// TODO Auto-generated constructor stub

}

CException::CException(const std::string &msg)
{
	_msg = msg;
}

const char* CException::what() const throw()
{
	return _msg.c_str();
}


