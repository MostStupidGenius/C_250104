#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 문자열의 마지막 널 문자 확인하기
	char str1[] = "Hello";
	printf("%d\n", (int)(sizeof(str1)));
	//printf("%s", str1[5]); // %s로 하면 (null) 출력
	// %c로 하면 빈문자열 출력

	for (int i = 0; i < 6; i++) {
		printf("%c\n", str1[i]);
	}
	return 0;
}