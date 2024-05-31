#pragma once//イニシャライズもしてローカル変数？は使わないように

typedef struct Vector2 {
	float x;
	float y;
}Vector2;

class Enemy
{
public:
	//コンストラクタは数字をメインで設定しなおすとき、セッターは数字を書き換えるとき
	//自作メンバ関数
	void Approach();
	void Withdrawal();
	void shooting();
	void Update();
	

private:
	//メンバ関数ポインタのテーブル
	static void (Enemy:: *spFuncTable[])();
	Vector2 pos = {100,100};
	const float speed = 5;
	

};

