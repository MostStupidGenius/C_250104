#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
// typedef
// ���� �ڷ����� ���ο� �̸��� �ο��Ͽ�
// ���� �� Ÿ���� ����ϵ��� ��
// ���꼺�� �����ų �� �ִ�.
// ���������� ����, ������ ��� ���� ȿ���� �ִ�.
typedef struct {
	char name[50];
	int age;
} Person;

typedef struct {
	char name[50];
} Student;

// ������ ���� ���� ���� ���� �� �ֵ��� �� �� �ִ�.
typedef char* String;
typedef int* IntPtr;


int main() 
{
	
	
	Person p = {
		.name = "ȫ�浿",
		.age = 30
	};
	printf("%s\n", p.name);

	// ���ο� ������ ������ Ÿ������ ���� ���� �� �ʱ�ȭ
	IntPtr ip = &p.age;
	printf("ȫ�浿 ����: %d\n", *ip);

	Student st = {
		"��浿"
	};
	printf("%s\n", st.name);
	
	String name = "�̼���";

	

	return 0;
}