#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	// C언어 입력문 scanf() 함수
	// scanf 함수의 기본 구조
	// scanf("형식지정자", &변수명);
	// &는 주소 연산자라고 불리며
	// 뒤따라오는 변수의 메모리 주소를 가리킨다.
	// scanf함수가 입력받은 값을 해당 메모리 주소에
	// 직접 저장하도록 해준다.
	int num; // 정수형 변수 선언
	printf("숫자를 입력하세요: ");

	// scanf는 해킹에 안전하지 않기 때문에
	// vc++ 컴파일러는 scanf 대신에 scanf_s를 대신 사용하거나
	// #define _CRT_SECURE_NO_WARNINGS를
	// 파일 최상단에 정의해야 한다.
	scanf_s("%d", &num);
	
	// 입력 버퍼(buffer) 비우기
	while (getchar() != '\n');

	// 입력받은 숫자를 출력해보자.
	printf("\n입력한 숫자: %d\n", num);

	return 0;
}