#ifndef OBJECTS_H
#define OBJECTS_H
#include "struct.h"

typedef struct{
	int	cl4ss;
} PLAYER;

typedef struct{
	char	**cllsn;
} DUNGEON;

typedef struct{
	vect	pos;
	char*	clsn;
	buf1	b1;
} GAME;

#endif
