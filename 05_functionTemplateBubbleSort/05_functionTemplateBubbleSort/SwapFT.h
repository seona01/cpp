#ifndef SWAP_FUNCTION_TEMPLATE_H_INCLUDED
#define SWAP_FUNCTION_TEMPLATE_H_INCLUDED
#include <utility>
using namespace std;
template <typename ANY>
void swapFT(ANY& a, ANY& b)					// r-value. parameters 참조형
											// 교환이라 리턴 필요가 없어서 void
{											// 이동 대입 연산자 필요
	ANY temp = move(a);
	a = move(b);
	b = move(temp);
}
#endif
