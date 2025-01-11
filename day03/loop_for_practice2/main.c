#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 이중for문
	// for문 안에 for문이 있는 구조를 의미한다.
	// 외부for문은 정해진 횟수대로 반복하지만,
	// 내부for문은 외부for문이 다음 반복으로 넘어갈 때마다
	// 초기화되어 실행된다.
	// 즉, 내부for문의 총 반복 횟수는
	// 외부 for문의 반복횟수에 내부for문의 반복횟수를 곱한 값이다.
	// 생활 속 다중 for문
	// 시계(시간)
	// 12시간이 반복되는 시
	// 60분이 반복되는 분

	// 이중 for문을 이용한 시계 만들기
	for (int hour = 0; hour < 12; hour++) {
		printf("현재 시각은 %d시\n", hour);
		for (int min = 0; min < 60; min++) {
			printf("%d시 %d분입니다.\n", hour, min);
		}
	}
	return 0;
}