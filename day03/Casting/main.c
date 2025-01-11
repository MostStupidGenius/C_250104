#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 형변환
	// 하나의 데이터 타입에서 다른 데이터 타입으로
	// 변경하는 것을 의미한다.
	// 
	// 자동 형변환(암묵적, 암시적)
	// 서로 데이터 타입이 다른 값끼리 연산을 했을 때
	// 작은 자료형쪽에서 일어난다
	// 작은 자료형 값이 큰 자료형 값으로 그 타입을 변경한다.
	// 문자형 char < 
	// 정수형 short < int < long < long long < 
	// 실수형 float < double
	int num = 10;
	double doubleOne = num; // 자동 형변환
	// printf("%f", doubleOne);// 10.000000
	// 대입 연산이 아닌 자동 형변환이 일어나는 연산
	num = 10;
	doubleOne = 3.3;
	double sum = num + doubleOne; // 13.3
	//printf("%f", sum); // 13.300000

	// 강제 형변환(명시적)
	// 더 큰 자료형에서 작은 자료형으로 형변환을 할 때
	// 명시적으로 어떤 자료형으로 바꿀지 적어놓는 것을
	// 말한다.
	// 이러한 형변환에 쓰이는 (자료형)의 소괄호()는
	// 캐스팅 연산자(형변환 연산자)라고 부른다.
	// (작은자료형)큰자료형값
	num = 10;
	doubleOne = 3.2;
	int total = num + (int)doubleOne;
	//printf("%d", total);

	doubleOne = 3.6;
	double doubleTwo = 5.8;
	// 두 실수를 더해서 정수total에 담은 뒤
	total = (int)doubleOne + (int)doubleTwo;
	// 출력1
	//printf("1 %d\n", total);

	// 두 실수를 더해서 정수total에 담은 뒤
	total = (int)(doubleOne + doubleTwo);
	// 출력2
	//printf("2 %d\n", total); // 9

	// 문자형(char)을 다른 문자형으로 바꾸는 방법
	char a1 = 'a'; // 'a' 97번 문자
	char A1 = (char)(a1 - 32); // 'A' 65번 문자
	A1 = (char)(a1 + 1); // 'b' 98번 문자
	printf("%c", A1);
	return 0;
}