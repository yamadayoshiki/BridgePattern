#include "Player.h"
#include <iostream>
using namespace std;

void Player::Attack() {
	cout << "Player�̍U���͂�";
	getJob()->Attack();
}

void Player::Defence() {
	cout << "Player�̖h��͂�";
	getJob()->Deffence();
}