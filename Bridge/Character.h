#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "Job.h"

//ŽÀ‘•‚ÌƒNƒ‰ƒX
class Character {
public:
	virtual ~Character();
	virtual void Attack() = 0;
	virtual void Defence() = 0;

	Job* getJob();
	void setJob(Job* job);

private:
	Job* job_;
};
#endif // !CHARACTER_H_
