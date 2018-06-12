#pragma once
#include "Singleton.h"

int main()
{
	int* a = Singleton<int>::getinstance();

	int* b = Singleton<int>::getinstance();


	delete Singleton<int>::getinstance();
	return 1;
}
