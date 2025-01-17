#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 연산자
	// 프로그램에서 데이터를 처리하여 결과를 산출하는 것을
	// 의미한다.
	// 피연산자
	// 연산자에 의해서 연산이 수행되는 항을 의미한다.
	
	// 연산자의 종류
	// - 최우선 연산자
	//		- 소괄호() 안의 연산을 먼저 한다
	//		- 더 깊은 소괄호일수록 먼저 연산한다.
	// - 단항 연산자
	// - 이항 연산자
	//		- 산술 연산자
	//		- 관계 연산자(비교 연산자)
	//		- 논리 연산자
	//		- 비트 연산자
	// - 삼항 연산자
	//		- ?와 :으로 항을 세 개 배치한다.
	// - 대입 연산자
	//		- 등호=를 이용하여 우항의 값을 좌항의 변수에 담는다.
	//		- 복합 할당 연산자

	// 산술 연산자
	// 주로 숫자를 다루기 위한 연산자들로
	// 사칙연산을 포함한 수학적인 계산에 이용된다.
	// 덧셈, 뺄셈
	int num1 = 1 + 2; // 3

	// 곱셈(*)
	num1 = 3 * 5; // 15

	// 나눗셈(/)
	// 정수 연산 -> 몫 반환
	num1 = 10 / 3; // 3...1
	// 몫인 3을 반환

	// 실수 연산 -> 나눗셈 연산
	double dNum = 10.0 / 3.0; // 3.333333
	printf("실수 나눗셈: %f\n", dNum);

	// 나머지 연산(%)
	// 실수형은 나머지 연산 불가
	num1 = 10;
	int num3 = 3;
	printf("나머지: %d\n", num1 % 3); // 3...1
	// 나머지값인 1이 반환

	printf("=======================\n");
	// 관계 연산자
	// 값과 값을 비교하여 두 값의 관계를 참 혹은 거짓으로
	// 나타내는 연산자이다.
	// 참(1), 거짓(0)
	
	// 같니? ==
	// 두 값이 같은지 "여부"를 반환하는 연산자
	printf("5 == 5: %d\n", 5 == 5); // 5와 5가 같니? -> 예/아니오

	// 같지 않니? !=
	printf("5 != 3: %d\n", 5 != 3); // 참(1)

	// 초과/미만(>, <)
	// 두 값을 비교하여 더 큰지, 작은지 여부를 반환
	// 두 값이 같은 경우 거짓(0)을 반환
	// -> 포함하지 않는다.
	printf("5 > 3: %d\n", 5 > 3); // 5가 3보다 더 크니?

	// 이상/이하(>=, <=)
	// 초과/미만과 비슷하지만, 같은 것도 포함한다.
	printf("10 >= 10: %d\n", 10 >= 10); // 크거나 같니?

	printf("====================\n");
	// 논리 연산자
	// 참과 거짓 값에 대한 논리 연산을 위한 연산자다.
	// "이면서"와 "또는", "부정"을 구현하는 연산자
	// 논리곱(&&): AND 연산
	// 0인 값(거짓)과 0이 아닌 값(참)으로 논리값이 정해진다.
	// 두 값이 모두 1이면 그 결과 1을 반환
	// 두 값 중 하나라도 0이면 그 결과 0을 반환
	printf("10 && 1: %d\n", 10 && 1); // 1
	printf("-1 && 0: %d\n", -1 && 0); // 0

	// 논리합(||): OR 연산 shift + \ 
	// 하나 이상 참(0이 아님)이면 그 결과 참(1)을 반환
	// 모두 거짓이어야 0을 반환
	printf("10 || 0: %d\n", 10 || 0); // 1
	printf("0 || 0: %d\n", 0 || 0); // 0

	// 논리부정(!): NOT 연산
	// 논리값(0 1)을 반전시키는 연산
	printf("!0: %d\n", !0); // 1
	printf("!10: %d\n", !10); // 0
	// 숫자값을 논리값으로 변환
	printf("!!숫자: %d\n", !!30);
	return 0;
}