/*
�̸� : �̼���
�й� : 221124127
���α׷� ���� : ������ ����
���� �ۼ��� : 3/20
*/

#include <iostream>
using namespace std;

int main() {
	int n,c=0,mid;
	int binary[8] = {};
	cout << "������ �Է��Ͻÿ� : ";
	cin >> n;
	while (n) {
		binary[c++] = n % 2;
		n /= 2;
	}
	cout << "�������� ";
	for (int i = 7; i >= 0; i--) {
		if (i == 3)cout << " ";
		cout << binary[i];
	}cout << "�Դϴ�." << endl;
}