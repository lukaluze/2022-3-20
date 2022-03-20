/*
이름 : 이석규
학번 : 221124127
프로그램 제목 : 별찍기
최초 작성일 : 3/20
*/

#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cout << "정수를 입력하시오 :";
	cin >> n;
	for (int i = 0; i < n ; i++,cout<<"\n") {
		for (int j = n; j > 1+i; j--) {
			cout << " ";
		}
		for (int j = 0; j <i*2+1; j++) {
			cout << "*";
		}
	}
	for (int i = n-2; i >= 0; i--, cout << "\n") {
		for (int j = n; j > 1 + i; j--) {
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			cout << "*";
		}
	}
}