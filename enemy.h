#pragma once//�C�j�V�����C�Y�����ă��[�J���ϐ��H�͎g��Ȃ��悤��

typedef struct Vector2 {
	float x;
	float y;
}Vector2;

class Enemy
{
public:
	//�R���X�g���N�^�͐��������C���Őݒ肵�Ȃ����Ƃ��A�Z�b�^�[�͐���������������Ƃ�
	//���상���o�֐�
	void Approach();
	void Withdrawal();
	void shooting();
	void Update();
	

private:
	//�����o�֐��|�C���^�̃e�[�u��
	static void (Enemy:: *spFuncTable[])();
	Vector2 pos = {100,100};
	const float speed = 5;
	

};

