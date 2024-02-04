#pragma once
#include <iostream>
using namespace std;

//추상화와 클래스
/*
1. 클래스 선언
2. 클래스 매서드 정의
*/

//생성자, 파괴자

class Stock {
private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() {
		total_val = shares * share_val;
	}

public:
	//void acquire(string, int, float); 생성자 사용을 위해 사용 x
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock(string, int, float);
	Stock();
	~Stock();
};