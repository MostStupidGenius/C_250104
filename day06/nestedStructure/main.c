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
	// ����� ����ü �̸� ����
	struct Student kim, lee;
	
	struct Student hong = {
		.name = "ȫ�浿",
		.age = 22,
		.score = {
			.math = 80,
			.kor = 75,
			.eng = 85
		}
	};

	// ���� ����ü�� ���� ����
	printf("math: %d\n", hong.score.math);

	return 0;
}