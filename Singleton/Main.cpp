#pragma once 
#include "Server.h"
int main()
{
	Server* a = Server::getInstance();
	Server* b = Server::getInstance();
	return 1;
}
