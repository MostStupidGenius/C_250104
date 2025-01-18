#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <string.h>

int main() 
{
	// 포인터와 문자열
	// 문자열은 char[] 또는 포인터로 처리할 수 있다.
	// 두 방식에는 중요한 차이점이 있다.
	// char[]
	//		- 수정가능한 문자열 저장
	//		- 스택 메모리에 할당(프로그램이 실행될 때 자동할당, 종료되면 자동해제)
	//		- 초기화 후 다른 문자열로 개별 문자 수정 가능
	// 문자열 포인터
	//		- 읽기 전용 문자열 상수를 가리킨다.
	//		- 데이터 영역에 저장된 문자열의 주소를 가진다.
	//		- 문자열 수정 시 새로운 메모리 할당 필요

	// 문자열 선언 - char[]로
	char str1[] = "Hello";
	// 내부의 문자 값을 변경할 수 있다.
	str1[0] = 'h';
	printf("%s\n", str1);
	// 문자열 선언 - 포인터 방식
	char* str2 = "World";
	// str2[0] = 'w'; // 오류 발생 가능 있음. 수정 불가능 -> 상수이기 때문이다.

	// 문자열 처리 함수 사용
	// 문자열의 길이 계산
	size_t len = strlen(str1); // 마지막의 문자열끝을 나타내는 널문자를 제외한
	// 유효한 문자의 길이를 반환한다.
	// str2의 내용을 str1으로 복사(copy)
	// str1은 char[]이기 때문에 요소의 수정이 가능하다.
	strcpy(str1, str2);

	// 두 문자열 이어붙이기(concatenate)
	//strcat(str1, " "); // "str1 "
	//str1[0] = 'w';
	printf("%s\n", str1);
	printf("%s\n", str2);

	// 두 문자열 비교(compare)
	// 두 문자열이 같다면 0이 나온다.
	// 전달되는 매개변수의 순서에서 첫번째로 오는 값이
	// 사전순에서 먼저 나오는 값이면
	// 음수가 나온다.
	// 두번째로 오는 값이 사전순서상 먼저라면
	// 양수가 나온다.
	int result = strcmp(str2, str1);
	printf("%d\n", result);

	return 0;
}