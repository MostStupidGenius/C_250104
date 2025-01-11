#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 제어문
	// 조건문(if문)
	// 조건식의 결과에 따라 if문의 코드 블록을
	// 실행하거나 건너뛰는 동작을 해주는,
	// 코드의 흐름을 제어하기 위한 문법을 의미한다.
	// if(조건식){조건식이 만족할 때 실행할 코드 블록}
	printf("정수 값 입력: ");
	// 정수값을 저장하기 위한 변수 선언
	int inputNum;

	// 입력에 따른 값을 변수에 담는 코드
	scanf_s("%d", &inputNum);

	// 만약 inputNum을 2로 나눈 나머지가 0이라면
	if (inputNum % 2 == 0) {
		// inputNum은 짝수이므로
		printf("짝수입니다.\n");
	}
	// 입력한 값이 홀수라면 홀수입니다 출력
	if (inputNum % 2 == 1) {
		printf("홀수입니다.\n");
	}

	// 입력한 값이 음수라면 음수입니다 출력
	if (inputNum < 0) {
		printf("음수입니다.\n");
	}


	return 0;
}