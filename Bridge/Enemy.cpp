#include "Enemy.h"
#include <iostream>

using namespace std;

void Enemy::Attack() {
	cout << "Enemy�̍U���͂�";
	getJob()->Attack();
}

void Enemy::Defence() {
	cout << "Enemy�̖h��͂�";
	getJob()->Deffence();
}