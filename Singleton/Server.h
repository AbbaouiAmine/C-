#pragma once
#include <iostream>

using namespace std;

class Server {
public:
	static Server* getInstance();
	~Server();
private:
	Server();
	int id;
	string adresse;
	static Server* instance;
};
