#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int add(int num1, int num2) { return num1 + num2; }

int main() 
{
	// 함수를 가리키는 포인터
	// 함수 포인터 선언
	// [반환타입] (*[함수포인터명])([매개변수타입1],[매개변수타입2],...);
	// 함수 포인터의 매개변수들의 타입과 개수, 순서, 반환타입을
	// 함수의 시그니처라 부르며,
	// 함수 포인터와 가리키고자 하는 함수는 같은 시그니처를 가지고 있어야 한다.
	int (*func1)(int, int);
	// 함수명을 함수 포인터에 대입한다 -> 함수 포인터가 함수를 가리킨다.
	func1 = add;
	
	// 함수 포인터를 이용한 함수 사용
	int result = func1(3, 5); // 8
	printf("%d\n", result);

	return 0;
}