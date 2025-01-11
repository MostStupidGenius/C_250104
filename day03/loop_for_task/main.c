#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 구구단
	// 2단부터 9단까지
	// 각각 1부터 9까지의 곱을 표현하는 구구단 출력
	// ===2단===
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ...
	// 2 x 9 = 18
	// ===3단===
	// 3 x 1 = 3
	// 3 x 2 = 6
	// ...
	// 9 x 9 = 81
	int danMax, danMin, gopMax;
	printf("출력하고 싶은 마지막 단 입력: ");
	scanf("%d %d %d", &danMin, &danMax, &gopMax);

	for (int dan = danMin; dan <= danMax; dan++) {
		printf("===%d단===\n", dan);
		for (int gop = 1; gop <= gopMax; gop++) {
			printf("%d x %d = %3d\n", dan, gop, dan * gop);
		}
	}
	return 0;
}