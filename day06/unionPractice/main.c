#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
// 공용체 정의 방법
union Data {
	int i;
	double d;
	char str[50];
};
int main() 
{
	// 공용체(union)
	// 여러 멤버 변수들을 같은 메모리 공간에 배치해두고
	// 필요에 따라 값을 여러 타입으로 저장할 수 있는 사용자 정의 자료형이다.
	// 공용체 선언
	union Data data;
	data.i = 30;
	printf("int: %d\n", data.i);
	data.d = 3.14;
	printf("double: %lf\n", data.d);
	printf("int: %d\n", data.i);

	// 문자열은 strcpy를 이용해서 값을 넣어야 한다.
	// strcpy(data.str, "문자열");




	return 0;
}