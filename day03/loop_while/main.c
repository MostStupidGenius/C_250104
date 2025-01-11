#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 반복문
	// while문
	// while문은 if문과 그 형태가 동일하다.
	// 1. 그래서 조건식이 만족하면 while문의 코드블록으로 진입하고
	// 2. 해당 코드 블록을 실행한다.
	// 실행 후, while문을 탈출하는 것이 아니라
	// 3. while문의 조건식을 다시 검사한다.
	// 조건식이 참이면(만족하면)
	// 1. 다시 while문의 코드블록으로 진입한다.

	// while은 "반복횟수"를 개발자도, 컴퓨터도 알 수 없을 때 사용한다.
	// 키오스크 주문, 일반 응용 프로그램
	// while(조건식){}
	// 조건식이 만족하는 동안 코드 블록 실행

	// 입력을 받을 변수
	int num = 1;

	// 입력받은 모든 정수를 더한 합계를 담을 변수
	int sum = 0;

	while (num) { // num의 값이 0이 아니라면 무한반복
		// 입력 안내
		printf("정수 입력(합계 확인 0 입력): ");

		// 입력받기
		scanf_s("%d", &num);


		if (num == 0) {
			printf("입력한 값이 0입니다. 결과를 출력합니다.\n");
			break; // while문 탈출

			// break에 의해서 코드 실행 흐름이
			// while문을 탈출했기 때문에
			// break 아래의 코드는 실행되지 않는다.
			printf("실행되지 않는 부분");
		}
		else if (num == 4) {
			// 4를 입력받으면 아래의 코드를 무시하고
			// 다음 반복으로 넘어간다.
			printf("4를 입력했습니다. 다음 반복으로 넘어갑니다.\n");
			continue;
		}
		// 입력받은 정수를 합계에 추가
		sum += num;
		printf("입력한 값은 %d입니다.\n", num);

	}
	printf("sum: %d\n", sum);








	return 0;
}