#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// 함수의 자료형 뒤에 *(간접 참조 연산자)를 붙이면
// 함수를 사용하는 쪽에서 주소값을 전달해야 한다.
void swap(int* num1, int* num2) {
	// 전달받은 매개변수는 주소값을 가진 포인터다.
	// 이 함수는 전달 받은 두 변수의 값을 서로 바꾸는 함수
	// 임시로 값을 저장할 변수 선언 및 값 할당
	int temp = *num1; // num1변수의 값을 할당
	// num2의 값을 num1의 저장공간에 할당
	*num1 = *num2; // 값을 바꿔준다.
	*num2 = temp; // 임시로 담았던 값을 넣어준다.
}

// arr[]
// *arr
void makeSeq(int arr[], int size) {
	// 전달받은 배열의 요소를 1부터 시작하는 등차1의 수열로
	// 모두 채워보자.
	// arr: int배열
	// size: 배열의 길이(크기)
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}
	
}

int main() 
{
	// 포인터와 함수
	// 포인터를 통한 함수 매개변수 전달
	// 함수를 사용하는 쪽에서는 주소 연산자&를 변수명 앞에 붙여
	// 주소값을 전달할 수 있도록 해야 한다.
	int a = 3, b = 5;
	swap(&a, &b);
	//printf("a: %d\nb: %d\n", a, b);

	// 1. 배열을 생성(길이만 정해서)
	int arr[5] = { 0 }; // 모든 요소가 0으로 초기화된다.
	int size = sizeof(arr) / sizeof(arr[0]);
	// 2. 함수에 배열을 전달
	makeSeq(arr, size);
	// 3. 함수에서 배열의 값을 만들어 넣는다.
	// 4. 리턴 없이 함수 종료
	// 5. 함수 사용 후 코드에서 배열의 요소 출력해보기.

	for (size_t i = 0; i < size; i++)
	{
		printf("i: %lld\tarr[i]: %d\n", i, arr[i]);
	}
	return 0;
}