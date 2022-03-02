#include "Character.h"

Character::~Character() {
	delete job_;
}

Job* Character::getJob() {
	return job_;
}

void Character::setJob(Job* job) {
	job_ = job;
}