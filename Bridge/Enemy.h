#ifndef ENEMY_H_
#define ENEMY_H_

#include "Character.h"

class Enemy : public Character {
public:
	virtual void Attack();
	virtual void Defence();
};
#endif // !ENEMY_H_