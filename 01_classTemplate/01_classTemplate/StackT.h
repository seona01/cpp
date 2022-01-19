#ifndef STACK_TEMPLATE_H_INCLUDED
#define STACK_TEMPLATE_H_INCLUDED
#include <iostream>
using namespace std;

template <typename T>
// 코드 중복 방지하기 위한 템플릿. 자료형 받는 매개변수 typename T
class Stack {
	T* buf;					// buffer pointer
	int top;
	int size;

public:
	Stack(int s);
	virtual ~Stack();			// 소멸자
	bool full() const;
	bool empty() const;
	void push(const T& a);
	void push(T&& a);			// r-value 참조
	T&& pop();					// r-value 참조
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
	// 이동대입
}

template <typename T> T&& Stack<T>::pop()			// r-value
{
	return move(buf[top++]);
}
#endif

/*
* 클래스 템플릿은 선언문 외부의 멤버함수도 헤더파일에 작성 가능
*/
