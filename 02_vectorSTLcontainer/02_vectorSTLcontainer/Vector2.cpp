#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> intVec(5);
	for (int i = 0; i < intVec.size(); i++)
		intVec[i] = i + 1;

	vector<int>::iterator it = intVec.begin();				// �ݺ��ڴ� ������ ���ҿ� �����Ϳ� ���� ������� ����. C++ 11���� auto it = intVec.begin() ����ǥ������
	cout << "����� ������ : ";
	for (; it < intVec.end(); it++)							// �ʱⰪ ��������Ƿ�
		cout << *it << " ";									// *�̿��Ͽ� �ݺ��ڰ� ����Ű�� �� �� �׼���
	cout << endl;

	it = intVec.begin();
	cout << "3��° ������ : ";
	cout << *(it + 2) << endl;

	return 0;
}