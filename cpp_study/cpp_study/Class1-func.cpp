#include "Class1.h"

/*void Stock::acquire(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}*/
void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;

}

Stock Stock::topval(Stock& s) {
	if (s.share_val > share_val)
		return s;
	else return *this; //자기 자신(객체)을 리턴
}

Stock::Stock(string co, int n, float pr) {//생성자
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}
Stock::Stock() {//디폴트 생성자
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock() {
	cout << name << "클래스가 소멸되었습니다.\n";
}