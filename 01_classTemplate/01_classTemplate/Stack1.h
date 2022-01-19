#ifndef STACK1_H_INCLUDED
#define STACK1_H_INCLUDED
typedef int STACK_ITEM;
class Stack {
	enum { MAXSTACK = 20 };
	int top;
	// 데이터멤버. 정수형 스택과 실수형 스택이 모두 필요한 경우라면 같은 코드 2번 작성해야
	STACK_ITEM item[MAXSTACK];

public:
	Stack();
	bool empty();
	bool full();
	void initialize();
	void push(STACK_ITEM s);
	STACK_ITEM pop();
};

#endif
