/*
�̸� : �̼���
�й� : 221124127
���α׷� ���� : �����
���� �ۼ��� : 3/20
*/

#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cout << "������ �Է��Ͻÿ� :";
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