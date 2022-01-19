#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>					// 알고리즘 함수 중 sort(), merge() 사용
using namespace std;

int main()
{
	srand((unsigned)time(NULL));		// 난수 발생기 초기화

	vector<int> iv1(5);
	cout << "벡터1 : ";
	for (auto& i : iv1) {
		i = rand() % 100;
		cout << i << " ";
	}
	sort(iv1.begin(), iv1.end());		// 정렬 알고리즘
	cout << endl << "정렬된 벡터1 : ";
	for (auto i : iv1)
		cout << i << " ";
	cout << endl << endl;

	vector<int> iv2(5);
	cout << "벡터2 : ";
	for (auto& i : iv2) {
		i = rand() % 100;
		cout << i << " ";
	}
	sort(iv2.begin(), iv2.end());		// 정렬 알고리즘
	cout << endl << "정렬된 벡터2 : ";
	for (auto i : iv2)
		cout << i << " ";
	cout << endl << endl;

	vector<int> iv3(iv1.size() + iv2.size());									// 합병 결과 저장할 벡터
	merge(iv1.begin(), iv1.end(), iv2.begin(), iv2.end(), iv3.begin());			// 정렬 알고리즘. 합칠 공간이 필요하므로
	cout << "벡터1과 벡터2를 합병한 결과 : ";
	for (auto i : iv3)
		cout << i << " ";
	cout << endl << endl;

	return 0;
}