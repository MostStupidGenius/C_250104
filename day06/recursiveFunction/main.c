#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// 전달된 숫자를 가장 큰 값으로 하는 팩토리얼을 생성, 계산하여 반환
// n!
// n * (n-1) * ... * 2 * 1
int factorial(int n) {
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

// 전달된 숫자부터 0까지의 숫자를 모두 합하는 함수
int sumAll(int n) {
	if (n <= 0) return 0; // 기본사례 -> 재귀를 멈추는 조건
	return n + sumAll(n - 1); // 재귀사례
}

// 실습 문제1
// 전달받은 두 정수 num1부터 num2까지의 합을 구하는
// 재귀함수 만들기
// 힌트: 한 정수를 계속 전달하는 방식

int sumWith(int start, int end) {
	if (start >= end) return end;
	return start + sumWith(start + 1, end);
}

int main() 
{
	// 재귀함수(Recursive Function)
	// 재귀함수는 자기자신을 호출하거나 기본사례를 반환하는
	// 방식으로 큰 범위의 문제를 작게 쪼개어 나누어 처리하는 방식이다.
	// 기본사례: 재귀호출을 멈추는 조건
	// 재귀사례: 함수가 자기자신을 호출하는 부분
	int sum = sumAll(100);
	//printf("sum = %d\n", sum);

	int factorialResult = factorial(5);
	//printf("fact %d\n", factorialResult);

	// 재귀함수가 활용되는 사례
	// 이진 트리 순회
	// 디렉토리 탐색
	// 정렬 알고리즘 - 퀵 정렬 Quick Sort, 병합 정렬 Merge Sort

	int start = 1, end = 100;

	int resultSum = sumWith(start, end);
	printf("result sum %d, %d = %d", start, end, resultSum);

	return 0;
}