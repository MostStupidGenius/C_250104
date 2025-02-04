#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 2차원 배열(행렬)
	// 배열 안에 배열이 들어간 형태로,
	// 외부 배열의 요소 타입은 1차원 배열이다.
	// 내부 배열의 요소 타입은 선언하며 정해진다.
	// int array[3][4];
	// int타입의 요소로 이루어진 1차원 배열을
	// 요소로 하는 외부 2차원 배열 선언

	// 2차원 배열의 선언
	int arr[3][4];
	// 3행 4열의 2차원 배열 선언
	// 총 12개의 정수형(int) 데이터를 저장할 수 있는 공간 생성

	// 값을 직접 지정하여 초기화
	int array[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	// 구조를 직접 지정하지 않고
	// 배열의 크기를 지정하여
	// 그 구조를 자동으로 생성하도록 선언 및 초기화하는 방식
	int array2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	// 2차원 배열은 실제 메모리에서는 1차원적으로 저장된다.
	// C언어는 행 우선(row-major) 방식을 사용하여
	// 각 행의 요소(원소)들을 순차적으로 메모리에 배치한다.
	// 다차원 배열을 효율적으로 저장, 접근하기 위한 메모리 관리 전략
	return 0;
}