#include <stdio.h>

int main() {
	// 주석
	// 컴퓨터가 코드를 읽을 때
	// 무시하는 부분으로
	// 주로 코드에 대한 설명을 적거나
	// 임시로 실행을 막을 코드 앞에 적어
	// //뒤의 내용을 무시하게 한다.
	// printf("Hello, World\n");
	
	// 자료형의 종류
	// 숫자형
	// short 2byte +-3만2천
	// int	 4byte +-21억
	int varInt = 3;
	// long	 4byte
	long varLong = 3L;
	// long long 8byte +=922경
	long long varLLong = 3L;
	// 문자형
	// char  1byte
	char varChar = 'a';
	printf("%c ", varChar);

	return 0;
}