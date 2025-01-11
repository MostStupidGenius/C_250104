#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// for문 실습
	// 구구단 중 2단의 내용을 출력하는 for문 작성하기
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ...
	// 2 x 9 = 18
	for (int i = 1; i < 10;i++) {
		//printf("%d", i);
		printf("%d x %d = %d\n", 2, i, 2*i);
	}

	return 0;
}