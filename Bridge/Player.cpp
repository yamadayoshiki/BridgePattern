#include "Player.h"
#include <iostream>
using namespace std;

void Player::Attack() {
	cout << "Player‚ÌUŒ‚—Í‚Í";
	getJob()->Attack();
}

void Player::Defence() {
	cout << "Player‚Ì–hŒä—Í‚Í";
	getJob()->Deffence();
}