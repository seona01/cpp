#include <iostream>
#include "SwapFT.h"
#include "MyString.h"
using namespace std;

int main()
{
	int x = 10, y = 20;
	cout << "x = " << x << ", y = " << y << endl;
	swapFT(x, y);										// int�� ������ �Լ����ø����� �����Ͽ� ȣ��
	cout << "�� ��ȯ �� --> ";
	cout << "x = " << x << ", y = " << y << endl << endl;

	MyString s1("KNOU"), s2("CS");
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	swapFT(s1, s2);										// ����� ���� Ŭ���� MyString��ü�� �Լ����ø����� �����Ͽ� ȣ��. ���� �μ��� �ڷ����� �ش��ϴ� swapFT() �Լ��� �ڵ����� �����Ǿ� ������
	cout << "�� ��ȯ �� --> ";
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	return 0;
}