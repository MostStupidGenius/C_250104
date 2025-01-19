#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

enum Days
{
	SUN, // 0
	MON, // 1
	TUE, // 2
	// 값을 직접 지정할 수도 있다.
	WED=4, // 4
	// 이때 직전의 값에 1을 더한 값으로 다음 상수가 지정된다.
	THU, // 5
	FRI, // 6
	SAT
};

int main() 
{
	// 열거형(enumeration)
	// 연관된 상수들을 하나의 이름으로 묶어서 관리
	// 기본적으로 값을 설정하지 않았다면 첫번째 상수는 0으로 시작
	// 직전의 상수에 1을 더하는 방식으로 새로운 상수의 값이 설정된다.
	enum Days today = MON;

	printf("%d\n", today);

	const int SUNDAY = 0, MONDAY = 1;
	int option[5] = { 31, 1, 2, 3, 4 };
	printf("%d\n", option[SUNDAY]);

	return 0;
}