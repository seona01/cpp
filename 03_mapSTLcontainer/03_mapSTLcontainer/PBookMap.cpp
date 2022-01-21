#include <map>											// ���� �����̳�:Ʈ�� ������ ������ ���� �̿������ν� �˻� �ð��� ������ ���� �α� �Լ��� ���
#include <iostream>
#include <string>
using namespace std;

template<typename T>
class LESS_T {
public:
	bool operator()(const T& a, const T& b) const {		// operator() �Լ�������
		return a < b;
	}
};

int main()
{
	map<string, string, LESS_T<string>> pBook{			// pBook:map��ü
														// map<string, string> pBook ���ε� �ۼ�����
		{"������", "010-1111-1111"},
		{"�տ���", "010-2222-2222"}
	};
	pBook["�ӵ���"] = "010-3333-3333";

	pBook.insert(make_pair("���쿹��", "010-4444-4444"));
	pBook.insert("�տ���", "010-2222-2222");			// �ߺ� Ű�� �Է� ����

	for (auto pb = pBook.begin(); pb != pBook.end(); ++pb)
		cout << pb->first << " " << pb->second << endl;	// map ���� �����ʹ� first, second�� �׸� ������
	cout << pBook.size() << "���� ��ϵǾ� �ֽ��ϴ�" << endl;

	string str;
	cout << endl << "ã�� �̸� : ";
	cin >> str;
	auto result = pBook.find(str);
	if (result != pBook.end()) {
		cout << result->first << "���� ��ȭ��ȣ�� ";
		cout << result->second << " �Դϴ�" << endl;
	}
	else
		cout << str << "���� ã�� �� �����ϴ�" << endl;

	return 0;
}