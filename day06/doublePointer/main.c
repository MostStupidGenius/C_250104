#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 이중 포인터
	// 포인터 변수(*ptr)를 가리키는 포인터

	// 일반 변수
	int num = 3;
	// 포인터 변수
	// & 연산자를 이용해서 주소값 전달
	int* nptr = &num;

	// 이중 포인터
	// & 연산자
	int** dptr = &nptr;

	// num의 값에 접근하려면
	// 간접참조연산자*를 두번 사용해야 접근이 가능하다.
	int extractValue = **dptr;
	printf("num = %d\n", extractValue);

	return 0;
}