#include "enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,//0
	&Enemy::shooting,//1
	&Enemy::Withdrawal//2
};



void Enemy::Approach()
{
	if (pos.y <= 300) {

		pos.y += speed;
	}
	printf("�ڋ�\n");
}

void Enemy::Withdrawal()
{
	if (pos.y >= 100) {
		pos.y -= speed;
	}
	printf("�P��\n");
}
void Enemy::shooting()
{
	printf("�ˌ�\n");
}
void Enemy::Update() {

	(this->*spFuncTable[0])();
	(this->*spFuncTable[1])();
	(this->*spFuncTable[2])();
};
