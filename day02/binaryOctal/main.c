#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 이진법 표현방법
	// 0b를 앞에 적어서 이진법임을 표현한다.
	int a = 0b0101;
	printf("%d\n", a); // 5

	// 8진법 표현방법
	// 앞에 0을 적어서 8진법임을 표현한다.
	int b = 031;
	printf("031: %d\n", b);

	// 16진법 표현방법
	// 앞에 0x를 적어서 16진법임을 표현한다.
	// 16진법은 A부터 F까지 6개의 문자로
	// 10진법의 10부터 15까지를 표현한다.
	int hex = 0xA; // 10
	printf("0xA: %d\n", hex);
	printf("0xF: %d\n", 0xF);
	printf("0x10: %x\n", 0x10); // 16진법 그대로 표현 10

	return 0;
}