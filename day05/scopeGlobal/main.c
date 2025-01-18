#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// 전역변수
// 프로그램이 시작될 때 데이터 영역에 할당되어
// 프로그램이 완전히 종료될 때까지 메모리에 계속 존재


// 전역 변수 초기화
int globalVar = 0;


// 전역변수에 접근하여 그 값을 변경
void count1() {
	globalVar++;
}
void count2() {
	globalVar++;
	printf("%d\n", globalVar);
}

// 전역변수와 같은 이름으로 지역변수 초기화
void count3() {
	int globalVar = 99;
	printf("%d\n", globalVar);
}

int main() 
{
	// 전역변수 출력
	printf("%d\n", globalVar); // 0

	count1(); // globalVar = 1;
	count2(); // 2
	count3(); // 지역변수 globalVar가 호출되어 99출력
	count2(); // 3

	return 0;
}