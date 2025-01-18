#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 포인터 실습
	// &[일반변수명]을 쓰면 해당 변수의 메모리 주소값을 접근한다는 의미이다.
	// *[참조변수명]을 쓰면 변수에 담긴 메모리 주소값의 값에 접근한다는 의미이다.
	//
	// 실습1.
	// 정수형 변수 num1에 10을 넣어 선언 및 초기화
	int num1 = 10;
	// 정수형 참조 변수 ptrNum1에 num1의 메모리 주소를 넣어 선언 및 초기화
	int* ptrNum1 = &num1;
	// ptrNum1의 값에 접근하여 += 연산자로 15를 추가한다.
	*ptrNum1 += 15;
	// printf를 이용하여 num1의 값을 확인한다.
	printf("num1 == %d\n", num1);
	// printf를 이용하여 ptrNum1에 간접 참조 연산자를 사용하여 값을 확인한다.
	printf("*ptrNum1 == %d\n", *ptrNum1);
	// + num1의 값과 ptrNum1에 간접 참조 연산자를 사용한 값을 비교(==)한 결과를 출력(1 / 0)
	printf("num1 == *ptrNum1 => %d\n", num1 == *ptrNum1);

	// 두 변수의 주소값을 비교
	printf("&num1 == ptrNum1 => %d\n", &num1 == ptrNum1);

	printf("&num1 == %p\n", &num1);
	printf("ptrNum1 == %p\n", ptrNum1);

	printf("&num1 == %p\n", &*&num1);

	return 0;
}