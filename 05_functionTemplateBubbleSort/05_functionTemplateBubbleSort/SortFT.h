#ifndef SORTFUNC_H_INCLUDED
#define SORTFUNC_H_INCLUDED
#include "SwapFT.h"

// bubble sort algorithm �������� ����
template <typename T> void sortFT(T arr[], int size)				// sort() ���� �Ǵ� �迭�� ���� ũ�� ���� �з�, �Լ����ø��� ����
{
	bool doAgain = true;
	for (int i = 1; doAgain; i++) {
		doAgain = false;
		for (int j = 0; j < size - i; j++)
			if (arr[j] > arr[j + 1])								// ���迬���� > �� ���ǵǾ� �־�� �ϹǷ� MyString.h
				swapFT(arr[j], arr[j + 1]), doAgain = true;			// SwapFT ���Կ����� ���		// , ������ ����������
	}
}
#endif