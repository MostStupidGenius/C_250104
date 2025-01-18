#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 입력을 받아 그 값을 담을 변수들 선언
	int num1, num2, result;
	char oper;

	// 여러 개의 값을 변수에 담는 방법
	printf("[정수] [연산자] [정수] 입력: ");
	scanf("%d %c %d", &num1, &oper, &num2);
	// 3 + 5

	result = calculator(num1, num2, oper);
	printf("%d %c %d = %d\n", num1, oper, num2, result);


	// 테스트 케이스
	result = calculator(3, 5, '+') == 8;
	printf("3 + 5 = %s\n", result ? "정답" : "오답"); // 1 잘 만든 것.

	result = calculator(30, 15, '-') ==  15;
	printf("30 - 15 = %s\n", result ? "정답" : "오답"); // 1 잘 만든 것.

	result = calculator(10, 15, '*') == 150;
	printf("10 * 15 = %s\n", result ? "정답" : "오답"); // 1 잘 만든 것.

	result = calculator(33, 15, '/') == 2;
	printf("33 / 15 = %s\n", result ? "정답" : "오답"); // 1 잘 만든 것.

	return 0;
}

// 함수의 주석 작성 방법
/*
* 두 정수와 연산자를 char로 전달받아
* 계산한 결과를 반환하는 함수
* @param num1 첫번째 정수
* @param num2 두번째 정수
* @param char 문자 타입의 연산자
* @return 두 정수의 연산 결과
*/
int calculator(int num1, int num2, char oper) {
	// 반환값을 담을 변수 선언
	int result = 0;
	
	// 전달받은 두 정수를 전달받은 연산자에 따라
	// 계산이 달라져야 한다.
	// 1. 잘못된 부분을 고친다.
	// 2. +, -, *, /를 모두 구현한다.
	//     / 나누기에 대해서는 몫만 출력 (int)
	// 3. 위의 문자가 아닌 값이 들어온 경우
	//    결과값으로 0을 반환한다.
	switch (oper) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = (int)(num1 / num2);
		break;
	//default:
	//	result = 0;
	}
	return result;
}