#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

static int stGlobalVar;

void printSomething() {
	// static 지역변수 선언
	static int localStVar;

	// 전역변수 출력 및 1증가
	printf("global %d\n", stGlobalVar++);

	// 지역변수 출력 및 1증가
	printf("local %d\n", localStVar++);
}


int main() 
{
	// static이란
	// 변수나 함수의 범위(scope)와 수명(lifetime; 생명주기)을
	// 제어하는 데 사용되는 예약어
	// 지역변수 + static
	// static이 붙지 않은 지역 변수는 함수 종료시 메모리 해제되지만
	// static이 붙은 변수는 프로그램이 종료될 때까지
	// 메모리에 유지된다.
	// static 변수의 특징
	// - 초기화 코드는 해당 부분을 여러번 지나가더라도
	//	실제로는 최초 1회만 실행된다.
	
	// 전역변수 + static
	// 해당 전역변수는 선언된 소스파일 내에서만 접근이 가능하다.
	

	// static 변수
	// 선언시 값을 초기화하지 않더라도 자동으로 0으로 초기화된다.
	
	stGlobalVar = 3;

	printSomething();
	printSomething();
	printSomething();
	printSomething();
	printSomething();


	return 0;
}