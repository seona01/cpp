#include <iostream>
#include "SwapFT.h"
#include "MyString.h"
using namespace std;

int main()
{
	int x = 10, y = 20;
	cout << "x = " << x << ", y = " << y << endl;
	swapFT(x, y);										// int형 변수를 함수템플릿으로 전달하여 호출
	cout << "값 교환 후 --> ";
	cout << "x = " << x << ", y = " << y << endl << endl;

	MyString s1("KNOU"), s2("CS");
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	swapFT(s1, s2);										// 사용자 정의 클래스 MyString객체를 함수템플릿으로 전달하여 호출. 사용된 인수의 자료형에 해당하는 swapFT() 함수가 자동으로 정으되어 컴파일
	cout << "값 교환 후 --> ";
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	return 0;
}