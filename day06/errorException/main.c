#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <errno.h> // 에러 번호 관련 기능을 제공하는 헤더

int main() 
{
	// 파일 읽기 오류 상황 재현
	printf("Error number1: %d\n", errno);
	FILE* fp = fopen("없는파일.txt", "r");
	printf("Error number2: %d\n", errno);

	// 파일 열기 실패 시 에러 처리
	if (fp == NULL) {
		// errno: 가장 최근에 발생한 에러의 번호를 저장하는 전역 변수
		printf("Error number3: %d\n", errno);

		// perror(): errno에 해당하는 에러 메시지 출력
		perror("에러 발생");
		// 에러 발생 시 위와 같은 예외 처리를 통해
		// 프로그램이 정상적이지 않게 코드가 진행되는 것을
		// 막을 수 있다.
		return errno;
	}

	return 0;
}