#ifndef SNAKE_H
#define SNAKE_H

#include <Windows.h>
class snk
{
private:
	int len;
	int vel;
	char direction;


public:
	Snake(COORD pos, int vel);
};

#endif
