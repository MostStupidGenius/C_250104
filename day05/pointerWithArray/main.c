#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// 배열은 함수로 전달될 때 포인터 변수로 변경된다.
// 일반적으로 포인터 변수는 4byte 혹은 8byte를 가진다.
// 참조하는 포인터이기 때문에 직접 그 메모리 크기를 확인할 수 없다.
//int getArrSize(int *arr) {
//	unsigned long long size = 0;
//
//	// 배열의 크기
//	size = sizeof(arr);
//	printf("arr size: %lld\n", size);
//
//	// 요소의 크기
//	unsigned long long elementSize = sizeof(arr[0]);
//	printf("ele size: %lld\n", elementSize);
//
//	// 요소 개수 구하기
//	int result = (int)(size / elementSize);
//	printf("result: %d\n", result);
//
//	return result;
//}

int main()
{
	// 포인터와 배열
	// 배열의 이름(변수명)은 첫번째 요소의 메모리 주소를 가리키는 포인터 상수이다.
	// 각 요소는 메모리상에서 연속적으로 저장된다. -> 인덱스를 통해서 효율적으로 접근
	// int arr[5] = {1, 2, 3, 4, 5};
	// int *ptr = arr; // arr은 &arr[0]와 동일하다.
	// *arr : arr배열의 포인터 주소에 저장된 값
	//
	int arr[5] = { 1, 2, 3, 4, 5 };
	printf("%d\n", *arr);

	// *(arr + 0) => arr[0]
	// *(arr + 1) => arr[1]

	// - 배열의 요소 개수 구하기
	// 배열의 크기 / 배열의 첫번째 요소의 크기 => 요소의 개수

	// 배열의 크기
	int arrSize = (int)sizeof(arr);
	// 요소의 크기
	int elementSize = (int)sizeof(*arr);
	printf("element: %d\n", elementSize);

	// 요소 개수 구하기
	int arrCount = arrSize / elementSize;

	// 출력하기
	printf("arrCount = %d\n", arrCount);

	// 배열 순회하여 값 출력하기
	for (size_t i = 0; i < arrCount; i++) {
		printf("%lld : %d\n", i, arr[i]);
	}
	
	return 0;
}