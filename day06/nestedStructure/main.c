#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

struct Scores {
	int math;
	int kor;
	int eng;
};

struct Student {
	char name[50];
	int age;
	struct Scores score;
};


int main() 
{
	// 사용할 구조체 미리 선언
	struct Student kim, lee;
	
	struct Student hong = {
		.name = "홍길동",
		.age = 22,
		.score = {
			.math = 80,
			.kor = 75,
			.eng = 85
		}
	};

	// 내부 구조체의 값에 접근
	printf("math: %d\n", hong.score.math);

	return 0;
}