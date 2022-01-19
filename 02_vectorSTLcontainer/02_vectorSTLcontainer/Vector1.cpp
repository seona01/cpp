#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> intVec(5);

	for (int i = 0; i < intVec.size(); i++)
		intVec[i] = i + 1;
	cout << "������ ���� ũ�� : " << intVec.size() << endl;
	cout << "������ ������ ũ�� : " << intVec.capacity() << endl;
	cout << "����� ������ : ";
	for (int i = 0; i < intVec.size(); i++)
		cout << intVec[i] << " ";

	cout << endl << endl << "1���� ������ push_back" << endl;
	intVec.push_back(11);
	cout << "������ ���� ũ�� : " << intVec.size() << endl;
	cout << "������ ������ ũ�� : " << intVec.capacity() << endl;
	cout << "����� ������ : ";
	for (int i = 0; i < intVec.size(); i++)
		cout << intVec[i] << " ";

	cout << endl << endl << "5���� ������ push_back" << endl;
	for (int i = 1; i <= 5; i++)
		intVec.push_back(i + 11);
	cout << "������ ���� ũ�� : " << intVec.size() << endl;
	cout << "������ ������ ũ�� : " << intVec.capacity() << endl;
	cout << "����� ������ : ";
	for (int i = 0; i < intVec.size(); i++)
		cout << intVec[i] << " ";

	cout << endl << endl << "3���� ������ pop_back" << endl;
	for (int i = 0; i < 3; i++)
		intVec.pop_back();
	cout << "������ ���� ũ�� : " << intVec.size() << endl;
	cout << "������ ������ ũ�� : " << intVec.capacity() << endl;
	cout << "����� ������ : ";
	for (int i = 0; i < intVec.size(); i++)
		cout << intVec[i] << " ";
	cout << endl;

	return 0;
}