#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 포인터(pointer)
	// 메모리 주소를 저장하는 변수로,
	// 다른 변수의 위치를 가리키는 데 사용된다.
	// 이러한 포인터 변수를 선언하려면
	// 선언
	// [변수타입]* [변수명];
	// 
	int* intPtr; // 정수형 포인터 변수
	
	// 정수형 변수 선언
	int num1 = 3;
	// num1의 주소를 접근하기 위해 주소연산자&를 변수 앞에 붙인다.
	intPtr = &num1; // 메모리 주소를 포인터 변수에 저장
	num1 = 4; // num1의 값을 변경하면
	printf("%d\n", *intPtr); // 포인터 변수는 해당 변수의 값에
	// 직접 접근할 수 있으므로
	// 간접 참조 연산자*를 앞에 붙여 해당 메모리 주소의 값에
	// 접근할 수 있게 된다.
	
	// 포인터(주소)값을 표현하는 서식문자는 %p이다.
	printf("num1의 값: %d\n", num1);
	printf("num1의 주소: %p\n", &num1);
	printf("intPtr의 값: %p\n", intPtr);
	printf("intPtr의 가리키는 값: %d\n", *intPtr);

	return 0;
}