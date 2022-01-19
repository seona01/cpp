#ifndef STACK_TEMPLATE_H_INCLUDED
#define STACK_TEMPLATE_H_INCLUDED
#include <iostream>
using namespace std;

template <typename T>
// �ڵ� �ߺ� �����ϱ� ���� ���ø�. �ڷ��� �޴� �Ű����� typename T
class Stack {
	T* buf;					// buffer pointer
	int top;
	int size;

public:
	Stack(int s);
	virtual ~Stack();			// �Ҹ���
	bool full() const;
	bool empty() const;
	void push(const T& a);
	void push(T&& a);			// r-value ����
	T&& pop();					// r-value ����
};

template <typename T> Stack<T>::Stack(int s) :size(s), top(s)
{
	buf = new T[s];
}

template <typename T> Stack<T>::~Stack() {
	delete[] buf;
}

template <typename T> bool Stack<T>::full() const
{
	return !top;
}

template <typename T> bool Stack<T>::empty() const
{
	return top == size;
}

template <typename T> void Stack<T>::push(const T& a)
{
	buf[--top] = a;
}

template <typename T> void Stack<T>::push(T&& a)
{
	buf[--top] = move(a);
	// �̵�����
}

template <typename T> T&& Stack<T>::pop()			// r-value
{
	return move(buf[top++]);
}
#endif

/*
* Ŭ���� ���ø��� ���� �ܺ��� ����Լ��� ������Ͽ� �ۼ� ����
*/
