#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
// typedef
// 기존 자료형을 새로운 이름을 부여하여
// 쉽게 그 타입을 사용하도록 해
// 생산성을 증대시킬 수 있다.
// 유지보수성 증가, 가독성 향상 등의 효과가 있다.
typedef struct {
	char name[50];
	int age;
} Person;

typedef struct {
	char name[50];
} Student;

// 포인터 선언 또한 쉽게 읽을 수 있도록 할 수 있다.
typedef char* String;
typedef int* IntPtr;


int main() 
{
	
	
	Person p = {
		.name = "홍길동",
		.age = 30
	};
	printf("%s\n", p.name);

	// 새로운 정수형 포인터 타입으로 값을 선언 및 초기화
	IntPtr ip = &p.age;
	printf("홍길동 나이: %d\n", *ip);

	Student st = {
		"고길동"
	};
	printf("%s\n", st.name);
	
	String name = "이순신";

	

	return 0;
}