#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h> // 문자열 헤더파일 추가

int main()
{
	// 문자열은 char타입의 배열로 표현되며,
	// 문자들의 연속된 집합을 의미한다.
	// 이때 마지막 문자는 '\0'(널 문자)을 넣어
	// 반드시 문자열의 종료를 나타내야 한다.
	// 문자열의 선언과 초기화
	char str1[] = "Hello"; // 자동 크기 할당(널 문자 포함)
	char str2[10] = {'H', 'i', '\0'}; // 수동 초기화
	char str3[20] = "Programming"; // 크기 지정 초기화
	printf("\n%s %s %s\n", str1, str2, str3);

	// 문자열 처리 함수
	// 실제 문자열 길이 반환(널 문자 제외)
	// strlen()
	char str[] = "Hello";
	int length = strlen(str); // 5가 int변수 length에 담긴다.
	printf("%d\n", length);

	// 한 문자열을 다른 문자열로 안전하게 복사
	// strcpy()
	// 새로운 문자열 선언 및 초기화
	char newStr[] = "Source";
	char dest[20]; // 복사를 받을 문자열 변수 선언
	strcpy(dest, newStr); // dest 변수에 "Source"라는 문자열 값이 복사됨.
	printf("new: %s\ndest: %s\n", newStr, dest);
	newStr[0] = 's'; // 기존 문자열 변수의 값을 변경
	printf("new: %s\ndest: %s\n", newStr, dest);
	// 두 변수의 값이 서로 달라졌다.

	// 두 문자열을 연결하여 하나의 문자열 생성
	// strcat() - concatenate 연결하다
	// strcat 함수의 첫번째 변수에 두번째 변수 값이 이어 붙어
	// 첫번째 변수에 두 문자열이 붙은 값이 들어간다.
	char catStr1[20] = "Hello"; // 최대 길이를 더 크게 잡는다.
	char catStr2[] = " World";
	strcat(catStr1, catStr2); // catStr1은 "Hello World"가 됨
	printf("%s\n", catStr1);// 출력해보기

	// 두 문자열 비교하기(동일성 확인)
	// strcmp() - compare(비교하다)
	char cmpStr1[] = "apple";
	char cmpStr2[] = "canana";
	int result = strcmp(cmpStr1, cmpStr2);
	// 만약 result가 -1이라면
	// cmpStr1이 cmpStr2보다 사전순으로 앞섬을 의미한다.
	// 1이면 반대
	// 0이면 같음
	// 전달된 변수의 순서상 더 큰값을 앞선다고 본다.
	// >	==	<
	// -1	0	1
	printf("strcmp(cmpStr1, cmpStr2):\n\t%d\n", result);

	return 0;
}