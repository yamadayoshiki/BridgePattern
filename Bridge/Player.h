#ifndef PLAYER_H_
#define PLAYER_H_

#include "Character.h"

class Player : public Character {
public:
	virtual void Attack();
	virtual void Defence();
};
#endif // !PLAYER_H_
