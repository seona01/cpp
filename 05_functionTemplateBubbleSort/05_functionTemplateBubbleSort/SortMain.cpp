#include "SortFT.h"
#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
	int x[10] = { 6, 0, 3, 1, 2, 9, 4, 5, 7, 8 };
	sortFT(x, 10);												// 함수 호출. 템플릿 실행
	for (auto i : x)											// i는 x의 원소
		cout << i << " ";
	cout << endl;

	MyString s[5] = { "def", "abc", "jkl", "ghi", "mno" };
	sortFT(s, 5);
	for (auto str : s)
		cout << str << " ";
	cout << endl;
	return 0;
}