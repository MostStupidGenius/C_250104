# include <stdio.h>

int main() {
	// 실습1
	// 사각형의 가로와 세로 길이를 입력받아
	// 그대로 출력하는 프로그램 작성
	int width, height;

	printf("가로입력: ");
	scanf_s("%d", &width);
	printf("세로입력: ");
	scanf_s("%d", &height);

	// 여러 변수에 값을 받는 방법
	//scanf_s("%d %d", &width, &height);

	// 출력
	printf("가로: %d\n세로: %d", width, height);
	return 0;
}