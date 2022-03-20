/*
이름 : 이석규
학번 : 221124127
프로그램 제목 : 이진법 계산기
최초 작성일 : 3/20
*/

#include <iostream>
using namespace std;

int main() {
	int n,c=0,mid;
	int binary[8] = {};
	cout << "정수를 입력하시오 : ";
	cin >> n;
	while (n) {
		binary[c++] = n % 2;
		n /= 2;
	}
	cout << "이진수는 ";
	for (int i = 7; i >= 0; i--) {
		if (i == 3)cout << " ";
		cout << binary[i];
	}cout << "입니다." << endl;
}