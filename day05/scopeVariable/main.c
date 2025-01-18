#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 지역 변수
	// 메인함수를 포함한, 파일 안의 어떤 함수든 그 안에 선언된
	// 변수를 의미한다.
	// 지역 변수는 선언된 가장 가까운 중괄호{}의 밖으로 나갈 수 없으며
	// 해당 중괄호{} 외부에서는 접근할 수가 없다.
	int localVar = 3;

	// 해당 함수의 중괄호{}가 끝나는 시점에 해당 변수는 메모리에서
	// 자동으로 해제된다. 때문에 메모리 관리에 효율적이다.

	return 0;
}

// 외부에서는 함수 내부에서 선언된 변수에 접근할 수 없다.
//printf("%d\n", localVar); // 정의되어 있지 않다는 오류가 발생한다.

void func(int num1) {
	// 함수의 매개변수로 선언된 num1 또한
	// 지역변수로 취급되며, 외부에서 접근불가
	int num2 = 3;
}