#include "Enemy.h"
#include <iostream>

using namespace std;

void Enemy::Attack() {
	cout << "Enemy‚ÌUŒ‚—Í‚Í";
	getJob()->Attack();
}

void Enemy::Defence() {
	cout << "Enemy‚Ì–hŒä—Í‚Í";
	getJob()->Deffence();
}