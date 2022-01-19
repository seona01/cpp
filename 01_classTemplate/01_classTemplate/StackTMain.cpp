#include <iostream>
#include "StackT.h"
#include "MyString.h"
using namespace std;

int main()
{
	Stack<char> sc(100);
	sc.push('a');
	sc.push('b');
	cout << "CHAR STACK : ";
	while (!sc.empty())
		cout << sc.pop();
	cout << endl;

	Stack<int> si(50);
	si.push(5);
	si.push(10);
	cout << "INT STACK : ";
	while (!si.empty())
		cout << si.pop() << " ";
	cout << endl;

	Stack<MyString> msStack(10);
	MyString s1("Studying");
	MyString s2("CPP.");
	MyString s3("CS");
	msStack.push(s1);			// l-value
	msStack.push(s2 + s3);		// r-value
	cout << "MyString STACK : ";
	while (!msStack.empty())
		cout << msStack.pop() << " ";
	cout << endl;
	return 0;
}