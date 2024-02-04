#pragma once
#include <iostream>
using namespace std;

//�߻�ȭ�� Ŭ����
/*
1. Ŭ���� ����
2. Ŭ���� �ż��� ����
*/

//������, �ı���

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
	//void acquire(string, int, float); ������ ����� ���� ��� x
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock(string, int, float);
	Stock();
	~Stock();
};