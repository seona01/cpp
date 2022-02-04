#ifndef SORTFUNC_H_INCLUDED
#define SORTFUNC_H_INCLUDED
#include "SwapFT.h"

// bubble sort algorithm 오름차순 구현
template <typename T> void sortFT(T arr[], int size)				// sort() 벡터 또는 배열의 원소 크기 따라 분류, 함수템플릿의 일종
{
	bool doAgain = true;
	for (int i = 1; doAgain; i++) {
		doAgain = false;
		for (int j = 0; j < size - i; j++)
			if (arr[j] > arr[j + 1])								// 관계연산자 > 가 정의되어 있어야 하므로 MyString.h
				swapFT(arr[j], arr[j + 1]), doAgain = true;			// SwapFT 대입연산자 사용		// , 여러개 순차적으로
	}
}
#endif