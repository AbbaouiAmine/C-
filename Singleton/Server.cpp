#include "Server.h"
Server* Server::instance = 0;
Server * Server::getInstance()
{
	if (Server::instance == 0)
		Server::instance = new Server();
	return Server::instance;
}
Server::Server()
{
}
Server::~Server()
{
}
