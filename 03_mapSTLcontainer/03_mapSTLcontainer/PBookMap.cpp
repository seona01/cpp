#include <map>											// 연상 컨테이너:트리 형태의 데이터 구조 이용함으로써 검색 시간이 데이터 수의 로그 함수에 비례
#include <iostream>
#include <string>
using namespace std;

template<typename T>
class LESS_T {
public:
	bool operator()(const T& a, const T& b) const {		// operator() 함수연산자
		return a < b;
	}
};

int main()
{
	map<string, string, LESS_T<string>> pBook{			// pBook:map객체
														// map<string, string> pBook 으로도 작성가능
		{"조성진", "010-1111-1111"},
		{"손열음", "010-2222-2222"}
	};
	pBook["임동혁"] = "010-3333-3333";

	pBook.insert(make_pair("선우예권", "010-4444-4444"));
	pBook.insert("손열음", "010-2222-2222");			// 중복 키값 입력 예시

	for (auto pb = pBook.begin(); pb != pBook.end(); ++pb)
		cout << pb->first << " " << pb->second << endl;	// map 저장 데이터는 first, second로 항목 엑세스
	cout << pBook.size() << "명이 등록되어 있습니다" << endl;

	string str;
	cout << endl << "찾을 이름 : ";
	cin >> str;
	auto result = pBook.find(str);
	if (result != pBook.end()) {
		cout << result->first << "님의 전화번호는 ";
		cout << result->second << " 입니다" << endl;
	}
	else
		cout << str << "님을 찾을 수 없습니다" << endl;

	return 0;
}