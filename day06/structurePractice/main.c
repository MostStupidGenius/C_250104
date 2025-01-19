#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <string.h>

struct Person {
	char name[50];
	int age;
	float height;
};

// 구조체를 생성하는 걸 도와주는 함수
struct Person createPerson(char *name, int age, float height) {
	struct Person p;
	strcpy(p.name, name);
	p.age = age;
	p.height = height;
	return p;
}



int main() 
{
	// 구조체
	// 서로 관련 있는 데이터를 하나로 묶어 관리하도록 하기 위해
	// 묶는 단위

	// 구조체가 없는 경우
	// "홍길동"이라는 한명의 사람을 정의하려면
	// 관련 정보를 모두 나열하여 선언해야 한다.
	// 이때 이 변수들의 이름을 규칙성있게 지을 수는 있지만
	// 선언 자체는 따로 되어 있기 때문에
	// 시스템적으로 관련성을 보여줄 수가 없다.
	char hongName[50] = "홍길동";
	int hongAge = 30;
	float h0ngHeight = 180.3;
	
	// 구조체를 사용하는 경우
	struct Person hong;
	//hong.name = "홍길동";// 문자열은 직접 할당하는 방식은 쓸 수 없다.
	// strcpy()함수로 값을 복사하여 대입해야 한다.
	strcpy(hong.name, "홍길동");
	hong.age = 30;
	hong.height = 180.3;

	//struct Person people[100];
	struct Person go = createPerson("고길동", 33, 175.3);
	printf("이름: %s\n나이: %d\n키: %f\n", go.name, go.age, go.height);

	// positional 방식으로 멤버 변수의 값을 전달하여 구조체를 만드는 방식
	// 구조체를 선언할 때 만들었던 변수의 순서대로 값을 전달해야 한다.
	struct Person dangmu = {"홍당무", 24, 172.3};
	printf("이름: %s\n나이: %d\n키: %f\n", dangmu.name, dangmu.age, dangmu.height);
	
	// 멤버 변수명에 정확히 값을 집어넣는 방식
	// 순서는 중요하지 않다.
	struct Person sunsin = {
		.age = 34,
		.name = "이순신",
		.height = 182.3
	};
	printf("이름: %s\n나이: %d\n키: %f\n", sunsin.name, sunsin.age, sunsin.height);

	struct Person* hongPtr = &hong;
	hongPtr->age = 20;
	printf("홍길동 나이: %d\n", hong.age); // 20

	return 0;
}