#ifndef HERO_H_
#define HERO_H_

#include "Job.h"

class Hero : public Job{
public:
	virtual void Attack();
	virtual void Deffence();
};
#endif // !HERO_H_
