#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// switch문
	// 주어진 변수의 값을 확인하여
	// 정확히 일치하는 case의 코드 블록을 실행하고
	// 아래로 흘러내려 아래의 코드를 이어서 실행한다.
	// 하지만 일반적으로 "흘러내림"은 정상적인 실행 순서가 아니기 때문에
	// break;라는 흐름 탈출 제어문을 이용하여 
	// "흘러내림"을 막는다.
	int num = 0;
	scanf("%d", &num);

	// switch 문으로 num 변수에 담긴 값을 검사한다.
	// 이때 switch() 소괄호() 안에 들어가는 것은
	// 반드시 변수여야 한다.
	switch (num) {
		// num의 값이 case 3:인 경우
	case 3:
		printf("num의 값은 3입니다.\n");
		break; // switch문을 탈출한다.
	case 4:
		printf("num의 값은 4입니다.\n");
		break; // switch문을 탈출한다.
	default:
		printf("위의 어떤 경우도 아닙니다.\n");
	}

	int score = 0;
	// 입력
	switch (score) {
	case 1:
		printf("골드 등급 혜택 어쩌구");
	case 2:
		printf("실버 등급 혜택 어쩌구");
	case 3:
		printf("브론즈 등급 혜택 어쩌구");
		break;
	default:
		printf("무료 회원 혜택 어쩌구");
	}
	return 0;
}