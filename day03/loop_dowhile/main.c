#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// do~while문
	// do 뒤에 반복할 코드 블록이 나오며
	// 코드 블록 뒤에 while(조건식)이 배치된다.
	// do~while문은 조건과 무관하게 최초 1회는
	// 무조건 실행된다.
	// do{코드블록}while(조건식);
	// 쓰임: 원하는 값을 입력할 때까지 무한히 입력받는다.
	int num;
	int condition;
	do {
		printf("정수 1부터 4 사이의 값 입력: ");
		scanf_s("%d", &num);
		// 조건식을 확인하기 위해 담는 부분
		//condition = num < 1 || num > 4;
		condition = num >= 1 && num <= 4;
		if (!condition) { // 잘못 입력한 경우
			printf("잘못된 값을 입력했습니다. 다시 입력해주세요.\n");
		}
		// 조건식을 검사하는 부분
	} while (!condition);

	return 0;
}