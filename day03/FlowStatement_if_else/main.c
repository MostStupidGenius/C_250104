#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// if~else문
	// if문의 조건식이 만족한 경우에는 if문의 코드 블록 실행
	// 조건식이 만족하지 않은 경우 else문의 코드 블록 실행
	// if(조건식){참인 경우 실행}else{거짓인 경우 실행}
	int num = 0;
	printf("정수 입력: ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		// 짝수입니다 출력
		printf("짝수입니다.\n");
	} // 두 개 이상의 조건문을 쓰려면 else 뒤에 if문을 이어쓰면 된다.
	// 첫번째 조건식이 만족하지 않을 경우, 아래의 조건식을 이어서 검사한다.
	// 처음으로 만족하는 조건식이 등장하는 경우,
	// 그 조건문의 코드 블록을 실행한다.
	else if (num % 2 == 1) {
		// 홀수이므로 홀수입니다 출력
		printf("홀수입니다.\n");
	}
	else { 
		// 위의 모든 조건이 만족하지 않을 경우
		// else문의 코드 블록이 실행된다.
		printf("양수가 아닙니다.\n");
	}

	return 0;
}