#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> intVec(5);
	for (int i = 0; i < intVec.size(); i++)
		intVec[i] = i + 1;

	vector<int>::iterator it = intVec.begin();				// 반복자는 벡터의 원소에 포인터와 같은 방식으로 접근. C++ 11부터 auto it = intVec.begin() 간결표현가능
	cout << "저장된 데이터 : ";
	for (; it < intVec.end(); it++)							// 초기값 비어있으므로
		cout << *it << " ";									// *이용하여 반복자가 가리키는 곳 값 액세스
	cout << endl;

	it = intVec.begin();
	cout << "3번째 데이터 : ";
	cout << *(it + 2) << endl;

	return 0;
}