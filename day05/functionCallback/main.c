#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


// 함수의 선언
// 본문{} 없이 함수 이름을 포함한 시그니처만 선언하면
// main() 아래에서 함수를 구현하더라도 main() 안에서
// 해당 함수를 사용할 수 있다.
void makeArray(int arr[], int size, int (*func)(int));
int square(int x);
int doubleValue(int x);

int main()
{
	// 콜백함수(callback)
	// 다른 함수의 매개변수로 전달되어 나중에 호출되는 함수를 말한다.
	// 배열 선언 및 초기화
	int arrInt[5] = {1, 2, 3, 4, 5};

	// 배열의 길이 추출
	int size = sizeof(arrInt) / sizeof(*arrInt);

	// 함수 포인터 선언
	int (*func)(int);
	func = square; // 제곱하는 함수
	func = doubleValue; // 두 배로 늘리는 함수

	// 필요한 값 전달
	// 함수도 같이 전달
	makeArray(arrInt, size, func);

	// 바뀐 배열의 값 확인
	for (size_t i = 0; i < size; i++) {
		printf("%d ", arrInt[i]);
	}
	return 0;
}

// 콜백함수 func
void makeArray(int arr[], int size, int (*func)(int)) {
	// 배열과 배열의 길이, 함수를 전달받아서
	// 배열의 요소를 함수의 결과값으로 채워넣는 함수
	// 이때 함수를 정의하는 것은 함수를 사용하는 쪽에서 결정한다.
	for (int i = 0; i < size; i++) {
		arr[i] = func(arr[i]);
	}
}

// 전달한 정수를 제곱하는 함수
int square(int x) { return x * x; }

// 전달한 정수에 2를 곱한 함수
int doubleValue(int x) { return x * 2; }