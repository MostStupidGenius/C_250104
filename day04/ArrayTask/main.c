#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 배열을 이용해 여러 점수를 저장해두고
	// 점수들의 평균을 구하자.
	// 평균이란 총 합계 / 개수

	// 점수들
	int scores[] = {85, 90, 75, 95, 80, 100};
	// 점수 합계
	int sum = 0;

	// 배열의 길이 계산
	// sizeof()함수는 전달된 값의 데이터 크기를 반환한다.
	// 이때 배열을 전달하면 배열의 전체 크기가 나오며(요소의 크기 * 개수)
	// 그 전체 크기에서 배열의 0번째 요소의 크기를 나누면 개수가 나온다.
	 
	//printf("%lld\n", sizeof(scores));
	int length = sizeof(scores) / sizeof(scores[0]);

	// 평균을 받을 실수 변수 선언;
	double average;

	for (int i = 0; i < length; i++) {
		// i값을 이용해 배열의 요소에 접근하여 점수를 가져온다.
		// 점수를 sum에 추가한다.
		//sum = sum + scores[i];
		sum += scores[i];
	}
	average = sum / length;
	printf("%f\n", average);
	return 0;
}